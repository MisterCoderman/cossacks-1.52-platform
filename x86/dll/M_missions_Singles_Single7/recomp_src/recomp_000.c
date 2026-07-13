#include "recomp.h"

/* FUN_10001000 @ 0x11b71000 (20 bytes, 6 insns) */
void f_11b71000(void) {
  FTRACE(0x11b71000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b71000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b71004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b71005 jne 0x11b7100c */
  if (!C.zf) goto L_11b7100c;
  /* 11b71007 call 0x11b71020 */
  push32(0x11b7100cu); f_11b71020();
L_11b7100c:;
  /* 11b7100c mov eax, 1 */
  EAX = (0x1u);
  /* 11b71011 ret 0xc */
  ESPCHK(0x11b71000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11b71020 (3283 bytes, 873 insns) */
void f_11b71020(void) {
  FTRACE(0x11b71020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b71020 push ebx */
  push32((uint32_t)(EBX));
  /* 11b71021 push ebp */
  push32((uint32_t)(EBP));
  /* 11b71022 push esi */
  push32((uint32_t)(ESI));
  /* 11b71023 mov esi, dword ptr [0x11b7b18c] */
  ESI = (r32((uint32_t)(0x11b7b18c)));
  /* 11b71029 push edi */
  push32((uint32_t)(EDI));
  /* 11b7102a push 0x11b7da44 */
  push32((uint32_t)(0x11b7da44u));
  /* 11b7102f push 0x11b810b0 */
  push32((uint32_t)(0x11b810b0u));
  /* 11b71034 call esi */
  call_ind((uint32_t)(ESI), 0x11b71036u);
  /* 11b71036 push 0x11b7da38 */
  push32((uint32_t)(0x11b7da38u));
  /* 11b7103b push 0x11b80f20 */
  push32((uint32_t)(0x11b80f20u));
  /* 11b71040 call esi */
  call_ind((uint32_t)(ESI), 0x11b71042u);
  /* 11b71042 push 0x11b7da2c */
  push32((uint32_t)(0x11b7da2cu));
  /* 11b71047 push 0x11b80f30 */
  push32((uint32_t)(0x11b80f30u));
  /* 11b7104c call esi */
  call_ind((uint32_t)(ESI), 0x11b7104eu);
  /* 11b7104e push 0x11b7da20 */
  push32((uint32_t)(0x11b7da20u));
  /* 11b71053 push 0x11b80f38 */
  push32((uint32_t)(0x11b80f38u));
  /* 11b71058 call esi */
  call_ind((uint32_t)(ESI), 0x11b7105au);
  /* 11b7105a push 0x11b7da14 */
  push32((uint32_t)(0x11b7da14u));
  /* 11b7105f push 0x11b80f48 */
  push32((uint32_t)(0x11b80f48u));
  /* 11b71064 call esi */
  call_ind((uint32_t)(ESI), 0x11b71066u);
  /* 11b71066 push 0x11b7da08 */
  push32((uint32_t)(0x11b7da08u));
  /* 11b7106b push 0x11b81220 */
  push32((uint32_t)(0x11b81220u));
  /* 11b71070 call esi */
  call_ind((uint32_t)(ESI), 0x11b71072u);
  /* 11b71072 push 0x11b7da00 */
  push32((uint32_t)(0x11b7da00u));
  /* 11b71077 push 0x11b80f00 */
  push32((uint32_t)(0x11b80f00u));
  /* 11b7107c call esi */
  call_ind((uint32_t)(ESI), 0x11b7107eu);
  /* 11b7107e push 0x11b7d9f8 */
  push32((uint32_t)(0x11b7d9f8u));
  /* 11b71083 push 0x11b80db0 */
  push32((uint32_t)(0x11b80db0u));
  /* 11b71088 call esi */
  call_ind((uint32_t)(ESI), 0x11b7108au);
  /* 11b7108a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7108d push 0x11b7d9ec */
  push32((uint32_t)(0x11b7d9ecu));
  /* 11b71092 push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b71097 call esi */
  call_ind((uint32_t)(ESI), 0x11b71099u);
  /* 11b71099 push 0x11b7d9e0 */
  push32((uint32_t)(0x11b7d9e0u));
  /* 11b7109e push 0x11b80e20 */
  push32((uint32_t)(0x11b80e20u));
  /* 11b710a3 call esi */
  call_ind((uint32_t)(ESI), 0x11b710a5u);
  /* 11b710a5 push 0x11b7d9d4 */
  push32((uint32_t)(0x11b7d9d4u));
  /* 11b710aa push 0x11b80e18 */
  push32((uint32_t)(0x11b80e18u));
  /* 11b710af call esi */
  call_ind((uint32_t)(ESI), 0x11b710b1u);
  /* 11b710b1 push 0x11b7d9c4 */
  push32((uint32_t)(0x11b7d9c4u));
  /* 11b710b6 push 0x11b80bc0 */
  push32((uint32_t)(0x11b80bc0u));
  /* 11b710bb call esi */
  call_ind((uint32_t)(ESI), 0x11b710bdu);
  /* 11b710bd push 0x11b7d9b4 */
  push32((uint32_t)(0x11b7d9b4u));
  /* 11b710c2 push 0x11b81120 */
  push32((uint32_t)(0x11b81120u));
  /* 11b710c7 call esi */
  call_ind((uint32_t)(ESI), 0x11b710c9u);
  /* 11b710c9 push 0x11b7d9a4 */
  push32((uint32_t)(0x11b7d9a4u));
  /* 11b710ce push 0x11b80ff0 */
  push32((uint32_t)(0x11b80ff0u));
  /* 11b710d3 call esi */
  call_ind((uint32_t)(ESI), 0x11b710d5u);
  /* 11b710d5 push 0x11b7d994 */
  push32((uint32_t)(0x11b7d994u));
  /* 11b710da push 0x11b811c8 */
  push32((uint32_t)(0x11b811c8u));
  /* 11b710df call esi */
  call_ind((uint32_t)(ESI), 0x11b710e1u);
  /* 11b710e1 push 0x11b7d984 */
  push32((uint32_t)(0x11b7d984u));
  /* 11b710e6 push 0x11b811d0 */
  push32((uint32_t)(0x11b811d0u));
  /* 11b710eb call esi */
  call_ind((uint32_t)(ESI), 0x11b710edu);
  /* 11b710ed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b710f0 push 0x11b7d978 */
  push32((uint32_t)(0x11b7d978u));
  /* 11b710f5 push 0x11b81068 */
  push32((uint32_t)(0x11b81068u));
  /* 11b710fa call esi */
  call_ind((uint32_t)(ESI), 0x11b710fcu);
  /* 11b710fc push 0x11b7d968 */
  push32((uint32_t)(0x11b7d968u));
  /* 11b71101 push 0x11b80c08 */
  push32((uint32_t)(0x11b80c08u));
  /* 11b71106 call esi */
  call_ind((uint32_t)(ESI), 0x11b71108u);
  /* 11b71108 push 0x11b7d95c */
  push32((uint32_t)(0x11b7d95cu));
  /* 11b7110d push 0x11b80c40 */
  push32((uint32_t)(0x11b80c40u));
  /* 11b71112 call esi */
  call_ind((uint32_t)(ESI), 0x11b71114u);
  /* 11b71114 push 0x11b7d950 */
  push32((uint32_t)(0x11b7d950u));
  /* 11b71119 push 0x11b80e28 */
  push32((uint32_t)(0x11b80e28u));
  /* 11b7111e call esi */
  call_ind((uint32_t)(ESI), 0x11b71120u);
  /* 11b71120 push 0x11b7d944 */
  push32((uint32_t)(0x11b7d944u));
  /* 11b71125 push 0x11b811b8 */
  push32((uint32_t)(0x11b811b8u));
  /* 11b7112a call esi */
  call_ind((uint32_t)(ESI), 0x11b7112cu);
  /* 11b7112c push 0x11b7d938 */
  push32((uint32_t)(0x11b7d938u));
  /* 11b71131 push 0x11b80d48 */
  push32((uint32_t)(0x11b80d48u));
  /* 11b71136 call esi */
  call_ind((uint32_t)(ESI), 0x11b71138u);
  /* 11b71138 push 0x11b7d930 */
  push32((uint32_t)(0x11b7d930u));
  /* 11b7113d push 0x11b810d0 */
  push32((uint32_t)(0x11b810d0u));
  /* 11b71142 call esi */
  call_ind((uint32_t)(ESI), 0x11b71144u);
  /* 11b71144 push 0x11b7d920 */
  push32((uint32_t)(0x11b7d920u));
  /* 11b71149 push 0x11b81128 */
  push32((uint32_t)(0x11b81128u));
  /* 11b7114e call esi */
  call_ind((uint32_t)(ESI), 0x11b71150u);
  /* 11b71150 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71153 push 0x11b7d914 */
  push32((uint32_t)(0x11b7d914u));
  /* 11b71158 push 0x11b80bf8 */
  push32((uint32_t)(0x11b80bf8u));
  /* 11b7115d call esi */
  call_ind((uint32_t)(ESI), 0x11b7115fu);
  /* 11b7115f push 0x11b7d904 */
  push32((uint32_t)(0x11b7d904u));
  /* 11b71164 push 0x11b81100 */
  push32((uint32_t)(0x11b81100u));
  /* 11b71169 call esi */
  call_ind((uint32_t)(ESI), 0x11b7116bu);
  /* 11b7116b push 0x11b7d8f8 */
  push32((uint32_t)(0x11b7d8f8u));
  /* 11b71170 push 0x11b80bc8 */
  push32((uint32_t)(0x11b80bc8u));
  /* 11b71175 call esi */
  call_ind((uint32_t)(ESI), 0x11b71177u);
  /* 11b71177 push 0x11b7d8e8 */
  push32((uint32_t)(0x11b7d8e8u));
  /* 11b7117c push 0x11b81010 */
  push32((uint32_t)(0x11b81010u));
  /* 11b71181 call esi */
  call_ind((uint32_t)(ESI), 0x11b71183u);
  /* 11b71183 push 0x11b7d8e0 */
  push32((uint32_t)(0x11b7d8e0u));
  /* 11b71188 push 0x11b80c38 */
  push32((uint32_t)(0x11b80c38u));
  /* 11b7118d call esi */
  call_ind((uint32_t)(ESI), 0x11b7118fu);
  /* 11b7118f push 0x11b7d8d8 */
  push32((uint32_t)(0x11b7d8d8u));
  /* 11b71194 push 0x11b80c48 */
  push32((uint32_t)(0x11b80c48u));
  /* 11b71199 call esi */
  call_ind((uint32_t)(ESI), 0x11b7119bu);
  /* 11b7119b push 0x11b7d8cc */
  push32((uint32_t)(0x11b7d8ccu));
  /* 11b711a0 push 0x11b80b58 */
  push32((uint32_t)(0x11b80b58u));
  /* 11b711a5 call esi */
  call_ind((uint32_t)(ESI), 0x11b711a7u);
  /* 11b711a7 push 0x11b7d8c4 */
  push32((uint32_t)(0x11b7d8c4u));
  /* 11b711ac push 0x11b80dc8 */
  push32((uint32_t)(0x11b80dc8u));
  /* 11b711b1 call esi */
  call_ind((uint32_t)(ESI), 0x11b711b3u);
  /* 11b711b3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b711b6 push 0x11b7d8bc */
  push32((uint32_t)(0x11b7d8bcu));
  /* 11b711bb push 0x11b80dd8 */
  push32((uint32_t)(0x11b80dd8u));
  /* 11b711c0 call esi */
  call_ind((uint32_t)(ESI), 0x11b711c2u);
  /* 11b711c2 push 0x11b7d8b0 */
  push32((uint32_t)(0x11b7d8b0u));
  /* 11b711c7 push 0x11b80bd8 */
  push32((uint32_t)(0x11b80bd8u));
  /* 11b711cc call esi */
  call_ind((uint32_t)(ESI), 0x11b711ceu);
  /* 11b711ce push 0x11b7d8a4 */
  push32((uint32_t)(0x11b7d8a4u));
  /* 11b711d3 push 0x11b80be8 */
  push32((uint32_t)(0x11b80be8u));
  /* 11b711d8 call esi */
  call_ind((uint32_t)(ESI), 0x11b711dau);
  /* 11b711da push 0x11b7d89c */
  push32((uint32_t)(0x11b7d89cu));
  /* 11b711df push 0x11b80f58 */
  push32((uint32_t)(0x11b80f58u));
  /* 11b711e4 call esi */
  call_ind((uint32_t)(ESI), 0x11b711e6u);
  /* 11b711e6 push 0x11b7d894 */
  push32((uint32_t)(0x11b7d894u));
  /* 11b711eb push 0x11b80f78 */
  push32((uint32_t)(0x11b80f78u));
  /* 11b711f0 call esi */
  call_ind((uint32_t)(ESI), 0x11b711f2u);
  /* 11b711f2 push 0x11b7d888 */
  push32((uint32_t)(0x11b7d888u));
  /* 11b711f7 push 0x11b81240 */
  push32((uint32_t)(0x11b81240u));
  /* 11b711fc call esi */
  call_ind((uint32_t)(ESI), 0x11b711feu);
  /* 11b711fe push 0x11b7d880 */
  push32((uint32_t)(0x11b7d880u));
  /* 11b71203 push 0x11b80fd0 */
  push32((uint32_t)(0x11b80fd0u));
  /* 11b71208 call esi */
  call_ind((uint32_t)(ESI), 0x11b7120au);
  /* 11b7120a push 0x11b7d878 */
  push32((uint32_t)(0x11b7d878u));
  /* 11b7120f push 0x11b80fb8 */
  push32((uint32_t)(0x11b80fb8u));
  /* 11b71214 call esi */
  call_ind((uint32_t)(ESI), 0x11b71216u);
  /* 11b71216 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71219 push 0x11b7d870 */
  push32((uint32_t)(0x11b7d870u));
  /* 11b7121e push 0x11b80f80 */
  push32((uint32_t)(0x11b80f80u));
  /* 11b71223 call esi */
  call_ind((uint32_t)(ESI), 0x11b71225u);
  /* 11b71225 push 0x11b7d868 */
  push32((uint32_t)(0x11b7d868u));
  /* 11b7122a push 0x11b81060 */
  push32((uint32_t)(0x11b81060u));
  /* 11b7122f call esi */
  call_ind((uint32_t)(ESI), 0x11b71231u);
  /* 11b71231 push 0x11b7d860 */
  push32((uint32_t)(0x11b7d860u));
  /* 11b71236 push 0x11b81078 */
  push32((uint32_t)(0x11b81078u));
  /* 11b7123b call esi */
  call_ind((uint32_t)(ESI), 0x11b7123du);
  /* 11b7123d push 0x11b7d858 */
  push32((uint32_t)(0x11b7d858u));
  /* 11b71242 push 0x11b810c8 */
  push32((uint32_t)(0x11b810c8u));
  /* 11b71247 call esi */
  call_ind((uint32_t)(ESI), 0x11b71249u);
  /* 11b71249 push 0x11b7d850 */
  push32((uint32_t)(0x11b7d850u));
  /* 11b7124e push 0x11b810a8 */
  push32((uint32_t)(0x11b810a8u));
  /* 11b71253 call esi */
  call_ind((uint32_t)(ESI), 0x11b71255u);
  /* 11b71255 push 0x11b7d840 */
  push32((uint32_t)(0x11b7d840u));
  /* 11b7125a push 0x11b80b70 */
  push32((uint32_t)(0x11b80b70u));
  /* 11b7125f call esi */
  call_ind((uint32_t)(ESI), 0x11b71261u);
  /* 11b71261 push 0x11b7d830 */
  push32((uint32_t)(0x11b7d830u));
  /* 11b71266 push 0x11b80b50 */
  push32((uint32_t)(0x11b80b50u));
  /* 11b7126b call esi */
  call_ind((uint32_t)(ESI), 0x11b7126du);
  /* 11b7126d push 0x11b7d824 */
  push32((uint32_t)(0x11b7d824u));
  /* 11b71272 push 0x11b80b48 */
  push32((uint32_t)(0x11b80b48u));
  /* 11b71277 call esi */
  call_ind((uint32_t)(ESI), 0x11b71279u);
  /* 11b71279 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7127c push 0x11b7d818 */
  push32((uint32_t)(0x11b7d818u));
  /* 11b71281 push 0x11b80fc8 */
  push32((uint32_t)(0x11b80fc8u));
  /* 11b71286 call esi */
  call_ind((uint32_t)(ESI), 0x11b71288u);
  /* 11b71288 push 0x11b7d810 */
  push32((uint32_t)(0x11b7d810u));
  /* 11b7128d push 0x11b81268 */
  push32((uint32_t)(0x11b81268u));
  /* 11b71292 call esi */
  call_ind((uint32_t)(ESI), 0x11b71294u);
  /* 11b71294 push 0x11b7d808 */
  push32((uint32_t)(0x11b7d808u));
  /* 11b71299 push 0x11b81280 */
  push32((uint32_t)(0x11b81280u));
  /* 11b7129e call esi */
  call_ind((uint32_t)(ESI), 0x11b712a0u);
  /* 11b712a0 push 0x11b7d800 */
  push32((uint32_t)(0x11b7d800u));
  /* 11b712a5 push 0x11b81270 */
  push32((uint32_t)(0x11b81270u));
  /* 11b712aa call esi */
  call_ind((uint32_t)(ESI), 0x11b712acu);
  /* 11b712ac push 0x11b7d7f8 */
  push32((uint32_t)(0x11b7d7f8u));
  /* 11b712b1 push 0x11b81290 */
  push32((uint32_t)(0x11b81290u));
  /* 11b712b6 call esi */
  call_ind((uint32_t)(ESI), 0x11b712b8u);
  /* 11b712b8 push 0x11b7d7ec */
  push32((uint32_t)(0x11b7d7ecu));
  /* 11b712bd push 0x11b81070 */
  push32((uint32_t)(0x11b81070u));
  /* 11b712c2 call esi */
  call_ind((uint32_t)(ESI), 0x11b712c4u);
  /* 11b712c4 push 0x11b7d7e4 */
  push32((uint32_t)(0x11b7d7e4u));
  /* 11b712c9 push 0x11b80d88 */
  push32((uint32_t)(0x11b80d88u));
  /* 11b712ce call esi */
  call_ind((uint32_t)(ESI), 0x11b712d0u);
  /* 11b712d0 push 0x11b7d7d8 */
  push32((uint32_t)(0x11b7d7d8u));
  /* 11b712d5 push 0x11b80e80 */
  push32((uint32_t)(0x11b80e80u));
  /* 11b712da call esi */
  call_ind((uint32_t)(ESI), 0x11b712dcu);
  /* 11b712dc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b712df push 0x11b7d7c8 */
  push32((uint32_t)(0x11b7d7c8u));
  /* 11b712e4 push 0x11b80ed0 */
  push32((uint32_t)(0x11b80ed0u));
  /* 11b712e9 call esi */
  call_ind((uint32_t)(ESI), 0x11b712ebu);
  /* 11b712eb push 0x11b7d7b8 */
  push32((uint32_t)(0x11b7d7b8u));
  /* 11b712f0 push 0x11b80df8 */
  push32((uint32_t)(0x11b80df8u));
  /* 11b712f5 call esi */
  call_ind((uint32_t)(ESI), 0x11b712f7u);
  /* 11b712f7 push 0x11b7d7b0 */
  push32((uint32_t)(0x11b7d7b0u));
  /* 11b712fc push 0x11b811a0 */
  push32((uint32_t)(0x11b811a0u));
  /* 11b71301 call esi */
  call_ind((uint32_t)(ESI), 0x11b71303u);
  /* 11b71303 push 0x11b7d7a8 */
  push32((uint32_t)(0x11b7d7a8u));
  /* 11b71308 push 0x11b81198 */
  push32((uint32_t)(0x11b81198u));
  /* 11b7130d call esi */
  call_ind((uint32_t)(ESI), 0x11b7130fu);
  /* 11b7130f push 0x11b7d79c */
  push32((uint32_t)(0x11b7d79cu));
  /* 11b71314 push 0x11b810f0 */
  push32((uint32_t)(0x11b810f0u));
  /* 11b71319 call esi */
  call_ind((uint32_t)(ESI), 0x11b7131bu);
  /* 11b7131b push 0x11b7d790 */
  push32((uint32_t)(0x11b7d790u));
  /* 11b71320 push 0x11b81130 */
  push32((uint32_t)(0x11b81130u));
  /* 11b71325 call esi */
  call_ind((uint32_t)(ESI), 0x11b71327u);
  /* 11b71327 push 0x11b7d784 */
  push32((uint32_t)(0x11b7d784u));
  /* 11b7132c push 0x11b80bd0 */
  push32((uint32_t)(0x11b80bd0u));
  /* 11b71331 call esi */
  call_ind((uint32_t)(ESI), 0x11b71333u);
  /* 11b71333 push 0x11b7d778 */
  push32((uint32_t)(0x11b7d778u));
  /* 11b71338 push 0x11b81230 */
  push32((uint32_t)(0x11b81230u));
  /* 11b7133d call esi */
  call_ind((uint32_t)(ESI), 0x11b7133fu);
  /* 11b7133f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71342 push 0x11b7d76c */
  push32((uint32_t)(0x11b7d76cu));
  /* 11b71347 push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b7134c call esi */
  call_ind((uint32_t)(ESI), 0x11b7134eu);
  /* 11b7134e push 0x11b7d75c */
  push32((uint32_t)(0x11b7d75cu));
  /* 11b71353 push 0x11b81260 */
  push32((uint32_t)(0x11b81260u));
  /* 11b71358 call esi */
  call_ind((uint32_t)(ESI), 0x11b7135au);
  /* 11b7135a push 0x11b7d750 */
  push32((uint32_t)(0x11b7d750u));
  /* 11b7135f push 0x11b80f90 */
  push32((uint32_t)(0x11b80f90u));
  /* 11b71364 call esi */
  call_ind((uint32_t)(ESI), 0x11b71366u);
  /* 11b71366 push 0x11b7d744 */
  push32((uint32_t)(0x11b7d744u));
  /* 11b7136b push 0x11b80fe0 */
  push32((uint32_t)(0x11b80fe0u));
  /* 11b71370 call esi */
  call_ind((uint32_t)(ESI), 0x11b71372u);
  /* 11b71372 push 0x11b7d738 */
  push32((uint32_t)(0x11b7d738u));
  /* 11b71377 push 0x11b80fe8 */
  push32((uint32_t)(0x11b80fe8u));
  /* 11b7137c call esi */
  call_ind((uint32_t)(ESI), 0x11b7137eu);
  /* 11b7137e push 0x11b7d72c */
  push32((uint32_t)(0x11b7d72cu));
  /* 11b71383 push 0x11b80cf0 */
  push32((uint32_t)(0x11b80cf0u));
  /* 11b71388 call esi */
  call_ind((uint32_t)(ESI), 0x11b7138au);
  /* 11b7138a push 0x11b7d720 */
  push32((uint32_t)(0x11b7d720u));
  /* 11b7138f push 0x11b80ce8 */
  push32((uint32_t)(0x11b80ce8u));
  /* 11b71394 call esi */
  call_ind((uint32_t)(ESI), 0x11b71396u);
  /* 11b71396 push 0x11b7d714 */
  push32((uint32_t)(0x11b7d714u));
  /* 11b7139b push 0x11b80d98 */
  push32((uint32_t)(0x11b80d98u));
  /* 11b713a0 call esi */
  call_ind((uint32_t)(ESI), 0x11b713a2u);
  /* 11b713a2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b713a5 push 0x11b7d708 */
  push32((uint32_t)(0x11b7d708u));
  /* 11b713aa push 0x11b80dd0 */
  push32((uint32_t)(0x11b80dd0u));
  /* 11b713af call esi */
  call_ind((uint32_t)(ESI), 0x11b713b1u);
  /* 11b713b1 push 0x11b7d700 */
  push32((uint32_t)(0x11b7d700u));
  /* 11b713b6 push 0x11b80d30 */
  push32((uint32_t)(0x11b80d30u));
  /* 11b713bb call esi */
  call_ind((uint32_t)(ESI), 0x11b713bdu);
  /* 11b713bd push 0x11b7d6f8 */
  push32((uint32_t)(0x11b7d6f8u));
  /* 11b713c2 push 0x11b80cd8 */
  push32((uint32_t)(0x11b80cd8u));
  /* 11b713c7 call esi */
  call_ind((uint32_t)(ESI), 0x11b713c9u);
  /* 11b713c9 push 0x11b7d6e8 */
  push32((uint32_t)(0x11b7d6e8u));
  /* 11b713ce push 0x11b80fd8 */
  push32((uint32_t)(0x11b80fd8u));
  /* 11b713d3 call esi */
  call_ind((uint32_t)(ESI), 0x11b713d5u);
  /* 11b713d5 push 0x11b7d6d8 */
  push32((uint32_t)(0x11b7d6d8u));
  /* 11b713da push 0x11b810a0 */
  push32((uint32_t)(0x11b810a0u));
  /* 11b713df call esi */
  call_ind((uint32_t)(ESI), 0x11b713e1u);
  /* 11b713e1 push 0x11b7d6d0 */
  push32((uint32_t)(0x11b7d6d0u));
  /* 11b713e6 push 0x11b80ee8 */
  push32((uint32_t)(0x11b80ee8u));
  /* 11b713eb call esi */
  call_ind((uint32_t)(ESI), 0x11b713edu);
  /* 11b713ed push 0x11b7d6c8 */
  push32((uint32_t)(0x11b7d6c8u));
  /* 11b713f2 push 0x11b80d80 */
  push32((uint32_t)(0x11b80d80u));
  /* 11b713f7 call esi */
  call_ind((uint32_t)(ESI), 0x11b713f9u);
  /* 11b713f9 mov edi, dword ptr [0x11b7b184] */
  EDI = (r32((uint32_t)(0x11b7b184)));
  /* 11b713ff push 0x11b7d6bc */
  push32((uint32_t)(0x11b7d6bcu));
  /* 11b71404 push 0x11b81178 */
  push32((uint32_t)(0x11b81178u));
  /* 11b71409 call edi */
  call_ind((uint32_t)(EDI), 0x11b7140bu);
  /* 11b7140b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7140e push 0x11b7d6b0 */
  push32((uint32_t)(0x11b7d6b0u));
  /* 11b71413 push 0x11b81170 */
  push32((uint32_t)(0x11b81170u));
  /* 11b71418 call edi */
  call_ind((uint32_t)(EDI), 0x11b7141au);
  /* 11b7141a push 0x11b7d6a4 */
  push32((uint32_t)(0x11b7d6a4u));
  /* 11b7141f push 0x11b81188 */
  push32((uint32_t)(0x11b81188u));
  /* 11b71424 call edi */
  call_ind((uint32_t)(EDI), 0x11b71426u);
  /* 11b71426 push 0x11b7d698 */
  push32((uint32_t)(0x11b7d698u));
  /* 11b7142b push 0x11b81180 */
  push32((uint32_t)(0x11b81180u));
  /* 11b71430 call edi */
  call_ind((uint32_t)(EDI), 0x11b71432u);
  /* 11b71432 push 0x11b7d68c */
  push32((uint32_t)(0x11b7d68cu));
  /* 11b71437 push 0x11b80d28 */
  push32((uint32_t)(0x11b80d28u));
  /* 11b7143c call edi */
  call_ind((uint32_t)(EDI), 0x11b7143eu);
  /* 11b7143e push 0x11b7d680 */
  push32((uint32_t)(0x11b7d680u));
  /* 11b71443 push 0x11b80d20 */
  push32((uint32_t)(0x11b80d20u));
  /* 11b71448 call edi */
  call_ind((uint32_t)(EDI), 0x11b7144au);
  /* 11b7144a push 0x11b7d674 */
  push32((uint32_t)(0x11b7d674u));
  /* 11b7144f push 0x11b80d10 */
  push32((uint32_t)(0x11b80d10u));
  /* 11b71454 call edi */
  call_ind((uint32_t)(EDI), 0x11b71456u);
  /* 11b71456 push 0x11b7d668 */
  push32((uint32_t)(0x11b7d668u));
  /* 11b7145b push 0x11b80cf8 */
  push32((uint32_t)(0x11b80cf8u));
  /* 11b71460 call edi */
  call_ind((uint32_t)(EDI), 0x11b71462u);
  /* 11b71462 push 0x11b7d660 */
  push32((uint32_t)(0x11b7d660u));
  /* 11b71467 push 0x11b80f50 */
  push32((uint32_t)(0x11b80f50u));
  /* 11b7146c call edi */
  call_ind((uint32_t)(EDI), 0x11b7146eu);
  /* 11b7146e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71471 push 0x11b7d658 */
  push32((uint32_t)(0x11b7d658u));
  /* 11b71476 push 0x11b80d08 */
  push32((uint32_t)(0x11b80d08u));
  /* 11b7147b call edi */
  call_ind((uint32_t)(EDI), 0x11b7147du);
  /* 11b7147d push 0x11b7d650 */
  push32((uint32_t)(0x11b7d650u));
  /* 11b71482 push 0x11b81048 */
  push32((uint32_t)(0x11b81048u));
  /* 11b71487 call edi */
  call_ind((uint32_t)(EDI), 0x11b71489u);
  /* 11b71489 push 0x11b7d648 */
  push32((uint32_t)(0x11b7d648u));
  /* 11b7148e push 0x11b80b80 */
  push32((uint32_t)(0x11b80b80u));
  /* 11b71493 call edi */
  call_ind((uint32_t)(EDI), 0x11b71495u);
  /* 11b71495 push 0x11b7d640 */
  push32((uint32_t)(0x11b7d640u));
  /* 11b7149a push 0x11b80de8 */
  push32((uint32_t)(0x11b80de8u));
  /* 11b7149f call edi */
  call_ind((uint32_t)(EDI), 0x11b714a1u);
  /* 11b714a1 push 0x11b7d630 */
  push32((uint32_t)(0x11b7d630u));
  /* 11b714a6 push 0x11b80c30 */
  push32((uint32_t)(0x11b80c30u));
  /* 11b714ab call edi */
  call_ind((uint32_t)(EDI), 0x11b714adu);
  /* 11b714ad push 0x11b7d620 */
  push32((uint32_t)(0x11b7d620u));
  /* 11b714b2 push 0x11b80c20 */
  push32((uint32_t)(0x11b80c20u));
  /* 11b714b7 call edi */
  call_ind((uint32_t)(EDI), 0x11b714b9u);
  /* 11b714b9 push 0x11b7d610 */
  push32((uint32_t)(0x11b7d610u));
  /* 11b714be push 0x11b811d8 */
  push32((uint32_t)(0x11b811d8u));
  /* 11b714c3 call edi */
  call_ind((uint32_t)(EDI), 0x11b714c5u);
  /* 11b714c5 push 0x11b7d600 */
  push32((uint32_t)(0x11b7d600u));
  /* 11b714ca push 0x11b811e0 */
  push32((uint32_t)(0x11b811e0u));
  /* 11b714cf call edi */
  call_ind((uint32_t)(EDI), 0x11b714d1u);
  /* 11b714d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b714d4 push 0x11b7d5f0 */
  push32((uint32_t)(0x11b7d5f0u));
  /* 11b714d9 push 0x11b811e8 */
  push32((uint32_t)(0x11b811e8u));
  /* 11b714de call edi */
  call_ind((uint32_t)(EDI), 0x11b714e0u);
  /* 11b714e0 push 0x11b7d5e4 */
  push32((uint32_t)(0x11b7d5e4u));
  /* 11b714e5 push 0x11b80eb0 */
  push32((uint32_t)(0x11b80eb0u));
  /* 11b714ea call edi */
  call_ind((uint32_t)(EDI), 0x11b714ecu);
  /* 11b714ec push 0x11b7d5d8 */
  push32((uint32_t)(0x11b7d5d8u));
  /* 11b714f1 push 0x11b80e38 */
  push32((uint32_t)(0x11b80e38u));
  /* 11b714f6 call edi */
  call_ind((uint32_t)(EDI), 0x11b714f8u);
  /* 11b714f8 push 0x11b7d5cc */
  push32((uint32_t)(0x11b7d5ccu));
  /* 11b714fd push 0x11b80e30 */
  push32((uint32_t)(0x11b80e30u));
  /* 11b71502 call edi */
  call_ind((uint32_t)(EDI), 0x11b71504u);
  /* 11b71504 push 0x11b7d5c0 */
  push32((uint32_t)(0x11b7d5c0u));
  /* 11b71509 push 0x11b80eb8 */
  push32((uint32_t)(0x11b80eb8u));
  /* 11b7150e call edi */
  call_ind((uint32_t)(EDI), 0x11b71510u);
  /* 11b71510 push 0x11b7d5b4 */
  push32((uint32_t)(0x11b7d5b4u));
  /* 11b71515 push 0x11b81278 */
  push32((uint32_t)(0x11b81278u));
  /* 11b7151a call edi */
  call_ind((uint32_t)(EDI), 0x11b7151cu);
  /* 11b7151c push 0x11b7d5ac */
  push32((uint32_t)(0x11b7d5acu));
  /* 11b71521 push 0x11b80e00 */
  push32((uint32_t)(0x11b80e00u));
  /* 11b71526 call edi */
  call_ind((uint32_t)(EDI), 0x11b71528u);
  /* 11b71528 push 0x11b7d5a4 */
  push32((uint32_t)(0x11b7d5a4u));
  /* 11b7152d push 0x11b80e08 */
  push32((uint32_t)(0x11b80e08u));
  /* 11b71532 call edi */
  call_ind((uint32_t)(EDI), 0x11b71534u);
  /* 11b71534 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71537 push 0x11b7d598 */
  push32((uint32_t)(0x11b7d598u));
  /* 11b7153c push 0x11b81020 */
  push32((uint32_t)(0x11b81020u));
  /* 11b71541 call edi */
  call_ind((uint32_t)(EDI), 0x11b71543u);
  /* 11b71543 push 0x11b7d58c */
  push32((uint32_t)(0x11b7d58cu));
  /* 11b71548 push 0x11b80e78 */
  push32((uint32_t)(0x11b80e78u));
  /* 11b7154d call edi */
  call_ind((uint32_t)(EDI), 0x11b7154fu);
  /* 11b7154f push 0x11b7d584 */
  push32((uint32_t)(0x11b7d584u));
  /* 11b71554 push 0x11b811f0 */
  push32((uint32_t)(0x11b811f0u));
  /* 11b71559 call edi */
  call_ind((uint32_t)(EDI), 0x11b7155bu);
  /* 11b7155b push 0x11b7d578 */
  push32((uint32_t)(0x11b7d578u));
  /* 11b71560 push 0x11b81228 */
  push32((uint32_t)(0x11b81228u));
  /* 11b71565 call edi */
  call_ind((uint32_t)(EDI), 0x11b71567u);
  /* 11b71567 push 0x11b7d570 */
  push32((uint32_t)(0x11b7d570u));
  /* 11b7156c push 0x11b81288 */
  push32((uint32_t)(0x11b81288u));
  /* 11b71571 call edi */
  call_ind((uint32_t)(EDI), 0x11b71573u);
  /* 11b71573 push 0x11b7d568 */
  push32((uint32_t)(0x11b7d568u));
  /* 11b71578 push 0x11b81148 */
  push32((uint32_t)(0x11b81148u));
  /* 11b7157d call edi */
  call_ind((uint32_t)(EDI), 0x11b7157fu);
  /* 11b7157f push 0x11b7d55c */
  push32((uint32_t)(0x11b7d55cu));
  /* 11b71584 push 0x11b810c0 */
  push32((uint32_t)(0x11b810c0u));
  /* 11b71589 call edi */
  call_ind((uint32_t)(EDI), 0x11b7158bu);
  /* 11b7158b push 0x11b7d554 */
  push32((uint32_t)(0x11b7d554u));
  /* 11b71590 push 0x11b80e58 */
  push32((uint32_t)(0x11b80e58u));
  /* 11b71595 call edi */
  call_ind((uint32_t)(EDI), 0x11b71597u);
  /* 11b71597 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7159a push 0x11b7d54c */
  push32((uint32_t)(0x11b7d54cu));
  /* 11b7159f push 0x11b80e50 */
  push32((uint32_t)(0x11b80e50u));
  /* 11b715a4 call edi */
  call_ind((uint32_t)(EDI), 0x11b715a6u);
  /* 11b715a6 push 0x11b7d544 */
  push32((uint32_t)(0x11b7d544u));
  /* 11b715ab push 0x11b80e70 */
  push32((uint32_t)(0x11b80e70u));
  /* 11b715b0 call edi */
  call_ind((uint32_t)(EDI), 0x11b715b2u);
  /* 11b715b2 push 0x11b7d53c */
  push32((uint32_t)(0x11b7d53cu));
  /* 11b715b7 push 0x11b80e68 */
  push32((uint32_t)(0x11b80e68u));
  /* 11b715bc call edi */
  call_ind((uint32_t)(EDI), 0x11b715beu);
  /* 11b715be push 0x11b7d530 */
  push32((uint32_t)(0x11b7d530u));
  /* 11b715c3 push 0x11b80e88 */
  push32((uint32_t)(0x11b80e88u));
  /* 11b715c8 call edi */
  call_ind((uint32_t)(EDI), 0x11b715cau);
  /* 11b715ca push 0x11b7d524 */
  push32((uint32_t)(0x11b7d524u));
  /* 11b715cf push 0x11b80e98 */
  push32((uint32_t)(0x11b80e98u));
  /* 11b715d4 call edi */
  call_ind((uint32_t)(EDI), 0x11b715d6u);
  /* 11b715d6 push 0x11b7d514 */
  push32((uint32_t)(0x11b7d514u));
  /* 11b715db push 0x11b80d58 */
  push32((uint32_t)(0x11b80d58u));
  /* 11b715e0 call edi */
  call_ind((uint32_t)(EDI), 0x11b715e2u);
  /* 11b715e2 push 0x11b7d504 */
  push32((uint32_t)(0x11b7d504u));
  /* 11b715e7 push 0x11b81298 */
  push32((uint32_t)(0x11b81298u));
  /* 11b715ec call edi */
  call_ind((uint32_t)(EDI), 0x11b715eeu);
  /* 11b715ee push 0x11b7d4f8 */
  push32((uint32_t)(0x11b7d4f8u));
  /* 11b715f3 push 0x11b80e90 */
  push32((uint32_t)(0x11b80e90u));
  /* 11b715f8 call edi */
  call_ind((uint32_t)(EDI), 0x11b715fau);
  /* 11b715fa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b715fd push 0x11b7d4ec */
  push32((uint32_t)(0x11b7d4ecu));
  /* 11b71602 push 0x11b810f8 */
  push32((uint32_t)(0x11b810f8u));
  /* 11b71607 call edi */
  call_ind((uint32_t)(EDI), 0x11b71609u);
  /* 11b71609 push 0x11b7d4e0 */
  push32((uint32_t)(0x11b7d4e0u));
  /* 11b7160e push 0x11b81110 */
  push32((uint32_t)(0x11b81110u));
  /* 11b71613 call edi */
  call_ind((uint32_t)(EDI), 0x11b71615u);
  /* 11b71615 push 0x11b7d4d8 */
  push32((uint32_t)(0x11b7d4d8u));
  /* 11b7161a push 0x11b80be0 */
  push32((uint32_t)(0x11b80be0u));
  /* 11b7161f call edi */
  call_ind((uint32_t)(EDI), 0x11b71621u);
  /* 11b71621 push 0x11b7d4d0 */
  push32((uint32_t)(0x11b7d4d0u));
  /* 11b71626 push 0x11b80c00 */
  push32((uint32_t)(0x11b80c00u));
  /* 11b7162b call edi */
  call_ind((uint32_t)(EDI), 0x11b7162du);
  /* 11b7162d push 0x11b7d4c8 */
  push32((uint32_t)(0x11b7d4c8u));
  /* 11b71632 push 0x11b81038 */
  push32((uint32_t)(0x11b81038u));
  /* 11b71637 call edi */
  call_ind((uint32_t)(EDI), 0x11b71639u);
  /* 11b71639 push 0x11b7d4c0 */
  push32((uint32_t)(0x11b7d4c0u));
  /* 11b7163e push 0x11b80c58 */
  push32((uint32_t)(0x11b80c58u));
  /* 11b71643 call edi */
  call_ind((uint32_t)(EDI), 0x11b71645u);
  /* 11b71645 push 0x11b7d4b4 */
  push32((uint32_t)(0x11b7d4b4u));
  /* 11b7164a push 0x11b80e48 */
  push32((uint32_t)(0x11b80e48u));
  /* 11b7164f call edi */
  call_ind((uint32_t)(EDI), 0x11b71651u);
  /* 11b71651 push 0x11b7d4a8 */
  push32((uint32_t)(0x11b7d4a8u));
  /* 11b71656 push 0x11b81158 */
  push32((uint32_t)(0x11b81158u));
  /* 11b7165b call edi */
  call_ind((uint32_t)(EDI), 0x11b7165du);
  /* 11b7165d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71660 push 0x11b7d49c */
  push32((uint32_t)(0x11b7d49cu));
  /* 11b71665 push 0x11b81258 */
  push32((uint32_t)(0x11b81258u));
  /* 11b7166a call edi */
  call_ind((uint32_t)(EDI), 0x11b7166cu);
  /* 11b7166c push 0x11b7d490 */
  push32((uint32_t)(0x11b7d490u));
  /* 11b71671 push 0x11b80da8 */
  push32((uint32_t)(0x11b80da8u));
  /* 11b71676 call edi */
  call_ind((uint32_t)(EDI), 0x11b71678u);
  /* 11b71678 push 0x11b7d484 */
  push32((uint32_t)(0x11b7d484u));
  /* 11b7167d push 0x11b81108 */
  push32((uint32_t)(0x11b81108u));
  /* 11b71682 call edi */
  call_ind((uint32_t)(EDI), 0x11b71684u);
  /* 11b71684 push 0x11b7d478 */
  push32((uint32_t)(0x11b7d478u));
  /* 11b71689 push 0x11b81118 */
  push32((uint32_t)(0x11b81118u));
  /* 11b7168e call edi */
  call_ind((uint32_t)(EDI), 0x11b71690u);
  /* 11b71690 push 0x11b7d46c */
  push32((uint32_t)(0x11b7d46cu));
  /* 11b71695 push 0x11b80ec0 */
  push32((uint32_t)(0x11b80ec0u));
  /* 11b7169a call edi */
  call_ind((uint32_t)(EDI), 0x11b7169cu);
  /* 11b7169c push 0x11b7d460 */
  push32((uint32_t)(0x11b7d460u));
  /* 11b716a1 push 0x11b81138 */
  push32((uint32_t)(0x11b81138u));
  /* 11b716a6 call edi */
  call_ind((uint32_t)(EDI), 0x11b716a8u);
  /* 11b716a8 push 0x11b7d454 */
  push32((uint32_t)(0x11b7d454u));
  /* 11b716ad push 0x11b81028 */
  push32((uint32_t)(0x11b81028u));
  /* 11b716b2 call edi */
  call_ind((uint32_t)(EDI), 0x11b716b4u);
  /* 11b716b4 push 0x11b7d448 */
  push32((uint32_t)(0x11b7d448u));
  /* 11b716b9 push 0x11b80ff8 */
  push32((uint32_t)(0x11b80ff8u));
  /* 11b716be call edi */
  call_ind((uint32_t)(EDI), 0x11b716c0u);
  /* 11b716c0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b716c3 push 0x11b7d43c */
  push32((uint32_t)(0x11b7d43cu));
  /* 11b716c8 push 0x11b81000 */
  push32((uint32_t)(0x11b81000u));
  /* 11b716cd call edi */
  call_ind((uint32_t)(EDI), 0x11b716cfu);
  /* 11b716cf push 0x11b7d434 */
  push32((uint32_t)(0x11b7d434u));
  /* 11b716d4 push 0x11b81058 */
  push32((uint32_t)(0x11b81058u));
  /* 11b716d9 call edi */
  call_ind((uint32_t)(EDI), 0x11b716dbu);
  /* 11b716db push 0x11b7d42c */
  push32((uint32_t)(0x11b7d42cu));
  /* 11b716e0 push 0x11b81050 */
  push32((uint32_t)(0x11b81050u));
  /* 11b716e5 call edi */
  call_ind((uint32_t)(EDI), 0x11b716e7u);
  /* 11b716e7 push 0x11b7d420 */
  push32((uint32_t)(0x11b7d420u));
  /* 11b716ec push 0x11b811b0 */
  push32((uint32_t)(0x11b811b0u));
  /* 11b716f1 call edi */
  call_ind((uint32_t)(EDI), 0x11b716f3u);
  /* 11b716f3 push 0x11b7d414 */
  push32((uint32_t)(0x11b7d414u));
  /* 11b716f8 push 0x11b811a8 */
  push32((uint32_t)(0x11b811a8u));
  /* 11b716fd call edi */
  call_ind((uint32_t)(EDI), 0x11b716ffu);
  /* 11b716ff push 0x11b7d408 */
  push32((uint32_t)(0x11b7d408u));
  /* 11b71704 push 0x11b811c0 */
  push32((uint32_t)(0x11b811c0u));
  /* 11b71709 call edi */
  call_ind((uint32_t)(EDI), 0x11b7170bu);
  /* 11b7170b push 0x11b7d3fc */
  push32((uint32_t)(0x11b7d3fcu));
  /* 11b71710 push 0x11b80f90 */
  push32((uint32_t)(0x11b80f90u));
  /* 11b71715 call esi */
  call_ind((uint32_t)(ESI), 0x11b71717u);
  /* 11b71717 push 0x11b7d3f0 */
  push32((uint32_t)(0x11b7d3f0u));
  /* 11b7171c push 0x11b80fe0 */
  push32((uint32_t)(0x11b80fe0u));
  /* 11b71721 call esi */
  call_ind((uint32_t)(ESI), 0x11b71723u);
  /* 11b71723 mov esi, dword ptr [0x11b7b194] */
  ESI = (r32((uint32_t)(0x11b7b194)));
  /* 11b71729 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7172c push 0x11b7d3dc */
  push32((uint32_t)(0x11b7d3dcu));
  /* 11b71731 push 0x11b80fc0 */
  push32((uint32_t)(0x11b80fc0u));
  /* 11b71736 call esi */
  call_ind((uint32_t)(ESI), 0x11b71738u);
  /* 11b71738 push 0x11b7d3d0 */
  push32((uint32_t)(0x11b7d3d0u));
  /* 11b7173d push 0x11b80c28 */
  push32((uint32_t)(0x11b80c28u));
  /* 11b71742 call esi */
  call_ind((uint32_t)(ESI), 0x11b71744u);
  /* 11b71744 push 0x11b7d3c4 */
  push32((uint32_t)(0x11b7d3c4u));
  /* 11b71749 push 0x11b81168 */
  push32((uint32_t)(0x11b81168u));
  /* 11b7174e call esi */
  call_ind((uint32_t)(ESI), 0x11b71750u);
  /* 11b71750 push 0x11b7d3b4 */
  push32((uint32_t)(0x11b7d3b4u));
  /* 11b71755 push 0x11b81210 */
  push32((uint32_t)(0x11b81210u));
  /* 11b7175a call esi */
  call_ind((uint32_t)(ESI), 0x11b7175cu);
  /* 11b7175c push 0x11b7d3a4 */
  push32((uint32_t)(0x11b7d3a4u));
  /* 11b71761 push 0x11b80c78 */
  push32((uint32_t)(0x11b80c78u));
  /* 11b71766 call esi */
  call_ind((uint32_t)(ESI), 0x11b71768u);
  /* 11b71768 push 0x11b7d398 */
  push32((uint32_t)(0x11b7d398u));
  /* 11b7176d push 0x11b80db8 */
  push32((uint32_t)(0x11b80db8u));
  /* 11b71772 call esi */
  call_ind((uint32_t)(ESI), 0x11b71774u);
  /* 11b71774 push 0x11b7d38c */
  push32((uint32_t)(0x11b7d38cu));
  /* 11b71779 push 0x11b80d90 */
  push32((uint32_t)(0x11b80d90u));
  /* 11b7177e call esi */
  call_ind((uint32_t)(ESI), 0x11b71780u);
  /* 11b71780 push 0x11b7d378 */
  push32((uint32_t)(0x11b7d378u));
  /* 11b71785 push 0x11b80c18 */
  push32((uint32_t)(0x11b80c18u));
  /* 11b7178a call esi */
  call_ind((uint32_t)(ESI), 0x11b7178cu);
  /* 11b7178c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7178f push 0x11b7d36c */
  push32((uint32_t)(0x11b7d36cu));
  /* 11b71794 push 0x11b81218 */
  push32((uint32_t)(0x11b81218u));
  /* 11b71799 call esi */
  call_ind((uint32_t)(ESI), 0x11b7179bu);
  /* 11b7179b push 0x11b7d35c */
  push32((uint32_t)(0x11b7d35cu));
  /* 11b717a0 push 0x11b80ba8 */
  push32((uint32_t)(0x11b80ba8u));
  /* 11b717a5 call esi */
  call_ind((uint32_t)(ESI), 0x11b717a7u);
  /* 11b717a7 push 0x11b7d348 */
  push32((uint32_t)(0x11b7d348u));
  /* 11b717ac push 0x11b80da0 */
  push32((uint32_t)(0x11b80da0u));
  /* 11b717b1 call esi */
  call_ind((uint32_t)(ESI), 0x11b717b3u);
  /* 11b717b3 push 0x11b7d334 */
  push32((uint32_t)(0x11b7d334u));
  /* 11b717b8 push 0x11b81190 */
  push32((uint32_t)(0x11b81190u));
  /* 11b717bd call esi */
  call_ind((uint32_t)(ESI), 0x11b717bfu);
  /* 11b717bf push 0x11b7d320 */
  push32((uint32_t)(0x11b7d320u));
  /* 11b717c4 push 0x11b80b78 */
  push32((uint32_t)(0x11b80b78u));
  /* 11b717c9 call esi */
  call_ind((uint32_t)(ESI), 0x11b717cbu);
  /* 11b717cb push 0x11b7d30c */
  push32((uint32_t)(0x11b7d30cu));
  /* 11b717d0 push 0x11b80e60 */
  push32((uint32_t)(0x11b80e60u));
  /* 11b717d5 call esi */
  call_ind((uint32_t)(ESI), 0x11b717d7u);
  /* 11b717d7 push 0x11b7d300 */
  push32((uint32_t)(0x11b7d300u));
  /* 11b717dc push 0x11b80b98 */
  push32((uint32_t)(0x11b80b98u));
  /* 11b717e1 call esi */
  call_ind((uint32_t)(ESI), 0x11b717e3u);
  /* 11b717e3 push 0x11b7d2ec */
  push32((uint32_t)(0x11b7d2ecu));
  /* 11b717e8 push 0x11b80ee0 */
  push32((uint32_t)(0x11b80ee0u));
  /* 11b717ed call esi */
  call_ind((uint32_t)(ESI), 0x11b717efu);
  /* 11b717ef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b717f2 push 0x11b7d2d4 */
  push32((uint32_t)(0x11b7d2d4u));
  /* 11b717f7 push 0x11b80ea8 */
  push32((uint32_t)(0x11b80ea8u));
  /* 11b717fc call esi */
  call_ind((uint32_t)(ESI), 0x11b717feu);
  /* 11b717fe push 0x11b7d2c4 */
  push32((uint32_t)(0x11b7d2c4u));
  /* 11b71803 push 0x11b81250 */
  push32((uint32_t)(0x11b81250u));
  /* 11b71808 call esi */
  call_ind((uint32_t)(ESI), 0x11b7180au);
  /* 11b7180a push 0x11b7d2b8 */
  push32((uint32_t)(0x11b7d2b8u));
  /* 11b7180f push 0x11b80d50 */
  push32((uint32_t)(0x11b80d50u));
  /* 11b71814 call esi */
  call_ind((uint32_t)(ESI), 0x11b71816u);
  /* 11b71816 push 0x11b7d2ac */
  push32((uint32_t)(0x11b7d2acu));
  /* 11b7181b push 0x11b80e40 */
  push32((uint32_t)(0x11b80e40u));
  /* 11b71820 call esi */
  call_ind((uint32_t)(ESI), 0x11b71822u);
  /* 11b71822 push 0x11b7d2a0 */
  push32((uint32_t)(0x11b7d2a0u));
  /* 11b71827 push 0x11b81018 */
  push32((uint32_t)(0x11b81018u));
  /* 11b7182c call esi */
  call_ind((uint32_t)(ESI), 0x11b7182eu);
  /* 11b7182e push 0x11b7d294 */
  push32((uint32_t)(0x11b7d294u));
  /* 11b71833 push 0x11b80ca0 */
  push32((uint32_t)(0x11b80ca0u));
  /* 11b71838 call esi */
  call_ind((uint32_t)(ESI), 0x11b7183au);
  /* 11b7183a push 0x11b7d288 */
  push32((uint32_t)(0x11b7d288u));
  /* 11b7183f push 0x11b80b60 */
  push32((uint32_t)(0x11b80b60u));
  /* 11b71844 call esi */
  call_ind((uint32_t)(ESI), 0x11b71846u);
  /* 11b71846 push 0x11b7d27c */
  push32((uint32_t)(0x11b7d27cu));
  /* 11b7184b push 0x11b80b68 */
  push32((uint32_t)(0x11b80b68u));
  /* 11b71850 call esi */
  call_ind((uint32_t)(ESI), 0x11b71852u);
  /* 11b71852 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71855 push 0x11b7d270 */
  push32((uint32_t)(0x11b7d270u));
  /* 11b7185a push 0x11b80e10 */
  push32((uint32_t)(0x11b80e10u));
  /* 11b7185f call esi */
  call_ind((uint32_t)(ESI), 0x11b71861u);
  /* 11b71861 push 0x11b7d264 */
  push32((uint32_t)(0x11b7d264u));
  /* 11b71866 push 0x11b81200 */
  push32((uint32_t)(0x11b81200u));
  /* 11b7186b call esi */
  call_ind((uint32_t)(ESI), 0x11b7186du);
  /* 11b7186d push 0x11b7d24c */
  push32((uint32_t)(0x11b7d24cu));
  /* 11b71872 push 0x11b80bb8 */
  push32((uint32_t)(0x11b80bb8u));
  /* 11b71877 call esi */
  call_ind((uint32_t)(ESI), 0x11b71879u);
  /* 11b71879 push 0x11b7d238 */
  push32((uint32_t)(0x11b7d238u));
  /* 11b7187e push 0x11b80ed8 */
  push32((uint32_t)(0x11b80ed8u));
  /* 11b71883 call esi */
  call_ind((uint32_t)(ESI), 0x11b71885u);
  /* 11b71885 push 0x11b7d228 */
  push32((uint32_t)(0x11b7d228u));
  /* 11b7188a push 0x11b80bf0 */
  push32((uint32_t)(0x11b80bf0u));
  /* 11b7188f call esi */
  call_ind((uint32_t)(ESI), 0x11b71891u);
  /* 11b71891 push 0x11b7d214 */
  push32((uint32_t)(0x11b7d214u));
  /* 11b71896 push 0x11b80fa0 */
  push32((uint32_t)(0x11b80fa0u));
  /* 11b7189b call esi */
  call_ind((uint32_t)(ESI), 0x11b7189du);
  /* 11b7189d push 0x11b7d200 */
  push32((uint32_t)(0x11b7d200u));
  /* 11b718a2 push 0x11b81008 */
  push32((uint32_t)(0x11b81008u));
  /* 11b718a7 call esi */
  call_ind((uint32_t)(ESI), 0x11b718a9u);
  /* 11b718a9 push 0x11b7d1f0 */
  push32((uint32_t)(0x11b7d1f0u));
  /* 11b718ae push 0x11b80ba0 */
  push32((uint32_t)(0x11b80ba0u));
  /* 11b718b3 call esi */
  call_ind((uint32_t)(ESI), 0x11b718b5u);
  /* 11b718b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b718b8 push 0x11b7d1dc */
  push32((uint32_t)(0x11b7d1dcu));
  /* 11b718bd push 0x11b81030 */
  push32((uint32_t)(0x11b81030u));
  /* 11b718c2 call esi */
  call_ind((uint32_t)(ESI), 0x11b718c4u);
  /* 11b718c4 push 0x11b7d1d0 */
  push32((uint32_t)(0x11b7d1d0u));
  /* 11b718c9 push 0x11b81248 */
  push32((uint32_t)(0x11b81248u));
  /* 11b718ce call esi */
  call_ind((uint32_t)(ESI), 0x11b718d0u);
  /* 11b718d0 push 0x11b7d1c4 */
  push32((uint32_t)(0x11b7d1c4u));
  /* 11b718d5 push 0x11b80c60 */
  push32((uint32_t)(0x11b80c60u));
  /* 11b718da call esi */
  call_ind((uint32_t)(ESI), 0x11b718dcu);
  /* 11b718dc push 0x11b7d1b4 */
  push32((uint32_t)(0x11b7d1b4u));
  /* 11b718e1 push 0x11b80c50 */
  push32((uint32_t)(0x11b80c50u));
  /* 11b718e6 call esi */
  call_ind((uint32_t)(ESI), 0x11b718e8u);
  /* 11b718e8 push 0x11b7d1a8 */
  push32((uint32_t)(0x11b7d1a8u));
  /* 11b718ed push 0x11b80c68 */
  push32((uint32_t)(0x11b80c68u));
  /* 11b718f2 call esi */
  call_ind((uint32_t)(ESI), 0x11b718f4u);
  /* 11b718f4 push 0x11b7d19c */
  push32((uint32_t)(0x11b7d19cu));
  /* 11b718f9 push 0x11b81040 */
  push32((uint32_t)(0x11b81040u));
  /* 11b718fe call esi */
  call_ind((uint32_t)(ESI), 0x11b71900u);
  /* 11b71900 push 0x11b7d188 */
  push32((uint32_t)(0x11b7d188u));
  /* 11b71905 push 0x11b80d40 */
  push32((uint32_t)(0x11b80d40u));
  /* 11b7190a call esi */
  call_ind((uint32_t)(ESI), 0x11b7190cu);
  /* 11b7190c push 0x11b7d17c */
  push32((uint32_t)(0x11b7d17cu));
  /* 11b71911 push 0x11b80ec8 */
  push32((uint32_t)(0x11b80ec8u));
  /* 11b71916 call esi */
  call_ind((uint32_t)(ESI), 0x11b71918u);
  /* 11b71918 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7191b push 0x11b7d168 */
  push32((uint32_t)(0x11b7d168u));
  /* 11b71920 push 0x11b80fb0 */
  push32((uint32_t)(0x11b80fb0u));
  /* 11b71925 call esi */
  call_ind((uint32_t)(ESI), 0x11b71927u);
  /* 11b71927 mov ebx, dword ptr [0x11b7b198] */
  EBX = (r32((uint32_t)(0x11b7b198)));
  /* 11b7192d push 0x11b7d160 */
  push32((uint32_t)(0x11b7d160u));
  /* 11b71932 push 0x11b80b40 */
  push32((uint32_t)(0x11b80b40u));
  /* 11b71937 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71939u);
  /* 11b71939 push 0x11b7d14c */
  push32((uint32_t)(0x11b7d14cu));
  /* 11b7193e push 0x11b80fa8 */
  push32((uint32_t)(0x11b80fa8u));
  /* 11b71943 call esi */
  call_ind((uint32_t)(ESI), 0x11b71945u);
  /* 11b71945 push 0x11b7d140 */
  push32((uint32_t)(0x11b7d140u));
  /* 11b7194a push 0x11b80f98 */
  push32((uint32_t)(0x11b80f98u));
  /* 11b7194f call esi */
  call_ind((uint32_t)(ESI), 0x11b71951u);
  /* 11b71951 push 0x11b7d138 */
  push32((uint32_t)(0x11b7d138u));
  /* 11b71956 push 0x11b81238 */
  push32((uint32_t)(0x11b81238u));
  /* 11b7195b call ebx */
  call_ind((uint32_t)(EBX), 0x11b7195du);
  /* 11b7195d push 0x11b7d12c */
  push32((uint32_t)(0x11b7d12cu));
  /* 11b71962 push 0x11b80f60 */
  push32((uint32_t)(0x11b80f60u));
  /* 11b71967 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71969u);
  /* 11b71969 push 0x11b7d120 */
  push32((uint32_t)(0x11b7d120u));
  /* 11b7196e push 0x11b80f88 */
  push32((uint32_t)(0x11b80f88u));
  /* 11b71973 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71975u);
  /* 11b71975 push 0x11b7d114 */
  push32((uint32_t)(0x11b7d114u));
  /* 11b7197a push 0x11b80f70 */
  push32((uint32_t)(0x11b80f70u));
  /* 11b7197f call ebx */
  call_ind((uint32_t)(EBX), 0x11b71981u);
  /* 11b71981 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71984 push 0x11b7d108 */
  push32((uint32_t)(0x11b7d108u));
  /* 11b71989 push 0x11b80f68 */
  push32((uint32_t)(0x11b80f68u));
  /* 11b7198e call ebx */
  call_ind((uint32_t)(EBX), 0x11b71990u);
  /* 11b71990 push 0x11b7d100 */
  push32((uint32_t)(0x11b7d100u));
  /* 11b71995 push 0x11b80cb0 */
  push32((uint32_t)(0x11b80cb0u));
  /* 11b7199a call ebx */
  call_ind((uint32_t)(EBX), 0x11b7199cu);
  /* 11b7199c mov ebp, dword ptr [0x11b7b190] */
  EBP = (r32((uint32_t)(0x11b7b190)));
  /* 11b719a2 push 0x11b80d18 */
  push32((uint32_t)(0x11b80d18u));
  /* 11b719a7 call ebp */
  call_ind((uint32_t)(EBP), 0x11b719a9u);
  /* 11b719a9 push 0x11b80d00 */
  push32((uint32_t)(0x11b80d00u));
  /* 11b719ae call ebp */
  call_ind((uint32_t)(EBP), 0x11b719b0u);
  /* 11b719b0 mov ebx, dword ptr [0x11b7b1a0] */
  EBX = (r32((uint32_t)(0x11b7b1a0)));
  /* 11b719b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b719b8 push 0x11b80d18 */
  push32((uint32_t)(0x11b80d18u));
  /* 11b719bd call ebx */
  call_ind((uint32_t)(EBX), 0x11b719bfu);
  /* 11b719bf push 8 */
  push32((uint32_t)(0x8u));
  /* 11b719c1 push 0x11b80d00 */
  push32((uint32_t)(0x11b80d00u));
  /* 11b719c6 call ebx */
  call_ind((uint32_t)(EBX), 0x11b719c8u);
  /* 11b719c8 push 0x11b80b90 */
  push32((uint32_t)(0x11b80b90u));
  /* 11b719cd call ebp */
  call_ind((uint32_t)(EBP), 0x11b719cfu);
  /* 11b719cf push 0x11b80b88 */
  push32((uint32_t)(0x11b80b88u));
  /* 11b719d4 call ebp */
  call_ind((uint32_t)(EBP), 0x11b719d6u);
  /* 11b719d6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b719d8 push 0x11b80b90 */
  push32((uint32_t)(0x11b80b90u));
  /* 11b719dd call ebx */
  call_ind((uint32_t)(EBX), 0x11b719dfu);
  /* 11b719df push 8 */
  push32((uint32_t)(0x8u));
  /* 11b719e1 push 0x11b80b88 */
  push32((uint32_t)(0x11b80b88u));
  /* 11b719e6 call ebx */
  call_ind((uint32_t)(EBX), 0x11b719e8u);
  /* 11b719e8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b719eb push 4 */
  push32((uint32_t)(0x4u));
  /* 11b719ed push 0x11b7d030 */
  push32((uint32_t)(0x11b7d030u));
  /* 11b719f2 call ebx */
  call_ind((uint32_t)(EBX), 0x11b719f4u);
  /* 11b719f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b719f6 push 0x11b812a4 */
  push32((uint32_t)(0x11b812a4u));
  /* 11b719fb call ebx */
  call_ind((uint32_t)(EBX), 0x11b719fdu);
  /* 11b719fd push 4 */
  push32((uint32_t)(0x4u));
  /* 11b719ff push 0x11b812a8 */
  push32((uint32_t)(0x11b812a8u));
  /* 11b71a04 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71a06u);
  /* 11b71a06 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b71a08 push 0x11b812ac */
  push32((uint32_t)(0x11b812acu));
  /* 11b71a0d call ebx */
  call_ind((uint32_t)(EBX), 0x11b71a0fu);
  /* 11b71a0f push 4 */
  push32((uint32_t)(0x4u));
  /* 11b71a11 push 0x11b812b0 */
  push32((uint32_t)(0x11b812b0u));
  /* 11b71a16 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71a18u);
  /* 11b71a18 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71a1a push 0x11b81080 */
  push32((uint32_t)(0x11b81080u));
  /* 11b71a1f call ebx */
  call_ind((uint32_t)(EBX), 0x11b71a21u);
  /* 11b71a21 push 0x11b7d0f4 */
  push32((uint32_t)(0x11b7d0f4u));
  /* 11b71a26 push 0x11b80bb0 */
  push32((uint32_t)(0x11b80bb0u));
  /* 11b71a2b call edi */
  call_ind((uint32_t)(EDI), 0x11b71a2du);
  /* 11b71a2d push 0x11b7d0e8 */
  push32((uint32_t)(0x11b7d0e8u));
  /* 11b71a32 push 0x11b811f8 */
  push32((uint32_t)(0x11b811f8u));
  /* 11b71a37 call edi */
  call_ind((uint32_t)(EDI), 0x11b71a39u);
  /* 11b71a39 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71a3c push 0x11b7d0dc */
  push32((uint32_t)(0x11b7d0dcu));
  /* 11b71a41 push 0x11b81098 */
  push32((uint32_t)(0x11b81098u));
  /* 11b71a46 call edi */
  call_ind((uint32_t)(EDI), 0x11b71a48u);
  /* 11b71a48 push 0x11b7d0d0 */
  push32((uint32_t)(0x11b7d0d0u));
  /* 11b71a4d push 0x11b810b8 */
  push32((uint32_t)(0x11b810b8u));
  /* 11b71a52 call edi */
  call_ind((uint32_t)(EDI), 0x11b71a54u);
  /* 11b71a54 push 0x11b7d0c8 */
  push32((uint32_t)(0x11b7d0c8u));
  /* 11b71a59 push 0x11b80f28 */
  push32((uint32_t)(0x11b80f28u));
  /* 11b71a5e call edi */
  call_ind((uint32_t)(EDI), 0x11b71a60u);
  /* 11b71a60 push 0x11b7d0c0 */
  push32((uint32_t)(0x11b7d0c0u));
  /* 11b71a65 push 0x11b81090 */
  push32((uint32_t)(0x11b81090u));
  /* 11b71a6a call edi */
  call_ind((uint32_t)(EDI), 0x11b71a6cu);
  /* 11b71a6c push 0x11b7d0b8 */
  push32((uint32_t)(0x11b7d0b8u));
  /* 11b71a71 push 0x11b81088 */
  push32((uint32_t)(0x11b81088u));
  /* 11b71a76 call edi */
  call_ind((uint32_t)(EDI), 0x11b71a78u);
  /* 11b71a78 push 0x11b7d0ac */
  push32((uint32_t)(0x11b7d0acu));
  /* 11b71a7d push 0x11b810d8 */
  push32((uint32_t)(0x11b810d8u));
  /* 11b71a82 call edi */
  call_ind((uint32_t)(EDI), 0x11b71a84u);
  /* 11b71a84 push 0x11b7d0a0 */
  push32((uint32_t)(0x11b7d0a0u));
  /* 11b71a89 push 0x11b810e0 */
  push32((uint32_t)(0x11b810e0u));
  /* 11b71a8e call edi */
  call_ind((uint32_t)(EDI), 0x11b71a90u);
  /* 11b71a90 push 0x11b7d094 */
  push32((uint32_t)(0x11b7d094u));
  /* 11b71a95 push 0x11b810e8 */
  push32((uint32_t)(0x11b810e8u));
  /* 11b71a9a call edi */
  call_ind((uint32_t)(EDI), 0x11b71a9cu);
  /* 11b71a9c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71a9f push 0x11b7d08c */
  push32((uint32_t)(0x11b7d08cu));
  /* 11b71aa4 push 0x11b80df0 */
  push32((uint32_t)(0x11b80df0u));
  /* 11b71aa9 call edi */
  call_ind((uint32_t)(EDI), 0x11b71aabu);
  /* 11b71aab push 0x11b80ef8 */
  push32((uint32_t)(0x11b80ef8u));
  /* 11b71ab0 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71ab2u);
  /* 11b71ab2 push 0x11b80c98 */
  push32((uint32_t)(0x11b80c98u));
  /* 11b71ab7 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71ab9u);
  /* 11b71ab9 push 0x11b80c90 */
  push32((uint32_t)(0x11b80c90u));
  /* 11b71abe call ebp */
  call_ind((uint32_t)(EBP), 0x11b71ac0u);
  /* 11b71ac0 push 0x11b80c88 */
  push32((uint32_t)(0x11b80c88u));
  /* 11b71ac5 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71ac7u);
  /* 11b71ac7 push 0x11b80c80 */
  push32((uint32_t)(0x11b80c80u));
  /* 11b71acc call ebp */
  call_ind((uint32_t)(EBP), 0x11b71aceu);
  /* 11b71ace push 0x11b80de0 */
  push32((uint32_t)(0x11b80de0u));
  /* 11b71ad3 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71ad5u);
  /* 11b71ad5 push 0x11b80dc0 */
  push32((uint32_t)(0x11b80dc0u));
  /* 11b71ada call ebp */
  call_ind((uint32_t)(EBP), 0x11b71adcu);
  /* 11b71adc push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71ade push 0x11b80ef8 */
  push32((uint32_t)(0x11b80ef8u));
  /* 11b71ae3 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71ae5u);
  /* 11b71ae5 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71ae7 push 0x11b80c98 */
  push32((uint32_t)(0x11b80c98u));
  /* 11b71aec call ebx */
  call_ind((uint32_t)(EBX), 0x11b71aeeu);
  /* 11b71aee push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71af0 push 0x11b80c90 */
  push32((uint32_t)(0x11b80c90u));
  /* 11b71af5 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71af7u);
  /* 11b71af7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71af9 push 0x11b80c88 */
  push32((uint32_t)(0x11b80c88u));
  /* 11b71afe call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b00u);
  /* 11b71b00 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71b03 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71b05 push 0x11b80c80 */
  push32((uint32_t)(0x11b80c80u));
  /* 11b71b0a call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b0cu);
  /* 11b71b0c push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71b0e push 0x11b80de0 */
  push32((uint32_t)(0x11b80de0u));
  /* 11b71b13 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b15u);
  /* 11b71b15 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71b17 push 0x11b80dc0 */
  push32((uint32_t)(0x11b80dc0u));
  /* 11b71b1c call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b1eu);
  /* 11b71b1e push 0x11b80ea0 */
  push32((uint32_t)(0x11b80ea0u));
  /* 11b71b23 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71b25u);
  /* 11b71b25 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71b27 push 0x11b80ea0 */
  push32((uint32_t)(0x11b80ea0u));
  /* 11b71b2c call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b2eu);
  /* 11b71b2e push 4 */
  push32((uint32_t)(0x4u));
  /* 11b71b30 push 0x11b7d034 */
  push32((uint32_t)(0x11b7d034u));
  /* 11b71b35 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b37u);
  /* 11b71b37 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b71b39 push 0x11b812b4 */
  push32((uint32_t)(0x11b812b4u));
  /* 11b71b3e call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b40u);
  /* 11b71b40 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71b42 push 0x11b812b8 */
  push32((uint32_t)(0x11b812b8u));
  /* 11b71b47 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b49u);
  /* 11b71b49 push 0x11b80d38 */
  push32((uint32_t)(0x11b80d38u));
  /* 11b71b4e call ebp */
  call_ind((uint32_t)(EBP), 0x11b71b50u);
  /* 11b71b50 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71b53 push 0x11b80cc8 */
  push32((uint32_t)(0x11b80cc8u));
  /* 11b71b58 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71b5au);
  /* 11b71b5a push 0x11b80cc0 */
  push32((uint32_t)(0x11b80cc0u));
  /* 11b71b5f call ebp */
  call_ind((uint32_t)(EBP), 0x11b71b61u);
  /* 11b71b61 push 0x11b80cd0 */
  push32((uint32_t)(0x11b80cd0u));
  /* 11b71b66 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71b68u);
  /* 11b71b68 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71b6a push 0x11b80d38 */
  push32((uint32_t)(0x11b80d38u));
  /* 11b71b6f call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b71u);
  /* 11b71b71 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71b73 push 0x11b80cc8 */
  push32((uint32_t)(0x11b80cc8u));
  /* 11b71b78 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b7au);
  /* 11b71b7a push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71b7c push 0x11b80cc0 */
  push32((uint32_t)(0x11b80cc0u));
  /* 11b71b81 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b83u);
  /* 11b71b83 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71b85 push 0x11b80cd0 */
  push32((uint32_t)(0x11b80cd0u));
  /* 11b71b8a call ebx */
  call_ind((uint32_t)(EBX), 0x11b71b8cu);
  /* 11b71b8c push 0x11b7d080 */
  push32((uint32_t)(0x11b7d080u));
  /* 11b71b91 push 0x11b81208 */
  push32((uint32_t)(0x11b81208u));
  /* 11b71b96 call esi */
  call_ind((uint32_t)(ESI), 0x11b71b98u);
  /* 11b71b98 push 0x11b80d60 */
  push32((uint32_t)(0x11b80d60u));
  /* 11b71b9d call ebp */
  call_ind((uint32_t)(EBP), 0x11b71b9fu);
  /* 11b71b9f push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71ba1 push 0x11b80d60 */
  push32((uint32_t)(0x11b80d60u));
  /* 11b71ba6 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71ba8u);
  /* 11b71ba8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71bab push 0x11b80d70 */
  push32((uint32_t)(0x11b80d70u));
  /* 11b71bb0 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71bb2u);
  /* 11b71bb2 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71bb4 push 0x11b80d70 */
  push32((uint32_t)(0x11b80d70u));
  /* 11b71bb9 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71bbbu);
  /* 11b71bbb push 0x11b80ef0 */
  push32((uint32_t)(0x11b80ef0u));
  /* 11b71bc0 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71bc2u);
  /* 11b71bc2 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71bc4 push 0x11b80ef0 */
  push32((uint32_t)(0x11b80ef0u));
  /* 11b71bc9 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71bcbu);
  /* 11b71bcb push 0x11b7d078 */
  push32((uint32_t)(0x11b7d078u));
  /* 11b71bd0 push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b71bd5 call dword ptr [0x11b7b198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b198))), 0x11b71bdbu);
  /* 11b71bdb push 0x11b7d068 */
  push32((uint32_t)(0x11b7d068u));
  /* 11b71be0 push 0x11b81150 */
  push32((uint32_t)(0x11b81150u));
  /* 11b71be5 call esi */
  call_ind((uint32_t)(ESI), 0x11b71be7u);
  /* 11b71be7 push 0x11b7d058 */
  push32((uint32_t)(0x11b7d058u));
  /* 11b71bec push 0x11b81140 */
  push32((uint32_t)(0x11b81140u));
  /* 11b71bf1 call esi */
  call_ind((uint32_t)(ESI), 0x11b71bf3u);
  /* 11b71bf3 push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b71bf8 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71bfau);
  /* 11b71bfa push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71bfc push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b71c01 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c03u);
  /* 11b71c03 push 0x11b80c70 */
  push32((uint32_t)(0x11b80c70u));
  /* 11b71c08 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71c0au);
  /* 11b71c0a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71c0d push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71c0f push 0x11b80c70 */
  push32((uint32_t)(0x11b80c70u));
  /* 11b71c14 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c16u);
  /* 11b71c16 push 0x11b80ca8 */
  push32((uint32_t)(0x11b80ca8u));
  /* 11b71c1b call ebp */
  call_ind((uint32_t)(EBP), 0x11b71c1du);
  /* 11b71c1d push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71c1f push 0x11b80ca8 */
  push32((uint32_t)(0x11b80ca8u));
  /* 11b71c24 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c26u);
  /* 11b71c26 push 0x11b80f08 */
  push32((uint32_t)(0x11b80f08u));
  /* 11b71c2b call ebp */
  call_ind((uint32_t)(EBP), 0x11b71c2du);
  /* 11b71c2d push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71c2f push 0x11b80f08 */
  push32((uint32_t)(0x11b80f08u));
  /* 11b71c34 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c36u);
  /* 11b71c36 push 0x11b81160 */
  push32((uint32_t)(0x11b81160u));
  /* 11b71c3b call ebp */
  call_ind((uint32_t)(EBP), 0x11b71c3du);
  /* 11b71c3d push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71c3f push 0x11b81160 */
  push32((uint32_t)(0x11b81160u));
  /* 11b71c44 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c46u);
  /* 11b71c46 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b71c48 push 0x11b812c0 */
  push32((uint32_t)(0x11b812c0u));
  /* 11b71c4d call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c4fu);
  /* 11b71c4f push 4 */
  push32((uint32_t)(0x4u));
  /* 11b71c51 push 0x11b7d038 */
  push32((uint32_t)(0x11b7d038u));
  /* 11b71c56 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c58u);
  /* 11b71c58 push 0x11b80f10 */
  push32((uint32_t)(0x11b80f10u));
  /* 11b71c5d call ebp */
  call_ind((uint32_t)(EBP), 0x11b71c5fu);
  /* 11b71c5f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71c62 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71c64 push 0x11b80f10 */
  push32((uint32_t)(0x11b80f10u));
  /* 11b71c69 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c6bu);
  /* 11b71c6b push 0x11b80f18 */
  push32((uint32_t)(0x11b80f18u));
  /* 11b71c70 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71c72u);
  /* 11b71c72 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71c74 push 0x11b80f18 */
  push32((uint32_t)(0x11b80f18u));
  /* 11b71c79 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c7bu);
  /* 11b71c7b push 0x11b80f40 */
  push32((uint32_t)(0x11b80f40u));
  /* 11b71c80 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71c82u);
  /* 11b71c82 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71c84 push 0x11b80f40 */
  push32((uint32_t)(0x11b80f40u));
  /* 11b71c89 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c8bu);
  /* 11b71c8b push 4 */
  push32((uint32_t)(0x4u));
  /* 11b71c8d push 0x11b812c4 */
  push32((uint32_t)(0x11b812c4u));
  /* 11b71c92 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71c94u);
  /* 11b71c94 push 0x11b80ce0 */
  push32((uint32_t)(0x11b80ce0u));
  /* 11b71c99 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71c9bu);
  /* 11b71c9b push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71c9d push 0x11b80ce0 */
  push32((uint32_t)(0x11b80ce0u));
  /* 11b71ca2 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71ca4u);
  /* 11b71ca4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b71ca6 push 0x11b812c8 */
  push32((uint32_t)(0x11b812c8u));
  /* 11b71cab call ebx */
  call_ind((uint32_t)(EBX), 0x11b71cadu);
  /* 11b71cad push 0x11b80b38 */
  push32((uint32_t)(0x11b80b38u));
  /* 11b71cb2 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71cb4u);
  /* 11b71cb4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71cb7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b71cb9 push 0x11b80b38 */
  push32((uint32_t)(0x11b80b38u));
  /* 11b71cbe call ebx */
  call_ind((uint32_t)(EBX), 0x11b71cc0u);
  /* 11b71cc0 mov esi, dword ptr [0x11b7b1a4] */
  ESI = (r32((uint32_t)(0x11b7b1a4)));
  /* 11b71cc6 push 0x11b7d050 */
  push32((uint32_t)(0x11b7d050u));
  /* 11b71ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b71ccd call esi */
  call_ind((uint32_t)(ESI), 0x11b71ccfu);
  /* 11b71ccf push 0x11b7d048 */
  push32((uint32_t)(0x11b7d048u));
  /* 11b71cd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b71cd6 call esi */
  call_ind((uint32_t)(ESI), 0x11b71cd8u);
  /* 11b71cd8 push 0x11b7d03c */
  push32((uint32_t)(0x11b7d03cu));
  /* 11b71cdd push 3 */
  push32((uint32_t)(0x3u));
  /* 11b71cdf call esi */
  call_ind((uint32_t)(ESI), 0x11b71ce1u);
  /* 11b71ce1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b71ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ce5 call dword ptr [0x11b7b19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b19c))), 0x11b71cebu);
  /* 11b71ceb add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71cee pop edi */
  EDI = (pop32());
  /* 11b71cef pop esi */
  ESI = (pop32());
  /* 11b71cf0 pop ebp */
  EBP = (pop32());
  /* 11b71cf1 pop ebx */
  EBX = (pop32());
  /* 11b71cf2 ret  */
  ESPCHK(0x11b71020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11b71d00 (12628 bytes, 3620 insns) [3 switch table(s)] */
void f_11b71d00(void) {
  FTRACE(0x11b71d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b71d00 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b71d03 push ebx */
  push32((uint32_t)(EBX));
  /* 11b71d04 push ebp */
  push32((uint32_t)(EBP));
  /* 11b71d05 push esi */
  push32((uint32_t)(ESI));
  /* 11b71d06 push edi */
  push32((uint32_t)(EDI));
  /* 11b71d07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b71d09 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b71d0fu);
  /* 11b71d0f mov ebp, dword ptr [0x11b7b0d4] */
  EBP = (r32((uint32_t)(0x11b7b0d4)));
  /* 11b71d15 mov edi, dword ptr [0x11b7b0d8] */
  EDI = (r32((uint32_t)(0x11b7b0d8)));
  /* 11b71d1b mov ebx, dword ptr [0x11b7b0d0] */
  EBX = (r32((uint32_t)(0x11b7b0d0)));
  /* 11b71d21 mov esi, dword ptr [0x11b7b0e0] */
  ESI = (r32((uint32_t)(0x11b7b0e0)));
  /* 11b71d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71d2a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b71d2c je 0x11b72682 */
  if (C.zf) goto L_11b72682;
  /* 11b71d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b71d36 call ebp */
  call_ind((uint32_t)(EBP), 0x11b71d38u);
  /* 11b71d38 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b71d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d3c call dword ptr [0x11b7b19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b19c))), 0x11b71d42u);
  /* 11b71d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d44 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b71d4au);
  /* 11b71d4a mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 11b71d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d50 fild dword ptr [esp + 0x2c] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x2c)));
  /* 11b71d54 push 0x11b80fc0 */
  push32((uint32_t)(0x11b80fc0u));
  /* 11b71d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d5b fmul qword ptr [0x11b7b1c0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b7b1c0)));
  /* 11b71d61 fadd qword ptr [0x11b7b1b8] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x11b7b1b8)));
  /* 11b71d67 fmul qword ptr [0x11b7b1b0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b7b1b0)));
  /* 11b71d6d fstp qword ptr [0x11b812b8] */
  wf64((uint32_t)(0x11b812b8), FPU_ST(0));
  (void)fpu_pop();
  /* 11b71d73 call edi */
  call_ind((uint32_t)(EDI), 0x11b71d75u);
  /* 11b71d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d77 push 0x11b80c28 */
  push32((uint32_t)(0x11b80c28u));
  /* 11b71d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d7e call edi */
  call_ind((uint32_t)(EDI), 0x11b71d80u);
  /* 11b71d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d82 push 0x11b81168 */
  push32((uint32_t)(0x11b81168u));
  /* 11b71d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d89 call edi */
  call_ind((uint32_t)(EDI), 0x11b71d8bu);
  /* 11b71d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d8d push 0x11b81008 */
  push32((uint32_t)(0x11b81008u));
  /* 11b71d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d94 call edi */
  call_ind((uint32_t)(EDI), 0x11b71d96u);
  /* 11b71d96 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71d9b push 0x11b81030 */
  push32((uint32_t)(0x11b81030u));
  /* 11b71da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71da2 call edi */
  call_ind((uint32_t)(EDI), 0x11b71da4u);
  /* 11b71da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71da6 push 0x11b81250 */
  push32((uint32_t)(0x11b81250u));
  /* 11b71dab push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71dad call edi */
  call_ind((uint32_t)(EDI), 0x11b71dafu);
  /* 11b71daf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71db1 push 0x11b81210 */
  push32((uint32_t)(0x11b81210u));
  /* 11b71db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71db8 call edi */
  call_ind((uint32_t)(EDI), 0x11b71dbau);
  /* 11b71dba push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71dbc push 0x11b80d50 */
  push32((uint32_t)(0x11b80d50u));
  /* 11b71dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71dc3 call edi */
  call_ind((uint32_t)(EDI), 0x11b71dc5u);
  /* 11b71dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71dc7 push 0x11b80c78 */
  push32((uint32_t)(0x11b80c78u));
  /* 11b71dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71dce call edi */
  call_ind((uint32_t)(EDI), 0x11b71dd0u);
  /* 11b71dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71dd2 push 0x11b80e40 */
  push32((uint32_t)(0x11b80e40u));
  /* 11b71dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71dd9 call edi */
  call_ind((uint32_t)(EDI), 0x11b71ddbu);
  /* 11b71ddb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71dde push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71de0 push 0x11b80db8 */
  push32((uint32_t)(0x11b80db8u));
  /* 11b71de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71de7 call edi */
  call_ind((uint32_t)(EDI), 0x11b71de9u);
  /* 11b71de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71deb push 0x11b81018 */
  push32((uint32_t)(0x11b81018u));
  /* 11b71df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71df2 call edi */
  call_ind((uint32_t)(EDI), 0x11b71df4u);
  /* 11b71df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71df6 push 0x11b80d90 */
  push32((uint32_t)(0x11b80d90u));
  /* 11b71dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71dfd call edi */
  call_ind((uint32_t)(EDI), 0x11b71dffu);
  /* 11b71dff push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e01 push 0x11b80ca0 */
  push32((uint32_t)(0x11b80ca0u));
  /* 11b71e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e08 call edi */
  call_ind((uint32_t)(EDI), 0x11b71e0au);
  /* 11b71e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e0c push 0x11b80c18 */
  push32((uint32_t)(0x11b80c18u));
  /* 11b71e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e13 call edi */
  call_ind((uint32_t)(EDI), 0x11b71e15u);
  /* 11b71e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e17 push 0x11b80b60 */
  push32((uint32_t)(0x11b80b60u));
  /* 11b71e1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e1e call edi */
  call_ind((uint32_t)(EDI), 0x11b71e20u);
  /* 11b71e20 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e25 push 0x11b81218 */
  push32((uint32_t)(0x11b81218u));
  /* 11b71e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e2c call edi */
  call_ind((uint32_t)(EDI), 0x11b71e2eu);
  /* 11b71e2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e30 push 0x11b80b68 */
  push32((uint32_t)(0x11b80b68u));
  /* 11b71e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e37 call edi */
  call_ind((uint32_t)(EDI), 0x11b71e39u);
  /* 11b71e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e3b push 0x11b80ba8 */
  push32((uint32_t)(0x11b80ba8u));
  /* 11b71e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e42 call edi */
  call_ind((uint32_t)(EDI), 0x11b71e44u);
  /* 11b71e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e46 push 0x11b80e10 */
  push32((uint32_t)(0x11b80e10u));
  /* 11b71e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e4d call edi */
  call_ind((uint32_t)(EDI), 0x11b71e4fu);
  /* 11b71e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e51 push 0x11b80da0 */
  push32((uint32_t)(0x11b80da0u));
  /* 11b71e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e58 call edi */
  call_ind((uint32_t)(EDI), 0x11b71e5au);
  /* 11b71e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e5c push 0x11b81200 */
  push32((uint32_t)(0x11b81200u));
  /* 11b71e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e63 call edi */
  call_ind((uint32_t)(EDI), 0x11b71e65u);
  /* 11b71e65 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e6a push 0x11b81190 */
  push32((uint32_t)(0x11b81190u));
  /* 11b71e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e71 call edi */
  call_ind((uint32_t)(EDI), 0x11b71e73u);
  /* 11b71e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e75 push 0x11b80bb8 */
  push32((uint32_t)(0x11b80bb8u));
  /* 11b71e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e7c call edi */
  call_ind((uint32_t)(EDI), 0x11b71e7eu);
  /* 11b71e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e80 push 0x11b80b78 */
  push32((uint32_t)(0x11b80b78u));
  /* 11b71e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e87 call edi */
  call_ind((uint32_t)(EDI), 0x11b71e89u);
  /* 11b71e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e8b push 0x11b80ed8 */
  push32((uint32_t)(0x11b80ed8u));
  /* 11b71e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e92 call edi */
  call_ind((uint32_t)(EDI), 0x11b71e94u);
  /* 11b71e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e96 push 0x11b80e60 */
  push32((uint32_t)(0x11b80e60u));
  /* 11b71e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71e9d call edi */
  call_ind((uint32_t)(EDI), 0x11b71e9fu);
  /* 11b71e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ea1 push 0x11b80bf0 */
  push32((uint32_t)(0x11b80bf0u));
  /* 11b71ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ea8 call edi */
  call_ind((uint32_t)(EDI), 0x11b71eaau);
  /* 11b71eaa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71ead push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71eaf push 0x11b80b98 */
  push32((uint32_t)(0x11b80b98u));
  /* 11b71eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71eb6 call edi */
  call_ind((uint32_t)(EDI), 0x11b71eb8u);
  /* 11b71eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71eba push 0x11b80fa0 */
  push32((uint32_t)(0x11b80fa0u));
  /* 11b71ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ec1 call edi */
  call_ind((uint32_t)(EDI), 0x11b71ec3u);
  /* 11b71ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ec5 push 0x11b80ee0 */
  push32((uint32_t)(0x11b80ee0u));
  /* 11b71eca push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ecc call edi */
  call_ind((uint32_t)(EDI), 0x11b71eceu);
  /* 11b71ece push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ed0 push 0x11b80c60 */
  push32((uint32_t)(0x11b80c60u));
  /* 11b71ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ed7 call edi */
  call_ind((uint32_t)(EDI), 0x11b71ed9u);
  /* 11b71ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71edb push 0x11b80c68 */
  push32((uint32_t)(0x11b80c68u));
  /* 11b71ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ee2 call edi */
  call_ind((uint32_t)(EDI), 0x11b71ee4u);
  /* 11b71ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ee6 push 0x11b80c50 */
  push32((uint32_t)(0x11b80c50u));
  /* 11b71eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71eed call edi */
  call_ind((uint32_t)(EDI), 0x11b71eefu);
  /* 11b71eef add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71ef4 push 0x11b80ec8 */
  push32((uint32_t)(0x11b80ec8u));
  /* 11b71ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b71efb call edi */
  call_ind((uint32_t)(EDI), 0x11b71efdu);
  /* 11b71efd push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b71eff call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f05u);
  /* 11b71f05 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11b71f07 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f0du);
  /* 11b71f0d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11b71f0f call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f15u);
  /* 11b71f15 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11b71f17 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f1du);
  /* 11b71f1d push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11b71f1f call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f25u);
  /* 11b71f25 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11b71f27 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f2du);
  /* 11b71f2d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11b71f2f call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f35u);
  /* 11b71f35 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11b71f37 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f3du);
  /* 11b71f3d push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b71f3f call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f45u);
  /* 11b71f45 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11b71f47 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f4du);
  /* 11b71f4d push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11b71f4f call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f55u);
  /* 11b71f55 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11b71f57 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f5du);
  /* 11b71f5d push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11b71f5f call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f65u);
  /* 11b71f65 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71f68 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11b71f6a call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f70u);
  /* 11b71f70 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11b71f72 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f78u);
  /* 11b71f78 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11b71f7a call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f80u);
  /* 11b71f80 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11b71f82 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f88u);
  /* 11b71f88 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b71f8a call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f90u);
  /* 11b71f90 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11b71f92 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b71f98u);
  /* 11b71f98 push 0x11b7de0c */
  push32((uint32_t)(0x11b7de0cu));
  /* 11b71f9d push 0x11b7d7ec */
  push32((uint32_t)(0x11b7d7ecu));
  /* 11b71fa2 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71fa4u);
  /* 11b71fa4 push 0x11b7ddf8 */
  push32((uint32_t)(0x11b7ddf8u));
  /* 11b71fa9 push 0x11b7d7ec */
  push32((uint32_t)(0x11b7d7ecu));
  /* 11b71fae call ebx */
  call_ind((uint32_t)(EBX), 0x11b71fb0u);
  /* 11b71fb0 push 0x11b7dde4 */
  push32((uint32_t)(0x11b7dde4u));
  /* 11b71fb5 push 0x11b7d7ec */
  push32((uint32_t)(0x11b7d7ecu));
  /* 11b71fba call ebx */
  call_ind((uint32_t)(EBX), 0x11b71fbcu);
  /* 11b71fbc push 0x11b7ddd0 */
  push32((uint32_t)(0x11b7ddd0u));
  /* 11b71fc1 push 0x11b7d7ec */
  push32((uint32_t)(0x11b7d7ecu));
  /* 11b71fc6 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71fc8u);
  /* 11b71fc8 push 0x11b7ddbc */
  push32((uint32_t)(0x11b7ddbcu));
  /* 11b71fcd push 0x11b7d7ec */
  push32((uint32_t)(0x11b7d7ecu));
  /* 11b71fd2 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71fd4u);
  /* 11b71fd4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b71fd7 push 0x11b7dda8 */
  push32((uint32_t)(0x11b7dda8u));
  /* 11b71fdc push 0x11b7d7ec */
  push32((uint32_t)(0x11b7d7ecu));
  /* 11b71fe1 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71fe3u);
  /* 11b71fe3 push 0x11b7dda0 */
  push32((uint32_t)(0x11b7dda0u));
  /* 11b71fe8 push 0x11b7d7e4 */
  push32((uint32_t)(0x11b7d7e4u));
  /* 11b71fed call ebx */
  call_ind((uint32_t)(EBX), 0x11b71fefu);
  /* 11b71fef push 0x11b7dd98 */
  push32((uint32_t)(0x11b7dd98u));
  /* 11b71ff4 push 0x11b7dd90 */
  push32((uint32_t)(0x11b7dd90u));
  /* 11b71ff9 call ebx */
  call_ind((uint32_t)(EBX), 0x11b71ffbu);
  /* 11b71ffb push 0x11b7dd88 */
  push32((uint32_t)(0x11b7dd88u));
  /* 11b72000 push 0x11b7dd80 */
  push32((uint32_t)(0x11b7dd80u));
  /* 11b72005 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72007u);
  /* 11b72007 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72009 push 0x11b81158 */
  push32((uint32_t)(0x11b81158u));
  /* 11b7200e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72010 push 0x11b81140 */
  push32((uint32_t)(0x11b81140u));
  /* 11b72015 push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b7201a push 0x11b80ef0 */
  push32((uint32_t)(0x11b80ef0u));
  /* 11b7201f call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b72025u);
  /* 11b72025 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72027 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b7202du);
  /* 11b7202d add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72032 jne 0x11b7212c */
  if (!C.zf) goto L_11b7212c;
  /* 11b72038 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11b7203d push 3 */
  push32((uint32_t)(0x3u));
  /* 11b7203f push eax */
  push32((uint32_t)(EAX));
  /* 11b72040 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72046u);
  /* 11b72046 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11b7204b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7204d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7204f call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72055u);
  /* 11b72055 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b7205a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7205c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7205e call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72064u);
  /* 11b72064 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72066 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72068 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7206a call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72070u);
  /* 11b72070 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b72075 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b72077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72079 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b7207fu);
  /* 11b7207f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b72084 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b72086 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72088 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b7208eu);
  /* 11b7208e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72091 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b72096 push 0x11b811b0 */
  push32((uint32_t)(0x11b811b0u));
  /* 11b7209b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7209d push 0x11b81040 */
  push32((uint32_t)(0x11b81040u));
  /* 11b720a2 push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b720a7 push 0x11b80f10 */
  push32((uint32_t)(0x11b80f10u));
  /* 11b720ac call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b720b2u);
  /* 11b720b2 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b720b7 push 0x11b811a8 */
  push32((uint32_t)(0x11b811a8u));
  /* 11b720bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b720be push 0x11b81040 */
  push32((uint32_t)(0x11b81040u));
  /* 11b720c3 push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b720c8 push 0x11b80f18 */
  push32((uint32_t)(0x11b80f18u));
  /* 11b720cd call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b720d3u);
  /* 11b720d3 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b720d8 push 0x11b811c0 */
  push32((uint32_t)(0x11b811c0u));
  /* 11b720dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b720df push 0x11b81040 */
  push32((uint32_t)(0x11b81040u));
  /* 11b720e4 push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b720e9 push 0x11b80f40 */
  push32((uint32_t)(0x11b80f40u));
  /* 11b720ee call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b720f4u);
  /* 11b720f4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b720f7 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b720f9 push 0x11b80da8 */
  push32((uint32_t)(0x11b80da8u));
  /* 11b720fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72100 push 0x11b80d40 */
  push32((uint32_t)(0x11b80d40u));
  /* 11b72105 push 0x11b80f60 */
  push32((uint32_t)(0x11b80f60u));
  /* 11b7210a push 0x11b80b38 */
  push32((uint32_t)(0x11b80b38u));
  /* 11b7210f call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b72115u);
  /* 11b72115 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72118 mov dword ptr [0x11b7d030], 0x1388 */
  w32((uint32_t)(0x11b7d030), (0x1388u));
  /* 11b72122 mov dword ptr [0x11b812c4], 5 */
  w32((uint32_t)(0x11b812c4), (0x5u));
L_11b7212c:;
  /* 11b7212c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7212e call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b72134u);
  /* 11b72134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72137 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7213a jne 0x11b72244 */
  if (!C.zf) goto L_11b72244;
  /* 11b72140 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11b72145 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b72147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72149 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b7214fu);
  /* 11b7214f push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 11b72154 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72156 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72158 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b7215eu);
  /* 11b7215e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b72163 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72165 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72167 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b7216du);
  /* 11b7216d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7216f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72171 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72173 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72179u);
  /* 11b72179 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11b7217e push 4 */
  push32((uint32_t)(0x4u));
  /* 11b72180 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72182 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72188u);
  /* 11b72188 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11b7218d push 5 */
  push32((uint32_t)(0x5u));
  /* 11b7218f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72191 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72197u);
  /* 11b72197 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7219a push 0x11b7dd68 */
  push32((uint32_t)(0x11b7dd68u));
  /* 11b7219f push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b721a4 call ebx */
  call_ind((uint32_t)(EBX), 0x11b721a6u);
  /* 11b721a6 push 0x11b7dd48 */
  push32((uint32_t)(0x11b7dd48u));
  /* 11b721ab push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b721b0 call ebx */
  call_ind((uint32_t)(EBX), 0x11b721b2u);
  /* 11b721b2 push 0x11b7dd34 */
  push32((uint32_t)(0x11b7dd34u));
  /* 11b721b7 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b721bc call ebx */
  call_ind((uint32_t)(EBX), 0x11b721beu);
  /* 11b721be push 0x11b7dd18 */
  push32((uint32_t)(0x11b7dd18u));
  /* 11b721c3 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b721c8 call ebx */
  call_ind((uint32_t)(EBX), 0x11b721cau);
  /* 11b721ca push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b721cf push 0x11b811b0 */
  push32((uint32_t)(0x11b811b0u));
  /* 11b721d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b721d6 push 0x11b81040 */
  push32((uint32_t)(0x11b81040u));
  /* 11b721db push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b721e0 push 0x11b80f10 */
  push32((uint32_t)(0x11b80f10u));
  /* 11b721e5 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b721ebu);
  /* 11b721eb push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b721f0 push 0x11b811a8 */
  push32((uint32_t)(0x11b811a8u));
  /* 11b721f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b721f7 push 0x11b81040 */
  push32((uint32_t)(0x11b81040u));
  /* 11b721fc push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b72201 push 0x11b80f18 */
  push32((uint32_t)(0x11b80f18u));
  /* 11b72206 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b7220cu);
  /* 11b7220c add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7220f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b72211 push 0x11b80da8 */
  push32((uint32_t)(0x11b80da8u));
  /* 11b72216 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72218 push 0x11b80d40 */
  push32((uint32_t)(0x11b80d40u));
  /* 11b7221d push 0x11b80f88 */
  push32((uint32_t)(0x11b80f88u));
  /* 11b72222 push 0x11b80b38 */
  push32((uint32_t)(0x11b80b38u));
  /* 11b72227 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b7222du);
  /* 11b7222d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72230 mov dword ptr [0x11b7d030], 0xfa0 */
  w32((uint32_t)(0x11b7d030), (0xfa0u));
  /* 11b7223a mov dword ptr [0x11b812c4], 4 */
  w32((uint32_t)(0x11b812c4), (0x4u));
L_11b72244:;
  /* 11b72244 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72246 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b7224cu);
  /* 11b7224c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7224f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b72252 jne 0x11b72368 */
  if (!C.zf) goto L_11b72368;
  /* 11b72258 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11b7225d push 3 */
  push32((uint32_t)(0x3u));
  /* 11b7225f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72261 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72267u);
  /* 11b72267 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11b7226c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7226e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72270 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72276u);
  /* 11b72276 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72278 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7227a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7227c call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72282u);
  /* 11b72282 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72284 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72286 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72288 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b7228eu);
  /* 11b7228e push 0x578 */
  push32((uint32_t)(0x578u));
  /* 11b72293 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b72295 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72297 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b7229du);
  /* 11b7229d push 0x578 */
  push32((uint32_t)(0x578u));
  /* 11b722a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b722a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b722a6 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b722acu);
  /* 11b722ac add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b722af push 0x11b7dd68 */
  push32((uint32_t)(0x11b7dd68u));
  /* 11b722b4 push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b722b9 call ebx */
  call_ind((uint32_t)(EBX), 0x11b722bbu);
  /* 11b722bb push 0x11b7dd48 */
  push32((uint32_t)(0x11b7dd48u));
  /* 11b722c0 push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b722c5 call ebx */
  call_ind((uint32_t)(EBX), 0x11b722c7u);
  /* 11b722c7 push 0x11b7dd00 */
  push32((uint32_t)(0x11b7dd00u));
  /* 11b722cc push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b722d1 call ebx */
  call_ind((uint32_t)(EBX), 0x11b722d3u);
  /* 11b722d3 push 0x11b7dce8 */
  push32((uint32_t)(0x11b7dce8u));
  /* 11b722d8 push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b722dd call ebx */
  call_ind((uint32_t)(EBX), 0x11b722dfu);
  /* 11b722df push 0x11b7dd34 */
  push32((uint32_t)(0x11b7dd34u));
  /* 11b722e4 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b722e9 call ebx */
  call_ind((uint32_t)(EBX), 0x11b722ebu);
  /* 11b722eb push 0x11b7dd18 */
  push32((uint32_t)(0x11b7dd18u));
  /* 11b722f0 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b722f5 call ebx */
  call_ind((uint32_t)(EBX), 0x11b722f7u);
  /* 11b722f7 push 0x11b7dcd4 */
  push32((uint32_t)(0x11b7dcd4u));
  /* 11b722fc push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b72301 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72303u);
  /* 11b72303 push 0x11b7dcc0 */
  push32((uint32_t)(0x11b7dcc0u));
  /* 11b72308 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b7230d call ebx */
  call_ind((uint32_t)(EBX), 0x11b7230fu);
  /* 11b7230f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72312 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b72317 push 0x11b811b0 */
  push32((uint32_t)(0x11b811b0u));
  /* 11b7231c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7231e push 0x11b81040 */
  push32((uint32_t)(0x11b81040u));
  /* 11b72323 push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b72328 push 0x11b80f18 */
  push32((uint32_t)(0x11b80f18u));
  /* 11b7232d call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b72333u);
  /* 11b72333 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b72335 push 0x11b80da8 */
  push32((uint32_t)(0x11b80da8u));
  /* 11b7233a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7233c push 0x11b80d40 */
  push32((uint32_t)(0x11b80d40u));
  /* 11b72341 push 0x11b80f70 */
  push32((uint32_t)(0x11b80f70u));
  /* 11b72346 push 0x11b80b38 */
  push32((uint32_t)(0x11b80b38u));
  /* 11b7234b call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b72351u);
  /* 11b72351 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72354 mov dword ptr [0x11b7d030], 0xbb8 */
  w32((uint32_t)(0x11b7d030), (0xbb8u));
  /* 11b7235e mov dword ptr [0x11b812c4], 2 */
  w32((uint32_t)(0x11b812c4), (0x2u));
L_11b72368:;
  /* 11b72368 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7236a call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b72370u);
  /* 11b72370 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72373 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b72376 jne 0x11b724b2 */
  if (!C.zf) goto L_11b724b2;
  /* 11b7237c push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b72381 push eax */
  push32((uint32_t)(EAX));
  /* 11b72382 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72384 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b7238au);
  /* 11b7238a push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11b7238f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72391 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72393 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b72399u);
  /* 11b72399 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7239b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7239d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7239f call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b723a5u);
  /* 11b723a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b723a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b723a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b723ab call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b723b1u);
  /* 11b723b1 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b723b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b723b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b723ba call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b723c0u);
  /* 11b723c0 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b723c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b723c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b723c9 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b723cfu);
  /* 11b723cf add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b723d2 push 0x11b7dd68 */
  push32((uint32_t)(0x11b7dd68u));
  /* 11b723d7 push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b723dc call ebx */
  call_ind((uint32_t)(EBX), 0x11b723deu);
  /* 11b723de push 0x11b7dd48 */
  push32((uint32_t)(0x11b7dd48u));
  /* 11b723e3 push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b723e8 call ebx */
  call_ind((uint32_t)(EBX), 0x11b723eau);
  /* 11b723ea push 0x11b7dd00 */
  push32((uint32_t)(0x11b7dd00u));
  /* 11b723ef push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b723f4 call ebx */
  call_ind((uint32_t)(EBX), 0x11b723f6u);
  /* 11b723f6 push 0x11b7dce8 */
  push32((uint32_t)(0x11b7dce8u));
  /* 11b723fb push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b72400 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72402u);
  /* 11b72402 push 0x11b7dca8 */
  push32((uint32_t)(0x11b7dca8u));
  /* 11b72407 push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b7240c call ebx */
  call_ind((uint32_t)(EBX), 0x11b7240eu);
  /* 11b7240e push 0x11b7dc90 */
  push32((uint32_t)(0x11b7dc90u));
  /* 11b72413 push 0x11b7dd60 */
  push32((uint32_t)(0x11b7dd60u));
  /* 11b72418 call ebx */
  call_ind((uint32_t)(EBX), 0x11b7241au);
  /* 11b7241a push 0x11b7dd34 */
  push32((uint32_t)(0x11b7dd34u));
  /* 11b7241f push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b72424 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72426u);
  /* 11b72426 push 0x11b7dd18 */
  push32((uint32_t)(0x11b7dd18u));
  /* 11b7242b push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b72430 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72432u);
  /* 11b72432 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72435 push 0x11b7dcd4 */
  push32((uint32_t)(0x11b7dcd4u));
  /* 11b7243a push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b7243f call ebx */
  call_ind((uint32_t)(EBX), 0x11b72441u);
  /* 11b72441 push 0x11b7dcc0 */
  push32((uint32_t)(0x11b7dcc0u));
  /* 11b72446 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b7244b call ebx */
  call_ind((uint32_t)(EBX), 0x11b7244du);
  /* 11b7244d push 0x11b7dc7c */
  push32((uint32_t)(0x11b7dc7cu));
  /* 11b72452 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b72457 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72459u);
  /* 11b72459 push 0x11b7dc68 */
  push32((uint32_t)(0x11b7dc68u));
  /* 11b7245e push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b72463 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72465u);
  /* 11b72465 push 0x11b7dc54 */
  push32((uint32_t)(0x11b7dc54u));
  /* 11b7246a push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b7246f call ebx */
  call_ind((uint32_t)(EBX), 0x11b72471u);
  /* 11b72471 push 0x11b7dc40 */
  push32((uint32_t)(0x11b7dc40u));
  /* 11b72476 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b7247b call ebx */
  call_ind((uint32_t)(EBX), 0x11b7247du);
  /* 11b7247d push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b7247f push 0x11b80da8 */
  push32((uint32_t)(0x11b80da8u));
  /* 11b72484 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72486 push 0x11b80d40 */
  push32((uint32_t)(0x11b80d40u));
  /* 11b7248b push 0x11b80f68 */
  push32((uint32_t)(0x11b80f68u));
  /* 11b72490 push 0x11b80b38 */
  push32((uint32_t)(0x11b80b38u));
  /* 11b72495 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b7249bu);
  /* 11b7249b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7249e mov dword ptr [0x11b7d030], 0x7d0 */
  w32((uint32_t)(0x11b7d030), (0x7d0u));
  /* 11b724a8 mov dword ptr [0x11b812c4], 1 */
  w32((uint32_t)(0x11b812c4), (0x1u));
L_11b724b2:;
  /* 11b724b2 push 0x11b7dc38 */
  push32((uint32_t)(0x11b7dc38u));
  /* 11b724b7 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b724bdu);
  /* 11b724bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b724bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b724c1 push 0x11b81048 */
  push32((uint32_t)(0x11b81048u));
  /* 11b724c6 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b724ccu);
  /* 11b724cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b724ce push 0x11b80db0 */
  push32((uint32_t)(0x11b80db0u));
  /* 11b724d3 call esi */
  call_ind((uint32_t)(ESI), 0x11b724d5u);
  /* 11b724d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b724d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b724d9 call dword ptr [0x11b7b0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0fc))), 0x11b724dfu);
  /* 11b724df push 0 */
  push32((uint32_t)(0x0u));
  /* 11b724e1 push 0x11b80e20 */
  push32((uint32_t)(0x11b80e20u));
  /* 11b724e6 call esi */
  call_ind((uint32_t)(ESI), 0x11b724e8u);
  /* 11b724e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b724ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11b724ec call dword ptr [0x11b7b0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0fc))), 0x11b724f2u);
  /* 11b724f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b724f4 push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b724f9 call esi */
  call_ind((uint32_t)(ESI), 0x11b724fbu);
  /* 11b724fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b724fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b724ff call dword ptr [0x11b7b0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0fc))), 0x11b72505u);
  /* 11b72505 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72508 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7250a call dword ptr [0x11b7b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f4))), 0x11b72510u);
  /* 11b72510 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72512 push 0x11b80bf8 */
  push32((uint32_t)(0x11b80bf8u));
  /* 11b72517 call esi */
  call_ind((uint32_t)(ESI), 0x11b72519u);
  /* 11b72519 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7251b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7251d call dword ptr [0x11b7b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b104))), 0x11b72523u);
  /* 11b72523 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72525 push 0x11b81230 */
  push32((uint32_t)(0x11b81230u));
  /* 11b7252a call esi */
  call_ind((uint32_t)(ESI), 0x11b7252cu);
  /* 11b7252c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7252e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72530 call dword ptr [0x11b7b0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0fc))), 0x11b72536u);
  /* 11b72536 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72538 push 0x11b80ff0 */
  push32((uint32_t)(0x11b80ff0u));
  /* 11b7253d call esi */
  call_ind((uint32_t)(ESI), 0x11b7253fu);
  /* 11b7253f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72541 push 0x11b811c8 */
  push32((uint32_t)(0x11b811c8u));
  /* 11b72546 call esi */
  call_ind((uint32_t)(ESI), 0x11b72548u);
  /* 11b72548 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7254a push 0x11b811d0 */
  push32((uint32_t)(0x11b811d0u));
  /* 11b7254f call esi */
  call_ind((uint32_t)(ESI), 0x11b72551u);
  /* 11b72551 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72553 push 0x11b810a0 */
  push32((uint32_t)(0x11b810a0u));
  /* 11b72558 call esi */
  call_ind((uint32_t)(ESI), 0x11b7255au);
  /* 11b7255a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7255d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7255f call dword ptr [0x11b7b108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b108))), 0x11b72565u);
  /* 11b72565 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72567 push 0x11b81240 */
  push32((uint32_t)(0x11b81240u));
  /* 11b7256c call esi */
  call_ind((uint32_t)(ESI), 0x11b7256eu);
  /* 11b7256e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72570 call dword ptr [0x11b7b108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b108))), 0x11b72576u);
  /* 11b72576 push 0x11b80dd8 */
  push32((uint32_t)(0x11b80dd8u));
  /* 11b7257b call dword ptr [0x11b7b100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b100))), 0x11b72581u);
  /* 11b72581 push 0x11b80dc8 */
  push32((uint32_t)(0x11b80dc8u));
  /* 11b72586 call dword ptr [0x11b7b110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b110))), 0x11b7258cu);
  /* 11b7258c push 0x11b80fd0 */
  push32((uint32_t)(0x11b80fd0u));
  /* 11b72591 call dword ptr [0x11b7b100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b100))), 0x11b72597u);
  /* 11b72597 push 0x11b80fb8 */
  push32((uint32_t)(0x11b80fb8u));
  /* 11b7259c call dword ptr [0x11b7b110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b110))), 0x11b725a2u);
  /* 11b725a2 push 0x11b80f80 */
  push32((uint32_t)(0x11b80f80u));
  /* 11b725a7 call dword ptr [0x11b7b114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b114))), 0x11b725adu);
  /* 11b725ad push 0x11b810f0 */
  push32((uint32_t)(0x11b810f0u));
  /* 11b725b2 call dword ptr [0x11b7b100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b100))), 0x11b725b8u);
  /* 11b725b8 push 0x11b81130 */
  push32((uint32_t)(0x11b81130u));
  /* 11b725bd call dword ptr [0x11b7b114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b114))), 0x11b725c3u);
  /* 11b725c3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b725c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b725ca call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b725d0u);
  /* 11b725d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b725d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b725d4 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b725dau);
  /* 11b725da push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b725df push 4 */
  push32((uint32_t)(0x4u));
  /* 11b725e1 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b725e7u);
  /* 11b725e7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b725ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b725ec push 5 */
  push32((uint32_t)(0x5u));
  /* 11b725ee call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b725f4u);
  /* 11b725f4 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b725f9 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b725fb call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b72601u);
  /* 11b72601 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b72603 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b72605 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b7260bu);
  /* 11b7260b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b7260d push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b7260f call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b72615u);
  /* 11b72615 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b7261a push 7 */
  push32((uint32_t)(0x7u));
  /* 11b7261c call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b72622u);
  /* 11b72622 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72624 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11b72626 call ebp */
  call_ind((uint32_t)(EBP), 0x11b72628u);
  /* 11b72628 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7262a push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b7262c call ebp */
  call_ind((uint32_t)(EBP), 0x11b7262eu);
  /* 11b7262e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72630 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11b72632 call ebp */
  call_ind((uint32_t)(EBP), 0x11b72634u);
  /* 11b72634 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72637 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72639 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b7263b call ebp */
  call_ind((uint32_t)(EBP), 0x11b7263du);
  /* 11b7263d mov eax, dword ptr [0x11b812c4] */
  EAX = (r32((uint32_t)(0x11b812c4)));
  /* 11b72642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72647 mov dword ptr [0x11b812c8], 0 */
  w32((uint32_t)(0x11b812c8), (0x0u));
  /* 11b72651 jle 0x11b72682 */
  if ((C.zf||C.sf!=C.of)) goto L_11b72682;
L_11b72653:;
  /* 11b72653 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b72655 push 0x11b80ce0 */
  push32((uint32_t)(0x11b80ce0u));
  /* 11b7265a push 0x11b81040 */
  push32((uint32_t)(0x11b81040u));
  /* 11b7265f push 0x11b80d80 */
  push32((uint32_t)(0x11b80d80u));
  /* 11b72664 call dword ptr [0x11b7b11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b11c))), 0x11b7266au);
  /* 11b7266a mov eax, dword ptr [0x11b812c8] */
  EAX = (r32((uint32_t)(0x11b812c8)));
  /* 11b7266f mov ecx, dword ptr [0x11b812c4] */
  ECX = (r32((uint32_t)(0x11b812c4)));
  /* 11b72675 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72678 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b72679 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7267b mov dword ptr [0x11b812c8], eax */
  w32((uint32_t)(0x11b812c8), (EAX));
  /* 11b72680 jl 0x11b72653 */
  if ((C.sf!=C.of)) goto L_11b72653;
L_11b72682:;
  /* 11b72682 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 11b72684 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7268au);
  /* 11b7268a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7268d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7268f je 0x11b72942 */
  if (C.zf) goto L_11b72942;
  /* 11b72695 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b72697 call dword ptr [0x11b7b120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b120))), 0x11b7269du);
  /* 11b7269d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b726a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b726a2 je 0x11b726c1 */
  if (C.zf) goto L_11b726c1;
  /* 11b726a4 push 0x11b7dc30 */
  push32((uint32_t)(0x11b7dc30u));
  /* 11b726a9 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b726afu);
  /* 11b726af push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b726b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b726b3 push 0x11b80ff8 */
  push32((uint32_t)(0x11b80ff8u));
  /* 11b726b8 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b726beu);
  /* 11b726be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b726c1:;
  /* 11b726c1 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11b726c3 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b726c9u);
  /* 11b726c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b726cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b726ce je 0x11b7273c */
  if (C.zf) goto L_11b7273c;
  /* 11b726d0 push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b726d5 push 0x11b81028 */
  push32((uint32_t)(0x11b81028u));
  /* 11b726da call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b726e0u);
  /* 11b726e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b726e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b726e5 jne 0x11b72715 */
  if (!C.zf) goto L_11b72715;
  /* 11b726e7 push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b726ec push 0x11b80ff8 */
  push32((uint32_t)(0x11b80ff8u));
  /* 11b726f1 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b726f7u);
  /* 11b726f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b726fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b726fc jne 0x11b72715 */
  if (!C.zf) goto L_11b72715;
  /* 11b726fe push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b72703 push 0x11b81000 */
  push32((uint32_t)(0x11b81000u));
  /* 11b72708 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b7270eu);
  /* 11b7270e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72713 je 0x11b7273c */
  if (C.zf) goto L_11b7273c;
L_11b72715:;
  /* 11b72715 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72717 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11b72719 call ebp */
  call_ind((uint32_t)(EBP), 0x11b7271bu);
  /* 11b7271b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7271d push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11b7271f call ebp */
  call_ind((uint32_t)(EBP), 0x11b72721u);
  /* 11b72721 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b72726 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b72728 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b7272eu);
  /* 11b7272e push 0x11b7dc28 */
  push32((uint32_t)(0x11b7dc28u));
  /* 11b72733 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b72739u);
  /* 11b72739 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7273c:;
  /* 11b7273c push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b7273e call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b72744u);
  /* 11b72744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72747 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72749 je 0x11b72774 */
  if (C.zf) goto L_11b72774;
  /* 11b7274b push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11b7274d call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b72753u);
  /* 11b72753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72756 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72758 je 0x11b72774 */
  if (C.zf) goto L_11b72774;
  /* 11b7275a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7275c push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11b7275e call ebp */
  call_ind((uint32_t)(EBP), 0x11b72760u);
  /* 11b72760 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72762 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11b72764 call ebp */
  call_ind((uint32_t)(EBP), 0x11b72766u);
  /* 11b72766 push 0x11b7dc20 */
  push32((uint32_t)(0x11b7dc20u));
  /* 11b7276b call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b72771u);
  /* 11b72771 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72774:;
  /* 11b72774 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11b72776 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7277cu);
  /* 11b7277c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7277f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72781 je 0x11b727c1 */
  if (C.zf) goto L_11b727c1;
  /* 11b72783 push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b72788 push 0x11b81138 */
  push32((uint32_t)(0x11b81138u));
  /* 11b7278d call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72793u);
  /* 11b72793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72798 je 0x11b727c1 */
  if (C.zf) goto L_11b727c1;
  /* 11b7279a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7279c push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11b7279e call ebp */
  call_ind((uint32_t)(EBP), 0x11b727a0u);
  /* 11b727a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b727a2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b727a4 call ebp */
  call_ind((uint32_t)(EBP), 0x11b727a6u);
  /* 11b727a6 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b727ab push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b727ad call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b727b3u);
  /* 11b727b3 push 0x11b7dc18 */
  push32((uint32_t)(0x11b7dc18u));
  /* 11b727b8 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b727beu);
  /* 11b727be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b727c1:;
  /* 11b727c1 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b727c3 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b727c9u);
  /* 11b727c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b727cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b727ce je 0x11b7283f */
  if (C.zf) goto L_11b7283f;
  /* 11b727d0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b727d2 call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b727d8u);
  /* 11b727d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b727db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b727dd je 0x11b7283f */
  if (C.zf) goto L_11b7283f;
  /* 11b727df push 0 */
  push32((uint32_t)(0x0u));
  /* 11b727e1 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b727e3 call ebp */
  call_ind((uint32_t)(EBP), 0x11b727e5u);
  /* 11b727e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b727e7 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11b727e9 call ebp */
  call_ind((uint32_t)(EBP), 0x11b727ebu);
  /* 11b727eb push 0x11b7dc10 */
  push32((uint32_t)(0x11b7dc10u));
  /* 11b727f0 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b727f6u);
  /* 11b727f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b727f8 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b727feu);
  /* 11b727fe mov ecx, 0xa */
  ECX = (0xau);
  /* 11b72803 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b72805 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b72808 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b7280b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b7280e push eax */
  push32((uint32_t)(EAX));
  /* 11b7280f push 5 */
  push32((uint32_t)(0x5u));
  /* 11b72811 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72813 call dword ptr [0x11b7b12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b12c))), 0x11b72819u);
  /* 11b72819 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7281b call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b72821u);
  /* 11b72821 mov ecx, 0xa */
  ECX = (0xau);
  /* 11b72826 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b72828 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b7282b lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11b7282e shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b72831 push ecx */
  push32((uint32_t)(ECX));
  /* 11b72832 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b72834 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72836 call dword ptr [0x11b7b12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b12c))), 0x11b7283cu);
  /* 11b7283c add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7283f:;
  /* 11b7283f push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11b72841 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b72847u);
  /* 11b72847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7284a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7284c je 0x11b728ac */
  if (C.zf) goto L_11b728ac;
  /* 11b7284e push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b72853 push 0x11b81028 */
  push32((uint32_t)(0x11b81028u));
  /* 11b72858 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b7285eu);
  /* 11b7285e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72863 jne 0x11b728ac */
  if (!C.zf) goto L_11b728ac;
  /* 11b72865 push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b7286a push 0x11b80ff8 */
  push32((uint32_t)(0x11b80ff8u));
  /* 11b7286f call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72875u);
  /* 11b72875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7287a jne 0x11b728ac */
  if (!C.zf) goto L_11b728ac;
  /* 11b7287c push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b72881 push 0x11b81000 */
  push32((uint32_t)(0x11b81000u));
  /* 11b72886 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b7288cu);
  /* 11b7288c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7288f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72891 jne 0x11b728ac */
  if (!C.zf) goto L_11b728ac;
  /* 11b72893 push eax */
  push32((uint32_t)(EAX));
  /* 11b72894 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11b72896 call ebp */
  call_ind((uint32_t)(EBP), 0x11b72898u);
  /* 11b72898 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7289a push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11b7289c call ebp */
  call_ind((uint32_t)(EBP), 0x11b7289eu);
  /* 11b7289e push 0x11b7dc08 */
  push32((uint32_t)(0x11b7dc08u));
  /* 11b728a3 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b728a9u);
  /* 11b728a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b728ac:;
  /* 11b728ac push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b728ae call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b728b4u);
  /* 11b728b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b728b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b728b9 je 0x11b728eb */
  if (C.zf) goto L_11b728eb;
  /* 11b728bb push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b728c0 push 0x11b81138 */
  push32((uint32_t)(0x11b81138u));
  /* 11b728c5 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b728cbu);
  /* 11b728cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b728ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b728d0 jne 0x11b728eb */
  if (!C.zf) goto L_11b728eb;
  /* 11b728d2 push eax */
  push32((uint32_t)(EAX));
  /* 11b728d3 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b728d5 call ebp */
  call_ind((uint32_t)(EBP), 0x11b728d7u);
  /* 11b728d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b728d9 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11b728db call ebp */
  call_ind((uint32_t)(EBP), 0x11b728ddu);
  /* 11b728dd push 0x11b7dc00 */
  push32((uint32_t)(0x11b7dc00u));
  /* 11b728e2 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b728e8u);
  /* 11b728e8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b728eb:;
  /* 11b728eb push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11b728ed call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b728f3u);
  /* 11b728f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b728f6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b728f8 je 0x11b72942 */
  if (C.zf) goto L_11b72942;
  /* 11b728fa push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b728ff call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72905u);
  /* 11b72905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7290a jne 0x11b72942 */
  if (!C.zf) goto L_11b72942;
  /* 11b7290c push 0x11b81260 */
  push32((uint32_t)(0x11b81260u));
  /* 11b72911 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72917u);
  /* 11b72917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7291a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7291c je 0x11b72942 */
  if (C.zf) goto L_11b72942;
  /* 11b7291e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72920 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11b72922 call ebp */
  call_ind((uint32_t)(EBP), 0x11b72924u);
  /* 11b72924 push 0x11b7dbf8 */
  push32((uint32_t)(0x11b7dbf8u));
  /* 11b72929 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b7292fu);
  /* 11b7292f push 0x11b80cb8 */
  push32((uint32_t)(0x11b80cb8u));
  /* 11b72934 push 0x11b81260 */
  push32((uint32_t)(0x11b81260u));
  /* 11b72939 call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b7293fu);
  /* 11b7293f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72942:;
  /* 11b72942 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 11b72944 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7294au);
  /* 11b7294a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7294d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7294f je 0x11b7312a */
  if (C.zf) goto L_11b7312a;
  /* 11b72955 push 0x11b80dd0 */
  push32((uint32_t)(0x11b80dd0u));
  /* 11b7295a call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72960u);
  /* 11b72960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72963 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72965 je 0x11b7312a */
  if (C.zf) goto L_11b7312a;
  /* 11b7296b push 7 */
  push32((uint32_t)(0x7u));
  /* 11b7296d call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b72973u);
  /* 11b72973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72976 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72978 je 0x11b72a99 */
  if (C.zf) goto L_11b72a99;
  /* 11b7297e mov ebx, dword ptr [0x11b7b124] */
  EBX = (r32((uint32_t)(0x11b7b124)));
  /* 11b72984 push 0x11b80cd0 */
  push32((uint32_t)(0x11b80cd0u));
  /* 11b72989 call ebx */
  call_ind((uint32_t)(EBX), 0x11b7298bu);
  /* 11b7298b mov edx, eax */
  EDX = (EAX);
  /* 11b7298d push 0x11b80cc0 */
  push32((uint32_t)(0x11b80cc0u));
  /* 11b72992 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 11b72996 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72998u);
  /* 11b72998 mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11b7299c push 0x11b80cc8 */
  push32((uint32_t)(0x11b80cc8u));
  /* 11b729a1 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b729a3 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b729a9u);
  /* 11b729a9 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b729ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b729ae cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b729b1 jge 0x11b72a93 */
  if ((C.sf==C.of)) goto L_11b72a93;
  /* 11b729b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b729b9 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b729bfu);
  /* 11b729bf mov ecx, 5 */
  ECX = (0x5u);
  /* 11b729c4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b729c6 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b729c9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b729cc lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b729cf shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11b729d2 push edx */
  push32((uint32_t)(EDX));
  /* 11b729d3 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b729d5 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b729dbu);
  /* 11b729db push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b729dd push 0x11b811f8 */
  push32((uint32_t)(0x11b811f8u));
  /* 11b729e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b729e4 push 0x11b81208 */
  push32((uint32_t)(0x11b81208u));
  /* 11b729e9 push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b729ee push 0x11b80d38 */
  push32((uint32_t)(0x11b80d38u));
  /* 11b729f3 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b729f9u);
  /* 11b729f9 mov ebx, dword ptr [0x11b7b124] */
  EBX = (r32((uint32_t)(0x11b7b124)));
  /* 11b729ff push 0x11b80cc8 */
  push32((uint32_t)(0x11b80cc8u));
  /* 11b72a04 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72a06u);
  /* 11b72a06 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72a0b jne 0x11b72a26 */
  if (!C.zf) goto L_11b72a26;
  /* 11b72a0d push 0x11b80cc8 */
  push32((uint32_t)(0x11b80cc8u));
  /* 11b72a12 push 0x11b80d38 */
  push32((uint32_t)(0x11b80d38u));
  /* 11b72a17 call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b72a1du);
  /* 11b72a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72a1f push 0x11b80cc8 */
  push32((uint32_t)(0x11b80cc8u));
  /* 11b72a24 jmp 0x11b72a7d */
  goto L_11b72a7d;
L_11b72a26:;
  /* 11b72a26 push 0x11b80cc0 */
  push32((uint32_t)(0x11b80cc0u));
  /* 11b72a2b call ebx */
  call_ind((uint32_t)(EBX), 0x11b72a2du);
  /* 11b72a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72a32 jne 0x11b72a58 */
  if (!C.zf) goto L_11b72a58;
  /* 11b72a34 push 0x11b80cc0 */
  push32((uint32_t)(0x11b80cc0u));
  /* 11b72a39 push 0x11b80d38 */
  push32((uint32_t)(0x11b80d38u));
  /* 11b72a3e call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b72a44u);
  /* 11b72a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72a46 push 0x11b80cc0 */
  push32((uint32_t)(0x11b80cc0u));
  /* 11b72a4b call esi */
  call_ind((uint32_t)(ESI), 0x11b72a4du);
  /* 11b72a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72a51 push 0x11b81050 */
  push32((uint32_t)(0x11b81050u));
  /* 11b72a56 jmp 0x11b72a88 */
  goto L_11b72a88;
L_11b72a58:;
  /* 11b72a58 push 0x11b80cd0 */
  push32((uint32_t)(0x11b80cd0u));
  /* 11b72a5d call ebx */
  call_ind((uint32_t)(EBX), 0x11b72a5fu);
  /* 11b72a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72a62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72a64 jne 0x11b72a93 */
  if (!C.zf) goto L_11b72a93;
  /* 11b72a66 push 0x11b80cd0 */
  push32((uint32_t)(0x11b80cd0u));
  /* 11b72a6b push 0x11b80d38 */
  push32((uint32_t)(0x11b80d38u));
  /* 11b72a70 call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b72a76u);
  /* 11b72a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72a78 push 0x11b80cd0 */
  push32((uint32_t)(0x11b80cd0u));
L_11b72a7d:;
  /* 11b72a7d call esi */
  call_ind((uint32_t)(ESI), 0x11b72a7fu);
  /* 11b72a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72a83 push 0x11b81058 */
  push32((uint32_t)(0x11b81058u));
L_11b72a88:;
  /* 11b72a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72a8a call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b72a90u);
  /* 11b72a90 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72a93:;
  /* 11b72a93 mov ebx, dword ptr [0x11b7b0d0] */
  EBX = (r32((uint32_t)(0x11b7b0d0)));
L_11b72a99:;
  /* 11b72a99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72a9b push 0x11b80cc8 */
  push32((uint32_t)(0x11b80cc8u));
  /* 11b72aa0 call esi */
  call_ind((uint32_t)(ESI), 0x11b72aa2u);
  /* 11b72aa2 push 0x11b80cc8 */
  push32((uint32_t)(0x11b80cc8u));
  /* 11b72aa7 push 0x11b81088 */
  push32((uint32_t)(0x11b81088u));
  /* 11b72aac call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72ab2u);
  /* 11b72ab2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72ab7 jne 0x11b72ad0 */
  if (!C.zf) goto L_11b72ad0;
  /* 11b72ab9 push 0x11b80cc8 */
  push32((uint32_t)(0x11b80cc8u));
  /* 11b72abe push 0x11b81090 */
  push32((uint32_t)(0x11b81090u));
  /* 11b72ac3 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72ac9u);
  /* 11b72ac9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72acc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72ace je 0x11b72b24 */
  if (C.zf) goto L_11b72b24;
L_11b72ad0:;
  /* 11b72ad0 push 0x11b80f90 */
  push32((uint32_t)(0x11b80f90u));
  /* 11b72ad5 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72adbu);
  /* 11b72adb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72ae0 je 0x11b72ae9 */
  if (C.zf) goto L_11b72ae9;
  /* 11b72ae2 push 0x11b80f90 */
  push32((uint32_t)(0x11b80f90u));
  /* 11b72ae7 jmp 0x11b72b19 */
  goto L_11b72b19;
L_11b72ae9:;
  /* 11b72ae9 push 0x11b80fe0 */
  push32((uint32_t)(0x11b80fe0u));
  /* 11b72aee call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72af4u);
  /* 11b72af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72af7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72af9 je 0x11b72b02 */
  if (C.zf) goto L_11b72b02;
  /* 11b72afb push 0x11b80fe0 */
  push32((uint32_t)(0x11b80fe0u));
  /* 11b72b00 jmp 0x11b72b19 */
  goto L_11b72b19;
L_11b72b02:;
  /* 11b72b02 push 0x11b80fe8 */
  push32((uint32_t)(0x11b80fe8u));
  /* 11b72b07 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72b0du);
  /* 11b72b0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72b10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72b12 je 0x11b72b24 */
  if (C.zf) goto L_11b72b24;
  /* 11b72b14 push 0x11b80fe8 */
  push32((uint32_t)(0x11b80fe8u));
L_11b72b19:;
  /* 11b72b19 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72b1b call dword ptr [0x11b7b130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b130))), 0x11b72b21u);
  /* 11b72b21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72b24:;
  /* 11b72b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72b26 push 0x11b80cc0 */
  push32((uint32_t)(0x11b80cc0u));
  /* 11b72b2b call esi */
  call_ind((uint32_t)(ESI), 0x11b72b2du);
  /* 11b72b2d push 0x11b80cc0 */
  push32((uint32_t)(0x11b80cc0u));
  /* 11b72b32 push 0x11b81088 */
  push32((uint32_t)(0x11b81088u));
  /* 11b72b37 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72b3du);
  /* 11b72b3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72b40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72b42 jne 0x11b72b5b */
  if (!C.zf) goto L_11b72b5b;
  /* 11b72b44 push 0x11b80cc0 */
  push32((uint32_t)(0x11b80cc0u));
  /* 11b72b49 push 0x11b81090 */
  push32((uint32_t)(0x11b81090u));
  /* 11b72b4e call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72b54u);
  /* 11b72b54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72b59 je 0x11b72baf */
  if (C.zf) goto L_11b72baf;
L_11b72b5b:;
  /* 11b72b5b push 0x11b80fe0 */
  push32((uint32_t)(0x11b80fe0u));
  /* 11b72b60 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72b66u);
  /* 11b72b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72b6b je 0x11b72b74 */
  if (C.zf) goto L_11b72b74;
  /* 11b72b6d push 0x11b80fe0 */
  push32((uint32_t)(0x11b80fe0u));
  /* 11b72b72 jmp 0x11b72ba4 */
  goto L_11b72ba4;
L_11b72b74:;
  /* 11b72b74 push 0x11b80fe8 */
  push32((uint32_t)(0x11b80fe8u));
  /* 11b72b79 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72b7fu);
  /* 11b72b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72b82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72b84 je 0x11b72b8d */
  if (C.zf) goto L_11b72b8d;
  /* 11b72b86 push 0x11b80fe8 */
  push32((uint32_t)(0x11b80fe8u));
  /* 11b72b8b jmp 0x11b72ba4 */
  goto L_11b72ba4;
L_11b72b8d:;
  /* 11b72b8d push 0x11b80f90 */
  push32((uint32_t)(0x11b80f90u));
  /* 11b72b92 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72b98u);
  /* 11b72b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72b9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72b9d je 0x11b72baf */
  if (C.zf) goto L_11b72baf;
  /* 11b72b9f push 0x11b80f90 */
  push32((uint32_t)(0x11b80f90u));
L_11b72ba4:;
  /* 11b72ba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72ba6 call dword ptr [0x11b7b130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b130))), 0x11b72bacu);
  /* 11b72bac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72baf:;
  /* 11b72baf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72bb1 push 0x11b80cd0 */
  push32((uint32_t)(0x11b80cd0u));
  /* 11b72bb6 call esi */
  call_ind((uint32_t)(ESI), 0x11b72bb8u);
  /* 11b72bb8 push 0x11b80cd0 */
  push32((uint32_t)(0x11b80cd0u));
  /* 11b72bbd push 0x11b81088 */
  push32((uint32_t)(0x11b81088u));
  /* 11b72bc2 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72bc8u);
  /* 11b72bc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72bcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72bcd jne 0x11b72be6 */
  if (!C.zf) goto L_11b72be6;
  /* 11b72bcf push 0x11b80cd0 */
  push32((uint32_t)(0x11b80cd0u));
  /* 11b72bd4 push 0x11b81090 */
  push32((uint32_t)(0x11b81090u));
  /* 11b72bd9 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72bdfu);
  /* 11b72bdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72be2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72be4 je 0x11b72c3a */
  if (C.zf) goto L_11b72c3a;
L_11b72be6:;
  /* 11b72be6 push 0x11b80fe8 */
  push32((uint32_t)(0x11b80fe8u));
  /* 11b72beb call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72bf1u);
  /* 11b72bf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72bf6 je 0x11b72bff */
  if (C.zf) goto L_11b72bff;
  /* 11b72bf8 push 0x11b80fe8 */
  push32((uint32_t)(0x11b80fe8u));
  /* 11b72bfd jmp 0x11b72c2f */
  goto L_11b72c2f;
L_11b72bff:;
  /* 11b72bff push 0x11b80f90 */
  push32((uint32_t)(0x11b80f90u));
  /* 11b72c04 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72c0au);
  /* 11b72c0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72c0f je 0x11b72c18 */
  if (C.zf) goto L_11b72c18;
  /* 11b72c11 push 0x11b80f90 */
  push32((uint32_t)(0x11b80f90u));
  /* 11b72c16 jmp 0x11b72c2f */
  goto L_11b72c2f;
L_11b72c18:;
  /* 11b72c18 push 0x11b80fe0 */
  push32((uint32_t)(0x11b80fe0u));
  /* 11b72c1d call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72c23u);
  /* 11b72c23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72c26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72c28 je 0x11b72c3a */
  if (C.zf) goto L_11b72c3a;
  /* 11b72c2a push 0x11b80fe0 */
  push32((uint32_t)(0x11b80fe0u));
L_11b72c2f:;
  /* 11b72c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72c31 call dword ptr [0x11b7b130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b130))), 0x11b72c37u);
  /* 11b72c37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72c3a:;
  /* 11b72c3a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b72c3c call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b72c42u);
  /* 11b72c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72c45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72c47 jne 0x11b72c5f */
  if (!C.zf) goto L_11b72c5f;
  /* 11b72c49 push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72c4e call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72c54u);
  /* 11b72c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72c57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72c59 jne 0x11b72cfb */
  if (!C.zf) goto L_11b72cfb;
L_11b72c5f:;
  /* 11b72c5f push 0x11b80f08 */
  push32((uint32_t)(0x11b80f08u));
  /* 11b72c64 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72c6au);
  /* 11b72c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72c6f jne 0x11b72cfb */
  if (!C.zf) goto L_11b72cfb;
  /* 11b72c75 push 0x11b81160 */
  push32((uint32_t)(0x11b81160u));
  /* 11b72c7a call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72c80u);
  /* 11b72c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72c85 jne 0x11b72cfb */
  if (!C.zf) goto L_11b72cfb;
  /* 11b72c87 push eax */
  push32((uint32_t)(EAX));
  /* 11b72c88 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b72c8a call ebp */
  call_ind((uint32_t)(EBP), 0x11b72c8cu);
  /* 11b72c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72c8e push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72c93 call esi */
  call_ind((uint32_t)(ESI), 0x11b72c95u);
  /* 11b72c95 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72c97 call dword ptr [0x11b7b140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b140))), 0x11b72c9du);
  /* 11b72c9d push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11b72ca2 push 0x11b80f28 */
  push32((uint32_t)(0x11b80f28u));
  /* 11b72ca7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72ca9 push 0x11b80ba0 */
  push32((uint32_t)(0x11b80ba0u));
  /* 11b72cae push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b72cb3 push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72cb8 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b72cbeu);
  /* 11b72cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72cc0 push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72cc5 call esi */
  call_ind((uint32_t)(ESI), 0x11b72cc7u);
  /* 11b72cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72cc9 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 11b72cce push 0x11b810b8 */
  push32((uint32_t)(0x11b810b8u));
  /* 11b72cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72cd5 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b72cdbu);
  /* 11b72cdb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72cde push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b72ce0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b72ce2 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b72ce8u);
  /* 11b72ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72cea push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b72cec call ebp */
  call_ind((uint32_t)(EBP), 0x11b72ceeu);
  /* 11b72cee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72cf1 mov dword ptr [0x11b812c0], 0 */
  w32((uint32_t)(0x11b812c0), (0x0u));
L_11b72cfb:;
  /* 11b72cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72cfd push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72d02 call esi */
  call_ind((uint32_t)(ESI), 0x11b72d04u);
  /* 11b72d04 push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72d09 push 0x11b80f28 */
  push32((uint32_t)(0x11b80f28u));
  /* 11b72d0e call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72d14u);
  /* 11b72d14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72d19 je 0x11b72e73 */
  if (C.zf) goto L_11b72e73;
  /* 11b72d1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72d21 call dword ptr [0x11b7b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b144))), 0x11b72d27u);
  /* 11b72d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72d2a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72d2c je 0x11b72e73 */
  if (C.zf) goto L_11b72e73;
  /* 11b72d32 cmp dword ptr [0x11b812c0], 0x1e */
  { uint32_t _a=(r32((uint32_t)(0x11b812c0))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b72d39 jge 0x11b72e1f */
  if ((C.sf==C.of)) goto L_11b72e1f;
  /* 11b72d3f push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b72d41 call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b72d47u);
  /* 11b72d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72d4a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72d4c je 0x11b72e1f */
  if (C.zf) goto L_11b72e1f;
  /* 11b72d52 mov edx, dword ptr [0x11b812c0] */
  EDX = (r32((uint32_t)(0x11b812c0)));
  /* 11b72d58 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b72d5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b72d5b push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b72d5d mov dword ptr [0x11b812c0], edx */
  w32((uint32_t)(0x11b812c0), (EDX));
  /* 11b72d63 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b72d69u);
  /* 11b72d69 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 11b72d6d push eax */
  push32((uint32_t)(EAX));
  /* 11b72d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72d70 push 0x11b80dd0 */
  push32((uint32_t)(0x11b80dd0u));
  /* 11b72d75 call dword ptr [0x11b7b13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b13c))), 0x11b72d7bu);
  /* 11b72d7b lea ecx, [esp + 0x2c] */
  ECX = ((uint32_t)(ESP + 0x2c));
  /* 11b72d7f mov byte ptr [esp + 0x27], al */
  w8((uint32_t)(ESP + 0x27), (AL));
  /* 11b72d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11b72d84 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72d86 push 0x11b80dd0 */
  push32((uint32_t)(0x11b80dd0u));
  /* 11b72d8b call dword ptr [0x11b7b13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b13c))), 0x11b72d91u);
  /* 11b72d91 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72d94 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72d96 je 0x11b72db9 */
  if (C.zf) goto L_11b72db9;
  /* 11b72d98 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b72d9a push 0x11b810b8 */
  push32((uint32_t)(0x11b810b8u));
  /* 11b72d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72da1 push 0x11b80fa8 */
  push32((uint32_t)(0x11b80fa8u));
  /* 11b72da6 push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b72dab push 0x11b80ca8 */
  push32((uint32_t)(0x11b80ca8u));
  /* 11b72db0 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b72db6u);
  /* 11b72db6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72db9:;
  /* 11b72db9 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 11b72dbd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72dbf je 0x11b72de2 */
  if (C.zf) goto L_11b72de2;
  /* 11b72dc1 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b72dc3 push 0x11b81098 */
  push32((uint32_t)(0x11b81098u));
  /* 11b72dc8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72dca push 0x11b80fb0 */
  push32((uint32_t)(0x11b80fb0u));
  /* 11b72dcf push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b72dd4 push 0x11b80c70 */
  push32((uint32_t)(0x11b80c70u));
  /* 11b72dd9 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b72ddfu);
  /* 11b72ddf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72de2:;
  /* 11b72de2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72de4 push 0x11b80ca8 */
  push32((uint32_t)(0x11b80ca8u));
  /* 11b72de9 call esi */
  call_ind((uint32_t)(ESI), 0x11b72debu);
  /* 11b72deb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72ded push 0x11b80c70 */
  push32((uint32_t)(0x11b80c70u));
  /* 11b72df2 call esi */
  call_ind((uint32_t)(ESI), 0x11b72df4u);
  /* 11b72df4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72df6 call dword ptr [0x11b7b14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b14c))), 0x11b72dfcu);
  /* 11b72dfc push 0x11b81160 */
  push32((uint32_t)(0x11b81160u));
  /* 11b72e01 push 0x11b80ca8 */
  push32((uint32_t)(0x11b80ca8u));
  /* 11b72e06 call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b72e0cu);
  /* 11b72e0c push 0x11b80f08 */
  push32((uint32_t)(0x11b80f08u));
  /* 11b72e11 push 0x11b80c70 */
  push32((uint32_t)(0x11b80c70u));
  /* 11b72e16 call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b72e1cu);
  /* 11b72e1c add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72e1f:;
  /* 11b72e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72e21 push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72e26 call esi */
  call_ind((uint32_t)(ESI), 0x11b72e28u);
  /* 11b72e28 mov eax, dword ptr [0x11b812c0] */
  EAX = (r32((uint32_t)(0x11b812c0)));
  /* 11b72e2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72e30 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b72e33 jne 0x11b72e73 */
  if (!C.zf) goto L_11b72e73;
  /* 11b72e35 mov ebx, dword ptr [0x11b7b124] */
  EBX = (r32((uint32_t)(0x11b7b124)));
  /* 11b72e3b push 0x11b81160 */
  push32((uint32_t)(0x11b81160u));
  /* 11b72e40 call ebx */
  call_ind((uint32_t)(EBX), 0x11b72e42u);
  /* 11b72e42 mov edx, eax */
  EDX = (EAX);
  /* 11b72e44 push 0x11b80f08 */
  push32((uint32_t)(0x11b80f08u));
  /* 11b72e49 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 11b72e4d call ebx */
  call_ind((uint32_t)(EBX), 0x11b72e4fu);
  /* 11b72e4f mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11b72e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72e55 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72e57 call dword ptr [0x11b7b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b150))), 0x11b72e5du);
  /* 11b72e5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72e60 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b72e62 jne 0x11b72e6d */
  if (!C.zf) goto L_11b72e6d;
  /* 11b72e64 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72e66 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b72e68 call ebp */
  call_ind((uint32_t)(EBP), 0x11b72e6au);
  /* 11b72e6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72e6d:;
  /* 11b72e6d mov ebx, dword ptr [0x11b7b0d0] */
  EBX = (r32((uint32_t)(0x11b7b0d0)));
L_11b72e73:;
  /* 11b72e73 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b72e75 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b72e7bu);
  /* 11b72e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72e7e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72e80 je 0x11b72f24 */
  if (C.zf) goto L_11b72f24;
  /* 11b72e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72e88 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b72e8a call ebp */
  call_ind((uint32_t)(EBP), 0x11b72e8cu);
  /* 11b72e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72e8e push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72e93 call esi */
  call_ind((uint32_t)(ESI), 0x11b72e95u);
  /* 11b72e95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72e98 call 0x11b74fb0 */
  push32(0x11b72e9du); f_11b74fb0();
  /* 11b72e9d and eax, 0x80000001 */
  { uint32_t _r=(EAX)&(0x80000001u); EAX = (_r); fl_logic(_r,32); }
  /* 11b72ea2 jns 0x11b72ea9 */
  if (!C.sf) goto L_11b72ea9;
  /* 11b72ea4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b72ea5 or eax, 0xfffffffe */
  { uint32_t _r=(EAX)|(0xfffffffeu); EAX = (_r); fl_logic(_r,32); }
  /* 11b72ea8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b72ea9:;
  /* 11b72ea9 mov dword ptr [0x11b7d038], eax */
  w32((uint32_t)(0x11b7d038), (EAX));
  /* 11b72eae sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b72eb1 je 0x11b72eb8 */
  if (C.zf) goto L_11b72eb8;
  /* 11b72eb3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b72eb4 je 0x11b72eee */
  if (C.zf) goto L_11b72eee;
  /* 11b72eb6 jmp 0x11b72f24 */
  goto L_11b72f24;
L_11b72eb8:;
  /* 11b72eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72eba push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b72ebc push 0x11b80f28 */
  push32((uint32_t)(0x11b80f28u));
  /* 11b72ec1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72ec3 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b72ec9u);
  /* 11b72ec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72ecd push 0x11b80df0 */
  push32((uint32_t)(0x11b80df0u));
  /* 11b72ed2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72ed4 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b72edau);
  /* 11b72eda push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72edc push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b72ede push 0x11b81090 */
  push32((uint32_t)(0x11b81090u));
  /* 11b72ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72ee5 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b72eebu);
  /* 11b72eeb add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72eee:;
  /* 11b72eee push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72ef0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b72ef2 push 0x11b80f28 */
  push32((uint32_t)(0x11b80f28u));
  /* 11b72ef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72ef9 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b72effu);
  /* 11b72eff push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72f03 push 0x11b80df0 */
  push32((uint32_t)(0x11b80df0u));
  /* 11b72f08 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72f0a call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b72f10u);
  /* 11b72f10 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b72f12 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11b72f14 push 0x11b81088 */
  push32((uint32_t)(0x11b81088u));
  /* 11b72f19 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72f1b call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b72f21u);
  /* 11b72f21 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72f24:;
  /* 11b72f24 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b72f26 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b72f2cu);
  /* 11b72f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72f2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72f31 je 0x11b72f90 */
  if (C.zf) goto L_11b72f90;
  /* 11b72f33 push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72f38 push 0x11b81090 */
  push32((uint32_t)(0x11b81090u));
  /* 11b72f3d call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72f43u);
  /* 11b72f43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72f48 jne 0x11b72f61 */
  if (!C.zf) goto L_11b72f61;
  /* 11b72f4a push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72f4f push 0x11b81088 */
  push32((uint32_t)(0x11b81088u));
  /* 11b72f54 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b72f5au);
  /* 11b72f5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72f5f je 0x11b72f90 */
  if (C.zf) goto L_11b72f90;
L_11b72f61:;
  /* 11b72f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72f63 push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72f68 call esi */
  call_ind((uint32_t)(ESI), 0x11b72f6au);
  /* 11b72f6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72f6c call dword ptr [0x11b7b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b144))), 0x11b72f72u);
  /* 11b72f72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72f75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72f77 je 0x11b72f90 */
  if (C.zf) goto L_11b72f90;
  /* 11b72f79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72f7b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b72f7d call ebp */
  call_ind((uint32_t)(EBP), 0x11b72f7fu);
  /* 11b72f7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72f81 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b72f83 call ebp */
  call_ind((uint32_t)(EBP), 0x11b72f85u);
  /* 11b72f85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72f87 call dword ptr [0x11b7b148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b148))), 0x11b72f8du);
  /* 11b72f8d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b72f90:;
  /* 11b72f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72f92 push 0x11b80d78 */
  push32((uint32_t)(0x11b80d78u));
  /* 11b72f97 call esi */
  call_ind((uint32_t)(ESI), 0x11b72f99u);
  /* 11b72f99 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b72f9b call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b72fa1u);
  /* 11b72fa1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72fa4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72fa6 jne 0x11b72fe7 */
  if (!C.zf) goto L_11b72fe7;
  /* 11b72fa8 push 0x11b80ce8 */
  push32((uint32_t)(0x11b80ce8u));
  /* 11b72fad call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b72fb3u);
  /* 11b72fb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72fb8 je 0x11b72fe7 */
  if (C.zf) goto L_11b72fe7;
  /* 11b72fba mov eax, dword ptr [0x11b7d038] */
  EAX = (r32((uint32_t)(0x11b7d038)));
  /* 11b72fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72fc1 jne 0x11b72fe7 */
  if (!C.zf) goto L_11b72fe7;
  /* 11b72fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b72fc5 push 0x11b80f08 */
  push32((uint32_t)(0x11b80f08u));
  /* 11b72fca call esi */
  call_ind((uint32_t)(ESI), 0x11b72fccu);
  /* 11b72fcc push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72fce push 0x11b81160 */
  push32((uint32_t)(0x11b81160u));
  /* 11b72fd3 call esi */
  call_ind((uint32_t)(ESI), 0x11b72fd5u);
  /* 11b72fd5 push 0x11b80ce8 */
  push32((uint32_t)(0x11b80ce8u));
  /* 11b72fda push 1 */
  push32((uint32_t)(0x1u));
  /* 11b72fdc call dword ptr [0x11b7b130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b130))), 0x11b72fe2u);
  /* 11b72fe2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72fe5 jmp 0x11b73028 */
  goto L_11b73028;
L_11b72fe7:;
  /* 11b72fe7 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b72fe9 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b72fefu);
  /* 11b72fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b72ff2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b72ff4 jne 0x11b73028 */
  if (!C.zf) goto L_11b73028;
  /* 11b72ff6 mov eax, dword ptr [0x11b7d038] */
  EAX = (r32((uint32_t)(0x11b7d038)));
  /* 11b72ffb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b72ffd jne 0x11b73028 */
  if (!C.zf) goto L_11b73028;
  /* 11b72fff push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73001 call dword ptr [0x11b7b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b150))), 0x11b73007u);
  /* 11b73007 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7300a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7300c jne 0x11b73028 */
  if (!C.zf) goto L_11b73028;
  /* 11b7300e push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b73013 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b73015 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b7301bu);
  /* 11b7301b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7301e mov dword ptr [0x11b7d038], 3 */
  w32((uint32_t)(0x11b7d038), (0x3u));
L_11b73028:;
  /* 11b73028 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b7302a call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73030u);
  /* 11b73030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73033 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73035 jne 0x11b73076 */
  if (!C.zf) goto L_11b73076;
  /* 11b73037 push 0x11b80cf0 */
  push32((uint32_t)(0x11b80cf0u));
  /* 11b7303c call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73042u);
  /* 11b73042 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73047 je 0x11b73076 */
  if (C.zf) goto L_11b73076;
  /* 11b73049 cmp dword ptr [0x11b7d038], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7d038))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b73050 jne 0x11b73076 */
  if (!C.zf) goto L_11b73076;
  /* 11b73052 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73054 push 0x11b80f08 */
  push32((uint32_t)(0x11b80f08u));
  /* 11b73059 call esi */
  call_ind((uint32_t)(ESI), 0x11b7305bu);
  /* 11b7305b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7305d push 0x11b81160 */
  push32((uint32_t)(0x11b81160u));
  /* 11b73062 call esi */
  call_ind((uint32_t)(ESI), 0x11b73064u);
  /* 11b73064 push 0x11b80cf0 */
  push32((uint32_t)(0x11b80cf0u));
  /* 11b73069 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7306b call dword ptr [0x11b7b130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b130))), 0x11b73071u);
  /* 11b73071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73074 jmp 0x11b730b7 */
  goto L_11b730b7;
L_11b73076:;
  /* 11b73076 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b73078 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7307eu);
  /* 11b7307e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73081 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73083 jne 0x11b730b7 */
  if (!C.zf) goto L_11b730b7;
  /* 11b73085 cmp dword ptr [0x11b7d038], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7d038))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7308c jne 0x11b730b7 */
  if (!C.zf) goto L_11b730b7;
  /* 11b7308e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73090 call dword ptr [0x11b7b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b150))), 0x11b73096u);
  /* 11b73096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7309b jne 0x11b730b7 */
  if (!C.zf) goto L_11b730b7;
  /* 11b7309d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b730a2 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b730a4 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b730aau);
  /* 11b730aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b730ad mov dword ptr [0x11b7d038], 3 */
  w32((uint32_t)(0x11b7d038), (0x3u));
L_11b730b7:;
  /* 11b730b7 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b730b9 call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b730bfu);
  /* 11b730bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b730c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b730c4 je 0x11b7312a */
  if (C.zf) goto L_11b7312a;
  /* 11b730c6 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b730c8 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b730ceu);
  /* 11b730ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b730d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b730d3 jne 0x11b7312a */
  if (!C.zf) goto L_11b7312a;
  /* 11b730d5 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11b730da push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b730dc call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b730e2u);
  /* 11b730e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b730e4 push 0x11b80f08 */
  push32((uint32_t)(0x11b80f08u));
  /* 11b730e9 call esi */
  call_ind((uint32_t)(ESI), 0x11b730ebu);
  /* 11b730eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b730ed push 0x11b81160 */
  push32((uint32_t)(0x11b81160u));
  /* 11b730f2 call esi */
  call_ind((uint32_t)(ESI), 0x11b730f4u);
  /* 11b730f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b730f6 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b730f8 push 0x11b810d8 */
  push32((uint32_t)(0x11b810d8u));
  /* 11b730fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b730ff call dword ptr [0x11b7b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b158))), 0x11b73105u);
  /* 11b73105 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b73107 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11b73109 push 0x11b810e0 */
  push32((uint32_t)(0x11b810e0u));
  /* 11b7310e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73110 call dword ptr [0x11b7b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b158))), 0x11b73116u);
  /* 11b73116 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b73118 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11b7311a push 0x11b810e8 */
  push32((uint32_t)(0x11b810e8u));
  /* 11b7311f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73121 call dword ptr [0x11b7b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b158))), 0x11b73127u);
  /* 11b73127 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7312a:;
  /* 11b7312a push 0x11b810b0 */
  push32((uint32_t)(0x11b810b0u));
  /* 11b7312f call dword ptr [0x11b7b15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b15c))), 0x11b73135u);
  /* 11b73135 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 11b73139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7313c fild dword ptr [esp + 0x14] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x14)));
  /* 11b73140 fcomp qword ptr [0x11b812b8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11b812b8)));
  (void)fpu_pop();
  /* 11b73146 fnstsw ax */
  AX = fpu_status();
  /* 11b73148 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11b7314b jne 0x11b731b3 */
  if (!C.zf) goto L_11b731b3;
  /* 11b7314d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7314f call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b73155u);
  /* 11b73155 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 11b73159 push 0x11b7dbf0 */
  push32((uint32_t)(0x11b7dbf0u));
  /* 11b7315e fild dword ptr [esp + 0x1c] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x1c)));
  /* 11b73162 fmul qword ptr [0x11b7b1c0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b7b1c0)));
  /* 11b73168 fadd qword ptr [0x11b7b1b8] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x11b7b1b8)));
  /* 11b7316e fmul qword ptr [0x11b812b8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11b812b8)));
  /* 11b73174 fstp qword ptr [0x11b812b8] */
  wf64((uint32_t)(0x11b812b8), FPU_ST(0));
  (void)fpu_pop();
  /* 11b7317a call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73180u);
  /* 11b73180 push 0x11b7dbdc */
  push32((uint32_t)(0x11b7dbdcu));
  /* 11b73185 push 0x11b7da44 */
  push32((uint32_t)(0x11b7da44u));
  /* 11b7318a call ebx */
  call_ind((uint32_t)(EBX), 0x11b7318cu);
  /* 11b7318c push 0x11b7dbc8 */
  push32((uint32_t)(0x11b7dbc8u));
  /* 11b73191 push 0x11b7da44 */
  push32((uint32_t)(0x11b7da44u));
  /* 11b73196 call ebx */
  call_ind((uint32_t)(EBX), 0x11b73198u);
  /* 11b73198 push 0x11b7dbc8 */
  push32((uint32_t)(0x11b7dbc8u));
  /* 11b7319d push 0x11b7da44 */
  push32((uint32_t)(0x11b7da44u));
  /* 11b731a2 call ebx */
  call_ind((uint32_t)(EBX), 0x11b731a4u);
  /* 11b731a4 push 0x11b7dbc8 */
  push32((uint32_t)(0x11b7dbc8u));
  /* 11b731a9 push 0x11b7da44 */
  push32((uint32_t)(0x11b7da44u));
  /* 11b731ae call ebx */
  call_ind((uint32_t)(EBX), 0x11b731b0u);
  /* 11b731b0 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b731b3:;
  /* 11b731b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b731b5 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b731bbu);
  /* 11b731bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b731be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b731c0 je 0x11b7324b */
  if (C.zf) goto L_11b7324b;
  /* 11b731c6 push 0x11b810b0 */
  push32((uint32_t)(0x11b810b0u));
  /* 11b731cb push 0x11b81048 */
  push32((uint32_t)(0x11b81048u));
  /* 11b731d0 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b731d6u);
  /* 11b731d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b731d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b731db je 0x11b7324b */
  if (C.zf) goto L_11b7324b;
  /* 11b731dd push 0x11b80ee8 */
  push32((uint32_t)(0x11b80ee8u));
  /* 11b731e2 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b731e8u);
  /* 11b731e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b731eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b731ed je 0x11b7324b */
  if (C.zf) goto L_11b7324b;
  /* 11b731ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11b731f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b731f3 call ebp */
  call_ind((uint32_t)(EBP), 0x11b731f5u);
  /* 11b731f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b731f7 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11b731f9 call ebp */
  call_ind((uint32_t)(EBP), 0x11b731fbu);
  /* 11b731fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b731fd call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b73203u);
  /* 11b73203 push 0x11b7dbc0 */
  push32((uint32_t)(0x11b7dbc0u));
  /* 11b73208 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b7320eu);
  /* 11b7320e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b73210 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73212 push 0x11b80de8 */
  push32((uint32_t)(0x11b80de8u));
  /* 11b73217 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b7321du);
  /* 11b7321d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7321f push 0x11b80ee8 */
  push32((uint32_t)(0x11b80ee8u));
  /* 11b73224 call esi */
  call_ind((uint32_t)(ESI), 0x11b73226u);
  /* 11b73226 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73228 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7322a call dword ptr [0x11b7b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b164))), 0x11b73230u);
  /* 11b73230 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b73232 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b73238u);
  /* 11b73238 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b7323a call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b73240u);
  /* 11b73240 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11b73242 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b73248u);
  /* 11b73248 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7324b:;
  /* 11b7324b push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11b7324d call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73253u);
  /* 11b73253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73256 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73258 je 0x11b732b3 */
  if (C.zf) goto L_11b732b3;
  /* 11b7325a push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11b7325c call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73262u);
  /* 11b73262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73265 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73267 jne 0x11b732b3 */
  if (!C.zf) goto L_11b732b3;
  /* 11b73269 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7326b push 0x11b80da8 */
  push32((uint32_t)(0x11b80da8u));
  /* 11b73270 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73276u);
  /* 11b73276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7327b je 0x11b732b3 */
  if (C.zf) goto L_11b732b3;
  /* 11b7327d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7327f call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73285u);
  /* 11b73285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7328a jne 0x11b732b3 */
  if (!C.zf) goto L_11b732b3;
  /* 11b7328c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7328e push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11b73290 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73292u);
  /* 11b73292 push 0x11b7dbb8 */
  push32((uint32_t)(0x11b7dbb8u));
  /* 11b73297 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b7329du);
  /* 11b7329d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7329f push 0x11b80b38 */
  push32((uint32_t)(0x11b80b38u));
  /* 11b732a4 call esi */
  call_ind((uint32_t)(ESI), 0x11b732a6u);
  /* 11b732a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b732a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b732aa call dword ptr [0x11b7b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b164))), 0x11b732b0u);
  /* 11b732b0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b732b3:;
  /* 11b732b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b732b5 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b732bbu);
  /* 11b732bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b732be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b732c0 je 0x11b73337 */
  if (C.zf) goto L_11b73337;
  /* 11b732c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b732c4 push 0x11b80c30 */
  push32((uint32_t)(0x11b80c30u));
  /* 11b732c9 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b732cfu);
  /* 11b732cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b732d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b732d4 jne 0x11b732e9 */
  if (!C.zf) goto L_11b732e9;
  /* 11b732d6 push eax */
  push32((uint32_t)(EAX));
  /* 11b732d7 push 0x11b80c20 */
  push32((uint32_t)(0x11b80c20u));
  /* 11b732dc call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b732e2u);
  /* 11b732e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b732e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b732e7 je 0x11b73337 */
  if (C.zf) goto L_11b73337;
L_11b732e9:;
  /* 11b732e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b732eb push 3 */
  push32((uint32_t)(0x3u));
  /* 11b732ed call ebp */
  call_ind((uint32_t)(EBP), 0x11b732efu);
  /* 11b732ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11b732f1 push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b732f6 call esi */
  call_ind((uint32_t)(ESI), 0x11b732f8u);
  /* 11b732f8 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b732fa push 0x11b80c20 */
  push32((uint32_t)(0x11b80c20u));
  /* 11b732ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73301 call dword ptr [0x11b7b170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b170))), 0x11b73307u);
  /* 11b73307 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73309 push 0x11b80d98 */
  push32((uint32_t)(0x11b80d98u));
  /* 11b7330e call esi */
  call_ind((uint32_t)(ESI), 0x11b73310u);
  /* 11b73310 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73312 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73314 call dword ptr [0x11b7b0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0fc))), 0x11b7331au);
  /* 11b7331a push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b7331c push 0x11b80c20 */
  push32((uint32_t)(0x11b80c20u));
  /* 11b73321 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73323 call dword ptr [0x11b7b170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b170))), 0x11b73329u);
  /* 11b73329 push 0x11b7dbb0 */
  push32((uint32_t)(0x11b7dbb0u));
  /* 11b7332e call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73334u);
  /* 11b73334 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73337:;
  /* 11b73337 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b73339 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7333fu);
  /* 11b7333f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73342 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73344 je 0x11b73372 */
  if (C.zf) goto L_11b73372;
  /* 11b73346 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73348 push 0x11b80d28 */
  push32((uint32_t)(0x11b80d28u));
  /* 11b7334d call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73353u);
  /* 11b73353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73358 je 0x11b73372 */
  if (C.zf) goto L_11b73372;
  /* 11b7335a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7335c push 4 */
  push32((uint32_t)(0x4u));
  /* 11b7335e call ebp */
  call_ind((uint32_t)(EBP), 0x11b73360u);
  /* 11b73360 push 0x11b81178 */
  push32((uint32_t)(0x11b81178u));
  /* 11b73365 push 0x11b80f20 */
  push32((uint32_t)(0x11b80f20u));
  /* 11b7336a call 0x11b74f90 */
  push32(0x11b7336fu); f_11b74f90();
  /* 11b7336f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73372:;
  /* 11b73372 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b73374 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7337au);
  /* 11b7337a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7337d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7337f je 0x11b733ad */
  if (C.zf) goto L_11b733ad;
  /* 11b73381 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73383 push 0x11b80d20 */
  push32((uint32_t)(0x11b80d20u));
  /* 11b73388 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b7338eu);
  /* 11b7338e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73393 je 0x11b733ad */
  if (C.zf) goto L_11b733ad;
  /* 11b73395 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73397 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b73399 call ebp */
  call_ind((uint32_t)(EBP), 0x11b7339bu);
  /* 11b7339b push 0x11b81170 */
  push32((uint32_t)(0x11b81170u));
  /* 11b733a0 push 0x11b80f30 */
  push32((uint32_t)(0x11b80f30u));
  /* 11b733a5 call 0x11b74f90 */
  push32(0x11b733aau); f_11b74f90();
  /* 11b733aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b733ad:;
  /* 11b733ad push 6 */
  push32((uint32_t)(0x6u));
  /* 11b733af call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b733b5u);
  /* 11b733b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b733b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b733ba je 0x11b733e8 */
  if (C.zf) goto L_11b733e8;
  /* 11b733bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b733be push 0x11b80d10 */
  push32((uint32_t)(0x11b80d10u));
  /* 11b733c3 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b733c9u);
  /* 11b733c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b733cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b733ce je 0x11b733e8 */
  if (C.zf) goto L_11b733e8;
  /* 11b733d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b733d2 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b733d4 call ebp */
  call_ind((uint32_t)(EBP), 0x11b733d6u);
  /* 11b733d6 push 0x11b81188 */
  push32((uint32_t)(0x11b81188u));
  /* 11b733db push 0x11b80f38 */
  push32((uint32_t)(0x11b80f38u));
  /* 11b733e0 call 0x11b74f90 */
  push32(0x11b733e5u); f_11b74f90();
  /* 11b733e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b733e8:;
  /* 11b733e8 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b733ea call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b733f0u);
  /* 11b733f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b733f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b733f5 je 0x11b73423 */
  if (C.zf) goto L_11b73423;
  /* 11b733f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b733f9 push 0x11b80cf8 */
  push32((uint32_t)(0x11b80cf8u));
  /* 11b733fe call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73404u);
  /* 11b73404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73409 je 0x11b73423 */
  if (C.zf) goto L_11b73423;
  /* 11b7340b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7340d push 7 */
  push32((uint32_t)(0x7u));
  /* 11b7340f call ebp */
  call_ind((uint32_t)(EBP), 0x11b73411u);
  /* 11b73411 push 0x11b81180 */
  push32((uint32_t)(0x11b81180u));
  /* 11b73416 push 0x11b80f48 */
  push32((uint32_t)(0x11b80f48u));
  /* 11b7341b call 0x11b74f90 */
  push32(0x11b73420u); f_11b74f90();
  /* 11b73420 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73423:;
  /* 11b73423 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b73425 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7342bu);
  /* 11b7342b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7342e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73430 je 0x11b7346c */
  if (C.zf) goto L_11b7346c;
  /* 11b73432 mov edx, dword ptr [0x11b812b4] */
  EDX = (r32((uint32_t)(0x11b812b4)));
  /* 11b73438 push edx */
  push32((uint32_t)(EDX));
  /* 11b73439 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7343b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7343d push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11b73442 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73444 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b73449 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7344b push 0x11b7dba8 */
  push32((uint32_t)(0x11b7dba8u));
  /* 11b73450 push 0x11b80f20 */
  push32((uint32_t)(0x11b80f20u));
  /* 11b73455 push 0x11b80d28 */
  push32((uint32_t)(0x11b80d28u));
  /* 11b7345a push 0x11b81178 */
  push32((uint32_t)(0x11b81178u));
  /* 11b7345f call 0x11b74e90 */
  push32(0x11b73464u); f_11b74e90();
  /* 11b73464 push eax */
  push32((uint32_t)(EAX));
  /* 11b73465 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b73467 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73469u);
  /* 11b73469 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7346c:;
  /* 11b7346c push 9 */
  push32((uint32_t)(0x9u));
  /* 11b7346e call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73474u);
  /* 11b73474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73477 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73479 je 0x11b734b4 */
  if (C.zf) goto L_11b734b4;
  /* 11b7347b mov eax, dword ptr [0x11b812b4] */
  EAX = (r32((uint32_t)(0x11b812b4)));
  /* 11b73480 push eax */
  push32((uint32_t)(EAX));
  /* 11b73481 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73483 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11b73488 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b7348a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7348c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b73491 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73493 push 0x11b7dba0 */
  push32((uint32_t)(0x11b7dba0u));
  /* 11b73498 push 0x11b80f30 */
  push32((uint32_t)(0x11b80f30u));
  /* 11b7349d push 0x11b80d20 */
  push32((uint32_t)(0x11b80d20u));
  /* 11b734a2 push 0x11b81170 */
  push32((uint32_t)(0x11b81170u));
  /* 11b734a7 call 0x11b74e90 */
  push32(0x11b734acu); f_11b74e90();
  /* 11b734ac push eax */
  push32((uint32_t)(EAX));
  /* 11b734ad push 9 */
  push32((uint32_t)(0x9u));
  /* 11b734af call ebp */
  call_ind((uint32_t)(EBP), 0x11b734b1u);
  /* 11b734b1 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b734b4:;
  /* 11b734b4 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b734b6 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b734bcu);
  /* 11b734bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b734bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b734c1 je 0x11b734fd */
  if (C.zf) goto L_11b734fd;
  /* 11b734c3 mov ecx, dword ptr [0x11b812b4] */
  ECX = (r32((uint32_t)(0x11b812b4)));
  /* 11b734c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b734ca push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11b734cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b734d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b734d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b734d5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b734da push 0 */
  push32((uint32_t)(0x0u));
  /* 11b734dc push 0x11b7dba0 */
  push32((uint32_t)(0x11b7dba0u));
  /* 11b734e1 push 0x11b80f38 */
  push32((uint32_t)(0x11b80f38u));
  /* 11b734e6 push 0x11b80d10 */
  push32((uint32_t)(0x11b80d10u));
  /* 11b734eb push 0x11b81188 */
  push32((uint32_t)(0x11b81188u));
  /* 11b734f0 call 0x11b74e90 */
  push32(0x11b734f5u); f_11b74e90();
  /* 11b734f5 push eax */
  push32((uint32_t)(EAX));
  /* 11b734f6 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b734f8 call ebp */
  call_ind((uint32_t)(EBP), 0x11b734fau);
  /* 11b734fa add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b734fd:;
  /* 11b734fd push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b734ff call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73505u);
  /* 11b73505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73508 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7350a je 0x11b73546 */
  if (C.zf) goto L_11b73546;
  /* 11b7350c mov edx, dword ptr [0x11b812b4] */
  EDX = (r32((uint32_t)(0x11b812b4)));
  /* 11b73512 push edx */
  push32((uint32_t)(EDX));
  /* 11b73513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b73515 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b73517 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11b7351c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7351e push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b73523 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73525 push 0x11b7dba0 */
  push32((uint32_t)(0x11b7dba0u));
  /* 11b7352a push 0x11b80f48 */
  push32((uint32_t)(0x11b80f48u));
  /* 11b7352f push 0x11b80cf8 */
  push32((uint32_t)(0x11b80cf8u));
  /* 11b73534 push 0x11b81180 */
  push32((uint32_t)(0x11b81180u));
  /* 11b73539 call 0x11b74e90 */
  push32(0x11b7353eu); f_11b74e90();
  /* 11b7353e push eax */
  push32((uint32_t)(EAX));
  /* 11b7353f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b73541 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73543u);
  /* 11b73543 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73546:;
  /* 11b73546 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b73548 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7354eu);
  /* 11b7354e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73551 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73553 je 0x11b7358c */
  if (C.zf) goto L_11b7358c;
  /* 11b73555 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73557 push 0x11b80f50 */
  push32((uint32_t)(0x11b80f50u));
  /* 11b7355c call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73562u);
  /* 11b73562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73565 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73567 je 0x11b7358c */
  if (C.zf) goto L_11b7358c;
  /* 11b73569 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7356b push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b7356d call ebp */
  call_ind((uint32_t)(EBP), 0x11b7356fu);
  /* 11b7356f push 0x11b7db98 */
  push32((uint32_t)(0x11b7db98u));
  /* 11b73574 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b7357au);
  /* 11b7357a push 0x11b80f50 */
  push32((uint32_t)(0x11b80f50u));
  /* 11b7357f push 0x11b81220 */
  push32((uint32_t)(0x11b81220u));
  /* 11b73584 call 0x11b74f90 */
  push32(0x11b73589u); f_11b74f90();
  /* 11b73589 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7358c:;
  /* 11b7358c push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b7358e call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73594u);
  /* 11b73594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73597 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73599 je 0x11b7370c */
  if (C.zf) goto L_11b7370c;
  /* 11b7359f push 0x11b81220 */
  push32((uint32_t)(0x11b81220u));
  /* 11b735a4 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b735aau);
  /* 11b735aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b735ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b735af jne 0x11b7370c */
  if (!C.zf) goto L_11b7370c;
  /* 11b735b5 push eax */
  push32((uint32_t)(EAX));
  /* 11b735b6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b735b8 call ebp */
  call_ind((uint32_t)(EBP), 0x11b735bau);
  /* 11b735ba push 0x11b7db90 */
  push32((uint32_t)(0x11b7db90u));
  /* 11b735bf call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b735c5u);
  /* 11b735c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b735c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b735c9 push 0x11b80b80 */
  push32((uint32_t)(0x11b80b80u));
  /* 11b735ce call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b735d4u);
  /* 11b735d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b735d6 push 0x11b80f00 */
  push32((uint32_t)(0x11b80f00u));
  /* 11b735db call esi */
  call_ind((uint32_t)(ESI), 0x11b735ddu);
  /* 11b735dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b735df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b735e1 push 0x11b80b80 */
  push32((uint32_t)(0x11b80b80u));
  /* 11b735e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b735e8 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b735eeu);
  /* 11b735ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11b735f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b735f2 call ebp */
  call_ind((uint32_t)(EBP), 0x11b735f4u);
  /* 11b735f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b735f6 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11b735f8 call ebp */
  call_ind((uint32_t)(EBP), 0x11b735fau);
  /* 11b735fa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b735fd push 8 */
  push32((uint32_t)(0x8u));
  /* 11b735ff call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73605u);
  /* 11b73605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73608 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7360a je 0x11b7362b */
  if (C.zf) goto L_11b7362b;
  /* 11b7360c mov ecx, dword ptr [0x11b812b4] */
  ECX = (r32((uint32_t)(0x11b812b4)));
  /* 11b73612 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b73614 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b73615 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73617 push 0x11b81178 */
  push32((uint32_t)(0x11b81178u));
  /* 11b7361c mov dword ptr [0x11b812b4], ecx */
  w32((uint32_t)(0x11b812b4), (ECX));
  /* 11b73622 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b73628u);
  /* 11b73628 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7362b:;
  /* 11b7362b push 9 */
  push32((uint32_t)(0x9u));
  /* 11b7362d call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73633u);
  /* 11b73633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73636 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73638 je 0x11b73659 */
  if (C.zf) goto L_11b73659;
  /* 11b7363a mov ecx, dword ptr [0x11b812b4] */
  ECX = (r32((uint32_t)(0x11b812b4)));
  /* 11b73640 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b73642 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b73643 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73645 push 0x11b81170 */
  push32((uint32_t)(0x11b81170u));
  /* 11b7364a mov dword ptr [0x11b812b4], ecx */
  w32((uint32_t)(0x11b812b4), (ECX));
  /* 11b73650 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b73656u);
  /* 11b73656 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73659:;
  /* 11b73659 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b7365b call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73661u);
  /* 11b73661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73664 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73666 je 0x11b73687 */
  if (C.zf) goto L_11b73687;
  /* 11b73668 mov ecx, dword ptr [0x11b812b4] */
  ECX = (r32((uint32_t)(0x11b812b4)));
  /* 11b7366e push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b73670 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b73671 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73673 push 0x11b81188 */
  push32((uint32_t)(0x11b81188u));
  /* 11b73678 mov dword ptr [0x11b812b4], ecx */
  w32((uint32_t)(0x11b812b4), (ECX));
  /* 11b7367e call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b73684u);
  /* 11b73684 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73687:;
  /* 11b73687 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b73689 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7368fu);
  /* 11b7368f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73692 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73694 je 0x11b736b5 */
  if (C.zf) goto L_11b736b5;
  /* 11b73696 mov ecx, dword ptr [0x11b812b4] */
  ECX = (r32((uint32_t)(0x11b812b4)));
  /* 11b7369c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b7369e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b7369f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b736a1 push 0x11b81180 */
  push32((uint32_t)(0x11b81180u));
  /* 11b736a6 mov dword ptr [0x11b812b4], ecx */
  w32((uint32_t)(0x11b812b4), (ECX));
  /* 11b736ac call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b736b2u);
  /* 11b736b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b736b5:;
  /* 11b736b5 mov eax, dword ptr [0x11b812b4] */
  EAX = (r32((uint32_t)(0x11b812b4)));
  /* 11b736ba cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b736bd ja 0x11b736e9 */
  if ((!C.cf&&!C.zf)) goto L_11b736e9;
  /* 11b736bf jmp dword ptr [eax*4 + 0x11b74e54] */
  switch (EAX) {
    case 0: goto L_11b736c6;
    case 1: goto L_11b736cd;
    case 2: goto L_11b736d4;
    case 3: goto L_11b736db;
    case 4: goto L_11b740e9;
    case 5: goto L_11b74109;
    case 6: goto L_11b74129;
    case 7: goto L_11b7415e;
    case 8: goto L_11b74745;
    case 9: goto L_11b7474c;
    case 10: goto L_11b74753;
    case 11: goto L_11b7475a;
    default: x86_unimpl("switch@0x11b736bf out of table"); return;
  }
L_11b736c6:;
  /* 11b736c6 push 0x11b7db88 */
  push32((uint32_t)(0x11b7db88u));
  /* 11b736cb jmp 0x11b736e0 */
  goto L_11b736e0;
L_11b736cd:;
  /* 11b736cd push 0x11b7db80 */
  push32((uint32_t)(0x11b7db80u));
  /* 11b736d2 jmp 0x11b736e0 */
  goto L_11b736e0;
L_11b736d4:;
  /* 11b736d4 push 0x11b7db78 */
  push32((uint32_t)(0x11b7db78u));
  /* 11b736d9 jmp 0x11b736e0 */
  goto L_11b736e0;
L_11b736db:;
  /* 11b736db push 0x11b7db70 */
  push32((uint32_t)(0x11b7db70u));
L_11b736e0:;
  /* 11b736e0 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b736e6u);
  /* 11b736e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b736e9:;
  /* 11b736e9 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11b736eb call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b736f1u);
  /* 11b736f1 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11b736f3 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b736f9u);
  /* 11b736f9 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b736fb call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b73701u);
  /* 11b73701 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b73703 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b73709u);
  /* 11b73709 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7370c:;
  /* 11b7370c push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b7370e call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73714u);
  /* 11b73714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73717 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73719 je 0x11b7378e */
  if (C.zf) goto L_11b7378e;
  /* 11b7371b push 0x11b80f00 */
  push32((uint32_t)(0x11b80f00u));
  /* 11b73720 push 0x11b80b80 */
  push32((uint32_t)(0x11b80b80u));
  /* 11b73725 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b7372bu);
  /* 11b7372b push 0x11b80f00 */
  push32((uint32_t)(0x11b80f00u));
  /* 11b73730 mov ebx, eax */
  EBX = (EAX);
  /* 11b73732 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73738u);
  /* 11b73738 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7373b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7373d jne 0x11b73788 */
  if (!C.zf) goto L_11b73788;
  /* 11b7373f push 0x11b80f00 */
  push32((uint32_t)(0x11b80f00u));
  /* 11b73744 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b7374au);
  /* 11b7374a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7374d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7374f je 0x11b73788 */
  if (C.zf) goto L_11b73788;
  /* 11b73751 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73753 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b73755 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73757u);
  /* 11b73757 push 0x11b7db68 */
  push32((uint32_t)(0x11b7db68u));
  /* 11b7375c call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73762u);
  /* 11b73762 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73764 push 0x11b80f00 */
  push32((uint32_t)(0x11b80f00u));
  /* 11b73769 call esi */
  call_ind((uint32_t)(ESI), 0x11b7376bu);
  /* 11b7376b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7376d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7376f call dword ptr [0x11b7b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b164))), 0x11b73775u);
  /* 11b73775 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b73777 call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b7377du);
  /* 11b7377d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11b7377f call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b73785u);
  /* 11b73785 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73788:;
  /* 11b73788 mov ebx, dword ptr [0x11b7b0d0] */
  EBX = (r32((uint32_t)(0x11b7b0d0)));
L_11b7378e:;
  /* 11b7378e push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11b73790 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73796u);
  /* 11b73796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73799 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7379b jne 0x11b73845 */
  if (!C.zf) goto L_11b73845;
  /* 11b737a1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b737a3 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b737a9u);
  /* 11b737a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b737ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b737ae jne 0x11b737dd */
  if (!C.zf) goto L_11b737dd;
  /* 11b737b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b737b2 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b737b8u);
  /* 11b737b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b737bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b737bd jne 0x11b737dd */
  if (!C.zf) goto L_11b737dd;
  /* 11b737bf push 0xa */
  push32((uint32_t)(0xau));
  /* 11b737c1 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b737c7u);
  /* 11b737c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b737ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b737cc jne 0x11b737dd */
  if (!C.zf) goto L_11b737dd;
  /* 11b737ce push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b737d0 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b737d6u);
  /* 11b737d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b737d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b737db je 0x11b73845 */
  if (C.zf) goto L_11b73845;
L_11b737dd:;
  /* 11b737dd push 8 */
  push32((uint32_t)(0x8u));
  /* 11b737df call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b737e5u);
  /* 11b737e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b737e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b737ea jne 0x11b737f7 */
  if (!C.zf) goto L_11b737f7;
  /* 11b737ec push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b737ee call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b737f4u);
  /* 11b737f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b737f7:;
  /* 11b737f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b737f9 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b737ffu);
  /* 11b737ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73802 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73804 jne 0x11b73811 */
  if (!C.zf) goto L_11b73811;
  /* 11b73806 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b73808 call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b7380eu);
  /* 11b7380e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73811:;
  /* 11b73811 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b73813 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73819u);
  /* 11b73819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7381c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7381e jne 0x11b7382b */
  if (!C.zf) goto L_11b7382b;
  /* 11b73820 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b73822 call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b73828u);
  /* 11b73828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7382b:;
  /* 11b7382b push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b7382d call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73833u);
  /* 11b73833 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73836 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73838 jne 0x11b73845 */
  if (!C.zf) goto L_11b73845;
  /* 11b7383a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b7383c call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b73842u);
  /* 11b73842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73845:;
  /* 11b73845 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b73847 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7384du);
  /* 11b7384d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73850 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73852 je 0x11b73908 */
  if (C.zf) goto L_11b73908;
  /* 11b73858 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b7385a call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73860u);
  /* 11b73860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73863 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73865 jne 0x11b73908 */
  if (!C.zf) goto L_11b73908;
  /* 11b7386b push 0x11b80f20 */
  push32((uint32_t)(0x11b80f20u));
  /* 11b73870 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73876u);
  /* 11b73876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7387b jne 0x11b73908 */
  if (!C.zf) goto L_11b73908;
  /* 11b73881 push 0x11b80f30 */
  push32((uint32_t)(0x11b80f30u));
  /* 11b73886 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b7388cu);
  /* 11b7388c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7388f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73891 jne 0x11b73908 */
  if (!C.zf) goto L_11b73908;
  /* 11b73893 push 0x11b80f38 */
  push32((uint32_t)(0x11b80f38u));
  /* 11b73898 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b7389eu);
  /* 11b7389e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b738a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b738a3 jne 0x11b73908 */
  if (!C.zf) goto L_11b73908;
  /* 11b738a5 push 0x11b80f48 */
  push32((uint32_t)(0x11b80f48u));
  /* 11b738aa call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b738b0u);
  /* 11b738b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b738b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b738b5 jne 0x11b73908 */
  if (!C.zf) goto L_11b73908;
  /* 11b738b7 push eax */
  push32((uint32_t)(EAX));
  /* 11b738b8 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b738ba call ebp */
  call_ind((uint32_t)(EBP), 0x11b738bcu);
  /* 11b738bc push 0x11b7db60 */
  push32((uint32_t)(0x11b7db60u));
  /* 11b738c1 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b738c7u);
  /* 11b738c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b738c9 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b738cb call ebp */
  call_ind((uint32_t)(EBP), 0x11b738cdu);
  /* 11b738cd push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11b738cf call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b738d5u);
  /* 11b738d5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b738d7 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b738ddu);
  /* 11b738dd push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11b738df call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b738e5u);
  /* 11b738e5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b738e7 call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b738edu);
  /* 11b738ed push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b738ef call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b738f5u);
  /* 11b738f5 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b738f7 call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b738fdu);
  /* 11b738fd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b738ff call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b73905u);
  /* 11b73905 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73908:;
  /* 11b73908 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b7390a call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73910u);
  /* 11b73910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73913 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73915 jne 0x11b739bb */
  if (!C.zf) goto L_11b739bb;
  /* 11b7391b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b7391d call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73923u);
  /* 11b73923 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73926 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73928 je 0x11b739bb */
  if (C.zf) goto L_11b739bb;
  /* 11b7392e push 0x11b810b0 */
  push32((uint32_t)(0x11b810b0u));
  /* 11b73933 push 0x11b80de8 */
  push32((uint32_t)(0x11b80de8u));
  /* 11b73938 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b7393eu);
  /* 11b7393e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73943 je 0x11b739bb */
  if (C.zf) goto L_11b739bb;
  /* 11b73945 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73947 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b73949 call ebp */
  call_ind((uint32_t)(EBP), 0x11b7394bu);
  /* 11b7394b push 0x11b7db58 */
  push32((uint32_t)(0x11b7db58u));
  /* 11b73950 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73956u);
  /* 11b73956 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b73958 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7395a push 0x11b80c30 */
  push32((uint32_t)(0x11b80c30u));
  /* 11b7395f call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b73965u);
  /* 11b73965 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73967 push 0x11b81120 */
  push32((uint32_t)(0x11b81120u));
  /* 11b7396c call esi */
  call_ind((uint32_t)(ESI), 0x11b7396eu);
  /* 11b7396e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73970 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b73972 push 0x11b80b80 */
  push32((uint32_t)(0x11b80b80u));
  /* 11b73977 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b73979 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b7397fu);
  /* 11b7397f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b73981 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73983 push 0x11b80b80 */
  push32((uint32_t)(0x11b80b80u));
  /* 11b73988 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b7398eu);
  /* 11b7398e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b73990 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73992 push 0x11b81258 */
  push32((uint32_t)(0x11b81258u));
  /* 11b73997 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b7399du);
  /* 11b7399d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b739a0 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11b739a2 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b739a8u);
  /* 11b739a8 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11b739aa call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b739b0u);
  /* 11b739b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11b739b2 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b739b8u);
  /* 11b739b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b739bb:;
  /* 11b739bb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b739bd call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b739c3u);
  /* 11b739c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b739c6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b739c8 je 0x11b73a11 */
  if (C.zf) goto L_11b73a11;
  /* 11b739ca push 0x11b81120 */
  push32((uint32_t)(0x11b81120u));
  /* 11b739cf push 0x11b80b80 */
  push32((uint32_t)(0x11b80b80u));
  /* 11b739d4 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b739dau);
  /* 11b739da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b739dd cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b739e0 jl 0x11b73a11 */
  if ((C.sf!=C.of)) goto L_11b73a11;
  /* 11b739e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b739e4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b739e6 call ebp */
  call_ind((uint32_t)(EBP), 0x11b739e8u);
  /* 11b739e8 push 0x11b7db50 */
  push32((uint32_t)(0x11b7db50u));
  /* 11b739ed call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b739f3u);
  /* 11b739f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b739f5 push 0x11b81120 */
  push32((uint32_t)(0x11b81120u));
  /* 11b739fa call esi */
  call_ind((uint32_t)(ESI), 0x11b739fcu);
  /* 11b739fc push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b739fe call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b73a04u);
  /* 11b73a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73a06 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b73a08 call dword ptr [0x11b7b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b164))), 0x11b73a0eu);
  /* 11b73a0e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73a11:;
  /* 11b73a11 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b73a13 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73a19u);
  /* 11b73a19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73a1c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73a1e je 0x11b73ac6 */
  if (C.zf) goto L_11b73ac6;
  /* 11b73a24 push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b73a29 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73a2fu);
  /* 11b73a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73a34 je 0x11b73ac6 */
  if (C.zf) goto L_11b73ac6;
  /* 11b73a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73a3c push 0x11b811d8 */
  push32((uint32_t)(0x11b811d8u));
  /* 11b73a41 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73a47u);
  /* 11b73a47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73a4c jne 0x11b73a74 */
  if (!C.zf) goto L_11b73a74;
  /* 11b73a4e push eax */
  push32((uint32_t)(EAX));
  /* 11b73a4f push 0x11b811e8 */
  push32((uint32_t)(0x11b811e8u));
  /* 11b73a54 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73a5au);
  /* 11b73a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73a5f jne 0x11b73a74 */
  if (!C.zf) goto L_11b73a74;
  /* 11b73a61 push eax */
  push32((uint32_t)(EAX));
  /* 11b73a62 push 0x11b811e0 */
  push32((uint32_t)(0x11b811e0u));
  /* 11b73a67 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73a6du);
  /* 11b73a6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73a70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73a72 je 0x11b73ac6 */
  if (C.zf) goto L_11b73ac6;
L_11b73a74:;
  /* 11b73a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73a76 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b73a78 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73a7au);
  /* 11b73a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73a7c push 3 */
  push32((uint32_t)(0x3u));
  /* 11b73a7e call ebp */
  call_ind((uint32_t)(EBP), 0x11b73a80u);
  /* 11b73a80 push 0x11b7db48 */
  push32((uint32_t)(0x11b7db48u));
  /* 11b73a85 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73a8bu);
  /* 11b73a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73a8d push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b73a92 call esi */
  call_ind((uint32_t)(ESI), 0x11b73a94u);
  /* 11b73a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73a96 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b73a98 push 0x11b811e8 */
  push32((uint32_t)(0x11b811e8u));
  /* 11b73a9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73a9f call dword ptr [0x11b7b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b158))), 0x11b73aa5u);
  /* 11b73aa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b73aa7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b73aa9 push 0x11b80c30 */
  push32((uint32_t)(0x11b80c30u));
  /* 11b73aae push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73ab0 call dword ptr [0x11b7b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b158))), 0x11b73ab6u);
  /* 11b73ab6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b73abb push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b73abd call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b73ac3u);
  /* 11b73ac3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73ac6:;
  /* 11b73ac6 push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b73acb call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73ad1u);
  /* 11b73ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73ad6 je 0x11b73b73 */
  if (C.zf) goto L_11b73b73;
  /* 11b73adc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b73ade call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b73ae4u);
  /* 11b73ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73ae7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73ae9 je 0x11b73b73 */
  if (C.zf) goto L_11b73b73;
  /* 11b73aef push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11b73af1 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73af7u);
  /* 11b73af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73afa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73afc je 0x11b73b73 */
  if (C.zf) goto L_11b73b73;
  /* 11b73afe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73b00 push 0x11b811d8 */
  push32((uint32_t)(0x11b811d8u));
  /* 11b73b05 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73b0bu);
  /* 11b73b0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73b0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73b10 jne 0x11b73b38 */
  if (!C.zf) goto L_11b73b38;
  /* 11b73b12 push eax */
  push32((uint32_t)(EAX));
  /* 11b73b13 push 0x11b811e8 */
  push32((uint32_t)(0x11b811e8u));
  /* 11b73b18 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73b1eu);
  /* 11b73b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73b23 jne 0x11b73b38 */
  if (!C.zf) goto L_11b73b38;
  /* 11b73b25 push eax */
  push32((uint32_t)(EAX));
  /* 11b73b26 push 0x11b811e0 */
  push32((uint32_t)(0x11b811e0u));
  /* 11b73b2b call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73b31u);
  /* 11b73b31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73b36 je 0x11b73b73 */
  if (C.zf) goto L_11b73b73;
L_11b73b38:;
  /* 11b73b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73b3a push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b73b3f call esi */
  call_ind((uint32_t)(ESI), 0x11b73b41u);
  /* 11b73b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73b43 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b73b45 push 0x11b811e8 */
  push32((uint32_t)(0x11b811e8u));
  /* 11b73b4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73b4c call dword ptr [0x11b7b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b158))), 0x11b73b52u);
  /* 11b73b52 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b73b54 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b73b56 push 0x11b80c30 */
  push32((uint32_t)(0x11b80c30u));
  /* 11b73b5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73b5d call dword ptr [0x11b7b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b158))), 0x11b73b63u);
  /* 11b73b63 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b73b68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b73b6a call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b73b70u);
  /* 11b73b70 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73b73:;
  /* 11b73b73 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b73b75 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73b7bu);
  /* 11b73b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73b7e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73b80 je 0x11b73c6e */
  if (C.zf) goto L_11b73c6e;
  /* 11b73b86 push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b73b8b call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73b91u);
  /* 11b73b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73b94 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b73b97 jg 0x11b73c6e */
  if ((!C.zf&&C.sf==C.of)) goto L_11b73c6e;
  /* 11b73b9d push 0x11b80e18 */
  push32((uint32_t)(0x11b80e18u));
  /* 11b73ba2 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73ba8u);
  /* 11b73ba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73bab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73bad je 0x11b73c6e */
  if (C.zf) goto L_11b73c6e;
  /* 11b73bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73bb5 push 0x11b80c30 */
  push32((uint32_t)(0x11b80c30u));
  /* 11b73bba call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73bc0u);
  /* 11b73bc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73bc5 je 0x11b73c6e */
  if (C.zf) goto L_11b73c6e;
  /* 11b73bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73bcd push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b73bcf call ebp */
  call_ind((uint32_t)(EBP), 0x11b73bd1u);
  /* 11b73bd1 push 0x11b7db40 */
  push32((uint32_t)(0x11b7db40u));
  /* 11b73bd6 call dword ptr [0x11b7b174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b174))), 0x11b73bdcu);
  /* 11b73bdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73bdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73be1 je 0x11b73c4d */
  if (C.zf) goto L_11b73c4d;
  /* 11b73be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73be5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b73be7 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73be9u);
  /* 11b73be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73beb push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11b73bed call ebp */
  call_ind((uint32_t)(EBP), 0x11b73befu);
  /* 11b73bef push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b73bf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73bf8 call dword ptr [0x11b7b12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b12c))), 0x11b73bfeu);
  /* 11b73bfe push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b73c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73c05 call dword ptr [0x11b7b19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b19c))), 0x11b73c0bu);
  /* 11b73c0b push 0x11b7db38 */
  push32((uint32_t)(0x11b7db38u));
  /* 11b73c10 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73c16u);
  /* 11b73c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73c18 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b73c1a call ebp */
  call_ind((uint32_t)(EBP), 0x11b73c1cu);
  /* 11b73c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73c1e push 0x11b80bc0 */
  push32((uint32_t)(0x11b80bc0u));
  /* 11b73c23 call esi */
  call_ind((uint32_t)(ESI), 0x11b73c25u);
  /* 11b73c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73c27 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b73c2c push 0x11b80eb0 */
  push32((uint32_t)(0x11b80eb0u));
  /* 11b73c31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73c33 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b73c39u);
  /* 11b73c39 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73c3e push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11b73c40 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73c42u);
  /* 11b73c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73c44 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11b73c46 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73c48u);
  /* 11b73c48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73c4b jmp 0x11b73c6e */
  goto L_11b73c6e;
L_11b73c4d:;
  /* 11b73c4d push 0x11b7db30 */
  push32((uint32_t)(0x11b7db30u));
  /* 11b73c52 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73c58u);
  /* 11b73c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73c5a push 0x11b80e20 */
  push32((uint32_t)(0x11b80e20u));
  /* 11b73c5f call esi */
  call_ind((uint32_t)(ESI), 0x11b73c61u);
  /* 11b73c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73c63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73c65 call dword ptr [0x11b7b0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0fc))), 0x11b73c6bu);
  /* 11b73c6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73c6e:;
  /* 11b73c6e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b73c70 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73c76u);
  /* 11b73c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73c79 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73c7b je 0x11b73d37 */
  if (C.zf) goto L_11b73d37;
  /* 11b73c81 push 0x11b80e18 */
  push32((uint32_t)(0x11b80e18u));
  /* 11b73c86 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73c8cu);
  /* 11b73c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73c8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73c91 jne 0x11b73d37 */
  if (!C.zf) goto L_11b73d37;
  /* 11b73c97 push eax */
  push32((uint32_t)(EAX));
  /* 11b73c98 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b73c9a call ebp */
  call_ind((uint32_t)(EBP), 0x11b73c9cu);
  /* 11b73c9c push 5 */
  push32((uint32_t)(0x5u));
  /* 11b73c9e call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b73ca4u);
  /* 11b73ca4 push 0x11b7db28 */
  push32((uint32_t)(0x11b7db28u));
  /* 11b73ca9 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73cafu);
  /* 11b73caf push 7 */
  push32((uint32_t)(0x7u));
  /* 11b73cb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73cb3 push 0x11b81278 */
  push32((uint32_t)(0x11b81278u));
  /* 11b73cb8 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b73cbeu);
  /* 11b73cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73cc0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b73cc2 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73cc4u);
  /* 11b73cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73cc6 push 0x11b811a0 */
  push32((uint32_t)(0x11b811a0u));
  /* 11b73ccb call esi */
  call_ind((uint32_t)(ESI), 0x11b73ccdu);
  /* 11b73ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73ccf call dword ptr [0x11b7b140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b140))), 0x11b73cd5u);
  /* 11b73cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73cd7 push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b73cdc call esi */
  call_ind((uint32_t)(ESI), 0x11b73cdeu);
  /* 11b73cde push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73ce0 push 0x11b80e20 */
  push32((uint32_t)(0x11b80e20u));
  /* 11b73ce5 call esi */
  call_ind((uint32_t)(ESI), 0x11b73ce7u);
  /* 11b73ce7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73cea push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73cec push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b73cee push 0x11b80f50 */
  push32((uint32_t)(0x11b80f50u));
  /* 11b73cf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73cf5 call dword ptr [0x11b7b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b158))), 0x11b73cfbu);
  /* 11b73cfb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b73cfd push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b73cff push 0x11b80de8 */
  push32((uint32_t)(0x11b80de8u));
  /* 11b73d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73d06 call dword ptr [0x11b7b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b158))), 0x11b73d0cu);
  /* 11b73d0c push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11b73d0e call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b73d14u);
  /* 11b73d14 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11b73d16 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b73d1cu);
  /* 11b73d1c push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11b73d1e call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b73d24u);
  /* 11b73d24 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11b73d26 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b73d2cu);
  /* 11b73d2c push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11b73d2e call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b73d34u);
  /* 11b73d34 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73d37:;
  /* 11b73d37 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b73d39 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73d3fu);
  /* 11b73d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73d42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73d44 jne 0x11b73d52 */
  if (!C.zf) goto L_11b73d52;
  /* 11b73d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73d48 push 0x11b80bc0 */
  push32((uint32_t)(0x11b80bc0u));
  /* 11b73d4d call esi */
  call_ind((uint32_t)(ESI), 0x11b73d4fu);
  /* 11b73d4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73d52:;
  /* 11b73d52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73d54 call dword ptr [0x11b7b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b144))), 0x11b73d5au);
  /* 11b73d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73d5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73d5f je 0x11b73d99 */
  if (C.zf) goto L_11b73d99;
  /* 11b73d61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73d63 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b73d65 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73d67u);
  /* 11b73d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73d69 push 0x11b80bc0 */
  push32((uint32_t)(0x11b80bc0u));
  /* 11b73d6e call esi */
  call_ind((uint32_t)(ESI), 0x11b73d70u);
  /* 11b73d70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73d72 push 0x11b80e20 */
  push32((uint32_t)(0x11b80e20u));
  /* 11b73d77 call esi */
  call_ind((uint32_t)(ESI), 0x11b73d79u);
  /* 11b73d79 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73d7b push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b73d80 call esi */
  call_ind((uint32_t)(ESI), 0x11b73d82u);
  /* 11b73d82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73d84 call dword ptr [0x11b7b14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b14c))), 0x11b73d8au);
  /* 11b73d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73d8c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b73d8e call ebp */
  call_ind((uint32_t)(EBP), 0x11b73d90u);
  /* 11b73d90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73d92 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b73d94 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73d96u);
  /* 11b73d96 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73d99:;
  /* 11b73d99 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b73d9b call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73da1u);
  /* 11b73da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73da4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73da6 jne 0x11b73e9f */
  if (!C.zf) goto L_11b73e9f;
  /* 11b73dac push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73dae push 0x11b80bc0 */
  push32((uint32_t)(0x11b80bc0u));
  /* 11b73db3 call esi */
  call_ind((uint32_t)(ESI), 0x11b73db5u);
  /* 11b73db5 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11b73db7 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73dbdu);
  /* 11b73dbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73dc0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73dc2 je 0x11b73e9f */
  if (C.zf) goto L_11b73e9f;
  /* 11b73dc8 mov ebx, dword ptr [0x11b7b124] */
  EBX = (r32((uint32_t)(0x11b7b124)));
  /* 11b73dce push 0x11b80c10 */
  push32((uint32_t)(0x11b80c10u));
  /* 11b73dd3 call ebx */
  call_ind((uint32_t)(EBX), 0x11b73dd5u);
  /* 11b73dd5 mov edx, eax */
  EDX = (EAX);
  /* 11b73dd7 push 0x11b80e20 */
  push32((uint32_t)(0x11b80e20u));
  /* 11b73ddc mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 11b73de0 call ebx */
  call_ind((uint32_t)(EBX), 0x11b73de2u);
  /* 11b73de2 mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11b73de6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73de8 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73dea call dword ptr [0x11b7b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b150))), 0x11b73df0u);
  /* 11b73df0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73df3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b73df5 jne 0x11b73e99 */
  if (!C.zf) goto L_11b73e99;
  /* 11b73dfb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73dfd call dword ptr [0x11b7b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b150))), 0x11b73e03u);
  /* 11b73e03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73e08 je 0x11b73e99 */
  if (C.zf) goto L_11b73e99;
  /* 11b73e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73e10 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11b73e12 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73e14u);
  /* 11b73e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73e16 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11b73e1b push 0x11b80e00 */
  push32((uint32_t)(0x11b80e00u));
  /* 11b73e20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73e22 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b73e28u);
  /* 11b73e28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73e2a push 0x11b811a0 */
  push32((uint32_t)(0x11b811a0u));
  /* 11b73e2f call esi */
  call_ind((uint32_t)(ESI), 0x11b73e31u);
  /* 11b73e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73e33 call dword ptr [0x11b7b140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b140))), 0x11b73e39u);
  /* 11b73e39 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b73e3b call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b73e41u);
  /* 11b73e41 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b73e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73e45 call dword ptr [0x11b7b19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b19c))), 0x11b73e4bu);
  /* 11b73e4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73e4d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b73e4f call ebp */
  call_ind((uint32_t)(EBP), 0x11b73e51u);
  /* 11b73e51 push 0x11b7db28 */
  push32((uint32_t)(0x11b7db28u));
  /* 11b73e56 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73e5cu);
  /* 11b73e5c push 7 */
  push32((uint32_t)(0x7u));
  /* 11b73e5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73e60 push 0x11b81278 */
  push32((uint32_t)(0x11b81278u));
  /* 11b73e65 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b73e6bu);
  /* 11b73e6b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73e70 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b73e72 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73e74u);
  /* 11b73e74 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11b73e76 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b73e7cu);
  /* 11b73e7c mov ebx, dword ptr [0x11b7b168] */
  EBX = (r32((uint32_t)(0x11b7b168)));
  /* 11b73e82 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11b73e84 call ebx */
  call_ind((uint32_t)(EBX), 0x11b73e86u);
  /* 11b73e86 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11b73e88 call ebx */
  call_ind((uint32_t)(EBX), 0x11b73e8au);
  /* 11b73e8a push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11b73e8c call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b73e92u);
  /* 11b73e92 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11b73e94 call ebx */
  call_ind((uint32_t)(EBX), 0x11b73e96u);
  /* 11b73e96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73e99:;
  /* 11b73e99 mov ebx, dword ptr [0x11b7b0d0] */
  EBX = (r32((uint32_t)(0x11b7b0d0)));
L_11b73e9f:;
  /* 11b73e9f push 0x11b80bc0 */
  push32((uint32_t)(0x11b80bc0u));
  /* 11b73ea4 push 0x11b80e00 */
  push32((uint32_t)(0x11b80e00u));
  /* 11b73ea9 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b73eafu);
  /* 11b73eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73eb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73eb4 je 0x11b73eca */
  if (C.zf) goto L_11b73eca;
  /* 11b73eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73eb8 push 0x11b80bc0 */
  push32((uint32_t)(0x11b80bc0u));
  /* 11b73ebd call esi */
  call_ind((uint32_t)(ESI), 0x11b73ebfu);
  /* 11b73ebf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b73ec1 call dword ptr [0x11b7b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b16c))), 0x11b73ec7u);
  /* 11b73ec7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73eca:;
  /* 11b73eca push 0x24 */
  push32((uint32_t)(0x24u));
  /* 11b73ecc call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73ed2u);
  /* 11b73ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73ed5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73ed7 je 0x11b73f01 */
  if (C.zf) goto L_11b73f01;
  /* 11b73ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73edb push 0x11b81288 */
  push32((uint32_t)(0x11b81288u));
  /* 11b73ee0 call dword ptr [0x11b7b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b160))), 0x11b73ee6u);
  /* 11b73ee6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73eeb je 0x11b73f01 */
  if (C.zf) goto L_11b73f01;
  /* 11b73eed push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73eef push 0x24 */
  push32((uint32_t)(0x24u));
  /* 11b73ef1 call ebp */
  call_ind((uint32_t)(EBP), 0x11b73ef3u);
  /* 11b73ef3 push 0x11b7db20 */
  push32((uint32_t)(0x11b7db20u));
  /* 11b73ef8 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73efeu);
  /* 11b73efe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73f01:;
  /* 11b73f01 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 11b73f03 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73f09u);
  /* 11b73f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73f0c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73f0e je 0x11b73f8c */
  if (C.zf) goto L_11b73f8c;
  /* 11b73f10 push 0x11b811b8 */
  push32((uint32_t)(0x11b811b8u));
  /* 11b73f15 push 0x11b81148 */
  push32((uint32_t)(0x11b81148u));
  /* 11b73f1a call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b73f20u);
  /* 11b73f20 push 0x11b811b8 */
  push32((uint32_t)(0x11b811b8u));
  /* 11b73f25 mov ebx, eax */
  EBX = (EAX);
  /* 11b73f27 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73f2du);
  /* 11b73f2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73f30 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b73f32 jne 0x11b73f86 */
  if (!C.zf) goto L_11b73f86;
  /* 11b73f34 push 0x11b811b8 */
  push32((uint32_t)(0x11b811b8u));
  /* 11b73f39 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73f3fu);
  /* 11b73f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73f42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73f44 je 0x11b73f86 */
  if (C.zf) goto L_11b73f86;
  /* 11b73f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73f48 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 11b73f4a call ebp */
  call_ind((uint32_t)(EBP), 0x11b73f4cu);
  /* 11b73f4c push 0x11b7db18 */
  push32((uint32_t)(0x11b7db18u));
  /* 11b73f51 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73f57u);
  /* 11b73f57 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b73f59 call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b73f5fu);
  /* 11b73f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73f61 push 0x11b810d0 */
  push32((uint32_t)(0x11b810d0u));
  /* 11b73f66 call esi */
  call_ind((uint32_t)(ESI), 0x11b73f68u);
  /* 11b73f68 mov ebx, dword ptr [0x11b7b164] */
  EBX = (r32((uint32_t)(0x11b7b164)));
  /* 11b73f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73f70 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b73f72 call ebx */
  call_ind((uint32_t)(EBX), 0x11b73f74u);
  /* 11b73f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73f76 push 0x11b811b8 */
  push32((uint32_t)(0x11b811b8u));
  /* 11b73f7b call esi */
  call_ind((uint32_t)(ESI), 0x11b73f7du);
  /* 11b73f7d push 3 */
  push32((uint32_t)(0x3u));
  /* 11b73f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b73f81 call ebx */
  call_ind((uint32_t)(EBX), 0x11b73f83u);
  /* 11b73f83 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b73f86:;
  /* 11b73f86 mov ebx, dword ptr [0x11b7b0d0] */
  EBX = (r32((uint32_t)(0x11b7b0d0)));
L_11b73f8c:;
  /* 11b73f8c push 0x11b810b0 */
  push32((uint32_t)(0x11b810b0u));
  /* 11b73f91 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b73f97u);
  /* 11b73f97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b73f9c jne 0x11b73fb2 */
  if (!C.zf) goto L_11b73fb2;
  /* 11b73f9e push 0x11b7db10 */
  push32((uint32_t)(0x11b7db10u));
  /* 11b73fa3 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b73fa9u);
  /* 11b73fa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73fac call dword ptr [0x11b7b17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b17c))), 0x11b73fb2u);
L_11b73fb2:;
  /* 11b73fb2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b73fb4 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73fbau);
  /* 11b73fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73fbd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73fbf jne 0x11b746d4 */
  if (!C.zf) goto L_11b746d4;
  /* 11b73fc5 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11b73fc7 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73fcdu);
  /* 11b73fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73fd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73fd2 je 0x11b746d4 */
  if (C.zf) goto L_11b746d4;
  /* 11b73fd8 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b73fda call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b73fe0u);
  /* 11b73fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73fe3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b73fe5 je 0x11b741c6 */
  if (C.zf) goto L_11b741c6;
  /* 11b73feb push 0x11b810b0 */
  push32((uint32_t)(0x11b810b0u));
  /* 11b73ff0 push 0x11b81278 */
  push32((uint32_t)(0x11b81278u));
  /* 11b73ff5 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b73ffbu);
  /* 11b73ffb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b73ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74000 je 0x11b741c6 */
  if (C.zf) goto L_11b741c6;
  /* 11b74006 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74008 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b7400a call ebp */
  call_ind((uint32_t)(EBP), 0x11b7400cu);
  /* 11b7400c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7400e push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11b74010 call ebp */
  call_ind((uint32_t)(EBP), 0x11b74012u);
  /* 11b74012 push 0x11b7db08 */
  push32((uint32_t)(0x11b7db08u));
  /* 11b74017 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b7401du);
  /* 11b7401d push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b7401f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74021 push 0x11b81020 */
  push32((uint32_t)(0x11b81020u));
  /* 11b74026 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b7402cu);
  /* 11b7402c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7402e push 0x11b80c08 */
  push32((uint32_t)(0x11b80c08u));
  /* 11b74033 call esi */
  call_ind((uint32_t)(ESI), 0x11b74035u);
  /* 11b74035 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74037 push 0x11b811c8 */
  push32((uint32_t)(0x11b811c8u));
  /* 11b7403c call esi */
  call_ind((uint32_t)(ESI), 0x11b7403eu);
  /* 11b7403e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74040 push 0x11b811d0 */
  push32((uint32_t)(0x11b811d0u));
  /* 11b74045 call esi */
  call_ind((uint32_t)(ESI), 0x11b74047u);
  /* 11b74047 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74049 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7404b call dword ptr [0x11b7b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b164))), 0x11b74051u);
  /* 11b74051 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74054 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74056 push 0x11b80c40 */
  push32((uint32_t)(0x11b80c40u));
  /* 11b7405b call esi */
  call_ind((uint32_t)(ESI), 0x11b7405du);
  /* 11b7405d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7405f push 0x7d */
  push32((uint32_t)(0x7du));
  /* 11b74061 push 0x11b811f0 */
  push32((uint32_t)(0x11b811f0u));
  /* 11b74066 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74068 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b7406eu);
  /* 11b7406e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74070 push 0x7d */
  push32((uint32_t)(0x7du));
  /* 11b74072 push 0x11b80e78 */
  push32((uint32_t)(0x11b80e78u));
  /* 11b74077 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74079 call dword ptr [0x11b7b138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b138))), 0x11b7407fu);
  /* 11b7407f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74081 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b74087u);
  /* 11b74087 mov ecx, 5 */
  ECX = (0x5u);
  /* 11b7408c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7408e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b74091 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b74094 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b74097 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b7409a push eax */
  push32((uint32_t)(EAX));
  /* 11b7409b push 4 */
  push32((uint32_t)(0x4u));
  /* 11b7409d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7409f call dword ptr [0x11b7b12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b12c))), 0x11b740a5u);
  /* 11b740a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b740a7 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b740adu);
  /* 11b740ad mov ecx, 2 */
  ECX = (0x2u);
  /* 11b740b2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b740b4 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b740b7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b740ba lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11b740bd shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b740c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b740c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b740c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b740c5 call dword ptr [0x11b7b12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b12c))), 0x11b740cbu);
  /* 11b740cb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b740ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11b740d0 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b740d6u);
  /* 11b740d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b740d9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b740dc ja 0x11b741a9 */
  if ((!C.cf&&!C.zf)) goto L_11b741a9;
  /* 11b740e2 jmp dword ptr [eax*4 + 0x11b74e64] */
  switch (EAX) {
    case 0: goto L_11b740e9;
    case 1: goto L_11b74109;
    case 2: goto L_11b74129;
    case 3: goto L_11b7415e;
    case 4: goto L_11b74745;
    case 5: goto L_11b7474c;
    case 6: goto L_11b74753;
    case 7: goto L_11b7475a;
    default: x86_unimpl("switch@0x11b740e2 out of table"); return;
  }
L_11b740e9:;
  /* 11b740e9 push 0x11b7dd34 */
  push32((uint32_t)(0x11b7dd34u));
  /* 11b740ee push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b740f3 call ebx */
  call_ind((uint32_t)(EBX), 0x11b740f5u);
  /* 11b740f5 push 0x11b7dd18 */
  push32((uint32_t)(0x11b7dd18u));
  /* 11b740fa push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b740ff call ebx */
  call_ind((uint32_t)(EBX), 0x11b74101u);
  /* 11b74101 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74104 jmp 0x11b741a9 */
  goto L_11b741a9;
L_11b74109:;
  /* 11b74109 push 0x11b7dcd4 */
  push32((uint32_t)(0x11b7dcd4u));
  /* 11b7410e push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b74113 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74115u);
  /* 11b74115 push 0x11b7dcc0 */
  push32((uint32_t)(0x11b7dcc0u));
  /* 11b7411a push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b7411f call ebx */
  call_ind((uint32_t)(EBX), 0x11b74121u);
  /* 11b74121 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74124 jmp 0x11b741a9 */
  goto L_11b741a9;
L_11b74129:;
  /* 11b74129 push 0x11b7dc7c */
  push32((uint32_t)(0x11b7dc7cu));
  /* 11b7412e push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b74133 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74135u);
  /* 11b74135 push 0x11b7dc68 */
  push32((uint32_t)(0x11b7dc68u));
  /* 11b7413a push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b7413f call ebx */
  call_ind((uint32_t)(EBX), 0x11b74141u);
  /* 11b74141 push 0x11b7dc54 */
  push32((uint32_t)(0x11b7dc54u));
  /* 11b74146 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b7414b call ebx */
  call_ind((uint32_t)(EBX), 0x11b7414du);
  /* 11b7414d push 0x11b7dc40 */
  push32((uint32_t)(0x11b7dc40u));
  /* 11b74152 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b74157 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74159u);
  /* 11b74159 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7415c jmp 0x11b741a9 */
  goto L_11b741a9;
L_11b7415e:;
  /* 11b7415e push 0x11b7dc54 */
  push32((uint32_t)(0x11b7dc54u));
  /* 11b74163 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b74168 call ebx */
  call_ind((uint32_t)(EBX), 0x11b7416au);
  /* 11b7416a push 0x11b7dc40 */
  push32((uint32_t)(0x11b7dc40u));
  /* 11b7416f push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b74174 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74176u);
  /* 11b74176 push 0x11b7daf4 */
  push32((uint32_t)(0x11b7daf4u));
  /* 11b7417b push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b74180 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74182u);
  /* 11b74182 push 0x11b7dae0 */
  push32((uint32_t)(0x11b7dae0u));
  /* 11b74187 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b7418c call ebx */
  call_ind((uint32_t)(EBX), 0x11b7418eu);
  /* 11b7418e push 0x11b7dacc */
  push32((uint32_t)(0x11b7daccu));
  /* 11b74193 push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b74198 call ebx */
  call_ind((uint32_t)(EBX), 0x11b7419au);
  /* 11b7419a push 0x11b7dab8 */
  push32((uint32_t)(0x11b7dab8u));
  /* 11b7419f push 0x11b7dd2c */
  push32((uint32_t)(0x11b7dd2cu));
  /* 11b741a4 call ebx */
  call_ind((uint32_t)(EBX), 0x11b741a6u);
  /* 11b741a6 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b741a9:;
  /* 11b741a9 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11b741ab call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b741b1u);
  /* 11b741b1 mov ebx, dword ptr [0x11b7b168] */
  EBX = (r32((uint32_t)(0x11b7b168)));
  /* 11b741b7 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11b741b9 call ebx */
  call_ind((uint32_t)(EBX), 0x11b741bbu);
  /* 11b741bb push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b741bd call ebx */
  call_ind((uint32_t)(EBX), 0x11b741bfu);
  /* 11b741bf push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11b741c1 call ebx */
  call_ind((uint32_t)(EBX), 0x11b741c3u);
  /* 11b741c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b741c6:;
  /* 11b741c6 mov ebx, dword ptr [0x11b7b0cc] */
  EBX = (r32((uint32_t)(0x11b7b0cc)));
  /* 11b741cc push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11b741ce call ebx */
  call_ind((uint32_t)(EBX), 0x11b741d0u);
  /* 11b741d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b741d3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b741d5 jne 0x11b7456a */
  if (!C.zf) goto L_11b7456a;
  /* 11b741db push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b741dd call ebx */
  call_ind((uint32_t)(EBX), 0x11b741dfu);
  /* 11b741df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b741e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b741e4 je 0x11b74231 */
  if (C.zf) goto L_11b74231;
  /* 11b741e6 push 0x11b80c40 */
  push32((uint32_t)(0x11b80c40u));
  /* 11b741eb push 0x11b80e78 */
  push32((uint32_t)(0x11b80e78u));
  /* 11b741f0 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b741f6u);
  /* 11b741f6 push 0x11b80c40 */
  push32((uint32_t)(0x11b80c40u));
  /* 11b741fb mov ebx, eax */
  EBX = (EAX);
  /* 11b741fd call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b74203u);
  /* 11b74203 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74206 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b74208 jne 0x11b74231 */
  if (!C.zf) goto L_11b74231;
  /* 11b7420a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7420c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b7420e call ebp */
  call_ind((uint32_t)(EBP), 0x11b74210u);
  /* 11b74210 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74212 push 0x11b80c40 */
  push32((uint32_t)(0x11b80c40u));
  /* 11b74217 call esi */
  call_ind((uint32_t)(ESI), 0x11b74219u);
  /* 11b74219 push 0x11b7dab0 */
  push32((uint32_t)(0x11b7dab0u));
  /* 11b7421e call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b74224u);
  /* 11b74224 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74226 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74228 call dword ptr [0x11b7b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b164))), 0x11b7422eu);
  /* 11b7422e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74231:;
  /* 11b74231 mov ebx, dword ptr [0x11b7b158] */
  EBX = (r32((uint32_t)(0x11b7b158)));
  /* 11b74237 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b74239 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7423fu);
  /* 11b7423f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74242 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74244 je 0x11b7426d */
  if (C.zf) goto L_11b7426d;
  /* 11b74246 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b74248 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b7424eu);
  /* 11b7424e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74251 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74253 jne 0x11b7426d */
  if (!C.zf) goto L_11b7426d;
  /* 11b74255 mov edx, dword ptr [0x11b7d030] */
  EDX = (r32((uint32_t)(0x11b7d030)));
  /* 11b7425b push edx */
  push32((uint32_t)(EDX));
  /* 11b7425c push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b7425e call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b74264u);
  /* 11b74264 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74266 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b74268 call ebp */
  call_ind((uint32_t)(EBP), 0x11b7426au);
  /* 11b7426a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7426d:;
  /* 11b7426d push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b7426f call dword ptr [0x11b7b120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b120))), 0x11b74275u);
  /* 11b74275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74278 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7427a je 0x11b74285 */
  if (C.zf) goto L_11b74285;
  /* 11b7427c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7427e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b74280 call ebp */
  call_ind((uint32_t)(EBP), 0x11b74282u);
  /* 11b74282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74285:;
  /* 11b74285 push 0x11b80e28 */
  push32((uint32_t)(0x11b80e28u));
  /* 11b7428a call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b74290u);
  /* 11b74290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74293 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74295 je 0x11b74570 */
  if (C.zf) goto L_11b74570;
  /* 11b7429b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7429d call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b742a3u);
  /* 11b742a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b742a6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b742a8 je 0x11b74399 */
  if (C.zf) goto L_11b74399;
  /* 11b742ae push 0x11b811d0 */
  push32((uint32_t)(0x11b811d0u));
  /* 11b742b3 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b742b9u);
  /* 11b742b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b742bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b742be jne 0x11b74399 */
  if (!C.zf) goto L_11b74399;
  /* 11b742c4 push 0x11b80d18 */
  push32((uint32_t)(0x11b80d18u));
  /* 11b742c9 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b742cfu);
  /* 11b742cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b742d2 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b742d5 jge 0x11b74375 */
  if ((C.sf==C.of)) goto L_11b74375;
L_11b742db:;
  /* 11b742db push 2 */
  push32((uint32_t)(0x2u));
  /* 11b742dd call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b742e3u);
  /* 11b742e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b742e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b742e8 je 0x11b74375 */
  if (C.zf) goto L_11b74375;
  /* 11b742ee push 0x11b80cd8 */
  push32((uint32_t)(0x11b80cd8u));
  /* 11b742f3 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b742f9u);
  /* 11b742f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b742fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b742fe je 0x11b74375 */
  if (C.zf) goto L_11b74375;
  /* 11b74300 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b74302 push 0x11b81108 */
  push32((uint32_t)(0x11b81108u));
  /* 11b74307 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74309 push 0x11b80f98 */
  push32((uint32_t)(0x11b80f98u));
  /* 11b7430e push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b74313 push 0x11b80d60 */
  push32((uint32_t)(0x11b80d60u));
  /* 11b74318 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b7431eu);
  /* 11b7431e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b74320 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74322 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b74328u);
  /* 11b74328 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7432a push 0x11b80d60 */
  push32((uint32_t)(0x11b80d60u));
  /* 11b7432f call esi */
  call_ind((uint32_t)(ESI), 0x11b74331u);
  /* 11b74331 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74333 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b74335 push 0x11b80bb0 */
  push32((uint32_t)(0x11b80bb0u));
  /* 11b7433a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7433c call ebx */
  call_ind((uint32_t)(EBX), 0x11b7433eu);
  /* 11b7433e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74340 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74342 push 0x11b810f8 */
  push32((uint32_t)(0x11b810f8u));
  /* 11b74347 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74349 call ebx */
  call_ind((uint32_t)(EBX), 0x11b7434bu);
  /* 11b7434b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7434e push 0x11b80d18 */
  push32((uint32_t)(0x11b80d18u));
  /* 11b74353 push 0x11b80d60 */
  push32((uint32_t)(0x11b80d60u));
  /* 11b74358 call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b7435eu);
  /* 11b7435e push 0x11b80d18 */
  push32((uint32_t)(0x11b80d18u));
  /* 11b74363 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b74369u);
  /* 11b74369 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7436c cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7436f jl 0x11b742db */
  if ((C.sf!=C.of)) goto L_11b742db;
L_11b74375:;
  /* 11b74375 push 0x11b80d18 */
  push32((uint32_t)(0x11b80d18u));
  /* 11b7437a call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b74380u);
  /* 11b74380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74383 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b74386 jne 0x11b74399 */
  if (!C.zf) goto L_11b74399;
  /* 11b74388 mov eax, dword ptr [0x11b7d030] */
  EAX = (r32((uint32_t)(0x11b7d030)));
  /* 11b7438d push eax */
  push32((uint32_t)(EAX));
  /* 11b7438e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74390 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b74396u);
  /* 11b74396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74399:;
  /* 11b74399 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7439b push 0x11b80f98 */
  push32((uint32_t)(0x11b80f98u));
  /* 11b743a0 push 0x11b810f8 */
  push32((uint32_t)(0x11b810f8u));
  /* 11b743a5 call dword ptr [0x11b7b180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b180))), 0x11b743abu);
  /* 11b743ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b743ae cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b743b1 jne 0x11b743ff */
  if (!C.zf) goto L_11b743ff;
  /* 11b743b3 push 0x11b80b90 */
  push32((uint32_t)(0x11b80b90u));
  /* 11b743b8 push 0x11b80d18 */
  push32((uint32_t)(0x11b80d18u));
  /* 11b743bd call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b743c3u);
  /* 11b743c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b743c5 push 0x11b80b90 */
  push32((uint32_t)(0x11b80b90u));
  /* 11b743ca call esi */
  call_ind((uint32_t)(ESI), 0x11b743ccu);
  /* 11b743cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b743ce push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 11b743d3 push 0x11b80e38 */
  push32((uint32_t)(0x11b80e38u));
  /* 11b743d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b743da call ebx */
  call_ind((uint32_t)(EBX), 0x11b743dcu);
  /* 11b743dc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b743de push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 11b743e3 push 0x11b80eb8 */
  push32((uint32_t)(0x11b80eb8u));
  /* 11b743e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b743ea call ebx */
  call_ind((uint32_t)(EBX), 0x11b743ecu);
  /* 11b743ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11b743ee push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 11b743f3 push 0x11b80ec0 */
  push32((uint32_t)(0x11b80ec0u));
  /* 11b743f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b743fa call ebx */
  call_ind((uint32_t)(EBX), 0x11b743fcu);
  /* 11b743fc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b743ff:;
  /* 11b743ff push 4 */
  push32((uint32_t)(0x4u));
  /* 11b74401 call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b74407u);
  /* 11b74407 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7440a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7440c je 0x11b744fe */
  if (C.zf) goto L_11b744fe;
  /* 11b74412 push 0x11b81068 */
  push32((uint32_t)(0x11b81068u));
  /* 11b74417 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b7441du);
  /* 11b7441d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74422 je 0x11b744fe */
  if (C.zf) goto L_11b744fe;
  /* 11b74428 push 0x11b80d00 */
  push32((uint32_t)(0x11b80d00u));
  /* 11b7442d call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b74433u);
  /* 11b74433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74436 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b74439 jge 0x11b744d9 */
  if ((C.sf==C.of)) goto L_11b744d9;
L_11b7443f:;
  /* 11b7443f push 5 */
  push32((uint32_t)(0x5u));
  /* 11b74441 call dword ptr [0x11b7b128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b128))), 0x11b74447u);
  /* 11b74447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7444a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7444c je 0x11b744d9 */
  if (C.zf) goto L_11b744d9;
  /* 11b74452 push 0x11b80d30 */
  push32((uint32_t)(0x11b80d30u));
  /* 11b74457 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b7445du);
  /* 11b7445d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74462 je 0x11b744d9 */
  if (C.zf) goto L_11b744d9;
  /* 11b74464 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b74466 push 0x11b81118 */
  push32((uint32_t)(0x11b81118u));
  /* 11b7446b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7446d push 0x11b80fb0 */
  push32((uint32_t)(0x11b80fb0u));
  /* 11b74472 push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b74477 push 0x11b80d70 */
  push32((uint32_t)(0x11b80d70u));
  /* 11b7447c call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b74482u);
  /* 11b74482 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b74484 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b74486 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b7448cu);
  /* 11b7448c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7448e push 0x11b80d70 */
  push32((uint32_t)(0x11b80d70u));
  /* 11b74493 call esi */
  call_ind((uint32_t)(ESI), 0x11b74495u);
  /* 11b74495 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74497 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11b74499 push 0x11b80bb0 */
  push32((uint32_t)(0x11b80bb0u));
  /* 11b7449e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b744a0 call ebx */
  call_ind((uint32_t)(EBX), 0x11b744a2u);
  /* 11b744a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b744a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b744a6 push 0x11b810f8 */
  push32((uint32_t)(0x11b810f8u));
  /* 11b744ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11b744ad call ebx */
  call_ind((uint32_t)(EBX), 0x11b744afu);
  /* 11b744af add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b744b2 push 0x11b80d00 */
  push32((uint32_t)(0x11b80d00u));
  /* 11b744b7 push 0x11b80d70 */
  push32((uint32_t)(0x11b80d70u));
  /* 11b744bc call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b744c2u);
  /* 11b744c2 push 0x11b80d00 */
  push32((uint32_t)(0x11b80d00u));
  /* 11b744c7 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b744cdu);
  /* 11b744cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b744d0 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b744d3 jl 0x11b7443f */
  if ((C.sf!=C.of)) goto L_11b7443f;
L_11b744d9:;
  /* 11b744d9 push 0x11b80d00 */
  push32((uint32_t)(0x11b80d00u));
  /* 11b744de call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b744e4u);
  /* 11b744e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b744e7 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b744ea jne 0x11b744fe */
  if (!C.zf) goto L_11b744fe;
  /* 11b744ec mov ecx, dword ptr [0x11b7d030] */
  ECX = (r32((uint32_t)(0x11b7d030)));
  /* 11b744f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b744f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b744f5 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b744fbu);
  /* 11b744fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b744fe:;
  /* 11b744fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74500 push 0x11b80fb0 */
  push32((uint32_t)(0x11b80fb0u));
  /* 11b74505 push 0x11b810f8 */
  push32((uint32_t)(0x11b810f8u));
  /* 11b7450a call dword ptr [0x11b7b180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b180))), 0x11b74510u);
  /* 11b74510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74513 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b74516 jne 0x11b7452b */
  if (!C.zf) goto L_11b7452b;
  /* 11b74518 push 0x11b80b88 */
  push32((uint32_t)(0x11b80b88u));
  /* 11b7451d push 0x11b80d00 */
  push32((uint32_t)(0x11b80d00u));
  /* 11b74522 call dword ptr [0x11b7b134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b134))), 0x11b74528u);
  /* 11b74528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7452b:;
  /* 11b7452b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7452d push 0x11b80b88 */
  push32((uint32_t)(0x11b80b88u));
  /* 11b74532 call esi */
  call_ind((uint32_t)(ESI), 0x11b74534u);
  /* 11b74534 push 0x11b811d0 */
  push32((uint32_t)(0x11b811d0u));
  /* 11b74539 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b7453fu);
  /* 11b7453f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74544 je 0x11b74558 */
  if (C.zf) goto L_11b74558;
  /* 11b74546 push 0x11b811d0 */
  push32((uint32_t)(0x11b811d0u));
  /* 11b7454b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7454d call dword ptr [0x11b7b130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b130))), 0x11b74553u);
  /* 11b74553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74556 jmp 0x11b74570 */
  goto L_11b74570;
L_11b74558:;
  /* 11b74558 push 0x11b81068 */
  push32((uint32_t)(0x11b81068u));
  /* 11b7455d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7455f call dword ptr [0x11b7b130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b130))), 0x11b74565u);
  /* 11b74565 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74568 jmp 0x11b74570 */
  goto L_11b74570;
L_11b7456a:;
  /* 11b7456a mov ebx, dword ptr [0x11b7b158] */
  EBX = (r32((uint32_t)(0x11b7b158)));
L_11b74570:;
  /* 11b74570 push 0x11b80e28 */
  push32((uint32_t)(0x11b80e28u));
  /* 11b74575 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b7457bu);
  /* 11b7457b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7457e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74580 je 0x11b745a9 */
  if (C.zf) goto L_11b745a9;
  /* 11b74582 push 0x11b81128 */
  push32((uint32_t)(0x11b81128u));
  /* 11b74587 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b7458du);
  /* 11b7458d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74590 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b74593 jge 0x11b745a9 */
  if ((C.sf==C.of)) goto L_11b745a9;
  /* 11b74595 push 0x11b7daa8 */
  push32((uint32_t)(0x11b7daa8u));
  /* 11b7459a call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b745a0u);
  /* 11b745a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b745a3 call dword ptr [0x11b7b17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b17c))), 0x11b745a9u);
L_11b745a9:;
  /* 11b745a9 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11b745ab call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b745b1u);
  /* 11b745b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b745b4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b745b6 je 0x11b746da */
  if (C.zf) goto L_11b746da;
  /* 11b745bc push 0x11b80e28 */
  push32((uint32_t)(0x11b80e28u));
  /* 11b745c1 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b745c7u);
  /* 11b745c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b745ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b745cc jne 0x11b746da */
  if (!C.zf) goto L_11b746da;
  /* 11b745d2 push eax */
  push32((uint32_t)(EAX));
  /* 11b745d3 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11b745d5 call ebp */
  call_ind((uint32_t)(EBP), 0x11b745d7u);
  /* 11b745d7 push 0x11b7daa0 */
  push32((uint32_t)(0x11b7daa0u));
  /* 11b745dc call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b745e2u);
  /* 11b745e2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11b745e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b745e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b745eb call dword ptr [0x11b7b12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b12c))), 0x11b745f1u);
  /* 11b745f1 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b745f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b745f5 push 0x11b810c0 */
  push32((uint32_t)(0x11b810c0u));
  /* 11b745fa call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b74600u);
  /* 11b74600 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74602 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11b74604 call ebp */
  call_ind((uint32_t)(EBP), 0x11b74606u);
  /* 11b74606 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74608 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 11b7460a call ebp */
  call_ind((uint32_t)(EBP), 0x11b7460cu);
  /* 11b7460c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7460e push 0x11b81198 */
  push32((uint32_t)(0x11b81198u));
  /* 11b74613 call esi */
  call_ind((uint32_t)(ESI), 0x11b74615u);
  /* 11b74615 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74617 call dword ptr [0x11b7b140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b140))), 0x11b7461du);
  /* 11b7461d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74620 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74622 push 0x11b80ef0 */
  push32((uint32_t)(0x11b80ef0u));
  /* 11b74627 call esi */
  call_ind((uint32_t)(ESI), 0x11b74629u);
  /* 11b74629 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7462b call dword ptr [0x11b7b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b16c))), 0x11b74631u);
  /* 11b74631 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74633 push 0x11b81158 */
  push32((uint32_t)(0x11b81158u));
  /* 11b74638 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7463a push 0x11b81150 */
  push32((uint32_t)(0x11b81150u));
  /* 11b7463f push 0x11b80d68 */
  push32((uint32_t)(0x11b80d68u));
  /* 11b74644 push 0x11b80ef0 */
  push32((uint32_t)(0x11b80ef0u));
  /* 11b74649 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b7464fu);
  /* 11b7464f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74651 push 0x11b80bd0 */
  push32((uint32_t)(0x11b80bd0u));
  /* 11b74656 call esi */
  call_ind((uint32_t)(ESI), 0x11b74658u);
  /* 11b74658 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7465a push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b7465c push 0x11b80bb0 */
  push32((uint32_t)(0x11b80bb0u));
  /* 11b74661 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74663 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74665u);
  /* 11b74665 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74667 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b74669 push 0x11b810f8 */
  push32((uint32_t)(0x11b810f8u));
  /* 11b7466e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74670 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74672u);
  /* 11b74672 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74675 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74677 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11b74679 push 0x11b81110 */
  push32((uint32_t)(0x11b81110u));
  /* 11b7467e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74680 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74682u);
  /* 11b74682 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74684 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11b74686 push 0x11b80de8 */
  push32((uint32_t)(0x11b80de8u));
  /* 11b7468b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7468d call ebx */
  call_ind((uint32_t)(EBX), 0x11b7468fu);
  /* 11b7468f push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11b74691 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b74697u);
  /* 11b74697 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11b74699 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b7469fu);
  /* 11b7469f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b746a1 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b746a7u);
  /* 11b746a7 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11b746a9 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b746afu);
  /* 11b746af push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11b746b1 call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b746b7u);
  /* 11b746b7 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11b746b9 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b746bfu);
  /* 11b746bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11b746c1 call dword ptr [0x11b7b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b168))), 0x11b746c7u);
  /* 11b746c7 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b746c9 call dword ptr [0x11b7b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b154))), 0x11b746cfu);
  /* 11b746cf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b746d2 jmp 0x11b746da */
  goto L_11b746da;
L_11b746d4:;
  /* 11b746d4 mov ebx, dword ptr [0x11b7b158] */
  EBX = (r32((uint32_t)(0x11b7b158)));
L_11b746da:;
  /* 11b746da push 0x27 */
  push32((uint32_t)(0x27u));
  /* 11b746dc call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b746e2u);
  /* 11b746e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b746e5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b746e7 jne 0x11b74e4c */
  if (!C.zf) goto L_11b74e4c;
  /* 11b746ed push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11b746ef call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b746f5u);
  /* 11b746f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b746f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b746fa je 0x11b74821 */
  if (C.zf) goto L_11b74821;
  /* 11b74700 push 0x11b810b0 */
  push32((uint32_t)(0x11b810b0u));
  /* 11b74705 push 0x11b81228 */
  push32((uint32_t)(0x11b81228u));
  /* 11b7470a call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b74710u);
  /* 11b74710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74713 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74715 je 0x11b74821 */
  if (C.zf) goto L_11b74821;
  /* 11b7471b push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b7471d call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b74723u);
  /* 11b74723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74726 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74728 je 0x11b74821 */
  if (C.zf) goto L_11b74821;
  /* 11b7472e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74730 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b74736u);
  /* 11b74736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74739 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7473c ja 0x11b74761 */
  if ((!C.cf&&!C.zf)) goto L_11b74761;
  /* 11b7473e jmp dword ptr [eax*4 + 0x11b74e74] */
  switch (EAX) {
    case 0: goto L_11b74745;
    case 1: goto L_11b7474c;
    case 2: goto L_11b74753;
    case 3: goto L_11b7475a;
    default: x86_unimpl("switch@0x11b7473e out of table"); return;
  }
L_11b74745:;
  /* 11b74745 mov eax, 0x11b7da98 */
  EAX = (0x11b7da98u);
  /* 11b7474a jmp 0x11b74765 */
  goto L_11b74765;
L_11b7474c:;
  /* 11b7474c mov eax, 0x11b7da90 */
  EAX = (0x11b7da90u);
  /* 11b74751 jmp 0x11b74765 */
  goto L_11b74765;
L_11b74753:;
  /* 11b74753 mov eax, 0x11b7da88 */
  EAX = (0x11b7da88u);
  /* 11b74758 jmp 0x11b74765 */
  goto L_11b74765;
L_11b7475a:;
  /* 11b7475a mov eax, 0x11b7da80 */
  EAX = (0x11b7da80u);
  /* 11b7475f jmp 0x11b74765 */
  goto L_11b74765;
L_11b74761:;
  /* 11b74761 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
L_11b74765:;
  /* 11b74765 push eax */
  push32((uint32_t)(EAX));
  /* 11b74766 call dword ptr [0x11b7b174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b174))), 0x11b7476cu);
  /* 11b7476c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7476f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74771 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74773 je 0x11b7481a */
  if (C.zf) goto L_11b7481a;
  /* 11b74779 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b7477fu);
  /* 11b7477f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b74780 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74782 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74784 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b74787 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b7478a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b7478d lea ebx, [eax + eax*4] */
  EBX = ((uint32_t)(EAX + EAX*4));
  /* 11b74790 shl ebx, 3 */
  EBX = (sh_shl((uint32_t)(EBX), (0x3u)&0x1f, 32));
  /* 11b74793 call dword ptr [0x11b7b178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b178))), 0x11b74799u);
  /* 11b74799 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7479c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7479e jge 0x11b747b6 */
  if ((C.sf==C.of)) goto L_11b747b6;
  /* 11b747a0 push 0x11b7da78 */
  push32((uint32_t)(0x11b7da78u));
  /* 11b747a5 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b747abu);
  /* 11b747ab mov ebx, dword ptr [0x11b7b158] */
  EBX = (r32((uint32_t)(0x11b7b158)));
  /* 11b747b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b747b4 jmp 0x11b74821 */
  goto L_11b74821;
L_11b747b6:;
  /* 11b747b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b747b8 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11b747ba call ebp */
  call_ind((uint32_t)(EBP), 0x11b747bcu);
  /* 11b747bc push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b747be push 1 */
  push32((uint32_t)(0x1u));
  /* 11b747c0 push 0x11b81148 */
  push32((uint32_t)(0x11b81148u));
  /* 11b747c5 call dword ptr [0x11b7b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f8))), 0x11b747cbu);
  /* 11b747cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b747cd push 0x11b811b8 */
  push32((uint32_t)(0x11b811b8u));
  /* 11b747d2 call esi */
  call_ind((uint32_t)(ESI), 0x11b747d4u);
  /* 11b747d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b747d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b747d8 call dword ptr [0x11b7b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b164))), 0x11b747deu);
  /* 11b747de push 0 */
  push32((uint32_t)(0x0u));
  /* 11b747e0 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b747e6u);
  /* 11b747e6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b747e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b747e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b747eb lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b747ee lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b747f1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b747f4 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b747f7 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11b747fa mov ebx, edx */
  EBX = (EDX);
  /* 11b747fc call dword ptr [0x11b7b178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b178))), 0x11b74802u);
  /* 11b74802 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b74804 push eax */
  push32((uint32_t)(EAX));
  /* 11b74805 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74807 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74809 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b7480fu);
  /* 11b7480f mov ebx, dword ptr [0x11b7b158] */
  EBX = (r32((uint32_t)(0x11b7b158)));
  /* 11b74815 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74818 jmp 0x11b74821 */
  goto L_11b74821;
L_11b7481a:;
  /* 11b7481a push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b7481c call ebp */
  call_ind((uint32_t)(EBP), 0x11b7481eu);
  /* 11b7481e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74821:;
  /* 11b74821 push 0x11b810b0 */
  push32((uint32_t)(0x11b810b0u));
  /* 11b74826 push 0x11b81228 */
  push32((uint32_t)(0x11b81228u));
  /* 11b7482b call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b74831u);
  /* 11b74831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74836 jne 0x11b74841 */
  if (!C.zf) goto L_11b74841;
  /* 11b74838 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7483a push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b7483c call ebp */
  call_ind((uint32_t)(EBP), 0x11b7483eu);
  /* 11b7483e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74841:;
  /* 11b74841 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11b74843 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b74849u);
  /* 11b74849 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7484c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7484e je 0x11b7495f */
  if (C.zf) goto L_11b7495f;
  /* 11b74854 push 0x11b810b0 */
  push32((uint32_t)(0x11b810b0u));
  /* 11b74859 push 0x11b810c0 */
  push32((uint32_t)(0x11b810c0u));
  /* 11b7485e call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b74864u);
  /* 11b74864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74869 je 0x11b7495f */
  if (C.zf) goto L_11b7495f;
  /* 11b7486f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74871 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11b74873 call ebp */
  call_ind((uint32_t)(EBP), 0x11b74875u);
  /* 11b74875 push 0x11b7da70 */
  push32((uint32_t)(0x11b7da70u));
  /* 11b7487a call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b74880u);
  /* 11b74880 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74882 push 0x11b81060 */
  push32((uint32_t)(0x11b81060u));
  /* 11b74887 call esi */
  call_ind((uint32_t)(ESI), 0x11b74889u);
  /* 11b74889 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7488b push 0x11b81078 */
  push32((uint32_t)(0x11b81078u));
  /* 11b74890 call esi */
  call_ind((uint32_t)(ESI), 0x11b74892u);
  /* 11b74892 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74894 push 0x11b810c8 */
  push32((uint32_t)(0x11b810c8u));
  /* 11b74899 call esi */
  call_ind((uint32_t)(ESI), 0x11b7489bu);
  /* 11b7489b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7489d push 0x11b810a8 */
  push32((uint32_t)(0x11b810a8u));
  /* 11b748a2 call esi */
  call_ind((uint32_t)(ESI), 0x11b748a4u);
  /* 11b748a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b748a6 push 0x11b80d88 */
  push32((uint32_t)(0x11b80d88u));
  /* 11b748ab call esi */
  call_ind((uint32_t)(ESI), 0x11b748adu);
  /* 11b748ad push 1 */
  push32((uint32_t)(0x1u));
  /* 11b748af push 0x11b80fd8 */
  push32((uint32_t)(0x11b80fd8u));
  /* 11b748b4 call esi */
  call_ind((uint32_t)(ESI), 0x11b748b6u);
  /* 11b748b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b748b8 push 0x11b80ce0 */
  push32((uint32_t)(0x11b80ce0u));
  /* 11b748bd call esi */
  call_ind((uint32_t)(ESI), 0x11b748bfu);
  /* 11b748bf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b748c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b748c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b748c6 call dword ptr [0x11b7b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b164))), 0x11b748ccu);
  /* 11b748cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11b748ce push 0x11b80bb8 */
  push32((uint32_t)(0x11b80bb8u));
  /* 11b748d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b748d5 call edi */
  call_ind((uint32_t)(EDI), 0x11b748d7u);
  /* 11b748d7 mov edi, dword ptr [0x11b7b0f8] */
  EDI = (r32((uint32_t)(0x11b7b0f8)));
  /* 11b748dd push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b748df push 1 */
  push32((uint32_t)(0x1u));
  /* 11b748e1 push 0x11b80be0 */
  push32((uint32_t)(0x11b80be0u));
  /* 11b748e6 call edi */
  call_ind((uint32_t)(EDI), 0x11b748e8u);
  /* 11b748e8 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b748ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11b748ec push 0x11b80c00 */
  push32((uint32_t)(0x11b80c00u));
  /* 11b748f1 call edi */
  call_ind((uint32_t)(EDI), 0x11b748f3u);
  /* 11b748f3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b748f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b748f7 push 0x11b81038 */
  push32((uint32_t)(0x11b81038u));
  /* 11b748fc call edi */
  call_ind((uint32_t)(EDI), 0x11b748feu);
  /* 11b748fe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b74900 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74902 push 0x11b80c58 */
  push32((uint32_t)(0x11b80c58u));
  /* 11b74907 call edi */
  call_ind((uint32_t)(EDI), 0x11b74909u);
  /* 11b74909 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7490c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7490e push 0x11b80bf8 */
  push32((uint32_t)(0x11b80bf8u));
  /* 11b74913 call esi */
  call_ind((uint32_t)(ESI), 0x11b74915u);
  /* 11b74915 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74917 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74919 call dword ptr [0x11b7b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b104))), 0x11b7491fu);
  /* 11b7491f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74921 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11b74926 push 0x11b81038 */
  push32((uint32_t)(0x11b81038u));
  /* 11b7492b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7492d call ebx */
  call_ind((uint32_t)(EBX), 0x11b7492fu);
  /* 11b7492f push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b74934 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b74936 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b7493cu);
  /* 11b7493c push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11b7493e call dword ptr [0x11b7b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0dc))), 0x11b74944u);
  /* 11b74944 mov edi, dword ptr [0x11b7b168] */
  EDI = (r32((uint32_t)(0x11b7b168)));
  /* 11b7494a push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11b7494c call edi */
  call_ind((uint32_t)(EDI), 0x11b7494eu);
  /* 11b7494e push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11b74950 call edi */
  call_ind((uint32_t)(EDI), 0x11b74952u);
  /* 11b74952 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11b74954 call edi */
  call_ind((uint32_t)(EDI), 0x11b74956u);
  /* 11b74956 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74958 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11b7495a call ebp */
  call_ind((uint32_t)(EBP), 0x11b7495cu);
  /* 11b7495c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7495f:;
  /* 11b7495f mov edi, dword ptr [0x11b7b0cc] */
  EDI = (r32((uint32_t)(0x11b7b0cc)));
  /* 11b74965 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11b74967 call edi */
  call_ind((uint32_t)(EDI), 0x11b74969u);
  /* 11b74969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7496c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7496e jne 0x11b74da0 */
  if (!C.zf) goto L_11b74da0;
  /* 11b74974 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11b74976 call edi */
  call_ind((uint32_t)(EDI), 0x11b74978u);
  /* 11b74978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7497b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7497d je 0x11b749a1 */
  if (C.zf) goto L_11b749a1;
  /* 11b7497f push 0x11b80e80 */
  push32((uint32_t)(0x11b80e80u));
  /* 11b74984 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b7498au);
  /* 11b7498a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7498d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7498f je 0x11b749a1 */
  if (C.zf) goto L_11b749a1;
  /* 11b74991 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74993 push 0x11b80bf8 */
  push32((uint32_t)(0x11b80bf8u));
  /* 11b74998 call esi */
  call_ind((uint32_t)(ESI), 0x11b7499au);
  /* 11b7499a push 0x11b80e80 */
  push32((uint32_t)(0x11b80e80u));
  /* 11b7499f jmp 0x11b749cc */
  goto L_11b749cc;
L_11b749a1:;
  /* 11b749a1 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11b749a3 call edi */
  call_ind((uint32_t)(EDI), 0x11b749a5u);
  /* 11b749a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b749a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b749aa je 0x11b749d7 */
  if (C.zf) goto L_11b749d7;
  /* 11b749ac push 0x11b80ed0 */
  push32((uint32_t)(0x11b80ed0u));
  /* 11b749b1 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b749b7u);
  /* 11b749b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b749ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b749bc je 0x11b749d7 */
  if (C.zf) goto L_11b749d7;
  /* 11b749be push 0 */
  push32((uint32_t)(0x0u));
  /* 11b749c0 push 0x11b80bf8 */
  push32((uint32_t)(0x11b80bf8u));
  /* 11b749c5 call esi */
  call_ind((uint32_t)(ESI), 0x11b749c7u);
  /* 11b749c7 push 0x11b80ed0 */
  push32((uint32_t)(0x11b80ed0u));
L_11b749cc:;
  /* 11b749cc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b749ce call dword ptr [0x11b7b130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b130))), 0x11b749d4u);
  /* 11b749d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b749d7:;
  /* 11b749d7 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11b749d9 call edi */
  call_ind((uint32_t)(EDI), 0x11b749dbu);
  /* 11b749db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b749de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b749e0 jne 0x11b74ada */
  if (!C.zf) goto L_11b74ada;
  /* 11b749e6 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11b749e8 call edi */
  call_ind((uint32_t)(EDI), 0x11b749eau);
  /* 11b749ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b749ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b749ef je 0x11b74aaf */
  if (C.zf) goto L_11b74aaf;
  /* 11b749f5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b749f7 call dword ptr [0x11b7b120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b120))), 0x11b749fdu);
  /* 11b749fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74a00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74a02 je 0x11b74aaf */
  if (C.zf) goto L_11b74aaf;
  /* 11b74a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74a0a push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11b74a0c call ebp */
  call_ind((uint32_t)(EBP), 0x11b74a0eu);
  /* 11b74a0e push 0x11b7da68 */
  push32((uint32_t)(0x11b7da68u));
  /* 11b74a13 call dword ptr [0x11b7b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e8))), 0x11b74a19u);
  /* 11b74a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74a1b push 0x11b80bf8 */
  push32((uint32_t)(0x11b80bf8u));
  /* 11b74a20 call esi */
  call_ind((uint32_t)(ESI), 0x11b74a22u);
  /* 11b74a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74a24 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74a26 call dword ptr [0x11b7b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b164))), 0x11b74a2cu);
  /* 11b74a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74a2e call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b74a34u);
  /* 11b74a34 mov ecx, 5 */
  ECX = (0x5u);
  /* 11b74a39 mov edi, dword ptr [0x11b7b12c] */
  EDI = (r32((uint32_t)(0x11b7b12c)));
  /* 11b74a3f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b74a41 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11b74a44 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b74a47 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b74a4a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b74a4d shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b74a50 push eax */
  push32((uint32_t)(EAX));
  /* 11b74a51 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b74a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74a55 call edi */
  call_ind((uint32_t)(EDI), 0x11b74a57u);
  /* 11b74a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74a59 call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b74a5fu);
  /* 11b74a5f mov ecx, 5 */
  ECX = (0x5u);
  /* 11b74a64 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b74a66 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11b74a69 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b74a6c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b74a6f lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11b74a72 shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b74a75 push ecx */
  push32((uint32_t)(ECX));
  /* 11b74a76 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b74a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74a7a call edi */
  call_ind((uint32_t)(EDI), 0x11b74a7cu);
  /* 11b74a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74a7e push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11b74a80 call ebp */
  call_ind((uint32_t)(EBP), 0x11b74a82u);
  /* 11b74a82 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74a85 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11b74a8a push 0x11b80e48 */
  push32((uint32_t)(0x11b80e48u));
  /* 11b74a8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74a91 push 0x11b81248 */
  push32((uint32_t)(0x11b81248u));
  /* 11b74a96 push 0x11b80cb0 */
  push32((uint32_t)(0x11b80cb0u));
  /* 11b74a9b push 0x11b80ea0 */
  push32((uint32_t)(0x11b80ea0u));
  /* 11b74aa0 call dword ptr [0x11b7b0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ec))), 0x11b74aa6u);
  /* 11b74aa6 mov edi, dword ptr [0x11b7b0cc] */
  EDI = (r32((uint32_t)(0x11b7b0cc)));
  /* 11b74aac add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74aaf:;
  /* 11b74aaf push 0x11b80bf8 */
  push32((uint32_t)(0x11b80bf8u));
  /* 11b74ab4 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b74abau);
  /* 11b74aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74abf je 0x11b74ada */
  if (C.zf) goto L_11b74ada;
  /* 11b74ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74ac3 push 0x11b80ea0 */
  push32((uint32_t)(0x11b80ea0u));
  /* 11b74ac8 call esi */
  call_ind((uint32_t)(ESI), 0x11b74acau);
  /* 11b74aca push 0x11b80bf8 */
  push32((uint32_t)(0x11b80bf8u));
  /* 11b74acf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74ad1 call dword ptr [0x11b7b130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b130))), 0x11b74ad7u);
  /* 11b74ad7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74ada:;
  /* 11b74ada push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11b74adc call edi */
  call_ind((uint32_t)(EDI), 0x11b74adeu);
  /* 11b74ade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74ae1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74ae3 je 0x11b74b03 */
  if (C.zf) goto L_11b74b03;
  /* 11b74ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74ae7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11b74ae9 call ebp */
  call_ind((uint32_t)(EBP), 0x11b74aebu);
  /* 11b74aeb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74aed call dword ptr [0x11b7b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f4))), 0x11b74af3u);
  /* 11b74af3 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b74af8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b74afa call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b74b00u);
  /* 11b74b00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74b03:;
  /* 11b74b03 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11b74b05 call edi */
  call_ind((uint32_t)(EDI), 0x11b74b07u);
  /* 11b74b07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74b0a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74b0c je 0x11b74bac */
  if (C.zf) goto L_11b74bac;
  /* 11b74b12 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b74b14 call dword ptr [0x11b7b120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b120))), 0x11b74b1au);
  /* 11b74b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74b1d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74b1f je 0x11b74bac */
  if (C.zf) goto L_11b74bac;
  /* 11b74b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74b27 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11b74b29 call ebp */
  call_ind((uint32_t)(EBP), 0x11b74b2bu);
  /* 11b74b2b push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b74b30 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b74b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74b34 call dword ptr [0x11b7b0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0f0))), 0x11b74b3au);
  /* 11b74b3a mov edi, dword ptr [0x11b7b11c] */
  EDI = (r32((uint32_t)(0x11b7b11c)));
  /* 11b74b40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74b43 mov dword ptr [0x11b812a4], 0 */
  w32((uint32_t)(0x11b812a4), (0x0u));
L_11b74b4d:;
  /* 11b74b4d push 3 */
  push32((uint32_t)(0x3u));
  /* 11b74b4f push 0x11b80c98 */
  push32((uint32_t)(0x11b80c98u));
  /* 11b74b54 push 0x11b80f98 */
  push32((uint32_t)(0x11b80f98u));
  /* 11b74b59 push 0x11b81268 */
  push32((uint32_t)(0x11b81268u));
  /* 11b74b5e call edi */
  call_ind((uint32_t)(EDI), 0x11b74b60u);
  /* 11b74b60 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b74b62 push 0x11b80c90 */
  push32((uint32_t)(0x11b80c90u));
  /* 11b74b67 push 0x11b80f98 */
  push32((uint32_t)(0x11b80f98u));
  /* 11b74b6c push 0x11b81280 */
  push32((uint32_t)(0x11b81280u));
  /* 11b74b71 call edi */
  call_ind((uint32_t)(EDI), 0x11b74b73u);
  /* 11b74b73 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b74b75 push 0x11b80c88 */
  push32((uint32_t)(0x11b80c88u));
  /* 11b74b7a push 0x11b80f98 */
  push32((uint32_t)(0x11b80f98u));
  /* 11b74b7f push 0x11b81270 */
  push32((uint32_t)(0x11b81270u));
  /* 11b74b84 call edi */
  call_ind((uint32_t)(EDI), 0x11b74b86u);
  /* 11b74b86 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b74b88 push 0x11b80c80 */
  push32((uint32_t)(0x11b80c80u));
  /* 11b74b8d push 0x11b80f98 */
  push32((uint32_t)(0x11b80f98u));
  /* 11b74b92 push 0x11b81290 */
  push32((uint32_t)(0x11b81290u));
  /* 11b74b97 call edi */
  call_ind((uint32_t)(EDI), 0x11b74b99u);
  /* 11b74b99 mov eax, dword ptr [0x11b812a4] */
  EAX = (r32((uint32_t)(0x11b812a4)));
  /* 11b74b9e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74ba1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b74ba2 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b74ba5 mov dword ptr [0x11b812a4], eax */
  w32((uint32_t)(0x11b812a4), (EAX));
  /* 11b74baa jl 0x11b74b4d */
  if ((C.sf!=C.of)) goto L_11b74b4d;
L_11b74bac:;
  /* 11b74bac push 0x11b80c98 */
  push32((uint32_t)(0x11b80c98u));
  /* 11b74bb1 push 0x11b80e58 */
  push32((uint32_t)(0x11b80e58u));
  /* 11b74bb6 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b74bbcu);
  /* 11b74bbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74bbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74bc1 jle 0x11b74bfd */
  if ((C.zf||C.sf!=C.of)) goto L_11b74bfd;
  /* 11b74bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74bc5 push 0x11b80c98 */
  push32((uint32_t)(0x11b80c98u));
  /* 11b74bca call esi */
  call_ind((uint32_t)(ESI), 0x11b74bccu);
  /* 11b74bcc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74bce push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b74bd0 push 0x11b80e88 */
  push32((uint32_t)(0x11b80e88u));
  /* 11b74bd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74bd7 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74bd9u);
  /* 11b74bd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74bdb push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b74bdd push 0x11b80d58 */
  push32((uint32_t)(0x11b80d58u));
  /* 11b74be2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74be4 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74be6u);
  /* 11b74be6 mov edi, dword ptr [0x11b7b134] */
  EDI = (r32((uint32_t)(0x11b7b134)));
  /* 11b74bec push 0x11b80de0 */
  push32((uint32_t)(0x11b80de0u));
  /* 11b74bf1 push 0x11b80c98 */
  push32((uint32_t)(0x11b80c98u));
  /* 11b74bf6 call edi */
  call_ind((uint32_t)(EDI), 0x11b74bf8u);
  /* 11b74bf8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74bfb jmp 0x11b74c03 */
  goto L_11b74c03;
L_11b74bfd:;
  /* 11b74bfd mov edi, dword ptr [0x11b7b134] */
  EDI = (r32((uint32_t)(0x11b7b134)));
L_11b74c03:;
  /* 11b74c03 push 0x11b80c90 */
  push32((uint32_t)(0x11b80c90u));
  /* 11b74c08 push 0x11b80e50 */
  push32((uint32_t)(0x11b80e50u));
  /* 11b74c0d call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b74c13u);
  /* 11b74c13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74c18 jle 0x11b74c4c */
  if ((C.zf||C.sf!=C.of)) goto L_11b74c4c;
  /* 11b74c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74c1c push 0x11b80c90 */
  push32((uint32_t)(0x11b80c90u));
  /* 11b74c21 call esi */
  call_ind((uint32_t)(ESI), 0x11b74c23u);
  /* 11b74c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74c25 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b74c27 push 0x11b80e88 */
  push32((uint32_t)(0x11b80e88u));
  /* 11b74c2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74c2e call ebx */
  call_ind((uint32_t)(EBX), 0x11b74c30u);
  /* 11b74c30 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74c32 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b74c34 push 0x11b80d58 */
  push32((uint32_t)(0x11b80d58u));
  /* 11b74c39 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74c3b call ebx */
  call_ind((uint32_t)(EBX), 0x11b74c3du);
  /* 11b74c3d push 0x11b80de0 */
  push32((uint32_t)(0x11b80de0u));
  /* 11b74c42 push 0x11b80c90 */
  push32((uint32_t)(0x11b80c90u));
  /* 11b74c47 call edi */
  call_ind((uint32_t)(EDI), 0x11b74c49u);
  /* 11b74c49 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74c4c:;
  /* 11b74c4c push 0x11b80c88 */
  push32((uint32_t)(0x11b80c88u));
  /* 11b74c51 push 0x11b80e70 */
  push32((uint32_t)(0x11b80e70u));
  /* 11b74c56 call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b74c5cu);
  /* 11b74c5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74c61 jle 0x11b74c95 */
  if ((C.zf||C.sf!=C.of)) goto L_11b74c95;
  /* 11b74c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74c65 push 0x11b80c88 */
  push32((uint32_t)(0x11b80c88u));
  /* 11b74c6a call esi */
  call_ind((uint32_t)(ESI), 0x11b74c6cu);
  /* 11b74c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74c6e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b74c70 push 0x11b80e98 */
  push32((uint32_t)(0x11b80e98u));
  /* 11b74c75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74c77 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74c79u);
  /* 11b74c79 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74c7b push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b74c7d push 0x11b81298 */
  push32((uint32_t)(0x11b81298u));
  /* 11b74c82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74c84 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74c86u);
  /* 11b74c86 push 0x11b80dc0 */
  push32((uint32_t)(0x11b80dc0u));
  /* 11b74c8b push 0x11b80c88 */
  push32((uint32_t)(0x11b80c88u));
  /* 11b74c90 call edi */
  call_ind((uint32_t)(EDI), 0x11b74c92u);
  /* 11b74c92 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74c95:;
  /* 11b74c95 push 0x11b80c80 */
  push32((uint32_t)(0x11b80c80u));
  /* 11b74c9a push 0x11b80e68 */
  push32((uint32_t)(0x11b80e68u));
  /* 11b74c9f call dword ptr [0x11b7b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b118))), 0x11b74ca5u);
  /* 11b74ca5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74ca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74caa jle 0x11b74cde */
  if ((C.zf||C.sf!=C.of)) goto L_11b74cde;
  /* 11b74cac push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74cae push 0x11b80c80 */
  push32((uint32_t)(0x11b80c80u));
  /* 11b74cb3 call esi */
  call_ind((uint32_t)(ESI), 0x11b74cb5u);
  /* 11b74cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74cb7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b74cb9 push 0x11b80e98 */
  push32((uint32_t)(0x11b80e98u));
  /* 11b74cbe push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74cc0 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74cc2u);
  /* 11b74cc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74cc4 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b74cc6 push 0x11b81298 */
  push32((uint32_t)(0x11b81298u));
  /* 11b74ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74ccd call ebx */
  call_ind((uint32_t)(EBX), 0x11b74ccfu);
  /* 11b74ccf push 0x11b80dc0 */
  push32((uint32_t)(0x11b80dc0u));
  /* 11b74cd4 push 0x11b80c80 */
  push32((uint32_t)(0x11b80c80u));
  /* 11b74cd9 call edi */
  call_ind((uint32_t)(EDI), 0x11b74cdbu);
  /* 11b74cdb add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74cde:;
  /* 11b74cde cmp dword ptr [0x11b812a4], 0xa */
  { uint32_t _a=(r32((uint32_t)(0x11b812a4))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b74ce5 jne 0x11b74da0 */
  if (!C.zf) goto L_11b74da0;
  /* 11b74ceb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74ced push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11b74cef mov dword ptr [0x11b812a4], 0 */
  w32((uint32_t)(0x11b812a4), (0x0u));
  /* 11b74cf9 call ebp */
  call_ind((uint32_t)(EBP), 0x11b74cfbu);
  /* 11b74cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74cfd call dword ptr [0x11b7b0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e4))), 0x11b74d03u);
  /* 11b74d03 mov ecx, 6 */
  ECX = (0x6u);
  /* 11b74d08 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b74d0a lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11b74d0d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b74d10 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b74d13 shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b74d16 push edx */
  push32((uint32_t)(EDX));
  /* 11b74d17 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b74d19 call dword ptr [0x11b7b10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b10c))), 0x11b74d1fu);
  /* 11b74d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74d21 push 0x11b80de0 */
  push32((uint32_t)(0x11b80de0u));
  /* 11b74d26 call esi */
  call_ind((uint32_t)(ESI), 0x11b74d28u);
  /* 11b74d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74d2a push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b74d2c push 0x11b80e90 */
  push32((uint32_t)(0x11b80e90u));
  /* 11b74d31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74d33 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74d35u);
  /* 11b74d35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74d37 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b74d39 push 0x11b810f8 */
  push32((uint32_t)(0x11b810f8u));
  /* 11b74d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74d40 call ebx */
  call_ind((uint32_t)(EBX), 0x11b74d42u);
  /* 11b74d42 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74d44 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11b74d46 push 0x11b81110 */
  push32((uint32_t)(0x11b81110u));
  /* 11b74d4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74d4d call ebx */
  call_ind((uint32_t)(EBX), 0x11b74d4fu);
  /* 11b74d4f add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74d52 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74d54 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b74d56 push 0x11b80de8 */
  push32((uint32_t)(0x11b80de8u));
  /* 11b74d5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74d5d call ebx */
  call_ind((uint32_t)(EBX), 0x11b74d5fu);
  /* 11b74d5f push 0x11b81080 */
  push32((uint32_t)(0x11b81080u));
  /* 11b74d64 push 0x11b80c98 */
  push32((uint32_t)(0x11b80c98u));
  /* 11b74d69 call edi */
  call_ind((uint32_t)(EDI), 0x11b74d6bu);
  /* 11b74d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74d6d push 0x11b80dc0 */
  push32((uint32_t)(0x11b80dc0u));
  /* 11b74d72 call esi */
  call_ind((uint32_t)(ESI), 0x11b74d74u);
  /* 11b74d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74d76 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b74d78 push 0x11b80e90 */
  push32((uint32_t)(0x11b80e90u));
  /* 11b74d7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74d7f call ebx */
  call_ind((uint32_t)(EBX), 0x11b74d81u);
  /* 11b74d81 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74d85 push 0x11b810c0 */
  push32((uint32_t)(0x11b810c0u));
  /* 11b74d8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74d8c call ebx */
  call_ind((uint32_t)(EBX), 0x11b74d8eu);
  /* 11b74d8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74d91 push 0x11b81080 */
  push32((uint32_t)(0x11b81080u));
  /* 11b74d96 push 0x11b80c98 */
  push32((uint32_t)(0x11b80c98u));
  /* 11b74d9b call edi */
  call_ind((uint32_t)(EDI), 0x11b74d9du);
  /* 11b74d9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74da0:;
  /* 11b74da0 mov edi, dword ptr [0x11b7b124] */
  EDI = (r32((uint32_t)(0x11b7b124)));
  /* 11b74da6 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11b74da8 call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b74daeu);
  /* 11b74dae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74db1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74db3 je 0x11b74ded */
  if (C.zf) goto L_11b74ded;
  /* 11b74db5 push 0x11b80b50 */
  push32((uint32_t)(0x11b80b50u));
  /* 11b74dba call edi */
  call_ind((uint32_t)(EDI), 0x11b74dbcu);
  /* 11b74dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74dbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74dc1 jne 0x11b74ded */
  if (!C.zf) goto L_11b74ded;
  /* 11b74dc3 push eax */
  push32((uint32_t)(EAX));
  /* 11b74dc4 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11b74dc6 call ebp */
  call_ind((uint32_t)(EBP), 0x11b74dc8u);
  /* 11b74dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74dca push 0x11b81070 */
  push32((uint32_t)(0x11b81070u));
  /* 11b74dcf call esi */
  call_ind((uint32_t)(ESI), 0x11b74dd1u);
  /* 11b74dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74dd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74dd5 call dword ptr [0x11b7b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b104))), 0x11b74ddbu);
  /* 11b74ddb mov esi, dword ptr [0x11b7b0e8] */
  ESI = (r32((uint32_t)(0x11b7b0e8)));
  /* 11b74de1 push 0x11b7da60 */
  push32((uint32_t)(0x11b7da60u));
  /* 11b74de6 call esi */
  call_ind((uint32_t)(ESI), 0x11b74de8u);
  /* 11b74de8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74deb jmp 0x11b74df3 */
  goto L_11b74df3;
L_11b74ded:;
  /* 11b74ded mov esi, dword ptr [0x11b7b0e8] */
  ESI = (r32((uint32_t)(0x11b7b0e8)));
L_11b74df3:;
  /* 11b74df3 push 0x11b80b70 */
  push32((uint32_t)(0x11b80b70u));
  /* 11b74df8 call edi */
  call_ind((uint32_t)(EDI), 0x11b74dfau);
  /* 11b74dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74dff jne 0x11b74e20 */
  if (!C.zf) goto L_11b74e20;
  /* 11b74e01 push 0x11b80b48 */
  push32((uint32_t)(0x11b80b48u));
  /* 11b74e06 call edi */
  call_ind((uint32_t)(EDI), 0x11b74e08u);
  /* 11b74e08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74e0b cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b74e0e jg 0x11b74e20 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b74e20;
  /* 11b74e10 push 0x11b7da58 */
  push32((uint32_t)(0x11b7da58u));
  /* 11b74e15 call esi */
  call_ind((uint32_t)(ESI), 0x11b74e17u);
  /* 11b74e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74e1a call dword ptr [0x11b7b188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b188))), 0x11b74e20u);
L_11b74e20:;
  /* 11b74e20 push 0x11b80fc8 */
  push32((uint32_t)(0x11b80fc8u));
  /* 11b74e25 call edi */
  call_ind((uint32_t)(EDI), 0x11b74e27u);
  /* 11b74e27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74e2c je 0x11b74e3c */
  if (C.zf) goto L_11b74e3c;
  /* 11b74e2e push 0x11b80db0 */
  push32((uint32_t)(0x11b80db0u));
  /* 11b74e33 call edi */
  call_ind((uint32_t)(EDI), 0x11b74e35u);
  /* 11b74e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74e38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74e3a jne 0x11b74e4c */
  if (!C.zf) goto L_11b74e4c;
L_11b74e3c:;
  /* 11b74e3c push 0x11b7da50 */
  push32((uint32_t)(0x11b7da50u));
  /* 11b74e41 call esi */
  call_ind((uint32_t)(ESI), 0x11b74e43u);
  /* 11b74e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74e46 call dword ptr [0x11b7b17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b17c))), 0x11b74e4cu);
L_11b74e4c:;
  /* 11b74e4c pop edi */
  EDI = (pop32());
  /* 11b74e4d pop esi */
  ESI = (pop32());
  /* 11b74e4e pop ebp */
  EBP = (pop32());
  /* 11b74e4f pop ebx */
  EBX = (pop32());
  /* 11b74e50 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74e53 ret  */
  ESPCHK(0x11b71d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e90 @ 0x11b74e90 (244 bytes, 97 insns) */
void f_11b74e90(void) {
  FTRACE(0x11b74e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b74e90 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b74e94 push esi */
  push32((uint32_t)(ESI));
  /* 11b74e95 mov esi, dword ptr [0x11b7b160] */
  ESI = (r32((uint32_t)(0x11b7b160)));
  /* 11b74e9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74e9d push eax */
  push32((uint32_t)(EAX));
  /* 11b74e9e call esi */
  call_ind((uint32_t)(ESI), 0x11b74ea0u);
  /* 11b74ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74ea5 jne 0x11b74f7d */
  if (!C.zf) goto L_11b74f7d;
  /* 11b74eab mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b74eaf push eax */
  push32((uint32_t)(EAX));
  /* 11b74eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b74eb1 call esi */
  call_ind((uint32_t)(ESI), 0x11b74eb3u);
  /* 11b74eb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74eb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74eb8 je 0x11b74f7d */
  if (C.zf) goto L_11b74f7d;
  /* 11b74ebe mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b74ec2 push edx */
  push32((uint32_t)(EDX));
  /* 11b74ec3 call dword ptr [0x11b7b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b124))), 0x11b74ec9u);
  /* 11b74ec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b74ece jne 0x11b74f7d */
  if (!C.zf) goto L_11b74f7d;
  /* 11b74ed4 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b74ed8 push edi */
  push32((uint32_t)(EDI));
  /* 11b74ed9 mov edi, dword ptr [0x11b7b0e8] */
  EDI = (r32((uint32_t)(0x11b7b0e8)));
  /* 11b74edf push eax */
  push32((uint32_t)(EAX));
  /* 11b74ee0 call edi */
  call_ind((uint32_t)(EDI), 0x11b74ee2u);
  /* 11b74ee2 mov ecx, dword ptr [esp + 0x2c] */
  ECX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11b74ee6 mov esi, dword ptr [0x11b7b12c] */
  ESI = (r32((uint32_t)(0x11b7b12c)));
  /* 11b74eec push ecx */
  push32((uint32_t)(ECX));
  /* 11b74eed push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74eef push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74ef1 call esi */
  call_ind((uint32_t)(ESI), 0x11b74ef3u);
  /* 11b74ef3 mov edx, dword ptr [esp + 0x30] */
  EDX = (r32((uint32_t)(ESP + 0x30)));
  /* 11b74ef7 push edx */
  push32((uint32_t)(EDX));
  /* 11b74ef8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b74efa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74efc call esi */
  call_ind((uint32_t)(ESI), 0x11b74efeu);
  /* 11b74efe mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 11b74f02 push eax */
  push32((uint32_t)(EAX));
  /* 11b74f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74f07 call esi */
  call_ind((uint32_t)(ESI), 0x11b74f09u);
  /* 11b74f09 mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 11b74f0d push ecx */
  push32((uint32_t)(ECX));
  /* 11b74f0e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b74f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74f12 call esi */
  call_ind((uint32_t)(ESI), 0x11b74f14u);
  /* 11b74f14 mov edx, dword ptr [esp + 0x60] */
  EDX = (r32((uint32_t)(ESP + 0x60)));
  /* 11b74f18 push edx */
  push32((uint32_t)(EDX));
  /* 11b74f19 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b74f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74f1d call esi */
  call_ind((uint32_t)(ESI), 0x11b74f1fu);
  /* 11b74f1f mov eax, dword ptr [esp + 0x70] */
  EAX = (r32((uint32_t)(ESP + 0x70)));
  /* 11b74f23 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74f26 push eax */
  push32((uint32_t)(EAX));
  /* 11b74f27 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b74f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74f2b call esi */
  call_ind((uint32_t)(ESI), 0x11b74f2du);
  /* 11b74f2d push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11b74f2f call dword ptr [0x11b7b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0cc))), 0x11b74f35u);
  /* 11b74f35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74f38 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b74f3a jne 0x11b74f78 */
  if (!C.zf) goto L_11b74f78;
  /* 11b74f3c mov eax, dword ptr [0x11b812b4] */
  EAX = (r32((uint32_t)(0x11b812b4)));
  /* 11b74f41 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b74f42 mov dword ptr [0x11b812b4], eax */
  w32((uint32_t)(0x11b812b4), (EAX));
  /* 11b74f47 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b74f48 je 0x11b74f6e */
  if (C.zf) goto L_11b74f6e;
  /* 11b74f4a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b74f4b je 0x11b74f5f */
  if (C.zf) goto L_11b74f5f;
  /* 11b74f4d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b74f4e jne 0x11b74f78 */
  if (!C.zf) goto L_11b74f78;
  /* 11b74f50 push 0x11b7db70 */
  push32((uint32_t)(0x11b7db70u));
  /* 11b74f55 call edi */
  call_ind((uint32_t)(EDI), 0x11b74f57u);
  /* 11b74f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b74f5c pop edi */
  EDI = (pop32());
  /* 11b74f5d pop esi */
  ESI = (pop32());
  /* 11b74f5e ret  */
  ESPCHK(0x11b74e90u, _esp0);
  ESP += 4; return;
L_11b74f5f:;
  /* 11b74f5f push 0x11b7db78 */
  push32((uint32_t)(0x11b7db78u));
  /* 11b74f64 call edi */
  call_ind((uint32_t)(EDI), 0x11b74f66u);
  /* 11b74f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74f69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b74f6b pop edi */
  EDI = (pop32());
  /* 11b74f6c pop esi */
  ESI = (pop32());
  /* 11b74f6d ret  */
  ESPCHK(0x11b74e90u, _esp0);
  ESP += 4; return;
L_11b74f6e:;
  /* 11b74f6e push 0x11b7db80 */
  push32((uint32_t)(0x11b7db80u));
  /* 11b74f73 call edi */
  call_ind((uint32_t)(EDI), 0x11b74f75u);
  /* 11b74f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b74f78:;
  /* 11b74f78 pop edi */
  EDI = (pop32());
  /* 11b74f79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b74f7b pop esi */
  ESI = (pop32());
  /* 11b74f7c ret  */
  ESPCHK(0x11b74e90u, _esp0);
  ESP += 4; return;
L_11b74f7d:;
  /* 11b74f7d mov eax, 1 */
  EAX = (0x1u);
  /* 11b74f82 pop esi */
  ESI = (pop32());
  /* 11b74f83 ret  */
  ESPCHK(0x11b74e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f90 @ 0x11b74f90 (32 bytes, 11 insns) */
void f_11b74f90(void) {
  FTRACE(0x11b74f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b74f90 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b74f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b74f96 push eax */
  push32((uint32_t)(EAX));
  /* 11b74f97 call dword ptr [0x11b7b0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0e0))), 0x11b74f9du);
  /* 11b74f9d mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b74fa1 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b74fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b74fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b74fa6 call dword ptr [0x11b7b170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b170))), 0x11b74facu);
  /* 11b74fac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74faf ret  */
  ESPCHK(0x11b74f90u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11b74fb0 (34 bytes, 9 insns) */
void f_11b74fb0(void) {
  FTRACE(0x11b74fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b74fb0 call 0x11b75250 */
  push32(0x11b74fb5u); f_11b75250();
  /* 11b74fb5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b74fb8 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b74fbe add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b74fc4 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11b74fc7 mov eax, ecx */
  EAX = (ECX);
  /* 11b74fc9 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b74fcc and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b74fd1 ret  */
  ESPCHK(0x11b74fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fd2 @ 0x11b74fd2 (23 bytes, 6 insns) */
void f_11b74fd2(void) {
  FTRACE(0x11b74fd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b74fd2 call 0x11b74fea */
  push32(0x11b74fd7u); f_11b74fea();
  /* 11b74fd7 call 0x11b753a7 */
  push32(0x11b74fdcu); f_11b753a7();
  /* 11b74fdc mov dword ptr [0x11b812d0], eax */
  w32((uint32_t)(0x11b812d0), (EAX));
  /* 11b74fe1 call 0x11b75357 */
  push32(0x11b74fe6u); f_11b75357();
  /* 11b74fe6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11b74fe8 ret  */
  ESPCHK(0x11b74fd2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fea @ 0x11b74fea (56 bytes, 8 insns) */
void f_11b74fea(void) {
  FTRACE(0x11b74feau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b74fea mov eax, 0x11b75780 */
  EAX = (0x11b75780u);
  /* 11b74fef mov dword ptr [0x11b7de40], 0x11b7542a */
  w32((uint32_t)(0x11b7de40), (0x11b7542au));
  /* 11b74ff9 mov dword ptr [0x11b7de3c], eax */
  w32((uint32_t)(0x11b7de3c), (EAX));
  /* 11b74ffe mov dword ptr [0x11b7de44], 0x11b75490 */
  w32((uint32_t)(0x11b7de44), (0x11b75490u));
  /* 11b75008 mov dword ptr [0x11b7de48], 0x11b753d0 */
  w32((uint32_t)(0x11b7de48), (0x11b753d0u));
  /* 11b75012 mov dword ptr [0x11b7de4c], 0x11b75478 */
  w32((uint32_t)(0x11b7de4c), (0x11b75478u));
  /* 11b7501c mov dword ptr [0x11b7de50], eax */
  w32((uint32_t)(0x11b7de50), (EAX));
  /* 11b75021 ret  */
  ESPCHK(0x11b74feau, _esp0);
  ESP += 4; return;
}

/* FUN_10005022 @ 0x11b75022 (217 bytes, 57 insns) */
void f_11b75022(void) {
  FTRACE(0x11b75022u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75022 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b75026 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75029 jne 0x11b750b7 */
  if (!C.zf) goto L_11b750b7;
  /* 11b7502f call dword ptr [0x11b7b0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0a4))), 0x11b75035u);
  /* 11b75035 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b75037 mov dword ptr [0x11b812ec], eax */
  w32((uint32_t)(0x11b812ec), (EAX));
  /* 11b7503c call 0x11b760d1 */
  push32(0x11b75041u); f_11b760d1();
  /* 11b75041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75043 pop ecx */
  ECX = (pop32());
  /* 11b75044 je 0x11b75082 */
  if (C.zf) goto L_11b75082;
  /* 11b75046 mov eax, dword ptr [0x11b812ec] */
  EAX = (r32((uint32_t)(0x11b812ec)));
  /* 11b7504b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b7504d mov cl, byte ptr [0x11b812ed] */
  CL = (r8((uint32_t)(0x11b812ed)));
  /* 11b75053 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b75058 shr dword ptr [0x11b812ec], 0x10 */
  w32((uint32_t)(0x11b812ec), (sh_shr((uint32_t)(r32((uint32_t)(0x11b812ec))), (0x10u)&0x1f, 32)));
  /* 11b7505f mov dword ptr [0x11b812f4], eax */
  w32((uint32_t)(0x11b812f4), (EAX));
  /* 11b75064 mov dword ptr [0x11b812f8], ecx */
  w32((uint32_t)(0x11b812f8), (ECX));
  /* 11b7506a shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b7506d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7506f mov dword ptr [0x11b812f0], eax */
  w32((uint32_t)(0x11b812f0), (EAX));
  /* 11b75074 call 0x11b751cb */
  push32(0x11b75079u); f_11b751cb();
  /* 11b75079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7507b jne 0x11b75086 */
  if (!C.zf) goto L_11b75086;
  /* 11b7507d call 0x11b7612e */
  push32(0x11b75082u); f_11b7612e();
L_11b75082:;
  /* 11b75082 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b75084 jmp 0x11b750f8 */
  goto L_11b750f8;
L_11b75086:;
  /* 11b75086 call dword ptr [0x11b7b0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0a0))), 0x11b7508cu);
  /* 11b7508c mov dword ptr [0x11b819b4], eax */
  w32((uint32_t)(0x11b819b4), (EAX));
  /* 11b75091 call 0x11b75e2a */
  push32(0x11b75096u); f_11b75e2a();
  /* 11b75096 mov dword ptr [0x11b812d8], eax */
  w32((uint32_t)(0x11b812d8), (EAX));
  /* 11b7509b call 0x11b75914 */
  push32(0x11b750a0u); f_11b75914();
  /* 11b750a0 call 0x11b75bdd */
  push32(0x11b750a5u); f_11b75bdd();
  /* 11b750a5 call 0x11b75b24 */
  push32(0x11b750aau); f_11b75b24();
  /* 11b750aa call 0x11b757f6 */
  push32(0x11b750afu); f_11b757f6();
  /* 11b750af inc dword ptr [0x11b812d4] */
  { uint32_t _r=(r32((uint32_t)(0x11b812d4)))+1; w32((uint32_t)(0x11b812d4), (_r)); fl_inc(_r,32); }
  /* 11b750b5 jmp 0x11b750f5 */
  goto L_11b750f5;
L_11b750b7:;
  /* 11b750b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b750b9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b750bb jne 0x11b750e9 */
  if (!C.zf) goto L_11b750e9;
  /* 11b750bd cmp dword ptr [0x11b812d4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11b812d4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b750c3 jle 0x11b75082 */
  if ((C.zf||C.sf!=C.of)) goto L_11b75082;
  /* 11b750c5 dec dword ptr [0x11b812d4] */
  { uint32_t _r=(r32((uint32_t)(0x11b812d4)))-1; w32((uint32_t)(0x11b812d4), (_r)); fl_dec(_r,32); }
  /* 11b750cb cmp dword ptr [0x11b81324], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11b81324))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b750d1 jne 0x11b750d8 */
  if (!C.zf) goto L_11b750d8;
  /* 11b750d3 call 0x11b75834 */
  push32(0x11b750d8u); f_11b75834();
L_11b750d8:;
  /* 11b750d8 call 0x11b75ad0 */
  push32(0x11b750ddu); f_11b75ad0();
  /* 11b750dd call 0x11b7521f */
  push32(0x11b750e2u); f_11b7521f();
  /* 11b750e2 call 0x11b7612e */
  push32(0x11b750e7u); f_11b7612e();
  /* 11b750e7 jmp 0x11b750f5 */
  goto L_11b750f5;
L_11b750e9:;
  /* 11b750e9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b750ec jne 0x11b750f5 */
  if (!C.zf) goto L_11b750f5;
  /* 11b750ee push ecx */
  push32((uint32_t)(ECX));
  /* 11b750ef call 0x11b752b7 */
  push32(0x11b750f4u); f_11b752b7();
  /* 11b750f4 pop ecx */
  ECX = (pop32());
L_11b750f5:;
  /* 11b750f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b750f7 pop eax */
  EAX = (pop32());
L_11b750f8:;
  /* 11b750f8 ret 0xc */
  ESPCHK(0x11b75022u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11b750fb (157 bytes, 73 insns) */
void f_11b750fb(void) {
  FTRACE(0x11b750fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b750fb push ebp */
  push32((uint32_t)(EBP));
  /* 11b750fc mov ebp, esp */
  EBP = (ESP);
  /* 11b750fe push ebx */
  push32((uint32_t)(EBX));
  /* 11b750ff mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b75102 push esi */
  push32((uint32_t)(ESI));
  /* 11b75103 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b75106 push edi */
  push32((uint32_t)(EDI));
  /* 11b75107 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b7510a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b7510c jne 0x11b75117 */
  if (!C.zf) goto L_11b75117;
  /* 11b7510e cmp dword ptr [0x11b812d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b812d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75115 jmp 0x11b7513d */
  goto L_11b7513d;
L_11b75117:;
  /* 11b75117 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7511a je 0x11b75121 */
  if (C.zf) goto L_11b75121;
  /* 11b7511c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7511f jne 0x11b75143 */
  if (!C.zf) goto L_11b75143;
L_11b75121:;
  /* 11b75121 mov eax, dword ptr [0x11b819b8] */
  EAX = (r32((uint32_t)(0x11b819b8)));
  /* 11b75126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75128 je 0x11b75133 */
  if (C.zf) goto L_11b75133;
  /* 11b7512a push edi */
  push32((uint32_t)(EDI));
  /* 11b7512b push esi */
  push32((uint32_t)(ESI));
  /* 11b7512c push ebx */
  push32((uint32_t)(EBX));
  /* 11b7512d call eax */
  call_ind((uint32_t)(EAX), 0x11b7512fu);
  /* 11b7512f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75131 je 0x11b7513f */
  if (C.zf) goto L_11b7513f;
L_11b75133:;
  /* 11b75133 push edi */
  push32((uint32_t)(EDI));
  /* 11b75134 push esi */
  push32((uint32_t)(ESI));
  /* 11b75135 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75136 call 0x11b75022 */
  push32(0x11b7513bu); f_11b75022();
  /* 11b7513b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11b7513d:;
  /* 11b7513d jne 0x11b75143 */
  if (!C.zf) goto L_11b75143;
L_11b7513f:;
  /* 11b7513f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b75141 jmp 0x11b75191 */
  goto L_11b75191;
L_11b75143:;
  /* 11b75143 push edi */
  push32((uint32_t)(EDI));
  /* 11b75144 push esi */
  push32((uint32_t)(ESI));
  /* 11b75145 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75146 call 0x11b71000 */
  push32(0x11b7514bu); f_11b71000();
  /* 11b7514b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7514e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b75151 jne 0x11b7515f */
  if (!C.zf) goto L_11b7515f;
  /* 11b75153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75155 jne 0x11b7518e */
  if (!C.zf) goto L_11b7518e;
  /* 11b75157 push edi */
  push32((uint32_t)(EDI));
  /* 11b75158 push eax */
  push32((uint32_t)(EAX));
  /* 11b75159 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7515a call 0x11b75022 */
  push32(0x11b7515fu); f_11b75022();
L_11b7515f:;
  /* 11b7515f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75161 je 0x11b75168 */
  if (C.zf) goto L_11b75168;
  /* 11b75163 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75166 jne 0x11b7518e */
  if (!C.zf) goto L_11b7518e;
L_11b75168:;
  /* 11b75168 push edi */
  push32((uint32_t)(EDI));
  /* 11b75169 push esi */
  push32((uint32_t)(ESI));
  /* 11b7516a push ebx */
  push32((uint32_t)(EBX));
  /* 11b7516b call 0x11b75022 */
  push32(0x11b75170u); f_11b75022();
  /* 11b75170 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75172 jne 0x11b75177 */
  if (!C.zf) goto L_11b75177;
  /* 11b75174 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11b75177:;
  /* 11b75177 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7517b je 0x11b7518e */
  if (C.zf) goto L_11b7518e;
  /* 11b7517d mov eax, dword ptr [0x11b819b8] */
  EAX = (r32((uint32_t)(0x11b819b8)));
  /* 11b75182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75184 je 0x11b7518e */
  if (C.zf) goto L_11b7518e;
  /* 11b75186 push edi */
  push32((uint32_t)(EDI));
  /* 11b75187 push esi */
  push32((uint32_t)(ESI));
  /* 11b75188 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75189 call eax */
  call_ind((uint32_t)(EAX), 0x11b7518bu);
  /* 11b7518b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11b7518e:;
  /* 11b7518e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11b75191:;
  /* 11b75191 pop edi */
  EDI = (pop32());
  /* 11b75192 pop esi */
  ESI = (pop32());
  /* 11b75193 pop ebx */
  EBX = (pop32());
  /* 11b75194 pop ebp */
  EBP = (pop32());
  /* 11b75195 ret 0xc */
  ESPCHK(0x11b750fbu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11b75198 (48 bytes, 15 insns) */
void f_11b75198(void) {
  FTRACE(0x11b75198u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75198 mov eax, dword ptr [0x11b812e0] */
  EAX = (r32((uint32_t)(0x11b812e0)));
  /* 11b7519d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b751a0 je 0x11b751af */
  if (C.zf) goto L_11b751af;
  /* 11b751a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b751a4 jne 0x11b751b4 */
  if (!C.zf) goto L_11b751b4;
  /* 11b751a6 cmp dword ptr [0x11b812e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b812e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b751ad jne 0x11b751b4 */
  if (!C.zf) goto L_11b751b4;
L_11b751af:;
  /* 11b751af call 0x11b761d6 */
  push32(0x11b751b4u); f_11b761d6();
L_11b751b4:;
  /* 11b751b4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b751b8 call 0x11b7620f */
  push32(0x11b751bdu); f_11b7620f();
  /* 11b751bd push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b751c2 call dword ptr [0x11b7de34] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7de34))), 0x11b751c8u);
  /* 11b751c8 pop ecx */
  ECX = (pop32());
  /* 11b751c9 pop ecx */
  ECX = (pop32());
  /* 11b751ca ret  */
  ESPCHK(0x11b75198u, _esp0);
  ESP += 4; return;
}

/* FUN_100051cb @ 0x11b751cb (84 bytes, 32 insns) */
void f_11b751cb(void) {
  FTRACE(0x11b751cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b751cb push esi */
  push32((uint32_t)(ESI));
  /* 11b751cc call 0x11b7649f */
  push32(0x11b751d1u); f_11b7649f();
  /* 11b751d1 call dword ptr [0x11b7b0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0b0))), 0x11b751d7u);
  /* 11b751d7 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b751da mov dword ptr [0x11b7de38], eax */
  w32((uint32_t)(0x11b7de38), (EAX));
  /* 11b751df je 0x11b7521b */
  if (C.zf) goto L_11b7521b;
  /* 11b751e1 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11b751e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b751e5 call 0x11b76362 */
  push32(0x11b751eau); f_11b76362();
  /* 11b751ea mov esi, eax */
  ESI = (EAX);
  /* 11b751ec pop ecx */
  ECX = (pop32());
  /* 11b751ed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b751ef pop ecx */
  ECX = (pop32());
  /* 11b751f0 je 0x11b7521b */
  if (C.zf) goto L_11b7521b;
  /* 11b751f2 push esi */
  push32((uint32_t)(ESI));
  /* 11b751f3 push dword ptr [0x11b7de38] */
  push32((uint32_t)(r32((uint32_t)(0x11b7de38))));
  /* 11b751f9 call dword ptr [0x11b7b0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ac))), 0x11b751ffu);
  /* 11b751ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75201 je 0x11b7521b */
  if (C.zf) goto L_11b7521b;
  /* 11b75203 push esi */
  push32((uint32_t)(ESI));
  /* 11b75204 call 0x11b7523d */
  push32(0x11b75209u); f_11b7523d();
  /* 11b75209 pop ecx */
  ECX = (pop32());
  /* 11b7520a call dword ptr [0x11b7b0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0a8))), 0x11b75210u);
  /* 11b75210 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b75214 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b75216 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b75218 pop eax */
  EAX = (pop32());
  /* 11b75219 pop esi */
  ESI = (pop32());
  /* 11b7521a ret  */
  ESPCHK(0x11b751cbu, _esp0);
  ESP += 4; return;
L_11b7521b:;
  /* 11b7521b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7521d pop esi */
  ESI = (pop32());
  /* 11b7521e ret  */
  ESPCHK(0x11b751cbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000521f @ 0x11b7521f (30 bytes, 8 insns) */
void f_11b7521f(void) {
  FTRACE(0x11b7521fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7521f call 0x11b764c8 */
  push32(0x11b75224u); f_11b764c8();
  /* 11b75224 mov eax, dword ptr [0x11b7de38] */
  EAX = (r32((uint32_t)(0x11b7de38)));
  /* 11b75229 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7522c je 0x11b7523c */
  if (C.zf) goto L_11b7523c;
  /* 11b7522e push eax */
  push32((uint32_t)(EAX));
  /* 11b7522f call dword ptr [0x11b7b000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b000))), 0x11b75235u);
  /* 11b75235 or dword ptr [0x11b7de38], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11b7de38)))|(0xffffffffu); w32((uint32_t)(0x11b7de38), (_r)); fl_logic(_r,32); }
L_11b7523c:;
  /* 11b7523c ret  */
  ESPCHK(0x11b7521fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000523d @ 0x11b7523d (19 bytes, 4 insns) */
void f_11b7523d(void) {
  FTRACE(0x11b7523du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7523d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b75241 mov dword ptr [eax + 0x50], 0x11b7dfd0 */
  w32((uint32_t)(EAX + 0x50), (0x11b7dfd0u));
  /* 11b75248 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11b7524f ret  */
  ESPCHK(0x11b7523du, _esp0);
  ESP += 4; return;
}

/* FUN_10005250 @ 0x11b75250 (103 bytes, 38 insns) */
void f_11b75250(void) {
  FTRACE(0x11b75250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75250 push esi */
  push32((uint32_t)(ESI));
  /* 11b75251 push edi */
  push32((uint32_t)(EDI));
  /* 11b75252 call dword ptr [0x11b7b0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0bc))), 0x11b75258u);
  /* 11b75258 push dword ptr [0x11b7de38] */
  push32((uint32_t)(r32((uint32_t)(0x11b7de38))));
  /* 11b7525e mov edi, eax */
  EDI = (EAX);
  /* 11b75260 call dword ptr [0x11b7b0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0b8))), 0x11b75266u);
  /* 11b75266 mov esi, eax */
  ESI = (EAX);
  /* 11b75268 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b7526a jne 0x11b752ab */
  if (!C.zf) goto L_11b752ab;
  /* 11b7526c push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11b7526e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b75270 call 0x11b76362 */
  push32(0x11b75275u); f_11b76362();
  /* 11b75275 mov esi, eax */
  ESI = (EAX);
  /* 11b75277 pop ecx */
  ECX = (pop32());
  /* 11b75278 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b7527a pop ecx */
  ECX = (pop32());
  /* 11b7527b je 0x11b752a3 */
  if (C.zf) goto L_11b752a3;
  /* 11b7527d push esi */
  push32((uint32_t)(ESI));
  /* 11b7527e push dword ptr [0x11b7de38] */
  push32((uint32_t)(r32((uint32_t)(0x11b7de38))));
  /* 11b75284 call dword ptr [0x11b7b0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ac))), 0x11b7528au);
  /* 11b7528a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7528c je 0x11b752a3 */
  if (C.zf) goto L_11b752a3;
  /* 11b7528e push esi */
  push32((uint32_t)(ESI));
  /* 11b7528f call 0x11b7523d */
  push32(0x11b75294u); f_11b7523d();
  /* 11b75294 pop ecx */
  ECX = (pop32());
  /* 11b75295 call dword ptr [0x11b7b0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0a8))), 0x11b7529bu);
  /* 11b7529b or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b7529f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b752a1 jmp 0x11b752ab */
  goto L_11b752ab;
L_11b752a3:;
  /* 11b752a3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b752a5 call 0x11b75198 */
  push32(0x11b752aau); f_11b75198();
  /* 11b752aa pop ecx */
  ECX = (pop32());
L_11b752ab:;
  /* 11b752ab push edi */
  push32((uint32_t)(EDI));
  /* 11b752ac call dword ptr [0x11b7b004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b004))), 0x11b752b2u);
  /* 11b752b2 mov eax, esi */
  EAX = (ESI);
  /* 11b752b4 pop edi */
  EDI = (pop32());
  /* 11b752b5 pop esi */
  ESI = (pop32());
  /* 11b752b6 ret  */
  ESPCHK(0x11b75250u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b7 @ 0x11b752b7 (160 bytes, 62 insns) */
void f_11b752b7(void) {
  FTRACE(0x11b752b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b752b7 mov eax, dword ptr [0x11b7de38] */
  EAX = (r32((uint32_t)(0x11b7de38)));
  /* 11b752bc cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b752bf je 0x11b75356 */
  if (C.zf) goto L_11b75356;
  /* 11b752c5 push esi */
  push32((uint32_t)(ESI));
  /* 11b752c6 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b752ca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b752cc jne 0x11b752db */
  if (!C.zf) goto L_11b752db;
  /* 11b752ce push eax */
  push32((uint32_t)(EAX));
  /* 11b752cf call dword ptr [0x11b7b0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0b8))), 0x11b752d5u);
  /* 11b752d5 mov esi, eax */
  ESI = (EAX);
  /* 11b752d7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b752d9 je 0x11b75347 */
  if (C.zf) goto L_11b75347;
L_11b752db:;
  /* 11b752db mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11b752de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b752e0 je 0x11b752e9 */
  if (C.zf) goto L_11b752e9;
  /* 11b752e2 push eax */
  push32((uint32_t)(EAX));
  /* 11b752e3 call 0x11b765aa */
  push32(0x11b752e8u); f_11b765aa();
  /* 11b752e8 pop ecx */
  ECX = (pop32());
L_11b752e9:;
  /* 11b752e9 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11b752ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b752ee je 0x11b752f7 */
  if (C.zf) goto L_11b752f7;
  /* 11b752f0 push eax */
  push32((uint32_t)(EAX));
  /* 11b752f1 call 0x11b765aa */
  push32(0x11b752f6u); f_11b765aa();
  /* 11b752f6 pop ecx */
  ECX = (pop32());
L_11b752f7:;
  /* 11b752f7 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11b752fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b752fc je 0x11b75305 */
  if (C.zf) goto L_11b75305;
  /* 11b752fe push eax */
  push32((uint32_t)(EAX));
  /* 11b752ff call 0x11b765aa */
  push32(0x11b75304u); f_11b765aa();
  /* 11b75304 pop ecx */
  ECX = (pop32());
L_11b75305:;
  /* 11b75305 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11b75308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7530a je 0x11b75313 */
  if (C.zf) goto L_11b75313;
  /* 11b7530c push eax */
  push32((uint32_t)(EAX));
  /* 11b7530d call 0x11b765aa */
  push32(0x11b75312u); f_11b765aa();
  /* 11b75312 pop ecx */
  ECX = (pop32());
L_11b75313:;
  /* 11b75313 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11b75316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75318 je 0x11b75321 */
  if (C.zf) goto L_11b75321;
  /* 11b7531a push eax */
  push32((uint32_t)(EAX));
  /* 11b7531b call 0x11b765aa */
  push32(0x11b75320u); f_11b765aa();
  /* 11b75320 pop ecx */
  ECX = (pop32());
L_11b75321:;
  /* 11b75321 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11b75324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75326 je 0x11b7532f */
  if (C.zf) goto L_11b7532f;
  /* 11b75328 push eax */
  push32((uint32_t)(EAX));
  /* 11b75329 call 0x11b765aa */
  push32(0x11b7532eu); f_11b765aa();
  /* 11b7532e pop ecx */
  ECX = (pop32());
L_11b7532f:;
  /* 11b7532f mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11b75332 cmp eax, 0x11b7dfd0 */
  { uint32_t _a=(EAX),_b=(0x11b7dfd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75337 je 0x11b75340 */
  if (C.zf) goto L_11b75340;
  /* 11b75339 push eax */
  push32((uint32_t)(EAX));
  /* 11b7533a call 0x11b765aa */
  push32(0x11b7533fu); f_11b765aa();
  /* 11b7533f pop ecx */
  ECX = (pop32());
L_11b75340:;
  /* 11b75340 push esi */
  push32((uint32_t)(ESI));
  /* 11b75341 call 0x11b765aa */
  push32(0x11b75346u); f_11b765aa();
  /* 11b75346 pop ecx */
  ECX = (pop32());
L_11b75347:;
  /* 11b75347 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b75349 push dword ptr [0x11b7de38] */
  push32((uint32_t)(r32((uint32_t)(0x11b7de38))));
  /* 11b7534f call dword ptr [0x11b7b0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0ac))), 0x11b75355u);
  /* 11b75355 pop esi */
  ESI = (pop32());
L_11b75356:;
  /* 11b75356 ret  */
  ESPCHK(0x11b752b7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005357 @ 0x11b75357 (18 bytes, 6 insns) */
void f_11b75357(void) {
  FTRACE(0x11b75357u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75357 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11b7535c push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11b75361 call 0x11b766c8 */
  push32(0x11b75366u); f_11b766c8();
  /* 11b75366 pop ecx */
  ECX = (pop32());
  /* 11b75367 pop ecx */
  ECX = (pop32());
  /* 11b75368 ret  */
  ESPCHK(0x11b75357u, _esp0);
  ESP += 4; return;
}

/* FUN_10005369 @ 0x11b75369 (62 bytes, 24 insns) */
void f_11b75369(void) {
  FTRACE(0x11b75369u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75369 push ebp */
  push32((uint32_t)(EBP));
  /* 11b7536a mov ebp, esp */
  EBP = (ESP);
  /* 11b7536c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7536f fld qword ptr [0x11b7b1d8] */
  fpu_push(rf64((uint32_t)(0x11b7b1d8)));
  /* 11b75375 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11b75378 fld qword ptr [0x11b7b1d0] */
  fpu_push(rf64((uint32_t)(0x11b7b1d0)));
  /* 11b7537e fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11b75381 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11b75384 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 11b75387 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 11b7538a fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 11b7538d fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 11b75390 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 11b75393 fcomp qword ptr [0x11b7b1c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11b7b1c8)));
  (void)fpu_pop();
  /* 11b75399 fnstsw ax */
  AX = fpu_status();
  /* 11b7539b sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11b7539c jbe 0x11b753a3 */
  if ((C.cf||C.zf)) goto L_11b753a3;
  /* 11b7539e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b753a0 pop eax */
  EAX = (pop32());
  /* 11b753a1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b753a2 ret  */
  ESPCHK(0x11b75369u, _esp0);
  ESP += 4; return;
L_11b753a3:;
  /* 11b753a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b753a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b753a6 ret  */
  ESPCHK(0x11b75369u, _esp0);
  ESP += 4; return;
}

/* FUN_100053a7 @ 0x11b753a7 (41 bytes, 13 insns) */
void f_11b753a7(void) {
  FTRACE(0x11b753a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b753a7 push 0x11b7b1fc */
  push32((uint32_t)(0x11b7b1fcu));
  /* 11b753ac call dword ptr [0x11b7b0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0b4))), 0x11b753b2u);
  /* 11b753b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b753b4 je 0x11b753cb */
  if (C.zf) goto L_11b753cb;
  /* 11b753b6 push 0x11b7b1e0 */
  push32((uint32_t)(0x11b7b1e0u));
  /* 11b753bb push eax */
  push32((uint32_t)(EAX));
  /* 11b753bc call dword ptr [0x11b7b0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0c0))), 0x11b753c2u);
  /* 11b753c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b753c4 je 0x11b753cb */
  if (C.zf) goto L_11b753cb;
  /* 11b753c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b753c8 call eax */
  call_ind((uint32_t)(EAX), 0x11b753cau);
  /* 11b753ca ret  */
  ESPCHK(0x11b753a7u, _esp0);
  ESP += 4; return;
L_11b753cb:;
  /* 11b753cb jmp 0x11b75369 */
  f_11b75369(); return;
}

/* FUN_100053d0 @ 0x11b753d0 (90 bytes, 37 insns) */
void f_11b753d0(void) {
  FTRACE(0x11b753d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b753d0 push esi */
  push32((uint32_t)(ESI));
  /* 11b753d1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b753d5 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11b753d8 push eax */
  push32((uint32_t)(EAX));
  /* 11b753d9 call 0x11b7686e */
  push32(0x11b753deu); f_11b7686e();
  /* 11b753de cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b753e1 pop ecx */
  ECX = (pop32());
  /* 11b753e2 je 0x11b75410 */
  if (C.zf) goto L_11b75410;
L_11b753e4:;
  /* 11b753e4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b753e5 cmp dword ptr [0x11b7e058], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b753ec jle 0x11b753fd */
  if ((C.zf||C.sf!=C.of)) goto L_11b753fd;
  /* 11b753ee movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11b753f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b753f3 push eax */
  push32((uint32_t)(EAX));
  /* 11b753f4 call 0x11b767f9 */
  push32(0x11b753f9u); f_11b767f9();
  /* 11b753f9 pop ecx */
  ECX = (pop32());
  /* 11b753fa pop ecx */
  ECX = (pop32());
  /* 11b753fb jmp 0x11b7540c */
  goto L_11b7540c;
L_11b753fd:;
  /* 11b753fd movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11b75400 mov ecx, dword ptr [0x11b7e064] */
  ECX = (r32((uint32_t)(0x11b7e064)));
  /* 11b75406 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11b75409 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11b7540c:;
  /* 11b7540c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7540e jne 0x11b753e4 */
  if (!C.zf) goto L_11b753e4;
L_11b75410:;
  /* 11b75410 mov cl, byte ptr [0x11b7e05c] */
  CL = (r8((uint32_t)(0x11b7e05c)));
  /* 11b75416 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b75418 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11b7541a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b7541b:;
  /* 11b7541b mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11b7541d mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 11b7541f mov al, cl */
  AL = (CL);
  /* 11b75421 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11b75423 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b75424 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11b75426 jne 0x11b7541b */
  if (!C.zf) goto L_11b7541b;
  /* 11b75428 pop esi */
  ESI = (pop32());
  /* 11b75429 ret  */
  ESPCHK(0x11b753d0u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11b75490 (62 bytes, 29 insns) */
void f_11b75490(void) {
  FTRACE(0x11b75490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75490 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75491 mov ebp, esp */
  EBP = (ESP);
  /* 11b75493 push ecx */
  push32((uint32_t)(ECX));
  /* 11b75494 push ecx */
  push32((uint32_t)(ECX));
  /* 11b75495 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75499 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b7549c je 0x11b754b9 */
  if (C.zf) goto L_11b754b9;
  /* 11b7549e lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b754a1 push eax */
  push32((uint32_t)(EAX));
  /* 11b754a2 call 0x11b76d3a */
  push32(0x11b754a7u); f_11b76d3a();
  /* 11b754a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b754aa pop ecx */
  ECX = (pop32());
  /* 11b754ab pop ecx */
  ECX = (pop32());
  /* 11b754ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b754af mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b754b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b754b4 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b754b7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b754b8 ret  */
  ESPCHK(0x11b75490u, _esp0);
  ESP += 4; return;
L_11b754b9:;
  /* 11b754b9 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b754bc push eax */
  push32((uint32_t)(EAX));
  /* 11b754bd call 0x11b76d67 */
  push32(0x11b754c2u); f_11b76d67();
  /* 11b754c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b754c5 pop ecx */
  ECX = (pop32());
  /* 11b754c6 pop ecx */
  ECX = (pop32());
  /* 11b754c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b754ca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b754cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b754cd ret  */
  ESPCHK(0x11b75490u, _esp0);
  ESP += 4; return;
}

/* FUN_100054ce @ 0x11b754ce (97 bytes, 42 insns) */
void f_11b754ce(void) {
  FTRACE(0x11b754ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b754ce push ebp */
  push32((uint32_t)(EBP));
  /* 11b754cf mov ebp, esp */
  EBP = (ESP);
  /* 11b754d1 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b754d4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11b754d7 push esi */
  push32((uint32_t)(ESI));
  /* 11b754d8 push eax */
  push32((uint32_t)(EAX));
  /* 11b754d9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b754dc push eax */
  push32((uint32_t)(EAX));
  /* 11b754dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b754e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b754e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b754e2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11b754e4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11b754e7 call 0x11b76e0b */
  push32(0x11b754ecu); f_11b76e0b();
  /* 11b754ec mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b754ef lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b754f2 push eax */
  push32((uint32_t)(EAX));
  /* 11b754f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b754f6 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11b754f9 push eax */
  push32((uint32_t)(EAX));
  /* 11b754fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b754fc cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75500 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b75503 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b75505 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75507 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11b7550a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7550c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7550e push ecx */
  push32((uint32_t)(ECX));
  /* 11b7550f call 0x11b76d94 */
  push32(0x11b75514u); f_11b76d94();
  /* 11b75514 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b75517 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b75519 push eax */
  push32((uint32_t)(EAX));
  /* 11b7551a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b7551d push esi */
  push32((uint32_t)(ESI));
  /* 11b7551e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b75521 call 0x11b7552f */
  push32(0x11b75526u); f_11b7552f();
  /* 11b75526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b75529 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7552c pop esi */
  ESI = (pop32());
  /* 11b7552d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7552e ret  */
  ESPCHK(0x11b754ceu, _esp0);
  ESP += 4; return;
}

/* FUN_1000552f @ 0x11b7552f (194 bytes, 91 insns) */
void f_11b7552f(void) {
  FTRACE(0x11b7552fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7552f push ebp */
  push32((uint32_t)(EBP));
  /* 11b75530 mov ebp, esp */
  EBP = (ESP);
  /* 11b75532 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75533 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b75535 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75538 push esi */
  push32((uint32_t)(ESI));
  /* 11b75539 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11b7553c push edi */
  push32((uint32_t)(EDI));
  /* 11b7553d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b75540 je 0x11b7555d */
  if (C.zf) goto L_11b7555d;
  /* 11b75542 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b75544 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75547 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11b7554a push eax */
  push32((uint32_t)(EAX));
  /* 11b7554b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7554d cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75550 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b75553 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75555 push eax */
  push32((uint32_t)(EAX));
  /* 11b75556 call 0x11b757d1 */
  push32(0x11b7555bu); f_11b757d1();
  /* 11b7555b pop ecx */
  ECX = (pop32());
  /* 11b7555c pop ecx */
  ECX = (pop32());
L_11b7555d:;
  /* 11b7555d cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75560 mov eax, edi */
  EAX = (EDI);
  /* 11b75562 jne 0x11b7556a */
  if (!C.zf) goto L_11b7556a;
  /* 11b75564 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 11b75567 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_11b7556a:;
  /* 11b7556a cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7556d jle 0x11b75581 */
  if ((C.zf||C.sf!=C.of)) goto L_11b75581;
  /* 11b7556f mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b75572 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11b75575 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b75577 mov eax, ecx */
  EAX = (ECX);
  /* 11b75579 mov cl, byte ptr [0x11b7e05c] */
  CL = (r8((uint32_t)(0x11b7e05c)));
  /* 11b7557f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_11b75581:;
  /* 11b75581 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b75583 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75586 push 0x11b7b210 */
  push32((uint32_t)(0x11b7b210u));
  /* 11b7558b sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b7558e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75590 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75593 push ecx */
  push32((uint32_t)(ECX));
  /* 11b75594 call 0x11b76f20 */
  push32(0x11b75599u); f_11b76f20();
  /* 11b75599 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7559c pop ecx */
  ECX = (pop32());
  /* 11b7559d pop ecx */
  ECX = (pop32());
  /* 11b7559e mov ecx, eax */
  ECX = (EAX);
  /* 11b755a0 je 0x11b755a5 */
  if (C.zf) goto L_11b755a5;
  /* 11b755a2 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_11b755a5:;
  /* 11b755a5 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11b755a8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b755a9 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b755ac je 0x11b755ea */
  if (C.zf) goto L_11b755ea;
  /* 11b755ae mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b755b1 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b755b2 jns 0x11b755b9 */
  if (!C.sf) goto L_11b755b9;
  /* 11b755b4 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b755b6 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_11b755b9:;
  /* 11b755b9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b755ba cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b755bd jl 0x11b755d0 */
  if ((C.sf!=C.of)) goto L_11b755d0;
  /* 11b755bf mov eax, ebx */
  EAX = (EBX);
  /* 11b755c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b755c3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b755c4 pop esi */
  ESI = (pop32());
  /* 11b755c5 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b755c7 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11b755c9 mov eax, ebx */
  EAX = (EBX);
  /* 11b755cb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b755cc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b755ce mov ebx, edx */
  EBX = (EDX);
L_11b755d0:;
  /* 11b755d0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b755d1 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b755d4 jl 0x11b755e7 */
  if ((C.sf!=C.of)) goto L_11b755e7;
  /* 11b755d6 mov eax, ebx */
  EAX = (EBX);
  /* 11b755d8 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b755da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b755db pop esi */
  ESI = (pop32());
  /* 11b755dc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b755de add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11b755e0 mov eax, ebx */
  EAX = (EBX);
  /* 11b755e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b755e3 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b755e5 mov ebx, edx */
  EBX = (EDX);
L_11b755e7:;
  /* 11b755e7 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_11b755ea:;
  /* 11b755ea mov eax, edi */
  EAX = (EDI);
  /* 11b755ec pop edi */
  EDI = (pop32());
  /* 11b755ed pop esi */
  ESI = (pop32());
  /* 11b755ee pop ebx */
  EBX = (pop32());
  /* 11b755ef pop ebp */
  EBP = (pop32());
  /* 11b755f0 ret  */
  ESPCHK(0x11b7552fu, _esp0);
  ESP += 4; return;
}

/* FUN_100055f1 @ 0x11b755f1 (85 bytes, 37 insns) */
void f_11b755f1(void) {
  FTRACE(0x11b755f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b755f1 push ebp */
  push32((uint32_t)(EBP));
  /* 11b755f2 mov ebp, esp */
  EBP = (ESP);
  /* 11b755f4 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b755f7 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11b755fa push esi */
  push32((uint32_t)(ESI));
  /* 11b755fb push eax */
  push32((uint32_t)(EAX));
  /* 11b755fc lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b755ff push eax */
  push32((uint32_t)(EAX));
  /* 11b75600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b75603 push ecx */
  push32((uint32_t)(ECX));
  /* 11b75604 push ecx */
  push32((uint32_t)(ECX));
  /* 11b75605 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11b75607 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11b7560a call 0x11b76e0b */
  push32(0x11b7560fu); f_11b76e0b();
  /* 11b7560f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b75612 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b75615 push eax */
  push32((uint32_t)(EAX));
  /* 11b75616 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b75619 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7561b push eax */
  push32((uint32_t)(EAX));
  /* 11b7561c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7561e cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75622 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b75625 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75628 push eax */
  push32((uint32_t)(EAX));
  /* 11b75629 call 0x11b76d94 */
  push32(0x11b7562eu); f_11b76d94();
  /* 11b7562e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b75631 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b75633 push eax */
  push32((uint32_t)(EAX));
  /* 11b75634 push esi */
  push32((uint32_t)(ESI));
  /* 11b75635 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b75638 call 0x11b75646 */
  push32(0x11b7563du); f_11b75646();
  /* 11b7563d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b75640 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75643 pop esi */
  ESI = (pop32());
  /* 11b75644 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b75645 ret  */
  ESPCHK(0x11b755f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10005646 @ 0x11b75646 (167 bytes, 73 insns) */
void f_11b75646(void) {
  FTRACE(0x11b75646u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75646 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75647 mov ebp, esp */
  EBP = (ESP);
  /* 11b75649 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7564a push esi */
  push32((uint32_t)(ESI));
  /* 11b7564b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b7564e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b75651 push edi */
  push32((uint32_t)(EDI));
  /* 11b75652 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b75655 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b75656 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7565a je 0x11b75676 */
  if (C.zf) goto L_11b75676;
  /* 11b7565c cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7565f jne 0x11b75676 */
  if (!C.zf) goto L_11b75676;
  /* 11b75661 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b75663 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75666 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b75669 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7566b add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7566d mov eax, ecx */
  EAX = (ECX);
  /* 11b7566f mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11b75672 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_11b75676:;
  /* 11b75676 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75679 mov edi, ebx */
  EDI = (EBX);
  /* 11b7567b jne 0x11b75683 */
  if (!C.zf) goto L_11b75683;
  /* 11b7567d mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 11b75680 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_11b75683:;
  /* 11b75683 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b75686 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75688 jg 0x11b7569a */
  if ((!C.zf&&C.sf==C.of)) goto L_11b7569a;
  /* 11b7568a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7568c push edi */
  push32((uint32_t)(EDI));
  /* 11b7568d call 0x11b757d1 */
  push32(0x11b75692u); f_11b757d1();
  /* 11b75692 pop ecx */
  ECX = (pop32());
  /* 11b75693 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 11b75696 pop ecx */
  ECX = (pop32());
  /* 11b75697 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b75698 jmp 0x11b7569c */
  goto L_11b7569c;
L_11b7569a:;
  /* 11b7569a add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b7569c:;
  /* 11b7569c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b756a0 jle 0x11b756e6 */
  if ((C.zf||C.sf!=C.of)) goto L_11b756e6;
  /* 11b756a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b756a4 push edi */
  push32((uint32_t)(EDI));
  /* 11b756a5 call 0x11b757d1 */
  push32(0x11b756aau); f_11b757d1();
  /* 11b756aa mov al, byte ptr [0x11b7e05c] */
  AL = (r8((uint32_t)(0x11b7e05c)));
  /* 11b756af pop ecx */
  ECX = (pop32());
  /* 11b756b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b756b2 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11b756b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b756b6 pop ecx */
  ECX = (pop32());
  /* 11b756b7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b756b9 jge 0x11b756e6 */
  if ((C.sf==C.of)) goto L_11b756e6;
  /* 11b756bb cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b756bf je 0x11b756c5 */
  if (C.zf) goto L_11b756c5;
  /* 11b756c1 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11b756c3 jmp 0x11b756cc */
  goto L_11b756cc;
L_11b756c5:;
  /* 11b756c5 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11b756c7 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b756ca jl 0x11b756cf */
  if ((C.sf!=C.of)) goto L_11b756cf;
L_11b756cc:;
  /* 11b756cc mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11b756cf:;
  /* 11b756cf push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b756d2 push edi */
  push32((uint32_t)(EDI));
  /* 11b756d3 call 0x11b757d1 */
  push32(0x11b756d8u); f_11b757d1();
  /* 11b756d8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b756db push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b756dd push edi */
  push32((uint32_t)(EDI));
  /* 11b756de call 0x11b77010 */
  push32(0x11b756e3u); f_11b77010();
  /* 11b756e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b756e6:;
  /* 11b756e6 pop edi */
  EDI = (pop32());
  /* 11b756e7 mov eax, ebx */
  EAX = (EBX);
  /* 11b756e9 pop esi */
  ESI = (pop32());
  /* 11b756ea pop ebx */
  EBX = (pop32());
  /* 11b756eb pop ebp */
  EBP = (pop32());
  /* 11b756ec ret  */
  ESPCHK(0x11b75646u, _esp0);
  ESP += 4; return;
}

/* FUN_100056ed @ 0x11b756ed (147 bytes, 66 insns) */
void f_11b756ed(void) {
  FTRACE(0x11b756edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b756ed push ebp */
  push32((uint32_t)(EBP));
  /* 11b756ee mov ebp, esp */
  EBP = (ESP);
  /* 11b756f0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b756f3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b756f4 push esi */
  push32((uint32_t)(ESI));
  /* 11b756f5 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11b756f8 push edi */
  push32((uint32_t)(EDI));
  /* 11b756f9 push eax */
  push32((uint32_t)(EAX));
  /* 11b756fa lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b756fd push eax */
  push32((uint32_t)(EAX));
  /* 11b756fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b75701 push ecx */
  push32((uint32_t)(ECX));
  /* 11b75702 push ecx */
  push32((uint32_t)(ECX));
  /* 11b75703 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11b75705 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11b75708 call 0x11b76e0b */
  push32(0x11b7570du); f_11b76e0b();
  /* 11b7570d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b75710 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b75713 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 11b75716 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b75718 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7571c sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b7571f add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75722 mov edi, eax */
  EDI = (EAX);
  /* 11b75724 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b75727 push eax */
  push32((uint32_t)(EAX));
  /* 11b75728 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75729 push edi */
  push32((uint32_t)(EDI));
  /* 11b7572a call 0x11b76d94 */
  push32(0x11b7572fu); f_11b76d94();
  /* 11b7572f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b75732 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75735 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b75736 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75738 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11b7573b cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7573e jl 0x11b75766 */
  if ((C.sf!=C.of)) goto L_11b75766;
  /* 11b75740 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75742 jge 0x11b75766 */
  if ((C.sf==C.of)) goto L_11b75766;
  /* 11b75744 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11b75746 je 0x11b75752 */
  if (C.zf) goto L_11b75752;
L_11b75748:;
  /* 11b75748 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11b7574a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b7574b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b7574d jne 0x11b75748 */
  if (!C.zf) goto L_11b75748;
  /* 11b7574f and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_11b75752:;
  /* 11b75752 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b75755 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b75757 push eax */
  push32((uint32_t)(EAX));
  /* 11b75758 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75759 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b7575c call 0x11b75646 */
  push32(0x11b75761u); f_11b75646();
  /* 11b75761 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75764 jmp 0x11b7577b */
  goto L_11b7577b;
L_11b75766:;
  /* 11b75766 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b75769 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7576b push eax */
  push32((uint32_t)(EAX));
  /* 11b7576c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b7576f push ebx */
  push32((uint32_t)(EBX));
  /* 11b75770 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b75773 call 0x11b7552f */
  push32(0x11b75778u); f_11b7552f();
  /* 11b75778 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7577b:;
  /* 11b7577b pop edi */
  EDI = (pop32());
  /* 11b7577c pop esi */
  ESI = (pop32());
  /* 11b7577d pop ebx */
  EBX = (pop32());
  /* 11b7577e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7577f ret  */
  ESPCHK(0x11b756edu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11b75780 (81 bytes, 29 insns) */
void f_11b75780(void) {
  FTRACE(0x11b75780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75780 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75781 mov ebp, esp */
  EBP = (ESP);
  /* 11b75783 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75787 je 0x11b757bb */
  if (C.zf) goto L_11b757bb;
  /* 11b75789 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7578d je 0x11b757bb */
  if (C.zf) goto L_11b757bb;
  /* 11b7578f cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75793 jne 0x11b757a8 */
  if (!C.zf) goto L_11b757a8;
  /* 11b75795 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b75798 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b7579b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b7579e call 0x11b755f1 */
  push32(0x11b757a3u); f_11b755f1();
  /* 11b757a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b757a6 pop ebp */
  EBP = (pop32());
  /* 11b757a7 ret  */
  ESPCHK(0x11b75780u, _esp0);
  ESP += 4; return;
L_11b757a8:;
  /* 11b757a8 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b757ab push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b757ae push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b757b1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b757b4 call 0x11b756ed */
  push32(0x11b757b9u); f_11b756ed();
  /* 11b757b9 jmp 0x11b757cc */
  goto L_11b757cc;
L_11b757bb:;
  /* 11b757bb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b757be push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b757c1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b757c4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b757c7 call 0x11b754ce */
  push32(0x11b757ccu); f_11b754ce();
L_11b757cc:;
  /* 11b757cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b757cf pop ebp */
  EBP = (pop32());
  /* 11b757d0 ret  */
  ESPCHK(0x11b75780u, _esp0);
  ESP += 4; return;
}

/* FUN_100057d1 @ 0x11b757d1 (37 bytes, 18 insns) */
void f_11b757d1(void) {
  FTRACE(0x11b757d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b757d1 push edi */
  push32((uint32_t)(EDI));
  /* 11b757d2 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11b757d6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b757d8 je 0x11b757f4 */
  if (C.zf) goto L_11b757f4;
  /* 11b757da push esi */
  push32((uint32_t)(ESI));
  /* 11b757db mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11b757df push esi */
  push32((uint32_t)(ESI));
  /* 11b757e0 call 0x11b773b0 */
  push32(0x11b757e5u); f_11b773b0();
  /* 11b757e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b757e6 push eax */
  push32((uint32_t)(EAX));
  /* 11b757e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b757e8 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b757ea push esi */
  push32((uint32_t)(ESI));
  /* 11b757eb call 0x11b77070 */
  push32(0x11b757f0u); f_11b77070();
  /* 11b757f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b757f3 pop esi */
  ESI = (pop32());
L_11b757f4:;
  /* 11b757f4 pop edi */
  EDI = (pop32());
  /* 11b757f5 ret  */
  ESPCHK(0x11b757d1u, _esp0);
  ESP += 4; return;
}

/* FUN_100057f6 @ 0x11b757f6 (45 bytes, 12 insns) */
void f_11b757f6(void) {
  FTRACE(0x11b757f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b757f6 mov eax, dword ptr [0x11b7de28] */
  EAX = (r32((uint32_t)(0x11b7de28)));
  /* 11b757fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b757fd je 0x11b75801 */
  if (C.zf) goto L_11b75801;
  /* 11b757ff call eax */
  call_ind((uint32_t)(EAX), 0x11b75801u);
L_11b75801:;
  /* 11b75801 push 0x11b7d010 */
  push32((uint32_t)(0x11b7d010u));
  /* 11b75806 push 0x11b7d008 */
  push32((uint32_t)(0x11b7d008u));
  /* 11b7580b call 0x11b758fa */
  push32(0x11b75810u); f_11b758fa();
  /* 11b75810 push 0x11b7d004 */
  push32((uint32_t)(0x11b7d004u));
  /* 11b75815 push 0x11b7d000 */
  push32((uint32_t)(0x11b7d000u));
  /* 11b7581a call 0x11b758fa */
  push32(0x11b7581fu); f_11b758fa();
  /* 11b7581f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75822 ret  */
  ESPCHK(0x11b757f6u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11b75823 (17 bytes, 6 insns) */
void f_11b75823(void) {
  FTRACE(0x11b75823u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75823 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b75825 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b75827 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11b7582b call 0x11b75843 */
  push32(0x11b75830u); f_11b75843();
  /* 11b75830 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75833 ret  */
  ESPCHK(0x11b75823u, _esp0);
  ESP += 4; return;
}

/* FUN_10005834 @ 0x11b75834 (15 bytes, 6 insns) */
void f_11b75834(void) {
  FTRACE(0x11b75834u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75834 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b75836 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b75838 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7583a call 0x11b75843 */
  push32(0x11b7583fu); f_11b75843();
  /* 11b7583f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75842 ret  */
  ESPCHK(0x11b75834u, _esp0);
  ESP += 4; return;
}

/* FUN_10005843 @ 0x11b75843 (163 bytes, 53 insns) */
void f_11b75843(void) {
  FTRACE(0x11b75843u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75843 push edi */
  push32((uint32_t)(EDI));
  /* 11b75844 call 0x11b758e8 */
  push32(0x11b75849u); f_11b758e8();
  /* 11b75849 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7584b pop edi */
  EDI = (pop32());
  /* 11b7584c cmp dword ptr [0x11b81328], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b81328))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75852 jne 0x11b75865 */
  if (!C.zf) goto L_11b75865;
  /* 11b75854 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b75858 call dword ptr [0x11b7b094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b094))), 0x11b7585eu);
  /* 11b7585e push eax */
  push32((uint32_t)(EAX));
  /* 11b7585f call dword ptr [0x11b7b098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b098))), 0x11b75865u);
L_11b75865:;
  /* 11b75865 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7586a push ebx */
  push32((uint32_t)(EBX));
  /* 11b7586b mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b7586f mov dword ptr [0x11b81324], edi */
  w32((uint32_t)(0x11b81324), (EDI));
  /* 11b75875 mov byte ptr [0x11b81320], bl */
  w8((uint32_t)(0x11b81320), (BL));
  /* 11b7587b jne 0x11b758b9 */
  if (!C.zf) goto L_11b758b9;
  /* 11b7587d mov eax, dword ptr [0x11b819b0] */
  EAX = (r32((uint32_t)(0x11b819b0)));
  /* 11b75882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75884 je 0x11b758a8 */
  if (C.zf) goto L_11b758a8;
  /* 11b75886 mov ecx, dword ptr [0x11b819ac] */
  ECX = (r32((uint32_t)(0x11b819ac)));
  /* 11b7588c push esi */
  push32((uint32_t)(ESI));
  /* 11b7588d lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11b75890 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75892 jb 0x11b758a7 */
  if (C.cf) goto L_11b758a7;
L_11b75894:;
  /* 11b75894 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b75896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75898 je 0x11b7589c */
  if (C.zf) goto L_11b7589c;
  /* 11b7589a call eax */
  call_ind((uint32_t)(EAX), 0x11b7589cu);
L_11b7589c:;
  /* 11b7589c sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7589f cmp esi, dword ptr [0x11b819b0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b819b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b758a5 jae 0x11b75894 */
  if (!C.cf) goto L_11b75894;
L_11b758a7:;
  /* 11b758a7 pop esi */
  ESI = (pop32());
L_11b758a8:;
  /* 11b758a8 push 0x11b7d018 */
  push32((uint32_t)(0x11b7d018u));
  /* 11b758ad push 0x11b7d014 */
  push32((uint32_t)(0x11b7d014u));
  /* 11b758b2 call 0x11b758fa */
  push32(0x11b758b7u); f_11b758fa();
  /* 11b758b7 pop ecx */
  ECX = (pop32());
  /* 11b758b8 pop ecx */
  ECX = (pop32());
L_11b758b9:;
  /* 11b758b9 push 0x11b7d020 */
  push32((uint32_t)(0x11b7d020u));
  /* 11b758be push 0x11b7d01c */
  push32((uint32_t)(0x11b7d01cu));
  /* 11b758c3 call 0x11b758fa */
  push32(0x11b758c8u); f_11b758fa();
  /* 11b758c8 pop ecx */
  ECX = (pop32());
  /* 11b758c9 pop ecx */
  ECX = (pop32());
  /* 11b758ca test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b758cc pop ebx */
  EBX = (pop32());
  /* 11b758cd je 0x11b758d6 */
  if (C.zf) goto L_11b758d6;
  /* 11b758cf call 0x11b758f1 */
  push32(0x11b758d4u); f_11b758f1();
  /* 11b758d4 pop edi */
  EDI = (pop32());
  /* 11b758d5 ret  */
  ESPCHK(0x11b75843u, _esp0);
  ESP += 4; return;
L_11b758d6:;
  /* 11b758d6 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b758da mov dword ptr [0x11b81328], edi */
  w32((uint32_t)(0x11b81328), (EDI));
  /* 11b758e0 call dword ptr [0x11b7b0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0c4))), 0x11b758e6u);
  /* 11b758e6 pop edi */
  EDI = (pop32());
  /* 11b758e7 ret  */
  ESPCHK(0x11b75843u, _esp0);
  ESP += 4; return;
}

/* FUN_100058e8 @ 0x11b758e8 (9 bytes, 4 insns) */
void f_11b758e8(void) {
  FTRACE(0x11b758e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b758e8 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b758ea call 0x11b76534 */
  push32(0x11b758efu); f_11b76534();
  /* 11b758ef pop ecx */
  ECX = (pop32());
  /* 11b758f0 ret  */
  ESPCHK(0x11b758e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100058f1 @ 0x11b758f1 (9 bytes, 4 insns) */
void f_11b758f1(void) {
  FTRACE(0x11b758f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b758f1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b758f3 call 0x11b76595 */
  push32(0x11b758f8u); f_11b76595();
  /* 11b758f8 pop ecx */
  ECX = (pop32());
  /* 11b758f9 ret  */
  ESPCHK(0x11b758f1u, _esp0);
  ESP += 4; return;
}

/* FUN_100058fa @ 0x11b758fa (26 bytes, 12 insns) */
void f_11b758fa(void) {
  FTRACE(0x11b758fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b758fa push esi */
  push32((uint32_t)(ESI));
  /* 11b758fb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11b758ff:;
  /* 11b758ff cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75903 jae 0x11b75912 */
  if (!C.cf) goto L_11b75912;
  /* 11b75905 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b75907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75909 je 0x11b7590d */
  if (C.zf) goto L_11b7590d;
  /* 11b7590b call eax */
  call_ind((uint32_t)(EAX), 0x11b7590du);
L_11b7590d:;
  /* 11b7590d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75910 jmp 0x11b758ff */
  goto L_11b758ff;
L_11b75912:;
  /* 11b75912 pop esi */
  ESI = (pop32());
  /* 11b75913 ret  */
  ESPCHK(0x11b758fau, _esp0);
  ESP += 4; return;
}

/* FUN_10005914 @ 0x11b75914 (444 bytes, 150 insns) */
void f_11b75914(void) {
  FTRACE(0x11b75914u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75914 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75915 mov ebp, esp */
  EBP = (ESP);
  /* 11b75917 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7591a push ebx */
  push32((uint32_t)(EBX));
  /* 11b7591b push esi */
  push32((uint32_t)(ESI));
  /* 11b7591c push edi */
  push32((uint32_t)(EDI));
  /* 11b7591d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b75922 call 0x11b77434 */
  push32(0x11b75927u); f_11b77434();
  /* 11b75927 mov esi, eax */
  ESI = (EAX);
  /* 11b75929 pop ecx */
  ECX = (pop32());
  /* 11b7592a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b7592c jne 0x11b75936 */
  if (!C.zf) goto L_11b75936;
  /* 11b7592e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11b75930 call 0x11b75198 */
  push32(0x11b75935u); f_11b75198();
  /* 11b75935 pop ecx */
  ECX = (pop32());
L_11b75936:;
  /* 11b75936 mov dword ptr [0x11b818a0], esi */
  w32((uint32_t)(0x11b818a0), (ESI));
  /* 11b7593c mov dword ptr [0x11b819a0], 0x20 */
  w32((uint32_t)(0x11b819a0), (0x20u));
  /* 11b75946 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11b7594c:;
  /* 11b7594c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7594e jae 0x11b7596e */
  if (!C.cf) goto L_11b7596e;
  /* 11b75950 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b75954 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b75957 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b7595b mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11b7595f mov eax, dword ptr [0x11b818a0] */
  EAX = (r32((uint32_t)(0x11b818a0)));
  /* 11b75964 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75967 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7596c jmp 0x11b7594c */
  goto L_11b7594c;
L_11b7596e:;
  /* 11b7596e lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11b75971 push eax */
  push32((uint32_t)(EAX));
  /* 11b75972 call dword ptr [0x11b7b090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b090))), 0x11b75978u);
  /* 11b75978 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7597d je 0x11b75a54 */
  if (C.zf) goto L_11b75a54;
  /* 11b75983 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b75986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75988 je 0x11b75a54 */
  if (C.zf) goto L_11b75a54;
  /* 11b7598e mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11b75990 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11b75993 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11b75996 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b75999 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11b7599e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b759a0 jl 0x11b759a4 */
  if ((C.sf!=C.of)) goto L_11b759a4;
  /* 11b759a2 mov edi, eax */
  EDI = (EAX);
L_11b759a4:;
  /* 11b759a4 cmp dword ptr [0x11b819a0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b819a0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b759aa jge 0x11b75a02 */
  if ((C.sf==C.of)) goto L_11b75a02;
  /* 11b759ac mov esi, 0x11b818a4 */
  ESI = (0x11b818a4u);
L_11b759b1:;
  /* 11b759b1 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b759b6 call 0x11b77434 */
  push32(0x11b759bbu); f_11b77434();
  /* 11b759bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b759bd pop ecx */
  ECX = (pop32());
  /* 11b759be je 0x11b759fc */
  if (C.zf) goto L_11b759fc;
  /* 11b759c0 add dword ptr [0x11b819a0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11b819a0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11b819a0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b759c7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b759c9 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11b759cf:;
  /* 11b759cf cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b759d1 jae 0x11b759ef */
  if (!C.cf) goto L_11b759ef;
  /* 11b759d3 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b759d7 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b759da and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b759de mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11b759e2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b759e4 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b759e7 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b759ed jmp 0x11b759cf */
  goto L_11b759cf;
L_11b759ef:;
  /* 11b759ef add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b759f2 cmp dword ptr [0x11b819a0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b819a0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b759f8 jl 0x11b759b1 */
  if ((C.sf!=C.of)) goto L_11b759b1;
  /* 11b759fa jmp 0x11b75a02 */
  goto L_11b75a02;
L_11b759fc:;
  /* 11b759fc mov edi, dword ptr [0x11b819a0] */
  EDI = (r32((uint32_t)(0x11b819a0)));
L_11b75a02:;
  /* 11b75a02 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b75a04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b75a06 jle 0x11b75a54 */
  if ((C.zf||C.sf!=C.of)) goto L_11b75a54;
L_11b75a08:;
  /* 11b75a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b75a0b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b75a0d cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75a10 je 0x11b75a4a */
  if (C.zf) goto L_11b75a4a;
  /* 11b75a12 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11b75a14 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11b75a16 je 0x11b75a4a */
  if (C.zf) goto L_11b75a4a;
  /* 11b75a18 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11b75a1a jne 0x11b75a27 */
  if (!C.zf) goto L_11b75a27;
  /* 11b75a1c push ecx */
  push32((uint32_t)(ECX));
  /* 11b75a1d call dword ptr [0x11b7b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b088))), 0x11b75a23u);
  /* 11b75a23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75a25 je 0x11b75a4a */
  if (C.zf) goto L_11b75a4a;
L_11b75a27:;
  /* 11b75a27 mov ecx, esi */
  ECX = (ESI);
  /* 11b75a29 mov eax, esi */
  EAX = (ESI);
  /* 11b75a2b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b75a2e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b75a31 mov ecx, dword ptr [ecx*4 + 0x11b818a0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11b818a0)));
  /* 11b75a38 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11b75a3b lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11b75a3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b75a41 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11b75a43 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b75a45 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11b75a47 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11b75a4a:;
  /* 11b75a4a add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b75a4e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b75a4f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b75a50 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75a52 jl 0x11b75a08 */
  if ((C.sf!=C.of)) goto L_11b75a08;
L_11b75a54:;
  /* 11b75a54 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b75a56:;
  /* 11b75a56 mov ecx, dword ptr [0x11b818a0] */
  ECX = (r32((uint32_t)(0x11b818a0)));
  /* 11b75a5c lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11b75a5f cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75a63 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11b75a66 jne 0x11b75ab5 */
  if (!C.zf) goto L_11b75ab5;
  /* 11b75a68 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b75a6a mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11b75a6e jne 0x11b75a75 */
  if (!C.zf) goto L_11b75a75;
  /* 11b75a70 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11b75a72 pop eax */
  EAX = (pop32());
  /* 11b75a73 jmp 0x11b75a7f */
  goto L_11b75a7f;
L_11b75a75:;
  /* 11b75a75 mov eax, ebx */
  EAX = (EBX);
  /* 11b75a77 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b75a78 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b75a7a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b75a7c add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b75a7f:;
  /* 11b75a7f push eax */
  push32((uint32_t)(EAX));
  /* 11b75a80 call dword ptr [0x11b7b08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b08c))), 0x11b75a86u);
  /* 11b75a86 mov edi, eax */
  EDI = (EAX);
  /* 11b75a88 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75a8b je 0x11b75aa4 */
  if (C.zf) goto L_11b75aa4;
  /* 11b75a8d push edi */
  push32((uint32_t)(EDI));
  /* 11b75a8e call dword ptr [0x11b7b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b088))), 0x11b75a94u);
  /* 11b75a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75a96 je 0x11b75aa4 */
  if (C.zf) goto L_11b75aa4;
  /* 11b75a98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b75a9d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b75a9f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75aa2 jne 0x11b75aaa */
  if (!C.zf) goto L_11b75aaa;
L_11b75aa4:;
  /* 11b75aa4 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b75aa8 jmp 0x11b75ab9 */
  goto L_11b75ab9;
L_11b75aaa:;
  /* 11b75aaa cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75aad jne 0x11b75ab9 */
  if (!C.zf) goto L_11b75ab9;
  /* 11b75aaf or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b75ab3 jmp 0x11b75ab9 */
  goto L_11b75ab9;
L_11b75ab5:;
  /* 11b75ab5 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11b75ab9:;
  /* 11b75ab9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b75aba cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75abd jl 0x11b75a56 */
  if ((C.sf!=C.of)) goto L_11b75a56;
  /* 11b75abf push dword ptr [0x11b819a0] */
  push32((uint32_t)(r32((uint32_t)(0x11b819a0))));
  /* 11b75ac5 call dword ptr [0x11b7b09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b09c))), 0x11b75acbu);
  /* 11b75acb pop edi */
  EDI = (pop32());
  /* 11b75acc pop esi */
  ESI = (pop32());
  /* 11b75acd pop ebx */
  EBX = (pop32());
  /* 11b75ace leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b75acf ret  */
  ESPCHK(0x11b75914u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ad0 @ 0x11b75ad0 (84 bytes, 33 insns) */
void f_11b75ad0(void) {
  FTRACE(0x11b75ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75ad0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75ad1 push esi */
  push32((uint32_t)(ESI));
  /* 11b75ad2 push edi */
  push32((uint32_t)(EDI));
  /* 11b75ad3 mov esi, 0x11b818a0 */
  ESI = (0x11b818a0u);
L_11b75ad8:;
  /* 11b75ad8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b75ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75adc je 0x11b75b15 */
  if (C.zf) goto L_11b75b15;
  /* 11b75ade mov edi, eax */
  EDI = (EAX);
  /* 11b75ae0 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75ae5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75ae7 jae 0x11b75b0a */
  if (!C.cf) goto L_11b75b0a;
  /* 11b75ae9 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11b75aec:;
  /* 11b75aec cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75af0 je 0x11b75af9 */
  if (C.zf) goto L_11b75af9;
  /* 11b75af2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75af3 call dword ptr [0x11b7b080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b080))), 0x11b75af9u);
L_11b75af9:;
  /* 11b75af9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b75afb add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75afe add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75b03 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75b06 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75b08 jb 0x11b75aec */
  if (C.cf) goto L_11b75aec;
L_11b75b0a:;
  /* 11b75b0a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b75b0c call 0x11b765aa */
  push32(0x11b75b11u); f_11b765aa();
  /* 11b75b11 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b75b14 pop ecx */
  ECX = (pop32());
L_11b75b15:;
  /* 11b75b15 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75b18 cmp esi, 0x11b819a0 */
  { uint32_t _a=(ESI),_b=(0x11b819a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75b1e jl 0x11b75ad8 */
  if ((C.sf!=C.of)) goto L_11b75ad8;
  /* 11b75b20 pop edi */
  EDI = (pop32());
  /* 11b75b21 pop esi */
  ESI = (pop32());
  /* 11b75b22 pop ebx */
  EBX = (pop32());
  /* 11b75b23 ret  */
  ESPCHK(0x11b75ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b24 @ 0x11b75b24 (185 bytes, 71 insns) */
void f_11b75b24(void) {
  FTRACE(0x11b75b24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75b24 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75b25 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b75b27 cmp dword ptr [0x11b819a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b819a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75b2d push esi */
  push32((uint32_t)(ESI));
  /* 11b75b2e push edi */
  push32((uint32_t)(EDI));
  /* 11b75b2f jne 0x11b75b36 */
  if (!C.zf) goto L_11b75b36;
  /* 11b75b31 call 0x11b77946 */
  push32(0x11b75b36u); f_11b77946();
L_11b75b36:;
  /* 11b75b36 mov esi, dword ptr [0x11b812d8] */
  ESI = (r32((uint32_t)(0x11b812d8)));
  /* 11b75b3c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11b75b3e:;
  /* 11b75b3e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b75b40 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75b42 je 0x11b75b56 */
  if (C.zf) goto L_11b75b56;
  /* 11b75b44 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75b46 je 0x11b75b49 */
  if (C.zf) goto L_11b75b49;
  /* 11b75b48 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11b75b49:;
  /* 11b75b49 push esi */
  push32((uint32_t)(ESI));
  /* 11b75b4a call 0x11b773b0 */
  push32(0x11b75b4fu); f_11b773b0();
  /* 11b75b4f pop ecx */
  ECX = (pop32());
  /* 11b75b50 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11b75b54 jmp 0x11b75b3e */
  goto L_11b75b3e;
L_11b75b56:;
  /* 11b75b56 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11b75b5d push eax */
  push32((uint32_t)(EAX));
  /* 11b75b5e call 0x11b77434 */
  push32(0x11b75b63u); f_11b77434();
  /* 11b75b63 mov esi, eax */
  ESI = (EAX);
  /* 11b75b65 pop ecx */
  ECX = (pop32());
  /* 11b75b66 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75b68 mov dword ptr [0x11b81308], esi */
  w32((uint32_t)(0x11b81308), (ESI));
  /* 11b75b6e jne 0x11b75b78 */
  if (!C.zf) goto L_11b75b78;
  /* 11b75b70 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b75b72 call 0x11b75198 */
  push32(0x11b75b77u); f_11b75198();
  /* 11b75b77 pop ecx */
  ECX = (pop32());
L_11b75b78:;
  /* 11b75b78 mov edi, dword ptr [0x11b812d8] */
  EDI = (r32((uint32_t)(0x11b812d8)));
  /* 11b75b7e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75b80 je 0x11b75bbb */
  if (C.zf) goto L_11b75bbb;
  /* 11b75b82 push ebp */
  push32((uint32_t)(EBP));
L_11b75b83:;
  /* 11b75b83 push edi */
  push32((uint32_t)(EDI));
  /* 11b75b84 call 0x11b773b0 */
  push32(0x11b75b89u); f_11b773b0();
  /* 11b75b89 mov ebp, eax */
  EBP = (EAX);
  /* 11b75b8b pop ecx */
  ECX = (pop32());
  /* 11b75b8c inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11b75b8d cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75b90 je 0x11b75bb4 */
  if (C.zf) goto L_11b75bb4;
  /* 11b75b92 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75b93 call 0x11b77434 */
  push32(0x11b75b98u); f_11b77434();
  /* 11b75b98 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75b9a pop ecx */
  ECX = (pop32());
  /* 11b75b9b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b75b9d jne 0x11b75ba7 */
  if (!C.zf) goto L_11b75ba7;
  /* 11b75b9f push 9 */
  push32((uint32_t)(0x9u));
  /* 11b75ba1 call 0x11b75198 */
  push32(0x11b75ba6u); f_11b75198();
  /* 11b75ba6 pop ecx */
  ECX = (pop32());
L_11b75ba7:;
  /* 11b75ba7 push edi */
  push32((uint32_t)(EDI));
  /* 11b75ba8 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b75baa call 0x11b76f20 */
  push32(0x11b75bafu); f_11b76f20();
  /* 11b75baf pop ecx */
  ECX = (pop32());
  /* 11b75bb0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75bb3 pop ecx */
  ECX = (pop32());
L_11b75bb4:;
  /* 11b75bb4 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75bb6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75bb8 jne 0x11b75b83 */
  if (!C.zf) goto L_11b75b83;
  /* 11b75bba pop ebp */
  EBP = (pop32());
L_11b75bbb:;
  /* 11b75bbb push dword ptr [0x11b812d8] */
  push32((uint32_t)(r32((uint32_t)(0x11b812d8))));
  /* 11b75bc1 call 0x11b765aa */
  push32(0x11b75bc6u); f_11b765aa();
  /* 11b75bc6 pop ecx */
  ECX = (pop32());
  /* 11b75bc7 mov dword ptr [0x11b812d8], ebx */
  w32((uint32_t)(0x11b812d8), (EBX));
  /* 11b75bcd mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11b75bcf pop edi */
  EDI = (pop32());
  /* 11b75bd0 pop esi */
  ESI = (pop32());
  /* 11b75bd1 mov dword ptr [0x11b819a4], 1 */
  w32((uint32_t)(0x11b819a4), (0x1u));
  /* 11b75bdb pop ebx */
  EBX = (pop32());
  /* 11b75bdc ret  */
  ESPCHK(0x11b75b24u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bdd @ 0x11b75bdd (153 bytes, 62 insns) */
void f_11b75bdd(void) {
  FTRACE(0x11b75bddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75bdd push ebp */
  push32((uint32_t)(EBP));
  /* 11b75bde mov ebp, esp */
  EBP = (ESP);
  /* 11b75be0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b75be1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b75be2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75be3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b75be5 cmp dword ptr [0x11b819a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b819a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75beb push esi */
  push32((uint32_t)(ESI));
  /* 11b75bec push edi */
  push32((uint32_t)(EDI));
  /* 11b75bed jne 0x11b75bf4 */
  if (!C.zf) goto L_11b75bf4;
  /* 11b75bef call 0x11b77946 */
  push32(0x11b75bf4u); f_11b77946();
L_11b75bf4:;
  /* 11b75bf4 mov esi, 0x11b8132c */
  ESI = (0x11b8132cu);
  /* 11b75bf9 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b75bfe push esi */
  push32((uint32_t)(ESI));
  /* 11b75bff push ebx */
  push32((uint32_t)(EBX));
  /* 11b75c00 call dword ptr [0x11b7b07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b07c))), 0x11b75c06u);
  /* 11b75c06 mov eax, dword ptr [0x11b819b4] */
  EAX = (r32((uint32_t)(0x11b819b4)));
  /* 11b75c0b mov dword ptr [0x11b81318], esi */
  w32((uint32_t)(0x11b81318), (ESI));
  /* 11b75c11 mov edi, esi */
  EDI = (ESI);
  /* 11b75c13 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75c15 je 0x11b75c19 */
  if (C.zf) goto L_11b75c19;
  /* 11b75c17 mov edi, eax */
  EDI = (EAX);
L_11b75c19:;
  /* 11b75c19 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b75c1c push eax */
  push32((uint32_t)(EAX));
  /* 11b75c1d lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b75c20 push eax */
  push32((uint32_t)(EAX));
  /* 11b75c21 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75c22 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75c23 push edi */
  push32((uint32_t)(EDI));
  /* 11b75c24 call 0x11b75c76 */
  push32(0x11b75c29u); f_11b75c76();
  /* 11b75c29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b75c2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b75c2f lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11b75c32 push eax */
  push32((uint32_t)(EAX));
  /* 11b75c33 call 0x11b77434 */
  push32(0x11b75c38u); f_11b77434();
  /* 11b75c38 mov esi, eax */
  ESI = (EAX);
  /* 11b75c3a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75c3d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75c3f jne 0x11b75c49 */
  if (!C.zf) goto L_11b75c49;
  /* 11b75c41 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b75c43 call 0x11b75198 */
  push32(0x11b75c48u); f_11b75198();
  /* 11b75c48 pop ecx */
  ECX = (pop32());
L_11b75c49:;
  /* 11b75c49 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b75c4c push eax */
  push32((uint32_t)(EAX));
  /* 11b75c4d lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b75c50 push eax */
  push32((uint32_t)(EAX));
  /* 11b75c51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b75c54 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11b75c57 push eax */
  push32((uint32_t)(EAX));
  /* 11b75c58 push esi */
  push32((uint32_t)(ESI));
  /* 11b75c59 push edi */
  push32((uint32_t)(EDI));
  /* 11b75c5a call 0x11b75c76 */
  push32(0x11b75c5fu); f_11b75c76();
  /* 11b75c5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b75c62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75c65 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b75c66 mov dword ptr [0x11b81300], esi */
  w32((uint32_t)(0x11b81300), (ESI));
  /* 11b75c6c pop edi */
  EDI = (pop32());
  /* 11b75c6d pop esi */
  ESI = (pop32());
  /* 11b75c6e mov dword ptr [0x11b812fc], eax */
  w32((uint32_t)(0x11b812fc), (EAX));
  /* 11b75c73 pop ebx */
  EBX = (pop32());
  /* 11b75c74 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b75c75 ret  */
  ESPCHK(0x11b75bddu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c76 @ 0x11b75c76 (436 bytes, 187 insns) */
void f_11b75c76(void) {
  FTRACE(0x11b75c76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75c76 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75c77 mov ebp, esp */
  EBP = (ESP);
  /* 11b75c79 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b75c7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b75c7f push ebx */
  push32((uint32_t)(EBX));
  /* 11b75c80 push esi */
  push32((uint32_t)(ESI));
  /* 11b75c81 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b75c84 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b75c87 push edi */
  push32((uint32_t)(EDI));
  /* 11b75c88 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b75c8b mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11b75c91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b75c94 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b75c96 je 0x11b75ca0 */
  if (C.zf) goto L_11b75ca0;
  /* 11b75c98 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11b75c9a add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75c9d mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11b75ca0:;
  /* 11b75ca0 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75ca3 jne 0x11b75ce9 */
  if (!C.zf) goto L_11b75ce9;
L_11b75ca5:;
  /* 11b75ca5 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b75ca8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75ca9 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75cac je 0x11b75cd7 */
  if (C.zf) goto L_11b75cd7;
  /* 11b75cae test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b75cb0 je 0x11b75cd7 */
  if (C.zf) goto L_11b75cd7;
  /* 11b75cb2 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11b75cb5 test byte ptr [edx + 0x11b81781], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11b81781)))&(0x4u); fl_logic(_r,8); }
  /* 11b75cbc je 0x11b75cca */
  if (C.zf) goto L_11b75cca;
  /* 11b75cbe inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b75cc0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75cc2 je 0x11b75cca */
  if (C.zf) goto L_11b75cca;
  /* 11b75cc4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b75cc6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b75cc8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b75cc9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b75cca:;
  /* 11b75cca inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b75ccc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75cce je 0x11b75ca5 */
  if (C.zf) goto L_11b75ca5;
  /* 11b75cd0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b75cd2 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b75cd4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b75cd5 jmp 0x11b75ca5 */
  goto L_11b75ca5;
L_11b75cd7:;
  /* 11b75cd7 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b75cd9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75cdb je 0x11b75ce1 */
  if (C.zf) goto L_11b75ce1;
  /* 11b75cdd and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11b75ce0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b75ce1:;
  /* 11b75ce1 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75ce4 jne 0x11b75d2c */
  if (!C.zf) goto L_11b75d2c;
  /* 11b75ce6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75ce7 jmp 0x11b75d2c */
  goto L_11b75d2c;
L_11b75ce9:;
  /* 11b75ce9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b75ceb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75ced je 0x11b75cf4 */
  if (C.zf) goto L_11b75cf4;
  /* 11b75cef mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b75cf1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b75cf3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b75cf4:;
  /* 11b75cf4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b75cf6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75cf7 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11b75cfa test byte ptr [ebx + 0x11b81781], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11b81781)))&(0x4u); fl_logic(_r,8); }
  /* 11b75d01 je 0x11b75d0f */
  if (C.zf) goto L_11b75d0f;
  /* 11b75d03 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b75d05 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75d07 je 0x11b75d0e */
  if (C.zf) goto L_11b75d0e;
  /* 11b75d09 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11b75d0b mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11b75d0d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b75d0e:;
  /* 11b75d0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b75d0f:;
  /* 11b75d0f cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75d12 je 0x11b75d1d */
  if (C.zf) goto L_11b75d1d;
  /* 11b75d14 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b75d16 je 0x11b75d21 */
  if (C.zf) goto L_11b75d21;
  /* 11b75d18 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75d1b jne 0x11b75ce9 */
  if (!C.zf) goto L_11b75ce9;
L_11b75d1d:;
  /* 11b75d1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b75d1f jne 0x11b75d24 */
  if (!C.zf) goto L_11b75d24;
L_11b75d21:;
  /* 11b75d21 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b75d22 jmp 0x11b75d2c */
  goto L_11b75d2c;
L_11b75d24:;
  /* 11b75d24 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75d26 je 0x11b75d2c */
  if (C.zf) goto L_11b75d2c;
  /* 11b75d28 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11b75d2c:;
  /* 11b75d2c and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11b75d30:;
  /* 11b75d30 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75d33 je 0x11b75e19 */
  if (C.zf) goto L_11b75e19;
L_11b75d39:;
  /* 11b75d39 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b75d3b cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75d3e je 0x11b75d45 */
  if (C.zf) goto L_11b75d45;
  /* 11b75d40 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75d43 jne 0x11b75d48 */
  if (!C.zf) goto L_11b75d48;
L_11b75d45:;
  /* 11b75d45 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75d46 jmp 0x11b75d39 */
  goto L_11b75d39;
L_11b75d48:;
  /* 11b75d48 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75d4b je 0x11b75e19 */
  if (C.zf) goto L_11b75e19;
  /* 11b75d51 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b75d53 je 0x11b75d5d */
  if (C.zf) goto L_11b75d5d;
  /* 11b75d55 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11b75d57 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75d5a mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11b75d5d:;
  /* 11b75d5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b75d60 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11b75d62:;
  /* 11b75d62 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11b75d69 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b75d6b:;
  /* 11b75d6b cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75d6e jne 0x11b75d74 */
  if (!C.zf) goto L_11b75d74;
  /* 11b75d70 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75d71 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b75d72 jmp 0x11b75d6b */
  goto L_11b75d6b;
L_11b75d74:;
  /* 11b75d74 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75d77 jne 0x11b75da5 */
  if (!C.zf) goto L_11b75da5;
  /* 11b75d79 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11b75d7c jne 0x11b75da3 */
  if (!C.zf) goto L_11b75da3;
  /* 11b75d7e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b75d80 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75d83 je 0x11b75d92 */
  if (C.zf) goto L_11b75d92;
  /* 11b75d85 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75d89 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11b75d8c jne 0x11b75d92 */
  if (!C.zf) goto L_11b75d92;
  /* 11b75d8e mov eax, edx */
  EAX = (EDX);
  /* 11b75d90 jmp 0x11b75d95 */
  goto L_11b75d95;
L_11b75d92:;
  /* 11b75d92 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11b75d95:;
  /* 11b75d95 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b75d98 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b75d9a cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75d9d sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11b75da0 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11b75da3:;
  /* 11b75da3 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11b75da5:;
  /* 11b75da5 mov edx, ebx */
  EDX = (EBX);
  /* 11b75da7 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b75da8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b75daa je 0x11b75dba */
  if (C.zf) goto L_11b75dba;
  /* 11b75dac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11b75dad:;
  /* 11b75dad test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75daf je 0x11b75db5 */
  if (C.zf) goto L_11b75db5;
  /* 11b75db1 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11b75db4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b75db5:;
  /* 11b75db5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b75db7 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b75db8 jne 0x11b75dad */
  if (!C.zf) goto L_11b75dad;
L_11b75dba:;
  /* 11b75dba mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b75dbc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b75dbe je 0x11b75e0a */
  if (C.zf) goto L_11b75e0a;
  /* 11b75dc0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75dc4 jne 0x11b75dd0 */
  if (!C.zf) goto L_11b75dd0;
  /* 11b75dc6 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75dc9 je 0x11b75e0a */
  if (C.zf) goto L_11b75e0a;
  /* 11b75dcb cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75dce je 0x11b75e0a */
  if (C.zf) goto L_11b75e0a;
L_11b75dd0:;
  /* 11b75dd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75dd4 je 0x11b75e04 */
  if (C.zf) goto L_11b75e04;
  /* 11b75dd6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75dd8 je 0x11b75df3 */
  if (C.zf) goto L_11b75df3;
  /* 11b75dda movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11b75ddd test byte ptr [ebx + 0x11b81781], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11b81781)))&(0x4u); fl_logic(_r,8); }
  /* 11b75de4 je 0x11b75dec */
  if (C.zf) goto L_11b75dec;
  /* 11b75de6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b75de8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b75de9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75dea inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11b75dec:;
  /* 11b75dec mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b75dee mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b75df0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b75df1 jmp 0x11b75e02 */
  goto L_11b75e02;
L_11b75df3:;
  /* 11b75df3 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11b75df6 test byte ptr [edx + 0x11b81781], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11b81781)))&(0x4u); fl_logic(_r,8); }
  /* 11b75dfd je 0x11b75e02 */
  if (C.zf) goto L_11b75e02;
  /* 11b75dff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75e00 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11b75e02:;
  /* 11b75e02 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11b75e04:;
  /* 11b75e04 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75e05 jmp 0x11b75d62 */
  goto L_11b75d62;
L_11b75e0a:;
  /* 11b75e0a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b75e0c je 0x11b75e12 */
  if (C.zf) goto L_11b75e12;
  /* 11b75e0e and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11b75e11 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b75e12:;
  /* 11b75e12 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b75e14 jmp 0x11b75d30 */
  goto L_11b75d30;
L_11b75e19:;
  /* 11b75e19 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b75e1b je 0x11b75e20 */
  if (C.zf) goto L_11b75e20;
  /* 11b75e1d and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11b75e20:;
  /* 11b75e20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b75e23 pop edi */
  EDI = (pop32());
  /* 11b75e24 pop esi */
  ESI = (pop32());
  /* 11b75e25 pop ebx */
  EBX = (pop32());
  /* 11b75e26 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11b75e28 pop ebp */
  EBP = (pop32());
  /* 11b75e29 ret  */
  ESPCHK(0x11b75c76u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e2a @ 0x11b75e2a (306 bytes, 132 insns) */
void f_11b75e2a(void) {
  FTRACE(0x11b75e2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75e2a push ecx */
  push32((uint32_t)(ECX));
  /* 11b75e2b push ecx */
  push32((uint32_t)(ECX));
  /* 11b75e2c mov eax, dword ptr [0x11b81430] */
  EAX = (r32((uint32_t)(0x11b81430)));
  /* 11b75e31 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75e32 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75e33 mov ebp, dword ptr [0x11b7b068] */
  EBP = (r32((uint32_t)(0x11b7b068)));
  /* 11b75e39 push esi */
  push32((uint32_t)(ESI));
  /* 11b75e3a push edi */
  push32((uint32_t)(EDI));
  /* 11b75e3b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b75e3d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b75e3f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b75e41 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75e43 jne 0x11b75e78 */
  if (!C.zf) goto L_11b75e78;
  /* 11b75e45 call ebp */
  call_ind((uint32_t)(EBP), 0x11b75e47u);
  /* 11b75e47 mov esi, eax */
  ESI = (EAX);
  /* 11b75e49 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75e4b je 0x11b75e59 */
  if (C.zf) goto L_11b75e59;
  /* 11b75e4d mov dword ptr [0x11b81430], 1 */
  w32((uint32_t)(0x11b81430), (0x1u));
  /* 11b75e57 jmp 0x11b75e81 */
  goto L_11b75e81;
L_11b75e59:;
  /* 11b75e59 call dword ptr [0x11b7b078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b078))), 0x11b75e5fu);
  /* 11b75e5f mov edi, eax */
  EDI = (EAX);
  /* 11b75e61 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75e63 je 0x11b75f53 */
  if (C.zf) goto L_11b75f53;
  /* 11b75e69 mov dword ptr [0x11b81430], 2 */
  w32((uint32_t)(0x11b81430), (0x2u));
  /* 11b75e73 jmp 0x11b75f07 */
  goto L_11b75f07;
L_11b75e78:;
  /* 11b75e78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75e7b jne 0x11b75f02 */
  if (!C.zf) goto L_11b75f02;
L_11b75e81:;
  /* 11b75e81 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75e83 jne 0x11b75e91 */
  if (!C.zf) goto L_11b75e91;
  /* 11b75e85 call ebp */
  call_ind((uint32_t)(EBP), 0x11b75e87u);
  /* 11b75e87 mov esi, eax */
  ESI = (EAX);
  /* 11b75e89 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75e8b je 0x11b75f53 */
  if (C.zf) goto L_11b75f53;
L_11b75e91:;
  /* 11b75e91 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b75e94 mov eax, esi */
  EAX = (ESI);
  /* 11b75e96 je 0x11b75ea6 */
  if (C.zf) goto L_11b75ea6;
L_11b75e98:;
  /* 11b75e98 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75e99 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75e9a cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b75e9d jne 0x11b75e98 */
  if (!C.zf) goto L_11b75e98;
  /* 11b75e9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75ea0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75ea1 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b75ea4 jne 0x11b75e98 */
  if (!C.zf) goto L_11b75e98;
L_11b75ea6:;
  /* 11b75ea6 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b75ea8 mov edi, dword ptr [0x11b7b070] */
  EDI = (r32((uint32_t)(0x11b7b070)));
  /* 11b75eae sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b75eb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75eb1 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75eb2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75eb3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75eb4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75eb5 push eax */
  push32((uint32_t)(EAX));
  /* 11b75eb6 push esi */
  push32((uint32_t)(ESI));
  /* 11b75eb7 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75eb8 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75eb9 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11b75ebd call edi */
  call_ind((uint32_t)(EDI), 0x11b75ebfu);
  /* 11b75ebf mov ebp, eax */
  EBP = (EAX);
  /* 11b75ec1 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75ec3 je 0x11b75ef7 */
  if (C.zf) goto L_11b75ef7;
  /* 11b75ec5 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75ec6 call 0x11b77434 */
  push32(0x11b75ecbu); f_11b77434();
  /* 11b75ecb cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75ecd pop ecx */
  ECX = (pop32());
  /* 11b75ece mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11b75ed2 je 0x11b75ef7 */
  if (C.zf) goto L_11b75ef7;
  /* 11b75ed4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75ed5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b75ed6 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75ed7 push eax */
  push32((uint32_t)(EAX));
  /* 11b75ed8 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11b75edc push esi */
  push32((uint32_t)(ESI));
  /* 11b75edd push ebx */
  push32((uint32_t)(EBX));
  /* 11b75ede push ebx */
  push32((uint32_t)(EBX));
  /* 11b75edf call edi */
  call_ind((uint32_t)(EDI), 0x11b75ee1u);
  /* 11b75ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75ee3 jne 0x11b75ef3 */
  if (!C.zf) goto L_11b75ef3;
  /* 11b75ee5 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b75ee9 call 0x11b765aa */
  push32(0x11b75eeeu); f_11b765aa();
  /* 11b75eee pop ecx */
  ECX = (pop32());
  /* 11b75eef mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11b75ef3:;
  /* 11b75ef3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11b75ef7:;
  /* 11b75ef7 push esi */
  push32((uint32_t)(ESI));
  /* 11b75ef8 call dword ptr [0x11b7b074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b074))), 0x11b75efeu);
  /* 11b75efe mov eax, ebx */
  EAX = (EBX);
  /* 11b75f00 jmp 0x11b75f55 */
  goto L_11b75f55;
L_11b75f02:;
  /* 11b75f02 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75f05 jne 0x11b75f53 */
  if (!C.zf) goto L_11b75f53;
L_11b75f07:;
  /* 11b75f07 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75f09 jne 0x11b75f17 */
  if (!C.zf) goto L_11b75f17;
  /* 11b75f0b call dword ptr [0x11b7b078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b078))), 0x11b75f11u);
  /* 11b75f11 mov edi, eax */
  EDI = (EAX);
  /* 11b75f13 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75f15 je 0x11b75f53 */
  if (C.zf) goto L_11b75f53;
L_11b75f17:;
  /* 11b75f17 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75f19 mov eax, edi */
  EAX = (EDI);
  /* 11b75f1b je 0x11b75f27 */
  if (C.zf) goto L_11b75f27;
L_11b75f1d:;
  /* 11b75f1d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75f1e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75f20 jne 0x11b75f1d */
  if (!C.zf) goto L_11b75f1d;
  /* 11b75f22 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75f23 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75f25 jne 0x11b75f1d */
  if (!C.zf) goto L_11b75f1d;
L_11b75f27:;
  /* 11b75f27 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b75f29 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b75f2a mov ebp, eax */
  EBP = (EAX);
  /* 11b75f2c push ebp */
  push32((uint32_t)(EBP));
  /* 11b75f2d call 0x11b77434 */
  push32(0x11b75f32u); f_11b77434();
  /* 11b75f32 mov esi, eax */
  ESI = (EAX);
  /* 11b75f34 pop ecx */
  ECX = (pop32());
  /* 11b75f35 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75f37 jne 0x11b75f3d */
  if (!C.zf) goto L_11b75f3d;
  /* 11b75f39 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b75f3b jmp 0x11b75f48 */
  goto L_11b75f48;
L_11b75f3d:;
  /* 11b75f3d push ebp */
  push32((uint32_t)(EBP));
  /* 11b75f3e push edi */
  push32((uint32_t)(EDI));
  /* 11b75f3f push esi */
  push32((uint32_t)(ESI));
  /* 11b75f40 call 0x11b77970 */
  push32(0x11b75f45u); f_11b77970();
  /* 11b75f45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b75f48:;
  /* 11b75f48 push edi */
  push32((uint32_t)(EDI));
  /* 11b75f49 call dword ptr [0x11b7b084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b084))), 0x11b75f4fu);
  /* 11b75f4f mov eax, esi */
  EAX = (ESI);
  /* 11b75f51 jmp 0x11b75f55 */
  goto L_11b75f55;
L_11b75f53:;
  /* 11b75f53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b75f55:;
  /* 11b75f55 pop edi */
  EDI = (pop32());
  /* 11b75f56 pop esi */
  ESI = (pop32());
  /* 11b75f57 pop ebp */
  EBP = (pop32());
  /* 11b75f58 pop ebx */
  EBX = (pop32());
  /* 11b75f59 pop ecx */
  ECX = (pop32());
  /* 11b75f5a pop ecx */
  ECX = (pop32());
  /* 11b75f5b ret  */
  ESPCHK(0x11b75e2au, _esp0);
  ESP += 4; return;
}

/* FUN_10005f5c @ 0x11b75f5c (45 bytes, 17 insns) */
void f_11b75f5c(void) {
  FTRACE(0x11b75f5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75f5c push esi */
  push32((uint32_t)(ESI));
  /* 11b75f5d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b75f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b75f63 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b75f66 call dword ptr [0x11b7b0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b0b4))), 0x11b75f6cu);
  /* 11b75f6c cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b75f71 jne 0x11b75f87 */
  if (!C.zf) goto L_11b75f87;
  /* 11b75f73 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11b75f76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b75f78 je 0x11b75f87 */
  if (C.zf) goto L_11b75f87;
  /* 11b75f7a add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b75f7c mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11b75f7f mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11b75f81 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11b75f84 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11b75f87:;
  /* 11b75f87 pop esi */
  ESI = (pop32());
  /* 11b75f88 ret  */
  ESPCHK(0x11b75f5cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f89 @ 0x11b75f89 (328 bytes, 115 insns) */
void f_11b75f89(void) {
  FTRACE(0x11b75f89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b75f89 push ebp */
  push32((uint32_t)(EBP));
  /* 11b75f8a mov ebp, esp */
  EBP = (ESP);
  /* 11b75f8c mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11b75f91 call 0x11b78060 */
  push32(0x11b75f96u); f_11b78060();
  /* 11b75f96 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11b75f9c push ebx */
  push32((uint32_t)(EBX));
  /* 11b75f9d push eax */
  push32((uint32_t)(EAX));
  /* 11b75f9e mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11b75fa8 call dword ptr [0x11b7b06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b06c))), 0x11b75faeu);
  /* 11b75fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75fb0 je 0x11b75fcc */
  if (C.zf) goto L_11b75fcc;
  /* 11b75fb2 cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75fb9 jne 0x11b75fcc */
  if (!C.zf) goto L_11b75fcc;
  /* 11b75fbb cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b75fc2 jb 0x11b75fcc */
  if (C.cf) goto L_11b75fcc;
  /* 11b75fc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b75fc6 pop eax */
  EAX = (pop32());
  /* 11b75fc7 jmp 0x11b760ce */
  goto L_11b760ce;
L_11b75fcc:;
  /* 11b75fcc lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11b75fd2 push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11b75fd7 push eax */
  push32((uint32_t)(EAX));
  /* 11b75fd8 push 0x11b7b230 */
  push32((uint32_t)(0x11b7b230u));
  /* 11b75fdd call dword ptr [0x11b7b064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b064))), 0x11b75fe3u);
  /* 11b75fe3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b75fe5 je 0x11b760bb */
  if (C.zf) goto L_11b760bb;
  /* 11b75feb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b75fed lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11b75ff3 cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75ff9 je 0x11b7600e */
  if (C.zf) goto L_11b7600e;
L_11b75ffb:;
  /* 11b75ffb mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b75ffd cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b75fff jl 0x11b76009 */
  if ((C.sf!=C.of)) goto L_11b76009;
  /* 11b76001 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76003 jg 0x11b76009 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b76009;
  /* 11b76005 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b76007 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11b76009:;
  /* 11b76009 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b7600a cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7600c jne 0x11b75ffb */
  if (!C.zf) goto L_11b75ffb;
L_11b7600e:;
  /* 11b7600e lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11b76014 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b76016 push eax */
  push32((uint32_t)(EAX));
  /* 11b76017 push 0x11b7b218 */
  push32((uint32_t)(0x11b7b218u));
  /* 11b7601c call 0x11b78020 */
  push32(0x11b76021u); f_11b78020();
  /* 11b76021 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76026 jne 0x11b76030 */
  if (!C.zf) goto L_11b76030;
  /* 11b76028 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11b7602e jmp 0x11b76079 */
  goto L_11b76079;
L_11b76030:;
  /* 11b76030 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11b76036 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b7603b push eax */
  push32((uint32_t)(EAX));
  /* 11b7603c push ebx */
  push32((uint32_t)(EBX));
  /* 11b7603d call dword ptr [0x11b7b07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b07c))), 0x11b76043u);
  /* 11b76043 cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76049 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11b7604f je 0x11b76064 */
  if (C.zf) goto L_11b76064;
L_11b76051:;
  /* 11b76051 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b76053 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76055 jl 0x11b7605f */
  if ((C.sf!=C.of)) goto L_11b7605f;
  /* 11b76057 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76059 jg 0x11b7605f */
  if ((!C.zf&&C.sf==C.of)) goto L_11b7605f;
  /* 11b7605b sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b7605d mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11b7605f:;
  /* 11b7605f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b76060 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76062 jne 0x11b76051 */
  if (!C.zf) goto L_11b76051;
L_11b76064:;
  /* 11b76064 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11b7606a push eax */
  push32((uint32_t)(EAX));
  /* 11b7606b lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11b76071 push eax */
  push32((uint32_t)(EAX));
  /* 11b76072 call 0x11b77fa0 */
  push32(0x11b76077u); f_11b77fa0();
  /* 11b76077 pop ecx */
  ECX = (pop32());
  /* 11b76078 pop ecx */
  ECX = (pop32());
L_11b76079:;
  /* 11b76079 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7607b je 0x11b760bb */
  if (C.zf) goto L_11b760bb;
  /* 11b7607d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11b7607f push eax */
  push32((uint32_t)(EAX));
  /* 11b76080 call 0x11b77ee0 */
  push32(0x11b76085u); f_11b77ee0();
  /* 11b76085 pop ecx */
  ECX = (pop32());
  /* 11b76086 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76088 pop ecx */
  ECX = (pop32());
  /* 11b76089 je 0x11b760bb */
  if (C.zf) goto L_11b760bb;
  /* 11b7608b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b7608c mov ecx, eax */
  ECX = (EAX);
  /* 11b7608e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76090 je 0x11b760a0 */
  if (C.zf) goto L_11b760a0;
L_11b76092:;
  /* 11b76092 cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76095 jne 0x11b7609b */
  if (!C.zf) goto L_11b7609b;
  /* 11b76097 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11b76099 jmp 0x11b7609c */
  goto L_11b7609c;
L_11b7609b:;
  /* 11b7609b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11b7609c:;
  /* 11b7609c cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7609e jne 0x11b76092 */
  if (!C.zf) goto L_11b76092;
L_11b760a0:;
  /* 11b760a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b760a2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b760a3 push eax */
  push32((uint32_t)(EAX));
  /* 11b760a4 call 0x11b77ca5 */
  push32(0x11b760a9u); f_11b77ca5();
  /* 11b760a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b760ac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b760af je 0x11b760ce */
  if (C.zf) goto L_11b760ce;
  /* 11b760b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b760b4 je 0x11b760ce */
  if (C.zf) goto L_11b760ce;
  /* 11b760b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b760b9 je 0x11b760ce */
  if (C.zf) goto L_11b760ce;
L_11b760bb:;
  /* 11b760bb lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b760be push eax */
  push32((uint32_t)(EAX));
  /* 11b760bf call 0x11b75f5c */
  push32(0x11b760c4u); f_11b75f5c();
  /* 11b760c4 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b760c8 pop ecx */
  ECX = (pop32());
  /* 11b760c9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b760cb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b760ce:;
  /* 11b760ce pop ebx */
  EBX = (pop32());
  /* 11b760cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b760d0 ret  */
  ESPCHK(0x11b75f89u, _esp0);
  ESP += 4; return;
}

/* FUN_100060d1 @ 0x11b760d1 (93 bytes, 30 insns) */
void f_11b760d1(void) {
  FTRACE(0x11b760d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b760d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b760d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b760d5 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b760d9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b760de sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b760e1 push eax */
  push32((uint32_t)(EAX));
  /* 11b760e2 call dword ptr [0x11b7b058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b058))), 0x11b760e8u);
  /* 11b760e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b760ea mov dword ptr [0x11b81888], eax */
  w32((uint32_t)(0x11b81888), (EAX));
  /* 11b760ef je 0x11b76127 */
  if (C.zf) goto L_11b76127;
  /* 11b760f1 call 0x11b75f89 */
  push32(0x11b760f6u); f_11b75f89();
  /* 11b760f6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b760f9 mov dword ptr [0x11b8188c], eax */
  w32((uint32_t)(0x11b8188c), (EAX));
  /* 11b760fe jne 0x11b7610d */
  if (!C.zf) goto L_11b7610d;
  /* 11b76100 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11b76105 call 0x11b7808f */
  push32(0x11b7610au); f_11b7808f();
  /* 11b7610a pop ecx */
  ECX = (pop32());
  /* 11b7610b jmp 0x11b76117 */
  goto L_11b76117;
L_11b7610d:;
  /* 11b7610d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76110 jne 0x11b7612a */
  if (!C.zf) goto L_11b7612a;
  /* 11b76112 call 0x11b788e0 */
  push32(0x11b76117u); f_11b788e0();
L_11b76117:;
  /* 11b76117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76119 jne 0x11b7612a */
  if (!C.zf) goto L_11b7612a;
  /* 11b7611b push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b76121 call dword ptr [0x11b7b05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b05c))), 0x11b76127u);
L_11b76127:;
  /* 11b76127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b76129 ret  */
  ESPCHK(0x11b760d1u, _esp0);
  ESP += 4; return;
L_11b7612a:;
  /* 11b7612a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7612c pop eax */
  EAX = (pop32());
  /* 11b7612d ret  */
  ESPCHK(0x11b760d1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000612e @ 0x11b7612e (168 bytes, 56 insns) */
void f_11b7612e(void) {
  FTRACE(0x11b7612eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7612e mov eax, dword ptr [0x11b8188c] */
  EAX = (r32((uint32_t)(0x11b8188c)));
  /* 11b76133 push esi */
  push32((uint32_t)(ESI));
  /* 11b76134 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76137 push edi */
  push32((uint32_t)(EDI));
  /* 11b76138 jne 0x11b761a0 */
  if (!C.zf) goto L_11b761a0;
  /* 11b7613a push ebx */
  push32((uint32_t)(EBX));
  /* 11b7613b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b7613d cmp dword ptr [0x11b81650], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b81650))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76143 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76144 mov ebp, dword ptr [0x11b7b050] */
  EBP = (r32((uint32_t)(0x11b7b050)));
  /* 11b7614a jle 0x11b7618c */
  if ((C.zf||C.sf!=C.of)) goto L_11b7618c;
  /* 11b7614c mov eax, dword ptr [0x11b81654] */
  EAX = (r32((uint32_t)(0x11b81654)));
  /* 11b76151 mov edi, dword ptr [0x11b7b060] */
  EDI = (r32((uint32_t)(0x11b7b060)));
  /* 11b76157 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11b7615a:;
  /* 11b7615a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b7615f push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11b76164 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b76166 call edi */
  call_ind((uint32_t)(EDI), 0x11b76168u);
  /* 11b76168 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b7616d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7616f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b76171 call edi */
  call_ind((uint32_t)(EDI), 0x11b76173u);
  /* 11b76173 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11b76176 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b76178 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b7617e call ebp */
  call_ind((uint32_t)(EBP), 0x11b76180u);
  /* 11b76180 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76183 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b76184 cmp ebx, dword ptr [0x11b81650] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b81650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7618a jl 0x11b7615a */
  if ((C.sf!=C.of)) goto L_11b7615a;
L_11b7618c:;
  /* 11b7618c push dword ptr [0x11b81654] */
  push32((uint32_t)(r32((uint32_t)(0x11b81654))));
  /* 11b76192 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b76194 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b7619a call ebp */
  call_ind((uint32_t)(EBP), 0x11b7619cu);
  /* 11b7619c pop ebp */
  EBP = (pop32());
  /* 11b7619d pop ebx */
  EBX = (pop32());
  /* 11b7619e jmp 0x11b761c7 */
  goto L_11b761c7;
L_11b761a0:;
  /* 11b761a0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b761a3 jne 0x11b761c7 */
  if (!C.zf) goto L_11b761c7;
  /* 11b761a5 mov edi, 0x11b7e3a0 */
  EDI = (0x11b7e3a0u);
  /* 11b761aa mov esi, edi */
  ESI = (EDI);
L_11b761ac:;
  /* 11b761ac mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b761af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b761b1 je 0x11b761c1 */
  if (C.zf) goto L_11b761c1;
  /* 11b761b3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b761b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b761ba push eax */
  push32((uint32_t)(EAX));
  /* 11b761bb call dword ptr [0x11b7b060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b060))), 0x11b761c1u);
L_11b761c1:;
  /* 11b761c1 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11b761c3 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b761c5 jne 0x11b761ac */
  if (!C.zf) goto L_11b761ac;
L_11b761c7:;
  /* 11b761c7 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b761cd call dword ptr [0x11b7b05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b05c))), 0x11b761d3u);
  /* 11b761d3 pop edi */
  EDI = (pop32());
  /* 11b761d4 pop esi */
  ESI = (pop32());
  /* 11b761d5 ret  */
  ESPCHK(0x11b7612eu, _esp0);
  ESP += 4; return;
}

/* FUN_100061d6 @ 0x11b761d6 (57 bytes, 18 insns) */
void f_11b761d6(void) {
  FTRACE(0x11b761d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b761d6 mov eax, dword ptr [0x11b812e0] */
  EAX = (r32((uint32_t)(0x11b812e0)));
  /* 11b761db cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b761de je 0x11b761ed */
  if (C.zf) goto L_11b761ed;
  /* 11b761e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b761e2 jne 0x11b7620e */
  if (!C.zf) goto L_11b7620e;
  /* 11b761e4 cmp dword ptr [0x11b812e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b812e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b761eb jne 0x11b7620e */
  if (!C.zf) goto L_11b7620e;
L_11b761ed:;
  /* 11b761ed push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11b761f2 call 0x11b7620f */
  push32(0x11b761f7u); f_11b7620f();
  /* 11b761f7 mov eax, dword ptr [0x11b81434] */
  EAX = (r32((uint32_t)(0x11b81434)));
  /* 11b761fc pop ecx */
  ECX = (pop32());
  /* 11b761fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b761ff je 0x11b76203 */
  if (C.zf) goto L_11b76203;
  /* 11b76201 call eax */
  call_ind((uint32_t)(EAX), 0x11b76203u);
L_11b76203:;
  /* 11b76203 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b76208 call 0x11b7620f */
  push32(0x11b7620du); f_11b7620f();
  /* 11b7620d pop ecx */
  ECX = (pop32());
L_11b7620e:;
  /* 11b7620e ret  */
  ESPCHK(0x11b761d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000620f @ 0x11b7620f (339 bytes, 100 insns) */
void f_11b7620f(void) {
  FTRACE(0x11b7620fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7620f push ebp */
  push32((uint32_t)(EBP));
  /* 11b76210 mov ebp, esp */
  EBP = (ESP);
  /* 11b76212 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7621b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b7621d mov eax, 0x11b7de80 */
  EAX = (0x11b7de80u);
L_11b76222:;
  /* 11b76222 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76224 je 0x11b76231 */
  if (C.zf) goto L_11b76231;
  /* 11b76226 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76229 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b7622a cmp eax, 0x11b7df10 */
  { uint32_t _a=(EAX),_b=(0x11b7df10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7622f jl 0x11b76222 */
  if ((C.sf!=C.of)) goto L_11b76222;
L_11b76231:;
  /* 11b76231 push esi */
  push32((uint32_t)(ESI));
  /* 11b76232 mov esi, ecx */
  ESI = (ECX);
  /* 11b76234 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11b76237 cmp edx, dword ptr [esi + 0x11b7de80] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11b7de80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7623d jne 0x11b7635f */
  if (!C.zf) goto L_11b7635f;
  /* 11b76243 mov eax, dword ptr [0x11b812e0] */
  EAX = (r32((uint32_t)(0x11b812e0)));
  /* 11b76248 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7624b je 0x11b76339 */
  if (C.zf) goto L_11b76339;
  /* 11b76251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76253 jne 0x11b76262 */
  if (!C.zf) goto L_11b76262;
  /* 11b76255 cmp dword ptr [0x11b812e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b812e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7625c je 0x11b76339 */
  if (C.zf) goto L_11b76339;
L_11b76262:;
  /* 11b76262 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76268 je 0x11b7635f */
  if (C.zf) goto L_11b7635f;
  /* 11b7626e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b76274 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b76279 push eax */
  push32((uint32_t)(EAX));
  /* 11b7627a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7627c call dword ptr [0x11b7b07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b07c))), 0x11b76282u);
  /* 11b76282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76284 jne 0x11b76299 */
  if (!C.zf) goto L_11b76299;
  /* 11b76286 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b7628c push 0x11b7b520 */
  push32((uint32_t)(0x11b7b520u));
  /* 11b76291 push eax */
  push32((uint32_t)(EAX));
  /* 11b76292 call 0x11b76f20 */
  push32(0x11b76297u); f_11b76f20();
  /* 11b76297 pop ecx */
  ECX = (pop32());
  /* 11b76298 pop ecx */
  ECX = (pop32());
L_11b76299:;
  /* 11b76299 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b7629f push edi */
  push32((uint32_t)(EDI));
  /* 11b762a0 push eax */
  push32((uint32_t)(EAX));
  /* 11b762a1 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11b762a7 call 0x11b773b0 */
  push32(0x11b762acu); f_11b773b0();
  /* 11b762ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b762ad pop ecx */
  ECX = (pop32());
  /* 11b762ae cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b762b1 jbe 0x11b762dc */
  if ((C.cf||C.zf)) goto L_11b762dc;
  /* 11b762b3 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b762b9 push eax */
  push32((uint32_t)(EAX));
  /* 11b762ba call 0x11b773b0 */
  push32(0x11b762bfu); f_11b773b0();
  /* 11b762bf mov edi, eax */
  EDI = (EAX);
  /* 11b762c1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b762c7 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b762ca push 3 */
  push32((uint32_t)(0x3u));
  /* 11b762cc add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b762ce push 0x11b7b51c */
  push32((uint32_t)(0x11b7b51cu));
  /* 11b762d3 push edi */
  push32((uint32_t)(EDI));
  /* 11b762d4 call 0x11b78f90 */
  push32(0x11b762d9u); f_11b78f90();
  /* 11b762d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b762dc:;
  /* 11b762dc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b762e2 push 0x11b7b500 */
  push32((uint32_t)(0x11b7b500u));
  /* 11b762e7 push eax */
  push32((uint32_t)(EAX));
  /* 11b762e8 call 0x11b76f20 */
  push32(0x11b762edu); f_11b76f20();
  /* 11b762ed lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b762f3 push edi */
  push32((uint32_t)(EDI));
  /* 11b762f4 push eax */
  push32((uint32_t)(EAX));
  /* 11b762f5 call 0x11b76f30 */
  push32(0x11b762fau); f_11b76f30();
  /* 11b762fa lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b76300 push 0x11b7b4fc */
  push32((uint32_t)(0x11b7b4fcu));
  /* 11b76305 push eax */
  push32((uint32_t)(EAX));
  /* 11b76306 call 0x11b76f30 */
  push32(0x11b7630bu); f_11b76f30();
  /* 11b7630b push dword ptr [esi + 0x11b7de84] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11b7de84))));
  /* 11b76311 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b76317 push eax */
  push32((uint32_t)(EAX));
  /* 11b76318 call 0x11b76f30 */
  push32(0x11b7631du); f_11b76f30();
  /* 11b7631d push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11b76322 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b76328 push 0x11b7b4d4 */
  push32((uint32_t)(0x11b7b4d4u));
  /* 11b7632d push eax */
  push32((uint32_t)(EAX));
  /* 11b7632e call 0x11b78f04 */
  push32(0x11b76333u); f_11b78f04();
  /* 11b76333 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76336 pop edi */
  EDI = (pop32());
  /* 11b76337 jmp 0x11b7635f */
  goto L_11b7635f;
L_11b76339:;
  /* 11b76339 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b7633c lea esi, [esi + 0x11b7de84] */
  ESI = ((uint32_t)(ESI + 0x11b7de84));
  /* 11b76342 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b76344 push eax */
  push32((uint32_t)(EAX));
  /* 11b76345 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b76347 call 0x11b773b0 */
  push32(0x11b7634cu); f_11b773b0();
  /* 11b7634c pop ecx */
  ECX = (pop32());
  /* 11b7634d push eax */
  push32((uint32_t)(EAX));
  /* 11b7634e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b76350 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11b76352 call dword ptr [0x11b7b08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b08c))), 0x11b76358u);
  /* 11b76358 push eax */
  push32((uint32_t)(EAX));
  /* 11b76359 call dword ptr [0x11b7b04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b04c))), 0x11b7635fu);
L_11b7635f:;
  /* 11b7635f pop esi */
  ESI = (pop32());
  /* 11b76360 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b76361 ret  */
  ESPCHK(0x11b7620fu, _esp0);
  ESP += 4; return;
}

/* FUN_10006362 @ 0x11b76362 (289 bytes, 98 insns) */
void f_11b76362(void) {
  FTRACE(0x11b76362u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76362 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76363 mov ebp, esp */
  EBP = (ESP);
  /* 11b76365 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b76367 push 0x11b7b538 */
  push32((uint32_t)(0x11b7b538u));
  /* 11b7636c push 0x11b791a4 */
  push32((uint32_t)(0x11b791a4u));
  /* 11b76371 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b76377 push eax */
  push32((uint32_t)(EAX));
  /* 11b76378 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b7637f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76382 push ebx */
  push32((uint32_t)(EBX));
  /* 11b76383 push esi */
  push32((uint32_t)(ESI));
  /* 11b76384 push edi */
  push32((uint32_t)(EDI));
  /* 11b76385 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76388 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b7638c mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11b7638f mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11b76392 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76395 ja 0x11b763ab */
  if ((!C.cf&&!C.zf)) goto L_11b763ab;
  /* 11b76397 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b76399 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7639b jne 0x11b763a0 */
  if (!C.zf) goto L_11b763a0;
  /* 11b7639d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7639f pop esi */
  ESI = (pop32());
L_11b763a0:;
  /* 11b763a0 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b763a3 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b763a6 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11b763a9 jmp 0x11b763ad */
  goto L_11b763ad;
L_11b763ab:;
  /* 11b763ab xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b763ad:;
  /* 11b763ad mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11b763b0 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b763b3 ja 0x11b76461 */
  if ((!C.cf&&!C.zf)) goto L_11b76461;
  /* 11b763b9 mov eax, dword ptr [0x11b8188c] */
  EAX = (r32((uint32_t)(0x11b8188c)));
  /* 11b763be cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b763c1 jne 0x11b76404 */
  if (!C.zf) goto L_11b76404;
  /* 11b763c3 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b763c6 cmp edi, dword ptr [0x11b81658] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11b81658))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b763cc ja 0x11b7644a */
  if ((!C.cf&&!C.zf)) goto L_11b7644a;
  /* 11b763ce push 9 */
  push32((uint32_t)(0x9u));
  /* 11b763d0 call 0x11b76534 */
  push32(0x11b763d5u); f_11b76534();
  /* 11b763d5 pop ecx */
  ECX = (pop32());
  /* 11b763d6 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11b763d9 push edi */
  push32((uint32_t)(EDI));
  /* 11b763da call 0x11b7842b */
  push32(0x11b763dfu); f_11b7842b();
  /* 11b763df pop ecx */
  ECX = (pop32());
  /* 11b763e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b763e3 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b763e7 call 0x11b763fb */
  push32(0x11b763ecu); f_11b763fb();
  /* 11b763ec cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b763ef je 0x11b7644f */
  if (C.zf) goto L_11b7644f;
  /* 11b763f1 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11b763f4 jmp 0x11b7643e */
  goto L_11b7643e;
  /* 11b763f6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b763f8 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b763fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11b763fd call 0x11b76595 */
  push32(0x11b76402u); f_11b76595();
  /* 11b76402 pop ecx */
  ECX = (pop32());
  /* 11b76403 ret  */
  ESPCHK(0x11b76362u, _esp0);
  ESP += 4; return;
L_11b76404:;
  /* 11b76404 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76407 jne 0x11b7644a */
  if (!C.zf) goto L_11b7644a;
  /* 11b76409 cmp esi, dword ptr [0x11b803c4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b803c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7640f ja 0x11b7644a */
  if ((!C.cf&&!C.zf)) goto L_11b7644a;
  /* 11b76411 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b76413 call 0x11b76534 */
  push32(0x11b76418u); f_11b76534();
  /* 11b76418 pop ecx */
  ECX = (pop32());
  /* 11b76419 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b76420 mov eax, esi */
  EAX = (ESI);
  /* 11b76422 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b76425 push eax */
  push32((uint32_t)(EAX));
  /* 11b76426 call 0x11b78bd8 */
  push32(0x11b7642bu); f_11b78bd8();
  /* 11b7642b pop ecx */
  ECX = (pop32());
  /* 11b7642c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b7642f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b76433 call 0x11b76484 */
  push32(0x11b76438u); f_11b76484();
  /* 11b76438 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7643b je 0x11b7644f */
  if (C.zf) goto L_11b7644f;
  /* 11b7643d push esi */
  push32((uint32_t)(ESI));
L_11b7643e:;
  /* 11b7643e push ebx */
  push32((uint32_t)(EBX));
  /* 11b7643f push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11b76442 call 0x11b77010 */
  push32(0x11b76447u); f_11b77010();
  /* 11b76447 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7644a:;
  /* 11b7644a cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7644d jne 0x11b7648d */
  if (!C.zf) { jmp_ind(0x11b7648du); return; }
L_11b7644f:;
  /* 11b7644f push esi */
  push32((uint32_t)(ESI));
  /* 11b76450 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b76452 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b76458 call dword ptr [0x11b7b054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b054))), 0x11b7645eu);
  /* 11b7645e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11b76461:;
  /* 11b76461 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76464 jne 0x11b7648d */
  if (!C.zf) { jmp_ind(0x11b7648du); return; }
  /* 11b76466 cmp dword ptr [0x11b814b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b814b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7646c je 0x11b7648d */
  if (C.zf) { jmp_ind(0x11b7648du); return; }
  /* 11b7646e push esi */
  push32((uint32_t)(ESI));
  /* 11b7646f call 0x11b7908e */
  push32(0x11b76474u); f_11b7908e();
  /* 11b76474 pop ecx */
  ECX = (pop32());
  /* 11b76475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76477 jne 0x11b763ad */
  if (!C.zf) goto L_11b763ad;
  /* 11b7647d jmp 0x11b76490 */
  jmp_ind(0x11b76490u); return;
  /* 11b7647f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_100063fb @ 0x11b763fb (9 bytes, 4 insns) */
void f_11b763fb(void) {
  FTRACE(0x11b763fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b763fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11b763fd call 0x11b76595 */
  push32(0x11b76402u); f_11b76595();
  /* 11b76402 pop ecx */
  ECX = (pop32());
  /* 11b76403 ret  */
  ESPCHK(0x11b763fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10006484 @ 0x11b76484 (9 bytes, 4 insns) */
void f_11b76484(void) {
  FTRACE(0x11b76484u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76484 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b76486 call 0x11b76595 */
  push32(0x11b7648bu); f_11b76595();
  /* 11b7648b pop ecx */
  ECX = (pop32());
  /* 11b7648c ret  */
  ESPCHK(0x11b76484u, _esp0);
  ESP += 4; return;
}

/* FUN_1000649f @ 0x11b7649f (41 bytes, 12 insns) */
void f_11b7649f(void) {
  FTRACE(0x11b7649fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7649f push esi */
  push32((uint32_t)(ESI));
  /* 11b764a0 mov esi, dword ptr [0x11b7b044] */
  ESI = (r32((uint32_t)(0x11b7b044)));
  /* 11b764a6 push dword ptr [0x11b7df54] */
  push32((uint32_t)(r32((uint32_t)(0x11b7df54))));
  /* 11b764ac call esi */
  call_ind((uint32_t)(ESI), 0x11b764aeu);
  /* 11b764ae push dword ptr [0x11b7df44] */
  push32((uint32_t)(r32((uint32_t)(0x11b7df44))));
  /* 11b764b4 call esi */
  call_ind((uint32_t)(ESI), 0x11b764b6u);
  /* 11b764b6 push dword ptr [0x11b7df34] */
  push32((uint32_t)(r32((uint32_t)(0x11b7df34))));
  /* 11b764bc call esi */
  call_ind((uint32_t)(ESI), 0x11b764beu);
  /* 11b764be push dword ptr [0x11b7df14] */
  push32((uint32_t)(r32((uint32_t)(0x11b7df14))));
  /* 11b764c4 call esi */
  call_ind((uint32_t)(ESI), 0x11b764c6u);
  /* 11b764c6 pop esi */
  ESI = (pop32());
  /* 11b764c7 ret  */
  ESPCHK(0x11b7649fu, _esp0);
  ESP += 4; return;
}

/* FUN_100064c8 @ 0x11b764c8 (108 bytes, 34 insns) */
void f_11b764c8(void) {
  FTRACE(0x11b764c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b764c8 push esi */
  push32((uint32_t)(ESI));
  /* 11b764c9 push edi */
  push32((uint32_t)(EDI));
  /* 11b764ca mov edi, dword ptr [0x11b7b080] */
  EDI = (r32((uint32_t)(0x11b7b080)));
  /* 11b764d0 mov esi, 0x11b7df10 */
  ESI = (0x11b7df10u);
L_11b764d5:;
  /* 11b764d5 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b764d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b764d9 je 0x11b76506 */
  if (C.zf) goto L_11b76506;
  /* 11b764db cmp esi, 0x11b7df54 */
  { uint32_t _a=(ESI),_b=(0x11b7df54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b764e1 je 0x11b76506 */
  if (C.zf) goto L_11b76506;
  /* 11b764e3 cmp esi, 0x11b7df44 */
  { uint32_t _a=(ESI),_b=(0x11b7df44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b764e9 je 0x11b76506 */
  if (C.zf) goto L_11b76506;
  /* 11b764eb cmp esi, 0x11b7df34 */
  { uint32_t _a=(ESI),_b=(0x11b7df34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b764f1 je 0x11b76506 */
  if (C.zf) goto L_11b76506;
  /* 11b764f3 cmp esi, 0x11b7df14 */
  { uint32_t _a=(ESI),_b=(0x11b7df14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b764f9 je 0x11b76506 */
  if (C.zf) goto L_11b76506;
  /* 11b764fb push eax */
  push32((uint32_t)(EAX));
  /* 11b764fc call edi */
  call_ind((uint32_t)(EDI), 0x11b764feu);
  /* 11b764fe push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b76500 call 0x11b765aa */
  push32(0x11b76505u); f_11b765aa();
  /* 11b76505 pop ecx */
  ECX = (pop32());
L_11b76506:;
  /* 11b76506 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76509 cmp esi, 0x11b7dfd0 */
  { uint32_t _a=(ESI),_b=(0x11b7dfd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7650f jl 0x11b764d5 */
  if ((C.sf!=C.of)) goto L_11b764d5;
  /* 11b76511 push dword ptr [0x11b7df34] */
  push32((uint32_t)(r32((uint32_t)(0x11b7df34))));
  /* 11b76517 call edi */
  call_ind((uint32_t)(EDI), 0x11b76519u);
  /* 11b76519 push dword ptr [0x11b7df44] */
  push32((uint32_t)(r32((uint32_t)(0x11b7df44))));
  /* 11b7651f call edi */
  call_ind((uint32_t)(EDI), 0x11b76521u);
  /* 11b76521 push dword ptr [0x11b7df54] */
  push32((uint32_t)(r32((uint32_t)(0x11b7df54))));
  /* 11b76527 call edi */
  call_ind((uint32_t)(EDI), 0x11b76529u);
  /* 11b76529 push dword ptr [0x11b7df14] */
  push32((uint32_t)(r32((uint32_t)(0x11b7df14))));
  /* 11b7652f call edi */
  call_ind((uint32_t)(EDI), 0x11b76531u);
  /* 11b76531 pop edi */
  EDI = (pop32());
  /* 11b76532 pop esi */
  ESI = (pop32());
  /* 11b76533 ret  */
  ESPCHK(0x11b764c8u, _esp0);
  ESP += 4; return;
}

/* FUN_10006534 @ 0x11b76534 (97 bytes, 37 insns) */
void f_11b76534(void) {
  FTRACE(0x11b76534u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76534 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76535 mov ebp, esp */
  EBP = (ESP);
  /* 11b76537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7653a push esi */
  push32((uint32_t)(ESI));
  /* 11b7653b cmp dword ptr [eax*4 + 0x11b7df10], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11b7df10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76543 lea esi, [eax*4 + 0x11b7df10] */
  ESI = ((uint32_t)(EAX*4 + 0x11b7df10));
  /* 11b7654a jne 0x11b7658a */
  if (!C.zf) goto L_11b7658a;
  /* 11b7654c push edi */
  push32((uint32_t)(EDI));
  /* 11b7654d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b7654f call 0x11b77434 */
  push32(0x11b76554u); f_11b77434();
  /* 11b76554 mov edi, eax */
  EDI = (EAX);
  /* 11b76556 pop ecx */
  ECX = (pop32());
  /* 11b76557 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b76559 jne 0x11b76563 */
  if (!C.zf) goto L_11b76563;
  /* 11b7655b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b7655d call 0x11b75198 */
  push32(0x11b76562u); f_11b75198();
  /* 11b76562 pop ecx */
  ECX = (pop32());
L_11b76563:;
  /* 11b76563 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b76565 call 0x11b76534 */
  push32(0x11b7656au); f_11b76534();
  /* 11b7656a cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7656d pop ecx */
  ECX = (pop32());
  /* 11b7656e push edi */
  push32((uint32_t)(EDI));
  /* 11b7656f jne 0x11b7657b */
  if (!C.zf) goto L_11b7657b;
  /* 11b76571 call dword ptr [0x11b7b044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b044))), 0x11b76577u);
  /* 11b76577 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b76579 jmp 0x11b76581 */
  goto L_11b76581;
L_11b7657b:;
  /* 11b7657b call 0x11b765aa */
  push32(0x11b76580u); f_11b765aa();
  /* 11b76580 pop ecx */
  ECX = (pop32());
L_11b76581:;
  /* 11b76581 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b76583 call 0x11b76595 */
  push32(0x11b76588u); f_11b76595();
  /* 11b76588 pop ecx */
  ECX = (pop32());
  /* 11b76589 pop edi */
  EDI = (pop32());
L_11b7658a:;
  /* 11b7658a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b7658c call dword ptr [0x11b7b040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b040))), 0x11b76592u);
  /* 11b76592 pop esi */
  ESI = (pop32());
  /* 11b76593 pop ebp */
  EBP = (pop32());
  /* 11b76594 ret  */
  ESPCHK(0x11b76534u, _esp0);
  ESP += 4; return;
}

/* FUN_10006595 @ 0x11b76595 (21 bytes, 7 insns) */
void f_11b76595(void) {
  FTRACE(0x11b76595u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76595 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76596 mov ebp, esp */
  EBP = (ESP);
  /* 11b76598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7659b push dword ptr [eax*4 + 0x11b7df10] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11b7df10))));
  /* 11b765a2 call dword ptr [0x11b7b048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b048))), 0x11b765a8u);
  /* 11b765a8 pop ebp */
  EBP = (pop32());
  /* 11b765a9 ret  */
  ESPCHK(0x11b76595u, _esp0);
  ESP += 4; return;
}

/* FUN_100065aa @ 0x11b765aa (215 bytes, 76 insns) */
void f_11b765aa(void) {
  FTRACE(0x11b765aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b765aa push ebp */
  push32((uint32_t)(EBP));
  /* 11b765ab mov ebp, esp */
  EBP = (ESP);
  /* 11b765ad push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b765af push 0x11b7b550 */
  push32((uint32_t)(0x11b7b550u));
  /* 11b765b4 push 0x11b791a4 */
  push32((uint32_t)(0x11b791a4u));
  /* 11b765b9 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b765bf push eax */
  push32((uint32_t)(EAX));
  /* 11b765c0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b765c7 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b765ca push ebx */
  push32((uint32_t)(EBX));
  /* 11b765cb push esi */
  push32((uint32_t)(ESI));
  /* 11b765cc push edi */
  push32((uint32_t)(EDI));
  /* 11b765cd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b765d0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b765d2 je 0x11b76684 */
  if (C.zf) { jmp_ind(0x11b76684u); return; }
  /* 11b765d8 mov eax, dword ptr [0x11b8188c] */
  EAX = (r32((uint32_t)(0x11b8188c)));
  /* 11b765dd cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b765e0 jne 0x11b7661d */
  if (!C.zf) goto L_11b7661d;
  /* 11b765e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b765e4 call 0x11b76534 */
  push32(0x11b765e9u); f_11b76534();
  /* 11b765e9 pop ecx */
  ECX = (pop32());
  /* 11b765ea and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b765ee push esi */
  push32((uint32_t)(ESI));
  /* 11b765ef call 0x11b780d7 */
  push32(0x11b765f4u); f_11b780d7();
  /* 11b765f4 pop ecx */
  ECX = (pop32());
  /* 11b765f5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b765f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b765fa je 0x11b76605 */
  if (C.zf) goto L_11b76605;
  /* 11b765fc push esi */
  push32((uint32_t)(ESI));
  /* 11b765fd push eax */
  push32((uint32_t)(EAX));
  /* 11b765fe call 0x11b78102 */
  push32(0x11b76603u); f_11b78102();
  /* 11b76603 pop ecx */
  ECX = (pop32());
  /* 11b76604 pop ecx */
  ECX = (pop32());
L_11b76605:;
  /* 11b76605 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b76609 call 0x11b76614 */
  push32(0x11b7660eu); f_11b76614();
  /* 11b7660e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76612 jmp 0x11b76665 */
  goto L_11b76665;
  /* 11b76614 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b76616 call 0x11b76595 */
  push32(0x11b7661bu); f_11b76595();
  /* 11b7661b pop ecx */
  ECX = (pop32());
  /* 11b7661c ret  */
  ESPCHK(0x11b765aau, _esp0);
  ESP += 4; return;
L_11b7661d:;
  /* 11b7661d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76620 jne 0x11b76675 */
  if (!C.zf) goto L_11b76675;
  /* 11b76622 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b76624 call 0x11b76534 */
  push32(0x11b76629u); f_11b76534();
  /* 11b76629 pop ecx */
  ECX = (pop32());
  /* 11b7662a mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b76631 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11b76634 push eax */
  push32((uint32_t)(EAX));
  /* 11b76635 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11b76638 push eax */
  push32((uint32_t)(EAX));
  /* 11b76639 push esi */
  push32((uint32_t)(ESI));
  /* 11b7663a call 0x11b78b3c */
  push32(0x11b7663fu); f_11b78b3c();
  /* 11b7663f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76642 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b76645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76647 je 0x11b76658 */
  if (C.zf) goto L_11b76658;
  /* 11b76649 push eax */
  push32((uint32_t)(EAX));
  /* 11b7664a push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11b7664d push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11b76650 call 0x11b78b93 */
  push32(0x11b76655u); f_11b78b93();
  /* 11b76655 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b76658:;
  /* 11b76658 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b7665c call 0x11b7666c */
  push32(0x11b76661u); f_11b7666c();
  /* 11b76661 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b76665:;
  /* 11b76665 jne 0x11b76684 */
  if (!C.zf) { jmp_ind(0x11b76684u); return; }
  /* 11b76667 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b7666a jmp 0x11b76676 */
  goto L_11b76676;
  /* 11b7666c push 9 */
  push32((uint32_t)(0x9u));
  /* 11b7666e call 0x11b76595 */
  push32(0x11b76673u); f_11b76595();
  /* 11b76673 pop ecx */
  ECX = (pop32());
  /* 11b76674 ret  */
  ESPCHK(0x11b765aau, _esp0);
  ESP += 4; return;
L_11b76675:;
  /* 11b76675 push esi */
  push32((uint32_t)(ESI));
L_11b76676:;
  /* 11b76676 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b76678 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b76680 push eax */
  push32((uint32_t)(EAX));
}

/* FUN_10006614 @ 0x11b76614 (9 bytes, 4 insns) */
void f_11b76614(void) {
  FTRACE(0x11b76614u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76614 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b76616 call 0x11b76595 */
  push32(0x11b7661bu); f_11b76595();
  /* 11b7661b pop ecx */
  ECX = (pop32());
  /* 11b7661c ret  */
  ESPCHK(0x11b76614u, _esp0);
  ESP += 4; return;
}

/* FUN_1000666c @ 0x11b7666c (9 bytes, 4 insns) */
void f_11b7666c(void) {
  FTRACE(0x11b7666cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7666c push 9 */
  push32((uint32_t)(0x9u));
  /* 11b7666e call 0x11b76595 */
  push32(0x11b76673u); f_11b76595();
  /* 11b76673 pop ecx */
  ECX = (pop32());
  /* 11b76674 ret  */
  ESPCHK(0x11b7666cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006693 @ 0x11b76693 (53 bytes, 25 insns) */
void f_11b76693(void) {
  FTRACE(0x11b76693u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76693 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76694 mov ebp, esp */
  EBP = (ESP);
  /* 11b76696 push ecx */
  push32((uint32_t)(ECX));
  /* 11b76697 push esi */
  push32((uint32_t)(ESI));
  /* 11b76698 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b76699 fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 11b7669c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11b7669f call 0x11b766de */
  push32(0x11b766a4u); f_11b766de();
  /* 11b766a4 mov esi, eax */
  ESI = (EAX);
  /* 11b766a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b766a9 not eax */
  EAX = (~(EAX));
  /* 11b766ab and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11b766ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b766b0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11b766b3 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11b766b5 push esi */
  push32((uint32_t)(ESI));
  /* 11b766b6 call 0x11b76770 */
  push32(0x11b766bbu); f_11b76770();
  /* 11b766bb pop ecx */
  ECX = (pop32());
  /* 11b766bc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b766bf pop ecx */
  ECX = (pop32());
  /* 11b766c0 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 11b766c3 mov eax, esi */
  EAX = (ESI);
  /* 11b766c5 pop esi */
  ESI = (pop32());
  /* 11b766c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b766c7 ret  */
  ESPCHK(0x11b76693u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c8 @ 0x11b766c8 (22 bytes, 8 insns) */
void f_11b766c8(void) {
  FTRACE(0x11b766c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b766c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b766cc and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b766d1 push eax */
  push32((uint32_t)(EAX));
  /* 11b766d2 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b766d6 call 0x11b76693 */
  push32(0x11b766dbu); f_11b76693();
  /* 11b766db pop ecx */
  ECX = (pop32());
  /* 11b766dc pop ecx */
  ECX = (pop32());
  /* 11b766dd ret  */
  ESPCHK(0x11b766c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100066de @ 0x11b766de (146 bytes, 58 insns) */
void f_11b766de(void) {
  FTRACE(0x11b766deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b766de push ebx */
  push32((uint32_t)(EBX));
  /* 11b766df mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b766e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b766e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11b766e6 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11b766e9 push edi */
  push32((uint32_t)(EDI));
  /* 11b766ea je 0x11b766ef */
  if (C.zf) goto L_11b766ef;
  /* 11b766ec push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b766ee pop eax */
  EAX = (pop32());
L_11b766ef:;
  /* 11b766ef test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11b766f2 je 0x11b766f6 */
  if (C.zf) goto L_11b766f6;
  /* 11b766f4 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11b766f6:;
  /* 11b766f6 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11b766f9 je 0x11b766fd */
  if (C.zf) goto L_11b766fd;
  /* 11b766fb or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11b766fd:;
  /* 11b766fd test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11b76700 je 0x11b76704 */
  if (C.zf) goto L_11b76704;
  /* 11b76702 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11b76704:;
  /* 11b76704 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 11b76707 je 0x11b7670b */
  if (C.zf) goto L_11b7670b;
  /* 11b76709 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_11b7670b:;
  /* 11b7670b test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11b7670e je 0x11b76715 */
  if (C.zf) goto L_11b76715;
  /* 11b76710 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_11b76715:;
  /* 11b76715 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11b76718 push esi */
  push32((uint32_t)(ESI));
  /* 11b76719 mov edx, ecx */
  EDX = (ECX);
  /* 11b7671b mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 11b76720 mov edi, 0x300 */
  EDI = (0x300u);
  /* 11b76725 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11b76727 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 11b7672c je 0x11b7674d */
  if (C.zf) goto L_11b7674d;
  /* 11b7672e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76734 je 0x11b7674a */
  if (C.zf) goto L_11b7674a;
  /* 11b76736 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7673c je 0x11b76746 */
  if (C.zf) goto L_11b76746;
  /* 11b7673e cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76740 jne 0x11b7674d */
  if (!C.zf) goto L_11b7674d;
  /* 11b76742 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11b76744 jmp 0x11b7674d */
  goto L_11b7674d;
L_11b76746:;
  /* 11b76746 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 11b76748 jmp 0x11b7674d */
  goto L_11b7674d;
L_11b7674a:;
  /* 11b7674a or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_11b7674d:;
  /* 11b7674d and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b7674f pop esi */
  ESI = (pop32());
  /* 11b76750 je 0x11b7675d */
  if (C.zf) goto L_11b7675d;
  /* 11b76752 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76754 jne 0x11b76762 */
  if (!C.zf) goto L_11b76762;
  /* 11b76756 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b7675b jmp 0x11b76762 */
  goto L_11b76762;
L_11b7675d:;
  /* 11b7675d or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_11b76762:;
  /* 11b76762 pop edi */
  EDI = (pop32());
  /* 11b76763 pop ebp */
  EBP = (pop32());
  /* 11b76764 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 11b76767 pop ebx */
  EBX = (pop32());
  /* 11b76768 je 0x11b7676f */
  if (C.zf) goto L_11b7676f;
  /* 11b7676a or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_11b7676f:;
  /* 11b7676f ret  */
  ESPCHK(0x11b766deu, _esp0);
  ESP += 4; return;
}

/* FUN_10006770 @ 0x11b76770 (137 bytes, 53 insns) */
void f_11b76770(void) {
  FTRACE(0x11b76770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76770 push ebx */
  push32((uint32_t)(EBX));
  /* 11b76771 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b76775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b76777 push esi */
  push32((uint32_t)(ESI));
  /* 11b76778 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11b7677b je 0x11b76780 */
  if (C.zf) goto L_11b76780;
  /* 11b7677d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7677f pop eax */
  EAX = (pop32());
L_11b76780:;
  /* 11b76780 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11b76783 je 0x11b76787 */
  if (C.zf) goto L_11b76787;
  /* 11b76785 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11b76787:;
  /* 11b76787 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11b7678a je 0x11b7678e */
  if (C.zf) goto L_11b7678e;
  /* 11b7678c or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11b7678e:;
  /* 11b7678e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11b76791 je 0x11b76795 */
  if (C.zf) goto L_11b76795;
  /* 11b76793 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_11b76795:;
  /* 11b76795 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11b76798 je 0x11b7679c */
  if (C.zf) goto L_11b7679c;
  /* 11b7679a or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_11b7679c:;
  /* 11b7679c test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 11b767a2 je 0x11b767a6 */
  if (C.zf) goto L_11b767a6;
  /* 11b767a4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11b767a6:;
  /* 11b767a6 mov ecx, ebx */
  ECX = (EBX);
  /* 11b767a8 mov edx, 0x300 */
  EDX = (0x300u);
  /* 11b767ad and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b767af mov esi, 0x200 */
  ESI = (0x200u);
  /* 11b767b4 je 0x11b767d3 */
  if (C.zf) goto L_11b767d3;
  /* 11b767b6 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b767bc je 0x11b767d0 */
  if (C.zf) goto L_11b767d0;
  /* 11b767be cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b767c0 je 0x11b767cb */
  if (C.zf) goto L_11b767cb;
  /* 11b767c2 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b767c4 jne 0x11b767d3 */
  if (!C.zf) goto L_11b767d3;
  /* 11b767c6 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11b767c9 jmp 0x11b767d3 */
  goto L_11b767d3;
L_11b767cb:;
  /* 11b767cb or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11b767ce jmp 0x11b767d3 */
  goto L_11b767d3;
L_11b767d0:;
  /* 11b767d0 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_11b767d3:;
  /* 11b767d3 mov ecx, ebx */
  ECX = (EBX);
  /* 11b767d5 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b767db je 0x11b767e9 */
  if (C.zf) goto L_11b767e9;
  /* 11b767dd cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b767e3 jne 0x11b767eb */
  if (!C.zf) goto L_11b767eb;
  /* 11b767e5 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11b767e7 jmp 0x11b767eb */
  goto L_11b767eb;
L_11b767e9:;
  /* 11b767e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_11b767eb:;
  /* 11b767eb pop esi */
  ESI = (pop32());
  /* 11b767ec test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 11b767f2 pop ebx */
  EBX = (pop32());
  /* 11b767f3 je 0x11b767f8 */
  if (C.zf) goto L_11b767f8;
  /* 11b767f5 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_11b767f8:;
  /* 11b767f8 ret  */
  ESPCHK(0x11b76770u, _esp0);
  ESP += 4; return;
}

/* FUN_100067f9 @ 0x11b767f9 (117 bytes, 46 insns) */
void f_11b767f9(void) {
  FTRACE(0x11b767f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b767f9 push ebp */
  push32((uint32_t)(EBP));
  /* 11b767fa mov ebp, esp */
  EBP = (ESP);
  /* 11b767fc push ecx */
  push32((uint32_t)(ECX));
  /* 11b767fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76800 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11b76803 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76809 ja 0x11b76817 */
  if ((!C.cf&&!C.zf)) goto L_11b76817;
  /* 11b7680b mov ecx, dword ptr [0x11b7e064] */
  ECX = (r32((uint32_t)(0x11b7e064)));
  /* 11b76811 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11b76815 jmp 0x11b76869 */
  goto L_11b76869;
L_11b76817:;
  /* 11b76817 mov ecx, eax */
  ECX = (EAX);
  /* 11b76819 push esi */
  push32((uint32_t)(ESI));
  /* 11b7681a mov esi, dword ptr [0x11b7e064] */
  ESI = (r32((uint32_t)(0x11b7e064)));
  /* 11b76820 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11b76823 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11b76826 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11b7682b pop esi */
  ESI = (pop32());
  /* 11b7682c je 0x11b7683c */
  if (C.zf) goto L_11b7683c;
  /* 11b7682e and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11b76832 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11b76835 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11b76838 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7683a jmp 0x11b76845 */
  goto L_11b76845;
L_11b7683c:;
  /* 11b7683c and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11b76840 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11b76843 push 1 */
  push32((uint32_t)(0x1u));
L_11b76845:;
  /* 11b76845 pop eax */
  EAX = (pop32());
  /* 11b76846 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11b76849 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7684b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7684d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7684f push ecx */
  push32((uint32_t)(ECX));
  /* 11b76850 push eax */
  push32((uint32_t)(EAX));
  /* 11b76851 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b76854 push eax */
  push32((uint32_t)(EAX));
  /* 11b76855 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b76857 call 0x11b7927c */
  push32(0x11b7685cu); f_11b7927c();
  /* 11b7685c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7685f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76861 jne 0x11b76865 */
  if (!C.zf) goto L_11b76865;
  /* 11b76863 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b76864 ret  */
  ESPCHK(0x11b767f9u, _esp0);
  ESP += 4; return;
L_11b76865:;
  /* 11b76865 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11b76869:;
  /* 11b76869 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11b7686c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7686d ret  */
  ESPCHK(0x11b767f9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000686e @ 0x11b7686e (111 bytes, 44 insns) */
void f_11b7686e(void) {
  FTRACE(0x11b7686eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7686e push ebx */
  push32((uint32_t)(EBX));
  /* 11b7686f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b76871 cmp dword ptr [0x11b814e0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b814e0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76877 jne 0x11b7688c */
  if (!C.zf) goto L_11b7688c;
  /* 11b76879 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b7687d cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76880 jl 0x11b768db */
  if ((C.sf!=C.of)) goto L_11b768db;
  /* 11b76882 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76885 jg 0x11b768db */
  if ((!C.zf&&C.sf==C.of)) goto L_11b768db;
  /* 11b76887 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7688a pop ebx */
  EBX = (pop32());
  /* 11b7688b ret  */
  ESPCHK(0x11b7686eu, _esp0);
  ESP += 4; return;
L_11b7688c:;
  /* 11b7688c push esi */
  push32((uint32_t)(ESI));
  /* 11b7688d mov esi, 0x11b8163c */
  ESI = (0x11b8163cu);
  /* 11b76892 push edi */
  push32((uint32_t)(EDI));
  /* 11b76893 push esi */
  push32((uint32_t)(ESI));
  /* 11b76894 call dword ptr [0x11b7b034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b034))), 0x11b7689au);
  /* 11b7689a cmp dword ptr [0x11b81638], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b81638))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b768a0 mov edi, dword ptr [0x11b7b03c] */
  EDI = (r32((uint32_t)(0x11b7b03c)));
  /* 11b768a6 je 0x11b768b6 */
  if (C.zf) goto L_11b768b6;
  /* 11b768a8 push esi */
  push32((uint32_t)(ESI));
  /* 11b768a9 call edi */
  call_ind((uint32_t)(EDI), 0x11b768abu);
  /* 11b768ab push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b768ad call 0x11b76534 */
  push32(0x11b768b2u); f_11b76534();
  /* 11b768b2 pop ecx */
  ECX = (pop32());
  /* 11b768b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b768b5 pop ebx */
  EBX = (pop32());
L_11b768b6:;
  /* 11b768b6 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b768ba call 0x11b768dd */
  push32(0x11b768bfu); f_11b768dd();
  /* 11b768bf test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b768c1 pop ecx */
  ECX = (pop32());
  /* 11b768c2 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11b768c6 je 0x11b768d2 */
  if (C.zf) goto L_11b768d2;
  /* 11b768c8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b768ca call 0x11b76595 */
  push32(0x11b768cfu); f_11b76595();
  /* 11b768cf pop ecx */
  ECX = (pop32());
  /* 11b768d0 jmp 0x11b768d5 */
  goto L_11b768d5;
L_11b768d2:;
  /* 11b768d2 push esi */
  push32((uint32_t)(ESI));
  /* 11b768d3 call edi */
  call_ind((uint32_t)(EDI), 0x11b768d5u);
L_11b768d5:;
  /* 11b768d5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b768d9 pop edi */
  EDI = (pop32());
  /* 11b768da pop esi */
  ESI = (pop32());
L_11b768db:;
  /* 11b768db pop ebx */
  EBX = (pop32());
  /* 11b768dc ret  */
  ESPCHK(0x11b7686eu, _esp0);
  ESP += 4; return;
}

/* FUN_100068dd @ 0x11b768dd (203 bytes, 78 insns) */
void f_11b768dd(void) {
  FTRACE(0x11b768ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b768dd push ebp */
  push32((uint32_t)(EBP));
  /* 11b768de mov ebp, esp */
  EBP = (ESP);
  /* 11b768e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b768e1 cmp dword ptr [0x11b814e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b814e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b768e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11b768e9 push esi */
  push32((uint32_t)(ESI));
  /* 11b768ea push edi */
  push32((uint32_t)(EDI));
  /* 11b768eb jne 0x11b7690a */
  if (!C.zf) goto L_11b7690a;
  /* 11b768ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b768f0 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b768f3 jl 0x11b769a3 */
  if ((C.sf!=C.of)) goto L_11b769a3;
  /* 11b768f9 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b768fc jg 0x11b769a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b769a3;
  /* 11b76902 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76905 jmp 0x11b769a3 */
  goto L_11b769a3;
L_11b7690a:;
  /* 11b7690a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7690d mov edi, 0x100 */
  EDI = (0x100u);
  /* 11b76912 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b76914 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76916 pop esi */
  ESI = (pop32());
  /* 11b76917 jge 0x11b7693e */
  if ((C.sf==C.of)) goto L_11b7693e;
  /* 11b76919 cmp dword ptr [0x11b7e058], esi */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7691f jle 0x11b7692c */
  if ((C.zf||C.sf!=C.of)) goto L_11b7692c;
  /* 11b76921 push esi */
  push32((uint32_t)(ESI));
  /* 11b76922 push ebx */
  push32((uint32_t)(EBX));
  /* 11b76923 call 0x11b767f9 */
  push32(0x11b76928u); f_11b767f9();
  /* 11b76928 pop ecx */
  ECX = (pop32());
  /* 11b76929 pop ecx */
  ECX = (pop32());
  /* 11b7692a jmp 0x11b76936 */
  goto L_11b76936;
L_11b7692c:;
  /* 11b7692c mov eax, dword ptr [0x11b7e064] */
  EAX = (r32((uint32_t)(0x11b7e064)));
  /* 11b76931 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11b76934 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11b76936:;
  /* 11b76936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76938 jne 0x11b7693e */
  if (!C.zf) goto L_11b7693e;
L_11b7693a:;
  /* 11b7693a mov eax, ebx */
  EAX = (EBX);
  /* 11b7693c jmp 0x11b769a3 */
  goto L_11b769a3;
L_11b7693e:;
  /* 11b7693e mov edx, dword ptr [0x11b7e064] */
  EDX = (r32((uint32_t)(0x11b7e064)));
  /* 11b76944 mov eax, ebx */
  EAX = (EBX);
  /* 11b76946 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b76949 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11b7694c test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11b76951 je 0x11b76962 */
  if (C.zf) goto L_11b76962;
  /* 11b76953 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11b76957 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b76959 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11b7695c mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11b7695f pop eax */
  EAX = (pop32());
  /* 11b76960 jmp 0x11b7696b */
  goto L_11b7696b;
L_11b76962:;
  /* 11b76962 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11b76966 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11b76969 mov eax, esi */
  EAX = (ESI);
L_11b7696b:;
  /* 11b7696b push esi */
  push32((uint32_t)(ESI));
  /* 11b7696c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7696e lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11b76971 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b76973 push ecx */
  push32((uint32_t)(ECX));
  /* 11b76974 push eax */
  push32((uint32_t)(EAX));
  /* 11b76975 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b76978 push eax */
  push32((uint32_t)(EAX));
  /* 11b76979 push edi */
  push32((uint32_t)(EDI));
  /* 11b7697a push dword ptr [0x11b814e0] */
  push32((uint32_t)(r32((uint32_t)(0x11b814e0))));
  /* 11b76980 call 0x11b793c5 */
  push32(0x11b76985u); f_11b793c5();
  /* 11b76985 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7698a je 0x11b7693a */
  if (C.zf) goto L_11b7693a;
  /* 11b7698c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7698e jne 0x11b76996 */
  if (!C.zf) goto L_11b76996;
  /* 11b76990 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b76994 jmp 0x11b769a3 */
  goto L_11b769a3;
L_11b76996:;
  /* 11b76996 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11b7699a movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b7699e shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b769a1 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11b769a3:;
  /* 11b769a3 pop edi */
  EDI = (pop32());
  /* 11b769a4 pop esi */
  ESI = (pop32());
  /* 11b769a5 pop ebx */
  EBX = (pop32());
  /* 11b769a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b769a7 ret  */
  ESPCHK(0x11b768ddu, _esp0);
  ESP += 4; return;
}

/* FUN_100069a8 @ 0x11b769a8 (73 bytes, 36 insns) */
void f_11b769a8(void) {
  FTRACE(0x11b769a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b769a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b769ac push esi */
  push32((uint32_t)(ESI));
  /* 11b769ad push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b769af cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b769b0 pop ecx */
  ECX = (pop32());
  /* 11b769b1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b769b3 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11b769b5 mov esi, eax */
  ESI = (EAX);
  /* 11b769b7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b769bb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b769bc idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b769be pop ecx */
  ECX = (pop32());
  /* 11b769bf mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b769c3 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b769c5 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b769c8 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b769ca not edx */
  EDX = (~(EDX));
  /* 11b769cc test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 11b769cf jne 0x11b769ed */
  if (!C.zf) goto L_11b769ed;
  /* 11b769d1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b769d2 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b769d5 jge 0x11b769e8 */
  if ((C.sf==C.of)) goto L_11b769e8;
  /* 11b769d7 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_11b769da:;
  /* 11b769da cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b769dd jne 0x11b769ed */
  if (!C.zf) goto L_11b769ed;
  /* 11b769df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b769e0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b769e3 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b769e6 jl 0x11b769da */
  if ((C.sf!=C.of)) goto L_11b769da;
L_11b769e8:;
  /* 11b769e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b769ea pop eax */
  EAX = (pop32());
  /* 11b769eb pop esi */
  ESI = (pop32());
  /* 11b769ec ret  */
  ESPCHK(0x11b769a8u, _esp0);
  ESP += 4; return;
L_11b769ed:;
  /* 11b769ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b769ef pop esi */
  ESI = (pop32());
  /* 11b769f0 ret  */
  ESPCHK(0x11b769a8u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f1 @ 0x11b769f1 (86 bytes, 43 insns) */
void f_11b769f1(void) {
  FTRACE(0x11b769f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b769f1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b769f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b769f6 push esi */
  push32((uint32_t)(ESI));
  /* 11b769f7 push edi */
  push32((uint32_t)(EDI));
  /* 11b769f8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b769fa mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b769fe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b769ff pop ecx */
  ECX = (pop32());
  /* 11b76a00 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b76a02 mov esi, eax */
  ESI = (EAX);
  /* 11b76a04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b76a08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b76a09 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b76a0b lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 11b76a0e push edi */
  push32((uint32_t)(EDI));
  /* 11b76a0f push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11b76a11 pop ecx */
  ECX = (pop32());
  /* 11b76a12 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b76a14 pop eax */
  EAX = (pop32());
  /* 11b76a15 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76a17 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b76a19 push eax */
  push32((uint32_t)(EAX));
  /* 11b76a1a push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11b76a1c call 0x11b79614 */
  push32(0x11b76a21u); f_11b79614();
  /* 11b76a21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76a24 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b76a25 js 0x11b76a43 */
  if (C.sf) goto L_11b76a43;
  /* 11b76a27 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_11b76a2a:;
  /* 11b76a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76a2c je 0x11b76a43 */
  if (C.zf) goto L_11b76a43;
  /* 11b76a2e push edi */
  push32((uint32_t)(EDI));
  /* 11b76a2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b76a31 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11b76a33 call 0x11b79614 */
  push32(0x11b76a38u); f_11b79614();
  /* 11b76a38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76a3b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b76a3c sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76a3f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b76a41 jge 0x11b76a2a */
  if ((C.sf==C.of)) goto L_11b76a2a;
L_11b76a43:;
  /* 11b76a43 pop edi */
  EDI = (pop32());
  /* 11b76a44 pop esi */
  ESI = (pop32());
  /* 11b76a45 pop ebx */
  EBX = (pop32());
  /* 11b76a46 ret  */
  ESPCHK(0x11b769f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a47 @ 0x11b76a47 (140 bytes, 71 insns) */
void f_11b76a47(void) {
  FTRACE(0x11b76a47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76a47 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76a48 mov ebp, esp */
  EBP = (ESP);
  /* 11b76a4a push ecx */
  push32((uint32_t)(ECX));
  /* 11b76a4b push ecx */
  push32((uint32_t)(ECX));
  /* 11b76a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b76a4f push ebx */
  push32((uint32_t)(EBX));
  /* 11b76a50 push esi */
  push32((uint32_t)(ESI));
  /* 11b76a51 push edi */
  push32((uint32_t)(EDI));
  /* 11b76a52 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 11b76a55 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b76a57 pop ecx */
  ECX = (pop32());
  /* 11b76a58 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b76a5c lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 11b76a5f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b76a61 mov eax, ebx */
  EAX = (EBX);
  /* 11b76a63 pop esi */
  ESI = (pop32());
  /* 11b76a64 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b76a65 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b76a67 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11b76a69 mov ecx, eax */
  ECX = (EAX);
  /* 11b76a6b mov eax, ebx */
  EAX = (EBX);
  /* 11b76a6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b76a6e idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b76a70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76a73 pop esi */
  ESI = (pop32());
  /* 11b76a74 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b76a76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b76a79 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11b76a7c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b76a7f sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76a81 pop edx */
  EDX = (pop32());
  /* 11b76a82 mov ecx, esi */
  ECX = (ESI);
  /* 11b76a84 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b76a86 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 11b76a88 je 0x11b76aab */
  if (C.zf) goto L_11b76aab;
  /* 11b76a8a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b76a8b push ebx */
  push32((uint32_t)(EBX));
  /* 11b76a8c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b76a8f call 0x11b769a8 */
  push32(0x11b76a94u); f_11b769a8();
  /* 11b76a94 pop ecx */
  ECX = (pop32());
  /* 11b76a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76a97 pop ecx */
  ECX = (pop32());
  /* 11b76a98 jne 0x11b76aa8 */
  if (!C.zf) goto L_11b76aa8;
  /* 11b76a9a push edi */
  push32((uint32_t)(EDI));
  /* 11b76a9b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b76a9e call 0x11b769f1 */
  push32(0x11b76aa3u); f_11b769f1();
  /* 11b76aa3 pop ecx */
  ECX = (pop32());
  /* 11b76aa4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b76aa7 pop ecx */
  ECX = (pop32());
L_11b76aa8:;
  /* 11b76aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11b76aab:;
  /* 11b76aab or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b76aae mov ecx, esi */
  ECX = (ESI);
  /* 11b76ab0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b76ab2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b76ab4 pop ecx */
  ECX = (pop32());
  /* 11b76ab5 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b76ab7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b76aba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b76abb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76abd jge 0x11b76acb */
  if ((C.sf==C.of)) goto L_11b76acb;
  /* 11b76abf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76ac2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76ac4 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11b76ac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b76ac9 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11b76acb:;
  /* 11b76acb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b76ace pop edi */
  EDI = (pop32());
  /* 11b76acf pop esi */
  ESI = (pop32());
  /* 11b76ad0 pop ebx */
  EBX = (pop32());
  /* 11b76ad1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b76ad2 ret  */
  ESPCHK(0x11b76a47u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad3 @ 0x11b76ad3 (27 bytes, 13 insns) */
void f_11b76ad3(void) {
  FTRACE(0x11b76ad3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76ad3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b76ad7 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b76adb push esi */
  push32((uint32_t)(ESI));
  /* 11b76adc push 3 */
  push32((uint32_t)(0x3u));
  /* 11b76ade sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76ae0 pop edx */
  EDX = (pop32());
L_11b76ae1:;
  /* 11b76ae1 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11b76ae3 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 11b76ae6 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76ae9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b76aea jne 0x11b76ae1 */
  if (!C.zf) goto L_11b76ae1;
  /* 11b76aec pop esi */
  ESI = (pop32());
  /* 11b76aed ret  */
  ESPCHK(0x11b76ad3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006aee @ 0x11b76aee (12 bytes, 8 insns) */
void f_11b76aee(void) {
  FTRACE(0x11b76aeeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76aee push edi */
  push32((uint32_t)(EDI));
  /* 11b76aef mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b76af3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b76af5 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b76af6 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b76af7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b76af8 pop edi */
  EDI = (pop32());
  /* 11b76af9 ret  */
  ESPCHK(0x11b76aeeu, _esp0);
  ESP += 4; return;
}

/* FUN_10006afa @ 0x11b76afa (27 bytes, 13 insns) */
void f_11b76afa(void) {
  FTRACE(0x11b76afau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76afa mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b76afe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11b76b00:;
  /* 11b76b00 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76b03 jne 0x11b76b12 */
  if (!C.zf) goto L_11b76b12;
  /* 11b76b05 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b76b06 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76b09 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76b0c jl 0x11b76b00 */
  if ((C.sf!=C.of)) goto L_11b76b00;
  /* 11b76b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b76b10 pop eax */
  EAX = (pop32());
  /* 11b76b11 ret  */
  ESPCHK(0x11b76afau, _esp0);
  ESP += 4; return;
L_11b76b12:;
  /* 11b76b12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b76b14 ret  */
  ESPCHK(0x11b76afau, _esp0);
  ESP += 4; return;
}

/* FUN_10006b15 @ 0x11b76b15 (141 bytes, 64 insns) */
void f_11b76b15(void) {
  FTRACE(0x11b76b15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76b15 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76b16 mov ebp, esp */
  EBP = (ESP);
  /* 11b76b18 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76b1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b76b1e push ebx */
  push32((uint32_t)(EBX));
  /* 11b76b1f push esi */
  push32((uint32_t)(ESI));
  /* 11b76b20 push edi */
  push32((uint32_t)(EDI));
  /* 11b76b21 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b76b23 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76b26 pop ebx */
  EBX = (pop32());
  /* 11b76b27 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11b76b2a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b76b2b mov ecx, ebx */
  ECX = (EBX);
  /* 11b76b2d mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11b76b34 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b76b36 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b76b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b76b3c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b76b3d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b76b3f and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 11b76b43 mov ecx, edx */
  ECX = (EDX);
  /* 11b76b45 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b76b47 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76b49 not esi */
  ESI = (~(ESI));
L_11b76b4b:;
  /* 11b76b4b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11b76b4d mov ecx, eax */
  ECX = (EAX);
  /* 11b76b4f and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11b76b51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b76b54 mov ecx, edx */
  ECX = (EDX);
  /* 11b76b56 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b76b58 or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11b76b5b mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11b76b5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b76b60 mov ecx, ebx */
  ECX = (EBX);
  /* 11b76b62 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76b65 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b76b67 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11b76b6a mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b76b6d jne 0x11b76b4b */
  if (!C.zf) goto L_11b76b4b;
  /* 11b76b6f mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 11b76b72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b76b74 pop ebx */
  EBX = (pop32());
  /* 11b76b75 mov esi, edi */
  ESI = (EDI);
  /* 11b76b77 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b76b79 pop ecx */
  ECX = (pop32());
  /* 11b76b7a shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_11b76b7d:;
  /* 11b76b7d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76b7f jl 0x11b76b90 */
  if ((C.sf!=C.of)) goto L_11b76b90;
  /* 11b76b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76b84 mov eax, ecx */
  EAX = (ECX);
  /* 11b76b86 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76b88 mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11b76b8b mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 11b76b8e jmp 0x11b76b97 */
  goto L_11b76b97;
L_11b76b90:;
  /* 11b76b90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76b93 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_11b76b97:;
  /* 11b76b97 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b76b98 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76b9b jns 0x11b76b7d */
  if (!C.sf) goto L_11b76b7d;
  /* 11b76b9d pop edi */
  EDI = (pop32());
  /* 11b76b9e pop esi */
  ESI = (pop32());
  /* 11b76b9f pop ebx */
  EBX = (pop32());
  /* 11b76ba0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b76ba1 ret  */
  ESPCHK(0x11b76b15u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba2 @ 0x11b76ba2 (364 bytes, 138 insns) */
void f_11b76ba2(void) {
  FTRACE(0x11b76ba2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76ba2 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76ba3 mov ebp, esp */
  EBP = (ESP);
  /* 11b76ba5 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76ba8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76bab push ebx */
  push32((uint32_t)(EBX));
  /* 11b76bac push esi */
  push32((uint32_t)(ESI));
  /* 11b76bad push edi */
  push32((uint32_t)(EDI));
  /* 11b76bae movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 11b76bb2 mov ebx, ecx */
  EBX = (ECX);
  /* 11b76bb4 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b76bba mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b76bbd mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11b76bc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b76bc3 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11b76bc6 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11b76bc9 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b76bcc and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 11b76bd2 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76bd8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b76bdb shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b76bde cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76be4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b76be7 jne 0x11b76c0f */
  if (!C.zf) goto L_11b76c0f;
  /* 11b76be9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76bec xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b76bee push eax */
  push32((uint32_t)(EAX));
  /* 11b76bef call 0x11b76afa */
  push32(0x11b76bf4u); f_11b76afa();
  /* 11b76bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76bf6 pop ecx */
  ECX = (pop32());
  /* 11b76bf7 jne 0x11b76cce */
  if (!C.zf) goto L_11b76cce;
  /* 11b76bfd lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76c00 push eax */
  push32((uint32_t)(EAX));
  /* 11b76c01 call 0x11b76aee */
  push32(0x11b76c06u); f_11b76aee();
  /* 11b76c06 pop ecx */
  ECX = (pop32());
L_11b76c07:;
  /* 11b76c07 push 2 */
  push32((uint32_t)(0x2u));
L_11b76c09:;
  /* 11b76c09 pop eax */
  EAX = (pop32());
  /* 11b76c0a jmp 0x11b76cd0 */
  goto L_11b76cd0;
L_11b76c0f:;
  /* 11b76c0f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76c12 push eax */
  push32((uint32_t)(EAX));
  /* 11b76c13 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b76c16 push eax */
  push32((uint32_t)(EAX));
  /* 11b76c17 call 0x11b76ad3 */
  push32(0x11b76c1cu); f_11b76ad3();
  /* 11b76c1c push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11b76c1f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76c22 push eax */
  push32((uint32_t)(EAX));
  /* 11b76c23 call 0x11b76a47 */
  push32(0x11b76c28u); f_11b76a47();
  /* 11b76c28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76c2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b76c2d je 0x11b76c30 */
  if (C.zf) goto L_11b76c30;
  /* 11b76c2f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11b76c30:;
  /* 11b76c30 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11b76c33 mov ecx, eax */
  ECX = (EAX);
  /* 11b76c35 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76c38 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76c3a jge 0x11b76c48 */
  if ((C.sf==C.of)) goto L_11b76c48;
  /* 11b76c3c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76c3f push eax */
  push32((uint32_t)(EAX));
  /* 11b76c40 call 0x11b76aee */
  push32(0x11b76c45u); f_11b76aee();
  /* 11b76c45 pop ecx */
  ECX = (pop32());
  /* 11b76c46 jmp 0x11b76c84 */
  goto L_11b76c84;
L_11b76c48:;
  /* 11b76c48 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76c4a jg 0x11b76c8b */
  if ((!C.zf&&C.sf==C.of)) goto L_11b76c8b;
  /* 11b76c4c sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76c4e mov esi, eax */
  ESI = (EAX);
  /* 11b76c50 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b76c53 push eax */
  push32((uint32_t)(EAX));
  /* 11b76c54 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76c57 push eax */
  push32((uint32_t)(EAX));
  /* 11b76c58 call 0x11b76ad3 */
  push32(0x11b76c5du); f_11b76ad3();
  /* 11b76c5d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76c60 push esi */
  push32((uint32_t)(ESI));
  /* 11b76c61 push eax */
  push32((uint32_t)(EAX));
  /* 11b76c62 call 0x11b76b15 */
  push32(0x11b76c67u); f_11b76b15();
  /* 11b76c67 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11b76c6a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76c6d push eax */
  push32((uint32_t)(EAX));
  /* 11b76c6e call 0x11b76a47 */
  push32(0x11b76c73u); f_11b76a47();
  /* 11b76c73 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 11b76c76 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b76c77 push eax */
  push32((uint32_t)(EAX));
  /* 11b76c78 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76c7b push eax */
  push32((uint32_t)(EAX));
  /* 11b76c7c call 0x11b76b15 */
  push32(0x11b76c81u); f_11b76b15();
  /* 11b76c81 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b76c84:;
  /* 11b76c84 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b76c86 jmp 0x11b76c07 */
  goto L_11b76c07;
L_11b76c8b:;
  /* 11b76c8b cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76c8d jl 0x11b76cb7 */
  if ((C.sf!=C.of)) goto L_11b76cb7;
  /* 11b76c8f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76c92 push eax */
  push32((uint32_t)(EAX));
  /* 11b76c93 call 0x11b76aee */
  push32(0x11b76c98u); f_11b76aee();
  /* 11b76c98 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11b76c9b or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11b76c9f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76ca2 push eax */
  push32((uint32_t)(EAX));
  /* 11b76ca3 call 0x11b76b15 */
  push32(0x11b76ca8u); f_11b76b15();
  /* 11b76ca8 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11b76cab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76cae add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76cb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b76cb2 jmp 0x11b76c09 */
  goto L_11b76c09;
L_11b76cb7:;
  /* 11b76cb7 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11b76cba mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11b76cbd and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11b76cc1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76cc4 push eax */
  push32((uint32_t)(EAX));
  /* 11b76cc5 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76cc7 call 0x11b76b15 */
  push32(0x11b76cccu); f_11b76b15();
  /* 11b76ccc pop ecx */
  ECX = (pop32());
  /* 11b76ccd pop ecx */
  ECX = (pop32());
L_11b76cce:;
  /* 11b76cce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b76cd0:;
  /* 11b76cd0 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11b76cd2 pop ecx */
  ECX = (pop32());
  /* 11b76cd3 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76cd6 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 11b76cd9 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b76cdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76cde neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b76ce0 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76ce2 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b76ce8 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11b76cea or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11b76ced cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76cf0 jne 0x11b76cff */
  if (!C.zf) goto L_11b76cff;
  /* 11b76cf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b76cf5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b76cf8 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11b76cfb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b76cfd jmp 0x11b76d09 */
  goto L_11b76d09;
L_11b76cff:;
  /* 11b76cff cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76d02 jne 0x11b76d09 */
  if (!C.zf) goto L_11b76d09;
  /* 11b76d04 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b76d07 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11b76d09:;
  /* 11b76d09 pop edi */
  EDI = (pop32());
  /* 11b76d0a pop esi */
  ESI = (pop32());
  /* 11b76d0b pop ebx */
  EBX = (pop32());
  /* 11b76d0c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b76d0d ret  */
  ESPCHK(0x11b76ba2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d0e @ 0x11b76d0e (22 bytes, 6 insns) */
void f_11b76d0e(void) {
  FTRACE(0x11b76d0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76d0e push 0x11b7e270 */
  push32((uint32_t)(0x11b7e270u));
  /* 11b76d13 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11b76d17 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11b76d1b call 0x11b76ba2 */
  push32(0x11b76d20u); f_11b76ba2();
  /* 11b76d20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76d23 ret  */
  ESPCHK(0x11b76d0eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006d24 @ 0x11b76d24 (22 bytes, 6 insns) */
void f_11b76d24(void) {
  FTRACE(0x11b76d24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76d24 push 0x11b7e288 */
  push32((uint32_t)(0x11b7e288u));
  /* 11b76d29 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11b76d2d push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11b76d31 call 0x11b76ba2 */
  push32(0x11b76d36u); f_11b76ba2();
  /* 11b76d36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76d39 ret  */
  ESPCHK(0x11b76d24u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d3a @ 0x11b76d3a (45 bytes, 21 insns) */
void f_11b76d3a(void) {
  FTRACE(0x11b76d3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76d3a push ebp */
  push32((uint32_t)(EBP));
  /* 11b76d3b mov ebp, esp */
  EBP = (ESP);
  /* 11b76d3d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b76d42 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d43 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d44 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d45 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d46 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b76d49 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11b76d4c push eax */
  push32((uint32_t)(EAX));
  /* 11b76d4d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76d50 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d51 call 0x11b797b5 */
  push32(0x11b76d56u); f_11b797b5();
  /* 11b76d56 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b76d59 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76d5c push eax */
  push32((uint32_t)(EAX));
  /* 11b76d5d call 0x11b76d0e */
  push32(0x11b76d62u); f_11b76d0e();
  /* 11b76d62 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76d65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b76d66 ret  */
  ESPCHK(0x11b76d3au, _esp0);
  ESP += 4; return;
}

/* FUN_10006d67 @ 0x11b76d67 (45 bytes, 21 insns) */
void f_11b76d67(void) {
  FTRACE(0x11b76d67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76d67 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76d68 mov ebp, esp */
  EBP = (ESP);
  /* 11b76d6a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b76d6f push eax */
  push32((uint32_t)(EAX));
  /* 11b76d70 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d71 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d72 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d73 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b76d76 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11b76d79 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d7a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76d7d push eax */
  push32((uint32_t)(EAX));
  /* 11b76d7e call 0x11b797b5 */
  push32(0x11b76d83u); f_11b797b5();
  /* 11b76d83 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b76d86 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76d89 push eax */
  push32((uint32_t)(EAX));
  /* 11b76d8a call 0x11b76d24 */
  push32(0x11b76d8fu); f_11b76d24();
  /* 11b76d8f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76d92 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b76d93 ret  */
  ESPCHK(0x11b76d67u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d94 @ 0x11b76d94 (119 bytes, 57 insns) */
void f_11b76d94(void) {
  FTRACE(0x11b76d94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76d94 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76d95 mov ebp, esp */
  EBP = (ESP);
  /* 11b76d97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b76d9a push ebx */
  push32((uint32_t)(EBX));
  /* 11b76d9b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b76d9e push esi */
  push32((uint32_t)(ESI));
  /* 11b76d9f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76da2 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b76da5 push edi */
  push32((uint32_t)(EDI));
  /* 11b76da6 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 11b76da9 mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 11b76dac test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b76dae mov eax, edi */
  EAX = (EDI);
  /* 11b76db0 jle 0x11b76dd1 */
  if ((C.zf||C.sf!=C.of)) goto L_11b76dd1;
  /* 11b76db2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b76db5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b76db7:;
  /* 11b76db7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b76db9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b76dbb je 0x11b76dc3 */
  if (C.zf) goto L_11b76dc3;
  /* 11b76dbd movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 11b76dc0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b76dc1 jmp 0x11b76dc6 */
  goto L_11b76dc6;
L_11b76dc3:;
  /* 11b76dc3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b76dc5 pop edx */
  EDX = (pop32());
L_11b76dc6:;
  /* 11b76dc6 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b76dc8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b76dc9 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11b76dcc jne 0x11b76db7 */
  if (!C.zf) goto L_11b76db7;
  /* 11b76dce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11b76dd1:;
  /* 11b76dd1 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11b76dd4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b76dd6 jl 0x11b76dea */
  if ((C.sf!=C.of)) goto L_11b76dea;
  /* 11b76dd8 cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76ddb jl 0x11b76dea */
  if ((C.sf!=C.of)) goto L_11b76dea;
L_11b76ddd:;
  /* 11b76ddd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b76dde cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76de1 jne 0x11b76de8 */
  if (!C.zf) goto L_11b76de8;
  /* 11b76de3 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11b76de6 jmp 0x11b76ddd */
  goto L_11b76ddd;
L_11b76de8:;
  /* 11b76de8 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11b76dea:;
  /* 11b76dea cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b76ded jne 0x11b76df4 */
  if (!C.zf) goto L_11b76df4;
  /* 11b76def inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 11b76df2 jmp 0x11b76e06 */
  goto L_11b76e06;
L_11b76df4:;
  /* 11b76df4 push edi */
  push32((uint32_t)(EDI));
  /* 11b76df5 call 0x11b773b0 */
  push32(0x11b76dfau); f_11b773b0();
  /* 11b76dfa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b76dfb push eax */
  push32((uint32_t)(EAX));
  /* 11b76dfc push edi */
  push32((uint32_t)(EDI));
  /* 11b76dfd push esi */
  push32((uint32_t)(ESI));
  /* 11b76dfe call 0x11b77070 */
  push32(0x11b76e03u); f_11b77070();
  /* 11b76e03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b76e06:;
  /* 11b76e06 pop edi */
  EDI = (pop32());
  /* 11b76e07 pop esi */
  ESI = (pop32());
  /* 11b76e08 pop ebx */
  EBX = (pop32());
  /* 11b76e09 pop ebp */
  EBP = (pop32());
  /* 11b76e0a ret  */
  ESPCHK(0x11b76d94u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e0b @ 0x11b76e0b (92 bytes, 41 insns) */
void f_11b76e0b(void) {
  FTRACE(0x11b76e0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76e0b push ebp */
  push32((uint32_t)(EBP));
  /* 11b76e0c mov ebp, esp */
  EBP = (ESP);
  /* 11b76e0e sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76e11 push esi */
  push32((uint32_t)(ESI));
  /* 11b76e12 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b76e15 push edi */
  push32((uint32_t)(EDI));
  /* 11b76e16 push eax */
  push32((uint32_t)(EAX));
  /* 11b76e17 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b76e1a push eax */
  push32((uint32_t)(EAX));
  /* 11b76e1b call 0x11b76e67 */
  push32(0x11b76e20u); f_11b76e67();
  /* 11b76e20 pop ecx */
  ECX = (pop32());
  /* 11b76e21 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11b76e24 pop ecx */
  ECX = (pop32());
  /* 11b76e25 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 11b76e28 push eax */
  push32((uint32_t)(EAX));
  /* 11b76e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b76e2b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b76e2d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b76e30 mov edi, esp */
  EDI = (ESP);
  /* 11b76e32 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b76e33 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b76e34 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 11b76e36 call 0x11b79c86 */
  push32(0x11b76e3bu); f_11b79c86();
  /* 11b76e3b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b76e3e mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11b76e41 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11b76e44 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11b76e48 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b76e4a movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11b76e4e mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11b76e51 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11b76e54 push eax */
  push32((uint32_t)(EAX));
  /* 11b76e55 push edi */
  push32((uint32_t)(EDI));
  /* 11b76e56 call 0x11b76f20 */
  push32(0x11b76e5bu); f_11b76f20();
  /* 11b76e5b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76e5e mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 11b76e61 mov eax, esi */
  EAX = (ESI);
  /* 11b76e63 pop edi */
  EDI = (pop32());
  /* 11b76e64 pop esi */
  ESI = (pop32());
  /* 11b76e65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b76e66 ret  */
  ESPCHK(0x11b76e0bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006e67 @ 0x11b76e67 (182 bytes, 70 insns) */
void f_11b76e67(void) {
  FTRACE(0x11b76e67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76e67 push ebp */
  push32((uint32_t)(EBP));
  /* 11b76e68 mov ebp, esp */
  EBP = (ESP);
  /* 11b76e6a push ecx */
  push32((uint32_t)(ECX));
  /* 11b76e6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b76e6e push ebx */
  push32((uint32_t)(EBX));
  /* 11b76e6f push esi */
  push32((uint32_t)(ESI));
  /* 11b76e70 push edi */
  push32((uint32_t)(EDI));
  /* 11b76e71 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11b76e75 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 11b76e7a mov ecx, eax */
  ECX = (EAX);
  /* 11b76e7c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b76e81 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b76e84 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b76e86 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b76e89 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b76e8c mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 11b76e8e movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 11b76e91 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11b76e96 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b76e9b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b76e9d mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11b76ea0 je 0x11b76eb5 */
  if (C.zf) goto L_11b76eb5;
  /* 11b76ea2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76ea4 je 0x11b76eae */
  if (C.zf) goto L_11b76eae;
  /* 11b76ea6 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 11b76eac jmp 0x11b76ed6 */
  goto L_11b76ed6;
L_11b76eae:;
  /* 11b76eae mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 11b76eb3 jmp 0x11b76ed6 */
  goto L_11b76ed6;
L_11b76eb5:;
  /* 11b76eb5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b76eb7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76eb9 jne 0x11b76ecd */
  if (!C.zf) goto L_11b76ecd;
  /* 11b76ebb cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b76ebd jne 0x11b76ecd */
  if (!C.zf) goto L_11b76ecd;
  /* 11b76ebf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76ec2 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11b76ec5 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11b76ec7 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 11b76ecb jmp 0x11b76f18 */
  goto L_11b76f18;
L_11b76ecd:;
  /* 11b76ecd lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 11b76ed3 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11b76ed6:;
  /* 11b76ed6 mov ecx, edx */
  ECX = (EDX);
  /* 11b76ed8 shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 11b76edb shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11b76ede or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b76ee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b76ee3 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 11b76ee6 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 11b76ee9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b76eec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b76eee:;
  /* 11b76eee test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 11b76ef0 jne 0x11b76f0f */
  if (!C.zf) goto L_11b76f0f;
  /* 11b76ef2 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b76ef4 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76ef6 mov ebx, edx */
  EBX = (EDX);
  /* 11b76ef8 shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 11b76efb or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 11b76efd lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 11b76f00 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b76f02 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11b76f05 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76f0b mov ecx, ebx */
  ECX = (EBX);
  /* 11b76f0d jmp 0x11b76eee */
  goto L_11b76eee;
L_11b76f0f:;
  /* 11b76f0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b76f12 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b76f14 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_11b76f18:;
  /* 11b76f18 pop edi */
  EDI = (pop32());
  /* 11b76f19 pop esi */
  ESI = (pop32());
  /* 11b76f1a pop ebx */
  EBX = (pop32());
  /* 11b76f1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b76f1c ret  */
  ESPCHK(0x11b76e67u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f20 @ 0x11b76f20 (7 bytes, 3 insns) */
void f_11b76f20(void) {
  FTRACE(0x11b76f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76f20 push edi */
  push32((uint32_t)(EDI));
  /* 11b76f21 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b76f25 jmp 0x11b76f91 */
  jmp_ind(0x11b76f91u); return;
}

/* FUN_10006f30 @ 0x11b76f30 (224 bytes, 84 insns) */
void f_11b76f30(void) {
  FTRACE(0x11b76f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b76f30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b76f34 push edi */
  push32((uint32_t)(EDI));
  /* 11b76f35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b76f3b je 0x11b76f4c */
  if (C.zf) goto L_11b76f4c;
L_11b76f3d:;
  /* 11b76f3d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b76f3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b76f40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b76f42 je 0x11b76f7f */
  if (C.zf) goto L_11b76f7f;
  /* 11b76f44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b76f4a jne 0x11b76f3d */
  if (!C.zf) goto L_11b76f3d;
L_11b76f4c:;
  /* 11b76f4c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b76f4e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b76f53 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76f55 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b76f58 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b76f5a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76f5d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b76f62 je 0x11b76f4c */
  if (C.zf) goto L_11b76f4c;
  /* 11b76f64 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b76f67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b76f69 je 0x11b76f8e */
  if (C.zf) goto L_11b76f8e;
  /* 11b76f6b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b76f6d je 0x11b76f89 */
  if (C.zf) goto L_11b76f89;
  /* 11b76f6f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b76f74 je 0x11b76f84 */
  if (C.zf) goto L_11b76f84;
  /* 11b76f76 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b76f7b je 0x11b76f7f */
  if (C.zf) goto L_11b76f7f;
  /* 11b76f7d jmp 0x11b76f4c */
  goto L_11b76f4c;
L_11b76f7f:;
  /* 11b76f7f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11b76f82 jmp 0x11b76f91 */
  goto L_11b76f91;
L_11b76f84:;
  /* 11b76f84 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11b76f87 jmp 0x11b76f91 */
  goto L_11b76f91;
L_11b76f89:;
  /* 11b76f89 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11b76f8c jmp 0x11b76f91 */
  goto L_11b76f91;
L_11b76f8e:;
  /* 11b76f8e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11b76f91:;
  /* 11b76f91 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b76f95 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b76f9b je 0x11b76fb6 */
  if (C.zf) goto L_11b76fb6;
L_11b76f9d:;
  /* 11b76f9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b76f9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b76fa0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b76fa2 je 0x11b77008 */
  if (C.zf) goto L_11b77008;
  /* 11b76fa4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b76fa6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b76fa7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b76fad jne 0x11b76f9d */
  if (!C.zf) goto L_11b76f9d;
  /* 11b76faf jmp 0x11b76fb6 */
  goto L_11b76fb6;
L_11b76fb1:;
  /* 11b76fb1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b76fb3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b76fb6:;
  /* 11b76fb6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b76fbb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b76fbd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76fbf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b76fc2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b76fc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b76fc6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b76fc9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b76fce je 0x11b76fb1 */
  if (C.zf) goto L_11b76fb1;
  /* 11b76fd0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b76fd2 je 0x11b77008 */
  if (C.zf) goto L_11b77008;
  /* 11b76fd4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b76fd6 je 0x11b76fff */
  if (C.zf) goto L_11b76fff;
  /* 11b76fd8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b76fde je 0x11b76ff2 */
  if (C.zf) goto L_11b76ff2;
  /* 11b76fe0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b76fe6 je 0x11b76fea */
  if (C.zf) goto L_11b76fea;
  /* 11b76fe8 jmp 0x11b76fb1 */
  goto L_11b76fb1;
L_11b76fea:;
  /* 11b76fea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b76fec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b76ff0 pop edi */
  EDI = (pop32());
  /* 11b76ff1 ret  */
  ESPCHK(0x11b76f30u, _esp0);
  ESP += 4; return;
L_11b76ff2:;
  /* 11b76ff2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11b76ff5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b76ff9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11b76ffd pop edi */
  EDI = (pop32());
  /* 11b76ffe ret  */
  ESPCHK(0x11b76f30u, _esp0);
  ESP += 4; return;
L_11b76fff:;
  /* 11b76fff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11b77002 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b77006 pop edi */
  EDI = (pop32());
  /* 11b77007 ret  */
  ESPCHK(0x11b76f30u, _esp0);
  ESP += 4; return;
L_11b77008:;
  /* 11b77008 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b7700a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b7700e pop edi */
  EDI = (pop32());
  /* 11b7700f ret  */
  ESPCHK(0x11b76f30u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11b77010 (88 bytes, 40 insns) */
void f_11b77010(void) {
  FTRACE(0x11b77010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77010 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b77014 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b77018 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b7701a je 0x11b77063 */
  if (C.zf) goto L_11b77063;
  /* 11b7701c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7701e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11b77022 push edi */
  push32((uint32_t)(EDI));
  /* 11b77023 mov edi, ecx */
  EDI = (ECX);
  /* 11b77025 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77028 jb 0x11b77057 */
  if (C.cf) goto L_11b77057;
  /* 11b7702a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b7702c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11b7702f je 0x11b77039 */
  if (C.zf) goto L_11b77039;
  /* 11b77031 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11b77033:;
  /* 11b77033 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b77035 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b77036 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b77037 jne 0x11b77033 */
  if (!C.zf) goto L_11b77033;
L_11b77039:;
  /* 11b77039 mov ecx, eax */
  ECX = (EAX);
  /* 11b7703b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b7703e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77040 mov ecx, eax */
  ECX = (EAX);
  /* 11b77042 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b77045 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77047 mov ecx, edx */
  ECX = (EDX);
  /* 11b77049 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b7704c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b7704f je 0x11b77057 */
  if (C.zf) goto L_11b77057;
  /* 11b77051 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b77053 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b77055 je 0x11b7705d */
  if (C.zf) goto L_11b7705d;
L_11b77057:;
  /* 11b77057 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b77059 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b7705a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b7705b jne 0x11b77057 */
  if (!C.zf) goto L_11b77057;
L_11b7705d:;
  /* 11b7705d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b77061 pop edi */
  EDI = (pop32());
  /* 11b77062 ret  */
  ESPCHK(0x11b77010u, _esp0);
  ESP += 4; return;
L_11b77063:;
  /* 11b77063 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b77067 ret  */
  ESPCHK(0x11b77010u, _esp0);
  ESP += 4; return;
}

/* FUN_10007070 @ 0x11b77070 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11b77070(void) {
  FTRACE(0x11b77070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77070 push ebp */
  push32((uint32_t)(EBP));
  /* 11b77071 mov ebp, esp */
  EBP = (ESP);
  /* 11b77073 push edi */
  push32((uint32_t)(EDI));
  /* 11b77074 push esi */
  push32((uint32_t)(ESI));
  /* 11b77075 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b77078 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b7707b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7707e mov eax, ecx */
  EAX = (ECX);
  /* 11b77080 mov edx, ecx */
  EDX = (ECX);
  /* 11b77082 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77084 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77086 jbe 0x11b77090 */
  if ((C.cf||C.zf)) goto L_11b77090;
  /* 11b77088 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7708a jb 0x11b77208 */
  if (C.cf) goto L_11b77208;
L_11b77090:;
  /* 11b77090 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b77096 jne 0x11b770ac */
  if (!C.zf) goto L_11b770ac;
  /* 11b77098 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b7709b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b7709e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b770a1 jb 0x11b770cc */
  if (C.cf) goto L_11b770cc;
  /* 11b770a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b770a5 jmp dword ptr [edx*4 + 0x11b771b8] */
  switch (EDX) {
    case 0: goto L_11b771c8;
    case 1: goto L_11b771d0;
    case 2: goto L_11b771dc;
    case 3: goto L_11b771f0;
    default: x86_unimpl("switch@0x11b770a5 out of table"); return;
  }
L_11b770ac:;
  /* 11b770ac mov eax, edi */
  EAX = (EDI);
  /* 11b770ae mov edx, 3 */
  EDX = (0x3u);
  /* 11b770b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b770b6 jb 0x11b770c4 */
  if (C.cf) goto L_11b770c4;
  /* 11b770b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b770bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b770bd jmp dword ptr [eax*4 + 0x11b770d0] */
  switch (EAX) {
    case 1: goto L_11b770e0;
    case 2: goto L_11b7710c;
    case 3: goto L_11b77130;
    default: x86_unimpl("switch@0x11b770bd out of table"); return;
  }
L_11b770c4:;
  /* 11b770c4 jmp dword ptr [ecx*4 + 0x11b771c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11b771c8)))); return;
  /* 11b770cb nop  */
  /* nop */
L_11b770cc:;
  /* 11b770cc jmp dword ptr [ecx*4 + 0x11b7714c] */
  switch (ECX) {
    case 0: goto L_11b771af;
    case 1: goto L_11b7719c;
    case 2: goto L_11b77194;
    case 3: goto L_11b7718c;
    case 4: goto L_11b77184;
    case 5: goto L_11b7717c;
    case 6: goto L_11b77174;
    case 7: goto L_11b7716c;
    default: x86_unimpl("switch@0x11b770cc out of table"); return;
  }
  /* 11b770d3 nop  */
  /* nop */
L_11b770e0:;
  /* 11b770e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b770e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b770e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b770e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b770e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b770ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b770ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b770f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b770f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b770f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b770fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b770fe jb 0x11b770cc */
  if (C.cf) goto L_11b770cc;
  /* 11b77100 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77102 jmp dword ptr [edx*4 + 0x11b771b8] */
  switch (EDX) {
    case 0: goto L_11b771c8;
    case 1: goto L_11b771d0;
    case 2: goto L_11b771dc;
    case 3: goto L_11b771f0;
    default: x86_unimpl("switch@0x11b77102 out of table"); return;
  }
  /* 11b77109 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b7710c:;
  /* 11b7710c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b7710e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77110 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b77112 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b77115 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77118 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b7711b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7711e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77121 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77124 jb 0x11b770cc */
  if (C.cf) goto L_11b770cc;
  /* 11b77126 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77128 jmp dword ptr [edx*4 + 0x11b771b8] */
  switch (EDX) {
    case 0: goto L_11b771c8;
    case 1: goto L_11b771d0;
    case 2: goto L_11b771dc;
    case 3: goto L_11b771f0;
    default: x86_unimpl("switch@0x11b77128 out of table"); return;
  }
  /* 11b7712f nop  */
  /* nop */
L_11b77130:;
  /* 11b77130 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b77132 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77134 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b77136 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b77137 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b7713a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b7713b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7713e jb 0x11b770cc */
  if (C.cf) goto L_11b770cc;
  /* 11b77140 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77142 jmp dword ptr [edx*4 + 0x11b771b8] */
  switch (EDX) {
    case 0: goto L_11b771c8;
    case 1: goto L_11b771d0;
    case 2: goto L_11b771dc;
    case 3: goto L_11b771f0;
    default: x86_unimpl("switch@0x11b77142 out of table"); return;
  }
  /* 11b77149 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b7716c:;
  /* 11b7716c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11b77170 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11b77174:;
  /* 11b77174 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11b77178 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11b7717c:;
  /* 11b7717c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11b77180 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11b77184:;
  /* 11b77184 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11b77188 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11b7718c:;
  /* 11b7718c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11b77190 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11b77194:;
  /* 11b77194 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11b77198 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11b7719c:;
  /* 11b7719c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11b771a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11b771a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b771ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b771ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b771af:;
  /* 11b771af jmp dword ptr [edx*4 + 0x11b771b8] */
  switch (EDX) {
    case 0: goto L_11b771c8;
    case 1: goto L_11b771d0;
    case 2: goto L_11b771dc;
    case 3: goto L_11b771f0;
    default: x86_unimpl("switch@0x11b771af out of table"); return;
  }
  /* 11b771b6 mov edi, edi */
  EDI = (EDI);
L_11b771c8:;
  /* 11b771c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b771cb pop esi */
  ESI = (pop32());
  /* 11b771cc pop edi */
  EDI = (pop32());
  /* 11b771cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b771ce ret  */
  ESPCHK(0x11b77070u, _esp0);
  ESP += 4; return;
  /* 11b771cf nop  */
  /* nop */
L_11b771d0:;
  /* 11b771d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b771d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b771d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b771d7 pop esi */
  ESI = (pop32());
  /* 11b771d8 pop edi */
  EDI = (pop32());
  /* 11b771d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b771da ret  */
  ESPCHK(0x11b77070u, _esp0);
  ESP += 4; return;
  /* 11b771db nop  */
  /* nop */
L_11b771dc:;
  /* 11b771dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b771de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b771e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b771e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b771e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b771e9 pop esi */
  ESI = (pop32());
  /* 11b771ea pop edi */
  EDI = (pop32());
  /* 11b771eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b771ec ret  */
  ESPCHK(0x11b77070u, _esp0);
  ESP += 4; return;
  /* 11b771ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b771f0:;
  /* 11b771f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b771f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b771f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b771f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b771fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b771fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b77200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77203 pop esi */
  ESI = (pop32());
  /* 11b77204 pop edi */
  EDI = (pop32());
  /* 11b77205 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77206 ret  */
  ESPCHK(0x11b77070u, _esp0);
  ESP += 4; return;
  /* 11b77207 nop  */
  /* nop */
L_11b77208:;
  /* 11b77208 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11b7720c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11b77210 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b77216 jne 0x11b7723c */
  if (!C.zf) goto L_11b7723c;
  /* 11b77218 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b7721b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b7721e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77221 jb 0x11b77230 */
  if (C.cf) goto L_11b77230;
  /* 11b77223 std  */
  C.df=1;
  /* 11b77224 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77226 cld  */
  C.df=0;
  /* 11b77227 jmp dword ptr [edx*4 + 0x11b77350] */
  switch (EDX) {
    case 0: goto L_11b77360;
    case 1: goto L_11b77368;
    case 2: goto L_11b77378;
    case 3: goto L_11b7738c;
    default: x86_unimpl("switch@0x11b77227 out of table"); return;
  }
  /* 11b7722e mov edi, edi */
  EDI = (EDI);
L_11b77230:;
  /* 11b77230 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b77232 jmp dword ptr [ecx*4 + 0x11b77300] */
  switch (ECX) {
    case 0: goto L_11b77347;
    default: x86_unimpl("switch@0x11b77232 out of table"); return;
  }
  /* 11b77239 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b7723c:;
  /* 11b7723c mov eax, edi */
  EAX = (EDI);
  /* 11b7723e mov edx, 3 */
  EDX = (0x3u);
  /* 11b77243 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77246 jb 0x11b77254 */
  if (C.cf) goto L_11b77254;
  /* 11b77248 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b7724b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7724d jmp dword ptr [eax*4 + 0x11b77258] */
  switch (EAX) {
    case 1: goto L_11b77268;
    case 2: goto L_11b77288;
    case 3: goto L_11b772b0;
    default: x86_unimpl("switch@0x11b7724d out of table"); return;
  }
L_11b77254:;
  /* 11b77254 jmp dword ptr [ecx*4 + 0x11b77350] */
  switch (ECX) {
    case 0: goto L_11b77360;
    case 1: goto L_11b77368;
    case 2: goto L_11b77378;
    case 3: goto L_11b7738c;
    default: x86_unimpl("switch@0x11b77254 out of table"); return;
  }
  /* 11b7725b nop  */
  /* nop */
L_11b77268:;
  /* 11b77268 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b7726b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b7726d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b77270 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b77271 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77274 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b77275 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77278 jb 0x11b77230 */
  if (C.cf) goto L_11b77230;
  /* 11b7727a std  */
  C.df=1;
  /* 11b7727b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b7727d cld  */
  C.df=0;
  /* 11b7727e jmp dword ptr [edx*4 + 0x11b77350] */
  switch (EDX) {
    case 0: goto L_11b77360;
    case 1: goto L_11b77368;
    case 2: goto L_11b77378;
    case 3: goto L_11b7738c;
    default: x86_unimpl("switch@0x11b7727e out of table"); return;
  }
  /* 11b77285 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b77288:;
  /* 11b77288 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b7728b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b7728d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b77290 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b77293 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77296 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b77299 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7729c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7729f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b772a2 jb 0x11b77230 */
  if (C.cf) goto L_11b77230;
  /* 11b772a4 std  */
  C.df=1;
  /* 11b772a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b772a7 cld  */
  C.df=0;
  /* 11b772a8 jmp dword ptr [edx*4 + 0x11b77350] */
  switch (EDX) {
    case 0: goto L_11b77360;
    case 1: goto L_11b77368;
    case 2: goto L_11b77378;
    case 3: goto L_11b7738c;
    default: x86_unimpl("switch@0x11b772a8 out of table"); return;
  }
  /* 11b772af nop  */
  /* nop */
L_11b772b0:;
  /* 11b772b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b772b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b772b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b772b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b772bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b772be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b772c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b772c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b772c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b772ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b772cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b772d0 jb 0x11b77230 */
  if (C.cf) goto L_11b77230;
  /* 11b772d6 std  */
  C.df=1;
  /* 11b772d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b772d9 cld  */
  C.df=0;
  /* 11b772da jmp dword ptr [edx*4 + 0x11b77350] */
  switch (EDX) {
    case 0: goto L_11b77360;
    case 1: goto L_11b77368;
    case 2: goto L_11b77378;
    case 3: goto L_11b7738c;
    default: x86_unimpl("switch@0x11b772da out of table"); return;
  }
  /* 11b772e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11b772e4 add al, 0x73 */
  { uint32_t _a=(AL),_b=(0x73u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b772e6 mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b772e8 or al, 0x73 */
  { uint32_t _r=(AL)|(0x73u); AL = (_r); fl_logic(_r,8); }
  /* 11b772ea mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b772ec adc al, 0x73 */
  { uint32_t _a=(AL),_b=(0x73u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b772ee mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b772f0 sbb al, 0x73 */
  { uint32_t _a=(AL),_b=(0x73u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b772f2 mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b772f4 and al, 0x73 */
  { uint32_t _r=(AL)&(0x73u); AL = (_r); fl_logic(_r,8); }
  /* 11b772f6 mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b772f8 sub al, 0x73 */
  { uint32_t _a=(AL),_b=(0x73u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b772fa mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b772fc xor al, 0x73 */
  { uint32_t _r=(AL)^(0x73u); AL = (_r); fl_logic(_r,8); }
  /* 11b772fe mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b77304 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11b77308 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11b7730c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11b77310 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11b77314 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11b77318 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11b7731c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11b77320 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11b77324 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11b77328 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11b7732c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11b77330 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11b77334 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11b77338 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11b7733c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b77343 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77345 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b77347:;
  /* 11b77347 jmp dword ptr [edx*4 + 0x11b77350] */
  switch (EDX) {
    case 0: goto L_11b77360;
    case 1: goto L_11b77368;
    case 2: goto L_11b77378;
    case 3: goto L_11b7738c;
    default: x86_unimpl("switch@0x11b77347 out of table"); return;
  }
  /* 11b7734e mov edi, edi */
  EDI = (EDI);
L_11b77360:;
  /* 11b77360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77363 pop esi */
  ESI = (pop32());
  /* 11b77364 pop edi */
  EDI = (pop32());
  /* 11b77365 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77366 ret  */
  ESPCHK(0x11b77070u, _esp0);
  ESP += 4; return;
  /* 11b77367 nop  */
  /* nop */
L_11b77368:;
  /* 11b77368 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b7736b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b7736e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77371 pop esi */
  ESI = (pop32());
  /* 11b77372 pop edi */
  EDI = (pop32());
  /* 11b77373 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77374 ret  */
  ESPCHK(0x11b77070u, _esp0);
  ESP += 4; return;
  /* 11b77375 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b77378:;
  /* 11b77378 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b7737b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b7737e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b77381 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b77384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77387 pop esi */
  ESI = (pop32());
  /* 11b77388 pop edi */
  EDI = (pop32());
  /* 11b77389 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7738a ret  */
  ESPCHK(0x11b77070u, _esp0);
  ESP += 4; return;
  /* 11b7738b nop  */
  /* nop */
L_11b7738c:;
  /* 11b7738c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b7738f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b77392 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b77395 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b77398 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b7739b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b7739e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b773a1 pop esi */
  ESI = (pop32());
  /* 11b773a2 pop edi */
  EDI = (pop32());
  /* 11b773a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b773a4 ret  */
  ESPCHK(0x11b77070u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11b773b0 (123 bytes, 44 insns) */
void f_11b773b0(void) {
  FTRACE(0x11b773b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b773b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b773b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b773ba je 0x11b773d0 */
  if (C.zf) goto L_11b773d0;
L_11b773bc:;
  /* 11b773bc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b773be inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b773bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b773c1 je 0x11b77403 */
  if (C.zf) goto L_11b77403;
  /* 11b773c3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b773c9 jne 0x11b773bc */
  if (!C.zf) goto L_11b773bc;
  /* 11b773cb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b773d0:;
  /* 11b773d0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b773d2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b773d7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b773d9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b773dc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b773de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b773e1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b773e6 je 0x11b773d0 */
  if (C.zf) goto L_11b773d0;
  /* 11b773e8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b773eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b773ed je 0x11b77421 */
  if (C.zf) goto L_11b77421;
  /* 11b773ef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b773f1 je 0x11b77417 */
  if (C.zf) goto L_11b77417;
  /* 11b773f3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b773f8 je 0x11b7740d */
  if (C.zf) goto L_11b7740d;
  /* 11b773fa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b773ff je 0x11b77403 */
  if (C.zf) goto L_11b77403;
  /* 11b77401 jmp 0x11b773d0 */
  goto L_11b773d0;
L_11b77403:;
  /* 11b77403 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11b77406 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b7740a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7740c ret  */
  ESPCHK(0x11b773b0u, _esp0);
  ESP += 4; return;
L_11b7740d:;
  /* 11b7740d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11b77410 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b77414 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77416 ret  */
  ESPCHK(0x11b773b0u, _esp0);
  ESP += 4; return;
L_11b77417:;
  /* 11b77417 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11b7741a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b7741e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77420 ret  */
  ESPCHK(0x11b773b0u, _esp0);
  ESP += 4; return;
L_11b77421:;
  /* 11b77421 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11b77424 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b77428 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7742a ret  */
  ESPCHK(0x11b773b0u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11b77434 (18 bytes, 6 insns) */
void f_11b77434(void) {
  FTRACE(0x11b77434u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77434 push dword ptr [0x11b814b0] */
  push32((uint32_t)(r32((uint32_t)(0x11b814b0))));
  /* 11b7743a push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b7743e call 0x11b77446 */
  push32(0x11b77443u); f_11b77446();
  /* 11b77443 pop ecx */
  ECX = (pop32());
  /* 11b77444 pop ecx */
  ECX = (pop32());
  /* 11b77445 ret  */
  ESPCHK(0x11b77434u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11b77446 (44 bytes, 16 insns) */
void f_11b77446(void) {
  FTRACE(0x11b77446u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77446 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7744b ja 0x11b7746f */
  if ((!C.cf&&!C.zf)) goto L_11b7746f;
L_11b7744d:;
  /* 11b7744d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b77451 call 0x11b77472 */
  push32(0x11b77456u); f_11b77472();
  /* 11b77456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77458 pop ecx */
  ECX = (pop32());
  /* 11b77459 jne 0x11b77471 */
  if (!C.zf) goto L_11b77471;
  /* 11b7745b cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7745f je 0x11b77471 */
  if (C.zf) goto L_11b77471;
  /* 11b77461 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b77465 call 0x11b7908e */
  push32(0x11b7746au); f_11b7908e();
  /* 11b7746a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7746c pop ecx */
  ECX = (pop32());
  /* 11b7746d jne 0x11b7744d */
  if (!C.zf) goto L_11b7744d;
L_11b7746f:;
  /* 11b7746f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b77471:;
  /* 11b77471 ret  */
  ESPCHK(0x11b77446u, _esp0);
  ESP += 4; return;
}

/* FUN_10007472 @ 0x11b77472 (231 bytes, 81 insns) */
void f_11b77472(void) {
  FTRACE(0x11b77472u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77472 push ebp */
  push32((uint32_t)(EBP));
  /* 11b77473 mov ebp, esp */
  EBP = (ESP);
  /* 11b77475 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b77477 push 0x11b7b568 */
  push32((uint32_t)(0x11b7b568u));
  /* 11b7747c push 0x11b791a4 */
  push32((uint32_t)(0x11b791a4u));
  /* 11b77481 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b77487 push eax */
  push32((uint32_t)(EAX));
  /* 11b77488 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b7748f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77492 push ebx */
  push32((uint32_t)(EBX));
  /* 11b77493 push esi */
  push32((uint32_t)(ESI));
  /* 11b77494 push edi */
  push32((uint32_t)(EDI));
  /* 11b77495 mov eax, dword ptr [0x11b8188c] */
  EAX = (r32((uint32_t)(0x11b8188c)));
  /* 11b7749a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7749d jne 0x11b774e2 */
  if (!C.zf) goto L_11b774e2;
  /* 11b7749f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b774a2 cmp esi, dword ptr [0x11b81658] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b81658))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b774a8 ja 0x11b77541 */
  if ((!C.cf&&!C.zf)) goto L_11b77541;
  /* 11b774ae push 9 */
  push32((uint32_t)(0x9u));
  /* 11b774b0 call 0x11b76534 */
  push32(0x11b774b5u); f_11b76534();
  /* 11b774b5 pop ecx */
  ECX = (pop32());
  /* 11b774b6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b774ba push esi */
  push32((uint32_t)(ESI));
  /* 11b774bb call 0x11b7842b */
  push32(0x11b774c0u); f_11b7842b();
  /* 11b774c0 pop ecx */
  ECX = (pop32());
  /* 11b774c1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b774c4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b774c8 call 0x11b774d9 */
  push32(0x11b774cdu); f_11b774d9();
  /* 11b774cd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b774d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b774d2 je 0x11b77541 */
  if (C.zf) goto L_11b77541;
  /* 11b774d4 jmp 0x11b7755f */
  jmp_ind(0x11b7755fu); return;
  /* 11b774d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b774db call 0x11b76595 */
  push32(0x11b774e0u); f_11b76595();
  /* 11b774e0 pop ecx */
  ECX = (pop32());
  /* 11b774e1 ret  */
  ESPCHK(0x11b77472u, _esp0);
  ESP += 4; return;
L_11b774e2:;
  /* 11b774e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b774e5 jne 0x11b77541 */
  if (!C.zf) goto L_11b77541;
  /* 11b774e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b774ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b774ec je 0x11b774f6 */
  if (C.zf) goto L_11b774f6;
  /* 11b774ee lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11b774f1 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b774f4 jmp 0x11b774f9 */
  goto L_11b774f9;
L_11b774f6:;
  /* 11b774f6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b774f8 pop esi */
  ESI = (pop32());
L_11b774f9:;
  /* 11b774f9 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11b774fc cmp esi, dword ptr [0x11b803c4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b803c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77502 ja 0x11b77532 */
  if ((!C.cf&&!C.zf)) goto L_11b77532;
  /* 11b77504 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b77506 call 0x11b76534 */
  push32(0x11b7750bu); f_11b76534();
  /* 11b7750b pop ecx */
  ECX = (pop32());
  /* 11b7750c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b77513 mov eax, esi */
  EAX = (ESI);
  /* 11b77515 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b77518 push eax */
  push32((uint32_t)(EAX));
  /* 11b77519 call 0x11b78bd8 */
  push32(0x11b7751eu); f_11b78bd8();
  /* 11b7751e pop ecx */
  ECX = (pop32());
  /* 11b7751f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b77522 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b77526 call 0x11b77538 */
  push32(0x11b7752bu); f_11b77538();
  /* 11b7752b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b7752e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77530 jne 0x11b7755f */
  if (!C.zf) { jmp_ind(0x11b7755fu); return; }
L_11b77532:;
  /* 11b77532 push esi */
  push32((uint32_t)(ESI));
  /* 11b77533 jmp 0x11b77551 */
  goto L_11b77551;
  /* 11b77535 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77538 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b7753a call 0x11b76595 */
  push32(0x11b7753fu); f_11b76595();
  /* 11b7753f pop ecx */
  ECX = (pop32());
  /* 11b77540 ret  */
  ESPCHK(0x11b77472u, _esp0);
  ESP += 4; return;
L_11b77541:;
  /* 11b77541 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77546 jne 0x11b7754b */
  if (!C.zf) goto L_11b7754b;
  /* 11b77548 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7754a pop eax */
  EAX = (pop32());
L_11b7754b:;
  /* 11b7754b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7754e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11b77550 push eax */
  push32((uint32_t)(EAX));
L_11b77551:;
  /* 11b77551 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b77553 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
}

/* FUN_100074d9 @ 0x11b774d9 (9 bytes, 4 insns) */
void f_11b774d9(void) {
  FTRACE(0x11b774d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b774d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b774db call 0x11b76595 */
  push32(0x11b774e0u); f_11b76595();
  /* 11b774e0 pop ecx */
  ECX = (pop32());
  /* 11b774e1 ret  */
  ESPCHK(0x11b774d9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007538 @ 0x11b77538 (9 bytes, 4 insns) */
void f_11b77538(void) {
  FTRACE(0x11b77538u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77538 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b7753a call 0x11b76595 */
  push32(0x11b7753fu); f_11b76595();
  /* 11b7753f pop ecx */
  ECX = (pop32());
  /* 11b77540 ret  */
  ESPCHK(0x11b77538u, _esp0);
  ESP += 4; return;
}

/* FUN_1000756e @ 0x11b7756e (429 bytes, 143 insns) */
void f_11b7756e(void) {
  FTRACE(0x11b7756eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7756e push ebp */
  push32((uint32_t)(EBP));
  /* 11b7756f mov ebp, esp */
  EBP = (ESP);
  /* 11b77571 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77574 push ebx */
  push32((uint32_t)(EBX));
  /* 11b77575 push esi */
  push32((uint32_t)(ESI));
  /* 11b77576 push edi */
  push32((uint32_t)(EDI));
  /* 11b77577 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b77579 call 0x11b76534 */
  push32(0x11b7757eu); f_11b76534();
  /* 11b7757e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b77581 call 0x11b7771b */
  push32(0x11b77586u); f_11b7771b();
  /* 11b77586 mov ebx, eax */
  EBX = (EAX);
  /* 11b77588 pop ecx */
  ECX = (pop32());
  /* 11b77589 cmp ebx, dword ptr [0x11b8165c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b8165c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7758f pop ecx */
  ECX = (pop32());
  /* 11b77590 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b77593 jne 0x11b7759c */
  if (!C.zf) goto L_11b7759c;
L_11b77595:;
  /* 11b77595 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b77597 jmp 0x11b7770c */
  goto L_11b7770c;
L_11b7759c:;
  /* 11b7759c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b7759e je 0x11b776fa */
  if (C.zf) goto L_11b776fa;
  /* 11b775a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b775a6 mov eax, 0x11b7e2a8 */
  EAX = (0x11b7e2a8u);
L_11b775ab:;
  /* 11b775ab cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b775ad je 0x11b77623 */
  if (C.zf) goto L_11b77623;
  /* 11b775af add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b775b2 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b775b3 cmp eax, 0x11b7e398 */
  { uint32_t _a=(EAX),_b=(0x11b7e398u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b775b8 jl 0x11b775ab */
  if ((C.sf!=C.of)) goto L_11b775ab;
  /* 11b775ba lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b775bd push eax */
  push32((uint32_t)(EAX));
  /* 11b775be push ebx */
  push32((uint32_t)(EBX));
  /* 11b775bf call dword ptr [0x11b7b030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b030))), 0x11b775c5u);
  /* 11b775c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b775c7 pop esi */
  ESI = (pop32());
  /* 11b775c8 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b775ca jne 0x11b776f1 */
  if (!C.zf) goto L_11b776f1;
  /* 11b775d0 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b775d2 and dword ptr [0x11b81884], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b81884)))&(0x0u); w32((uint32_t)(0x11b81884), (_r)); fl_logic(_r,32); }
  /* 11b775d9 pop ecx */
  ECX = (pop32());
  /* 11b775da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b775dc mov edi, 0x11b81780 */
  EDI = (0x11b81780u);
  /* 11b775e1 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b775e4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b775e6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b775e7 mov dword ptr [0x11b8165c], ebx */
  w32((uint32_t)(0x11b8165c), (EBX));
  /* 11b775ed jbe 0x11b776de */
  if ((C.cf||C.zf)) goto L_11b776de;
  /* 11b775f3 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b775f7 je 0x11b776b9 */
  if (C.zf) goto L_11b776b9;
  /* 11b775fd lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11b77600:;
  /* 11b77600 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b77602 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b77604 je 0x11b776b9 */
  if (C.zf) goto L_11b776b9;
  /* 11b7760a movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11b7760e movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11b77611:;
  /* 11b77611 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77613 ja 0x11b776ad */
  if ((!C.cf&&!C.zf)) goto L_11b776ad;
  /* 11b77619 or byte ptr [eax + 0x11b81781], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b81781)))|(0x4u); w8((uint32_t)(EAX + 0x11b81781), (_r)); fl_logic(_r,8); }
  /* 11b77620 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b77621 jmp 0x11b77611 */
  goto L_11b77611;
L_11b77623:;
  /* 11b77623 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b77627 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b77629 pop ecx */
  ECX = (pop32());
  /* 11b7762a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7762c mov edi, 0x11b81780 */
  EDI = (0x11b81780u);
  /* 11b77631 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11b77634 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b77636 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11b77639 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b7763a lea ebx, [esi + 0x11b7e2b8] */
  EBX = ((uint32_t)(ESI + 0x11b7e2b8));
L_11b77640:;
  /* 11b77640 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77643 mov ecx, ebx */
  ECX = (EBX);
  /* 11b77645 je 0x11b77673 */
  if (C.zf) goto L_11b77673;
L_11b77647:;
  /* 11b77647 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11b7764a test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b7764c je 0x11b77673 */
  if (C.zf) goto L_11b77673;
  /* 11b7764e movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11b77651 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11b77654 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77656 ja 0x11b7766c */
  if ((!C.cf&&!C.zf)) goto L_11b7766c;
  /* 11b77658 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b7765b mov dl, byte ptr [edx + 0x11b7e2a0] */
  DL = (r8((uint32_t)(EDX + 0x11b7e2a0)));
L_11b77661:;
  /* 11b77661 or byte ptr [eax + 0x11b81781], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b81781)))|(DL); w8((uint32_t)(EAX + 0x11b81781), (_r)); fl_logic(_r,8); }
  /* 11b77667 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b77668 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7766a jbe 0x11b77661 */
  if ((C.cf||C.zf)) goto L_11b77661;
L_11b7766c:;
  /* 11b7766c inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b7766d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b7766e cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77671 jne 0x11b77647 */
  if (!C.zf) goto L_11b77647;
L_11b77673:;
  /* 11b77673 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b77676 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77679 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7767d jb 0x11b77640 */
  if (C.cf) goto L_11b77640;
  /* 11b7767f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77682 mov dword ptr [0x11b8166c], 1 */
  w32((uint32_t)(0x11b8166c), (0x1u));
  /* 11b7768c push eax */
  push32((uint32_t)(EAX));
  /* 11b7768d mov dword ptr [0x11b8165c], eax */
  w32((uint32_t)(0x11b8165c), (EAX));
  /* 11b77692 call 0x11b77765 */
  push32(0x11b77697u); f_11b77765();
  /* 11b77697 lea esi, [esi + 0x11b7e2ac] */
  ESI = ((uint32_t)(ESI + 0x11b7e2ac));
  /* 11b7769d mov edi, 0x11b81660 */
  EDI = (0x11b81660u);
  /* 11b776a2 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b776a3 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b776a4 pop ecx */
  ECX = (pop32());
  /* 11b776a5 mov dword ptr [0x11b81884], eax */
  w32((uint32_t)(0x11b81884), (EAX));
  /* 11b776aa movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b776ab jmp 0x11b776ff */
  goto L_11b776ff;
L_11b776ad:;
  /* 11b776ad inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b776ae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b776af cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b776b3 jne 0x11b77600 */
  if (!C.zf) goto L_11b77600;
L_11b776b9:;
  /* 11b776b9 mov eax, esi */
  EAX = (ESI);
L_11b776bb:;
  /* 11b776bb or byte ptr [eax + 0x11b81781], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b81781)))|(0x8u); w8((uint32_t)(EAX + 0x11b81781), (_r)); fl_logic(_r,8); }
  /* 11b776c2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b776c3 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b776c8 jb 0x11b776bb */
  if (C.cf) goto L_11b776bb;
  /* 11b776ca push ebx */
  push32((uint32_t)(EBX));
  /* 11b776cb call 0x11b77765 */
  push32(0x11b776d0u); f_11b77765();
  /* 11b776d0 pop ecx */
  ECX = (pop32());
  /* 11b776d1 mov dword ptr [0x11b81884], eax */
  w32((uint32_t)(0x11b81884), (EAX));
  /* 11b776d6 mov dword ptr [0x11b8166c], esi */
  w32((uint32_t)(0x11b8166c), (ESI));
  /* 11b776dc jmp 0x11b776e5 */
  goto L_11b776e5;
L_11b776de:;
  /* 11b776de and dword ptr [0x11b8166c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b8166c)))&(0x0u); w32((uint32_t)(0x11b8166c), (_r)); fl_logic(_r,32); }
L_11b776e5:;
  /* 11b776e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b776e7 mov edi, 0x11b81660 */
  EDI = (0x11b81660u);
  /* 11b776ec stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b776ed stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b776ee stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b776ef jmp 0x11b776ff */
  goto L_11b776ff;
L_11b776f1:;
  /* 11b776f1 cmp dword ptr [0x11b81498], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b81498))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b776f8 je 0x11b77709 */
  if (C.zf) goto L_11b77709;
L_11b776fa:;
  /* 11b776fa call 0x11b77798 */
  push32(0x11b776ffu); f_11b77798();
L_11b776ff:;
  /* 11b776ff call 0x11b777c1 */
  push32(0x11b77704u); f_11b777c1();
  /* 11b77704 jmp 0x11b77595 */
  goto L_11b77595;
L_11b77709:;
  /* 11b77709 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11b7770c:;
  /* 11b7770c push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b7770e call 0x11b76595 */
  push32(0x11b77713u); f_11b76595();
  /* 11b77713 pop ecx */
  ECX = (pop32());
  /* 11b77714 mov eax, esi */
  EAX = (ESI);
  /* 11b77716 pop edi */
  EDI = (pop32());
  /* 11b77717 pop esi */
  ESI = (pop32());
  /* 11b77718 pop ebx */
  EBX = (pop32());
  /* 11b77719 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7771a ret  */
  ESPCHK(0x11b7756eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000771b @ 0x11b7771b (74 bytes, 15 insns) */
void f_11b7771b(void) {
  FTRACE(0x11b7771bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7771b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b7771f and dword ptr [0x11b81498], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b81498)))&(0x0u); w32((uint32_t)(0x11b81498), (_r)); fl_logic(_r,32); }
  /* 11b77726 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77729 jne 0x11b7773b */
  if (!C.zf) goto L_11b7773b;
  /* 11b7772b mov dword ptr [0x11b81498], 1 */
  w32((uint32_t)(0x11b81498), (0x1u));
  /* 11b77735 jmp dword ptr [0x11b7b028] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b7b028)))); return;
L_11b7773b:;
  /* 11b7773b cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7773e jne 0x11b77750 */
  if (!C.zf) goto L_11b77750;
  /* 11b77740 mov dword ptr [0x11b81498], 1 */
  w32((uint32_t)(0x11b81498), (0x1u));
  /* 11b7774a jmp dword ptr [0x11b7b038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b7b038)))); return;
L_11b77750:;
  /* 11b77750 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77753 jne 0x11b77764 */
  if (!C.zf) goto L_11b77764;
  /* 11b77755 mov eax, dword ptr [0x11b814f0] */
  EAX = (r32((uint32_t)(0x11b814f0)));
  /* 11b7775a mov dword ptr [0x11b81498], 1 */
  w32((uint32_t)(0x11b81498), (0x1u));
L_11b77764:;
  /* 11b77764 ret  */
  ESPCHK(0x11b7771bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007765 @ 0x11b77765 (51 bytes, 19 insns) */
void f_11b77765(void) {
  FTRACE(0x11b77765u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77765 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b77769 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7776e je 0x11b77792 */
  if (C.zf) goto L_11b77792;
  /* 11b77770 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77773 je 0x11b7778c */
  if (C.zf) goto L_11b7778c;
  /* 11b77775 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77778 je 0x11b77786 */
  if (C.zf) goto L_11b77786;
  /* 11b7777a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b7777b je 0x11b77780 */
  if (C.zf) goto L_11b77780;
  /* 11b7777d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7777f ret  */
  ESPCHK(0x11b77765u, _esp0);
  ESP += 4; return;
L_11b77780:;
  /* 11b77780 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11b77785 ret  */
  ESPCHK(0x11b77765u, _esp0);
  ESP += 4; return;
L_11b77786:;
  /* 11b77786 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11b7778b ret  */
  ESPCHK(0x11b77765u, _esp0);
  ESP += 4; return;
L_11b7778c:;
  /* 11b7778c mov eax, 0x804 */
  EAX = (0x804u);
  /* 11b77791 ret  */
  ESPCHK(0x11b77765u, _esp0);
  ESP += 4; return;
L_11b77792:;
  /* 11b77792 mov eax, 0x411 */
  EAX = (0x411u);
  /* 11b77797 ret  */
  ESPCHK(0x11b77765u, _esp0);
  ESP += 4; return;
}

/* FUN_10007798 @ 0x11b77798 (41 bytes, 17 insns) */
void f_11b77798(void) {
  FTRACE(0x11b77798u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77798 push edi */
  push32((uint32_t)(EDI));
  /* 11b77799 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b7779b pop ecx */
  ECX = (pop32());
  /* 11b7779c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7779e mov edi, 0x11b81780 */
  EDI = (0x11b81780u);
  /* 11b777a3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b777a5 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b777a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b777a8 mov edi, 0x11b81660 */
  EDI = (0x11b81660u);
  /* 11b777ad mov dword ptr [0x11b8165c], eax */
  w32((uint32_t)(0x11b8165c), (EAX));
  /* 11b777b2 mov dword ptr [0x11b8166c], eax */
  w32((uint32_t)(0x11b8166c), (EAX));
  /* 11b777b7 mov dword ptr [0x11b81884], eax */
  w32((uint32_t)(0x11b81884), (EAX));
  /* 11b777bc stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b777bd stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b777be stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b777bf pop edi */
  EDI = (pop32());
  /* 11b777c0 ret  */
  ESPCHK(0x11b77798u, _esp0);
  ESP += 4; return;
}

/* FUN_100077c1 @ 0x11b777c1 (389 bytes, 124 insns) */
void f_11b777c1(void) {
  FTRACE(0x11b777c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b777c1 push ebp */
  push32((uint32_t)(EBP));
  /* 11b777c2 mov ebp, esp */
  EBP = (ESP);
  /* 11b777c4 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b777ca lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b777cd push esi */
  push32((uint32_t)(ESI));
  /* 11b777ce push eax */
  push32((uint32_t)(EAX));
  /* 11b777cf push dword ptr [0x11b8165c] */
  push32((uint32_t)(r32((uint32_t)(0x11b8165c))));
  /* 11b777d5 call dword ptr [0x11b7b030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b030))), 0x11b777dbu);
  /* 11b777db cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b777de jne 0x11b778fa */
  if (!C.zf) goto L_11b778fa;
  /* 11b777e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b777e6 mov esi, 0x100 */
  ESI = (0x100u);
L_11b777eb:;
  /* 11b777eb mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11b777f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b777f3 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b777f5 jb 0x11b777eb */
  if (C.cf) goto L_11b777eb;
  /* 11b777f7 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11b777fa mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11b77801 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b77803 je 0x11b7783c */
  if (C.zf) goto L_11b7783c;
  /* 11b77805 push ebx */
  push32((uint32_t)(EBX));
  /* 11b77806 push edi */
  push32((uint32_t)(EDI));
  /* 11b77807 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11b7780a:;
  /* 11b7780a movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11b7780d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11b77810 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77812 ja 0x11b77831 */
  if ((!C.cf&&!C.zf)) goto L_11b77831;
  /* 11b77814 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77816 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11b7781d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b7781e mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11b77823 mov ebx, ecx */
  EBX = (ECX);
  /* 11b77825 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77828 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b7782a mov ecx, ebx */
  ECX = (EBX);
  /* 11b7782c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11b7782f rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11b77831:;
  /* 11b77831 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b77832 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b77833 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11b77836 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b77838 jne 0x11b7780a */
  if (!C.zf) goto L_11b7780a;
  /* 11b7783a pop edi */
  EDI = (pop32());
  /* 11b7783b pop ebx */
  EBX = (pop32());
L_11b7783c:;
  /* 11b7783c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7783e lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11b77844 push dword ptr [0x11b81884] */
  push32((uint32_t)(r32((uint32_t)(0x11b81884))));
  /* 11b7784a push dword ptr [0x11b8165c] */
  push32((uint32_t)(r32((uint32_t)(0x11b8165c))));
  /* 11b77850 push eax */
  push32((uint32_t)(EAX));
  /* 11b77851 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11b77857 push esi */
  push32((uint32_t)(ESI));
  /* 11b77858 push eax */
  push32((uint32_t)(EAX));
  /* 11b77859 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7785b call 0x11b7927c */
  push32(0x11b77860u); f_11b7927c();
  /* 11b77860 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b77862 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11b77868 push dword ptr [0x11b8165c] */
  push32((uint32_t)(r32((uint32_t)(0x11b8165c))));
  /* 11b7786e push esi */
  push32((uint32_t)(ESI));
  /* 11b7786f push eax */
  push32((uint32_t)(EAX));
  /* 11b77870 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11b77876 push esi */
  push32((uint32_t)(ESI));
  /* 11b77877 push eax */
  push32((uint32_t)(EAX));
  /* 11b77878 push esi */
  push32((uint32_t)(ESI));
  /* 11b77879 push dword ptr [0x11b81884] */
  push32((uint32_t)(r32((uint32_t)(0x11b81884))));
  /* 11b7787f call 0x11b793c5 */
  push32(0x11b77884u); f_11b793c5();
  /* 11b77884 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b77886 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11b7788c push dword ptr [0x11b8165c] */
  push32((uint32_t)(r32((uint32_t)(0x11b8165c))));
  /* 11b77892 push esi */
  push32((uint32_t)(ESI));
  /* 11b77893 push eax */
  push32((uint32_t)(EAX));
  /* 11b77894 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11b7789a push esi */
  push32((uint32_t)(ESI));
  /* 11b7789b push eax */
  push32((uint32_t)(EAX));
  /* 11b7789c push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11b778a1 push dword ptr [0x11b81884] */
  push32((uint32_t)(r32((uint32_t)(0x11b81884))));
  /* 11b778a7 call 0x11b793c5 */
  push32(0x11b778acu); f_11b793c5();
  /* 11b778ac add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b778af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b778b1 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11b778b7:;
  /* 11b778b7 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11b778ba test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11b778bd je 0x11b778d5 */
  if (C.zf) goto L_11b778d5;
  /* 11b778bf or byte ptr [eax + 0x11b81781], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b81781)))|(0x10u); w8((uint32_t)(EAX + 0x11b81781), (_r)); fl_logic(_r,8); }
  /* 11b778c6 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11b778cd:;
  /* 11b778cd mov byte ptr [eax + 0x11b81680], dl */
  w8((uint32_t)(EAX + 0x11b81680), (DL));
  /* 11b778d3 jmp 0x11b778f1 */
  goto L_11b778f1;
L_11b778d5:;
  /* 11b778d5 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11b778d8 je 0x11b778ea */
  if (C.zf) goto L_11b778ea;
  /* 11b778da or byte ptr [eax + 0x11b81781], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b81781)))|(0x20u); w8((uint32_t)(EAX + 0x11b81781), (_r)); fl_logic(_r,8); }
  /* 11b778e1 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11b778e8 jmp 0x11b778cd */
  goto L_11b778cd;
L_11b778ea:;
  /* 11b778ea and byte ptr [eax + 0x11b81680], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b81680)))&(0x0u); w8((uint32_t)(EAX + 0x11b81680), (_r)); fl_logic(_r,8); }
L_11b778f1:;
  /* 11b778f1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b778f2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b778f3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b778f4 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b778f6 jb 0x11b778b7 */
  if (C.cf) goto L_11b778b7;
  /* 11b778f8 jmp 0x11b77943 */
  goto L_11b77943;
L_11b778fa:;
  /* 11b778fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b778fc mov esi, 0x100 */
  ESI = (0x100u);
L_11b77901:;
  /* 11b77901 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77904 jb 0x11b7791f */
  if (C.cf) goto L_11b7791f;
  /* 11b77906 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77909 ja 0x11b7791f */
  if ((!C.cf&&!C.zf)) goto L_11b7791f;
  /* 11b7790b or byte ptr [eax + 0x11b81781], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b81781)))|(0x10u); w8((uint32_t)(EAX + 0x11b81781), (_r)); fl_logic(_r,8); }
  /* 11b77912 mov cl, al */
  CL = (AL);
  /* 11b77914 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11b77917:;
  /* 11b77917 mov byte ptr [eax + 0x11b81680], cl */
  w8((uint32_t)(EAX + 0x11b81680), (CL));
  /* 11b7791d jmp 0x11b7793e */
  goto L_11b7793e;
L_11b7791f:;
  /* 11b7791f cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77922 jb 0x11b77937 */
  if (C.cf) goto L_11b77937;
  /* 11b77924 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77927 ja 0x11b77937 */
  if ((!C.cf&&!C.zf)) goto L_11b77937;
  /* 11b77929 or byte ptr [eax + 0x11b81781], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b81781)))|(0x20u); w8((uint32_t)(EAX + 0x11b81781), (_r)); fl_logic(_r,8); }
  /* 11b77930 mov cl, al */
  CL = (AL);
  /* 11b77932 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b77935 jmp 0x11b77917 */
  goto L_11b77917;
L_11b77937:;
  /* 11b77937 and byte ptr [eax + 0x11b81680], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b81680)))&(0x0u); w8((uint32_t)(EAX + 0x11b81680), (_r)); fl_logic(_r,8); }
L_11b7793e:;
  /* 11b7793e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b7793f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77941 jb 0x11b77901 */
  if (C.cf) goto L_11b77901;
L_11b77943:;
  /* 11b77943 pop esi */
  ESI = (pop32());
  /* 11b77944 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77945 ret  */
  ESPCHK(0x11b777c1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007946 @ 0x11b77946 (28 bytes, 7 insns) */
void f_11b77946(void) {
  FTRACE(0x11b77946u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77946 cmp dword ptr [0x11b819a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b819a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7794d jne 0x11b77961 */
  if (!C.zf) goto L_11b77961;
  /* 11b7794f push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11b77951 call 0x11b7756e */
  push32(0x11b77956u); f_11b7756e();
  /* 11b77956 pop ecx */
  ECX = (pop32());
  /* 11b77957 mov dword ptr [0x11b819a8], 1 */
  w32((uint32_t)(0x11b819a8), (0x1u));
L_11b77961:;
  /* 11b77961 ret  */
  ESPCHK(0x11b77946u, _esp0);
  ESP += 4; return;
}

/* FUN_10007970 @ 0x11b77970 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11b77970(void) {
  FTRACE(0x11b77970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77970 push ebp */
  push32((uint32_t)(EBP));
  /* 11b77971 mov ebp, esp */
  EBP = (ESP);
  /* 11b77973 push edi */
  push32((uint32_t)(EDI));
  /* 11b77974 push esi */
  push32((uint32_t)(ESI));
  /* 11b77975 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b77978 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b7797b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7797e mov eax, ecx */
  EAX = (ECX);
  /* 11b77980 mov edx, ecx */
  EDX = (ECX);
  /* 11b77982 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77984 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77986 jbe 0x11b77990 */
  if ((C.cf||C.zf)) goto L_11b77990;
  /* 11b77988 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7798a jb 0x11b77b08 */
  if (C.cf) goto L_11b77b08;
L_11b77990:;
  /* 11b77990 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b77996 jne 0x11b779ac */
  if (!C.zf) goto L_11b779ac;
  /* 11b77998 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b7799b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b7799e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b779a1 jb 0x11b779cc */
  if (C.cf) goto L_11b779cc;
  /* 11b779a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b779a5 jmp dword ptr [edx*4 + 0x11b77ab8] */
  switch (EDX) {
    case 0: goto L_11b77ac8;
    case 1: goto L_11b77ad0;
    case 2: goto L_11b77adc;
    case 3: goto L_11b77af0;
    default: x86_unimpl("switch@0x11b779a5 out of table"); return;
  }
L_11b779ac:;
  /* 11b779ac mov eax, edi */
  EAX = (EDI);
  /* 11b779ae mov edx, 3 */
  EDX = (0x3u);
  /* 11b779b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b779b6 jb 0x11b779c4 */
  if (C.cf) goto L_11b779c4;
  /* 11b779b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b779bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b779bd jmp dword ptr [eax*4 + 0x11b779d0] */
  switch (EAX) {
    case 1: goto L_11b779e0;
    case 2: goto L_11b77a0c;
    case 3: goto L_11b77a30;
    default: x86_unimpl("switch@0x11b779bd out of table"); return;
  }
L_11b779c4:;
  /* 11b779c4 jmp dword ptr [ecx*4 + 0x11b77ac8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11b77ac8)))); return;
  /* 11b779cb nop  */
  /* nop */
L_11b779cc:;
  /* 11b779cc jmp dword ptr [ecx*4 + 0x11b77a4c] */
  switch (ECX) {
    case 0: goto L_11b77aaf;
    case 1: goto L_11b77a9c;
    case 2: goto L_11b77a94;
    case 3: goto L_11b77a8c;
    case 4: goto L_11b77a84;
    case 5: goto L_11b77a7c;
    case 6: goto L_11b77a74;
    case 7: goto L_11b77a6c;
    default: x86_unimpl("switch@0x11b779cc out of table"); return;
  }
  /* 11b779d3 nop  */
  /* nop */
L_11b779e0:;
  /* 11b779e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b779e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b779e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b779e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b779e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b779ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b779ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b779f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b779f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b779f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b779fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b779fe jb 0x11b779cc */
  if (C.cf) goto L_11b779cc;
  /* 11b77a00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77a02 jmp dword ptr [edx*4 + 0x11b77ab8] */
  switch (EDX) {
    case 0: goto L_11b77ac8;
    case 1: goto L_11b77ad0;
    case 2: goto L_11b77adc;
    case 3: goto L_11b77af0;
    default: x86_unimpl("switch@0x11b77a02 out of table"); return;
  }
  /* 11b77a09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b77a0c:;
  /* 11b77a0c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b77a0e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77a10 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b77a12 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b77a15 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77a18 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b77a1b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77a1e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77a21 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77a24 jb 0x11b779cc */
  if (C.cf) goto L_11b779cc;
  /* 11b77a26 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77a28 jmp dword ptr [edx*4 + 0x11b77ab8] */
  switch (EDX) {
    case 0: goto L_11b77ac8;
    case 1: goto L_11b77ad0;
    case 2: goto L_11b77adc;
    case 3: goto L_11b77af0;
    default: x86_unimpl("switch@0x11b77a28 out of table"); return;
  }
  /* 11b77a2f nop  */
  /* nop */
L_11b77a30:;
  /* 11b77a30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b77a32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77a34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b77a36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b77a37 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77a3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b77a3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77a3e jb 0x11b779cc */
  if (C.cf) goto L_11b779cc;
  /* 11b77a40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77a42 jmp dword ptr [edx*4 + 0x11b77ab8] */
  switch (EDX) {
    case 0: goto L_11b77ac8;
    case 1: goto L_11b77ad0;
    case 2: goto L_11b77adc;
    case 3: goto L_11b77af0;
    default: x86_unimpl("switch@0x11b77a42 out of table"); return;
  }
  /* 11b77a49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b77a6c:;
  /* 11b77a6c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11b77a70 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11b77a74:;
  /* 11b77a74 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11b77a78 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11b77a7c:;
  /* 11b77a7c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11b77a80 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11b77a84:;
  /* 11b77a84 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11b77a88 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11b77a8c:;
  /* 11b77a8c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11b77a90 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11b77a94:;
  /* 11b77a94 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11b77a98 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11b77a9c:;
  /* 11b77a9c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11b77aa0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11b77aa4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b77aab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77aad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b77aaf:;
  /* 11b77aaf jmp dword ptr [edx*4 + 0x11b77ab8] */
  switch (EDX) {
    case 0: goto L_11b77ac8;
    case 1: goto L_11b77ad0;
    case 2: goto L_11b77adc;
    case 3: goto L_11b77af0;
    default: x86_unimpl("switch@0x11b77aaf out of table"); return;
  }
  /* 11b77ab6 mov edi, edi */
  EDI = (EDI);
L_11b77ac8:;
  /* 11b77ac8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77acb pop esi */
  ESI = (pop32());
  /* 11b77acc pop edi */
  EDI = (pop32());
  /* 11b77acd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77ace ret  */
  ESPCHK(0x11b77970u, _esp0);
  ESP += 4; return;
  /* 11b77acf nop  */
  /* nop */
L_11b77ad0:;
  /* 11b77ad0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77ad2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b77ad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77ad7 pop esi */
  ESI = (pop32());
  /* 11b77ad8 pop edi */
  EDI = (pop32());
  /* 11b77ad9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77ada ret  */
  ESPCHK(0x11b77970u, _esp0);
  ESP += 4; return;
  /* 11b77adb nop  */
  /* nop */
L_11b77adc:;
  /* 11b77adc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77ade mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b77ae0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b77ae3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b77ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77ae9 pop esi */
  ESI = (pop32());
  /* 11b77aea pop edi */
  EDI = (pop32());
  /* 11b77aeb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77aec ret  */
  ESPCHK(0x11b77970u, _esp0);
  ESP += 4; return;
  /* 11b77aed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b77af0:;
  /* 11b77af0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77af2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b77af4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b77af7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b77afa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b77afd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b77b00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77b03 pop esi */
  ESI = (pop32());
  /* 11b77b04 pop edi */
  EDI = (pop32());
  /* 11b77b05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77b06 ret  */
  ESPCHK(0x11b77970u, _esp0);
  ESP += 4; return;
  /* 11b77b07 nop  */
  /* nop */
L_11b77b08:;
  /* 11b77b08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11b77b0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11b77b10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b77b16 jne 0x11b77b3c */
  if (!C.zf) goto L_11b77b3c;
  /* 11b77b18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77b1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b77b1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77b21 jb 0x11b77b30 */
  if (C.cf) goto L_11b77b30;
  /* 11b77b23 std  */
  C.df=1;
  /* 11b77b24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77b26 cld  */
  C.df=0;
  /* 11b77b27 jmp dword ptr [edx*4 + 0x11b77c50] */
  switch (EDX) {
    case 0: goto L_11b77c60;
    case 1: goto L_11b77c68;
    case 2: goto L_11b77c78;
    case 3: goto L_11b77c8c;
    default: x86_unimpl("switch@0x11b77b27 out of table"); return;
  }
  /* 11b77b2e mov edi, edi */
  EDI = (EDI);
L_11b77b30:;
  /* 11b77b30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b77b32 jmp dword ptr [ecx*4 + 0x11b77c00] */
  switch (ECX) {
    case 0: goto L_11b77c47;
    default: x86_unimpl("switch@0x11b77b32 out of table"); return;
  }
  /* 11b77b39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b77b3c:;
  /* 11b77b3c mov eax, edi */
  EAX = (EDI);
  /* 11b77b3e mov edx, 3 */
  EDX = (0x3u);
  /* 11b77b43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77b46 jb 0x11b77b54 */
  if (C.cf) goto L_11b77b54;
  /* 11b77b48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b77b4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77b4d jmp dword ptr [eax*4 + 0x11b77b58] */
  switch (EAX) {
    case 1: goto L_11b77b68;
    case 2: goto L_11b77b88;
    case 3: goto L_11b77bb0;
    default: x86_unimpl("switch@0x11b77b4d out of table"); return;
  }
L_11b77b54:;
  /* 11b77b54 jmp dword ptr [ecx*4 + 0x11b77c50] */
  switch (ECX) {
    case 0: goto L_11b77c60;
    case 1: goto L_11b77c68;
    case 2: goto L_11b77c78;
    case 3: goto L_11b77c8c;
    default: x86_unimpl("switch@0x11b77b54 out of table"); return;
  }
  /* 11b77b5b nop  */
  /* nop */
L_11b77b68:;
  /* 11b77b68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b77b6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b77b6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b77b70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b77b71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77b74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b77b75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77b78 jb 0x11b77b30 */
  if (C.cf) goto L_11b77b30;
  /* 11b77b7a std  */
  C.df=1;
  /* 11b77b7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77b7d cld  */
  C.df=0;
  /* 11b77b7e jmp dword ptr [edx*4 + 0x11b77c50] */
  switch (EDX) {
    case 0: goto L_11b77c60;
    case 1: goto L_11b77c68;
    case 2: goto L_11b77c78;
    case 3: goto L_11b77c8c;
    default: x86_unimpl("switch@0x11b77b7e out of table"); return;
  }
  /* 11b77b85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b77b88:;
  /* 11b77b88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b77b8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b77b8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b77b90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b77b93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77b96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b77b99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77b9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77b9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77ba2 jb 0x11b77b30 */
  if (C.cf) goto L_11b77b30;
  /* 11b77ba4 std  */
  C.df=1;
  /* 11b77ba5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77ba7 cld  */
  C.df=0;
  /* 11b77ba8 jmp dword ptr [edx*4 + 0x11b77c50] */
  switch (EDX) {
    case 0: goto L_11b77c60;
    case 1: goto L_11b77c68;
    case 2: goto L_11b77c78;
    case 3: goto L_11b77c8c;
    default: x86_unimpl("switch@0x11b77ba8 out of table"); return;
  }
  /* 11b77baf nop  */
  /* nop */
L_11b77bb0:;
  /* 11b77bb0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b77bb3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b77bb5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b77bb8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b77bbb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b77bbe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b77bc1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b77bc4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b77bc7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77bca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77bcd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77bd0 jb 0x11b77b30 */
  if (C.cf) goto L_11b77b30;
  /* 11b77bd6 std  */
  C.df=1;
  /* 11b77bd7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b77bd9 cld  */
  C.df=0;
  /* 11b77bda jmp dword ptr [edx*4 + 0x11b77c50] */
  switch (EDX) {
    case 0: goto L_11b77c60;
    case 1: goto L_11b77c68;
    case 2: goto L_11b77c78;
    case 3: goto L_11b77c8c;
    default: x86_unimpl("switch@0x11b77bda out of table"); return;
  }
  /* 11b77be1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11b77be4 add al, 0x7c */
  { uint32_t _a=(AL),_b=(0x7cu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b77be6 mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b77be8 or al, 0x7c */
  { uint32_t _r=(AL)|(0x7cu); AL = (_r); fl_logic(_r,8); }
  /* 11b77bea mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b77bec adc al, 0x7c */
  { uint32_t _a=(AL),_b=(0x7cu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b77bee mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b77bf0 sbb al, 0x7c */
  { uint32_t _a=(AL),_b=(0x7cu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b77bf2 mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b77bf4 and al, 0x7c */
  { uint32_t _r=(AL)&(0x7cu); AL = (_r); fl_logic(_r,8); }
  /* 11b77bf6 mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b77bf8 sub al, 0x7c */
  { uint32_t _a=(AL),_b=(0x7cu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b77bfa mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b77bfc xor al, 0x7c */
  { uint32_t _r=(AL)^(0x7cu); AL = (_r); fl_logic(_r,8); }
  /* 11b77bfe mov bh, 0x11 */
  C.b.b.h = (0x11u);
  /* 11b77c04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11b77c08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11b77c0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11b77c10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11b77c14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11b77c18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11b77c1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11b77c20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11b77c24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11b77c28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11b77c2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11b77c30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11b77c34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11b77c38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11b77c3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b77c43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77c45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b77c47:;
  /* 11b77c47 jmp dword ptr [edx*4 + 0x11b77c50] */
  switch (EDX) {
    case 0: goto L_11b77c60;
    case 1: goto L_11b77c68;
    case 2: goto L_11b77c78;
    case 3: goto L_11b77c8c;
    default: x86_unimpl("switch@0x11b77c47 out of table"); return;
  }
  /* 11b77c4e mov edi, edi */
  EDI = (EDI);
L_11b77c60:;
  /* 11b77c60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77c63 pop esi */
  ESI = (pop32());
  /* 11b77c64 pop edi */
  EDI = (pop32());
  /* 11b77c65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77c66 ret  */
  ESPCHK(0x11b77970u, _esp0);
  ESP += 4; return;
  /* 11b77c67 nop  */
  /* nop */
L_11b77c68:;
  /* 11b77c68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b77c6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b77c6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77c71 pop esi */
  ESI = (pop32());
  /* 11b77c72 pop edi */
  EDI = (pop32());
  /* 11b77c73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77c74 ret  */
  ESPCHK(0x11b77970u, _esp0);
  ESP += 4; return;
  /* 11b77c75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b77c78:;
  /* 11b77c78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b77c7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b77c7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b77c81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b77c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77c87 pop esi */
  ESI = (pop32());
  /* 11b77c88 pop edi */
  EDI = (pop32());
  /* 11b77c89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77c8a ret  */
  ESPCHK(0x11b77970u, _esp0);
  ESP += 4; return;
  /* 11b77c8b nop  */
  /* nop */
L_11b77c8c:;
  /* 11b77c8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b77c8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b77c92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b77c95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b77c98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b77c9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b77c9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77ca1 pop esi */
  ESI = (pop32());
  /* 11b77ca2 pop edi */
  EDI = (pop32());
  /* 11b77ca3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77ca4 ret  */
  ESPCHK(0x11b77970u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca5 @ 0x11b77ca5 (23 bytes, 7 insns) */
void f_11b77ca5(void) {
  FTRACE(0x11b77ca5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b77ca7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b77cab push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b77caf push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b77cb3 call 0x11b77cbc */
  push32(0x11b77cb8u); f_11b77cbc();
  /* 11b77cb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77cbb ret  */
  ESPCHK(0x11b77ca5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cbc @ 0x11b77cbc (517 bytes, 195 insns) */
void f_11b77cbc(void) {
  FTRACE(0x11b77cbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77cbc push ebp */
  push32((uint32_t)(EBP));
  /* 11b77cbd mov ebp, esp */
  EBP = (ESP);
  /* 11b77cbf sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77cc2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b77cc3 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b77cc7 push esi */
  push32((uint32_t)(ESI));
  /* 11b77cc8 push edi */
  push32((uint32_t)(EDI));
  /* 11b77cc9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77ccc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b77cce lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11b77cd1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11b77cd4:;
  /* 11b77cd4 cmp dword ptr [0x11b7e058], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77cdb jle 0x11b77cec */
  if ((C.zf||C.sf!=C.of)) goto L_11b77cec;
  /* 11b77cdd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b77ce0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b77ce2 push eax */
  push32((uint32_t)(EAX));
  /* 11b77ce3 call 0x11b767f9 */
  push32(0x11b77ce8u); f_11b767f9();
  /* 11b77ce8 pop ecx */
  ECX = (pop32());
  /* 11b77ce9 pop ecx */
  ECX = (pop32());
  /* 11b77cea jmp 0x11b77cfb */
  goto L_11b77cfb;
L_11b77cec:;
  /* 11b77cec mov ecx, dword ptr [0x11b7e064] */
  ECX = (r32((uint32_t)(0x11b7e064)));
  /* 11b77cf2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b77cf5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11b77cf8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11b77cfb:;
  /* 11b77cfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77cfd je 0x11b77d04 */
  if (C.zf) goto L_11b77d04;
  /* 11b77cff mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11b77d01 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b77d02 jmp 0x11b77cd4 */
  goto L_11b77cd4;
L_11b77d04:;
  /* 11b77d04 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77d07 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11b77d0a jne 0x11b77d12 */
  if (!C.zf) goto L_11b77d12;
  /* 11b77d0c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11b77d10 jmp 0x11b77d17 */
  goto L_11b77d17;
L_11b77d12:;
  /* 11b77d12 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77d15 jne 0x11b77d1d */
  if (!C.zf) goto L_11b77d1d;
L_11b77d17:;
  /* 11b77d17 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11b77d19 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b77d1a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11b77d1d:;
  /* 11b77d1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b77d20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77d22 jl 0x11b77eb1 */
  if ((C.sf!=C.of)) goto L_11b77eb1;
  /* 11b77d28 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77d2b je 0x11b77eb1 */
  if (C.zf) goto L_11b77eb1;
  /* 11b77d31 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77d34 jg 0x11b77eb1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b77eb1;
  /* 11b77d3a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b77d3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77d3e pop ecx */
  ECX = (pop32());
  /* 11b77d3f jne 0x11b77d65 */
  if (!C.zf) goto L_11b77d65;
  /* 11b77d41 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77d44 je 0x11b77d4f */
  if (C.zf) goto L_11b77d4f;
  /* 11b77d46 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11b77d4d jmp 0x11b77d81 */
  goto L_11b77d81;
L_11b77d4f:;
  /* 11b77d4f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77d51 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77d53 je 0x11b77d62 */
  if (C.zf) goto L_11b77d62;
  /* 11b77d55 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77d57 je 0x11b77d62 */
  if (C.zf) goto L_11b77d62;
  /* 11b77d59 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11b77d60 jmp 0x11b77d81 */
  goto L_11b77d81;
L_11b77d62:;
  /* 11b77d62 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11b77d65:;
  /* 11b77d65 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77d68 jne 0x11b77d81 */
  if (!C.zf) goto L_11b77d81;
  /* 11b77d6a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77d6d jne 0x11b77d81 */
  if (!C.zf) goto L_11b77d81;
  /* 11b77d6f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77d71 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77d73 je 0x11b77d79 */
  if (C.zf) goto L_11b77d79;
  /* 11b77d75 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77d77 jne 0x11b77d81 */
  if (!C.zf) goto L_11b77d81;
L_11b77d79:;
  /* 11b77d79 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b77d7c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b77d7d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b77d7e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11b77d81:;
  /* 11b77d81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b77d84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b77d86 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b77d89 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11b77d8e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b77d91:;
  /* 11b77d91 cmp dword ptr [0x11b7e058], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77d98 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11b77d9b jle 0x11b77da9 */
  if ((C.zf||C.sf!=C.of)) goto L_11b77da9;
  /* 11b77d9d push 4 */
  push32((uint32_t)(0x4u));
  /* 11b77d9f push esi */
  push32((uint32_t)(ESI));
  /* 11b77da0 call 0x11b767f9 */
  push32(0x11b77da5u); f_11b767f9();
  /* 11b77da5 pop ecx */
  ECX = (pop32());
  /* 11b77da6 pop ecx */
  ECX = (pop32());
  /* 11b77da7 jmp 0x11b77db4 */
  goto L_11b77db4;
L_11b77da9:;
  /* 11b77da9 mov eax, dword ptr [0x11b7e064] */
  EAX = (r32((uint32_t)(0x11b7e064)));
  /* 11b77dae mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11b77db1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11b77db4:;
  /* 11b77db4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77db6 je 0x11b77dc0 */
  if (C.zf) goto L_11b77dc0;
  /* 11b77db8 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11b77dbb sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77dbe jmp 0x11b77df2 */
  goto L_11b77df2;
L_11b77dc0:;
  /* 11b77dc0 cmp dword ptr [0x11b7e058], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77dc7 jle 0x11b77dd4 */
  if ((C.zf||C.sf!=C.of)) goto L_11b77dd4;
  /* 11b77dc9 push edi */
  push32((uint32_t)(EDI));
  /* 11b77dca push esi */
  push32((uint32_t)(ESI));
  /* 11b77dcb call 0x11b767f9 */
  push32(0x11b77dd0u); f_11b767f9();
  /* 11b77dd0 pop ecx */
  ECX = (pop32());
  /* 11b77dd1 pop ecx */
  ECX = (pop32());
  /* 11b77dd2 jmp 0x11b77ddf */
  goto L_11b77ddf;
L_11b77dd4:;
  /* 11b77dd4 mov eax, dword ptr [0x11b7e064] */
  EAX = (r32((uint32_t)(0x11b7e064)));
  /* 11b77dd9 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11b77ddd and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11b77ddf:;
  /* 11b77ddf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77de1 je 0x11b77e2d */
  if (C.zf) goto L_11b77e2d;
  /* 11b77de3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11b77de6 push eax */
  push32((uint32_t)(EAX));
  /* 11b77de7 call 0x11b79f22 */
  push32(0x11b77decu); f_11b79f22();
  /* 11b77dec pop ecx */
  ECX = (pop32());
  /* 11b77ded mov ecx, eax */
  ECX = (EAX);
  /* 11b77def sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11b77df2:;
  /* 11b77df2 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77df5 jae 0x11b77e2d */
  if (!C.cf) goto L_11b77e2d;
  /* 11b77df7 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11b77dfa or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11b77dfe cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77e01 jb 0x11b77e17 */
  if (C.cf) goto L_11b77e17;
  /* 11b77e03 jne 0x11b77e11 */
  if (!C.zf) goto L_11b77e11;
  /* 11b77e05 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b77e08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b77e0a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b77e0d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77e0f jbe 0x11b77e17 */
  if ((C.cf||C.zf)) goto L_11b77e17;
L_11b77e11:;
  /* 11b77e11 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11b77e15 jmp 0x11b77e20 */
  goto L_11b77e20;
L_11b77e17:;
  /* 11b77e17 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b77e1b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77e1d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11b77e20:;
  /* 11b77e20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b77e23 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b77e26 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11b77e28 jmp 0x11b77d91 */
  goto L_11b77d91;
L_11b77e2d:;
  /* 11b77e2d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b77e30 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11b77e33 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b77e36 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11b77e38 jne 0x11b77e4a */
  if (!C.zf) goto L_11b77e4a;
  /* 11b77e3a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b77e3c je 0x11b77e44 */
  if (C.zf) goto L_11b77e44;
  /* 11b77e3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b77e41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b77e44:;
  /* 11b77e44 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b77e48 jmp 0x11b77e95 */
  goto L_11b77e95;
L_11b77e4a:;
  /* 11b77e4a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11b77e4c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11b77e51 jne 0x11b77e6e */
  if (!C.zf) goto L_11b77e6e;
  /* 11b77e53 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11b77e55 jne 0x11b77e95 */
  if (!C.zf) goto L_11b77e95;
  /* 11b77e57 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11b77e5a je 0x11b77e65 */
  if (C.zf) goto L_11b77e65;
  /* 11b77e5c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77e63 ja 0x11b77e6e */
  if ((!C.cf&&!C.zf)) goto L_11b77e6e;
L_11b77e65:;
  /* 11b77e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77e67 jne 0x11b77e95 */
  if (!C.zf) goto L_11b77e95;
  /* 11b77e69 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b77e6c jbe 0x11b77e95 */
  if ((C.cf||C.zf)) goto L_11b77e95;
L_11b77e6e:;
  /* 11b77e6e call 0x11b79f19 */
  push32(0x11b77e73u); f_11b79f19();
  /* 11b77e73 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11b77e77 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11b77e7d je 0x11b77e85 */
  if (C.zf) goto L_11b77e85;
  /* 11b77e7f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b77e83 jmp 0x11b77e95 */
  goto L_11b77e95;
L_11b77e85:;
  /* 11b77e85 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b77e88 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11b77e8a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11b77e8c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b77e8e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b77e90 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77e92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b77e95:;
  /* 11b77e95 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b77e97 je 0x11b77e9e */
  if (C.zf) goto L_11b77e9e;
  /* 11b77e99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b77e9c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11b77e9e:;
  /* 11b77e9e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11b77ea2 je 0x11b77eac */
  if (C.zf) goto L_11b77eac;
  /* 11b77ea4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b77ea7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b77ea9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b77eac:;
  /* 11b77eac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b77eaf jmp 0x11b77ebc */
  goto L_11b77ebc;
L_11b77eb1:;
  /* 11b77eb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b77eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b77eb6 je 0x11b77eba */
  if (C.zf) goto L_11b77eba;
  /* 11b77eb8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11b77eba:;
  /* 11b77eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b77ebc:;
  /* 11b77ebc pop edi */
  EDI = (pop32());
  /* 11b77ebd pop esi */
  ESI = (pop32());
  /* 11b77ebe pop ebx */
  EBX = (pop32());
  /* 11b77ebf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b77ec0 ret  */
  ESPCHK(0x11b77cbcu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11b77ee0 (193 bytes, 90 insns) */
void f_11b77ee0(void) {
  FTRACE(0x11b77ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77ee0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b77ee2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11b77ee6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b77ee7 mov ebx, eax */
  EBX = (EAX);
  /* 11b77ee9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b77eec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b77ef0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11b77ef6 je 0x11b77f0b */
  if (C.zf) goto L_11b77f0b;
L_11b77ef8:;
  /* 11b77ef8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11b77efa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b77efb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77efd je 0x11b77ed0 */
  if (C.zf) { jmp_ind(0x11b77ed0u); return; }
  /* 11b77eff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11b77f01 je 0x11b77f54 */
  if (C.zf) goto L_11b77f54;
  /* 11b77f03 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11b77f09 jne 0x11b77ef8 */
  if (!C.zf) goto L_11b77ef8;
L_11b77f0b:;
  /* 11b77f0b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11b77f0d push edi */
  push32((uint32_t)(EDI));
  /* 11b77f0e mov eax, ebx */
  EAX = (EBX);
  /* 11b77f10 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11b77f13 push esi */
  push32((uint32_t)(ESI));
  /* 11b77f14 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11b77f16:;
  /* 11b77f16 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11b77f18 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11b77f1d mov eax, ecx */
  EAX = (ECX);
  /* 11b77f1f mov esi, edi */
  ESI = (EDI);
  /* 11b77f21 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11b77f23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77f25 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77f27 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b77f2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b77f2d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b77f2f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11b77f31 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77f34 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11b77f3a jne 0x11b77f58 */
  if (!C.zf) goto L_11b77f58;
  /* 11b77f3c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11b77f41 je 0x11b77f16 */
  if (C.zf) goto L_11b77f16;
  /* 11b77f43 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11b77f48 jne 0x11b77f52 */
  if (!C.zf) goto L_11b77f52;
  /* 11b77f4a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11b77f50 jne 0x11b77f16 */
  if (!C.zf) goto L_11b77f16;
L_11b77f52:;
  /* 11b77f52 pop esi */
  ESI = (pop32());
  /* 11b77f53 pop edi */
  EDI = (pop32());
L_11b77f54:;
  /* 11b77f54 pop ebx */
  EBX = (pop32());
  /* 11b77f55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b77f57 ret  */
  ESPCHK(0x11b77ee0u, _esp0);
  ESP += 4; return;
L_11b77f58:;
  /* 11b77f58 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11b77f5b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77f5d je 0x11b77f95 */
  if (C.zf) goto L_11b77f95;
  /* 11b77f5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b77f61 je 0x11b77f52 */
  if (C.zf) goto L_11b77f52;
  /* 11b77f63 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77f65 je 0x11b77f8e */
  if (C.zf) goto L_11b77f8e;
  /* 11b77f67 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b77f69 je 0x11b77f52 */
  if (C.zf) goto L_11b77f52;
  /* 11b77f6b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b77f6e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77f70 je 0x11b77f87 */
  if (C.zf) goto L_11b77f87;
  /* 11b77f72 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b77f74 je 0x11b77f52 */
  if (C.zf) goto L_11b77f52;
  /* 11b77f76 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77f78 je 0x11b77f80 */
  if (C.zf) goto L_11b77f80;
  /* 11b77f7a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b77f7c je 0x11b77f52 */
  if (C.zf) goto L_11b77f52;
  /* 11b77f7e jmp 0x11b77f16 */
  goto L_11b77f16;
L_11b77f80:;
  /* 11b77f80 pop esi */
  ESI = (pop32());
  /* 11b77f81 pop edi */
  EDI = (pop32());
  /* 11b77f82 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11b77f85 pop ebx */
  EBX = (pop32());
  /* 11b77f86 ret  */
  ESPCHK(0x11b77ee0u, _esp0);
  ESP += 4; return;
L_11b77f87:;
  /* 11b77f87 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11b77f8a pop esi */
  ESI = (pop32());
  /* 11b77f8b pop edi */
  EDI = (pop32());
  /* 11b77f8c pop ebx */
  EBX = (pop32());
  /* 11b77f8d ret  */
  ESPCHK(0x11b77ee0u, _esp0);
  ESP += 4; return;
L_11b77f8e:;
  /* 11b77f8e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11b77f91 pop esi */
  ESI = (pop32());
  /* 11b77f92 pop edi */
  EDI = (pop32());
  /* 11b77f93 pop ebx */
  EBX = (pop32());
  /* 11b77f94 ret  */
  ESPCHK(0x11b77ee0u, _esp0);
  ESP += 4; return;
L_11b77f95:;
  /* 11b77f95 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11b77f98 pop esi */
  ESI = (pop32());
  /* 11b77f99 pop edi */
  EDI = (pop32());
  /* 11b77f9a pop ebx */
  EBX = (pop32());
  /* 11b77f9b ret  */
  ESPCHK(0x11b77ee0u, _esp0);
  ESP += 4; return;
  /* 11b77f9c int3  */
  x86_unimpl("int3 @ 0x11b77f9c");
  /* 11b77f9d int3  */
  x86_unimpl("int3 @ 0x11b77f9d");
  /* 11b77f9e int3  */
  x86_unimpl("int3 @ 0x11b77f9e");
  /* 11b77f9f int3  */
  x86_unimpl("int3 @ 0x11b77f9f");
}

/* _strstr @ 0x11b77fa0 (128 bytes, 66 insns) */
void f_11b77fa0(void) {
  FTRACE(0x11b77fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b77fa0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b77fa4 push edi */
  push32((uint32_t)(EDI));
  /* 11b77fa5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b77fa6 push esi */
  push32((uint32_t)(ESI));
  /* 11b77fa7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b77fa9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b77fad test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b77faf je 0x11b7801a */
  if (C.zf) goto L_11b7801a;
  /* 11b77fb1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11b77fb4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b77fb6 je 0x11b78007 */
  if (C.zf) goto L_11b78007;
L_11b77fb8:;
  /* 11b77fb8 mov esi, edi */
  ESI = (EDI);
  /* 11b77fba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b77fbe mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11b77fc0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b77fc1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77fc3 je 0x11b77fda */
  if (C.zf) goto L_11b77fda;
  /* 11b77fc5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b77fc7 je 0x11b77fd4 */
  if (C.zf) goto L_11b77fd4;
L_11b77fc9:;
  /* 11b77fc9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77fcb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b77fcc:;
  /* 11b77fcc cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77fce je 0x11b77fda */
  if (C.zf) goto L_11b77fda;
  /* 11b77fd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b77fd2 jne 0x11b77fc9 */
  if (!C.zf) goto L_11b77fc9;
L_11b77fd4:;
  /* 11b77fd4 pop esi */
  ESI = (pop32());
  /* 11b77fd5 pop ebx */
  EBX = (pop32());
  /* 11b77fd6 pop edi */
  EDI = (pop32());
  /* 11b77fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b77fd9 ret  */
  ESPCHK(0x11b77fa0u, _esp0);
  ESP += 4; return;
L_11b77fda:;
  /* 11b77fda mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77fdc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b77fdd cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77fdf jne 0x11b77fcc */
  if (!C.zf) goto L_11b77fcc;
  /* 11b77fe1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11b77fe4:;
  /* 11b77fe4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11b77fe7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b77fe9 je 0x11b78013 */
  if (C.zf) goto L_11b78013;
  /* 11b77feb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b77fed add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b77ff0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b77ff2 jne 0x11b77fb8 */
  if (!C.zf) goto L_11b77fb8;
  /* 11b77ff4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11b77ff7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b77ff9 je 0x11b78013 */
  if (C.zf) goto L_11b78013;
  /* 11b77ffb mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11b77ffe add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78001 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b78003 je 0x11b77fe4 */
  if (C.zf) goto L_11b77fe4;
  /* 11b78005 jmp 0x11b77fb8 */
  goto L_11b77fb8;
L_11b78007:;
  /* 11b78007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b78009 pop esi */
  ESI = (pop32());
  /* 11b7800a pop ebx */
  EBX = (pop32());
  /* 11b7800b pop edi */
  EDI = (pop32());
  /* 11b7800c mov al, dl */
  AL = (DL);
  /* 11b7800e jmp 0x11b77ee6 */
  jmp_ind(0x11b77ee6u); return;
L_11b78013:;
  /* 11b78013 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11b78016 pop esi */
  ESI = (pop32());
  /* 11b78017 pop ebx */
  EBX = (pop32());
  /* 11b78018 pop edi */
  EDI = (pop32());
  /* 11b78019 ret  */
  ESPCHK(0x11b77fa0u, _esp0);
  ESP += 4; return;
L_11b7801a:;
  /* 11b7801a mov eax, edi */
  EAX = (EDI);
  /* 11b7801c pop esi */
  ESI = (pop32());
  /* 11b7801d pop ebx */
  EBX = (pop32());
  /* 11b7801e pop edi */
  EDI = (pop32());
  /* 11b7801f ret  */
  ESPCHK(0x11b77fa0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11b78020 (56 bytes, 31 insns) */
void f_11b78020(void) {
  FTRACE(0x11b78020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78020 push ebp */
  push32((uint32_t)(EBP));
  /* 11b78021 mov ebp, esp */
  EBP = (ESP);
  /* 11b78023 push edi */
  push32((uint32_t)(EDI));
  /* 11b78024 push esi */
  push32((uint32_t)(ESI));
  /* 11b78025 push ebx */
  push32((uint32_t)(EBX));
  /* 11b78026 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b78029 jecxz 0x11b78051 */
  x86_unimpl("jecxz @ 0x11b78029");
  /* 11b7802b mov ebx, ecx */
  EBX = (ECX);
  /* 11b7802d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78030 mov esi, edi */
  ESI = (EDI);
  /* 11b78032 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b78034 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11b78036 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b78038 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7803a mov edi, esi */
  EDI = (ESI);
  /* 11b7803c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7803f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11b78041 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11b78044 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b78046 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b78049 ja 0x11b7804f */
  if ((!C.cf&&!C.zf)) goto L_11b7804f;
  /* 11b7804b je 0x11b78051 */
  if (C.zf) goto L_11b78051;
  /* 11b7804d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b7804e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11b7804f:;
  /* 11b7804f not ecx */
  ECX = (~(ECX));
L_11b78051:;
  /* 11b78051 mov eax, ecx */
  EAX = (ECX);
  /* 11b78053 pop ebx */
  EBX = (pop32());
  /* 11b78054 pop esi */
  ESI = (pop32());
  /* 11b78055 pop edi */
  EDI = (pop32());
  /* 11b78056 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b78057 ret  */
  ESPCHK(0x11b78020u, _esp0);
  ESP += 4; return;
}

/* FUN_10008060 @ 0x11b78060 (47 bytes, 17 insns) */
void f_11b78060(void) {
  FTRACE(0x11b78060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78060 push ecx */
  push32((uint32_t)(ECX));
  /* 11b78061 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78066 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11b7806a jb 0x11b78080 */
  if (C.cf) goto L_11b78080;
L_11b7806c:;
  /* 11b7806c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78072 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78077 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11b78079 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7807e jae 0x11b7806c */
  if (!C.cf) goto L_11b7806c;
L_11b78080:;
  /* 11b78080 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78082 mov eax, esp */
  EAX = (ESP);
  /* 11b78084 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11b78086 mov esp, ecx */
  ESP = (ECX);
  /* 11b78088 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b7808a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b7808d push eax */
  push32((uint32_t)(EAX));
  /* 11b7808e ret  */
  ESPCHK(0x11b78060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000808f @ 0x11b7808f (72 bytes, 17 insns) */
void f_11b7808f(void) {
  FTRACE(0x11b7808fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7808f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11b78094 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b78096 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b7809c call dword ptr [0x11b7b054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b054))), 0x11b780a2u);
  /* 11b780a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b780a4 mov dword ptr [0x11b81654], eax */
  w32((uint32_t)(0x11b81654), (EAX));
  /* 11b780a9 jne 0x11b780ac */
  if (!C.zf) goto L_11b780ac;
  /* 11b780ab ret  */
  ESPCHK(0x11b7808fu, _esp0);
  ESP += 4; return;
L_11b780ac:;
  /* 11b780ac mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b780b0 and dword ptr [0x11b8164c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b8164c)))&(0x0u); w32((uint32_t)(0x11b8164c), (_r)); fl_logic(_r,32); }
  /* 11b780b7 and dword ptr [0x11b81650], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b81650)))&(0x0u); w32((uint32_t)(0x11b81650), (_r)); fl_logic(_r,32); }
  /* 11b780be push 1 */
  push32((uint32_t)(0x1u));
  /* 11b780c0 mov dword ptr [0x11b81648], eax */
  w32((uint32_t)(0x11b81648), (EAX));
  /* 11b780c5 mov dword ptr [0x11b81658], ecx */
  w32((uint32_t)(0x11b81658), (ECX));
  /* 11b780cb mov dword ptr [0x11b81640], 0x10 */
  w32((uint32_t)(0x11b81640), (0x10u));
  /* 11b780d5 pop eax */
  EAX = (pop32());
  /* 11b780d6 ret  */
  ESPCHK(0x11b7808fu, _esp0);
  ESP += 4; return;
}

/* FUN_100080d7 @ 0x11b780d7 (43 bytes, 14 insns) */
void f_11b780d7(void) {
  FTRACE(0x11b780d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b780d7 mov eax, dword ptr [0x11b81650] */
  EAX = (r32((uint32_t)(0x11b81650)));
  /* 11b780dc lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11b780df mov eax, dword ptr [0x11b81654] */
  EAX = (r32((uint32_t)(0x11b81654)));
  /* 11b780e4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11b780e7:;
  /* 11b780e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b780e9 jae 0x11b780ff */
  if (!C.cf) goto L_11b780ff;
  /* 11b780eb mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b780ef sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b780f2 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b780f8 jb 0x11b78101 */
  if (C.cf) goto L_11b78101;
  /* 11b780fa add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b780fd jmp 0x11b780e7 */
  goto L_11b780e7;
L_11b780ff:;
  /* 11b780ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b78101:;
  /* 11b78101 ret  */
  ESPCHK(0x11b780d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10008102 @ 0x11b78102 (809 bytes, 265 insns) */
void f_11b78102(void) {
  FTRACE(0x11b78102u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78102 push ebp */
  push32((uint32_t)(EBP));
  /* 11b78103 mov ebp, esp */
  EBP = (ESP);
  /* 11b78105 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78108 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7810b push ebx */
  push32((uint32_t)(EBX));
  /* 11b7810c push esi */
  push32((uint32_t)(ESI));
  /* 11b7810d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b78110 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b78113 push edi */
  push32((uint32_t)(EDI));
  /* 11b78114 mov edi, esi */
  EDI = (ESI);
  /* 11b78116 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78119 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7811c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11b7811f mov ecx, edi */
  ECX = (EDI);
  /* 11b78121 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b78127 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b7812e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b78131 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b78133 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b78134 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11b78137 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b7813a jne 0x11b78426 */
  if (!C.zf) goto L_11b78426;
  /* 11b78140 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11b78143 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11b78146 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b78149 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11b7814c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b7814f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b78152 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11b78155 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11b78158 jne 0x11b781d8 */
  if (!C.zf) goto L_11b781d8;
  /* 11b7815a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b7815d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b7815e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78161 jbe 0x11b78166 */
  if ((C.cf||C.zf)) goto L_11b78166;
  /* 11b78163 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b78165 pop edx */
  EDX = (pop32());
L_11b78166:;
  /* 11b78166 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b78169 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7816c jne 0x11b781ba */
  if (!C.zf) goto L_11b781ba;
  /* 11b7816e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78171 jae 0x11b78191 */
  if (!C.cf) goto L_11b78191;
  /* 11b78173 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b78178 mov ecx, edx */
  ECX = (EDX);
  /* 11b7817a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b7817c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11b78180 not ebx */
  EBX = (~(EBX));
  /* 11b78182 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b78186 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b78188 jne 0x11b781b2 */
  if (!C.zf) goto L_11b781b2;
  /* 11b7818a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7818d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b7818f jmp 0x11b781b2 */
  goto L_11b781b2;
L_11b78191:;
  /* 11b78191 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11b78194 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b78199 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b7819b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11b7819f not ebx */
  EBX = (~(EBX));
  /* 11b781a1 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b781a8 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b781aa jne 0x11b781b2 */
  if (!C.zf) goto L_11b781b2;
  /* 11b781ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b781af and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b781b2:;
  /* 11b781b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b781b5 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b781b8 jmp 0x11b781bd */
  goto L_11b781bd;
L_11b781ba:;
  /* 11b781ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11b781bd:;
  /* 11b781bd mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11b781c0 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b781c3 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b781c6 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11b781c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b781cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b781cf mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b781d2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b781d5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11b781d8:;
  /* 11b781d8 mov edx, ecx */
  EDX = (ECX);
  /* 11b781da sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b781dd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b781de cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b781e1 jbe 0x11b781e6 */
  if ((C.cf||C.zf)) goto L_11b781e6;
  /* 11b781e3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b781e5 pop edx */
  EDX = (pop32());
L_11b781e6:;
  /* 11b781e6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b781e9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11b781ec mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11b781ef jne 0x11b78289 */
  if (!C.zf) goto L_11b78289;
  /* 11b781f5 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b781f8 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b781fb sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11b781fe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b78200 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11b78203 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b78204 pop esi */
  ESI = (pop32());
  /* 11b78205 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78207 jbe 0x11b7820b */
  if ((C.cf||C.zf)) goto L_11b7820b;
  /* 11b78209 mov ebx, esi */
  EBX = (ESI);
L_11b7820b:;
  /* 11b7820b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7820e mov edx, ecx */
  EDX = (ECX);
  /* 11b78210 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b78213 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b78216 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b78217 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78219 jbe 0x11b7821d */
  if ((C.cf||C.zf)) goto L_11b7821d;
  /* 11b7821b mov edx, esi */
  EDX = (ESI);
L_11b7821d:;
  /* 11b7821d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7821f je 0x11b78284 */
  if (C.zf) goto L_11b78284;
  /* 11b78221 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b78224 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11b78227 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7822a jne 0x11b7826c */
  if (!C.zf) goto L_11b7826c;
  /* 11b7822c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7822f jae 0x11b7824d */
  if (!C.cf) goto L_11b7824d;
  /* 11b78231 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11b78236 mov ecx, ebx */
  ECX = (EBX);
  /* 11b78238 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b7823a not esi */
  ESI = (~(ESI));
  /* 11b7823c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b78240 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11b78244 jne 0x11b7826c */
  if (!C.zf) goto L_11b7826c;
  /* 11b78246 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78249 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b7824b jmp 0x11b7826c */
  goto L_11b7826c;
L_11b7824d:;
  /* 11b7824d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11b78250 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11b78255 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b78257 not esi */
  ESI = (~(ESI));
  /* 11b78259 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b78260 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11b78264 jne 0x11b7826c */
  if (!C.zf) goto L_11b7826c;
  /* 11b78266 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78269 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b7826c:;
  /* 11b7826c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7826f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11b78272 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b78275 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11b78278 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7827b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11b7827e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b78281 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11b78284:;
  /* 11b78284 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b78287 jmp 0x11b7828c */
  goto L_11b7828c;
L_11b78289:;
  /* 11b78289 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b7828c:;
  /* 11b7828c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78290 jne 0x11b7829a */
  if (!C.zf) goto L_11b7829a;
  /* 11b78292 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78294 je 0x11b7831b */
  if (C.zf) goto L_11b7831b;
L_11b7829a:;
  /* 11b7829a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b7829d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11b782a1 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11b782a4 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11b782a7 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11b782aa mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11b782ad mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b782b0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11b782b3 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b782b6 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b782b9 jne 0x11b7831b */
  if (!C.zf) goto L_11b7831b;
  /* 11b782bb mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11b782bf cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b782c2 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11b782c5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b782c7 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11b782cb jae 0x11b782f2 */
  if (!C.cf) goto L_11b782f2;
  /* 11b782cd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b782d1 jne 0x11b782e1 */
  if (!C.zf) goto L_11b782e1;
  /* 11b782d3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b782d8 mov ecx, edx */
  ECX = (EDX);
  /* 11b782da shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b782dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b782df or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11b782e1:;
  /* 11b782e1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b782e6 mov ecx, edx */
  ECX = (EDX);
  /* 11b782e8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b782ea lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11b782ee or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b782f0 jmp 0x11b7831b */
  goto L_11b7831b;
L_11b782f2:;
  /* 11b782f2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b782f6 jne 0x11b78308 */
  if (!C.zf) goto L_11b78308;
  /* 11b782f8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11b782fb mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b78300 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b78302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78305 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b78308:;
  /* 11b78308 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11b7830b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b78310 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b78312 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11b78319 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11b7831b:;
  /* 11b7831b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b7831e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b78320 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11b78324 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b78327 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11b78329 jne 0x11b78426 */
  if (!C.zf) goto L_11b78426;
  /* 11b7832f mov eax, dword ptr [0x11b8164c] */
  EAX = (r32((uint32_t)(0x11b8164c)));
  /* 11b78334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78336 je 0x11b78418 */
  if (C.zf) goto L_11b78418;
  /* 11b7833c mov ecx, dword ptr [0x11b81644] */
  ECX = (r32((uint32_t)(0x11b81644)));
  /* 11b78342 mov esi, dword ptr [0x11b7b060] */
  ESI = (r32((uint32_t)(0x11b7b060)));
  /* 11b78348 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11b7834b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7834e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11b78353 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b78358 push ebx */
  push32((uint32_t)(EBX));
  /* 11b78359 push ecx */
  push32((uint32_t)(ECX));
  /* 11b7835a call esi */
  call_ind((uint32_t)(ESI), 0x11b7835cu);
  /* 11b7835c mov ecx, dword ptr [0x11b81644] */
  ECX = (r32((uint32_t)(0x11b81644)));
  /* 11b78362 mov eax, dword ptr [0x11b8164c] */
  EAX = (r32((uint32_t)(0x11b8164c)));
  /* 11b78367 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b7836c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b7836e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b78371 mov eax, dword ptr [0x11b8164c] */
  EAX = (r32((uint32_t)(0x11b8164c)));
  /* 11b78376 mov ecx, dword ptr [0x11b81644] */
  ECX = (r32((uint32_t)(0x11b81644)));
  /* 11b7837c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b7837f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b78387 mov eax, dword ptr [0x11b8164c] */
  EAX = (r32((uint32_t)(0x11b8164c)));
  /* 11b7838c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b7838f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11b78392 mov eax, dword ptr [0x11b8164c] */
  EAX = (r32((uint32_t)(0x11b8164c)));
  /* 11b78397 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b7839a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7839e jne 0x11b783a9 */
  if (!C.zf) goto L_11b783a9;
  /* 11b783a0 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b783a4 mov eax, dword ptr [0x11b8164c] */
  EAX = (r32((uint32_t)(0x11b8164c)));
L_11b783a9:;
  /* 11b783a9 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b783ad jne 0x11b78418 */
  if (!C.zf) goto L_11b78418;
  /* 11b783af push ebx */
  push32((uint32_t)(EBX));
  /* 11b783b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b783b2 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11b783b5 call esi */
  call_ind((uint32_t)(ESI), 0x11b783b7u);
  /* 11b783b7 mov eax, dword ptr [0x11b8164c] */
  EAX = (r32((uint32_t)(0x11b8164c)));
  /* 11b783bc push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11b783bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b783c1 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b783c7 call dword ptr [0x11b7b050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b050))), 0x11b783cdu);
  /* 11b783cd mov eax, dword ptr [0x11b81650] */
  EAX = (r32((uint32_t)(0x11b81650)));
  /* 11b783d2 mov edx, dword ptr [0x11b81654] */
  EDX = (r32((uint32_t)(0x11b81654)));
  /* 11b783d8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b783db shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b783de mov ecx, eax */
  ECX = (EAX);
  /* 11b783e0 mov eax, dword ptr [0x11b8164c] */
  EAX = (r32((uint32_t)(0x11b8164c)));
  /* 11b783e5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b783e7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11b783eb push ecx */
  push32((uint32_t)(ECX));
  /* 11b783ec lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11b783ef push ecx */
  push32((uint32_t)(ECX));
  /* 11b783f0 push eax */
  push32((uint32_t)(EAX));
  /* 11b783f1 call 0x11b77070 */
  push32(0x11b783f6u); f_11b77070();
  /* 11b783f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b783f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b783fc dec dword ptr [0x11b81650] */
  { uint32_t _r=(r32((uint32_t)(0x11b81650)))-1; w32((uint32_t)(0x11b81650), (_r)); fl_dec(_r,32); }
  /* 11b78402 cmp eax, dword ptr [0x11b8164c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b8164c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78408 jbe 0x11b7840e */
  if ((C.cf||C.zf)) goto L_11b7840e;
  /* 11b7840a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11b7840e:;
  /* 11b7840e mov eax, dword ptr [0x11b81654] */
  EAX = (r32((uint32_t)(0x11b81654)));
  /* 11b78413 mov dword ptr [0x11b81648], eax */
  w32((uint32_t)(0x11b81648), (EAX));
L_11b78418:;
  /* 11b78418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7841b mov dword ptr [0x11b81644], edi */
  w32((uint32_t)(0x11b81644), (EDI));
  /* 11b78421 mov dword ptr [0x11b8164c], eax */
  w32((uint32_t)(0x11b8164c), (EAX));
L_11b78426:;
  /* 11b78426 pop edi */
  EDI = (pop32());
  /* 11b78427 pop esi */
  ESI = (pop32());
  /* 11b78428 pop ebx */
  EBX = (pop32());
  /* 11b78429 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7842a ret  */
  ESPCHK(0x11b78102u, _esp0);
  ESP += 4; return;
}

/* FUN_1000842b @ 0x11b7842b (777 bytes, 275 insns) */
void f_11b7842b(void) {
  FTRACE(0x11b7842bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7842b push ebp */
  push32((uint32_t)(EBP));
  /* 11b7842c mov ebp, esp */
  EBP = (ESP);
  /* 11b7842e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78431 mov eax, dword ptr [0x11b81650] */
  EAX = (r32((uint32_t)(0x11b81650)));
  /* 11b78436 mov edx, dword ptr [0x11b81654] */
  EDX = (r32((uint32_t)(0x11b81654)));
  /* 11b7843c push ebx */
  push32((uint32_t)(EBX));
  /* 11b7843d push esi */
  push32((uint32_t)(ESI));
  /* 11b7843e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b78441 push edi */
  push32((uint32_t)(EDI));
  /* 11b78442 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11b78445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78448 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b7844b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11b7844e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11b78451 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b78454 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b78457 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b78458 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7845b jge 0x11b7846b */
  if ((C.sf==C.of)) goto L_11b7846b;
  /* 11b7845d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11b78460 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b78462 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b78466 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11b78469 jmp 0x11b7847b */
  goto L_11b7847b;
L_11b7846b:;
  /* 11b7846b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7846e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b78471 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b78473 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b78475 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11b78478 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b7847b:;
  /* 11b7847b mov eax, dword ptr [0x11b81648] */
  EAX = (r32((uint32_t)(0x11b81648)));
  /* 11b78480 mov ebx, eax */
  EBX = (EAX);
  /* 11b78482 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78484 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b78487 jae 0x11b784a2 */
  if (!C.cf) goto L_11b784a2;
L_11b78489:;
  /* 11b78489 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b7848c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11b7848e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b78491 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11b78493 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b78495 jne 0x11b784a2 */
  if (!C.zf) goto L_11b784a2;
  /* 11b78497 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7849a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7849d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b784a0 jb 0x11b78489 */
  if (C.cf) goto L_11b78489;
L_11b784a2:;
  /* 11b784a2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b784a5 jne 0x11b78520 */
  if (!C.zf) goto L_11b78520;
  /* 11b784a7 mov ebx, edx */
  EBX = (EDX);
L_11b784a9:;
  /* 11b784a9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b784ab mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b784ae jae 0x11b784c5 */
  if (!C.cf) goto L_11b784c5;
  /* 11b784b0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b784b3 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11b784b5 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b784b8 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11b784ba or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b784bc jne 0x11b784c3 */
  if (!C.zf) goto L_11b784c3;
  /* 11b784be add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b784c1 jmp 0x11b784a9 */
  goto L_11b784a9;
L_11b784c3:;
  /* 11b784c3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b784c5:;
  /* 11b784c5 jne 0x11b78520 */
  if (!C.zf) goto L_11b78520;
L_11b784c7:;
  /* 11b784c7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b784ca jae 0x11b784dd */
  if (!C.cf) goto L_11b784dd;
  /* 11b784cc cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b784d0 jne 0x11b784da */
  if (!C.zf) goto L_11b784da;
  /* 11b784d2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b784d5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b784d8 jmp 0x11b784c7 */
  goto L_11b784c7;
L_11b784da:;
  /* 11b784da cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b784dd:;
  /* 11b784dd jne 0x11b78505 */
  if (!C.zf) goto L_11b78505;
  /* 11b784df mov ebx, edx */
  EBX = (EDX);
L_11b784e1:;
  /* 11b784e1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b784e3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b784e6 jae 0x11b784f5 */
  if (!C.cf) goto L_11b784f5;
  /* 11b784e8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b784ec jne 0x11b784f3 */
  if (!C.zf) goto L_11b784f3;
  /* 11b784ee add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b784f1 jmp 0x11b784e1 */
  goto L_11b784e1;
L_11b784f3:;
  /* 11b784f3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b784f5:;
  /* 11b784f5 jne 0x11b78505 */
  if (!C.zf) goto L_11b78505;
  /* 11b784f7 call 0x11b78734 */
  push32(0x11b784fcu); f_11b78734();
  /* 11b784fc mov ebx, eax */
  EBX = (EAX);
  /* 11b784fe test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b78500 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b78503 je 0x11b78519 */
  if (C.zf) goto L_11b78519;
L_11b78505:;
  /* 11b78505 push ebx */
  push32((uint32_t)(EBX));
  /* 11b78506 call 0x11b787e5 */
  push32(0x11b7850bu); f_11b787e5();
  /* 11b7850b pop ecx */
  ECX = (pop32());
  /* 11b7850c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11b7850f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b78511 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11b78514 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78517 jne 0x11b78520 */
  if (!C.zf) goto L_11b78520;
L_11b78519:;
  /* 11b78519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7851b jmp 0x11b7872f */
  goto L_11b7872f;
L_11b78520:;
  /* 11b78520 mov dword ptr [0x11b81648], ebx */
  w32((uint32_t)(0x11b81648), (EBX));
  /* 11b78526 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11b78529 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b7852b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7852e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b78531 je 0x11b78547 */
  if (C.zf) goto L_11b78547;
  /* 11b78533 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11b7853a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11b7853e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b78541 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11b78543 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b78545 jne 0x11b7857e */
  if (!C.zf) goto L_11b7857e;
L_11b78547:;
  /* 11b78547 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11b7854d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11b78550 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b78553 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11b78556 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b7855a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11b7855d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11b7855f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11b78562 jne 0x11b7857b */
  if (!C.zf) goto L_11b7857b;
L_11b78564:;
  /* 11b78564 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11b7856a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b7856d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b78570 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78573 mov edi, esi */
  EDI = (ESI);
  /* 11b78575 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11b78577 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11b78579 je 0x11b78564 */
  if (C.zf) goto L_11b78564;
L_11b7857b:;
  /* 11b7857b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11b7857e:;
  /* 11b7857e mov ecx, edx */
  ECX = (EDX);
  /* 11b78580 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b78582 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b78588 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b7858f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b78592 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11b78596 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11b78598 jne 0x11b785a7 */
  if (!C.zf) goto L_11b785a7;
  /* 11b7859a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11b785a1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b785a3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b785a6 pop edi */
  EDI = (pop32());
L_11b785a7:;
  /* 11b785a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b785a9 jl 0x11b785b0 */
  if ((C.sf!=C.of)) goto L_11b785b0;
  /* 11b785ab shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b785ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b785ae jmp 0x11b785a7 */
  goto L_11b785a7;
L_11b785b0:;
  /* 11b785b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b785b3 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11b785b7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11b785b9 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b785bc mov esi, ecx */
  ESI = (ECX);
  /* 11b785be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b785c1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11b785c4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b785c5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b785c8 jle 0x11b785cd */
  if ((C.zf||C.sf!=C.of)) goto L_11b785cd;
  /* 11b785ca push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b785cc pop esi */
  ESI = (pop32());
L_11b785cd:;
  /* 11b785cd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b785cf je 0x11b786e2 */
  if (C.zf) goto L_11b786e2;
  /* 11b785d5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b785d8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b785db jne 0x11b7863e */
  if (!C.zf) goto L_11b7863e;
  /* 11b785dd cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b785e0 jge 0x11b7860d */
  if ((C.sf==C.of)) goto L_11b7860d;
  /* 11b785e2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b785e7 mov ecx, edi */
  ECX = (EDI);
  /* 11b785e9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b785eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b785ee lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11b785f2 not ebx */
  EBX = (~(EBX));
  /* 11b785f4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11b785f7 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11b785fb mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11b785ff dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11b78601 jne 0x11b7863b */
  if (!C.zf) goto L_11b7863b;
  /* 11b78603 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78606 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b78609 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11b7860b jmp 0x11b7863e */
  goto L_11b7863e;
L_11b7860d:;
  /* 11b7860d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11b78610 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b78615 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b78617 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b7861a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11b7861e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11b78625 not ebx */
  EBX = (~(EBX));
  /* 11b78627 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b78629 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11b7862b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11b7862e jne 0x11b7863b */
  if (!C.zf) goto L_11b7863b;
  /* 11b78630 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78633 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b78636 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b78639 jmp 0x11b7863e */
  goto L_11b7863e;
L_11b7863b:;
  /* 11b7863b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b7863e:;
  /* 11b7863e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b78641 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11b78644 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78648 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11b7864b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b7864e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11b78651 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11b78654 je 0x11b786ee */
  if (C.zf) goto L_11b786ee;
  /* 11b7865a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b7865d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11b78661 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11b78664 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11b78667 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b7866a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b7866d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b78670 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b78673 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b78676 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78679 jne 0x11b786df */
  if (!C.zf) goto L_11b786df;
  /* 11b7867b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11b7867f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78682 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11b78685 jge 0x11b786b0 */
  if ((C.sf==C.of)) goto L_11b786b0;
  /* 11b78687 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b78689 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7868d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11b78691 jne 0x11b7869e */
  if (!C.zf) goto L_11b7869e;
  /* 11b78693 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b78698 mov ecx, esi */
  ECX = (ESI);
  /* 11b7869a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b7869c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11b7869e:;
  /* 11b7869e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b786a3 mov ecx, esi */
  ECX = (ESI);
  /* 11b786a5 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b786a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b786aa or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b786ae jmp 0x11b786df */
  goto L_11b786df;
L_11b786b0:;
  /* 11b786b0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b786b2 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b786b6 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11b786ba jne 0x11b786c9 */
  if (!C.zf) goto L_11b786c9;
  /* 11b786bc lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11b786bf mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b786c4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b786c6 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11b786c9:;
  /* 11b786c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b786cc lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11b786d3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11b786d6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11b786db shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b786dd or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11b786df:;
  /* 11b786df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11b786e2:;
  /* 11b786e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b786e4 je 0x11b786f1 */
  if (C.zf) goto L_11b786f1;
  /* 11b786e6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b786e8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11b786ec jmp 0x11b786f1 */
  goto L_11b786f1;
L_11b786ee:;
  /* 11b786ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11b786f1:;
  /* 11b786f1 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11b786f4 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b786f6 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11b786f9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b786fb mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11b786ff mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11b78702 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b78704 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b78706 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11b78709 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b7870b jne 0x11b78727 */
  if (!C.zf) goto L_11b78727;
  /* 11b7870d cmp ebx, dword ptr [0x11b8164c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b8164c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78713 jne 0x11b78727 */
  if (!C.zf) goto L_11b78727;
  /* 11b78715 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b78718 cmp ecx, dword ptr [0x11b81644] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b81644))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7871e jne 0x11b78727 */
  if (!C.zf) goto L_11b78727;
  /* 11b78720 and dword ptr [0x11b8164c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b8164c)))&(0x0u); w32((uint32_t)(0x11b8164c), (_r)); fl_logic(_r,32); }
L_11b78727:;
  /* 11b78727 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b7872a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b7872c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11b7872f:;
  /* 11b7872f pop edi */
  EDI = (pop32());
  /* 11b78730 pop esi */
  ESI = (pop32());
  /* 11b78731 pop ebx */
  EBX = (pop32());
  /* 11b78732 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b78733 ret  */
  ESPCHK(0x11b7842bu, _esp0);
  ESP += 4; return;
}

/* FUN_10008734 @ 0x11b78734 (177 bytes, 53 insns) */
void f_11b78734(void) {
  FTRACE(0x11b78734u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78734 mov eax, dword ptr [0x11b81650] */
  EAX = (r32((uint32_t)(0x11b81650)));
  /* 11b78739 mov ecx, dword ptr [0x11b81640] */
  ECX = (r32((uint32_t)(0x11b81640)));
  /* 11b7873f push esi */
  push32((uint32_t)(ESI));
  /* 11b78740 push edi */
  push32((uint32_t)(EDI));
  /* 11b78741 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b78743 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78745 jne 0x11b78777 */
  if (!C.zf) goto L_11b78777;
  /* 11b78747 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11b7874b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b7874e push eax */
  push32((uint32_t)(EAX));
  /* 11b7874f push dword ptr [0x11b81654] */
  push32((uint32_t)(r32((uint32_t)(0x11b81654))));
  /* 11b78755 push edi */
  push32((uint32_t)(EDI));
  /* 11b78756 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b7875c call dword ptr [0x11b7b02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b02c))), 0x11b78762u);
  /* 11b78762 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78764 je 0x11b787c7 */
  if (C.zf) goto L_11b787c7;
  /* 11b78766 add dword ptr [0x11b81640], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11b81640))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11b81640), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b7876d mov dword ptr [0x11b81654], eax */
  w32((uint32_t)(0x11b81654), (EAX));
  /* 11b78772 mov eax, dword ptr [0x11b81650] */
  EAX = (r32((uint32_t)(0x11b81650)));
L_11b78777:;
  /* 11b78777 mov ecx, dword ptr [0x11b81654] */
  ECX = (r32((uint32_t)(0x11b81654)));
  /* 11b7877d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11b78782 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b78784 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b78787 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b7878d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11b78790 call dword ptr [0x11b7b054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b054))), 0x11b78796u);
  /* 11b78796 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78798 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11b7879b je 0x11b787c7 */
  if (C.zf) goto L_11b787c7;
  /* 11b7879d push 4 */
  push32((uint32_t)(0x4u));
  /* 11b7879f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11b787a4 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11b787a9 push edi */
  push32((uint32_t)(EDI));
  /* 11b787aa call dword ptr [0x11b7b024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b024))), 0x11b787b0u);
  /* 11b787b0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b787b2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11b787b5 jne 0x11b787cb */
  if (!C.zf) goto L_11b787cb;
  /* 11b787b7 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11b787ba push edi */
  push32((uint32_t)(EDI));
  /* 11b787bb push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b787c1 call dword ptr [0x11b7b050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b050))), 0x11b787c7u);
L_11b787c7:;
  /* 11b787c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b787c9 jmp 0x11b787e2 */
  goto L_11b787e2;
L_11b787cb:;
  /* 11b787cb or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b787cf mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b787d1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11b787d4 inc dword ptr [0x11b81650] */
  { uint32_t _r=(r32((uint32_t)(0x11b81650)))+1; w32((uint32_t)(0x11b81650), (_r)); fl_inc(_r,32); }
  /* 11b787da mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b787dd or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b787e0 mov eax, esi */
  EAX = (ESI);
L_11b787e2:;
  /* 11b787e2 pop edi */
  EDI = (pop32());
  /* 11b787e3 pop esi */
  ESI = (pop32());
  /* 11b787e4 ret  */
  ESPCHK(0x11b78734u, _esp0);
  ESP += 4; return;
}

/* FUN_100087e5 @ 0x11b787e5 (251 bytes, 85 insns) */
void f_11b787e5(void) {
  FTRACE(0x11b787e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b787e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11b787e6 mov ebp, esp */
  EBP = (ESP);
  /* 11b787e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b787e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b787ec push ebx */
  push32((uint32_t)(EBX));
  /* 11b787ed push esi */
  push32((uint32_t)(ESI));
  /* 11b787ee push edi */
  push32((uint32_t)(EDI));
  /* 11b787ef mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11b787f2 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b787f5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b787f7:;
  /* 11b787f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b787f9 jl 0x11b78800 */
  if ((C.sf!=C.of)) goto L_11b78800;
  /* 11b787fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b787fd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b787fe jmp 0x11b787f7 */
  goto L_11b787f7;
L_11b78800:;
  /* 11b78800 mov eax, ebx */
  EAX = (EBX);
  /* 11b78802 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b78804 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b7880a pop edx */
  EDX = (pop32());
  /* 11b7880b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11b78812 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b78815:;
  /* 11b78815 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11b78818 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11b7881b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7881e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b7881f jne 0x11b78815 */
  if (!C.zf) goto L_11b78815;
  /* 11b78821 mov edi, ebx */
  EDI = (EBX);
  /* 11b78823 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b78825 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11b78828 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7882b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b78830 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b78835 push edi */
  push32((uint32_t)(EDI));
  /* 11b78836 call dword ptr [0x11b7b024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b024))), 0x11b7883cu);
  /* 11b7883c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7883e jne 0x11b78848 */
  if (!C.zf) goto L_11b78848;
  /* 11b78840 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b78843 jmp 0x11b788db */
  goto L_11b788db;
L_11b78848:;
  /* 11b78848 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11b7884e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78850 ja 0x11b7888e */
  if ((!C.cf&&!C.zf)) goto L_11b7888e;
  /* 11b78852 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11b78855:;
  /* 11b78855 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b78859 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11b78860 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11b78866 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11b7886d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b7886f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11b78875 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b78878 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11b78882 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78887 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11b7888a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7888c jbe 0x11b78855 */
  if ((C.cf||C.zf)) goto L_11b78855;
L_11b7888e:;
  /* 11b7888e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b78891 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11b78894 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78899 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7889b pop edi */
  EDI = (pop32());
  /* 11b7889c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b7889f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11b788a2 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11b788a5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b788a8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b788ab and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b788b0 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11b788b7 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11b788ba mov cl, al */
  CL = (AL);
  /* 11b788bc inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b788be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b788c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b788c3 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11b788c6 jne 0x11b788cb */
  if (!C.zf) goto L_11b788cb;
  /* 11b788c8 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11b788cb:;
  /* 11b788cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b788d0 mov ecx, ebx */
  ECX = (EBX);
  /* 11b788d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b788d4 not edx */
  EDX = (~(EDX));
  /* 11b788d6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b788d9 mov eax, ebx */
  EAX = (EBX);
L_11b788db:;
  /* 11b788db pop edi */
  EDI = (pop32());
  /* 11b788dc pop esi */
  ESI = (pop32());
  /* 11b788dd pop ebx */
  EBX = (pop32());
  /* 11b788de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b788df ret  */
  ESPCHK(0x11b787e5u, _esp0);
  ESP += 4; return;
}

/* FUN_100088e0 @ 0x11b788e0 (324 bytes, 102 insns) */
void f_11b788e0(void) {
  FTRACE(0x11b788e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b788e0 cmp dword ptr [0x11b7e3b0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e3b0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b788e7 push ebx */
  push32((uint32_t)(EBX));
  /* 11b788e8 push ebp */
  push32((uint32_t)(EBP));
  /* 11b788e9 push esi */
  push32((uint32_t)(ESI));
  /* 11b788ea push edi */
  push32((uint32_t)(EDI));
  /* 11b788eb jne 0x11b788f4 */
  if (!C.zf) goto L_11b788f4;
  /* 11b788ed mov esi, 0x11b7e3a0 */
  ESI = (0x11b7e3a0u);
  /* 11b788f2 jmp 0x11b78911 */
  goto L_11b78911;
L_11b788f4:;
  /* 11b788f4 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11b788f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b788fb push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b78901 call dword ptr [0x11b7b054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b054))), 0x11b78907u);
  /* 11b78907 mov esi, eax */
  ESI = (EAX);
  /* 11b78909 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b7890b je 0x11b78a1d */
  if (C.zf) goto L_11b78a1d;
L_11b78911:;
  /* 11b78911 mov ebp, dword ptr [0x11b7b024] */
  EBP = (r32((uint32_t)(0x11b7b024)));
  /* 11b78917 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b78919 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11b7891e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11b78923 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b78925 call ebp */
  call_ind((uint32_t)(EBP), 0x11b78927u);
  /* 11b78927 mov edi, eax */
  EDI = (EAX);
  /* 11b78929 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b7892b je 0x11b78a06 */
  if (C.zf) goto L_11b78a06;
  /* 11b78931 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b78933 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11b78938 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b7893d push ebx */
  push32((uint32_t)(EBX));
  /* 11b7893e push edi */
  push32((uint32_t)(EDI));
  /* 11b7893f call ebp */
  call_ind((uint32_t)(EBP), 0x11b78941u);
  /* 11b78941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78943 je 0x11b789f8 */
  if (C.zf) goto L_11b789f8;
  /* 11b78949 mov eax, 0x11b7e3a0 */
  EAX = (0x11b7e3a0u);
  /* 11b7894e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78950 jne 0x11b78970 */
  if (!C.zf) goto L_11b78970;
  /* 11b78952 cmp dword ptr [0x11b7e3a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e3a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78959 jne 0x11b78960 */
  if (!C.zf) goto L_11b78960;
  /* 11b7895b mov dword ptr [0x11b7e3a0], eax */
  w32((uint32_t)(0x11b7e3a0), (EAX));
L_11b78960:;
  /* 11b78960 cmp dword ptr [0x11b7e3a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e3a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78967 jne 0x11b78985 */
  if (!C.zf) goto L_11b78985;
  /* 11b78969 mov dword ptr [0x11b7e3a4], eax */
  w32((uint32_t)(0x11b7e3a4), (EAX));
  /* 11b7896e jmp 0x11b78985 */
  goto L_11b78985;
L_11b78970:;
  /* 11b78970 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b78972 mov eax, dword ptr [0x11b7e3a4] */
  EAX = (r32((uint32_t)(0x11b7e3a4)));
  /* 11b78977 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11b7897a mov dword ptr [0x11b7e3a4], esi */
  w32((uint32_t)(0x11b7e3a4), (ESI));
  /* 11b78980 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b78983 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11b78985:;
  /* 11b78985 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11b7898b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11b78991 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11b78994 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11b78997 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11b7899a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11b7899d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11b789a0 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11b789a2 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11b789a7:;
  /* 11b789a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b789a9 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b789ac setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11b789af dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b789b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b789b2 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b789b3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11b789b4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b789b6 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b789b9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b789bc cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b789c2 jl 0x11b789a7 */
  if ((C.sf!=C.of)) goto L_11b789a7;
  /* 11b789c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b789c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b789c7 push edi */
  push32((uint32_t)(EDI));
  /* 11b789c8 call 0x11b77010 */
  push32(0x11b789cdu); f_11b77010();
  /* 11b789cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b789d0:;
  /* 11b789d0 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b789d3 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b789d5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b789d7 jae 0x11b789f4 */
  if (!C.cf) goto L_11b789f4;
  /* 11b789d9 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11b789e0 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11b789e3 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11b789e5 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11b789ec add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b789f2 jmp 0x11b789d0 */
  goto L_11b789d0;
L_11b789f4:;
  /* 11b789f4 mov eax, esi */
  EAX = (ESI);
  /* 11b789f6 jmp 0x11b78a1f */
  goto L_11b78a1f;
L_11b789f8:;
  /* 11b789f8 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b789fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b789ff push edi */
  push32((uint32_t)(EDI));
  /* 11b78a00 call dword ptr [0x11b7b060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b060))), 0x11b78a06u);
L_11b78a06:;
  /* 11b78a06 cmp esi, 0x11b7e3a0 */
  { uint32_t _a=(ESI),_b=(0x11b7e3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78a0c je 0x11b78a1d */
  if (C.zf) goto L_11b78a1d;
  /* 11b78a0e push esi */
  push32((uint32_t)(ESI));
  /* 11b78a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b78a11 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b78a17 call dword ptr [0x11b7b050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b050))), 0x11b78a1du);
L_11b78a1d:;
  /* 11b78a1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b78a1f:;
  /* 11b78a1f pop edi */
  EDI = (pop32());
  /* 11b78a20 pop esi */
  ESI = (pop32());
  /* 11b78a21 pop ebp */
  EBP = (pop32());
  /* 11b78a22 pop ebx */
  EBX = (pop32());
  /* 11b78a23 ret  */
  ESPCHK(0x11b788e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a24 @ 0x11b78a24 (86 bytes, 27 insns) */
void f_11b78a24(void) {
  FTRACE(0x11b78a24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78a24 push esi */
  push32((uint32_t)(ESI));
  /* 11b78a25 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b78a29 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b78a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b78a30 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11b78a33 call dword ptr [0x11b7b060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b060))), 0x11b78a39u);
  /* 11b78a39 cmp dword ptr [0x11b803c0], esi */
  { uint32_t _a=(r32((uint32_t)(0x11b803c0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78a3f jne 0x11b78a49 */
  if (!C.zf) goto L_11b78a49;
  /* 11b78a41 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b78a44 mov dword ptr [0x11b803c0], eax */
  w32((uint32_t)(0x11b803c0), (EAX));
L_11b78a49:;
  /* 11b78a49 cmp esi, 0x11b7e3a0 */
  { uint32_t _a=(ESI),_b=(0x11b7e3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78a4f je 0x11b78a71 */
  if (C.zf) goto L_11b78a71;
  /* 11b78a51 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b78a54 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b78a56 push esi */
  push32((uint32_t)(ESI));
  /* 11b78a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b78a59 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b78a5b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b78a5d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b78a60 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b78a63 push dword ptr [0x11b81888] */
  push32((uint32_t)(r32((uint32_t)(0x11b81888))));
  /* 11b78a69 call dword ptr [0x11b7b050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b050))), 0x11b78a6fu);
  /* 11b78a6f pop esi */
  ESI = (pop32());
  /* 11b78a70 ret  */
  ESPCHK(0x11b78a24u, _esp0);
  ESP += 4; return;
L_11b78a71:;
  /* 11b78a71 or dword ptr [0x11b7e3b0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11b7e3b0)))|(0xffffffffu); w32((uint32_t)(0x11b7e3b0), (_r)); fl_logic(_r,32); }
  /* 11b78a78 pop esi */
  ESI = (pop32());
  /* 11b78a79 ret  */
  ESPCHK(0x11b78a24u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a7a @ 0x11b78a7a (194 bytes, 66 insns) */
void f_11b78a7a(void) {
  FTRACE(0x11b78a7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78a7a push ebp */
  push32((uint32_t)(EBP));
  /* 11b78a7b mov ebp, esp */
  EBP = (ESP);
  /* 11b78a7d push ecx */
  push32((uint32_t)(ECX));
  /* 11b78a7e push ebx */
  push32((uint32_t)(EBX));
  /* 11b78a7f push esi */
  push32((uint32_t)(ESI));
  /* 11b78a80 mov esi, dword ptr [0x11b7e3a4] */
  ESI = (r32((uint32_t)(0x11b7e3a4)));
  /* 11b78a86 push edi */
  push32((uint32_t)(EDI));
L_11b78a87:;
  /* 11b78a87 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78a8b je 0x11b78b25 */
  if (C.zf) goto L_11b78b25;
  /* 11b78a91 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b78a95 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11b78a9b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11b78aa0:;
  /* 11b78aa0 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78aa6 jne 0x11b78ae1 */
  if (!C.zf) goto L_11b78ae1;
  /* 11b78aa8 mov eax, ebx */
  EAX = (EBX);
  /* 11b78aaa push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b78aaf add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78ab2 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b78ab7 push eax */
  push32((uint32_t)(EAX));
  /* 11b78ab8 call dword ptr [0x11b7b060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b060))), 0x11b78abeu);
  /* 11b78abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78ac0 je 0x11b78ae1 */
  if (C.zf) goto L_11b78ae1;
  /* 11b78ac2 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11b78ac5 dec dword ptr [0x11b8149c] */
  { uint32_t _r=(r32((uint32_t)(0x11b8149c)))-1; w32((uint32_t)(0x11b8149c), (_r)); fl_dec(_r,32); }
  /* 11b78acb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11b78ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78ad0 je 0x11b78ad6 */
  if (C.zf) goto L_11b78ad6;
  /* 11b78ad2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78ad4 jbe 0x11b78ad9 */
  if ((C.cf||C.zf)) goto L_11b78ad9;
L_11b78ad6:;
  /* 11b78ad6 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11b78ad9:;
  /* 11b78ad9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b78adc dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11b78adf je 0x11b78aee */
  if (C.zf) goto L_11b78aee;
L_11b78ae1:;
  /* 11b78ae1 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78ae7 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78aea test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b78aec jge 0x11b78aa0 */
  if ((C.sf==C.of)) goto L_11b78aa0;
L_11b78aee:;
  /* 11b78aee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78af2 mov ecx, esi */
  ECX = (ESI);
  /* 11b78af4 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11b78af7 je 0x11b78b25 */
  if (C.zf) goto L_11b78b25;
  /* 11b78af9 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78afd jne 0x11b78b25 */
  if (!C.zf) goto L_11b78b25;
  /* 11b78aff push 1 */
  push32((uint32_t)(0x1u));
  /* 11b78b01 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11b78b04 pop edx */
  EDX = (pop32());
L_11b78b05:;
  /* 11b78b05 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78b08 jne 0x11b78b16 */
  if (!C.zf) goto L_11b78b16;
  /* 11b78b0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b78b0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78b0e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78b14 jl 0x11b78b05 */
  if ((C.sf!=C.of)) goto L_11b78b05;
L_11b78b16:;
  /* 11b78b16 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78b1c jne 0x11b78b25 */
  if (!C.zf) goto L_11b78b25;
  /* 11b78b1e push ecx */
  push32((uint32_t)(ECX));
  /* 11b78b1f call 0x11b78a24 */
  push32(0x11b78b24u); f_11b78a24();
  /* 11b78b24 pop ecx */
  ECX = (pop32());
L_11b78b25:;
  /* 11b78b25 cmp esi, dword ptr [0x11b7e3a4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b7e3a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78b2b je 0x11b78b37 */
  if (C.zf) goto L_11b78b37;
  /* 11b78b2d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78b31 jg 0x11b78a87 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b78a87;
L_11b78b37:;
  /* 11b78b37 pop edi */
  EDI = (pop32());
  /* 11b78b38 pop esi */
  ESI = (pop32());
  /* 11b78b39 pop ebx */
  EBX = (pop32());
  /* 11b78b3a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b78b3b ret  */
  ESPCHK(0x11b78a7au, _esp0);
  ESP += 4; return;
}

/* FUN_10008b3c @ 0x11b78b3c (87 bytes, 34 insns) */
void f_11b78b3c(void) {
  FTRACE(0x11b78b3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78b3c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b78b40 mov edx, 0x11b7e3a0 */
  EDX = (0x11b7e3a0u);
  /* 11b78b45 push esi */
  push32((uint32_t)(ESI));
  /* 11b78b46 mov ecx, edx */
  ECX = (EDX);
L_11b78b48:;
  /* 11b78b48 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78b4b jbe 0x11b78b52 */
  if ((C.cf||C.zf)) goto L_11b78b52;
  /* 11b78b4d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78b50 jb 0x11b78b5a */
  if (C.cf) goto L_11b78b5a;
L_11b78b52:;
  /* 11b78b52 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11b78b54 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78b56 je 0x11b78b8f */
  if (C.zf) goto L_11b78b8f;
  /* 11b78b58 jmp 0x11b78b48 */
  goto L_11b78b48;
L_11b78b5a:;
  /* 11b78b5a test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11b78b5c jne 0x11b78b8f */
  if (!C.zf) goto L_11b78b8f;
  /* 11b78b5e mov esi, eax */
  ESI = (EAX);
  /* 11b78b60 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11b78b65 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11b78b6b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78b6d jb 0x11b78b8f */
  if (C.cf) goto L_11b78b8f;
  /* 11b78b6f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11b78b73 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11b78b75 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b78b79 mov ecx, eax */
  ECX = (EAX);
  /* 11b78b7b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11b78b80 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78b82 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11b78b84 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78b86 pop esi */
  ESI = (pop32());
  /* 11b78b87 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b78b8a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11b78b8e ret  */
  ESPCHK(0x11b78b3cu, _esp0);
  ESP += 4; return;
L_11b78b8f:;
  /* 11b78b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b78b91 pop esi */
  ESI = (pop32());
  /* 11b78b92 ret  */
  ESPCHK(0x11b78b3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008b93 @ 0x11b78b93 (69 bytes, 19 insns) */
void f_11b78b93(void) {
  FTRACE(0x11b78b93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78b93 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b78b97 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b78b9b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78b9e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11b78ba1 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11b78ba5 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b78ba9 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11b78bac add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b78bae and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11b78bb1 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78bb7 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11b78bbe jne 0x11b78bd7 */
  if (!C.zf) goto L_11b78bd7;
  /* 11b78bc0 inc dword ptr [0x11b8149c] */
  { uint32_t _r=(r32((uint32_t)(0x11b8149c)))+1; w32((uint32_t)(0x11b8149c), (_r)); fl_inc(_r,32); }
  /* 11b78bc6 cmp dword ptr [0x11b8149c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11b8149c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78bcd jne 0x11b78bd7 */
  if (!C.zf) goto L_11b78bd7;
  /* 11b78bcf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b78bd1 call 0x11b78a7a */
  push32(0x11b78bd6u); f_11b78a7a();
  /* 11b78bd6 pop ecx */
  ECX = (pop32());
L_11b78bd7:;
  /* 11b78bd7 ret  */
  ESPCHK(0x11b78b93u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bd8 @ 0x11b78bd8 (520 bytes, 180 insns) */
void f_11b78bd8(void) {
  FTRACE(0x11b78bd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78bd8 push ebp */
  push32((uint32_t)(EBP));
  /* 11b78bd9 mov ebp, esp */
  EBP = (ESP);
  /* 11b78bdb push ecx */
  push32((uint32_t)(ECX));
  /* 11b78bdc push ecx */
  push32((uint32_t)(ECX));
  /* 11b78bdd push ebx */
  push32((uint32_t)(EBX));
  /* 11b78bde push esi */
  push32((uint32_t)(ESI));
  /* 11b78bdf mov esi, dword ptr [0x11b803c0] */
  ESI = (r32((uint32_t)(0x11b803c0)));
  /* 11b78be5 push edi */
  push32((uint32_t)(EDI));
L_11b78be6:;
  /* 11b78be6 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b78be9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78bec je 0x11b78c91 */
  if (C.zf) goto L_11b78c91;
  /* 11b78bf2 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11b78bf5 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11b78bfb mov eax, edi */
  EAX = (EDI);
  /* 11b78bfd sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78bff sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78c02 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11b78c05 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11b78c08 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78c0a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78c0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b78c0f jae 0x11b78c4b */
  if (!C.cf) goto L_11b78c4b;
L_11b78c11:;
  /* 11b78c11 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11b78c13 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78c16 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78c18 jl 0x11b78c34 */
  if ((C.sf!=C.of)) goto L_11b78c34;
  /* 11b78c1a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78c1d jbe 0x11b78c34 */
  if ((C.cf||C.zf)) goto L_11b78c34;
  /* 11b78c1f push ebx */
  push32((uint32_t)(EBX));
  /* 11b78c20 push ecx */
  push32((uint32_t)(ECX));
  /* 11b78c21 push eax */
  push32((uint32_t)(EAX));
  /* 11b78c22 call 0x11b78de0 */
  push32(0x11b78c27u); f_11b78de0();
  /* 11b78c27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78c2c jne 0x11b78ca3 */
  if (!C.zf) goto L_11b78ca3;
  /* 11b78c2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b78c31 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11b78c34:;
  /* 11b78c34 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78c37 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11b78c3d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78c42 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78c44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b78c47 jb 0x11b78c11 */
  if (C.cf) goto L_11b78c11;
  /* 11b78c49 jmp 0x11b78c4e */
  goto L_11b78c4e;
L_11b78c4b:;
  /* 11b78c4b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b78c4e:;
  /* 11b78c4e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11b78c51 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b78c54 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11b78c57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b78c5a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78c5c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b78c5f jae 0x11b78c94 */
  if (!C.cf) goto L_11b78c94;
L_11b78c61:;
  /* 11b78c61 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11b78c63 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78c65 jl 0x11b78c80 */
  if ((C.sf!=C.of)) goto L_11b78c80;
  /* 11b78c67 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78c6a jbe 0x11b78c80 */
  if ((C.cf||C.zf)) goto L_11b78c80;
  /* 11b78c6c push ebx */
  push32((uint32_t)(EBX));
  /* 11b78c6d push eax */
  push32((uint32_t)(EAX));
  /* 11b78c6e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11b78c71 call 0x11b78de0 */
  push32(0x11b78c76u); f_11b78de0();
  /* 11b78c76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78c7b jne 0x11b78ca3 */
  if (!C.zf) goto L_11b78ca3;
  /* 11b78c7d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11b78c80:;
  /* 11b78c80 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b78c87 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78c8a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78c8d jb 0x11b78c61 */
  if (C.cf) goto L_11b78c61;
  /* 11b78c8f jmp 0x11b78c94 */
  goto L_11b78c94;
L_11b78c91:;
  /* 11b78c91 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b78c94:;
  /* 11b78c94 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11b78c96 cmp esi, dword ptr [0x11b803c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b803c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78c9c je 0x11b78cb3 */
  if (C.zf) goto L_11b78cb3;
  /* 11b78c9e jmp 0x11b78be6 */
  goto L_11b78be6;
L_11b78ca3:;
  /* 11b78ca3 mov dword ptr [0x11b803c0], esi */
  w32((uint32_t)(0x11b803c0), (ESI));
  /* 11b78ca9 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b78cab mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11b78cae jmp 0x11b78ddb */
  goto L_11b78ddb;
L_11b78cb3:;
  /* 11b78cb3 mov eax, 0x11b7e3a0 */
  EAX = (0x11b7e3a0u);
  /* 11b78cb8 mov edi, eax */
  EDI = (EAX);
L_11b78cba:;
  /* 11b78cba cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78cbe je 0x11b78cc6 */
  if (C.zf) goto L_11b78cc6;
  /* 11b78cc0 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78cc4 jne 0x11b78cd2 */
  if (!C.zf) goto L_11b78cd2;
L_11b78cc6:;
  /* 11b78cc6 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11b78cc8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78cca je 0x11b78da7 */
  if (C.zf) goto L_11b78da7;
  /* 11b78cd0 jmp 0x11b78cba */
  goto L_11b78cba;
L_11b78cd2:;
  /* 11b78cd2 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11b78cd5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b78cd9 mov esi, ebx */
  ESI = (EBX);
  /* 11b78cdb mov eax, ebx */
  EAX = (EBX);
  /* 11b78cdd sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78cdf sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78ce2 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11b78ce5 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11b78ce8 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78ceb cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78cee jne 0x11b78d01 */
  if (!C.zf) goto L_11b78d01;
L_11b78cf0:;
  /* 11b78cf0 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78cf4 jge 0x11b78d01 */
  if ((C.sf==C.of)) goto L_11b78d01;
  /* 11b78cf6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78cf9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b78cfc cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78cff je 0x11b78cf0 */
  if (C.zf) goto L_11b78cf0;
L_11b78d01:;
  /* 11b78d01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b78d04 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b78d06 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11b78d09 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b78d0e push eax */
  push32((uint32_t)(EAX));
  /* 11b78d0f push esi */
  push32((uint32_t)(ESI));
  /* 11b78d10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b78d13 call dword ptr [0x11b7b024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b024))), 0x11b78d19u);
  /* 11b78d19 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78d1b jne 0x11b78dd9 */
  if (!C.zf) goto L_11b78dd9;
  /* 11b78d21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b78d23 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11b78d26 push esi */
  push32((uint32_t)(ESI));
  /* 11b78d27 call 0x11b77010 */
  push32(0x11b78d2cu); f_11b77010();
  /* 11b78d2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b78d2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78d32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b78d34 mov ecx, ebx */
  ECX = (EBX);
  /* 11b78d36 jle 0x11b78d68 */
  if ((C.zf||C.sf!=C.of)) goto L_11b78d68;
  /* 11b78d38 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11b78d3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b78d3e:;
  /* 11b78d3e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11b78d45 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11b78d48 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11b78d4b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11b78d50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b78d52 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b78d54 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11b78d5b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78d60 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78d63 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11b78d66 jne 0x11b78d3e */
  if (!C.zf) goto L_11b78d3e;
L_11b78d68:;
  /* 11b78d68 mov dword ptr [0x11b803c0], edi */
  w32((uint32_t)(0x11b803c0), (EDI));
  /* 11b78d6e lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11b78d74:;
  /* 11b78d74 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78d76 jae 0x11b78d84 */
  if (!C.cf) goto L_11b78d84;
  /* 11b78d78 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78d7b je 0x11b78d82 */
  if (C.zf) goto L_11b78d82;
  /* 11b78d7d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78d80 jmp 0x11b78d74 */
  goto L_11b78d74;
L_11b78d82:;
  /* 11b78d82 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b78d84:;
  /* 11b78d84 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78d86 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11b78d88 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11b78d8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78d8e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11b78d91 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11b78d94 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b78d96 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b78d99 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11b78d9d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11b78da3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11b78da5 jmp 0x11b78ddb */
  goto L_11b78ddb;
L_11b78da7:;
  /* 11b78da7 call 0x11b788e0 */
  push32(0x11b78dacu); f_11b788e0();
  /* 11b78dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78dae je 0x11b78dd9 */
  if (C.zf) goto L_11b78dd9;
  /* 11b78db0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b78db3 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11b78db6 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11b78dba mov dword ptr [0x11b803c0], eax */
  w32((uint32_t)(0x11b803c0), (EAX));
  /* 11b78dbf mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b78dc1 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11b78dc6 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78dc8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b78dcb movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11b78dce sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b78dd1 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11b78dd7 jmp 0x11b78ddb */
  goto L_11b78ddb;
L_11b78dd9:;
  /* 11b78dd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b78ddb:;
  /* 11b78ddb pop edi */
  EDI = (pop32());
  /* 11b78ddc pop esi */
  ESI = (pop32());
  /* 11b78ddd pop ebx */
  EBX = (pop32());
  /* 11b78dde leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b78ddf ret  */
  ESPCHK(0x11b78bd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10008de0 @ 0x11b78de0 (292 bytes, 125 insns) */
void f_11b78de0(void) {
  FTRACE(0x11b78de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b78de1 mov ebp, esp */
  EBP = (ESP);
  /* 11b78de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b78de4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b78de7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b78dea push ebx */
  push32((uint32_t)(EBX));
  /* 11b78deb push esi */
  push32((uint32_t)(ESI));
  /* 11b78dec mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11b78def push edi */
  push32((uint32_t)(EDI));
  /* 11b78df0 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11b78df2 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11b78df8 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78dfa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b78dfd mov eax, edi */
  EAX = (EDI);
  /* 11b78dff mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b78e02 jb 0x11b78e25 */
  if (C.cf) goto L_11b78e25;
  /* 11b78e04 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11b78e07 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b78e09 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78e0b jae 0x11b78e14 */
  if (!C.cf) goto L_11b78e14;
  /* 11b78e0d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b78e0f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b78e12 jmp 0x11b78e1d */
  goto L_11b78e1d;
L_11b78e14:;
  /* 11b78e14 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b78e18 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11b78e1b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b78e1d:;
  /* 11b78e1d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11b78e20 jmp 0x11b78ef3 */
  goto L_11b78ef3;
L_11b78e25:;
  /* 11b78e25 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78e27 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b78e2a je 0x11b78e2e */
  if (C.zf) goto L_11b78e2e;
  /* 11b78e2c mov eax, esi */
  EAX = (ESI);
L_11b78e2e:;
  /* 11b78e2e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11b78e31 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78e33 jae 0x11b78e78 */
  if (!C.cf) goto L_11b78e78;
L_11b78e35:;
  /* 11b78e35 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11b78e37 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11b78e39 jne 0x11b78e6b */
  if (!C.zf) goto L_11b78e6b;
  /* 11b78e3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b78e3d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11b78e40 pop esi */
  ESI = (pop32());
L_11b78e41:;
  /* 11b78e41 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b78e44 jne 0x11b78e4a */
  if (!C.zf) goto L_11b78e4a;
  /* 11b78e46 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b78e47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b78e48 jmp 0x11b78e41 */
  goto L_11b78e41;
L_11b78e4a:;
  /* 11b78e4a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78e4c jae 0x11b78e9c */
  if (!C.cf) goto L_11b78e9c;
  /* 11b78e4e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78e51 jne 0x11b78e58 */
  if (!C.zf) goto L_11b78e58;
  /* 11b78e53 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11b78e56 jmp 0x11b78e64 */
  goto L_11b78e64;
L_11b78e58:;
  /* 11b78e58 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b78e5b cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78e5e jb 0x11b78efd */
  if (C.cf) goto L_11b78efd;
L_11b78e64:;
  /* 11b78e64 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11b78e67 mov eax, ebx */
  EAX = (EBX);
  /* 11b78e69 jmp 0x11b78e70 */
  goto L_11b78e70;
L_11b78e6b:;
  /* 11b78e6b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11b78e6e add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b78e70:;
  /* 11b78e70 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11b78e73 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78e76 jb 0x11b78e35 */
  if (C.cf) goto L_11b78e35;
L_11b78e78:;
  /* 11b78e78 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11b78e7b:;
  /* 11b78e7b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78e7d jae 0x11b78efd */
  if (!C.cf) goto L_11b78efd;
  /* 11b78e7f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11b78e82 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78e85 jae 0x11b78efd */
  if (!C.cf) goto L_11b78efd;
  /* 11b78e87 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b78e89 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b78e8b jne 0x11b78ecd */
  if (!C.zf) goto L_11b78ecd;
  /* 11b78e8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b78e8f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11b78e92 pop eax */
  EAX = (pop32());
L_11b78e93:;
  /* 11b78e93 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b78e96 jne 0x11b78ebd */
  if (!C.zf) goto L_11b78ebd;
  /* 11b78e98 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b78e99 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b78e9a jmp 0x11b78e93 */
  goto L_11b78e93;
L_11b78e9c:;
  /* 11b78e9c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11b78e9f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78ea2 jae 0x11b78ead */
  if (!C.cf) goto L_11b78ead;
  /* 11b78ea4 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78ea6 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11b78ea8 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11b78eab jmp 0x11b78eb6 */
  goto L_11b78eb6;
L_11b78ead:;
  /* 11b78ead and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b78eb1 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11b78eb4 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11b78eb6:;
  /* 11b78eb6 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b78eb8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78ebb jmp 0x11b78ef3 */
  goto L_11b78ef3;
L_11b78ebd:;
  /* 11b78ebd cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78ebf jae 0x11b78ed4 */
  if (!C.cf) goto L_11b78ed4;
  /* 11b78ec1 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b78ec4 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78ec7 jb 0x11b78efd */
  if (C.cf) goto L_11b78efd;
  /* 11b78ec9 mov esi, ebx */
  ESI = (EBX);
  /* 11b78ecb jmp 0x11b78e7b */
  goto L_11b78e7b;
L_11b78ecd:;
  /* 11b78ecd movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11b78ed0 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b78ed2 jmp 0x11b78e7b */
  goto L_11b78e7b;
L_11b78ed4:;
  /* 11b78ed4 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11b78ed7 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78eda jae 0x11b78ee5 */
  if (!C.cf) goto L_11b78ee5;
  /* 11b78edc sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78ede mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11b78ee0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b78ee3 jmp 0x11b78eee */
  goto L_11b78eee;
L_11b78ee5:;
  /* 11b78ee5 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b78ee9 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11b78eec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b78eee:;
  /* 11b78eee mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b78ef0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11b78ef3:;
  /* 11b78ef3 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b78ef6 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b78ef9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b78efb jmp 0x11b78eff */
  goto L_11b78eff;
L_11b78efd:;
  /* 11b78efd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b78eff:;
  /* 11b78eff pop edi */
  EDI = (pop32());
  /* 11b78f00 pop esi */
  ESI = (pop32());
  /* 11b78f01 pop ebx */
  EBX = (pop32());
  /* 11b78f02 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b78f03 ret  */
  ESPCHK(0x11b78de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f04 @ 0x11b78f04 (137 bytes, 50 insns) */
void f_11b78f04(void) {
  FTRACE(0x11b78f04u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78f04 push ebx */
  push32((uint32_t)(EBX));
  /* 11b78f05 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b78f07 cmp dword ptr [0x11b814a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b814a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78f0d push esi */
  push32((uint32_t)(ESI));
  /* 11b78f0e push edi */
  push32((uint32_t)(EDI));
  /* 11b78f0f jne 0x11b78f53 */
  if (!C.zf) goto L_11b78f53;
  /* 11b78f11 push 0x11b7b5b0 */
  push32((uint32_t)(0x11b7b5b0u));
  /* 11b78f16 call dword ptr [0x11b7b01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b01c))), 0x11b78f1cu);
  /* 11b78f1c mov edi, eax */
  EDI = (EAX);
  /* 11b78f1e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b78f20 je 0x11b78f89 */
  if (C.zf) goto L_11b78f89;
  /* 11b78f22 mov esi, dword ptr [0x11b7b0c0] */
  ESI = (r32((uint32_t)(0x11b7b0c0)));
  /* 11b78f28 push 0x11b7b5a4 */
  push32((uint32_t)(0x11b7b5a4u));
  /* 11b78f2d push edi */
  push32((uint32_t)(EDI));
  /* 11b78f2e call esi */
  call_ind((uint32_t)(ESI), 0x11b78f30u);
  /* 11b78f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78f32 mov dword ptr [0x11b814a0], eax */
  w32((uint32_t)(0x11b814a0), (EAX));
  /* 11b78f37 je 0x11b78f89 */
  if (C.zf) goto L_11b78f89;
  /* 11b78f39 push 0x11b7b594 */
  push32((uint32_t)(0x11b7b594u));
  /* 11b78f3e push edi */
  push32((uint32_t)(EDI));
  /* 11b78f3f call esi */
  call_ind((uint32_t)(ESI), 0x11b78f41u);
  /* 11b78f41 push 0x11b7b580 */
  push32((uint32_t)(0x11b7b580u));
  /* 11b78f46 push edi */
  push32((uint32_t)(EDI));
  /* 11b78f47 mov dword ptr [0x11b814a4], eax */
  w32((uint32_t)(0x11b814a4), (EAX));
  /* 11b78f4c call esi */
  call_ind((uint32_t)(ESI), 0x11b78f4eu);
  /* 11b78f4e mov dword ptr [0x11b814a8], eax */
  w32((uint32_t)(0x11b814a8), (EAX));
L_11b78f53:;
  /* 11b78f53 mov eax, dword ptr [0x11b814a4] */
  EAX = (r32((uint32_t)(0x11b814a4)));
  /* 11b78f58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78f5a je 0x11b78f72 */
  if (C.zf) goto L_11b78f72;
  /* 11b78f5c call eax */
  call_ind((uint32_t)(EAX), 0x11b78f5eu);
  /* 11b78f5e mov ebx, eax */
  EBX = (EAX);
  /* 11b78f60 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b78f62 je 0x11b78f72 */
  if (C.zf) goto L_11b78f72;
  /* 11b78f64 mov eax, dword ptr [0x11b814a8] */
  EAX = (r32((uint32_t)(0x11b814a8)));
  /* 11b78f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b78f6b je 0x11b78f72 */
  if (C.zf) goto L_11b78f72;
  /* 11b78f6d push ebx */
  push32((uint32_t)(EBX));
  /* 11b78f6e call eax */
  call_ind((uint32_t)(EAX), 0x11b78f70u);
  /* 11b78f70 mov ebx, eax */
  EBX = (EAX);
L_11b78f72:;
  /* 11b78f72 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11b78f76 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11b78f7a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11b78f7e push ebx */
  push32((uint32_t)(EBX));
  /* 11b78f7f call dword ptr [0x11b814a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b814a0))), 0x11b78f85u);
L_11b78f85:;
  /* 11b78f85 pop edi */
  EDI = (pop32());
  /* 11b78f86 pop esi */
  ESI = (pop32());
  /* 11b78f87 pop ebx */
  EBX = (pop32());
  /* 11b78f88 ret  */
  ESPCHK(0x11b78f04u, _esp0);
  ESP += 4; return;
L_11b78f89:;
  /* 11b78f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b78f8b jmp 0x11b78f85 */
  goto L_11b78f85;
}

/* _strncpy @ 0x11b78f90 (254 bytes, 109 insns) */
void f_11b78f90(void) {
  FTRACE(0x11b78f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b78f90 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b78f94 push edi */
  push32((uint32_t)(EDI));
  /* 11b78f95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b78f97 je 0x11b79013 */
  if (C.zf) goto L_11b79013;
  /* 11b78f99 push esi */
  push32((uint32_t)(ESI));
  /* 11b78f9a push ebx */
  push32((uint32_t)(EBX));
  /* 11b78f9b mov ebx, ecx */
  EBX = (ECX);
  /* 11b78f9d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11b78fa1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11b78fa7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b78fab jne 0x11b78fb4 */
  if (!C.zf) goto L_11b78fb4;
  /* 11b78fad shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b78fb0 jne 0x11b79021 */
  if (!C.zf) goto L_11b79021;
  /* 11b78fb2 jmp 0x11b78fd5 */
  goto L_11b78fd5;
L_11b78fb4:;
  /* 11b78fb4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b78fb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b78fb7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b78fb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b78fba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b78fbb je 0x11b78fe2 */
  if (C.zf) goto L_11b78fe2;
  /* 11b78fbd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b78fbf je 0x11b78fea */
  if (C.zf) goto L_11b78fea;
  /* 11b78fc1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11b78fc7 jne 0x11b78fb4 */
  if (!C.zf) goto L_11b78fb4;
  /* 11b78fc9 mov ebx, ecx */
  EBX = (ECX);
  /* 11b78fcb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b78fce jne 0x11b79021 */
  if (!C.zf) goto L_11b79021;
L_11b78fd0:;
  /* 11b78fd0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11b78fd3 je 0x11b78fe2 */
  if (C.zf) goto L_11b78fe2;
L_11b78fd5:;
  /* 11b78fd5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b78fd7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b78fd8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b78fda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b78fdb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b78fdd je 0x11b7900e */
  if (C.zf) goto L_11b7900e;
  /* 11b78fdf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b78fe0 jne 0x11b78fd5 */
  if (!C.zf) goto L_11b78fd5;
L_11b78fe2:;
  /* 11b78fe2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b78fe6 pop ebx */
  EBX = (pop32());
  /* 11b78fe7 pop esi */
  ESI = (pop32());
  /* 11b78fe8 pop edi */
  EDI = (pop32());
  /* 11b78fe9 ret  */
  ESPCHK(0x11b78f90u, _esp0);
  ESP += 4; return;
L_11b78fea:;
  /* 11b78fea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b78ff0 je 0x11b79004 */
  if (C.zf) goto L_11b79004;
L_11b78ff2:;
  /* 11b78ff2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b78ff4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b78ff5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b78ff6 je 0x11b79086 */
  if (C.zf) goto L_11b79086;
  /* 11b78ffc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b79002 jne 0x11b78ff2 */
  if (!C.zf) goto L_11b78ff2;
L_11b79004:;
  /* 11b79004 mov ebx, ecx */
  EBX = (ECX);
  /* 11b79006 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b79009 jne 0x11b79077 */
  if (!C.zf) goto L_11b79077;
L_11b7900b:;
  /* 11b7900b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b7900d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11b7900e:;
  /* 11b7900e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b7900f jne 0x11b7900b */
  if (!C.zf) goto L_11b7900b;
  /* 11b79011 pop ebx */
  EBX = (pop32());
  /* 11b79012 pop esi */
  ESI = (pop32());
L_11b79013:;
  /* 11b79013 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b79017 pop edi */
  EDI = (pop32());
  /* 11b79018 ret  */
  ESPCHK(0x11b78f90u, _esp0);
  ESP += 4; return;
L_11b79019:;
  /* 11b79019 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b7901b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7901e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b7901f je 0x11b78fd0 */
  if (C.zf) goto L_11b78fd0;
L_11b79021:;
  /* 11b79021 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b79026 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b79028 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7902a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b7902d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7902f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11b79031 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79034 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b79039 je 0x11b79019 */
  if (C.zf) goto L_11b79019;
  /* 11b7903b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b7903d je 0x11b7906b */
  if (C.zf) goto L_11b7906b;
  /* 11b7903f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b79041 je 0x11b79061 */
  if (C.zf) goto L_11b79061;
  /* 11b79043 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b79049 je 0x11b79057 */
  if (C.zf) goto L_11b79057;
  /* 11b7904b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b79051 jne 0x11b79019 */
  if (!C.zf) goto L_11b79019;
  /* 11b79053 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b79055 jmp 0x11b7906f */
  goto L_11b7906f;
L_11b79057:;
  /* 11b79057 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b7905d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b7905f jmp 0x11b7906f */
  goto L_11b7906f;
L_11b79061:;
  /* 11b79061 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b79067 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b79069 jmp 0x11b7906f */
  goto L_11b7906f;
L_11b7906b:;
  /* 11b7906b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b7906d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11b7906f:;
  /* 11b7906f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79072 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b79074 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b79075 je 0x11b79081 */
  if (C.zf) goto L_11b79081;
L_11b79077:;
  /* 11b79077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b79079:;
  /* 11b79079 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11b7907b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7907e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b7907f jne 0x11b79079 */
  if (!C.zf) goto L_11b79079;
L_11b79081:;
  /* 11b79081 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11b79084 jne 0x11b7900b */
  if (!C.zf) goto L_11b7900b;
L_11b79086:;
  /* 11b79086 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b7908a pop ebx */
  EBX = (pop32());
  /* 11b7908b pop esi */
  ESI = (pop32());
  /* 11b7908c pop edi */
  EDI = (pop32());
  /* 11b7908d ret  */
  ESPCHK(0x11b78f90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000908e @ 0x11b7908e (27 bytes, 13 insns) */
void f_11b7908e(void) {
  FTRACE(0x11b7908eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7908e mov eax, dword ptr [0x11b814ac] */
  EAX = (r32((uint32_t)(0x11b814ac)));
  /* 11b79093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b79095 je 0x11b790a6 */
  if (C.zf) goto L_11b790a6;
  /* 11b79097 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b7909b call eax */
  call_ind((uint32_t)(EAX), 0x11b7909du);
  /* 11b7909d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7909f pop ecx */
  ECX = (pop32());
  /* 11b790a0 je 0x11b790a6 */
  if (C.zf) goto L_11b790a6;
  /* 11b790a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b790a4 pop eax */
  EAX = (pop32());
  /* 11b790a5 ret  */
  ESPCHK(0x11b7908eu, _esp0);
  ESP += 4; return;
L_11b790a6:;
  /* 11b790a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b790a8 ret  */
  ESPCHK(0x11b7908eu, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11b790ac (32 bytes, 18 insns) */
void f_11b790ac(void) {
  FTRACE(0x11b790acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b790ac push ebp */
  push32((uint32_t)(EBP));
  /* 11b790ad mov ebp, esp */
  EBP = (ESP);
  /* 11b790af push ebx */
  push32((uint32_t)(EBX));
  /* 11b790b0 push esi */
  push32((uint32_t)(ESI));
  /* 11b790b1 push edi */
  push32((uint32_t)(EDI));
  /* 11b790b2 push ebp */
  push32((uint32_t)(EBP));
  /* 11b790b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b790b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b790b7 push 0x11b790c4 */
  push32((uint32_t)(0x11b790c4u));
  /* 11b790bc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b790bf call 0x11b7a714 */
  push32(0x11b790c4u); f_11b7a714();
  /* 11b790c4 pop ebp */
  EBP = (pop32());
  /* 11b790c5 pop edi */
  EDI = (pop32());
  /* 11b790c6 pop esi */
  ESI = (pop32());
  /* 11b790c7 pop ebx */
  EBX = (pop32());
  /* 11b790c8 mov esp, ebp */
  ESP = (EBP);
  /* 11b790ca pop ebp */
  EBP = (pop32());
  /* 11b790cb ret  */
  ESPCHK(0x11b790acu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11b790ee (104 bytes, 33 insns) */
void f_11b790ee(void) {
  FTRACE(0x11b790eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b790ee push ebx */
  push32((uint32_t)(EBX));
  /* 11b790ef push esi */
  push32((uint32_t)(ESI));
  /* 11b790f0 push edi */
  push32((uint32_t)(EDI));
  /* 11b790f1 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b790f5 push eax */
  push32((uint32_t)(EAX));
  /* 11b790f6 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11b790f8 push 0x11b790cc */
  push32((uint32_t)(0x11b790ccu));
  /* 11b790fd push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11b79104 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11b7910b:;
  /* 11b7910b mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11b7910f mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b79112 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11b79115 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79118 je 0x11b79148 */
  if (C.zf) goto L_11b79148;
  /* 11b7911a cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7911e je 0x11b79148 */
  if (C.zf) goto L_11b79148;
  /* 11b79120 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11b79123 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11b79126 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11b7912a mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11b7912d cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79132 jne 0x11b79146 */
  if (!C.zf) goto L_11b79146;
  /* 11b79134 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11b79139 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11b7913d call 0x11b79182 */
  push32(0x11b79142u); f_11b79182();
  /* 11b79142 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11b79146u);
L_11b79146:;
  /* 11b79146 jmp 0x11b7910b */
  goto L_11b7910b;
L_11b79148:;
  /* 11b79148 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11b7914f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79152 pop edi */
  EDI = (pop32());
  /* 11b79153 pop esi */
  ESI = (pop32());
  /* 11b79154 pop ebx */
  EBX = (pop32());
  /* 11b79155 ret  */
  ESPCHK(0x11b790eeu, _esp0);
  ESP += 4; return;
}

