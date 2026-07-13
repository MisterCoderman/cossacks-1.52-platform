#include "recomp.h"

/* OnInit @ 0x10c51005 (5 bytes, 1 insns) */
void f_10c51005(void) {
  FTRACE(0x10c51005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51005 jmp 0x10c51090 */
  f_10c51090(); return;
}

/* thunk_FUN_10001030 @ 0x10c5100a (5 bytes, 1 insns) */
void f_10c5100a(void) {
  FTRACE(0x10c5100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5100a jmp 0x10c51030 */
  f_10c51030(); return;
}

/* ProcessScenary @ 0x10c5100f (5 bytes, 1 insns) */
void f_10c5100f(void) {
  FTRACE(0x10c5100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c5100f jmp 0x10c51100 */
  f_10c51100(); return;
}

/* FUN_10001030 @ 0x10c51030 (67 bytes, 26 insns) */
void f_10c51030(void) {
  FTRACE(0x10c51030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51030 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51031 mov ebp, esp */
  EBP = (ESP);
  /* 10c51033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c51036 push ebx */
  push32((uint32_t)(EBX));
  /* 10c51037 push esi */
  push32((uint32_t)(ESI));
  /* 10c51038 push edi */
  push32((uint32_t)(EDI));
  /* 10c51039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10c5103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10c51041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10c51046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c51048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51052 je 0x10c51056 */
  if (C.zf) goto L_10c51056;
  /* 10c51054 jmp 0x10c5105b */
  goto L_10c5105b;
L_10c51056:;
  /* 10c51056 call 0x10c51005 */
  push32(0x10c5105bu); f_10c51005();
L_10c5105b:;
  /* 10c5105b mov eax, 1 */
  EAX = (0x1u);
  /* 10c51060 pop edi */
  EDI = (pop32());
  /* 10c51061 pop esi */
  ESI = (pop32());
  /* 10c51062 pop ebx */
  EBX = (pop32());
  /* 10c51063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51068 call 0x10c51360 */
  push32(0x10c5106du); f_10c51360();
  /* 10c5106d mov esp, ebp */
  ESP = (EBP);
  /* 10c5106f pop ebp */
  EBP = (pop32());
  /* 10c51070 ret 0xc */
  ESPCHK(0x10c51030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10c51090 (81 bytes, 30 insns) */
void f_10c51090(void) {
  FTRACE(0x10c51090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51090 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51091 mov ebp, esp */
  EBP = (ESP);
  /* 10c51093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c51096 push ebx */
  push32((uint32_t)(EBX));
  /* 10c51097 push esi */
  push32((uint32_t)(ESI));
  /* 10c51098 push edi */
  push32((uint32_t)(EDI));
  /* 10c51099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10c5109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10c510a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10c510a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c510a8 mov esi, esp */
  ESI = (ESP);
  /* 10c510aa call dword ptr [0x10c8039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8039c))), 0x10c510b0u);
  /* 10c510b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c510b2 call 0x10c51360 */
  push32(0x10c510b7u); f_10c51360();
  /* 10c510b7 mov esi, esp */
  ESI = (ESP);
  /* 10c510b9 push 0x10c7901c */
  push32((uint32_t)(0x10c7901cu));
  /* 10c510be push 1 */
  push32((uint32_t)(0x1u));
  /* 10c510c0 call dword ptr [0x10c803a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c803a0))), 0x10c510c6u);
  /* 10c510c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c510c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c510cb call 0x10c51360 */
  push32(0x10c510d0u); f_10c51360();
  /* 10c510d0 pop edi */
  EDI = (pop32());
  /* 10c510d1 pop esi */
  ESI = (pop32());
  /* 10c510d2 pop ebx */
  EBX = (pop32());
  /* 10c510d3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c510d6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c510d8 call 0x10c51360 */
  push32(0x10c510ddu); f_10c51360();
  /* 10c510dd mov esp, ebp */
  ESP = (EBP);
  /* 10c510df pop ebp */
  EBP = (pop32());
  /* 10c510e0 ret  */
  ESPCHK(0x10c51090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001100 @ 0x10c51100 (453 bytes, 142 insns) */
void f_10c51100(void) {
  FTRACE(0x10c51100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51100 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51101 mov ebp, esp */
  EBP = (ESP);
  /* 10c51103 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c51106 push ebx */
  push32((uint32_t)(EBX));
  /* 10c51107 push esi */
  push32((uint32_t)(ESI));
  /* 10c51108 push edi */
  push32((uint32_t)(EDI));
  /* 10c51109 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10c5110c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10c51111 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10c51116 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c51118 mov esi, esp */
  ESI = (ESP);
  /* 10c5111a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5111c call dword ptr [0x10c8038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8038c))), 0x10c51122u);
  /* 10c51122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51125 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51127 call 0x10c51360 */
  push32(0x10c5112cu); f_10c51360();
  /* 10c5112c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c51131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c51133 je 0x10c512b4 */
  if (C.zf) goto L_10c512b4;
  /* 10c51139 mov esi, esp */
  ESI = (ESP);
  /* 10c5113b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5113d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5113f call dword ptr [0x10c80390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80390))), 0x10c51145u);
  /* 10c51145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51148 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5114a call 0x10c51360 */
  push32(0x10c5114fu); f_10c51360();
  /* 10c5114f mov esi, esp */
  ESI = (ESP);
  /* 10c51151 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c51156 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c51158 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5115a call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c51160u);
  /* 10c51160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51165 call 0x10c51360 */
  push32(0x10c5116au); f_10c51360();
  /* 10c5116a mov esi, esp */
  ESI = (ESP);
  /* 10c5116c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c51171 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51173 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51175 call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c5117bu);
  /* 10c5117b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5117e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51180 call 0x10c51360 */
  push32(0x10c51185u); f_10c51360();
  /* 10c51185 mov esi, esp */
  ESI = (ESP);
  /* 10c51187 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c5118c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5118e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51190 call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c51196u);
  /* 10c51196 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51199 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5119b call 0x10c51360 */
  push32(0x10c511a0u); f_10c51360();
  /* 10c511a0 mov esi, esp */
  ESI = (ESP);
  /* 10c511a2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c511a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c511a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c511ab call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c511b1u);
  /* 10c511b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c511b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c511b6 call 0x10c51360 */
  push32(0x10c511bbu); f_10c51360();
  /* 10c511bb mov esi, esp */
  ESI = (ESP);
  /* 10c511bd push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c511c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c511c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c511c6 call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c511ccu);
  /* 10c511cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c511cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c511d1 call 0x10c51360 */
  push32(0x10c511d6u); f_10c51360();
  /* 10c511d6 mov esi, esp */
  ESI = (ESP);
  /* 10c511d8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c511dd push 4 */
  push32((uint32_t)(0x4u));
  /* 10c511df push 0 */
  push32((uint32_t)(0x0u));
  /* 10c511e1 call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c511e7u);
  /* 10c511e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c511ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c511ec call 0x10c51360 */
  push32(0x10c511f1u); f_10c51360();
  /* 10c511f1 mov esi, esp */
  ESI = (ESP);
  /* 10c511f3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c511f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c511fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10c511fc call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c51202u);
  /* 10c51202 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51205 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51207 call 0x10c51360 */
  push32(0x10c5120cu); f_10c51360();
  /* 10c5120c mov esi, esp */
  ESI = (ESP);
  /* 10c5120e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c51213 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51215 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51217 call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c5121du);
  /* 10c5121d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51220 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51222 call 0x10c51360 */
  push32(0x10c51227u); f_10c51360();
  /* 10c51227 mov esi, esp */
  ESI = (ESP);
  /* 10c51229 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c5122e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51230 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51232 call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c51238u);
  /* 10c51238 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5123b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5123d call 0x10c51360 */
  push32(0x10c51242u); f_10c51360();
  /* 10c51242 mov esi, esp */
  ESI = (ESP);
  /* 10c51244 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c51249 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5124b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5124d call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c51253u);
  /* 10c51253 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51256 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51258 call 0x10c51360 */
  push32(0x10c5125du); f_10c51360();
  /* 10c5125d mov esi, esp */
  ESI = (ESP);
  /* 10c5125f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c51264 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c51266 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51268 call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c5126eu);
  /* 10c5126e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51273 call 0x10c51360 */
  push32(0x10c51278u); f_10c51360();
  /* 10c51278 mov esi, esp */
  ESI = (ESP);
  /* 10c5127a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c5127f push 4 */
  push32((uint32_t)(0x4u));
  /* 10c51281 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51283 call dword ptr [0x10c80394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80394))), 0x10c51289u);
  /* 10c51289 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5128c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5128e call 0x10c51360 */
  push32(0x10c51293u); f_10c51360();
  /* 10c51293 mov esi, esp */
  ESI = (ESP);
  /* 10c51295 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c51297 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51299 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c5129b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5129d push 0x10c79028 */
  push32((uint32_t)(0x10c79028u));
  /* 10c512a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c512a4 call dword ptr [0x10c80398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80398))), 0x10c512aau);
  /* 10c512aa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c512ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c512af call 0x10c51360 */
  push32(0x10c512b4u); f_10c51360();
L_10c512b4:;
  /* 10c512b4 pop edi */
  EDI = (pop32());
  /* 10c512b5 pop esi */
  ESI = (pop32());
  /* 10c512b6 pop ebx */
  EBX = (pop32());
  /* 10c512b7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c512ba cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c512bc call 0x10c51360 */
  push32(0x10c512c1u); f_10c51360();
  /* 10c512c1 mov esp, ebp */
  ESP = (EBP);
  /* 10c512c3 pop ebp */
  EBP = (pop32());
  /* 10c512c4 ret  */
  ESPCHK(0x10c51100u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10c51360 (56 bytes, 28 insns) */
void f_10c51360(void) {
  FTRACE(0x10c51360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51360 jne 0x10c51363 */
  if (!C.zf) goto L_10c51363;
  /* 10c51362 ret  */
  ESPCHK(0x10c51360u, _esp0);
  ESP += 4; return;
L_10c51363:;
  /* 10c51363 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51364 mov ebp, esp */
  EBP = (ESP);
  /* 10c51366 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c51369 push eax */
  push32((uint32_t)(EAX));
  /* 10c5136a push edx */
  push32((uint32_t)(EDX));
  /* 10c5136b push ebx */
  push32((uint32_t)(EBX));
  /* 10c5136c push esi */
  push32((uint32_t)(ESI));
  /* 10c5136d push edi */
  push32((uint32_t)(EDI));
  /* 10c5136e push 0x10c79048 */
  push32((uint32_t)(0x10c79048u));
  /* 10c51373 push 0x10c79044 */
  push32((uint32_t)(0x10c79044u));
  /* 10c51378 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10c5137a push 0x10c79034 */
  push32((uint32_t)(0x10c79034u));
  /* 10c5137f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51381 call 0x10c51730 */
  push32(0x10c51386u); f_10c51730();
  /* 10c51386 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51389 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5138c jne 0x10c5138f */
  if (!C.zf) goto L_10c5138f;
  /* 10c5138e int3  */
  x86_unimpl("int3 @ 0x10c5138e");
L_10c5138f:;
  /* 10c5138f pop edi */
  EDI = (pop32());
  /* 10c51390 pop esi */
  ESI = (pop32());
  /* 10c51391 pop ebx */
  EBX = (pop32());
  /* 10c51392 pop edx */
  EDX = (pop32());
  /* 10c51393 pop eax */
  EAX = (pop32());
  /* 10c51394 mov esp, ebp */
  ESP = (EBP);
  /* 10c51396 pop ebp */
  EBP = (pop32());
  /* 10c51397 ret  */
  ESPCHK(0x10c51360u, _esp0);
  ESP += 4; return;
}

/* FUN_100013a0 @ 0x10c513a0 (313 bytes, 78 insns) */
void f_10c513a0(void) {
  FTRACE(0x10c513a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c513a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c513a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c513a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c513a7 jne 0x10c51467 */
  if (!C.zf) goto L_10c51467;
  /* 10c513ad call dword ptr [0x10c80224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80224))), 0x10c513b3u);
  /* 10c513b3 mov dword ptr [0x10c7e400], eax */
  w32((uint32_t)(0x10c7e400), (EAX));
  /* 10c513b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c513ba call 0x10c54e60 */
  push32(0x10c513bfu); f_10c54e60();
  /* 10c513bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c513c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c513c4 jne 0x10c513cd */
  if (!C.zf) goto L_10c513cd;
  /* 10c513c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c513c8 jmp 0x10c514d5 */
  goto L_10c514d5;
L_10c513cd:;
  /* 10c513cd mov eax, dword ptr [0x10c7e400] */
  EAX = (r32((uint32_t)(0x10c7e400)));
  /* 10c513d2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10c513d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c513da mov dword ptr [0x10c7e40c], eax */
  w32((uint32_t)(0x10c7e40c), (EAX));
  /* 10c513df mov ecx, dword ptr [0x10c7e400] */
  ECX = (r32((uint32_t)(0x10c7e400)));
  /* 10c513e5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c513eb mov dword ptr [0x10c7e408], ecx */
  w32((uint32_t)(0x10c7e408), (ECX));
  /* 10c513f1 mov edx, dword ptr [0x10c7e408] */
  EDX = (r32((uint32_t)(0x10c7e408)));
  /* 10c513f7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10c513fa add edx, dword ptr [0x10c7e40c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7e40c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51400 mov dword ptr [0x10c7e404], edx */
  w32((uint32_t)(0x10c7e404), (EDX));
  /* 10c51406 mov eax, dword ptr [0x10c7e400] */
  EAX = (r32((uint32_t)(0x10c7e400)));
  /* 10c5140b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c5140e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c51413 mov dword ptr [0x10c7e400], eax */
  w32((uint32_t)(0x10c7e400), (EAX));
  /* 10c51418 call 0x10c51fd0 */
  push32(0x10c5141du); f_10c51fd0();
  /* 10c5141d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5141f jne 0x10c5142d */
  if (!C.zf) goto L_10c5142d;
  /* 10c51421 call 0x10c54eb0 */
  push32(0x10c51426u); f_10c54eb0();
  /* 10c51426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c51428 jmp 0x10c514d5 */
  goto L_10c514d5;
L_10c5142d:;
  /* 10c5142d call dword ptr [0x10c80220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80220))), 0x10c51433u);
  /* 10c51433 mov dword ptr [0x10c7ff4c], eax */
  w32((uint32_t)(0x10c7ff4c), (EAX));
  /* 10c51438 call 0x10c54c40 */
  push32(0x10c5143du); f_10c54c40();
  /* 10c5143d mov dword ptr [0x10c7e3e8], eax */
  w32((uint32_t)(0x10c7e3e8), (EAX));
  /* 10c51442 call 0x10c52280 */
  push32(0x10c51447u); f_10c52280();
  /* 10c51447 call 0x10c54730 */
  push32(0x10c5144cu); f_10c54730();
  /* 10c5144c call 0x10c545e0 */
  push32(0x10c51451u); f_10c545e0();
  /* 10c51451 call 0x10c51dd0 */
  push32(0x10c51456u); f_10c51dd0();
  /* 10c51456 mov ecx, dword ptr [0x10c7e3e4] */
  ECX = (r32((uint32_t)(0x10c7e3e4)));
  /* 10c5145c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5145f mov dword ptr [0x10c7e3e4], ecx */
  w32((uint32_t)(0x10c7e3e4), (ECX));
  /* 10c51465 jmp 0x10c514d0 */
  goto L_10c514d0;
L_10c51467:;
  /* 10c51467 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5146b jne 0x10c514c0 */
  if (!C.zf) goto L_10c514c0;
  /* 10c5146d cmp dword ptr [0x10c7e3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51474 jle 0x10c514ba */
  if ((C.zf||C.sf!=C.of)) goto L_10c514ba;
  /* 10c51476 mov edx, dword ptr [0x10c7e3e4] */
  EDX = (r32((uint32_t)(0x10c7e3e4)));
  /* 10c5147c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5147f mov dword ptr [0x10c7e3e4], edx */
  w32((uint32_t)(0x10c7e3e4), (EDX));
  /* 10c51485 cmp dword ptr [0x10c7e438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5148c jne 0x10c51493 */
  if (!C.zf) goto L_10c51493;
  /* 10c5148e call 0x10c51e50 */
  push32(0x10c51493u); f_10c51e50();
L_10c51493:;
  /* 10c51493 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c51495 call 0x10c53b80 */
  push32(0x10c5149au); f_10c53b80();
  /* 10c5149a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5149d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c514a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c514a2 je 0x10c514a9 */
  if (C.zf) goto L_10c514a9;
  /* 10c514a4 call 0x10c54490 */
  push32(0x10c514a9u); f_10c54490();
L_10c514a9:;
  /* 10c514a9 call 0x10c525b0 */
  push32(0x10c514aeu); f_10c525b0();
  /* 10c514ae call 0x10c52060 */
  push32(0x10c514b3u); f_10c52060();
  /* 10c514b3 call 0x10c54eb0 */
  push32(0x10c514b8u); f_10c54eb0();
  /* 10c514b8 jmp 0x10c514be */
  goto L_10c514be;
L_10c514ba:;
  /* 10c514ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c514bc jmp 0x10c514d5 */
  goto L_10c514d5;
L_10c514be:;
  /* 10c514be jmp 0x10c514d0 */
  goto L_10c514d0;
L_10c514c0:;
  /* 10c514c0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c514c4 jne 0x10c514d0 */
  if (!C.zf) goto L_10c514d0;
  /* 10c514c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c514c8 call 0x10c52150 */
  push32(0x10c514cdu); f_10c52150();
  /* 10c514cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c514d0:;
  /* 10c514d0 mov eax, 1 */
  EAX = (0x1u);
L_10c514d5:;
  /* 10c514d5 pop ebp */
  EBP = (pop32());
  /* 10c514d6 ret 0xc */
  ESPCHK(0x10c513a0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10c514e0 (243 bytes, 86 insns) */
void f_10c514e0(void) {
  FTRACE(0x10c514e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c514e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c514e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c514e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c514e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c514eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c514ef jne 0x10c51501 */
  if (!C.zf) goto L_10c51501;
  /* 10c514f1 cmp dword ptr [0x10c7e3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c514f8 jne 0x10c51501 */
  if (!C.zf) goto L_10c51501;
  /* 10c514fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c514fc jmp 0x10c515cd */
  goto L_10c515cd;
L_10c51501:;
  /* 10c51501 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51505 je 0x10c5150d */
  if (C.zf) goto L_10c5150d;
  /* 10c51507 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5150b jne 0x10c5154f */
  if (!C.zf) goto L_10c5154f;
L_10c5150d:;
  /* 10c5150d cmp dword ptr [0x10c7ff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51514 je 0x10c5152b */
  if (C.zf) goto L_10c5152b;
  /* 10c51516 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c51519 push eax */
  push32((uint32_t)(EAX));
  /* 10c5151a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5151d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5151e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51521 push edx */
  push32((uint32_t)(EDX));
  /* 10c51522 call dword ptr [0x10c7ff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7ff5c))), 0x10c51528u);
  /* 10c51528 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5152b:;
  /* 10c5152b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5152f je 0x10c51545 */
  if (C.zf) goto L_10c51545;
  /* 10c51531 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c51534 push eax */
  push32((uint32_t)(EAX));
  /* 10c51535 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c51538 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5153c push edx */
  push32((uint32_t)(EDX));
  /* 10c5153d call 0x10c513a0 */
  push32(0x10c51542u); f_10c513a0();
  /* 10c51542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c51545:;
  /* 10c51545 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51549 jne 0x10c5154f */
  if (!C.zf) goto L_10c5154f;
  /* 10c5154b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5154d jmp 0x10c515cd */
  goto L_10c515cd;
L_10c5154f:;
  /* 10c5154f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c51552 push eax */
  push32((uint32_t)(EAX));
  /* 10c51553 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c51556 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51557 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5155a push edx */
  push32((uint32_t)(EDX));
  /* 10c5155b call 0x10c5100a */
  push32(0x10c51560u); f_10c5100a();
  /* 10c51560 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c51563 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51567 jne 0x10c5157e */
  if (!C.zf) goto L_10c5157e;
  /* 10c51569 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5156d jne 0x10c5157e */
  if (!C.zf) goto L_10c5157e;
  /* 10c5156f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c51572 push eax */
  push32((uint32_t)(EAX));
  /* 10c51573 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51575 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51578 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51579 call 0x10c513a0 */
  push32(0x10c5157eu); f_10c513a0();
L_10c5157e:;
  /* 10c5157e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51582 je 0x10c5158a */
  if (C.zf) goto L_10c5158a;
  /* 10c51584 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51588 jne 0x10c515ca */
  if (!C.zf) goto L_10c515ca;
L_10c5158a:;
  /* 10c5158a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5158d push edx */
  push32((uint32_t)(EDX));
  /* 10c5158e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c51591 push eax */
  push32((uint32_t)(EAX));
  /* 10c51592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51595 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51596 call 0x10c513a0 */
  push32(0x10c5159bu); f_10c513a0();
  /* 10c5159b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5159d jne 0x10c515a6 */
  if (!C.zf) goto L_10c515a6;
  /* 10c5159f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c515a6:;
  /* 10c515a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c515aa je 0x10c515ca */
  if (C.zf) goto L_10c515ca;
  /* 10c515ac cmp dword ptr [0x10c7ff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c515b3 je 0x10c515ca */
  if (C.zf) goto L_10c515ca;
  /* 10c515b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c515b8 push edx */
  push32((uint32_t)(EDX));
  /* 10c515b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c515bc push eax */
  push32((uint32_t)(EAX));
  /* 10c515bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c515c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c515c1 call dword ptr [0x10c7ff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7ff5c))), 0x10c515c7u);
  /* 10c515c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c515ca:;
  /* 10c515ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c515cd:;
  /* 10c515cd mov esp, ebp */
  ESP = (EBP);
  /* 10c515cf pop ebp */
  EBP = (pop32());
  /* 10c515d0 ret 0xc */
  ESPCHK(0x10c514e0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10c515e0 (58 bytes, 18 insns) */
void f_10c515e0(void) {
  FTRACE(0x10c515e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c515e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c515e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c515e3 cmp dword ptr [0x10c7e3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c515ea je 0x10c515fe */
  if (C.zf) goto L_10c515fe;
  /* 10c515ec cmp dword ptr [0x10c7e3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c515f3 jne 0x10c51603 */
  if (!C.zf) goto L_10c51603;
  /* 10c515f5 cmp dword ptr [0x10c7e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c515fc jne 0x10c51603 */
  if (!C.zf) goto L_10c51603;
L_10c515fe:;
  /* 10c515fe call 0x10c54f50 */
  push32(0x10c51603u); f_10c54f50();
L_10c51603:;
  /* 10c51603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51606 push eax */
  push32((uint32_t)(EAX));
  /* 10c51607 call 0x10c54fa0 */
  push32(0x10c5160cu); f_10c54fa0();
  /* 10c5160c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5160f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10c51614 call dword ptr [0x10c7ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7ca30))), 0x10c5161au);
  /* 10c5161a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5161d pop ebp */
  EBP = (pop32());
  /* 10c5161e ret  */
  ESPCHK(0x10c515e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001620 @ 0x10c51620 (11 bytes, 5 insns) */
void f_10c51620(void) {
  FTRACE(0x10c51620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51620 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51621 mov ebp, esp */
  EBP = (ESP);
  /* 10c51623 call dword ptr [0x10c80228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80228))), 0x10c51629u);
  /* 10c51629 pop ebp */
  EBP = (pop32());
  /* 10c5162a ret  */
  ESPCHK(0x10c51620u, _esp0);
  ESP += 4; return;
}

/* FUN_10001630 @ 0x10c51630 (87 bytes, 30 insns) */
void f_10c51630(void) {
  FTRACE(0x10c51630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51630 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51631 mov ebp, esp */
  EBP = (ESP);
  /* 10c51633 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51634 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51638 jl 0x10c51640 */
  if ((C.sf!=C.of)) goto L_10c51640;
  /* 10c5163a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5163e jl 0x10c51645 */
  if ((C.sf!=C.of)) goto L_10c51645;
L_10c51640:;
  /* 10c51640 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c51643 jmp 0x10c51683 */
  goto L_10c51683;
L_10c51645:;
  /* 10c51645 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51649 jne 0x10c51657 */
  if (!C.zf) goto L_10c51657;
  /* 10c5164b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5164e mov eax, dword ptr [eax*4 + 0x10c7ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10c7ca38)));
  /* 10c51655 jmp 0x10c51683 */
  goto L_10c51683;
L_10c51657:;
  /* 10c51657 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5165a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5165d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5165f je 0x10c51666 */
  if (C.zf) goto L_10c51666;
  /* 10c51661 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c51664 jmp 0x10c51683 */
  goto L_10c51683;
L_10c51666:;
  /* 10c51666 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51669 mov eax, dword ptr [edx*4 + 0x10c7ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7ca38)));
  /* 10c51670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c51673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51676 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c51679 mov dword ptr [ecx*4 + 0x10c7ca38], edx */
  w32((uint32_t)(ECX*4 + 0x10c7ca38), (EDX));
  /* 10c51680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c51683:;
  /* 10c51683 mov esp, ebp */
  ESP = (EBP);
  /* 10c51685 pop ebp */
  EBP = (pop32());
  /* 10c51686 ret  */
  ESPCHK(0x10c51630u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10c51690 (126 bytes, 38 insns) */
void f_10c51690(void) {
  FTRACE(0x10c51690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51690 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51691 mov ebp, esp */
  EBP = (ESP);
  /* 10c51693 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51694 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51698 jl 0x10c516a0 */
  if ((C.sf!=C.of)) goto L_10c516a0;
  /* 10c5169a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5169e jl 0x10c516a7 */
  if ((C.sf!=C.of)) goto L_10c516a7;
L_10c516a0:;
  /* 10c516a0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10c516a5 jmp 0x10c5170a */
  goto L_10c5170a;
L_10c516a7:;
  /* 10c516a7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c516ab jne 0x10c516b9 */
  if (!C.zf) goto L_10c516b9;
  /* 10c516ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c516b0 mov eax, dword ptr [eax*4 + 0x10c7ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10c7ca44)));
  /* 10c516b7 jmp 0x10c5170a */
  goto L_10c5170a;
L_10c516b9:;
  /* 10c516b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c516bc mov edx, dword ptr [ecx*4 + 0x10c7ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7ca44)));
  /* 10c516c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c516c6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c516ca jne 0x10c516e0 */
  if (!C.zf) goto L_10c516e0;
  /* 10c516cc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10c516ce call dword ptr [0x10c8022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8022c))), 0x10c516d4u);
  /* 10c516d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c516d7 mov dword ptr [ecx*4 + 0x10c7ca44], eax */
  w32((uint32_t)(ECX*4 + 0x10c7ca44), (EAX));
  /* 10c516de jmp 0x10c51707 */
  goto L_10c51707;
L_10c516e0:;
  /* 10c516e0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c516e4 jne 0x10c516fa */
  if (!C.zf) goto L_10c516fa;
  /* 10c516e6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c516e8 call dword ptr [0x10c8022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8022c))), 0x10c516eeu);
  /* 10c516ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c516f1 mov dword ptr [edx*4 + 0x10c7ca44], eax */
  w32((uint32_t)(EDX*4 + 0x10c7ca44), (EAX));
  /* 10c516f8 jmp 0x10c51707 */
  goto L_10c51707;
L_10c516fa:;
  /* 10c516fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c516fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c51700 mov dword ptr [eax*4 + 0x10c7ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x10c7ca44), (ECX));
L_10c51707:;
  /* 10c51707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c5170a:;
  /* 10c5170a mov esp, ebp */
  ESP = (EBP);
  /* 10c5170c pop ebp */
  EBP = (pop32());
  /* 10c5170d ret  */
  ESPCHK(0x10c51690u, _esp0);
  ESP += 4; return;
}

/* FUN_10001710 @ 0x10c51710 (28 bytes, 11 insns) */
void f_10c51710(void) {
  FTRACE(0x10c51710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51710 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51711 mov ebp, esp */
  EBP = (ESP);
  /* 10c51713 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51714 mov eax, dword ptr [0x10c7ff40] */
  EAX = (r32((uint32_t)(0x10c7ff40)));
  /* 10c51719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5171c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5171f mov dword ptr [0x10c7ff40], ecx */
  w32((uint32_t)(0x10c7ff40), (ECX));
  /* 10c51725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51728 mov esp, ebp */
  ESP = (EBP);
  /* 10c5172a pop ebp */
  EBP = (pop32());
  /* 10c5172b ret  */
  ESPCHK(0x10c51710u, _esp0);
  ESP += 4; return;
}

/* FUN_10001730 @ 0x10c51730 (912 bytes, 248 insns) */
void f_10c51730(void) {
  FTRACE(0x10c51730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51730 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51731 mov ebp, esp */
  EBP = (ESP);
  /* 10c51733 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10c51738 call 0x10c55810 */
  push32(0x10c5173du); f_10c55810();
  /* 10c5173d push edi */
  push32((uint32_t)(EDI));
  /* 10c5173e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10c51745 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10c5174a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5174c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10c51752 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c51754 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10c51756 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c51757 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10c5175e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10c51763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c51765 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10c5176b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c5176d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10c5176f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c51770 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10c51777 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10c5177c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5177e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10c51784 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c51786 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10c51788 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c51789 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10c5178c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10c51792 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51796 jl 0x10c5179e */
  if ((C.sf!=C.of)) goto L_10c5179e;
  /* 10c51798 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5179c jl 0x10c517a6 */
  if ((C.sf!=C.of)) goto L_10c517a6;
L_10c5179e:;
  /* 10c5179e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c517a1 jmp 0x10c51abb */
  goto L_10c51abb;
L_10c517a6:;
  /* 10c517a6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c517aa jne 0x10c51850 */
  if (!C.zf) goto L_10c51850;
  /* 10c517b0 push 0x10c7ca34 */
  push32((uint32_t)(0x10c7ca34u));
  /* 10c517b5 call dword ptr [0x10c80244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80244))), 0x10c517bbu);
  /* 10c517bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c517bd jle 0x10c51850 */
  if ((C.zf||C.sf!=C.of)) goto L_10c51850;
  /* 10c517c3 cmp dword ptr [0x10c7e3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c517ca jne 0x10c5180e */
  if (!C.zf) goto L_10c5180e;
  /* 10c517cc push 0x10c791f0 */
  push32((uint32_t)(0x10c791f0u));
  /* 10c517d1 call dword ptr [0x10c80240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80240))), 0x10c517d7u);
  /* 10c517d7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10c517dd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c517e4 je 0x10c51806 */
  if (C.zf) goto L_10c51806;
  /* 10c517e6 push 0x10c791e4 */
  push32((uint32_t)(0x10c791e4u));
  /* 10c517eb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10c517f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c517f2 call dword ptr [0x10c8023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8023c))), 0x10c517f8u);
  /* 10c517f8 mov dword ptr [0x10c7e3f8], eax */
  w32((uint32_t)(0x10c7e3f8), (EAX));
  /* 10c517fd cmp dword ptr [0x10c7e3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51804 jne 0x10c5180e */
  if (!C.zf) goto L_10c5180e;
L_10c51806:;
  /* 10c51806 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c51809 jmp 0x10c51abb */
  goto L_10c51abb;
L_10c5180e:;
  /* 10c5180e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c51811 push edx */
  push32((uint32_t)(EDX));
  /* 10c51812 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c51815 push eax */
  push32((uint32_t)(EAX));
  /* 10c51816 push 0x10c791b0 */
  push32((uint32_t)(0x10c791b0u));
  /* 10c5181b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10c51821 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51822 call dword ptr [0x10c7e3f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e3f8))), 0x10c51828u);
  /* 10c51828 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5182b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c51831 push edx */
  push32((uint32_t)(EDX));
  /* 10c51832 call dword ptr [0x10c80238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80238))), 0x10c51838u);
  /* 10c51838 push 0x10c7ca34 */
  push32((uint32_t)(0x10c7ca34u));
  /* 10c5183d call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c51843u);
  /* 10c51843 call 0x10c51620 */
  push32(0x10c51848u); f_10c51620();
  /* 10c51848 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5184b jmp 0x10c51abb */
  goto L_10c51abb;
L_10c51850:;
  /* 10c51850 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51854 je 0x10c5188d */
  if (C.zf) goto L_10c5188d;
  /* 10c51856 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10c5185c push eax */
  push32((uint32_t)(EAX));
  /* 10c5185d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c51860 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51861 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10c51866 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10c5186c push edx */
  push32((uint32_t)(EDX));
  /* 10c5186d call 0x10c55710 */
  push32(0x10c51872u); f_10c55710();
  /* 10c51872 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c51877 jge 0x10c5188d */
  if ((C.sf==C.of)) goto L_10c5188d;
  /* 10c51879 push 0x10c79184 */
  push32((uint32_t)(0x10c79184u));
  /* 10c5187e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10c51884 push eax */
  push32((uint32_t)(EAX));
  /* 10c51885 call 0x10c55620 */
  push32(0x10c5188au); f_10c55620();
  /* 10c5188a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5188d:;
  /* 10c5188d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51891 jne 0x10c518c5 */
  if (!C.zf) goto L_10c518c5;
  /* 10c51893 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51897 je 0x10c518a5 */
  if (C.zf) goto L_10c518a5;
  /* 10c51899 mov dword ptr [ebp - 0x3028], 0x10c79170 */
  w32((uint32_t)(EBP + -0x3028), (0x10c79170u));
  /* 10c518a3 jmp 0x10c518af */
  goto L_10c518af;
L_10c518a5:;
  /* 10c518a5 mov dword ptr [ebp - 0x3028], 0x10c7915c */
  w32((uint32_t)(EBP + -0x3028), (0x10c7915cu));
L_10c518af:;
  /* 10c518af mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10c518b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c518b6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10c518bc push edx */
  push32((uint32_t)(EDX));
  /* 10c518bd call 0x10c55620 */
  push32(0x10c518c2u); f_10c55620();
  /* 10c518c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c518c5:;
  /* 10c518c5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10c518cb push eax */
  push32((uint32_t)(EAX));
  /* 10c518cc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10c518d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c518d3 call 0x10c55630 */
  push32(0x10c518d8u); f_10c55630();
  /* 10c518d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c518db cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c518df jne 0x10c5191a */
  if (!C.zf) goto L_10c5191a;
  /* 10c518e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c518e4 mov eax, dword ptr [edx*4 + 0x10c7ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7ca38)));
  /* 10c518eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c518ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c518f0 je 0x10c51906 */
  if (C.zf) goto L_10c51906;
  /* 10c518f2 push 0x10c79158 */
  push32((uint32_t)(0x10c79158u));
  /* 10c518f7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10c518fd push ecx */
  push32((uint32_t)(ECX));
  /* 10c518fe call 0x10c55630 */
  push32(0x10c51903u); f_10c55630();
  /* 10c51903 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c51906:;
  /* 10c51906 push 0x10c79154 */
  push32((uint32_t)(0x10c79154u));
  /* 10c5190b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10c51911 push edx */
  push32((uint32_t)(EDX));
  /* 10c51912 call 0x10c55630 */
  push32(0x10c51917u); f_10c55630();
  /* 10c51917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5191a:;
  /* 10c5191a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5191e je 0x10c51962 */
  if (C.zf) goto L_10c51962;
  /* 10c51920 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10c51926 push eax */
  push32((uint32_t)(EAX));
  /* 10c51927 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5192a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5192b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5192e push edx */
  push32((uint32_t)(EDX));
  /* 10c5192f push 0x10c79148 */
  push32((uint32_t)(0x10c79148u));
  /* 10c51934 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c51939 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10c5193f push eax */
  push32((uint32_t)(EAX));
  /* 10c51940 call 0x10c55520 */
  push32(0x10c51945u); f_10c55520();
  /* 10c51945 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5194a jge 0x10c51960 */
  if ((C.sf==C.of)) goto L_10c51960;
  /* 10c5194c push 0x10c79184 */
  push32((uint32_t)(0x10c79184u));
  /* 10c51951 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10c51957 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51958 call 0x10c55620 */
  push32(0x10c5195du); f_10c55620();
  /* 10c5195d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c51960:;
  /* 10c51960 jmp 0x10c51978 */
  goto L_10c51978;
L_10c51962:;
  /* 10c51962 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10c51968 push edx */
  push32((uint32_t)(EDX));
  /* 10c51969 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10c5196f push eax */
  push32((uint32_t)(EAX));
  /* 10c51970 call 0x10c55620 */
  push32(0x10c51975u); f_10c55620();
  /* 10c51975 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c51978:;
  /* 10c51978 cmp dword ptr [0x10c7ff40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ff40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5197f je 0x10c519bc */
  if (C.zf) goto L_10c519bc;
  /* 10c51981 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10c51987 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51988 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c5198e push edx */
  push32((uint32_t)(EDX));
  /* 10c5198f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51992 push eax */
  push32((uint32_t)(EAX));
  /* 10c51993 call dword ptr [0x10c7ff40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7ff40))), 0x10c51999u);
  /* 10c51999 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5199c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5199e je 0x10c519bc */
  if (C.zf) goto L_10c519bc;
  /* 10c519a0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c519a4 jne 0x10c519b1 */
  if (!C.zf) goto L_10c519b1;
  /* 10c519a6 push 0x10c7ca34 */
  push32((uint32_t)(0x10c7ca34u));
  /* 10c519ab call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c519b1u);
L_10c519b1:;
  /* 10c519b1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10c519b7 jmp 0x10c51abb */
  goto L_10c51abb;
L_10c519bc:;
  /* 10c519bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c519bf mov edx, dword ptr [ecx*4 + 0x10c7ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7ca38)));
  /* 10c519c6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c519c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c519cb je 0x10c51a0b */
  if (C.zf) goto L_10c51a0b;
  /* 10c519cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c519d0 cmp dword ptr [eax*4 + 0x10c7ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10c7ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c519d8 je 0x10c51a0b */
  if (C.zf) goto L_10c51a0b;
  /* 10c519da push 0 */
  push32((uint32_t)(0x0u));
  /* 10c519dc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10c519e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c519e3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c519e9 push edx */
  push32((uint32_t)(EDX));
  /* 10c519ea call 0x10c554a0 */
  push32(0x10c519efu); f_10c554a0();
  /* 10c519ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c519f2 push eax */
  push32((uint32_t)(EAX));
  /* 10c519f3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10c519f9 push eax */
  push32((uint32_t)(EAX));
  /* 10c519fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c519fd mov edx, dword ptr [ecx*4 + 0x10c7ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7ca44)));
  /* 10c51a04 push edx */
  push32((uint32_t)(EDX));
  /* 10c51a05 call dword ptr [0x10c80230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80230))), 0x10c51a0bu);
L_10c51a0b:;
  /* 10c51a0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51a0e mov ecx, dword ptr [eax*4 + 0x10c7ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c7ca38)));
  /* 10c51a15 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c51a18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c51a1a je 0x10c51a29 */
  if (C.zf) goto L_10c51a29;
  /* 10c51a1c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c51a22 push edx */
  push32((uint32_t)(EDX));
  /* 10c51a23 call dword ptr [0x10c80238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80238))), 0x10c51a29u);
L_10c51a29:;
  /* 10c51a29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51a2c mov ecx, dword ptr [eax*4 + 0x10c7ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c7ca38)));
  /* 10c51a33 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c51a36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c51a38 je 0x10c51aa8 */
  if (C.zf) goto L_10c51aa8;
  /* 10c51a3a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51a3e je 0x10c51a5d */
  if (C.zf) goto L_10c51a5d;
  /* 10c51a40 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c51a42 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10c51a48 push edx */
  push32((uint32_t)(EDX));
  /* 10c51a49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c51a4c push eax */
  push32((uint32_t)(EAX));
  /* 10c51a4d call 0x10c551b0 */
  push32(0x10c51a52u); f_10c551b0();
  /* 10c51a52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51a55 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10c51a5b jmp 0x10c51a67 */
  goto L_10c51a67;
L_10c51a5d:;
  /* 10c51a5d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10c51a67:;
  /* 10c51a67 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10c51a6d push ecx */
  push32((uint32_t)(ECX));
  /* 10c51a6e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c51a71 push edx */
  push32((uint32_t)(EDX));
  /* 10c51a72 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10c51a78 push eax */
  push32((uint32_t)(EAX));
  /* 10c51a79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c51a7c push ecx */
  push32((uint32_t)(ECX));
  /* 10c51a7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51a80 push edx */
  push32((uint32_t)(EDX));
  /* 10c51a81 call 0x10c51ac0 */
  push32(0x10c51a86u); f_10c51ac0();
  /* 10c51a86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51a89 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10c51a8f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51a93 jne 0x10c51aa0 */
  if (!C.zf) goto L_10c51aa0;
  /* 10c51a95 push 0x10c7ca34 */
  push32((uint32_t)(0x10c7ca34u));
  /* 10c51a9a call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c51aa0u);
L_10c51aa0:;
  /* 10c51aa0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10c51aa6 jmp 0x10c51abb */
  goto L_10c51abb;
L_10c51aa8:;
  /* 10c51aa8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51aac jne 0x10c51ab9 */
  if (!C.zf) goto L_10c51ab9;
  /* 10c51aae push 0x10c7ca34 */
  push32((uint32_t)(0x10c7ca34u));
  /* 10c51ab3 call dword ptr [0x10c80234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80234))), 0x10c51ab9u);
L_10c51ab9:;
  /* 10c51ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c51abb:;
  /* 10c51abb pop edi */
  EDI = (pop32());
  /* 10c51abc mov esp, ebp */
  ESP = (EBP);
  /* 10c51abe pop ebp */
  EBP = (pop32());
  /* 10c51abf ret  */
  ESPCHK(0x10c51730u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ac0 @ 0x10c51ac0 (780 bytes, 197 insns) */
void f_10c51ac0(void) {
  FTRACE(0x10c51ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10c51ac3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10c51ac8 call 0x10c55810 */
  push32(0x10c51acdu); f_10c55810();
L_10c51acd:;
  /* 10c51acd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51ad1 jne 0x10c51af8 */
  if (!C.zf) goto L_10c51af8;
  /* 10c51ad3 push 0x10c79340 */
  push32((uint32_t)(0x10c79340u));
  /* 10c51ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51ada push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10c51adf push 0x10c79334 */
  push32((uint32_t)(0x10c79334u));
  /* 10c51ae4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c51ae6 call 0x10c51730 */
  push32(0x10c51aebu); f_10c51730();
  /* 10c51aeb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51aee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51af1 jne 0x10c51af8 */
  if (!C.zf) goto L_10c51af8;
  /* 10c51af3 call 0x10c51620 */
  push32(0x10c51af8u); f_10c51620();
L_10c51af8:;
  /* 10c51af8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c51afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c51afc jne 0x10c51acd */
  if (!C.zf) goto L_10c51acd;
  /* 10c51afe push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10c51b03 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10c51b09 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51b0c call dword ptr [0x10c80248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80248))), 0x10c51b12u);
  /* 10c51b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c51b14 jne 0x10c51b2a */
  if (!C.zf) goto L_10c51b2a;
  /* 10c51b16 push 0x10c7931c */
  push32((uint32_t)(0x10c7931cu));
  /* 10c51b1b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10c51b21 push edx */
  push32((uint32_t)(EDX));
  /* 10c51b22 call 0x10c55620 */
  push32(0x10c51b27u); f_10c55620();
  /* 10c51b27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c51b2a:;
  /* 10c51b2a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10c51b30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c51b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51b36 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51b37 call 0x10c554a0 */
  push32(0x10c51b3cu); f_10c554a0();
  /* 10c51b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51b3f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51b42 jbe 0x10c51b6d */
  if ((C.cf||C.zf)) goto L_10c51b6d;
  /* 10c51b44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51b47 push edx */
  push32((uint32_t)(EDX));
  /* 10c51b48 call 0x10c554a0 */
  push32(0x10c51b4du); f_10c554a0();
  /* 10c51b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51b50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51b53 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10c51b57 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c51b5a push 3 */
  push32((uint32_t)(0x3u));
  /* 10c51b5c push 0x10c79318 */
  push32((uint32_t)(0x10c79318u));
  /* 10c51b61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51b64 push eax */
  push32((uint32_t)(EAX));
  /* 10c51b65 call 0x10c55e90 */
  push32(0x10c51b6au); f_10c55e90();
  /* 10c51b6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c51b6d:;
  /* 10c51b6d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c51b70 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10c51b76 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51b7d je 0x10c51bc8 */
  if (C.zf) goto L_10c51bc8;
  /* 10c51b7f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c51b85 push edx */
  push32((uint32_t)(EDX));
  /* 10c51b86 call 0x10c554a0 */
  push32(0x10c51b8bu); f_10c554a0();
  /* 10c51b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51b8e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51b91 jbe 0x10c51bc8 */
  if ((C.cf||C.zf)) goto L_10c51bc8;
  /* 10c51b93 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c51b99 push eax */
  push32((uint32_t)(EAX));
  /* 10c51b9a call 0x10c554a0 */
  push32(0x10c51b9fu); f_10c554a0();
  /* 10c51b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51ba2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c51ba8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10c51bac mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10c51bb2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c51bb4 push 0x10c79318 */
  push32((uint32_t)(0x10c79318u));
  /* 10c51bb9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c51bbf push eax */
  push32((uint32_t)(EAX));
  /* 10c51bc0 call 0x10c55e90 */
  push32(0x10c51bc5u); f_10c55e90();
  /* 10c51bc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c51bc8:;
  /* 10c51bc8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51bcc jne 0x10c51bda */
  if (!C.zf) goto L_10c51bda;
  /* 10c51bce mov dword ptr [ebp - 0x1114], 0x10c792a4 */
  w32((uint32_t)(EBP + -0x1114), (0x10c792a4u));
  /* 10c51bd8 jmp 0x10c51be4 */
  goto L_10c51be4;
L_10c51bda:;
  /* 10c51bda mov dword ptr [ebp - 0x1114], 0x10c79044 */
  w32((uint32_t)(EBP + -0x1114), (0x10c79044u));
L_10c51be4:;
  /* 10c51be4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c51be7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c51bea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c51bec je 0x10c51bf9 */
  if (C.zf) goto L_10c51bf9;
  /* 10c51bee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c51bf1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10c51bf7 jmp 0x10c51c03 */
  goto L_10c51c03;
L_10c51bf9:;
  /* 10c51bf9 mov dword ptr [ebp - 0x1118], 0x10c79044 */
  w32((uint32_t)(EBP + -0x1118), (0x10c79044u));
L_10c51c03:;
  /* 10c51c03 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c51c06 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c51c09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c51c0b je 0x10c51c1f */
  if (C.zf) goto L_10c51c1f;
  /* 10c51c0d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51c11 jne 0x10c51c1f */
  if (!C.zf) goto L_10c51c1f;
  /* 10c51c13 mov dword ptr [ebp - 0x111c], 0x10c79294 */
  w32((uint32_t)(EBP + -0x111c), (0x10c79294u));
  /* 10c51c1d jmp 0x10c51c29 */
  goto L_10c51c29;
L_10c51c1f:;
  /* 10c51c1f mov dword ptr [ebp - 0x111c], 0x10c79044 */
  w32((uint32_t)(EBP + -0x111c), (0x10c79044u));
L_10c51c29:;
  /* 10c51c29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c51c2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c51c2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c51c31 je 0x10c51c3f */
  if (C.zf) goto L_10c51c3f;
  /* 10c51c33 mov dword ptr [ebp - 0x1120], 0x10c79290 */
  w32((uint32_t)(EBP + -0x1120), (0x10c79290u));
  /* 10c51c3d jmp 0x10c51c49 */
  goto L_10c51c49;
L_10c51c3f:;
  /* 10c51c3f mov dword ptr [ebp - 0x1120], 0x10c79044 */
  w32((uint32_t)(EBP + -0x1120), (0x10c79044u));
L_10c51c49:;
  /* 10c51c49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51c4d je 0x10c51c5a */
  if (C.zf) goto L_10c51c5a;
  /* 10c51c4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c51c52 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10c51c58 jmp 0x10c51c64 */
  goto L_10c51c64;
L_10c51c5a:;
  /* 10c51c5a mov dword ptr [ebp - 0x1124], 0x10c79044 */
  w32((uint32_t)(EBP + -0x1124), (0x10c79044u));
L_10c51c64:;
  /* 10c51c64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51c68 je 0x10c51c76 */
  if (C.zf) goto L_10c51c76;
  /* 10c51c6a mov dword ptr [ebp - 0x1128], 0x10c79288 */
  w32((uint32_t)(EBP + -0x1128), (0x10c79288u));
  /* 10c51c74 jmp 0x10c51c80 */
  goto L_10c51c80;
L_10c51c76:;
  /* 10c51c76 mov dword ptr [ebp - 0x1128], 0x10c79044 */
  w32((uint32_t)(EBP + -0x1128), (0x10c79044u));
L_10c51c80:;
  /* 10c51c80 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51c84 je 0x10c51c91 */
  if (C.zf) goto L_10c51c91;
  /* 10c51c86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c51c89 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10c51c8f jmp 0x10c51c9b */
  goto L_10c51c9b;
L_10c51c91:;
  /* 10c51c91 mov dword ptr [ebp - 0x112c], 0x10c79044 */
  w32((uint32_t)(EBP + -0x112c), (0x10c79044u));
L_10c51c9b:;
  /* 10c51c9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51c9f je 0x10c51cad */
  if (C.zf) goto L_10c51cad;
  /* 10c51ca1 mov dword ptr [ebp - 0x1130], 0x10c79280 */
  w32((uint32_t)(EBP + -0x1130), (0x10c79280u));
  /* 10c51cab jmp 0x10c51cb7 */
  goto L_10c51cb7;
L_10c51cad:;
  /* 10c51cad mov dword ptr [ebp - 0x1130], 0x10c79044 */
  w32((uint32_t)(EBP + -0x1130), (0x10c79044u));
L_10c51cb7:;
  /* 10c51cb7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51cbe je 0x10c51cce */
  if (C.zf) goto L_10c51cce;
  /* 10c51cc0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c51cc6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10c51ccc jmp 0x10c51cd8 */
  goto L_10c51cd8;
L_10c51cce:;
  /* 10c51cce mov dword ptr [ebp - 0x1134], 0x10c79044 */
  w32((uint32_t)(EBP + -0x1134), (0x10c79044u));
L_10c51cd8:;
  /* 10c51cd8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51cdf je 0x10c51ced */
  if (C.zf) goto L_10c51ced;
  /* 10c51ce1 mov dword ptr [ebp - 0x1138], 0x10c79274 */
  w32((uint32_t)(EBP + -0x1138), (0x10c79274u));
  /* 10c51ceb jmp 0x10c51cf7 */
  goto L_10c51cf7;
L_10c51ced:;
  /* 10c51ced mov dword ptr [ebp - 0x1138], 0x10c79044 */
  w32((uint32_t)(EBP + -0x1138), (0x10c79044u));
L_10c51cf7:;
  /* 10c51cf7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10c51cfd push edx */
  push32((uint32_t)(EDX));
  /* 10c51cfe mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10c51d04 push eax */
  push32((uint32_t)(EAX));
  /* 10c51d05 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10c51d0b push ecx */
  push32((uint32_t)(ECX));
  /* 10c51d0c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10c51d12 push edx */
  push32((uint32_t)(EDX));
  /* 10c51d13 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10c51d19 push eax */
  push32((uint32_t)(EAX));
  /* 10c51d1a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10c51d20 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51d21 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10c51d27 push edx */
  push32((uint32_t)(EDX));
  /* 10c51d28 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10c51d2e push eax */
  push32((uint32_t)(EAX));
  /* 10c51d2f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10c51d35 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51d36 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10c51d3c push edx */
  push32((uint32_t)(EDX));
  /* 10c51d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51d40 push eax */
  push32((uint32_t)(EAX));
  /* 10c51d41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51d44 mov edx, dword ptr [ecx*4 + 0x10c7ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7ca50)));
  /* 10c51d4b push edx */
  push32((uint32_t)(EDX));
  /* 10c51d4c push 0x10c79220 */
  push32((uint32_t)(0x10c79220u));
  /* 10c51d51 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c51d56 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10c51d5c push eax */
  push32((uint32_t)(EAX));
  /* 10c51d5d call 0x10c55520 */
  push32(0x10c51d62u); f_10c55520();
  /* 10c51d62 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51d65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c51d67 jge 0x10c51d7d */
  if ((C.sf==C.of)) goto L_10c51d7d;
  /* 10c51d69 push 0x10c79184 */
  push32((uint32_t)(0x10c79184u));
  /* 10c51d6e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10c51d74 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51d75 call 0x10c55620 */
  push32(0x10c51d7au); f_10c55620();
  /* 10c51d7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c51d7d:;
  /* 10c51d7d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10c51d82 push 0x10c791fc */
  push32((uint32_t)(0x10c791fcu));
  /* 10c51d87 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10c51d8d push edx */
  push32((uint32_t)(EDX));
  /* 10c51d8e call 0x10c55dd0 */
  push32(0x10c51d93u); f_10c55dd0();
  /* 10c51d93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51d96 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10c51d9c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51da3 jne 0x10c51db6 */
  if (!C.zf) goto L_10c51db6;
  /* 10c51da5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10c51da7 call 0x10c55b10 */
  push32(0x10c51dacu); f_10c55b10();
  /* 10c51dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51daf push 3 */
  push32((uint32_t)(0x3u));
  /* 10c51db1 call 0x10c51e30 */
  push32(0x10c51db6u); f_10c51e30();
L_10c51db6:;
  /* 10c51db6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51dbd jne 0x10c51dc6 */
  if (!C.zf) goto L_10c51dc6;
  /* 10c51dbf mov eax, 1 */
  EAX = (0x1u);
  /* 10c51dc4 jmp 0x10c51dc8 */
  goto L_10c51dc8;
L_10c51dc6:;
  /* 10c51dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c51dc8:;
  /* 10c51dc8 mov esp, ebp */
  ESP = (EBP);
  /* 10c51dca pop ebp */
  EBP = (pop32());
  /* 10c51dcb ret  */
  ESPCHK(0x10c51ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dd0 @ 0x10c51dd0 (56 bytes, 15 insns) */
void f_10c51dd0(void) {
  FTRACE(0x10c51dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10c51dd3 cmp dword ptr [0x10c7ff3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ff3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51dda je 0x10c51de2 */
  if (C.zf) goto L_10c51de2;
  /* 10c51ddc call dword ptr [0x10c7ff3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7ff3c))), 0x10c51de2u);
L_10c51de2:;
  /* 10c51de2 push 0x10c7c418 */
  push32((uint32_t)(0x10c7c418u));
  /* 10c51de7 push 0x10c7c208 */
  push32((uint32_t)(0x10c7c208u));
  /* 10c51dec call 0x10c51fa0 */
  push32(0x10c51df1u); f_10c51fa0();
  /* 10c51df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51df4 push 0x10c7c104 */
  push32((uint32_t)(0x10c7c104u));
  /* 10c51df9 push 0x10c7c000 */
  push32((uint32_t)(0x10c7c000u));
  /* 10c51dfe call 0x10c51fa0 */
  push32(0x10c51e03u); f_10c51fa0();
  /* 10c51e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51e06 pop ebp */
  EBP = (pop32());
  /* 10c51e07 ret  */
  ESPCHK(0x10c51dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e10 @ 0x10c51e10 (21 bytes, 10 insns) */
void f_10c51e10(void) {
  FTRACE(0x10c51e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51e11 mov ebp, esp */
  EBP = (ESP);
  /* 10c51e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51e17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51e1a push eax */
  push32((uint32_t)(EAX));
  /* 10c51e1b call 0x10c51e90 */
  push32(0x10c51e20u); f_10c51e90();
  /* 10c51e20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51e23 pop ebp */
  EBP = (pop32());
  /* 10c51e24 ret  */
  ESPCHK(0x10c51e10u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10c51e30 (21 bytes, 10 insns) */
void f_10c51e30(void) {
  FTRACE(0x10c51e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51e31 mov ebp, esp */
  EBP = (ESP);
  /* 10c51e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51e35 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51e37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51e3a push eax */
  push32((uint32_t)(EAX));
  /* 10c51e3b call 0x10c51e90 */
  push32(0x10c51e40u); f_10c51e90();
  /* 10c51e40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51e43 pop ebp */
  EBP = (pop32());
  /* 10c51e44 ret  */
  ESPCHK(0x10c51e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e50 @ 0x10c51e50 (19 bytes, 9 insns) */
void f_10c51e50(void) {
  FTRACE(0x10c51e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51e51 mov ebp, esp */
  EBP = (ESP);
  /* 10c51e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51e59 call 0x10c51e90 */
  push32(0x10c51e5eu); f_10c51e90();
  /* 10c51e5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51e61 pop ebp */
  EBP = (pop32());
  /* 10c51e62 ret  */
  ESPCHK(0x10c51e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e70 @ 0x10c51e70 (19 bytes, 9 insns) */
void f_10c51e70(void) {
  FTRACE(0x10c51e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51e71 mov ebp, esp */
  EBP = (ESP);
  /* 10c51e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51e75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c51e79 call 0x10c51e90 */
  push32(0x10c51e7eu); f_10c51e90();
  /* 10c51e7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51e81 pop ebp */
  EBP = (pop32());
  /* 10c51e82 ret  */
  ESPCHK(0x10c51e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e90 @ 0x10c51e90 (227 bytes, 61 insns) */
void f_10c51e90(void) {
  FTRACE(0x10c51e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51e91 mov ebp, esp */
  EBP = (ESP);
  /* 10c51e93 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51e94 call 0x10c51f80 */
  push32(0x10c51e99u); f_10c51f80();
  /* 10c51e99 cmp dword ptr [0x10c7e43c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e43c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51ea0 jne 0x10c51eb3 */
  if (!C.zf) goto L_10c51eb3;
  /* 10c51ea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51ea5 push eax */
  push32((uint32_t)(EAX));
  /* 10c51ea6 call dword ptr [0x10c80254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80254))), 0x10c51eacu);
  /* 10c51eac push eax */
  push32((uint32_t)(EAX));
  /* 10c51ead call dword ptr [0x10c80250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80250))), 0x10c51eb3u);
L_10c51eb3:;
  /* 10c51eb3 mov dword ptr [0x10c7e438], 1 */
  w32((uint32_t)(0x10c7e438), (0x1u));
  /* 10c51ebd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10c51ec0 mov byte ptr [0x10c7e434], cl */
  w8((uint32_t)(0x10c7e434), (CL));
  /* 10c51ec6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51eca jne 0x10c51f13 */
  if (!C.zf) goto L_10c51f13;
  /* 10c51ecc cmp dword ptr [0x10c7ff38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ff38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51ed3 je 0x10c51f01 */
  if (C.zf) goto L_10c51f01;
  /* 10c51ed5 mov edx, dword ptr [0x10c7ff34] */
  EDX = (r32((uint32_t)(0x10c7ff34)));
  /* 10c51edb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c51ede:;
  /* 10c51ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51ee1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c51ee4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c51ee7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51eea cmp ecx, dword ptr [0x10c7ff38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7ff38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51ef0 jb 0x10c51f01 */
  if (C.cf) goto L_10c51f01;
  /* 10c51ef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51ef5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51ef8 je 0x10c51eff */
  if (C.zf) goto L_10c51eff;
  /* 10c51efa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c51efd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10c51effu);
L_10c51eff:;
  /* 10c51eff jmp 0x10c51ede */
  goto L_10c51ede;
L_10c51f01:;
  /* 10c51f01 push 0x10c7c724 */
  push32((uint32_t)(0x10c7c724u));
  /* 10c51f06 push 0x10c7c51c */
  push32((uint32_t)(0x10c7c51cu));
  /* 10c51f0b call 0x10c51fa0 */
  push32(0x10c51f10u); f_10c51fa0();
  /* 10c51f10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c51f13:;
  /* 10c51f13 push 0x10c7c92c */
  push32((uint32_t)(0x10c7c92cu));
  /* 10c51f18 push 0x10c7c828 */
  push32((uint32_t)(0x10c7c828u));
  /* 10c51f1d call 0x10c51fa0 */
  push32(0x10c51f22u); f_10c51fa0();
  /* 10c51f22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51f25 cmp dword ptr [0x10c7e440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51f2c jne 0x10c51f4e */
  if (!C.zf) goto L_10c51f4e;
  /* 10c51f2e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c51f30 call 0x10c53b80 */
  push32(0x10c51f35u); f_10c53b80();
  /* 10c51f35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51f38 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c51f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c51f3d je 0x10c51f4e */
  if (C.zf) goto L_10c51f4e;
  /* 10c51f3f mov dword ptr [0x10c7e440], 1 */
  w32((uint32_t)(0x10c7e440), (0x1u));
  /* 10c51f49 call 0x10c54490 */
  push32(0x10c51f4eu); f_10c54490();
L_10c51f4e:;
  /* 10c51f4e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51f52 je 0x10c51f5b */
  if (C.zf) goto L_10c51f5b;
  /* 10c51f54 call 0x10c51f90 */
  push32(0x10c51f59u); f_10c51f90();
  /* 10c51f59 jmp 0x10c51f6f */
  goto L_10c51f6f;
L_10c51f5b:;
  /* 10c51f5b mov dword ptr [0x10c7e43c], 1 */
  w32((uint32_t)(0x10c7e43c), (0x1u));
  /* 10c51f65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51f68 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51f69 call dword ptr [0x10c8024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8024c))), 0x10c51f6fu);
L_10c51f6f:;
  /* 10c51f6f mov esp, ebp */
  ESP = (EBP);
  /* 10c51f71 pop ebp */
  EBP = (pop32());
  /* 10c51f72 ret  */
  ESPCHK(0x10c51e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f80 @ 0x10c51f80 (15 bytes, 7 insns) */
void f_10c51f80(void) {
  FTRACE(0x10c51f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51f81 mov ebp, esp */
  EBP = (ESP);
  /* 10c51f83 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10c51f85 call 0x10c56070 */
  push32(0x10c51f8au); f_10c56070();
  /* 10c51f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51f8d pop ebp */
  EBP = (pop32());
  /* 10c51f8e ret  */
  ESPCHK(0x10c51f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f90 @ 0x10c51f90 (15 bytes, 7 insns) */
void f_10c51f90(void) {
  FTRACE(0x10c51f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51f91 mov ebp, esp */
  EBP = (ESP);
  /* 10c51f93 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10c51f95 call 0x10c56110 */
  push32(0x10c51f9au); f_10c56110();
  /* 10c51f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51f9d pop ebp */
  EBP = (pop32());
  /* 10c51f9e ret  */
  ESPCHK(0x10c51f90u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10c51fa0 (37 bytes, 16 insns) */
void f_10c51fa0(void) {
  FTRACE(0x10c51fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51fa1 mov ebp, esp */
  EBP = (ESP);
L_10c51fa3:;
  /* 10c51fa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51fa6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51fa9 jae 0x10c51fc3 */
  if (!C.cf) goto L_10c51fc3;
  /* 10c51fab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51fae cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51fb1 je 0x10c51fb8 */
  if (C.zf) goto L_10c51fb8;
  /* 10c51fb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51fb6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10c51fb8u);
L_10c51fb8:;
  /* 10c51fb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c51fbb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c51fbe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c51fc1 jmp 0x10c51fa3 */
  goto L_10c51fa3;
L_10c51fc3:;
  /* 10c51fc3 pop ebp */
  EBP = (pop32());
  /* 10c51fc4 ret  */
  ESPCHK(0x10c51fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fd0 @ 0x10c51fd0 (130 bytes, 42 insns) */
void f_10c51fd0(void) {
  FTRACE(0x10c51fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c51fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c51fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10c51fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c51fd4 call 0x10c55f90 */
  push32(0x10c51fd9u); f_10c55f90();
  /* 10c51fd9 call dword ptr [0x10c80260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80260))), 0x10c51fdfu);
  /* 10c51fdf mov dword ptr [0x10c7ca5c], eax */
  w32((uint32_t)(0x10c7ca5c), (EAX));
  /* 10c51fe4 cmp dword ptr [0x10c7ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c51feb jne 0x10c51ff1 */
  if (!C.zf) goto L_10c51ff1;
  /* 10c51fed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c51fef jmp 0x10c5204e */
  goto L_10c5204e;
L_10c51ff1:;
  /* 10c51ff1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10c51ff3 push 0x10c79358 */
  push32((uint32_t)(0x10c79358u));
  /* 10c51ff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c51ffa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10c51ffc push 1 */
  push32((uint32_t)(0x1u));
  /* 10c51ffe call 0x10c52a80 */
  push32(0x10c52003u); f_10c52a80();
  /* 10c52003 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52006 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c52009 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5200d je 0x10c52024 */
  if (C.zf) goto L_10c52024;
  /* 10c5200f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52012 push eax */
  push32((uint32_t)(EAX));
  /* 10c52013 mov ecx, dword ptr [0x10c7ca5c] */
  ECX = (r32((uint32_t)(0x10c7ca5c)));
  /* 10c52019 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5201a call dword ptr [0x10c8025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8025c))), 0x10c52020u);
  /* 10c52020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52022 jne 0x10c52028 */
  if (!C.zf) goto L_10c52028;
L_10c52024:;
  /* 10c52024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52026 jmp 0x10c5204e */
  goto L_10c5204e;
L_10c52028:;
  /* 10c52028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5202b push edx */
  push32((uint32_t)(EDX));
  /* 10c5202c call 0x10c52090 */
  push32(0x10c52031u); f_10c52090();
  /* 10c52031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52034 call dword ptr [0x10c80258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80258))), 0x10c5203au);
  /* 10c5203a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5203d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c5203f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52042 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10c52049 mov eax, 1 */
  EAX = (0x1u);
L_10c5204e:;
  /* 10c5204e mov esp, ebp */
  ESP = (EBP);
  /* 10c52050 pop ebp */
  EBP = (pop32());
  /* 10c52051 ret  */
  ESPCHK(0x10c51fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002060 @ 0x10c52060 (41 bytes, 11 insns) */
void f_10c52060(void) {
  FTRACE(0x10c52060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52060 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52061 mov ebp, esp */
  EBP = (ESP);
  /* 10c52063 call 0x10c55fd0 */
  push32(0x10c52068u); f_10c55fd0();
  /* 10c52068 cmp dword ptr [0x10c7ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5206f je 0x10c52087 */
  if (C.zf) goto L_10c52087;
  /* 10c52071 mov eax, dword ptr [0x10c7ca5c] */
  EAX = (r32((uint32_t)(0x10c7ca5c)));
  /* 10c52076 push eax */
  push32((uint32_t)(EAX));
  /* 10c52077 call dword ptr [0x10c80264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80264))), 0x10c5207du);
  /* 10c5207d mov dword ptr [0x10c7ca5c], 0xffffffff */
  w32((uint32_t)(0x10c7ca5c), (0xffffffffu));
L_10c52087:;
  /* 10c52087 pop ebp */
  EBP = (pop32());
  /* 10c52088 ret  */
  ESPCHK(0x10c52060u, _esp0);
  ESP += 4; return;
}

/* FUN_10002090 @ 0x10c52090 (25 bytes, 8 insns) */
void f_10c52090(void) {
  FTRACE(0x10c52090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52090 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52091 mov ebp, esp */
  EBP = (ESP);
  /* 10c52093 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52096 mov dword ptr [eax + 0x50], 0x10c7cc00 */
  w32((uint32_t)(EAX + 0x50), (0x10c7cc00u));
  /* 10c5209d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c520a0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10c520a7 pop ebp */
  EBP = (pop32());
  /* 10c520a8 ret  */
  ESPCHK(0x10c52090u, _esp0);
  ESP += 4; return;
}

/* FUN_100020b0 @ 0x10c520b0 (152 bytes, 48 insns) */
void f_10c520b0(void) {
  FTRACE(0x10c520b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c520b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c520b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c520b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c520b6 call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c520bcu);
  /* 10c520bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c520bf mov eax, dword ptr [0x10c7ca5c] */
  EAX = (r32((uint32_t)(0x10c7ca5c)));
  /* 10c520c4 push eax */
  push32((uint32_t)(EAX));
  /* 10c520c5 call dword ptr [0x10c8026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8026c))), 0x10c520cbu);
  /* 10c520cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c520ce cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c520d2 jne 0x10c52137 */
  if (!C.zf) goto L_10c52137;
  /* 10c520d4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10c520d9 push 0x10c79358 */
  push32((uint32_t)(0x10c79358u));
  /* 10c520de push 2 */
  push32((uint32_t)(0x2u));
  /* 10c520e0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10c520e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c520e4 call 0x10c52a80 */
  push32(0x10c520e9u); f_10c52a80();
  /* 10c520e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c520ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c520ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c520f3 je 0x10c5212d */
  if (C.zf) goto L_10c5212d;
  /* 10c520f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c520f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c520f9 mov edx, dword ptr [0x10c7ca5c] */
  EDX = (r32((uint32_t)(0x10c7ca5c)));
  /* 10c520ff push edx */
  push32((uint32_t)(EDX));
  /* 10c52100 call dword ptr [0x10c8025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8025c))), 0x10c52106u);
  /* 10c52106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52108 je 0x10c5212d */
  if (C.zf) goto L_10c5212d;
  /* 10c5210a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5210d push eax */
  push32((uint32_t)(EAX));
  /* 10c5210e call 0x10c52090 */
  push32(0x10c52113u); f_10c52090();
  /* 10c52113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52116 call dword ptr [0x10c80258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80258))), 0x10c5211cu);
  /* 10c5211c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5211f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c52121 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52124 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10c5212b jmp 0x10c52137 */
  goto L_10c52137;
L_10c5212d:;
  /* 10c5212d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10c5212f call 0x10c515e0 */
  push32(0x10c52134u); f_10c515e0();
  /* 10c52134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c52137:;
  /* 10c52137 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5213a push eax */
  push32((uint32_t)(EAX));
  /* 10c5213b call dword ptr [0x10c80268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80268))), 0x10c52141u);
  /* 10c52141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52144 mov esp, ebp */
  ESP = (EBP);
  /* 10c52146 pop ebp */
  EBP = (pop32());
  /* 10c52147 ret  */
  ESPCHK(0x10c520b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002150 @ 0x10c52150 (263 bytes, 86 insns) */
void f_10c52150(void) {
  FTRACE(0x10c52150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52150 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52151 mov ebp, esp */
  EBP = (ESP);
  /* 10c52153 cmp dword ptr [0x10c7ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5215a je 0x10c52255 */
  if (C.zf) goto L_10c52255;
  /* 10c52160 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52164 jne 0x10c52175 */
  if (!C.zf) goto L_10c52175;
  /* 10c52166 mov eax, dword ptr [0x10c7ca5c] */
  EAX = (r32((uint32_t)(0x10c7ca5c)));
  /* 10c5216b push eax */
  push32((uint32_t)(EAX));
  /* 10c5216c call dword ptr [0x10c8026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8026c))), 0x10c52172u);
  /* 10c52172 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c52175:;
  /* 10c52175 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52179 je 0x10c52246 */
  if (C.zf) goto L_10c52246;
  /* 10c5217f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52182 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52186 je 0x10c52199 */
  if (C.zf) goto L_10c52199;
  /* 10c52188 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5218a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5218d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10c52190 push eax */
  push32((uint32_t)(EAX));
  /* 10c52191 call 0x10c53100 */
  push32(0x10c52196u); f_10c53100();
  /* 10c52196 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c52199:;
  /* 10c52199 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5219c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c521a0 je 0x10c521b3 */
  if (C.zf) goto L_10c521b3;
  /* 10c521a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c521a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c521a7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10c521aa push eax */
  push32((uint32_t)(EAX));
  /* 10c521ab call 0x10c53100 */
  push32(0x10c521b0u); f_10c53100();
  /* 10c521b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c521b3:;
  /* 10c521b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c521b6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c521ba je 0x10c521cd */
  if (C.zf) goto L_10c521cd;
  /* 10c521bc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c521be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c521c1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10c521c4 push eax */
  push32((uint32_t)(EAX));
  /* 10c521c5 call 0x10c53100 */
  push32(0x10c521cau); f_10c53100();
  /* 10c521ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c521cd:;
  /* 10c521cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c521d0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c521d4 je 0x10c521e7 */
  if (C.zf) goto L_10c521e7;
  /* 10c521d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c521d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c521db mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10c521de push eax */
  push32((uint32_t)(EAX));
  /* 10c521df call 0x10c53100 */
  push32(0x10c521e4u); f_10c53100();
  /* 10c521e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c521e7:;
  /* 10c521e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c521ea cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c521ee je 0x10c52201 */
  if (C.zf) goto L_10c52201;
  /* 10c521f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c521f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c521f5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10c521f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c521f9 call 0x10c53100 */
  push32(0x10c521feu); f_10c53100();
  /* 10c521fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c52201:;
  /* 10c52201 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52204 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52208 je 0x10c5221b */
  if (C.zf) goto L_10c5221b;
  /* 10c5220a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5220c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5220f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10c52212 push eax */
  push32((uint32_t)(EAX));
  /* 10c52213 call 0x10c53100 */
  push32(0x10c52218u); f_10c53100();
  /* 10c52218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5221b:;
  /* 10c5221b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5221e cmp dword ptr [ecx + 0x50], 0x10c7cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10c7cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52225 je 0x10c52238 */
  if (C.zf) goto L_10c52238;
  /* 10c52227 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52229 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5222c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10c5222f push eax */
  push32((uint32_t)(EAX));
  /* 10c52230 call 0x10c53100 */
  push32(0x10c52235u); f_10c53100();
  /* 10c52235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c52238:;
  /* 10c52238 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5223a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5223d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5223e call 0x10c53100 */
  push32(0x10c52243u); f_10c53100();
  /* 10c52243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c52246:;
  /* 10c52246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52248 mov edx, dword ptr [0x10c7ca5c] */
  EDX = (r32((uint32_t)(0x10c7ca5c)));
  /* 10c5224e push edx */
  push32((uint32_t)(EDX));
  /* 10c5224f call dword ptr [0x10c8025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8025c))), 0x10c52255u);
L_10c52255:;
  /* 10c52255 pop ebp */
  EBP = (pop32());
  /* 10c52256 ret  */
  ESPCHK(0x10c52150u, _esp0);
  ESP += 4; return;
}

/* FUN_10002260 @ 0x10c52260 (11 bytes, 5 insns) */
void f_10c52260(void) {
  FTRACE(0x10c52260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52260 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52261 mov ebp, esp */
  EBP = (ESP);
  /* 10c52263 call dword ptr [0x10c80258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80258))), 0x10c52269u);
  /* 10c52269 pop ebp */
  EBP = (pop32());
  /* 10c5226a ret  */
  ESPCHK(0x10c52260u, _esp0);
  ESP += 4; return;
}

/* FUN_10002270 @ 0x10c52270 (11 bytes, 5 insns) */
void f_10c52270(void) {
  FTRACE(0x10c52270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52270 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52271 mov ebp, esp */
  EBP = (ESP);
  /* 10c52273 call dword ptr [0x10c80274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80274))), 0x10c52279u);
  /* 10c52279 pop ebp */
  EBP = (pop32());
  /* 10c5227a ret  */
  ESPCHK(0x10c52270u, _esp0);
  ESP += 4; return;
}

/* FUN_10002280 @ 0x10c52280 (804 bytes, 236 insns) */
void f_10c52280(void) {
  FTRACE(0x10c52280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52280 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52281 mov ebp, esp */
  EBP = (ESP);
  /* 10c52283 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c52286 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10c5228b push 0x10c79364 */
  push32((uint32_t)(0x10c79364u));
  /* 10c52290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52292 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10c52297 call 0x10c52670 */
  push32(0x10c5229cu); f_10c52670();
  /* 10c5229c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5229f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10c522a2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c522a6 jne 0x10c522b2 */
  if (!C.zf) goto L_10c522b2;
  /* 10c522a8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10c522aa call 0x10c515e0 */
  push32(0x10c522afu); f_10c515e0();
  /* 10c522af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c522b2:;
  /* 10c522b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c522b5 mov dword ptr [0x10c7fde0], eax */
  w32((uint32_t)(0x10c7fde0), (EAX));
  /* 10c522ba mov dword ptr [0x10c7ff1c], 0x20 */
  w32((uint32_t)(0x10c7ff1c), (0x20u));
  /* 10c522c4 jmp 0x10c522cf */
  goto L_10c522cf;
L_10c522c6:;
  /* 10c522c6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c522c9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c522cc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10c522cf:;
  /* 10c522cf mov edx, dword ptr [0x10c7fde0] */
  EDX = (r32((uint32_t)(0x10c7fde0)));
  /* 10c522d5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c522db cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c522de jae 0x10c52303 */
  if (!C.cf) goto L_10c52303;
  /* 10c522e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c522e3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c522e7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c522ea mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c522f0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c522f3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10c522f7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c522fa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c52301 jmp 0x10c522c6 */
  goto L_10c522c6;
L_10c52303:;
  /* 10c52303 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10c52306 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52307 call dword ptr [0x10c80280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80280))), 0x10c5230du);
  /* 10c5230d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10c52310 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c52316 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c52318 je 0x10c524a5 */
  if (C.zf) goto L_10c524a5;
  /* 10c5231e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52322 je 0x10c524a5 */
  if (C.zf) goto L_10c524a5;
  /* 10c52328 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5232b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5232d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10c52330 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c52333 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52336 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c52339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5233c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5233f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10c52342 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52349 jge 0x10c52353 */
  if ((C.sf==C.of)) goto L_10c52353;
  /* 10c5234b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10c5234e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10c52351 jmp 0x10c5235a */
  goto L_10c5235a;
L_10c52353:;
  /* 10c52353 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10c5235a:;
  /* 10c5235a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10c5235d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10c52360 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10c52367 jmp 0x10c52372 */
  goto L_10c52372;
L_10c52369:;
  /* 10c52369 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10c5236c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5236f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10c52372:;
  /* 10c52372 mov ecx, dword ptr [0x10c7ff1c] */
  ECX = (r32((uint32_t)(0x10c7ff1c)));
  /* 10c52378 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5237b jge 0x10c52412 */
  if ((C.sf==C.of)) goto L_10c52412;
  /* 10c52381 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10c52386 push 0x10c79364 */
  push32((uint32_t)(0x10c79364u));
  /* 10c5238b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5238d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10c52392 call 0x10c52670 */
  push32(0x10c52397u); f_10c52670();
  /* 10c52397 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5239a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10c5239d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c523a1 jne 0x10c523ae */
  if (!C.zf) goto L_10c523ae;
  /* 10c523a3 mov edx, dword ptr [0x10c7ff1c] */
  EDX = (r32((uint32_t)(0x10c7ff1c)));
  /* 10c523a9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10c523ac jmp 0x10c52412 */
  goto L_10c52412;
L_10c523ae:;
  /* 10c523ae mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10c523b1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c523b4 mov dword ptr [eax*4 + 0x10c7fde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10c7fde0), (ECX));
  /* 10c523bb mov edx, dword ptr [0x10c7ff1c] */
  EDX = (r32((uint32_t)(0x10c7ff1c)));
  /* 10c523c1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c523c4 mov dword ptr [0x10c7ff1c], edx */
  w32((uint32_t)(0x10c7ff1c), (EDX));
  /* 10c523ca jmp 0x10c523d5 */
  goto L_10c523d5;
L_10c523cc:;
  /* 10c523cc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c523cf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c523d2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10c523d5:;
  /* 10c523d5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10c523d8 mov edx, dword ptr [ecx*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7fde0)));
  /* 10c523df add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c523e5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c523e8 jae 0x10c5240d */
  if (!C.cf) goto L_10c5240d;
  /* 10c523ea mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c523ed mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c523f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c523f4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c523fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c523fd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10c52401 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c52404 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c5240b jmp 0x10c523cc */
  goto L_10c523cc;
L_10c5240d:;
  /* 10c5240d jmp 0x10c52369 */
  goto L_10c52369;
L_10c52412:;
  /* 10c52412 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10c52419 jmp 0x10c52436 */
  goto L_10c52436;
L_10c5241b:;
  /* 10c5241b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c5241e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52421 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10c52424 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52427 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5242a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5242d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c52430 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52433 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10c52436:;
  /* 10c52436 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c52439 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5243c jge 0x10c524a5 */
  if ((C.sf==C.of)) goto L_10c524a5;
  /* 10c5243e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c52441 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52444 je 0x10c524a0 */
  if (C.zf) goto L_10c524a0;
  /* 10c52446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52449 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5244c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5244f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c52451 je 0x10c524a0 */
  if (C.zf) goto L_10c524a0;
  /* 10c52453 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52456 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c52459 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5245c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5245e jne 0x10c52470 */
  if (!C.zf) goto L_10c52470;
  /* 10c52460 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c52463 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c52465 push edx */
  push32((uint32_t)(EDX));
  /* 10c52466 call dword ptr [0x10c8027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8027c))), 0x10c5246cu);
  /* 10c5246c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5246e je 0x10c524a0 */
  if (C.zf) goto L_10c524a0;
L_10c52470:;
  /* 10c52470 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c52473 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c52476 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c52479 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5247c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5247f mov edx, dword ptr [eax*4 + 0x10c7fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c52486 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52488 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10c5248b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c5248e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c52491 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c52493 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c52495 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c52498 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5249b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5249d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10c524a0:;
  /* 10c524a0 jmp 0x10c5241b */
  goto L_10c5241b;
L_10c524a5:;
  /* 10c524a5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10c524ac jmp 0x10c524b7 */
  goto L_10c524b7;
L_10c524ae:;
  /* 10c524ae mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c524b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c524b4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10c524b7:;
  /* 10c524b7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c524bb jge 0x10c52594 */
  if ((C.sf==C.of)) goto L_10c52594;
  /* 10c524c1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c524c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c524c7 mov edx, dword ptr [0x10c7fde0] */
  EDX = (r32((uint32_t)(0x10c7fde0)));
  /* 10c524cd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c524cf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10c524d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c524d5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c524d8 jne 0x10c52580 */
  if (!C.zf) goto L_10c52580;
  /* 10c524de mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c524e1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10c524e5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c524e9 jne 0x10c524f4 */
  if (!C.zf) goto L_10c524f4;
  /* 10c524eb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10c524f2 jmp 0x10c52504 */
  goto L_10c52504;
L_10c524f4:;
  /* 10c524f4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c524f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c524fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c524fc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c524fe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52501 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10c52504:;
  /* 10c52504 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10c52507 push eax */
  push32((uint32_t)(EAX));
  /* 10c52508 call dword ptr [0x10c8022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8022c))), 0x10c5250eu);
  /* 10c5250e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10c52511 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52515 je 0x10c5256f */
  if (C.zf) goto L_10c5256f;
  /* 10c52517 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c5251a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5251b call dword ptr [0x10c8027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8027c))), 0x10c52521u);
  /* 10c52521 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10c52524 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52528 je 0x10c5256f */
  if (C.zf) goto L_10c5256f;
  /* 10c5252a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c5252d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c52530 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c52532 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10c52535 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5253b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5253e jne 0x10c52550 */
  if (!C.zf) goto L_10c52550;
  /* 10c52540 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c52543 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c52546 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10c52548 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c5254b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10c5254e jmp 0x10c5256d */
  goto L_10c5256d;
L_10c52550:;
  /* 10c52550 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10c52553 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c52559 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5255c jne 0x10c5256d */
  if (!C.zf) goto L_10c5256d;
  /* 10c5255e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c52561 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c52564 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10c52567 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c5256a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10c5256d:;
  /* 10c5256d jmp 0x10c5257e */
  goto L_10c5257e;
L_10c5256f:;
  /* 10c5256f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c52572 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c52575 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10c52578 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c5257b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10c5257e:;
  /* 10c5257e jmp 0x10c5258f */
  goto L_10c5258f;
L_10c52580:;
  /* 10c52580 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c52583 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c52586 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10c52589 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c5258c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10c5258f:;
  /* 10c5258f jmp 0x10c524ae */
  goto L_10c524ae;
L_10c52594:;
  /* 10c52594 mov eax, dword ptr [0x10c7ff1c] */
  EAX = (r32((uint32_t)(0x10c7ff1c)));
  /* 10c52599 push eax */
  push32((uint32_t)(EAX));
  /* 10c5259a call dword ptr [0x10c80278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80278))), 0x10c525a0u);
  /* 10c525a0 mov esp, ebp */
  ESP = (EBP);
  /* 10c525a2 pop ebp */
  EBP = (pop32());
  /* 10c525a3 ret  */
  ESPCHK(0x10c52280u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10c525b0 (155 bytes, 45 insns) */
void f_10c525b0(void) {
  FTRACE(0x10c525b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c525b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c525b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c525b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c525b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c525bd jmp 0x10c525c8 */
  goto L_10c525c8;
L_10c525bf:;
  /* 10c525bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c525c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c525c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c525c8:;
  /* 10c525c8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c525cc jge 0x10c52647 */
  if ((C.sf==C.of)) goto L_10c52647;
  /* 10c525ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c525d1 cmp dword ptr [ecx*4 + 0x10c7fde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10c7fde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c525d9 je 0x10c52642 */
  if (C.zf) goto L_10c52642;
  /* 10c525db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c525de mov eax, dword ptr [edx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7fde0)));
  /* 10c525e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c525e8 jmp 0x10c525f3 */
  goto L_10c525f3;
L_10c525ea:;
  /* 10c525ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c525ed add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c525f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c525f3:;
  /* 10c525f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c525f6 mov eax, dword ptr [edx*4 + 0x10c7fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7fde0)));
  /* 10c525fd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52602 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52605 jae 0x10c5261f */
  if (!C.cf) goto L_10c5261f;
  /* 10c52607 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5260a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5260e je 0x10c5261d */
  if (C.zf) goto L_10c5261d;
  /* 10c52610 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52613 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52616 push edx */
  push32((uint32_t)(EDX));
  /* 10c52617 call dword ptr [0x10c80284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80284))), 0x10c5261du);
L_10c5261d:;
  /* 10c5261d jmp 0x10c525ea */
  goto L_10c525ea;
L_10c5261f:;
  /* 10c5261f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52621 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52624 mov ecx, dword ptr [eax*4 + 0x10c7fde0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c7fde0)));
  /* 10c5262b push ecx */
  push32((uint32_t)(ECX));
  /* 10c5262c call 0x10c53100 */
  push32(0x10c52631u); f_10c53100();
  /* 10c52631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52634 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52637 mov dword ptr [edx*4 + 0x10c7fde0], 0 */
  w32((uint32_t)(EDX*4 + 0x10c7fde0), (0x0u));
L_10c52642:;
  /* 10c52642 jmp 0x10c525bf */
  goto L_10c525bf;
L_10c52647:;
  /* 10c52647 mov esp, ebp */
  ESP = (EBP);
  /* 10c52649 pop ebp */
  EBP = (pop32());
  /* 10c5264a ret  */
  ESPCHK(0x10c525b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002650 @ 0x10c52650 (29 bytes, 13 insns) */
void f_10c52650(void) {
  FTRACE(0x10c52650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52650 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52651 mov ebp, esp */
  EBP = (ESP);
  /* 10c52653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52655 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52657 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c52659 mov eax, dword ptr [0x10c7e5e8] */
  EAX = (r32((uint32_t)(0x10c7e5e8)));
  /* 10c5265e push eax */
  push32((uint32_t)(EAX));
  /* 10c5265f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52662 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52663 call 0x10c526c0 */
  push32(0x10c52668u); f_10c526c0();
  /* 10c52668 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5266b pop ebp */
  EBP = (pop32());
  /* 10c5266c ret  */
  ESPCHK(0x10c52650u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x10c52670 (35 bytes, 16 insns) */
void f_10c52670(void) {
  FTRACE(0x10c52670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52670 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52671 mov ebp, esp */
  EBP = (ESP);
  /* 10c52673 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c52676 push eax */
  push32((uint32_t)(EAX));
  /* 10c52677 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5267a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5267b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5267e push edx */
  push32((uint32_t)(EDX));
  /* 10c5267f mov eax, dword ptr [0x10c7e5e8] */
  EAX = (r32((uint32_t)(0x10c7e5e8)));
  /* 10c52684 push eax */
  push32((uint32_t)(EAX));
  /* 10c52685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52688 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52689 call 0x10c526c0 */
  push32(0x10c5268eu); f_10c526c0();
  /* 10c5268e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52691 pop ebp */
  EBP = (pop32());
  /* 10c52692 ret  */
  ESPCHK(0x10c52670u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x10c526a0 (27 bytes, 13 insns) */
void f_10c526a0(void) {
  FTRACE(0x10c526a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c526a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c526a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c526a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c526a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c526a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c526a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c526ac push eax */
  push32((uint32_t)(EAX));
  /* 10c526ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c526b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c526b1 call 0x10c526c0 */
  push32(0x10c526b6u); f_10c526c0();
  /* 10c526b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c526b9 pop ebp */
  EBP = (pop32());
  /* 10c526ba ret  */
  ESPCHK(0x10c526a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x10c526c0 (94 bytes, 38 insns) */
void f_10c526c0(void) {
  FTRACE(0x10c526c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c526c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c526c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c526c3 push ecx */
  push32((uint32_t)(ECX));
L_10c526c4:;
  /* 10c526c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c526c6 call 0x10c56070 */
  push32(0x10c526cbu); f_10c56070();
  /* 10c526cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c526ce mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c526d1 push eax */
  push32((uint32_t)(EAX));
  /* 10c526d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c526d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c526d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c526d9 push edx */
  push32((uint32_t)(EDX));
  /* 10c526da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c526dd push eax */
  push32((uint32_t)(EAX));
  /* 10c526de call 0x10c52740 */
  push32(0x10c526e3u); f_10c52740();
  /* 10c526e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c526e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c526e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c526eb call 0x10c56110 */
  push32(0x10c526f0u); f_10c56110();
  /* 10c526f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c526f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c526f7 jne 0x10c526ff */
  if (!C.zf) goto L_10c526ff;
  /* 10c526f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c526fd jne 0x10c52704 */
  if (!C.zf) goto L_10c52704;
L_10c526ff:;
  /* 10c526ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52702 jmp 0x10c5271a */
  goto L_10c5271a;
L_10c52704:;
  /* 10c52704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52707 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52708 call 0x10c563b0 */
  push32(0x10c5270du); f_10c563b0();
  /* 10c5270d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52712 jne 0x10c52718 */
  if (!C.zf) goto L_10c52718;
  /* 10c52714 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52716 jmp 0x10c5271a */
  goto L_10c5271a;
L_10c52718:;
  /* 10c52718 jmp 0x10c526c4 */
  goto L_10c526c4;
L_10c5271a:;
  /* 10c5271a mov esp, ebp */
  ESP = (EBP);
  /* 10c5271c pop ebp */
  EBP = (pop32());
  /* 10c5271d ret  */
  ESPCHK(0x10c526c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10c52720 (23 bytes, 11 insns) */
void f_10c52720(void) {
  FTRACE(0x10c52720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52720 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52721 mov ebp, esp */
  EBP = (ESP);
  /* 10c52723 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52725 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52727 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c52729 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5272c push eax */
  push32((uint32_t)(EAX));
  /* 10c5272d call 0x10c52740 */
  push32(0x10c52732u); f_10c52740();
  /* 10c52732 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52735 pop ebp */
  EBP = (pop32());
  /* 10c52736 ret  */
  ESPCHK(0x10c52720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10c52740 (787 bytes, 254 insns) */
void f_10c52740(void) {
  FTRACE(0x10c52740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52740 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52741 mov ebp, esp */
  EBP = (ESP);
  /* 10c52743 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c52746 push ebx */
  push32((uint32_t)(EBX));
  /* 10c52747 push esi */
  push32((uint32_t)(ESI));
  /* 10c52748 push edi */
  push32((uint32_t)(EDI));
  /* 10c52749 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c52750 mov eax, dword ptr [0x10c7ca84] */
  EAX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c52755 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c52758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5275a je 0x10c5278c */
  if (C.zf) goto L_10c5278c;
L_10c5275c:;
  /* 10c5275c call 0x10c53810 */
  push32(0x10c52761u); f_10c53810();
  /* 10c52761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52763 jne 0x10c52786 */
  if (!C.zf) goto L_10c52786;
  /* 10c52765 push 0x10c79458 */
  push32((uint32_t)(0x10c79458u));
  /* 10c5276a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5276c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10c52771 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c52776 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52778 call 0x10c51730 */
  push32(0x10c5277du); f_10c51730();
  /* 10c5277d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52780 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52783 jne 0x10c52786 */
  if (!C.zf) goto L_10c52786;
  /* 10c52785 int3  */
  x86_unimpl("int3 @ 0x10c52785");
L_10c52786:;
  /* 10c52786 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c52788 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5278a jne 0x10c5275c */
  if (!C.zf) goto L_10c5275c;
L_10c5278c:;
  /* 10c5278c mov edx, dword ptr [0x10c7ca88] */
  EDX = (r32((uint32_t)(0x10c7ca88)));
  /* 10c52792 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c52795 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52798 cmp eax, dword ptr [0x10c7ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5279e jne 0x10c527a1 */
  if (!C.zf) goto L_10c527a1;
  /* 10c527a0 int3  */
  x86_unimpl("int3 @ 0x10c527a0");
L_10c527a1:;
  /* 10c527a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c527a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c527a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c527a8 push edx */
  push32((uint32_t)(EDX));
  /* 10c527a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c527ac push eax */
  push32((uint32_t)(EAX));
  /* 10c527ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c527b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c527b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c527b4 push edx */
  push32((uint32_t)(EDX));
  /* 10c527b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c527b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c527b9 call dword ptr [0x10c7cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7cc90))), 0x10c527bfu);
  /* 10c527bf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c527c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c527c4 jne 0x10c52824 */
  if (!C.zf) goto L_10c52824;
  /* 10c527c6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c527ca je 0x10c527f7 */
  if (C.zf) goto L_10c527f7;
L_10c527cc:;
  /* 10c527cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c527cf push eax */
  push32((uint32_t)(EAX));
  /* 10c527d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c527d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c527d4 push 0x10c79414 */
  push32((uint32_t)(0x10c79414u));
  /* 10c527d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c527db push 0 */
  push32((uint32_t)(0x0u));
  /* 10c527dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c527df push 0 */
  push32((uint32_t)(0x0u));
  /* 10c527e1 call 0x10c51730 */
  push32(0x10c527e6u); f_10c51730();
  /* 10c527e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c527e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c527ec jne 0x10c527ef */
  if (!C.zf) goto L_10c527ef;
  /* 10c527ee int3  */
  x86_unimpl("int3 @ 0x10c527ee");
L_10c527ef:;
  /* 10c527ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c527f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c527f3 jne 0x10c527cc */
  if (!C.zf) goto L_10c527cc;
  /* 10c527f5 jmp 0x10c5281d */
  goto L_10c5281d;
L_10c527f7:;
  /* 10c527f7 push 0x10c793f0 */
  push32((uint32_t)(0x10c793f0u));
  /* 10c527fc push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c52801 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52803 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52805 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52807 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52809 call 0x10c51730 */
  push32(0x10c5280eu); f_10c51730();
  /* 10c5280e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52811 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52814 jne 0x10c52817 */
  if (!C.zf) goto L_10c52817;
  /* 10c52816 int3  */
  x86_unimpl("int3 @ 0x10c52816");
L_10c52817:;
  /* 10c52817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5281b jne 0x10c527f7 */
  if (!C.zf) goto L_10c527f7;
L_10c5281d:;
  /* 10c5281d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5281f jmp 0x10c52a4c */
  goto L_10c52a4c;
L_10c52824:;
  /* 10c52824 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52827 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5282d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52830 je 0x10c52846 */
  if (C.zf) goto L_10c52846;
  /* 10c52832 mov edx, dword ptr [0x10c7ca84] */
  EDX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c52838 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5283b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5283d jne 0x10c52846 */
  if (!C.zf) goto L_10c52846;
  /* 10c5283f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10c52846:;
  /* 10c52846 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5284a ja 0x10c52857 */
  if ((!C.cf&&!C.zf)) goto L_10c52857;
  /* 10c5284c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5284f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52852 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52855 jbe 0x10c52883 */
  if ((C.cf||C.zf)) goto L_10c52883;
L_10c52857:;
  /* 10c52857 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5285a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5285b push 0x10c793c8 */
  push32((uint32_t)(0x10c793c8u));
  /* 10c52860 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52862 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52864 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52866 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c52868 call 0x10c51730 */
  push32(0x10c5286du); f_10c51730();
  /* 10c5286d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52870 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52873 jne 0x10c52876 */
  if (!C.zf) goto L_10c52876;
  /* 10c52875 int3  */
  x86_unimpl("int3 @ 0x10c52875");
L_10c52876:;
  /* 10c52876 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c52878 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5287a jne 0x10c52857 */
  if (!C.zf) goto L_10c52857;
  /* 10c5287c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5287e jmp 0x10c52a4c */
  goto L_10c52a4c;
L_10c52883:;
  /* 10c52883 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52886 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5288b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5288e je 0x10c528d0 */
  if (C.zf) goto L_10c528d0;
  /* 10c52890 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52894 je 0x10c528d0 */
  if (C.zf) goto L_10c528d0;
  /* 10c52896 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52899 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5289f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c528a2 je 0x10c528d0 */
  if (C.zf) goto L_10c528d0;
  /* 10c528a4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c528a8 je 0x10c528d0 */
  if (C.zf) goto L_10c528d0;
L_10c528aa:;
  /* 10c528aa push 0x10c79394 */
  push32((uint32_t)(0x10c79394u));
  /* 10c528af push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c528b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c528b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c528b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c528ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10c528bc call 0x10c51730 */
  push32(0x10c528c1u); f_10c51730();
  /* 10c528c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c528c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c528c7 jne 0x10c528ca */
  if (!C.zf) goto L_10c528ca;
  /* 10c528c9 int3  */
  x86_unimpl("int3 @ 0x10c528c9");
L_10c528ca:;
  /* 10c528ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c528cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c528ce jne 0x10c528aa */
  if (!C.zf) goto L_10c528aa;
L_10c528d0:;
  /* 10c528d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c528d3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c528d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c528d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c528dc push ecx */
  push32((uint32_t)(ECX));
  /* 10c528dd call 0x10c564c0 */
  push32(0x10c528e2u); f_10c564c0();
  /* 10c528e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c528e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c528e8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c528ec jne 0x10c528f5 */
  if (!C.zf) goto L_10c528f5;
  /* 10c528ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c528f0 jmp 0x10c52a4c */
  goto L_10c52a4c;
L_10c528f5:;
  /* 10c528f5 mov edx, dword ptr [0x10c7ca88] */
  EDX = (r32((uint32_t)(0x10c7ca88)));
  /* 10c528fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c528fe mov dword ptr [0x10c7ca88], edx */
  w32((uint32_t)(0x10c7ca88), (EDX));
  /* 10c52904 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52908 je 0x10c52953 */
  if (C.zf) goto L_10c52953;
  /* 10c5290a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5290d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c52913 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52916 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c5291d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52920 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10c52927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5292a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10c52931 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52937 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10c5293a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5293d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10c52944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52947 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10c5294e jmp 0x10c529f3 */
  goto L_10c529f3;
L_10c52953:;
  /* 10c52953 mov edx, dword ptr [0x10c7e448] */
  EDX = (r32((uint32_t)(0x10c7e448)));
  /* 10c52959 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5295c mov dword ptr [0x10c7e448], edx */
  w32((uint32_t)(0x10c7e448), (EDX));
  /* 10c52962 mov eax, dword ptr [0x10c7e450] */
  EAX = (r32((uint32_t)(0x10c7e450)));
  /* 10c52967 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5296a mov dword ptr [0x10c7e450], eax */
  w32((uint32_t)(0x10c7e450), (EAX));
  /* 10c5296f mov ecx, dword ptr [0x10c7e450] */
  ECX = (r32((uint32_t)(0x10c7e450)));
  /* 10c52975 cmp ecx, dword ptr [0x10c7e454] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7e454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5297b jbe 0x10c52989 */
  if ((C.cf||C.zf)) goto L_10c52989;
  /* 10c5297d mov edx, dword ptr [0x10c7e450] */
  EDX = (r32((uint32_t)(0x10c7e450)));
  /* 10c52983 mov dword ptr [0x10c7e454], edx */
  w32((uint32_t)(0x10c7e454), (EDX));
L_10c52989:;
  /* 10c52989 cmp dword ptr [0x10c7e44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52990 je 0x10c5299f */
  if (C.zf) goto L_10c5299f;
  /* 10c52992 mov eax, dword ptr [0x10c7e44c] */
  EAX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c52997 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5299a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c5299d jmp 0x10c529a8 */
  goto L_10c529a8;
L_10c5299f:;
  /* 10c5299f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c529a2 mov dword ptr [0x10c7e444], edx */
  w32((uint32_t)(0x10c7e444), (EDX));
L_10c529a8:;
  /* 10c529a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c529ab mov ecx, dword ptr [0x10c7e44c] */
  ECX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c529b1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c529b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c529b6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10c529bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c529c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c529c3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10c529c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c529c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c529cc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10c529cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c529d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c529d5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10c529d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c529db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c529de mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10c529e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c529e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c529e7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10c529ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c529ed mov dword ptr [0x10c7e44c], ecx */
  w32((uint32_t)(0x10c7e44c), (ECX));
L_10c529f3:;
  /* 10c529f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c529f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c529f7 mov dl, byte ptr [0x10c7ca90] */
  DL = (r8((uint32_t)(0x10c7ca90)));
  /* 10c529fd push edx */
  push32((uint32_t)(EDX));
  /* 10c529fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52a01 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52a04 push eax */
  push32((uint32_t)(EAX));
  /* 10c52a05 call 0x10c563e0 */
  push32(0x10c52a0au); f_10c563e0();
  /* 10c52a0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52a0d push 4 */
  push32((uint32_t)(0x4u));
  /* 10c52a0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c52a11 mov cl, byte ptr [0x10c7ca90] */
  CL = (r8((uint32_t)(0x10c7ca90)));
  /* 10c52a17 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52a18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52a1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52a1e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10c52a22 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52a23 call 0x10c563e0 */
  push32(0x10c52a28u); f_10c563e0();
  /* 10c52a28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52a2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52a2e push edx */
  push32((uint32_t)(EDX));
  /* 10c52a2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52a31 mov al, byte ptr [0x10c7ca92] */
  AL = (r8((uint32_t)(0x10c7ca92)));
  /* 10c52a36 push eax */
  push32((uint32_t)(EAX));
  /* 10c52a37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52a3a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52a3d push ecx */
  push32((uint32_t)(ECX));
  /* 10c52a3e call 0x10c563e0 */
  push32(0x10c52a43u); f_10c563e0();
  /* 10c52a43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52a46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52a49 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10c52a4c:;
  /* 10c52a4c pop edi */
  EDI = (pop32());
  /* 10c52a4d pop esi */
  ESI = (pop32());
  /* 10c52a4e pop ebx */
  EBX = (pop32());
  /* 10c52a4f mov esp, ebp */
  ESP = (EBP);
  /* 10c52a51 pop ebp */
  EBP = (pop32());
  /* 10c52a52 ret  */
  ESPCHK(0x10c52740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a60 @ 0x10c52a60 (27 bytes, 13 insns) */
void f_10c52a60(void) {
  FTRACE(0x10c52a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52a61 mov ebp, esp */
  EBP = (ESP);
  /* 10c52a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c52a69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52a6c push eax */
  push32((uint32_t)(EAX));
  /* 10c52a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52a70 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52a71 call 0x10c52a80 */
  push32(0x10c52a76u); f_10c52a80();
  /* 10c52a76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52a79 pop ebp */
  EBP = (pop32());
  /* 10c52a7a ret  */
  ESPCHK(0x10c52a60u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10c52a80 (96 bytes, 37 insns) */
void f_10c52a80(void) {
  FTRACE(0x10c52a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52a81 mov ebp, esp */
  EBP = (ESP);
  /* 10c52a83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c52a86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52a89 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c52a8d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c52a90 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c52a93 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52a94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c52a97 push edx */
  push32((uint32_t)(EDX));
  /* 10c52a98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c52a9b push eax */
  push32((uint32_t)(EAX));
  /* 10c52a9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52a9f push ecx */
  push32((uint32_t)(ECX));
  /* 10c52aa0 call 0x10c52670 */
  push32(0x10c52aa5u); f_10c52670();
  /* 10c52aa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52aa8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c52aab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52aaf je 0x10c52ad9 */
  if (C.zf) goto L_10c52ad9;
  /* 10c52ab1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52ab4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c52ab7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52aba add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52abd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c52ac0:;
  /* 10c52ac0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52ac3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52ac6 jae 0x10c52ad9 */
  if (!C.cf) goto L_10c52ad9;
  /* 10c52ac8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52acb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c52ace mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52ad1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52ad4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c52ad7 jmp 0x10c52ac0 */
  goto L_10c52ac0;
L_10c52ad9:;
  /* 10c52ad9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52adc mov esp, ebp */
  ESP = (EBP);
  /* 10c52ade pop ebp */
  EBP = (pop32());
  /* 10c52adf ret  */
  ESPCHK(0x10c52a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ae0 @ 0x10c52ae0 (27 bytes, 13 insns) */
void f_10c52ae0(void) {
  FTRACE(0x10c52ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10c52ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52ae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c52ae9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52aec push eax */
  push32((uint32_t)(EAX));
  /* 10c52aed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52af0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52af1 call 0x10c52b00 */
  push32(0x10c52af6u); f_10c52b00();
  /* 10c52af6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52af9 pop ebp */
  EBP = (pop32());
  /* 10c52afa ret  */
  ESPCHK(0x10c52ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b00 @ 0x10c52b00 (64 bytes, 27 insns) */
void f_10c52b00(void) {
  FTRACE(0x10c52b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52b01 mov ebp, esp */
  EBP = (ESP);
  /* 10c52b03 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52b04 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c52b06 call 0x10c56070 */
  push32(0x10c52b0bu); f_10c56070();
  /* 10c52b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c52b10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c52b13 push eax */
  push32((uint32_t)(EAX));
  /* 10c52b14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c52b17 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52b18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c52b1b push edx */
  push32((uint32_t)(EDX));
  /* 10c52b1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52b1f push eax */
  push32((uint32_t)(EAX));
  /* 10c52b20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52b24 call 0x10c52b40 */
  push32(0x10c52b29u); f_10c52b40();
  /* 10c52b29 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52b2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c52b2f push 9 */
  push32((uint32_t)(0x9u));
  /* 10c52b31 call 0x10c56110 */
  push32(0x10c52b36u); f_10c56110();
  /* 10c52b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52b39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52b3c mov esp, ebp */
  ESP = (EBP);
  /* 10c52b3e pop ebp */
  EBP = (pop32());
  /* 10c52b3f ret  */
  ESPCHK(0x10c52b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b40 @ 0x10c52b40 (1297 bytes, 431 insns) */
void f_10c52b40(void) {
  FTRACE(0x10c52b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c52b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c52b41 mov ebp, esp */
  EBP = (ESP);
  /* 10c52b43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c52b46 push ebx */
  push32((uint32_t)(EBX));
  /* 10c52b47 push esi */
  push32((uint32_t)(ESI));
  /* 10c52b48 push edi */
  push32((uint32_t)(EDI));
  /* 10c52b49 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10c52b50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52b54 jne 0x10c52b73 */
  if (!C.zf) goto L_10c52b73;
  /* 10c52b56 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c52b59 push eax */
  push32((uint32_t)(EAX));
  /* 10c52b5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c52b5d push ecx */
  push32((uint32_t)(ECX));
  /* 10c52b5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c52b61 push edx */
  push32((uint32_t)(EDX));
  /* 10c52b62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52b65 push eax */
  push32((uint32_t)(EAX));
  /* 10c52b66 call 0x10c52670 */
  push32(0x10c52b6bu); f_10c52670();
  /* 10c52b6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52b6e jmp 0x10c5304a */
  goto L_10c5304a;
L_10c52b73:;
  /* 10c52b73 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52b77 je 0x10c52b96 */
  if (C.zf) goto L_10c52b96;
  /* 10c52b79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52b7d jne 0x10c52b96 */
  if (!C.zf) goto L_10c52b96;
  /* 10c52b7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c52b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52b83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52b86 push edx */
  push32((uint32_t)(EDX));
  /* 10c52b87 call 0x10c53100 */
  push32(0x10c52b8cu); f_10c53100();
  /* 10c52b8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52b91 jmp 0x10c5304a */
  goto L_10c5304a;
L_10c52b96:;
  /* 10c52b96 mov eax, dword ptr [0x10c7ca84] */
  EAX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c52b9b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c52b9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52ba0 je 0x10c52bd2 */
  if (C.zf) goto L_10c52bd2;
L_10c52ba2:;
  /* 10c52ba2 call 0x10c53810 */
  push32(0x10c52ba7u); f_10c53810();
  /* 10c52ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52ba9 jne 0x10c52bcc */
  if (!C.zf) goto L_10c52bcc;
  /* 10c52bab push 0x10c79458 */
  push32((uint32_t)(0x10c79458u));
  /* 10c52bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52bb2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10c52bb7 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c52bbc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52bbe call 0x10c51730 */
  push32(0x10c52bc3u); f_10c51730();
  /* 10c52bc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52bc6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52bc9 jne 0x10c52bcc */
  if (!C.zf) goto L_10c52bcc;
  /* 10c52bcb int3  */
  x86_unimpl("int3 @ 0x10c52bcb");
L_10c52bcc:;
  /* 10c52bcc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c52bce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c52bd0 jne 0x10c52ba2 */
  if (!C.zf) goto L_10c52ba2;
L_10c52bd2:;
  /* 10c52bd2 mov edx, dword ptr [0x10c7ca88] */
  EDX = (r32((uint32_t)(0x10c7ca88)));
  /* 10c52bd8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c52bdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c52bde cmp eax, dword ptr [0x10c7ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52be4 jne 0x10c52be7 */
  if (!C.zf) goto L_10c52be7;
  /* 10c52be6 int3  */
  x86_unimpl("int3 @ 0x10c52be6");
L_10c52be7:;
  /* 10c52be7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c52bea push ecx */
  push32((uint32_t)(ECX));
  /* 10c52beb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c52bee push edx */
  push32((uint32_t)(EDX));
  /* 10c52bef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c52bf2 push eax */
  push32((uint32_t)(EAX));
  /* 10c52bf3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c52bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52bf7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52bfa push edx */
  push32((uint32_t)(EDX));
  /* 10c52bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52bfe push eax */
  push32((uint32_t)(EAX));
  /* 10c52bff push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52c01 call dword ptr [0x10c7cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7cc90))), 0x10c52c07u);
  /* 10c52c07 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52c0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52c0c jne 0x10c52c6c */
  if (!C.zf) goto L_10c52c6c;
  /* 10c52c0e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52c12 je 0x10c52c3f */
  if (C.zf) goto L_10c52c3f;
L_10c52c14:;
  /* 10c52c14 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c52c17 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52c18 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c52c1b push edx */
  push32((uint32_t)(EDX));
  /* 10c52c1c push 0x10c795d4 */
  push32((uint32_t)(0x10c795d4u));
  /* 10c52c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c29 call 0x10c51730 */
  push32(0x10c52c2eu); f_10c51730();
  /* 10c52c2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52c31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52c34 jne 0x10c52c37 */
  if (!C.zf) goto L_10c52c37;
  /* 10c52c36 int3  */
  x86_unimpl("int3 @ 0x10c52c36");
L_10c52c37:;
  /* 10c52c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52c3b jne 0x10c52c14 */
  if (!C.zf) goto L_10c52c14;
  /* 10c52c3d jmp 0x10c52c65 */
  goto L_10c52c65;
L_10c52c3f:;
  /* 10c52c3f push 0x10c795b0 */
  push32((uint32_t)(0x10c795b0u));
  /* 10c52c44 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c52c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c51 call 0x10c51730 */
  push32(0x10c52c56u); f_10c51730();
  /* 10c52c56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52c59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52c5c jne 0x10c52c5f */
  if (!C.zf) goto L_10c52c5f;
  /* 10c52c5e int3  */
  x86_unimpl("int3 @ 0x10c52c5e");
L_10c52c5f:;
  /* 10c52c5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c52c61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c52c63 jne 0x10c52c3f */
  if (!C.zf) goto L_10c52c3f;
L_10c52c65:;
  /* 10c52c65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52c67 jmp 0x10c5304a */
  goto L_10c5304a;
L_10c52c6c:;
  /* 10c52c6c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52c70 jbe 0x10c52c9e */
  if ((C.cf||C.zf)) goto L_10c52c9e;
L_10c52c72:;
  /* 10c52c72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52c75 push edx */
  push32((uint32_t)(EDX));
  /* 10c52c76 push 0x10c79580 */
  push32((uint32_t)(0x10c79580u));
  /* 10c52c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52c81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c52c83 call 0x10c51730 */
  push32(0x10c52c88u); f_10c51730();
  /* 10c52c88 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52c8b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52c8e jne 0x10c52c91 */
  if (!C.zf) goto L_10c52c91;
  /* 10c52c90 int3  */
  x86_unimpl("int3 @ 0x10c52c90");
L_10c52c91:;
  /* 10c52c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52c95 jne 0x10c52c72 */
  if (!C.zf) goto L_10c52c72;
  /* 10c52c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52c99 jmp 0x10c5304a */
  goto L_10c5304a;
L_10c52c9e:;
  /* 10c52c9e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52ca2 je 0x10c52ce6 */
  if (C.zf) goto L_10c52ce6;
  /* 10c52ca4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c52ca7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c52cad cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52cb0 je 0x10c52ce6 */
  if (C.zf) goto L_10c52ce6;
  /* 10c52cb2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c52cb5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c52cbb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52cbe je 0x10c52ce6 */
  if (C.zf) goto L_10c52ce6;
L_10c52cc0:;
  /* 10c52cc0 push 0x10c79394 */
  push32((uint32_t)(0x10c79394u));
  /* 10c52cc5 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c52cca push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52cce push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52cd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c52cd2 call 0x10c51730 */
  push32(0x10c52cd7u); f_10c51730();
  /* 10c52cd7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52cda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52cdd jne 0x10c52ce0 */
  if (!C.zf) goto L_10c52ce0;
  /* 10c52cdf int3  */
  x86_unimpl("int3 @ 0x10c52cdf");
L_10c52ce0:;
  /* 10c52ce0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52ce4 jne 0x10c52cc0 */
  if (!C.zf) goto L_10c52cc0;
L_10c52ce6:;
  /* 10c52ce6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c52cea call 0x10c53c70 */
  push32(0x10c52cefu); f_10c53c70();
  /* 10c52cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c52cf4 jne 0x10c52d17 */
  if (!C.zf) goto L_10c52d17;
  /* 10c52cf6 push 0x10c7955c */
  push32((uint32_t)(0x10c7955cu));
  /* 10c52cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52cfd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10c52d02 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c52d07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52d09 call 0x10c51730 */
  push32(0x10c52d0eu); f_10c51730();
  /* 10c52d0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52d11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52d14 jne 0x10c52d17 */
  if (!C.zf) goto L_10c52d17;
  /* 10c52d16 int3  */
  x86_unimpl("int3 @ 0x10c52d16");
L_10c52d17:;
  /* 10c52d17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c52d19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c52d1b jne 0x10c52ce6 */
  if (!C.zf) goto L_10c52ce6;
  /* 10c52d1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c52d20 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c52d23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c52d26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52d29 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52d2d jne 0x10c52d36 */
  if (!C.zf) goto L_10c52d36;
  /* 10c52d2f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10c52d36:;
  /* 10c52d36 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52d3a je 0x10c52d7a */
  if (C.zf) goto L_10c52d7a;
L_10c52d3c:;
  /* 10c52d3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52d3f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52d46 jne 0x10c52d51 */
  if (!C.zf) goto L_10c52d51;
  /* 10c52d48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52d4b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52d4f je 0x10c52d72 */
  if (C.zf) goto L_10c52d72;
L_10c52d51:;
  /* 10c52d51 push 0x10c79514 */
  push32((uint32_t)(0x10c79514u));
  /* 10c52d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52d58 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10c52d5d push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c52d62 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52d64 call 0x10c51730 */
  push32(0x10c52d69u); f_10c51730();
  /* 10c52d69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52d6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52d6f jne 0x10c52d72 */
  if (!C.zf) goto L_10c52d72;
  /* 10c52d71 int3  */
  x86_unimpl("int3 @ 0x10c52d71");
L_10c52d72:;
  /* 10c52d72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c52d74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c52d76 jne 0x10c52d3c */
  if (!C.zf) goto L_10c52d3c;
  /* 10c52d78 jmp 0x10c52dde */
  goto L_10c52dde;
L_10c52d7a:;
  /* 10c52d7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52d7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c52d80 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c52d85 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52d88 jne 0x10c52d9f */
  if (!C.zf) goto L_10c52d9f;
  /* 10c52d8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c52d8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c52d93 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52d96 jne 0x10c52d9f */
  if (!C.zf) goto L_10c52d9f;
  /* 10c52d98 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10c52d9f:;
  /* 10c52d9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52da2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c52da5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c52daa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c52dad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c52db3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52db5 je 0x10c52dd8 */
  if (C.zf) goto L_10c52dd8;
  /* 10c52db7 push 0x10c794d8 */
  push32((uint32_t)(0x10c794d8u));
  /* 10c52dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52dbe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10c52dc3 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c52dc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52dca call 0x10c51730 */
  push32(0x10c52dcfu); f_10c51730();
  /* 10c52dcf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52dd2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52dd5 jne 0x10c52dd8 */
  if (!C.zf) goto L_10c52dd8;
  /* 10c52dd7 int3  */
  x86_unimpl("int3 @ 0x10c52dd7");
L_10c52dd8:;
  /* 10c52dd8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c52dda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c52ddc jne 0x10c52d9f */
  if (!C.zf) goto L_10c52d9f;
L_10c52dde:;
  /* 10c52dde cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52de2 je 0x10c52e09 */
  if (C.zf) goto L_10c52e09;
  /* 10c52de4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52de7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52dea push eax */
  push32((uint32_t)(EAX));
  /* 10c52deb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52dee push ecx */
  push32((uint32_t)(ECX));
  /* 10c52def call 0x10c565f0 */
  push32(0x10c52df4u); f_10c565f0();
  /* 10c52df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52df7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c52dfa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52dfe jne 0x10c52e07 */
  if (!C.zf) goto L_10c52e07;
  /* 10c52e00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52e02 jmp 0x10c5304a */
  goto L_10c5304a;
L_10c52e07:;
  /* 10c52e07 jmp 0x10c52e2c */
  goto L_10c52e2c;
L_10c52e09:;
  /* 10c52e09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52e0c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52e0f push edx */
  push32((uint32_t)(EDX));
  /* 10c52e10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c52e13 push eax */
  push32((uint32_t)(EAX));
  /* 10c52e14 call 0x10c56540 */
  push32(0x10c52e19u); f_10c56540();
  /* 10c52e19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52e1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c52e1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52e23 jne 0x10c52e2c */
  if (!C.zf) goto L_10c52e2c;
  /* 10c52e25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52e27 jmp 0x10c5304a */
  goto L_10c5304a;
L_10c52e2c:;
  /* 10c52e2c mov ecx, dword ptr [0x10c7ca88] */
  ECX = (r32((uint32_t)(0x10c7ca88)));
  /* 10c52e32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52e35 mov dword ptr [0x10c7ca88], ecx */
  w32((uint32_t)(0x10c7ca88), (ECX));
  /* 10c52e3b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52e3f jne 0x10c52e97 */
  if (!C.zf) goto L_10c52e97;
  /* 10c52e41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52e44 mov eax, dword ptr [0x10c7e448] */
  EAX = (r32((uint32_t)(0x10c7e448)));
  /* 10c52e49 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c52e4c mov dword ptr [0x10c7e448], eax */
  w32((uint32_t)(0x10c7e448), (EAX));
  /* 10c52e51 mov ecx, dword ptr [0x10c7e448] */
  ECX = (r32((uint32_t)(0x10c7e448)));
  /* 10c52e57 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52e5a mov dword ptr [0x10c7e448], ecx */
  w32((uint32_t)(0x10c7e448), (ECX));
  /* 10c52e60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52e63 mov eax, dword ptr [0x10c7e450] */
  EAX = (r32((uint32_t)(0x10c7e450)));
  /* 10c52e68 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c52e6b mov dword ptr [0x10c7e450], eax */
  w32((uint32_t)(0x10c7e450), (EAX));
  /* 10c52e70 mov ecx, dword ptr [0x10c7e450] */
  ECX = (r32((uint32_t)(0x10c7e450)));
  /* 10c52e76 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52e79 mov dword ptr [0x10c7e450], ecx */
  w32((uint32_t)(0x10c7e450), (ECX));
  /* 10c52e7f mov edx, dword ptr [0x10c7e450] */
  EDX = (r32((uint32_t)(0x10c7e450)));
  /* 10c52e85 cmp edx, dword ptr [0x10c7e454] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7e454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52e8b jbe 0x10c52e97 */
  if ((C.cf||C.zf)) goto L_10c52e97;
  /* 10c52e8d mov eax, dword ptr [0x10c7e450] */
  EAX = (r32((uint32_t)(0x10c7e450)));
  /* 10c52e92 mov dword ptr [0x10c7e454], eax */
  w32((uint32_t)(0x10c7e454), (EAX));
L_10c52e97:;
  /* 10c52e97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52e9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52e9d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c52ea0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52ea3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52ea6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52ea9 jbe 0x10c52ecf */
  if ((C.cf||C.zf)) goto L_10c52ecf;
  /* 10c52eab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52eae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52eb1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c52eb4 push edx */
  push32((uint32_t)(EDX));
  /* 10c52eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52eb7 mov al, byte ptr [0x10c7ca92] */
  AL = (r8((uint32_t)(0x10c7ca92)));
  /* 10c52ebc push eax */
  push32((uint32_t)(EAX));
  /* 10c52ebd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52ec0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52ec3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52ec6 push edx */
  push32((uint32_t)(EDX));
  /* 10c52ec7 call 0x10c563e0 */
  push32(0x10c52eccu); f_10c563e0();
  /* 10c52ecc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c52ecf:;
  /* 10c52ecf push 4 */
  push32((uint32_t)(0x4u));
  /* 10c52ed1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c52ed3 mov al, byte ptr [0x10c7ca90] */
  AL = (r8((uint32_t)(0x10c7ca90)));
  /* 10c52ed8 push eax */
  push32((uint32_t)(EAX));
  /* 10c52ed9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52edc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52edf push ecx */
  push32((uint32_t)(ECX));
  /* 10c52ee0 call 0x10c563e0 */
  push32(0x10c52ee5u); f_10c563e0();
  /* 10c52ee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52ee8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52eec jne 0x10c52f09 */
  if (!C.zf) goto L_10c52f09;
  /* 10c52eee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52ef1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c52ef4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c52ef7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52efa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c52efd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10c52f00 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52f03 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c52f06 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10c52f09:;
  /* 10c52f09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52f0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c52f0f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10c52f12:;
  /* 10c52f12 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52f16 jne 0x10c52f47 */
  if (!C.zf) goto L_10c52f47;
  /* 10c52f18 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52f1c jne 0x10c52f26 */
  if (!C.zf) goto L_10c52f26;
  /* 10c52f1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52f21 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52f24 je 0x10c52f47 */
  if (C.zf) goto L_10c52f47;
L_10c52f26:;
  /* 10c52f26 push 0x10c794a4 */
  push32((uint32_t)(0x10c794a4u));
  /* 10c52f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52f2d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10c52f32 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c52f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52f39 call 0x10c51730 */
  push32(0x10c52f3eu); f_10c51730();
  /* 10c52f3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52f41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52f44 jne 0x10c52f47 */
  if (!C.zf) goto L_10c52f47;
  /* 10c52f46 int3  */
  x86_unimpl("int3 @ 0x10c52f46");
L_10c52f47:;
  /* 10c52f47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c52f49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c52f4b jne 0x10c52f12 */
  if (!C.zf) goto L_10c52f12;
  /* 10c52f4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52f50 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52f53 je 0x10c52f5b */
  if (C.zf) goto L_10c52f5b;
  /* 10c52f55 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52f59 je 0x10c52f63 */
  if (C.zf) goto L_10c52f63;
L_10c52f5b:;
  /* 10c52f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c52f5e jmp 0x10c5304a */
  goto L_10c5304a;
L_10c52f63:;
  /* 10c52f63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52f66 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52f69 je 0x10c52f7b */
  if (C.zf) goto L_10c52f7b;
  /* 10c52f6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52f6e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c52f70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52f73 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c52f76 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c52f79 jmp 0x10c52fb7 */
  goto L_10c52fb7;
L_10c52f7b:;
  /* 10c52f7b mov eax, dword ptr [0x10c7e444] */
  EAX = (r32((uint32_t)(0x10c7e444)));
  /* 10c52f80 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52f83 je 0x10c52fa6 */
  if (C.zf) goto L_10c52fa6;
  /* 10c52f85 push 0x10c79488 */
  push32((uint32_t)(0x10c79488u));
  /* 10c52f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52f8c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10c52f91 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c52f96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52f98 call 0x10c51730 */
  push32(0x10c52f9du); f_10c51730();
  /* 10c52f9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52fa0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52fa3 jne 0x10c52fa6 */
  if (!C.zf) goto L_10c52fa6;
  /* 10c52fa5 int3  */
  x86_unimpl("int3 @ 0x10c52fa5");
L_10c52fa6:;
  /* 10c52fa6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c52fa8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c52faa jne 0x10c52f7b */
  if (!C.zf) goto L_10c52f7b;
  /* 10c52fac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52faf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c52fb2 mov dword ptr [0x10c7e444], eax */
  w32((uint32_t)(0x10c7e444), (EAX));
L_10c52fb7:;
  /* 10c52fb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52fba cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52fbe je 0x10c52fcf */
  if (C.zf) goto L_10c52fcf;
  /* 10c52fc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52fc3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c52fc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c52fc9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c52fcb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c52fcd jmp 0x10c5300a */
  goto L_10c5300a;
L_10c52fcf:;
  /* 10c52fcf mov eax, dword ptr [0x10c7e44c] */
  EAX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c52fd4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52fd7 je 0x10c52ffa */
  if (C.zf) goto L_10c52ffa;
  /* 10c52fd9 push 0x10c7946c */
  push32((uint32_t)(0x10c7946cu));
  /* 10c52fde push 0 */
  push32((uint32_t)(0x0u));
  /* 10c52fe0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10c52fe5 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c52fea push 2 */
  push32((uint32_t)(0x2u));
  /* 10c52fec call 0x10c51730 */
  push32(0x10c52ff1u); f_10c51730();
  /* 10c52ff1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c52ff4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c52ff7 jne 0x10c52ffa */
  if (!C.zf) goto L_10c52ffa;
  /* 10c52ff9 int3  */
  x86_unimpl("int3 @ 0x10c52ff9");
L_10c52ffa:;
  /* 10c52ffa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c52ffc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c52ffe jne 0x10c52fcf */
  if (!C.zf) goto L_10c52fcf;
  /* 10c53000 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c53003 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c53005 mov dword ptr [0x10c7e44c], eax */
  w32((uint32_t)(0x10c7e44c), (EAX));
L_10c5300a:;
  /* 10c5300a cmp dword ptr [0x10c7e44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53011 je 0x10c53021 */
  if (C.zf) goto L_10c53021;
  /* 10c53013 mov ecx, dword ptr [0x10c7e44c] */
  ECX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c53019 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5301c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c5301f jmp 0x10c53029 */
  goto L_10c53029;
L_10c53021:;
  /* 10c53021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c53024 mov dword ptr [0x10c7e444], eax */
  w32((uint32_t)(0x10c7e444), (EAX));
L_10c53029:;
  /* 10c53029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5302c mov edx, dword ptr [0x10c7e44c] */
  EDX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c53032 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c53034 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c53037 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c5303e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c53041 mov dword ptr [0x10c7e44c], ecx */
  w32((uint32_t)(0x10c7e44c), (ECX));
  /* 10c53047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c5304a:;
  /* 10c5304a pop edi */
  EDI = (pop32());
  /* 10c5304b pop esi */
  ESI = (pop32());
  /* 10c5304c pop ebx */
  EBX = (pop32());
  /* 10c5304d mov esp, ebp */
  ESP = (EBP);
  /* 10c5304f pop ebp */
  EBP = (pop32());
  /* 10c53050 ret  */
  ESPCHK(0x10c52b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003060 @ 0x10c53060 (27 bytes, 13 insns) */
void f_10c53060(void) {
  FTRACE(0x10c53060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53060 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53061 mov ebp, esp */
  EBP = (ESP);
  /* 10c53063 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53065 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53067 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c53069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5306c push eax */
  push32((uint32_t)(EAX));
  /* 10c5306d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53070 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53071 call 0x10c53080 */
  push32(0x10c53076u); f_10c53080();
  /* 10c53076 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53079 pop ebp */
  EBP = (pop32());
  /* 10c5307a ret  */
  ESPCHK(0x10c53060u, _esp0);
  ESP += 4; return;
}

/* FUN_10003080 @ 0x10c53080 (64 bytes, 27 insns) */
void f_10c53080(void) {
  FTRACE(0x10c53080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53080 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53081 mov ebp, esp */
  EBP = (ESP);
  /* 10c53083 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53084 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53086 call 0x10c56070 */
  push32(0x10c5308bu); f_10c56070();
  /* 10c5308b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5308e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53090 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c53093 push eax */
  push32((uint32_t)(EAX));
  /* 10c53094 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c53097 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53098 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5309b push edx */
  push32((uint32_t)(EDX));
  /* 10c5309c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5309f push eax */
  push32((uint32_t)(EAX));
  /* 10c530a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c530a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c530a4 call 0x10c52b40 */
  push32(0x10c530a9u); f_10c52b40();
  /* 10c530a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c530ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c530af push 9 */
  push32((uint32_t)(0x9u));
  /* 10c530b1 call 0x10c56110 */
  push32(0x10c530b6u); f_10c56110();
  /* 10c530b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c530b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c530bc mov esp, ebp */
  ESP = (EBP);
  /* 10c530be pop ebp */
  EBP = (pop32());
  /* 10c530bf ret  */
  ESPCHK(0x10c53080u, _esp0);
  ESP += 4; return;
}

/* FUN_100030c0 @ 0x10c530c0 (19 bytes, 9 insns) */
void f_10c530c0(void) {
  FTRACE(0x10c530c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c530c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c530c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c530c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c530c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c530c8 push eax */
  push32((uint32_t)(EAX));
  /* 10c530c9 call 0x10c53100 */
  push32(0x10c530ceu); f_10c53100();
  /* 10c530ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c530d1 pop ebp */
  EBP = (pop32());
  /* 10c530d2 ret  */
  ESPCHK(0x10c530c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030e0 @ 0x10c530e0 (19 bytes, 9 insns) */
void f_10c530e0(void) {
  FTRACE(0x10c530e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c530e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c530e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c530e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c530e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c530e8 push eax */
  push32((uint32_t)(EAX));
  /* 10c530e9 call 0x10c53130 */
  push32(0x10c530eeu); f_10c53130();
  /* 10c530ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c530f1 pop ebp */
  EBP = (pop32());
  /* 10c530f2 ret  */
  ESPCHK(0x10c530e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003100 @ 0x10c53100 (41 bytes, 16 insns) */
void f_10c53100(void) {
  FTRACE(0x10c53100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53100 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53101 mov ebp, esp */
  EBP = (ESP);
  /* 10c53103 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53105 call 0x10c56070 */
  push32(0x10c5310au); f_10c56070();
  /* 10c5310a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5310d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c53110 push eax */
  push32((uint32_t)(EAX));
  /* 10c53111 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53114 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53115 call 0x10c53130 */
  push32(0x10c5311au); f_10c53130();
  /* 10c5311a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5311d push 9 */
  push32((uint32_t)(0x9u));
  /* 10c5311f call 0x10c56110 */
  push32(0x10c53124u); f_10c56110();
  /* 10c53124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53127 pop ebp */
  EBP = (pop32());
  /* 10c53128 ret  */
  ESPCHK(0x10c53100u, _esp0);
  ESP += 4; return;
}

/* FUN_10003130 @ 0x10c53130 (1004 bytes, 342 insns) */
void f_10c53130(void) {
  FTRACE(0x10c53130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53130 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53131 mov ebp, esp */
  EBP = (ESP);
  /* 10c53133 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53134 push ebx */
  push32((uint32_t)(EBX));
  /* 10c53135 push esi */
  push32((uint32_t)(ESI));
  /* 10c53136 push edi */
  push32((uint32_t)(EDI));
  /* 10c53137 mov eax, dword ptr [0x10c7ca84] */
  EAX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c5313c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5313f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53141 je 0x10c53173 */
  if (C.zf) goto L_10c53173;
L_10c53143:;
  /* 10c53143 call 0x10c53810 */
  push32(0x10c53148u); f_10c53810();
  /* 10c53148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5314a jne 0x10c5316d */
  if (!C.zf) goto L_10c5316d;
  /* 10c5314c push 0x10c79458 */
  push32((uint32_t)(0x10c79458u));
  /* 10c53151 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53153 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10c53158 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c5315d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5315f call 0x10c51730 */
  push32(0x10c53164u); f_10c51730();
  /* 10c53164 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53167 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5316a jne 0x10c5316d */
  if (!C.zf) goto L_10c5316d;
  /* 10c5316c int3  */
  x86_unimpl("int3 @ 0x10c5316c");
L_10c5316d:;
  /* 10c5316d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5316f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c53171 jne 0x10c53143 */
  if (!C.zf) goto L_10c53143;
L_10c53173:;
  /* 10c53173 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53177 jne 0x10c5317e */
  if (!C.zf) goto L_10c5317e;
  /* 10c53179 jmp 0x10c53515 */
  goto L_10c53515;
L_10c5317e:;
  /* 10c5317e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53180 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53182 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53184 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c53187 push edx */
  push32((uint32_t)(EDX));
  /* 10c53188 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5318a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5318d push eax */
  push32((uint32_t)(EAX));
  /* 10c5318e push 3 */
  push32((uint32_t)(0x3u));
  /* 10c53190 call dword ptr [0x10c7cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7cc90))), 0x10c53196u);
  /* 10c53196 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5319b jne 0x10c531c8 */
  if (!C.zf) goto L_10c531c8;
L_10c5319d:;
  /* 10c5319d push 0x10c7971c */
  push32((uint32_t)(0x10c7971cu));
  /* 10c531a2 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c531a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c531a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c531ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10c531ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10c531af call 0x10c51730 */
  push32(0x10c531b4u); f_10c51730();
  /* 10c531b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c531b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c531ba jne 0x10c531bd */
  if (!C.zf) goto L_10c531bd;
  /* 10c531bc int3  */
  x86_unimpl("int3 @ 0x10c531bc");
L_10c531bd:;
  /* 10c531bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c531bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c531c1 jne 0x10c5319d */
  if (!C.zf) goto L_10c5319d;
  /* 10c531c3 jmp 0x10c53515 */
  goto L_10c53515;
L_10c531c8:;
  /* 10c531c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c531cb push edx */
  push32((uint32_t)(EDX));
  /* 10c531cc call 0x10c53c70 */
  push32(0x10c531d1u); f_10c53c70();
  /* 10c531d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c531d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c531d6 jne 0x10c531f9 */
  if (!C.zf) goto L_10c531f9;
  /* 10c531d8 push 0x10c7955c */
  push32((uint32_t)(0x10c7955cu));
  /* 10c531dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c531df push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10c531e4 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c531e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c531eb call 0x10c51730 */
  push32(0x10c531f0u); f_10c51730();
  /* 10c531f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c531f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c531f6 jne 0x10c531f9 */
  if (!C.zf) goto L_10c531f9;
  /* 10c531f8 int3  */
  x86_unimpl("int3 @ 0x10c531f8");
L_10c531f9:;
  /* 10c531f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c531fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c531fd jne 0x10c531c8 */
  if (!C.zf) goto L_10c531c8;
  /* 10c531ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53202 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53205 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c53208:;
  /* 10c53208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5320b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c5320e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c53213 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53216 je 0x10c5325b */
  if (C.zf) goto L_10c5325b;
  /* 10c53218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5321b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5321f je 0x10c5325b */
  if (C.zf) goto L_10c5325b;
  /* 10c53221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53224 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c53227 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5322c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5322f je 0x10c5325b */
  if (C.zf) goto L_10c5325b;
  /* 10c53231 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53234 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53238 je 0x10c5325b */
  if (C.zf) goto L_10c5325b;
  /* 10c5323a push 0x10c796f4 */
  push32((uint32_t)(0x10c796f4u));
  /* 10c5323f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53241 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10c53246 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c5324b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5324d call 0x10c51730 */
  push32(0x10c53252u); f_10c51730();
  /* 10c53252 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53255 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53258 jne 0x10c5325b */
  if (!C.zf) goto L_10c5325b;
  /* 10c5325a int3  */
  x86_unimpl("int3 @ 0x10c5325a");
L_10c5325b:;
  /* 10c5325b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5325d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5325f jne 0x10c53208 */
  if (!C.zf) goto L_10c53208;
  /* 10c53261 mov eax, dword ptr [0x10c7ca84] */
  EAX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c53266 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c53269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5326b jne 0x10c53336 */
  if (!C.zf) goto L_10c53336;
  /* 10c53271 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c53273 mov cl, byte ptr [0x10c7ca90] */
  CL = (r8((uint32_t)(0x10c7ca90)));
  /* 10c53279 push ecx */
  push32((uint32_t)(ECX));
  /* 10c5327a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5327d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53280 push edx */
  push32((uint32_t)(EDX));
  /* 10c53281 call 0x10c53780 */
  push32(0x10c53286u); f_10c53780();
  /* 10c53286 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5328b jne 0x10c532d0 */
  if (!C.zf) goto L_10c532d0;
L_10c5328d:;
  /* 10c5328d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53290 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53293 push eax */
  push32((uint32_t)(EAX));
  /* 10c53294 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53297 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c5329a push edx */
  push32((uint32_t)(EDX));
  /* 10c5329b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5329e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c532a1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c532a7 mov edx, dword ptr [ecx*4 + 0x10c7ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7ca94)));
  /* 10c532ae push edx */
  push32((uint32_t)(EDX));
  /* 10c532af push 0x10c796c8 */
  push32((uint32_t)(0x10c796c8u));
  /* 10c532b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c532b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c532b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c532ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10c532bc call 0x10c51730 */
  push32(0x10c532c1u); f_10c51730();
  /* 10c532c1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c532c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c532c7 jne 0x10c532ca */
  if (!C.zf) goto L_10c532ca;
  /* 10c532c9 int3  */
  x86_unimpl("int3 @ 0x10c532c9");
L_10c532ca:;
  /* 10c532ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c532cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c532ce jne 0x10c5328d */
  if (!C.zf) goto L_10c5328d;
L_10c532d0:;
  /* 10c532d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c532d2 mov cl, byte ptr [0x10c7ca90] */
  CL = (r8((uint32_t)(0x10c7ca90)));
  /* 10c532d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c532d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c532dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c532df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c532e2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10c532e6 push edx */
  push32((uint32_t)(EDX));
  /* 10c532e7 call 0x10c53780 */
  push32(0x10c532ecu); f_10c53780();
  /* 10c532ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c532ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c532f1 jne 0x10c53336 */
  if (!C.zf) goto L_10c53336;
L_10c532f3:;
  /* 10c532f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c532f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c532f9 push eax */
  push32((uint32_t)(EAX));
  /* 10c532fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c532fd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c53300 push edx */
  push32((uint32_t)(EDX));
  /* 10c53301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53304 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c53307 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5330d mov edx, dword ptr [ecx*4 + 0x10c7ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7ca94)));
  /* 10c53314 push edx */
  push32((uint32_t)(EDX));
  /* 10c53315 push 0x10c7969c */
  push32((uint32_t)(0x10c7969cu));
  /* 10c5331a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5331c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5331e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53320 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c53322 call 0x10c51730 */
  push32(0x10c53327u); f_10c51730();
  /* 10c53327 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5332a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5332d jne 0x10c53330 */
  if (!C.zf) goto L_10c53330;
  /* 10c5332f int3  */
  x86_unimpl("int3 @ 0x10c5332f");
L_10c53330:;
  /* 10c53330 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53332 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53334 jne 0x10c532f3 */
  if (!C.zf) goto L_10c532f3;
L_10c53336:;
  /* 10c53336 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53339 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5333d jne 0x10c533ab */
  if (!C.zf) goto L_10c533ab;
L_10c5333f:;
  /* 10c5333f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53342 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53349 jne 0x10c53354 */
  if (!C.zf) goto L_10c53354;
  /* 10c5334b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5334e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53352 je 0x10c53375 */
  if (C.zf) goto L_10c53375;
L_10c53354:;
  /* 10c53354 push 0x10c7965c */
  push32((uint32_t)(0x10c7965cu));
  /* 10c53359 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5335b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10c53360 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c53365 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c53367 call 0x10c51730 */
  push32(0x10c5336cu); f_10c51730();
  /* 10c5336c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5336f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53372 jne 0x10c53375 */
  if (!C.zf) goto L_10c53375;
  /* 10c53374 int3  */
  x86_unimpl("int3 @ 0x10c53374");
L_10c53375:;
  /* 10c53375 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c53377 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c53379 jne 0x10c5333f */
  if (!C.zf) goto L_10c5333f;
  /* 10c5337b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5337e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c53381 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53384 push eax */
  push32((uint32_t)(EAX));
  /* 10c53385 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c53387 mov cl, byte ptr [0x10c7ca91] */
  CL = (r8((uint32_t)(0x10c7ca91)));
  /* 10c5338d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5338e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53391 push edx */
  push32((uint32_t)(EDX));
  /* 10c53392 call 0x10c563e0 */
  push32(0x10c53397u); f_10c563e0();
  /* 10c53397 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5339a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5339d push eax */
  push32((uint32_t)(EAX));
  /* 10c5339e call 0x10c567e0 */
  push32(0x10c533a3u); f_10c567e0();
  /* 10c533a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c533a6 jmp 0x10c53515 */
  goto L_10c53515;
L_10c533ab:;
  /* 10c533ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c533ae cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c533b2 jne 0x10c533c1 */
  if (!C.zf) goto L_10c533c1;
  /* 10c533b4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c533b8 jne 0x10c533c1 */
  if (!C.zf) goto L_10c533c1;
  /* 10c533ba mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10c533c1:;
  /* 10c533c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c533c4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c533c7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c533ca je 0x10c533ed */
  if (C.zf) goto L_10c533ed;
  /* 10c533cc push 0x10c7963c */
  push32((uint32_t)(0x10c7963cu));
  /* 10c533d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c533d3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10c533d8 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c533dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c533df call 0x10c51730 */
  push32(0x10c533e4u); f_10c51730();
  /* 10c533e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c533e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c533ea jne 0x10c533ed */
  if (!C.zf) goto L_10c533ed;
  /* 10c533ec int3  */
  x86_unimpl("int3 @ 0x10c533ec");
L_10c533ed:;
  /* 10c533ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c533ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c533f1 jne 0x10c533c1 */
  if (!C.zf) goto L_10c533c1;
  /* 10c533f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c533f6 mov eax, dword ptr [0x10c7e450] */
  EAX = (r32((uint32_t)(0x10c7e450)));
  /* 10c533fb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c533fe mov dword ptr [0x10c7e450], eax */
  w32((uint32_t)(0x10c7e450), (EAX));
  /* 10c53403 mov ecx, dword ptr [0x10c7ca84] */
  ECX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c53409 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c5340c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5340e jne 0x10c534ec */
  if (!C.zf) goto L_10c534ec;
  /* 10c53414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53417 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5341a je 0x10c5342c */
  if (C.zf) goto L_10c5342c;
  /* 10c5341c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5341f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c53421 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53424 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c53427 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c5342a jmp 0x10c5346a */
  goto L_10c5346a;
L_10c5342c:;
  /* 10c5342c mov ecx, dword ptr [0x10c7e444] */
  ECX = (r32((uint32_t)(0x10c7e444)));
  /* 10c53432 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53435 je 0x10c53458 */
  if (C.zf) goto L_10c53458;
  /* 10c53437 push 0x10c79624 */
  push32((uint32_t)(0x10c79624u));
  /* 10c5343c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5343e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10c53443 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c53448 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5344a call 0x10c51730 */
  push32(0x10c5344fu); f_10c51730();
  /* 10c5344f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53452 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53455 jne 0x10c53458 */
  if (!C.zf) goto L_10c53458;
  /* 10c53457 int3  */
  x86_unimpl("int3 @ 0x10c53457");
L_10c53458:;
  /* 10c53458 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5345a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5345c jne 0x10c5342c */
  if (!C.zf) goto L_10c5342c;
  /* 10c5345e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53461 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c53464 mov dword ptr [0x10c7e444], ecx */
  w32((uint32_t)(0x10c7e444), (ECX));
L_10c5346a:;
  /* 10c5346a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5346d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53471 je 0x10c53482 */
  if (C.zf) goto L_10c53482;
  /* 10c53473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53476 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c53479 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5347c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c5347e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c53480 jmp 0x10c534bf */
  goto L_10c534bf;
L_10c53482:;
  /* 10c53482 mov ecx, dword ptr [0x10c7e44c] */
  ECX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c53488 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5348b je 0x10c534ae */
  if (C.zf) goto L_10c534ae;
  /* 10c5348d push 0x10c7960c */
  push32((uint32_t)(0x10c7960cu));
  /* 10c53492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53494 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10c53499 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c5349e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c534a0 call 0x10c51730 */
  push32(0x10c534a5u); f_10c51730();
  /* 10c534a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c534a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c534ab jne 0x10c534ae */
  if (!C.zf) goto L_10c534ae;
  /* 10c534ad int3  */
  x86_unimpl("int3 @ 0x10c534ad");
L_10c534ae:;
  /* 10c534ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c534b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c534b2 jne 0x10c53482 */
  if (!C.zf) goto L_10c53482;
  /* 10c534b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c534b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c534b9 mov dword ptr [0x10c7e44c], ecx */
  w32((uint32_t)(0x10c7e44c), (ECX));
L_10c534bf:;
  /* 10c534bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c534c2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c534c5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c534c8 push eax */
  push32((uint32_t)(EAX));
  /* 10c534c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c534cb mov cl, byte ptr [0x10c7ca91] */
  CL = (r8((uint32_t)(0x10c7ca91)));
  /* 10c534d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c534d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c534d5 push edx */
  push32((uint32_t)(EDX));
  /* 10c534d6 call 0x10c563e0 */
  push32(0x10c534dbu); f_10c563e0();
  /* 10c534db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c534de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c534e1 push eax */
  push32((uint32_t)(EAX));
  /* 10c534e2 call 0x10c567e0 */
  push32(0x10c534e7u); f_10c567e0();
  /* 10c534e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c534ea jmp 0x10c53515 */
  goto L_10c53515;
L_10c534ec:;
  /* 10c534ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c534ef mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10c534f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c534f9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c534fc push eax */
  push32((uint32_t)(EAX));
  /* 10c534fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c534ff mov cl, byte ptr [0x10c7ca91] */
  CL = (r8((uint32_t)(0x10c7ca91)));
  /* 10c53505 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53506 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53509 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5350c push edx */
  push32((uint32_t)(EDX));
  /* 10c5350d call 0x10c563e0 */
  push32(0x10c53512u); f_10c563e0();
  /* 10c53512 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c53515:;
  /* 10c53515 pop edi */
  EDI = (pop32());
  /* 10c53516 pop esi */
  ESI = (pop32());
  /* 10c53517 pop ebx */
  EBX = (pop32());
  /* 10c53518 mov esp, ebp */
  ESP = (EBP);
  /* 10c5351a pop ebp */
  EBP = (pop32());
  /* 10c5351b ret  */
  ESPCHK(0x10c53130u, _esp0);
  ESP += 4; return;
}

/* FUN_10003520 @ 0x10c53520 (19 bytes, 9 insns) */
void f_10c53520(void) {
  FTRACE(0x10c53520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53520 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53521 mov ebp, esp */
  EBP = (ESP);
  /* 10c53523 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c53525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53528 push eax */
  push32((uint32_t)(EAX));
  /* 10c53529 call 0x10c53540 */
  push32(0x10c5352eu); f_10c53540();
  /* 10c5352e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53531 pop ebp */
  EBP = (pop32());
  /* 10c53532 ret  */
  ESPCHK(0x10c53520u, _esp0);
  ESP += 4; return;
}

/* FUN_10003540 @ 0x10c53540 (342 bytes, 119 insns) */
void f_10c53540(void) {
  FTRACE(0x10c53540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53540 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53541 mov ebp, esp */
  EBP = (ESP);
  /* 10c53543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53546 push ebx */
  push32((uint32_t)(EBX));
  /* 10c53547 push esi */
  push32((uint32_t)(ESI));
  /* 10c53548 push edi */
  push32((uint32_t)(EDI));
  /* 10c53549 mov eax, dword ptr [0x10c7ca84] */
  EAX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c5354e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c53551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53553 je 0x10c53585 */
  if (C.zf) goto L_10c53585;
L_10c53555:;
  /* 10c53555 call 0x10c53810 */
  push32(0x10c5355au); f_10c53810();
  /* 10c5355a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5355c jne 0x10c5357f */
  if (!C.zf) goto L_10c5357f;
  /* 10c5355e push 0x10c79458 */
  push32((uint32_t)(0x10c79458u));
  /* 10c53563 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53565 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10c5356a push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c5356f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c53571 call 0x10c51730 */
  push32(0x10c53576u); f_10c51730();
  /* 10c53576 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53579 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5357c jne 0x10c5357f */
  if (!C.zf) goto L_10c5357f;
  /* 10c5357e int3  */
  x86_unimpl("int3 @ 0x10c5357e");
L_10c5357f:;
  /* 10c5357f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c53581 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c53583 jne 0x10c53555 */
  if (!C.zf) goto L_10c53555;
L_10c53585:;
  /* 10c53585 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53587 call 0x10c56070 */
  push32(0x10c5358cu); f_10c56070();
  /* 10c5358c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5358f:;
  /* 10c5358f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53592 push edx */
  push32((uint32_t)(EDX));
  /* 10c53593 call 0x10c53c70 */
  push32(0x10c53598u); f_10c53c70();
  /* 10c53598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5359b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5359d jne 0x10c535c0 */
  if (!C.zf) goto L_10c535c0;
  /* 10c5359f push 0x10c7955c */
  push32((uint32_t)(0x10c7955cu));
  /* 10c535a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c535a6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10c535ab push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c535b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c535b2 call 0x10c51730 */
  push32(0x10c535b7u); f_10c51730();
  /* 10c535b7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c535ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c535bd jne 0x10c535c0 */
  if (!C.zf) goto L_10c535c0;
  /* 10c535bf int3  */
  x86_unimpl("int3 @ 0x10c535bf");
L_10c535c0:;
  /* 10c535c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c535c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c535c4 jne 0x10c5358f */
  if (!C.zf) goto L_10c5358f;
  /* 10c535c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c535c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c535cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c535cf:;
  /* 10c535cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c535d2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c535d5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c535da cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c535dd je 0x10c53622 */
  if (C.zf) goto L_10c53622;
  /* 10c535df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c535e2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c535e6 je 0x10c53622 */
  if (C.zf) goto L_10c53622;
  /* 10c535e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c535eb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c535ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c535f3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c535f6 je 0x10c53622 */
  if (C.zf) goto L_10c53622;
  /* 10c535f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c535fb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c535ff je 0x10c53622 */
  if (C.zf) goto L_10c53622;
  /* 10c53601 push 0x10c796f4 */
  push32((uint32_t)(0x10c796f4u));
  /* 10c53606 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53608 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10c5360d push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c53612 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c53614 call 0x10c51730 */
  push32(0x10c53619u); f_10c51730();
  /* 10c53619 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5361c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5361f jne 0x10c53622 */
  if (!C.zf) goto L_10c53622;
  /* 10c53621 int3  */
  x86_unimpl("int3 @ 0x10c53621");
L_10c53622:;
  /* 10c53622 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c53624 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c53626 jne 0x10c535cf */
  if (!C.zf) goto L_10c535cf;
  /* 10c53628 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5362b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5362f jne 0x10c5363e */
  if (!C.zf) goto L_10c5363e;
  /* 10c53631 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53635 jne 0x10c5363e */
  if (!C.zf) goto L_10c5363e;
  /* 10c53637 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10c5363e:;
  /* 10c5363e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53641 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53645 je 0x10c53679 */
  if (C.zf) goto L_10c53679;
L_10c53647:;
  /* 10c53647 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5364a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c5364d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53650 je 0x10c53673 */
  if (C.zf) goto L_10c53673;
  /* 10c53652 push 0x10c7963c */
  push32((uint32_t)(0x10c7963cu));
  /* 10c53657 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53659 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10c5365e push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c53663 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c53665 call 0x10c51730 */
  push32(0x10c5366au); f_10c51730();
  /* 10c5366a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5366d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53670 jne 0x10c53673 */
  if (!C.zf) goto L_10c53673;
  /* 10c53672 int3  */
  x86_unimpl("int3 @ 0x10c53672");
L_10c53673:;
  /* 10c53673 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c53675 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c53677 jne 0x10c53647 */
  if (!C.zf) goto L_10c53647;
L_10c53679:;
  /* 10c53679 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5367c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c5367f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c53682 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53684 call 0x10c56110 */
  push32(0x10c53689u); f_10c56110();
  /* 10c53689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5368c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5368f pop edi */
  EDI = (pop32());
  /* 10c53690 pop esi */
  ESI = (pop32());
  /* 10c53691 pop ebx */
  EBX = (pop32());
  /* 10c53692 mov esp, ebp */
  ESP = (EBP);
  /* 10c53694 pop ebp */
  EBP = (pop32());
  /* 10c53695 ret  */
  ESPCHK(0x10c53540u, _esp0);
  ESP += 4; return;
}

/* FUN_100036a0 @ 0x10c536a0 (28 bytes, 11 insns) */
void f_10c536a0(void) {
  FTRACE(0x10c536a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c536a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c536a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c536a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c536a4 mov eax, dword ptr [0x10c7ca8c] */
  EAX = (r32((uint32_t)(0x10c7ca8c)));
  /* 10c536a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c536ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c536af mov dword ptr [0x10c7ca8c], ecx */
  w32((uint32_t)(0x10c7ca8c), (ECX));
  /* 10c536b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c536b8 mov esp, ebp */
  ESP = (EBP);
  /* 10c536ba pop ebp */
  EBP = (pop32());
  /* 10c536bb ret  */
  ESPCHK(0x10c536a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036c0 @ 0x10c536c0 (157 bytes, 59 insns) */
void f_10c536c0(void) {
  FTRACE(0x10c536c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c536c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c536c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c536c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c536c4 push ebx */
  push32((uint32_t)(EBX));
  /* 10c536c5 push esi */
  push32((uint32_t)(ESI));
  /* 10c536c6 push edi */
  push32((uint32_t)(EDI));
  /* 10c536c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c536c9 call 0x10c56070 */
  push32(0x10c536ceu); f_10c56070();
  /* 10c536ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c536d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c536d4 push eax */
  push32((uint32_t)(EAX));
  /* 10c536d5 call 0x10c53c70 */
  push32(0x10c536dau); f_10c53c70();
  /* 10c536da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c536dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c536df je 0x10c5374c */
  if (C.zf) goto L_10c5374c;
  /* 10c536e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c536e4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c536e7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c536ea:;
  /* 10c536ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c536ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c536f0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c536f5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c536f8 je 0x10c5373d */
  if (C.zf) goto L_10c5373d;
  /* 10c536fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c536fd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53701 je 0x10c5373d */
  if (C.zf) goto L_10c5373d;
  /* 10c53703 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53706 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c53709 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c5370e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53711 je 0x10c5373d */
  if (C.zf) goto L_10c5373d;
  /* 10c53713 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53716 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5371a je 0x10c5373d */
  if (C.zf) goto L_10c5373d;
  /* 10c5371c push 0x10c796f4 */
  push32((uint32_t)(0x10c796f4u));
  /* 10c53721 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53723 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10c53728 push 0x10c7944c */
  push32((uint32_t)(0x10c7944cu));
  /* 10c5372d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5372f call 0x10c51730 */
  push32(0x10c53734u); f_10c51730();
  /* 10c53734 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53737 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5373a jne 0x10c5373d */
  if (!C.zf) goto L_10c5373d;
  /* 10c5373c int3  */
  x86_unimpl("int3 @ 0x10c5373c");
L_10c5373d:;
  /* 10c5373d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5373f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c53741 jne 0x10c536ea */
  if (!C.zf) goto L_10c536ea;
  /* 10c53743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53746 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c53749 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10c5374c:;
  /* 10c5374c push 9 */
  push32((uint32_t)(0x9u));
  /* 10c5374e call 0x10c56110 */
  push32(0x10c53753u); f_10c56110();
  /* 10c53753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53756 pop edi */
  EDI = (pop32());
  /* 10c53757 pop esi */
  ESI = (pop32());
  /* 10c53758 pop ebx */
  EBX = (pop32());
  /* 10c53759 mov esp, ebp */
  ESP = (EBP);
  /* 10c5375b pop ebp */
  EBP = (pop32());
  /* 10c5375c ret  */
  ESPCHK(0x10c536c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003760 @ 0x10c53760 (28 bytes, 11 insns) */
void f_10c53760(void) {
  FTRACE(0x10c53760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53760 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53761 mov ebp, esp */
  EBP = (ESP);
  /* 10c53763 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53764 mov eax, dword ptr [0x10c7cc90] */
  EAX = (r32((uint32_t)(0x10c7cc90)));
  /* 10c53769 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5376c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5376f mov dword ptr [0x10c7cc90], ecx */
  w32((uint32_t)(0x10c7cc90), (ECX));
  /* 10c53775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53778 mov esp, ebp */
  ESP = (EBP);
  /* 10c5377a pop ebp */
  EBP = (pop32());
  /* 10c5377b ret  */
  ESPCHK(0x10c53760u, _esp0);
  ESP += 4; return;
}

/* FUN_10003780 @ 0x10c53780 (136 bytes, 55 insns) */
void f_10c53780(void) {
  FTRACE(0x10c53780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53780 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53781 mov ebp, esp */
  EBP = (ESP);
  /* 10c53783 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53784 push ebx */
  push32((uint32_t)(EBX));
  /* 10c53785 push esi */
  push32((uint32_t)(ESI));
  /* 10c53786 push edi */
  push32((uint32_t)(EDI));
  /* 10c53787 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10c5378e:;
  /* 10c5378e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c53791 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c53794 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53797 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c5379a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5379c je 0x10c537fe */
  if (C.zf) goto L_10c537fe;
  /* 10c5379e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c537a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c537a3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c537a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c537a8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c537ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c537b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c537b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c537b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c537b9 je 0x10c537fc */
  if (C.zf) goto L_10c537fc;
L_10c537bb:;
  /* 10c537bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c537be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c537c3 push eax */
  push32((uint32_t)(EAX));
  /* 10c537c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c537c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c537c9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10c537cc push edx */
  push32((uint32_t)(EDX));
  /* 10c537cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c537d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c537d3 push eax */
  push32((uint32_t)(EAX));
  /* 10c537d4 push 0x10c79738 */
  push32((uint32_t)(0x10c79738u));
  /* 10c537d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c537db push 0 */
  push32((uint32_t)(0x0u));
  /* 10c537dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c537df push 0 */
  push32((uint32_t)(0x0u));
  /* 10c537e1 call 0x10c51730 */
  push32(0x10c537e6u); f_10c51730();
  /* 10c537e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c537e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c537ec jne 0x10c537ef */
  if (!C.zf) goto L_10c537ef;
  /* 10c537ee int3  */
  x86_unimpl("int3 @ 0x10c537ee");
L_10c537ef:;
  /* 10c537ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c537f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c537f3 jne 0x10c537bb */
  if (!C.zf) goto L_10c537bb;
  /* 10c537f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c537fc:;
  /* 10c537fc jmp 0x10c5378e */
  goto L_10c5378e;
L_10c537fe:;
  /* 10c537fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53801 pop edi */
  EDI = (pop32());
  /* 10c53802 pop esi */
  ESI = (pop32());
  /* 10c53803 pop ebx */
  EBX = (pop32());
  /* 10c53804 mov esp, ebp */
  ESP = (EBP);
  /* 10c53806 pop ebp */
  EBP = (pop32());
  /* 10c53807 ret  */
  ESPCHK(0x10c53780u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x10c53810 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10c53810(void) {
  FTRACE(0x10c53810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53810 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53811 mov ebp, esp */
  EBP = (ESP);
  /* 10c53813 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53816 push ebx */
  push32((uint32_t)(EBX));
  /* 10c53817 push esi */
  push32((uint32_t)(ESI));
  /* 10c53818 push edi */
  push32((uint32_t)(EDI));
  /* 10c53819 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c53820 mov eax, dword ptr [0x10c7ca84] */
  EAX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c53825 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c53828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5382a jne 0x10c53836 */
  if (!C.zf) goto L_10c53836;
  /* 10c5382c mov eax, 1 */
  EAX = (0x1u);
  /* 10c53831 jmp 0x10c53b68 */
  goto L_10c53b68;
L_10c53836:;
  /* 10c53836 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53838 call 0x10c56070 */
  push32(0x10c5383du); f_10c56070();
  /* 10c5383d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53840 call 0x10c56850 */
  push32(0x10c53845u); f_10c56850();
  /* 10c53845 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c53848 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5384c je 0x10c53959 */
  if (C.zf) goto L_10c53959;
  /* 10c53852 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53856 je 0x10c53959 */
  if (C.zf) goto L_10c53959;
  /* 10c5385c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5385f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c53862 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c53865 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53868 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c5386b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5386f ja 0x10c53922 */
  if ((!C.cf&&!C.zf)) goto L_10c53922;
  /* 10c53875 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c53878 jmp dword ptr [eax*4 + 0x10c53b6f] */
  switch (EAX) {
    case 0: goto L_10c538fa;
    case 1: goto L_10c538d2;
    case 2: goto L_10c538aa;
    case 3: goto L_10c5387f;
    default: x86_unimpl("switch@0x10c53878 out of table"); return;
  }
L_10c5387f:;
  /* 10c5387f push 0x10c7988c */
  push32((uint32_t)(0x10c7988cu));
  /* 10c53884 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c53889 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5388b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5388d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5388f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53891 call 0x10c51730 */
  push32(0x10c53896u); f_10c51730();
  /* 10c53896 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53899 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5389c jne 0x10c5389f */
  if (!C.zf) goto L_10c5389f;
  /* 10c5389e int3  */
  x86_unimpl("int3 @ 0x10c5389e");
L_10c5389f:;
  /* 10c5389f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c538a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c538a3 jne 0x10c5387f */
  if (!C.zf) goto L_10c5387f;
  /* 10c538a5 jmp 0x10c53948 */
  goto L_10c53948;
L_10c538aa:;
  /* 10c538aa push 0x10c79868 */
  push32((uint32_t)(0x10c79868u));
  /* 10c538af push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c538b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c538b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c538b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c538ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10c538bc call 0x10c51730 */
  push32(0x10c538c1u); f_10c51730();
  /* 10c538c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c538c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c538c7 jne 0x10c538ca */
  if (!C.zf) goto L_10c538ca;
  /* 10c538c9 int3  */
  x86_unimpl("int3 @ 0x10c538c9");
L_10c538ca:;
  /* 10c538ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c538cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c538ce jne 0x10c538aa */
  if (!C.zf) goto L_10c538aa;
  /* 10c538d0 jmp 0x10c53948 */
  goto L_10c53948;
L_10c538d2:;
  /* 10c538d2 push 0x10c79844 */
  push32((uint32_t)(0x10c79844u));
  /* 10c538d7 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c538dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c538de push 0 */
  push32((uint32_t)(0x0u));
  /* 10c538e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c538e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c538e4 call 0x10c51730 */
  push32(0x10c538e9u); f_10c51730();
  /* 10c538e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c538ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c538ef jne 0x10c538f2 */
  if (!C.zf) goto L_10c538f2;
  /* 10c538f1 int3  */
  x86_unimpl("int3 @ 0x10c538f1");
L_10c538f2:;
  /* 10c538f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c538f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c538f6 jne 0x10c538d2 */
  if (!C.zf) goto L_10c538d2;
  /* 10c538f8 jmp 0x10c53948 */
  goto L_10c53948;
L_10c538fa:;
  /* 10c538fa push 0x10c79820 */
  push32((uint32_t)(0x10c79820u));
  /* 10c538ff push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c53904 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53906 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53908 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5390a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5390c call 0x10c51730 */
  push32(0x10c53911u); f_10c51730();
  /* 10c53911 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53914 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53917 jne 0x10c5391a */
  if (!C.zf) goto L_10c5391a;
  /* 10c53919 int3  */
  x86_unimpl("int3 @ 0x10c53919");
L_10c5391a:;
  /* 10c5391a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5391c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5391e jne 0x10c538fa */
  if (!C.zf) goto L_10c538fa;
  /* 10c53920 jmp 0x10c53948 */
  goto L_10c53948;
L_10c53922:;
  /* 10c53922 push 0x10c797f4 */
  push32((uint32_t)(0x10c797f4u));
  /* 10c53927 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c5392c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5392e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53930 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53932 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53934 call 0x10c51730 */
  push32(0x10c53939u); f_10c51730();
  /* 10c53939 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5393c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5393f jne 0x10c53942 */
  if (!C.zf) goto L_10c53942;
  /* 10c53941 int3  */
  x86_unimpl("int3 @ 0x10c53941");
L_10c53942:;
  /* 10c53942 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c53944 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c53946 jne 0x10c53922 */
  if (!C.zf) goto L_10c53922;
L_10c53948:;
  /* 10c53948 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c5394a call 0x10c56110 */
  push32(0x10c5394fu); f_10c56110();
  /* 10c5394f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53954 jmp 0x10c53b68 */
  goto L_10c53b68;
L_10c53959:;
  /* 10c53959 mov eax, dword ptr [0x10c7e44c] */
  EAX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c5395e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c53961 jmp 0x10c5396b */
  goto L_10c5396b;
L_10c53963:;
  /* 10c53963 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53966 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c53968 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c5396b:;
  /* 10c5396b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5396f je 0x10c53b5b */
  if (C.zf) goto L_10c53b5b;
  /* 10c53975 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c5397c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5397f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c53982 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c53988 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5398b je 0x10c539b0 */
  if (C.zf) goto L_10c539b0;
  /* 10c5398d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53990 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53994 je 0x10c539b0 */
  if (C.zf) goto L_10c539b0;
  /* 10c53996 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53999 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c5399c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c539a2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c539a5 je 0x10c539b0 */
  if (C.zf) goto L_10c539b0;
  /* 10c539a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c539aa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c539ae jne 0x10c539c8 */
  if (!C.zf) goto L_10c539c8;
L_10c539b0:;
  /* 10c539b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c539b3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c539b6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c539bc mov edx, dword ptr [ecx*4 + 0x10c7ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7ca94)));
  /* 10c539c3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c539c6 jmp 0x10c539cf */
  goto L_10c539cf;
L_10c539c8:;
  /* 10c539c8 mov dword ptr [ebp - 0x14], 0x10c797ec */
  w32((uint32_t)(EBP + -0x14), (0x10c797ecu));
L_10c539cf:;
  /* 10c539cf push 4 */
  push32((uint32_t)(0x4u));
  /* 10c539d1 mov al, byte ptr [0x10c7ca90] */
  AL = (r8((uint32_t)(0x10c7ca90)));
  /* 10c539d6 push eax */
  push32((uint32_t)(EAX));
  /* 10c539d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c539da add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c539dd push ecx */
  push32((uint32_t)(ECX));
  /* 10c539de call 0x10c53780 */
  push32(0x10c539e3u); f_10c53780();
  /* 10c539e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c539e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c539e8 jne 0x10c53a24 */
  if (!C.zf) goto L_10c53a24;
L_10c539ea:;
  /* 10c539ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c539ed add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c539f0 push edx */
  push32((uint32_t)(EDX));
  /* 10c539f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c539f4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c539f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c539f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c539fb push edx */
  push32((uint32_t)(EDX));
  /* 10c539fc push 0x10c796c8 */
  push32((uint32_t)(0x10c796c8u));
  /* 10c53a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53a09 call 0x10c51730 */
  push32(0x10c53a0eu); f_10c51730();
  /* 10c53a0e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53a11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53a14 jne 0x10c53a17 */
  if (!C.zf) goto L_10c53a17;
  /* 10c53a16 int3  */
  x86_unimpl("int3 @ 0x10c53a16");
L_10c53a17:;
  /* 10c53a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53a1b jne 0x10c539ea */
  if (!C.zf) goto L_10c539ea;
  /* 10c53a1d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c53a24:;
  /* 10c53a24 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c53a26 mov cl, byte ptr [0x10c7ca90] */
  CL = (r8((uint32_t)(0x10c7ca90)));
  /* 10c53a2c push ecx */
  push32((uint32_t)(ECX));
  /* 10c53a2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53a30 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c53a33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53a36 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10c53a3a push edx */
  push32((uint32_t)(EDX));
  /* 10c53a3b call 0x10c53780 */
  push32(0x10c53a40u); f_10c53780();
  /* 10c53a40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53a43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53a45 jne 0x10c53a81 */
  if (!C.zf) goto L_10c53a81;
L_10c53a47:;
  /* 10c53a47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53a4a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53a4d push eax */
  push32((uint32_t)(EAX));
  /* 10c53a4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53a51 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c53a54 push edx */
  push32((uint32_t)(EDX));
  /* 10c53a55 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c53a58 push eax */
  push32((uint32_t)(EAX));
  /* 10c53a59 push 0x10c7969c */
  push32((uint32_t)(0x10c7969cu));
  /* 10c53a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53a66 call 0x10c51730 */
  push32(0x10c53a6bu); f_10c51730();
  /* 10c53a6b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53a6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53a71 jne 0x10c53a74 */
  if (!C.zf) goto L_10c53a74;
  /* 10c53a73 int3  */
  x86_unimpl("int3 @ 0x10c53a73");
L_10c53a74:;
  /* 10c53a74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c53a76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c53a78 jne 0x10c53a47 */
  if (!C.zf) goto L_10c53a47;
  /* 10c53a7a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c53a81:;
  /* 10c53a81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53a84 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53a88 jne 0x10c53ada */
  if (!C.zf) goto L_10c53ada;
  /* 10c53a8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53a8d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c53a90 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53a91 mov dl, byte ptr [0x10c7ca91] */
  DL = (r8((uint32_t)(0x10c7ca91)));
  /* 10c53a97 push edx */
  push32((uint32_t)(EDX));
  /* 10c53a98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53a9b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53a9e push eax */
  push32((uint32_t)(EAX));
  /* 10c53a9f call 0x10c53780 */
  push32(0x10c53aa4u); f_10c53780();
  /* 10c53aa4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53aa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53aa9 jne 0x10c53ada */
  if (!C.zf) goto L_10c53ada;
L_10c53aab:;
  /* 10c53aab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53aae add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53ab2 push 0x10c797c0 */
  push32((uint32_t)(0x10c797c0u));
  /* 10c53ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53abb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53abd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53abf call 0x10c51730 */
  push32(0x10c53ac4u); f_10c51730();
  /* 10c53ac4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53ac7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53aca jne 0x10c53acd */
  if (!C.zf) goto L_10c53acd;
  /* 10c53acc int3  */
  x86_unimpl("int3 @ 0x10c53acc");
L_10c53acd:;
  /* 10c53acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c53acf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c53ad1 jne 0x10c53aab */
  if (!C.zf) goto L_10c53aab;
  /* 10c53ad3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c53ada:;
  /* 10c53ada cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53ade jne 0x10c53b56 */
  if (!C.zf) goto L_10c53b56;
  /* 10c53ae0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53ae3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53ae7 je 0x10c53b1c */
  if (C.zf) goto L_10c53b1c;
L_10c53ae9:;
  /* 10c53ae9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53aec mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c53aef push edx */
  push32((uint32_t)(EDX));
  /* 10c53af0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53af3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c53af6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53af7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c53afa push edx */
  push32((uint32_t)(EDX));
  /* 10c53afb push 0x10c797a0 */
  push32((uint32_t)(0x10c797a0u));
  /* 10c53b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53b08 call 0x10c51730 */
  push32(0x10c53b0du); f_10c51730();
  /* 10c53b0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53b10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53b13 jne 0x10c53b16 */
  if (!C.zf) goto L_10c53b16;
  /* 10c53b15 int3  */
  x86_unimpl("int3 @ 0x10c53b15");
L_10c53b16:;
  /* 10c53b16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53b1a jne 0x10c53ae9 */
  if (!C.zf) goto L_10c53ae9;
L_10c53b1c:;
  /* 10c53b1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53b1f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c53b22 push edx */
  push32((uint32_t)(EDX));
  /* 10c53b23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53b26 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53b29 push eax */
  push32((uint32_t)(EAX));
  /* 10c53b2a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c53b2d push ecx */
  push32((uint32_t)(ECX));
  /* 10c53b2e push 0x10c79774 */
  push32((uint32_t)(0x10c79774u));
  /* 10c53b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53b3b call 0x10c51730 */
  push32(0x10c53b40u); f_10c51730();
  /* 10c53b40 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53b43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53b46 jne 0x10c53b49 */
  if (!C.zf) goto L_10c53b49;
  /* 10c53b48 int3  */
  x86_unimpl("int3 @ 0x10c53b48");
L_10c53b49:;
  /* 10c53b49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c53b4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c53b4d jne 0x10c53b1c */
  if (!C.zf) goto L_10c53b1c;
  /* 10c53b4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c53b56:;
  /* 10c53b56 jmp 0x10c53963 */
  goto L_10c53963;
L_10c53b5b:;
  /* 10c53b5b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53b5d call 0x10c56110 */
  push32(0x10c53b62u); f_10c56110();
  /* 10c53b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53b65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c53b68:;
  /* 10c53b68 pop edi */
  EDI = (pop32());
  /* 10c53b69 pop esi */
  ESI = (pop32());
  /* 10c53b6a pop ebx */
  EBX = (pop32());
  /* 10c53b6b mov esp, ebp */
  ESP = (EBP);
  /* 10c53b6d pop ebp */
  EBP = (pop32());
  /* 10c53b6e ret  */
  ESPCHK(0x10c53810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b80 @ 0x10c53b80 (34 bytes, 13 insns) */
void f_10c53b80(void) {
  FTRACE(0x10c53b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53b81 mov ebp, esp */
  EBP = (ESP);
  /* 10c53b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53b84 mov eax, dword ptr [0x10c7ca84] */
  EAX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c53b89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c53b8c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53b90 je 0x10c53b9b */
  if (C.zf) goto L_10c53b9b;
  /* 10c53b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53b95 mov dword ptr [0x10c7ca84], ecx */
  w32((uint32_t)(0x10c7ca84), (ECX));
L_10c53b9b:;
  /* 10c53b9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53b9e mov esp, ebp */
  ESP = (EBP);
  /* 10c53ba0 pop ebp */
  EBP = (pop32());
  /* 10c53ba1 ret  */
  ESPCHK(0x10c53b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x10c53bb0 (103 bytes, 38 insns) */
void f_10c53bb0(void) {
  FTRACE(0x10c53bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c53bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53bb4 mov eax, dword ptr [0x10c7ca84] */
  EAX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c53bb9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c53bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53bbe jne 0x10c53bc2 */
  if (!C.zf) goto L_10c53bc2;
  /* 10c53bc0 jmp 0x10c53c13 */
  goto L_10c53c13;
L_10c53bc2:;
  /* 10c53bc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53bc4 call 0x10c56070 */
  push32(0x10c53bc9u); f_10c56070();
  /* 10c53bc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53bcc mov ecx, dword ptr [0x10c7e44c] */
  ECX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c53bd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c53bd5 jmp 0x10c53bdf */
  goto L_10c53bdf;
L_10c53bd7:;
  /* 10c53bd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53bda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c53bdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c53bdf:;
  /* 10c53bdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53be3 je 0x10c53c09 */
  if (C.zf) goto L_10c53c09;
  /* 10c53be5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53be8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c53beb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c53bf1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53bf4 jne 0x10c53c07 */
  if (!C.zf) goto L_10c53c07;
  /* 10c53bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c53bf9 push eax */
  push32((uint32_t)(EAX));
  /* 10c53bfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53bfd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53c00 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53c01 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10c53c04u);
  /* 10c53c04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c53c07:;
  /* 10c53c07 jmp 0x10c53bd7 */
  goto L_10c53bd7;
L_10c53c09:;
  /* 10c53c09 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53c0b call 0x10c56110 */
  push32(0x10c53c10u); f_10c56110();
  /* 10c53c10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c53c13:;
  /* 10c53c13 mov esp, ebp */
  ESP = (EBP);
  /* 10c53c15 pop ebp */
  EBP = (pop32());
  /* 10c53c16 ret  */
  ESPCHK(0x10c53bb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10c53c20 (75 bytes, 28 insns) */
void f_10c53c20(void) {
  FTRACE(0x10c53c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53c21 mov ebp, esp */
  EBP = (ESP);
  /* 10c53c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53c24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53c28 je 0x10c53c5d */
  if (C.zf) goto L_10c53c5d;
  /* 10c53c2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c53c2d push eax */
  push32((uint32_t)(EAX));
  /* 10c53c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53c31 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53c32 call dword ptr [0x10c8028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8028c))), 0x10c53c38u);
  /* 10c53c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53c3a jne 0x10c53c5d */
  if (!C.zf) goto L_10c53c5d;
  /* 10c53c3c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53c40 je 0x10c53c54 */
  if (C.zf) goto L_10c53c54;
  /* 10c53c42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c53c45 push edx */
  push32((uint32_t)(EDX));
  /* 10c53c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53c49 push eax */
  push32((uint32_t)(EAX));
  /* 10c53c4a call dword ptr [0x10c80288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80288))), 0x10c53c50u);
  /* 10c53c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53c52 jne 0x10c53c5d */
  if (!C.zf) goto L_10c53c5d;
L_10c53c54:;
  /* 10c53c54 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c53c5b jmp 0x10c53c64 */
  goto L_10c53c64;
L_10c53c5d:;
  /* 10c53c5d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c53c64:;
  /* 10c53c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53c67 mov esp, ebp */
  ESP = (EBP);
  /* 10c53c69 pop ebp */
  EBP = (pop32());
  /* 10c53c6a ret  */
  ESPCHK(0x10c53c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c70 @ 0x10c53c70 (134 bytes, 50 insns) */
void f_10c53c70(void) {
  FTRACE(0x10c53c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53c71 mov ebp, esp */
  EBP = (ESP);
  /* 10c53c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53c74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53c78 jne 0x10c53c7e */
  if (!C.zf) goto L_10c53c7e;
  /* 10c53c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53c7c jmp 0x10c53cf2 */
  goto L_10c53cf2;
L_10c53c7e:;
  /* 10c53c7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c53c80 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c53c82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53c85 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53c88 push eax */
  push32((uint32_t)(EAX));
  /* 10c53c89 call 0x10c53c20 */
  push32(0x10c53c8eu); f_10c53c20();
  /* 10c53c8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53c91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53c93 jne 0x10c53c99 */
  if (!C.zf) goto L_10c53c99;
  /* 10c53c95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53c97 jmp 0x10c53cf2 */
  goto L_10c53cf2;
L_10c53c99:;
  /* 10c53c99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53c9c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53c9f push ecx */
  push32((uint32_t)(ECX));
  /* 10c53ca0 call 0x10c56970 */
  push32(0x10c53ca5u); f_10c56970();
  /* 10c53ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53ca8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c53cab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53caf je 0x10c53cc6 */
  if (C.zf) goto L_10c53cc6;
  /* 10c53cb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53cb4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53cb7 push edx */
  push32((uint32_t)(EDX));
  /* 10c53cb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53cbb push eax */
  push32((uint32_t)(EAX));
  /* 10c53cbc call 0x10c569d0 */
  push32(0x10c53cc1u); f_10c569d0();
  /* 10c53cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53cc4 jmp 0x10c53cf2 */
  goto L_10c53cf2;
L_10c53cc6:;
  /* 10c53cc6 mov ecx, dword ptr [0x10c7e400] */
  ECX = (r32((uint32_t)(0x10c7e400)));
  /* 10c53ccc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c53cd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c53cd4 je 0x10c53cdd */
  if (C.zf) goto L_10c53cdd;
  /* 10c53cd6 mov eax, 1 */
  EAX = (0x1u);
  /* 10c53cdb jmp 0x10c53cf2 */
  goto L_10c53cf2;
L_10c53cdd:;
  /* 10c53cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53ce0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53ce3 push edx */
  push32((uint32_t)(EDX));
  /* 10c53ce4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53ce6 mov eax, dword ptr [0x10c7fdac] */
  EAX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c53ceb push eax */
  push32((uint32_t)(EAX));
  /* 10c53cec call dword ptr [0x10c80290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80290))), 0x10c53cf2u);
L_10c53cf2:;
  /* 10c53cf2 mov esp, ebp */
  ESP = (EBP);
  /* 10c53cf4 pop ebp */
  EBP = (pop32());
  /* 10c53cf5 ret  */
  ESPCHK(0x10c53c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d00 @ 0x10c53d00 (227 bytes, 80 insns) */
void f_10c53d00(void) {
  FTRACE(0x10c53d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53d01 mov ebp, esp */
  EBP = (ESP);
  /* 10c53d03 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53d07 push eax */
  push32((uint32_t)(EAX));
  /* 10c53d08 call 0x10c53c70 */
  push32(0x10c53d0du); f_10c53c70();
  /* 10c53d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53d12 jne 0x10c53d1b */
  if (!C.zf) goto L_10c53d1b;
  /* 10c53d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53d16 jmp 0x10c53ddf */
  goto L_10c53ddf;
L_10c53d1b:;
  /* 10c53d1b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53d1d call 0x10c56070 */
  push32(0x10c53d22u); f_10c56070();
  /* 10c53d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53d28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53d2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c53d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53d31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c53d34 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c53d39 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53d3c je 0x10c53d60 */
  if (C.zf) goto L_10c53d60;
  /* 10c53d3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53d41 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53d45 je 0x10c53d60 */
  if (C.zf) goto L_10c53d60;
  /* 10c53d47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53d4a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c53d4d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c53d52 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53d55 je 0x10c53d60 */
  if (C.zf) goto L_10c53d60;
  /* 10c53d57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53d5a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53d5e jne 0x10c53dd3 */
  if (!C.zf) goto L_10c53dd3;
L_10c53d60:;
  /* 10c53d60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c53d62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c53d65 push edx */
  push32((uint32_t)(EDX));
  /* 10c53d66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53d69 push eax */
  push32((uint32_t)(EAX));
  /* 10c53d6a call 0x10c53c20 */
  push32(0x10c53d6fu); f_10c53c20();
  /* 10c53d6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53d74 je 0x10c53dd3 */
  if (C.zf) goto L_10c53dd3;
  /* 10c53d76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53d79 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c53d7c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53d7f jne 0x10c53dd3 */
  if (!C.zf) goto L_10c53dd3;
  /* 10c53d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53d84 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c53d87 cmp ecx, dword ptr [0x10c7ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53d8d jg 0x10c53dd3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c53dd3;
  /* 10c53d8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53d93 je 0x10c53da0 */
  if (C.zf) goto L_10c53da0;
  /* 10c53d95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c53d98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53d9b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c53d9e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c53da0:;
  /* 10c53da0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53da4 je 0x10c53db1 */
  if (C.zf) goto L_10c53db1;
  /* 10c53da6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c53da9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53dac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c53daf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c53db1:;
  /* 10c53db1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53db5 je 0x10c53dc2 */
  if (C.zf) goto L_10c53dc2;
  /* 10c53db7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c53dba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53dbd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c53dc0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c53dc2:;
  /* 10c53dc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53dc4 call 0x10c56110 */
  push32(0x10c53dc9u); f_10c56110();
  /* 10c53dc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53dcc mov eax, 1 */
  EAX = (0x1u);
  /* 10c53dd1 jmp 0x10c53ddf */
  goto L_10c53ddf;
L_10c53dd3:;
  /* 10c53dd3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53dd5 call 0x10c56110 */
  push32(0x10c53ddau); f_10c56110();
  /* 10c53dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53ddd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c53ddf:;
  /* 10c53ddf mov esp, ebp */
  ESP = (EBP);
  /* 10c53de1 pop ebp */
  EBP = (pop32());
  /* 10c53de2 ret  */
  ESPCHK(0x10c53d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df0 @ 0x10c53df0 (28 bytes, 11 insns) */
void f_10c53df0(void) {
  FTRACE(0x10c53df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53df1 mov ebp, esp */
  EBP = (ESP);
  /* 10c53df3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c53df4 mov eax, dword ptr [0x10c7fdb8] */
  EAX = (r32((uint32_t)(0x10c7fdb8)));
  /* 10c53df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c53dfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53dff mov dword ptr [0x10c7fdb8], ecx */
  w32((uint32_t)(0x10c7fdb8), (ECX));
  /* 10c53e05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53e08 mov esp, ebp */
  ESP = (EBP);
  /* 10c53e0a pop ebp */
  EBP = (pop32());
  /* 10c53e0b ret  */
  ESPCHK(0x10c53df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e10 @ 0x10c53e10 (362 bytes, 116 insns) */
void f_10c53e10(void) {
  FTRACE(0x10c53e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53e11 mov ebp, esp */
  EBP = (ESP);
  /* 10c53e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53e16 push ebx */
  push32((uint32_t)(EBX));
  /* 10c53e17 push esi */
  push32((uint32_t)(ESI));
  /* 10c53e18 push edi */
  push32((uint32_t)(EDI));
  /* 10c53e19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53e1d jne 0x10c53e4a */
  if (!C.zf) goto L_10c53e4a;
L_10c53e1f:;
  /* 10c53e1f push 0x10c798d4 */
  push32((uint32_t)(0x10c798d4u));
  /* 10c53e24 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c53e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53e31 call 0x10c51730 */
  push32(0x10c53e36u); f_10c51730();
  /* 10c53e36 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53e39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53e3c jne 0x10c53e3f */
  if (!C.zf) goto L_10c53e3f;
  /* 10c53e3e int3  */
  x86_unimpl("int3 @ 0x10c53e3e");
L_10c53e3f:;
  /* 10c53e3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53e43 jne 0x10c53e1f */
  if (!C.zf) goto L_10c53e1f;
  /* 10c53e45 jmp 0x10c53f73 */
  goto L_10c53f73;
L_10c53e4a:;
  /* 10c53e4a push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53e4c call 0x10c56070 */
  push32(0x10c53e51u); f_10c56070();
  /* 10c53e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53e54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53e57 mov edx, dword ptr [0x10c7e44c] */
  EDX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c53e5d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c53e5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c53e66 jmp 0x10c53e71 */
  goto L_10c53e71;
L_10c53e68:;
  /* 10c53e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53e6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53e6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c53e71:;
  /* 10c53e71 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53e75 jge 0x10c53e95 */
  if ((C.sf==C.of)) goto L_10c53e95;
  /* 10c53e77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53e7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53e7d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10c53e85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53e88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53e8b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10c53e93 jmp 0x10c53e68 */
  goto L_10c53e68;
L_10c53e95:;
  /* 10c53e95 mov edx, dword ptr [0x10c7e44c] */
  EDX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c53e9b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c53e9e jmp 0x10c53ea8 */
  goto L_10c53ea8;
L_10c53ea0:;
  /* 10c53ea0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53ea3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c53ea5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c53ea8:;
  /* 10c53ea8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53eac je 0x10c53f51 */
  if (C.zf) goto L_10c53f51;
  /* 10c53eb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53eb5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c53eb8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c53ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53ebf jl 0x10c53f27 */
  if ((C.sf!=C.of)) goto L_10c53f27;
  /* 10c53ec1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53ec4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c53ec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c53ecd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53ed0 jge 0x10c53f27 */
  if ((C.sf==C.of)) goto L_10c53f27;
  /* 10c53ed2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53ed5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c53ed8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c53ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53ee1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10c53ee5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53ee8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53eeb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c53eee and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c53ef4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53ef7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10c53efb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53efe mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c53f01 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c53f06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53f09 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10c53f0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53f10 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53f13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53f16 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c53f19 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c53f1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53f21 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10c53f25 jmp 0x10c53f4c */
  goto L_10c53f4c;
L_10c53f27:;
  /* 10c53f27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53f2a push edx */
  push32((uint32_t)(EDX));
  /* 10c53f2b push 0x10c798b0 */
  push32((uint32_t)(0x10c798b0u));
  /* 10c53f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53f38 call 0x10c51730 */
  push32(0x10c53f3du); f_10c51730();
  /* 10c53f3d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53f40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53f43 jne 0x10c53f46 */
  if (!C.zf) goto L_10c53f46;
  /* 10c53f45 int3  */
  x86_unimpl("int3 @ 0x10c53f45");
L_10c53f46:;
  /* 10c53f46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53f4a jne 0x10c53f27 */
  if (!C.zf) goto L_10c53f27;
L_10c53f4c:;
  /* 10c53f4c jmp 0x10c53ea0 */
  goto L_10c53ea0;
L_10c53f51:;
  /* 10c53f51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53f54 mov edx, dword ptr [0x10c7e454] */
  EDX = (r32((uint32_t)(0x10c7e454)));
  /* 10c53f5a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10c53f5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c53f60 mov ecx, dword ptr [0x10c7e448] */
  ECX = (r32((uint32_t)(0x10c7e448)));
  /* 10c53f66 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10c53f69 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c53f6b call 0x10c56110 */
  push32(0x10c53f70u); f_10c56110();
  /* 10c53f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c53f73:;
  /* 10c53f73 pop edi */
  EDI = (pop32());
  /* 10c53f74 pop esi */
  ESI = (pop32());
  /* 10c53f75 pop ebx */
  EBX = (pop32());
  /* 10c53f76 mov esp, ebp */
  ESP = (EBP);
  /* 10c53f78 pop ebp */
  EBP = (pop32());
  /* 10c53f79 ret  */
  ESPCHK(0x10c53e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f80 @ 0x10c53f80 (291 bytes, 95 insns) */
void f_10c53f80(void) {
  FTRACE(0x10c53f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c53f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c53f81 mov ebp, esp */
  EBP = (ESP);
  /* 10c53f83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c53f86 push ebx */
  push32((uint32_t)(EBX));
  /* 10c53f87 push esi */
  push32((uint32_t)(ESI));
  /* 10c53f88 push edi */
  push32((uint32_t)(EDI));
  /* 10c53f89 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c53f90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53f94 je 0x10c53fa2 */
  if (C.zf) goto L_10c53fa2;
  /* 10c53f96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53f9a je 0x10c53fa2 */
  if (C.zf) goto L_10c53fa2;
  /* 10c53f9c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53fa0 jne 0x10c53fd0 */
  if (!C.zf) goto L_10c53fd0;
L_10c53fa2:;
  /* 10c53fa2 push 0x10c798fc */
  push32((uint32_t)(0x10c798fcu));
  /* 10c53fa7 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c53fac push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53fae push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53fb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c53fb4 call 0x10c51730 */
  push32(0x10c53fb9u); f_10c51730();
  /* 10c53fb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53fbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53fbf jne 0x10c53fc2 */
  if (!C.zf) goto L_10c53fc2;
  /* 10c53fc1 int3  */
  x86_unimpl("int3 @ 0x10c53fc1");
L_10c53fc2:;
  /* 10c53fc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c53fc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c53fc6 jne 0x10c53fa2 */
  if (!C.zf) goto L_10c53fa2;
  /* 10c53fc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c53fcb jmp 0x10c5409c */
  goto L_10c5409c;
L_10c53fd0:;
  /* 10c53fd0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c53fd7 jmp 0x10c53fe2 */
  goto L_10c53fe2;
L_10c53fd9:;
  /* 10c53fd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53fdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c53fdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c53fe2:;
  /* 10c53fe2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c53fe6 jge 0x10c5406c */
  if ((C.sf==C.of)) goto L_10c5406c;
  /* 10c53fec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53fef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c53ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c53ff5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c53ff8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10c53ffc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54003 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c54006 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10c5400a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5400d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54010 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54013 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c54016 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10c5401a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5401e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c54024 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10c54028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5402b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5402e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54033 jne 0x10c54042 */
  if (!C.zf) goto L_10c54042;
  /* 10c54035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5403b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54040 je 0x10c54067 */
  if (C.zf) goto L_10c54067;
L_10c54042:;
  /* 10c54042 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54046 je 0x10c54067 */
  if (C.zf) goto L_10c54067;
  /* 10c54048 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5404c jne 0x10c54060 */
  if (!C.zf) goto L_10c54060;
  /* 10c5404e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54052 jne 0x10c54067 */
  if (!C.zf) goto L_10c54067;
  /* 10c54054 mov eax, dword ptr [0x10c7ca84] */
  EAX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c54059 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10c5405c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5405e je 0x10c54067 */
  if (C.zf) goto L_10c54067;
L_10c54060:;
  /* 10c54060 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10c54067:;
  /* 10c54067 jmp 0x10c53fd9 */
  goto L_10c53fd9;
L_10c5406c:;
  /* 10c5406c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5406f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c54072 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10c54075 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54078 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5407b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10c5407e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54081 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c54084 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10c54087 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5408a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5408d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10c54090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c54093 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c54099 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c5409c:;
  /* 10c5409c pop edi */
  EDI = (pop32());
  /* 10c5409d pop esi */
  ESI = (pop32());
  /* 10c5409e pop ebx */
  EBX = (pop32());
  /* 10c5409f mov esp, ebp */
  ESP = (EBP);
  /* 10c540a1 pop ebp */
  EBP = (pop32());
  /* 10c540a2 ret  */
  ESPCHK(0x10c53f80u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b0 @ 0x10c540b0 (697 bytes, 253 insns) */
void f_10c540b0(void) {
  FTRACE(0x10c540b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c540b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c540b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c540b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c540b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c540b7 push esi */
  push32((uint32_t)(ESI));
  /* 10c540b8 push edi */
  push32((uint32_t)(EDI));
  /* 10c540b9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c540c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c540c2 call 0x10c56070 */
  push32(0x10c540c7u); f_10c56070();
  /* 10c540c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c540ca:;
  /* 10c540ca push 0x10c799f4 */
  push32((uint32_t)(0x10c799f4u));
  /* 10c540cf push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c540d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c540d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c540d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c540da push 0 */
  push32((uint32_t)(0x0u));
  /* 10c540dc call 0x10c51730 */
  push32(0x10c540e1u); f_10c51730();
  /* 10c540e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c540e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c540e7 jne 0x10c540ea */
  if (!C.zf) goto L_10c540ea;
  /* 10c540e9 int3  */
  x86_unimpl("int3 @ 0x10c540e9");
L_10c540ea:;
  /* 10c540ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c540ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c540ee jne 0x10c540ca */
  if (!C.zf) goto L_10c540ca;
  /* 10c540f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c540f4 je 0x10c540fe */
  if (C.zf) goto L_10c540fe;
  /* 10c540f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c540f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c540fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c540fe:;
  /* 10c540fe mov eax, dword ptr [0x10c7e44c] */
  EAX = (r32((uint32_t)(0x10c7e44c)));
  /* 10c54103 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c54106 jmp 0x10c54110 */
  goto L_10c54110;
L_10c54108:;
  /* 10c54108 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5410b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5410d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c54110:;
  /* 10c54110 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54114 je 0x10c54332 */
  if (C.zf) goto L_10c54332;
  /* 10c5411a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5411d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54120 je 0x10c54332 */
  if (C.zf) goto L_10c54332;
  /* 10c54126 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54129 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c5412c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c54132 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54135 je 0x10c54164 */
  if (C.zf) goto L_10c54164;
  /* 10c54137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5413a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c5413d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c54143 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c54145 je 0x10c54164 */
  if (C.zf) goto L_10c54164;
  /* 10c54147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5414a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c5414d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c54152 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54155 jne 0x10c54169 */
  if (!C.zf) goto L_10c54169;
  /* 10c54157 mov ecx, dword ptr [0x10c7ca84] */
  ECX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c5415d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10c54160 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c54162 jne 0x10c54169 */
  if (!C.zf) goto L_10c54169;
L_10c54164:;
  /* 10c54164 jmp 0x10c5432d */
  goto L_10c5432d;
L_10c54169:;
  /* 10c54169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5416c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54170 je 0x10c541e2 */
  if (C.zf) goto L_10c541e2;
  /* 10c54172 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54174 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c54176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54179 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c5417c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5417d call 0x10c53c20 */
  push32(0x10c54182u); f_10c53c20();
  /* 10c54182 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c54187 jne 0x10c541b3 */
  if (!C.zf) goto L_10c541b3;
L_10c54189:;
  /* 10c54189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5418c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c5418f push eax */
  push32((uint32_t)(EAX));
  /* 10c54190 push 0x10c799e0 */
  push32((uint32_t)(0x10c799e0u));
  /* 10c54195 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54197 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54199 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5419b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5419d call 0x10c51730 */
  push32(0x10c541a2u); f_10c51730();
  /* 10c541a2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c541a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c541a8 jne 0x10c541ab */
  if (!C.zf) goto L_10c541ab;
  /* 10c541aa int3  */
  x86_unimpl("int3 @ 0x10c541aa");
L_10c541ab:;
  /* 10c541ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c541ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c541af jne 0x10c54189 */
  if (!C.zf) goto L_10c54189;
  /* 10c541b1 jmp 0x10c541e2 */
  goto L_10c541e2;
L_10c541b3:;
  /* 10c541b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c541b6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c541b9 push eax */
  push32((uint32_t)(EAX));
  /* 10c541ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c541bd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c541c0 push edx */
  push32((uint32_t)(EDX));
  /* 10c541c1 push 0x10c799d4 */
  push32((uint32_t)(0x10c799d4u));
  /* 10c541c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c541c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c541ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10c541cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c541ce call 0x10c51730 */
  push32(0x10c541d3u); f_10c51730();
  /* 10c541d3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c541d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c541d9 jne 0x10c541dc */
  if (!C.zf) goto L_10c541dc;
  /* 10c541db int3  */
  x86_unimpl("int3 @ 0x10c541db");
L_10c541dc:;
  /* 10c541dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c541de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c541e0 jne 0x10c541b3 */
  if (!C.zf) goto L_10c541b3;
L_10c541e2:;
  /* 10c541e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c541e5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c541e8 push edx */
  push32((uint32_t)(EDX));
  /* 10c541e9 push 0x10c799cc */
  push32((uint32_t)(0x10c799ccu));
  /* 10c541ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10c541f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c541f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c541f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c541f6 call 0x10c51730 */
  push32(0x10c541fbu); f_10c51730();
  /* 10c541fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c541fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54201 jne 0x10c54204 */
  if (!C.zf) goto L_10c54204;
  /* 10c54203 int3  */
  x86_unimpl("int3 @ 0x10c54203");
L_10c54204:;
  /* 10c54204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c54208 jne 0x10c541e2 */
  if (!C.zf) goto L_10c541e2;
  /* 10c5420a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5420d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c54210 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c54216 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54219 jne 0x10c5428c */
  if (!C.zf) goto L_10c5428c;
L_10c5421b:;
  /* 10c5421b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5421e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c54221 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54222 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54225 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c54228 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c5422b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c54230 push eax */
  push32((uint32_t)(EAX));
  /* 10c54231 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54234 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54237 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54238 push 0x10c79998 */
  push32((uint32_t)(0x10c79998u));
  /* 10c5423d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5423f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54241 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54243 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54245 call 0x10c51730 */
  push32(0x10c5424au); f_10c51730();
  /* 10c5424a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5424d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54250 jne 0x10c54253 */
  if (!C.zf) goto L_10c54253;
  /* 10c54252 int3  */
  x86_unimpl("int3 @ 0x10c54252");
L_10c54253:;
  /* 10c54253 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c54255 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c54257 jne 0x10c5421b */
  if (!C.zf) goto L_10c5421b;
  /* 10c54259 cmp dword ptr [0x10c7fdb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fdb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54260 je 0x10c5427b */
  if (C.zf) goto L_10c5427b;
  /* 10c54262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54265 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c54268 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54269 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5426c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5426f push edx */
  push32((uint32_t)(EDX));
  /* 10c54270 call dword ptr [0x10c7fdb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7fdb8))), 0x10c54276u);
  /* 10c54276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54279 jmp 0x10c54287 */
  goto L_10c54287;
L_10c5427b:;
  /* 10c5427b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5427e push eax */
  push32((uint32_t)(EAX));
  /* 10c5427f call 0x10c54370 */
  push32(0x10c54284u); f_10c54370();
  /* 10c54284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c54287:;
  /* 10c54287 jmp 0x10c5432d */
  goto L_10c5432d;
L_10c5428c:;
  /* 10c5428c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5428f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54293 jne 0x10c542d2 */
  if (!C.zf) goto L_10c542d2;
L_10c54295:;
  /* 10c54295 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54298 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c5429b push eax */
  push32((uint32_t)(EAX));
  /* 10c5429c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5429f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c542a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c542a3 push 0x10c79970 */
  push32((uint32_t)(0x10c79970u));
  /* 10c542a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c542aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10c542ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10c542ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10c542b0 call 0x10c51730 */
  push32(0x10c542b5u); f_10c51730();
  /* 10c542b5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c542b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c542bb jne 0x10c542be */
  if (!C.zf) goto L_10c542be;
  /* 10c542bd int3  */
  x86_unimpl("int3 @ 0x10c542bd");
L_10c542be:;
  /* 10c542be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c542c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c542c2 jne 0x10c54295 */
  if (!C.zf) goto L_10c54295;
  /* 10c542c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c542c7 push eax */
  push32((uint32_t)(EAX));
  /* 10c542c8 call 0x10c54370 */
  push32(0x10c542cdu); f_10c54370();
  /* 10c542cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c542d0 jmp 0x10c5432d */
  goto L_10c5432d;
L_10c542d2:;
  /* 10c542d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c542d5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c542d8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c542de cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c542e1 jne 0x10c5432d */
  if (!C.zf) goto L_10c5432d;
L_10c542e3:;
  /* 10c542e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c542e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c542e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c542ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c542ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c542f0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c542f3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c542f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c542f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c542fc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c542ff push ecx */
  push32((uint32_t)(ECX));
  /* 10c54300 push 0x10c7993c */
  push32((uint32_t)(0x10c7993cu));
  /* 10c54305 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54307 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54309 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5430b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5430d call 0x10c51730 */
  push32(0x10c54312u); f_10c51730();
  /* 10c54312 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54318 jne 0x10c5431b */
  if (!C.zf) goto L_10c5431b;
  /* 10c5431a int3  */
  x86_unimpl("int3 @ 0x10c5431a");
L_10c5431b:;
  /* 10c5431b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5431d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5431f jne 0x10c542e3 */
  if (!C.zf) goto L_10c542e3;
  /* 10c54321 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54324 push eax */
  push32((uint32_t)(EAX));
  /* 10c54325 call 0x10c54370 */
  push32(0x10c5432au); f_10c54370();
  /* 10c5432a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5432d:;
  /* 10c5432d jmp 0x10c54108 */
  goto L_10c54108;
L_10c54332:;
  /* 10c54332 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c54334 call 0x10c56110 */
  push32(0x10c54339u); f_10c56110();
  /* 10c54339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c5433c:;
  /* 10c5433c push 0x10c79924 */
  push32((uint32_t)(0x10c79924u));
  /* 10c54341 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c54346 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54348 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5434a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5434c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5434e call 0x10c51730 */
  push32(0x10c54353u); f_10c51730();
  /* 10c54353 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54356 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54359 jne 0x10c5435c */
  if (!C.zf) goto L_10c5435c;
  /* 10c5435b int3  */
  x86_unimpl("int3 @ 0x10c5435b");
L_10c5435c:;
  /* 10c5435c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c5435e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c54360 jne 0x10c5433c */
  if (!C.zf) goto L_10c5433c;
  /* 10c54362 pop edi */
  EDI = (pop32());
  /* 10c54363 pop esi */
  ESI = (pop32());
  /* 10c54364 pop ebx */
  EBX = (pop32());
  /* 10c54365 mov esp, ebp */
  ESP = (EBP);
  /* 10c54367 pop ebp */
  EBP = (pop32());
  /* 10c54368 ret  */
  ESPCHK(0x10c540b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004370 @ 0x10c54370 (276 bytes, 89 insns) */
void f_10c54370(void) {
  FTRACE(0x10c54370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54370 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54371 mov ebp, esp */
  EBP = (ESP);
  /* 10c54373 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54376 push ebx */
  push32((uint32_t)(EBX));
  /* 10c54377 push esi */
  push32((uint32_t)(ESI));
  /* 10c54378 push edi */
  push32((uint32_t)(EDI));
  /* 10c54379 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10c54380 jmp 0x10c5438b */
  goto L_10c5438b;
L_10c54382:;
  /* 10c54382 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c54385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54388 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10c5438b:;
  /* 10c5438b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5438e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54392 jge 0x10c5439f */
  if ((C.sf==C.of)) goto L_10c5439f;
  /* 10c54394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c54397 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c5439a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10c5439d jmp 0x10c543a6 */
  goto L_10c543a6;
L_10c5439f:;
  /* 10c5439f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10c543a6:;
  /* 10c543a6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c543a9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c543ac jge 0x10c5444c */
  if ((C.sf==C.of)) goto L_10c5444c;
  /* 10c543b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c543b5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c543b8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10c543bb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10c543be cmp dword ptr [0x10c7cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c543c5 jle 0x10c543e3 */
  if ((C.zf||C.sf!=C.of)) goto L_10c543e3;
  /* 10c543c7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10c543cc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c543cf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c543d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c543d6 call 0x10c58680 */
  push32(0x10c543dbu); f_10c58680();
  /* 10c543db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c543de mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10c543e1 jmp 0x10c54400 */
  goto L_10c54400;
L_10c543e3:;
  /* 10c543e3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c543e6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c543ec mov eax, dword ptr [0x10c7cc98] */
  EAX = (r32((uint32_t)(0x10c7cc98)));
  /* 10c543f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c543f3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c543f7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10c543fd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10c54400:;
  /* 10c54400 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54404 je 0x10c54414 */
  if (C.zf) goto L_10c54414;
  /* 10c54406 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c54409 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5440f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10c54412 jmp 0x10c5441b */
  goto L_10c5441b;
L_10c54414:;
  /* 10c54414 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10c5441b:;
  /* 10c5441b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c5441e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10c54421 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10c54425 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c54428 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c5442e push edx */
  push32((uint32_t)(EDX));
  /* 10c5442f push 0x10c79a18 */
  push32((uint32_t)(0x10c79a18u));
  /* 10c54434 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c54437 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5443a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10c5443e push ecx */
  push32((uint32_t)(ECX));
  /* 10c5443f call 0x10c58580 */
  push32(0x10c54444u); f_10c58580();
  /* 10c54444 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54447 jmp 0x10c54382 */
  goto L_10c54382;
L_10c5444c:;
  /* 10c5444c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c5444f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10c54454:;
  /* 10c54454 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10c54457 push eax */
  push32((uint32_t)(EAX));
  /* 10c54458 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10c5445b push ecx */
  push32((uint32_t)(ECX));
  /* 10c5445c push 0x10c79a08 */
  push32((uint32_t)(0x10c79a08u));
  /* 10c54461 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54463 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54465 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54469 call 0x10c51730 */
  push32(0x10c5446eu); f_10c51730();
  /* 10c5446e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54471 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54474 jne 0x10c54477 */
  if (!C.zf) goto L_10c54477;
  /* 10c54476 int3  */
  x86_unimpl("int3 @ 0x10c54476");
L_10c54477:;
  /* 10c54477 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c54479 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5447b jne 0x10c54454 */
  if (!C.zf) goto L_10c54454;
  /* 10c5447d pop edi */
  EDI = (pop32());
  /* 10c5447e pop esi */
  ESI = (pop32());
  /* 10c5447f pop ebx */
  EBX = (pop32());
  /* 10c54480 mov esp, ebp */
  ESP = (EBP);
  /* 10c54482 pop ebp */
  EBP = (pop32());
  /* 10c54483 ret  */
  ESPCHK(0x10c54370u, _esp0);
  ESP += 4; return;
}

/* FUN_10004490 @ 0x10c54490 (116 bytes, 46 insns) */
void f_10c54490(void) {
  FTRACE(0x10c54490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54490 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54491 mov ebp, esp */
  EBP = (ESP);
  /* 10c54493 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54496 push ebx */
  push32((uint32_t)(EBX));
  /* 10c54497 push esi */
  push32((uint32_t)(ESI));
  /* 10c54498 push edi */
  push32((uint32_t)(EDI));
  /* 10c54499 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10c5449c push eax */
  push32((uint32_t)(EAX));
  /* 10c5449d call 0x10c53e10 */
  push32(0x10c544a2u); f_10c53e10();
  /* 10c544a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c544a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c544a9 jne 0x10c544c4 */
  if (!C.zf) goto L_10c544c4;
  /* 10c544ab cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c544af jne 0x10c544c4 */
  if (!C.zf) goto L_10c544c4;
  /* 10c544b1 mov ecx, dword ptr [0x10c7ca84] */
  ECX = (r32((uint32_t)(0x10c7ca84)));
  /* 10c544b7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10c544ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c544bc je 0x10c544fb */
  if (C.zf) goto L_10c544fb;
  /* 10c544be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c544c2 je 0x10c544fb */
  if (C.zf) goto L_10c544fb;
L_10c544c4:;
  /* 10c544c4 push 0x10c79a20 */
  push32((uint32_t)(0x10c79a20u));
  /* 10c544c9 push 0x10c793ec */
  push32((uint32_t)(0x10c793ecu));
  /* 10c544ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10c544d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c544d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c544d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c544d6 call 0x10c51730 */
  push32(0x10c544dbu); f_10c51730();
  /* 10c544db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c544de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c544e1 jne 0x10c544e4 */
  if (!C.zf) goto L_10c544e4;
  /* 10c544e3 int3  */
  x86_unimpl("int3 @ 0x10c544e3");
L_10c544e4:;
  /* 10c544e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c544e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c544e8 jne 0x10c544c4 */
  if (!C.zf) goto L_10c544c4;
  /* 10c544ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10c544ec call 0x10c540b0 */
  push32(0x10c544f1u); f_10c540b0();
  /* 10c544f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c544f4 mov eax, 1 */
  EAX = (0x1u);
  /* 10c544f9 jmp 0x10c544fd */
  goto L_10c544fd;
L_10c544fb:;
  /* 10c544fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c544fd:;
  /* 10c544fd pop edi */
  EDI = (pop32());
  /* 10c544fe pop esi */
  ESI = (pop32());
  /* 10c544ff pop ebx */
  EBX = (pop32());
  /* 10c54500 mov esp, ebp */
  ESP = (EBP);
  /* 10c54502 pop ebp */
  EBP = (pop32());
  /* 10c54503 ret  */
  ESPCHK(0x10c54490u, _esp0);
  ESP += 4; return;
}

/* FUN_10004510 @ 0x10c54510 (197 bytes, 79 insns) */
void f_10c54510(void) {
  FTRACE(0x10c54510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54510 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54511 mov ebp, esp */
  EBP = (ESP);
  /* 10c54513 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54514 push ebx */
  push32((uint32_t)(EBX));
  /* 10c54515 push esi */
  push32((uint32_t)(ESI));
  /* 10c54516 push edi */
  push32((uint32_t)(EDI));
  /* 10c54517 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5451b jne 0x10c54522 */
  if (!C.zf) goto L_10c54522;
  /* 10c5451d jmp 0x10c545ce */
  goto L_10c545ce;
L_10c54522:;
  /* 10c54522 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c54529 jmp 0x10c54534 */
  goto L_10c54534;
L_10c5452b:;
  /* 10c5452b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5452e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54531 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c54534:;
  /* 10c54534 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54538 jge 0x10c5457e */
  if ((C.sf==C.of)) goto L_10c5457e;
L_10c5453a:;
  /* 10c5453a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5453d mov edx, dword ptr [ecx*4 + 0x10c7ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7ca94)));
  /* 10c54544 push edx */
  push32((uint32_t)(EDX));
  /* 10c54545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54548 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5454b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10c5454f push edx */
  push32((uint32_t)(EDX));
  /* 10c54550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54553 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c54556 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10c5455a push edx */
  push32((uint32_t)(EDX));
  /* 10c5455b push 0x10c79a7c */
  push32((uint32_t)(0x10c79a7cu));
  /* 10c54560 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54562 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54564 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54566 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54568 call 0x10c51730 */
  push32(0x10c5456du); f_10c51730();
  /* 10c5456d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54570 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54573 jne 0x10c54576 */
  if (!C.zf) goto L_10c54576;
  /* 10c54575 int3  */
  x86_unimpl("int3 @ 0x10c54575");
L_10c54576:;
  /* 10c54576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5457a jne 0x10c5453a */
  if (!C.zf) goto L_10c5453a;
  /* 10c5457c jmp 0x10c5452b */
  goto L_10c5452b;
L_10c5457e:;
  /* 10c5457e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c54581 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10c54584 push edx */
  push32((uint32_t)(EDX));
  /* 10c54585 push 0x10c79a58 */
  push32((uint32_t)(0x10c79a58u));
  /* 10c5458a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5458c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5458e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54590 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54592 call 0x10c51730 */
  push32(0x10c54597u); f_10c51730();
  /* 10c54597 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5459a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5459d jne 0x10c545a0 */
  if (!C.zf) goto L_10c545a0;
  /* 10c5459f int3  */
  x86_unimpl("int3 @ 0x10c5459f");
L_10c545a0:;
  /* 10c545a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c545a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c545a4 jne 0x10c5457e */
  if (!C.zf) goto L_10c5457e;
L_10c545a6:;
  /* 10c545a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c545a9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10c545ac push edx */
  push32((uint32_t)(EDX));
  /* 10c545ad push 0x10c79a38 */
  push32((uint32_t)(0x10c79a38u));
  /* 10c545b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c545b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c545b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c545b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c545ba call 0x10c51730 */
  push32(0x10c545bfu); f_10c51730();
  /* 10c545bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c545c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c545c5 jne 0x10c545c8 */
  if (!C.zf) goto L_10c545c8;
  /* 10c545c7 int3  */
  x86_unimpl("int3 @ 0x10c545c7");
L_10c545c8:;
  /* 10c545c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c545ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c545cc jne 0x10c545a6 */
  if (!C.zf) goto L_10c545a6;
L_10c545ce:;
  /* 10c545ce pop edi */
  EDI = (pop32());
  /* 10c545cf pop esi */
  ESI = (pop32());
  /* 10c545d0 pop ebx */
  EBX = (pop32());
  /* 10c545d1 mov esp, ebp */
  ESP = (EBP);
  /* 10c545d3 pop ebp */
  EBP = (pop32());
  /* 10c545d4 ret  */
  ESPCHK(0x10c54510u, _esp0);
  ESP += 4; return;
}

/* FUN_100045e0 @ 0x10c545e0 (329 bytes, 102 insns) */
void f_10c545e0(void) {
  FTRACE(0x10c545e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c545e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c545e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c545e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c545e6 cmp dword ptr [0x10c7ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c545ed jne 0x10c545f4 */
  if (!C.zf) goto L_10c545f4;
  /* 10c545ef call 0x10c58f20 */
  push32(0x10c545f4u); f_10c58f20();
L_10c545f4:;
  /* 10c545f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c545fb mov eax, dword ptr [0x10c7e3e8] */
  EAX = (r32((uint32_t)(0x10c7e3e8)));
  /* 10c54600 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c54603:;
  /* 10c54603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54606 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c54609 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5460b je 0x10c54639 */
  if (C.zf) goto L_10c54639;
  /* 10c5460d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54610 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c54613 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54616 je 0x10c54621 */
  if (C.zf) goto L_10c54621;
  /* 10c54618 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5461b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5461e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c54621:;
  /* 10c54621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54624 push eax */
  push32((uint32_t)(EAX));
  /* 10c54625 call 0x10c554a0 */
  push32(0x10c5462au); f_10c554a0();
  /* 10c5462a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5462d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54630 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c54634 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c54637 jmp 0x10c54603 */
  goto L_10c54603;
L_10c54639:;
  /* 10c54639 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10c5463b push 0x10c79a9c */
  push32((uint32_t)(0x10c79a9cu));
  /* 10c54640 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c54642 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54645 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10c5464c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5464d call 0x10c52670 */
  push32(0x10c54652u); f_10c52670();
  /* 10c54652 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54655 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c54658 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5465b mov dword ptr [0x10c7e41c], edx */
  w32((uint32_t)(0x10c7e41c), (EDX));
  /* 10c54661 cmp dword ptr [0x10c7e41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54668 jne 0x10c54674 */
  if (!C.zf) goto L_10c54674;
  /* 10c5466a push 9 */
  push32((uint32_t)(0x9u));
  /* 10c5466c call 0x10c515e0 */
  push32(0x10c54671u); f_10c515e0();
  /* 10c54671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c54674:;
  /* 10c54674 mov eax, dword ptr [0x10c7e3e8] */
  EAX = (r32((uint32_t)(0x10c7e3e8)));
  /* 10c54679 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5467c jmp 0x10c54687 */
  goto L_10c54687;
L_10c5467e:;
  /* 10c5467e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54681 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54684 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c54687:;
  /* 10c54687 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5468a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c5468d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5468f je 0x10c546f7 */
  if (C.zf) goto L_10c546f7;
  /* 10c54691 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54694 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54695 call 0x10c554a0 */
  push32(0x10c5469au); f_10c554a0();
  /* 10c5469a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5469d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c546a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c546a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c546a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c546a9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c546ac je 0x10c546f5 */
  if (C.zf) goto L_10c546f5;
  /* 10c546ae push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10c546b0 push 0x10c79a9c */
  push32((uint32_t)(0x10c79a9cu));
  /* 10c546b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c546b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c546ba push ecx */
  push32((uint32_t)(ECX));
  /* 10c546bb call 0x10c52670 */
  push32(0x10c546c0u); f_10c52670();
  /* 10c546c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c546c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c546c6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c546c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c546cb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c546ce jne 0x10c546da */
  if (!C.zf) goto L_10c546da;
  /* 10c546d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c546d2 call 0x10c515e0 */
  push32(0x10c546d7u); f_10c515e0();
  /* 10c546d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c546da:;
  /* 10c546da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c546dd push ecx */
  push32((uint32_t)(ECX));
  /* 10c546de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c546e1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c546e3 push eax */
  push32((uint32_t)(EAX));
  /* 10c546e4 call 0x10c55620 */
  push32(0x10c546e9u); f_10c55620();
  /* 10c546e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c546ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c546ef add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c546f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c546f5:;
  /* 10c546f5 jmp 0x10c5467e */
  goto L_10c5467e;
L_10c546f7:;
  /* 10c546f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c546f9 mov edx, dword ptr [0x10c7e3e8] */
  EDX = (r32((uint32_t)(0x10c7e3e8)));
  /* 10c546ff push edx */
  push32((uint32_t)(EDX));
  /* 10c54700 call 0x10c53100 */
  push32(0x10c54705u); f_10c53100();
  /* 10c54705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54708 mov dword ptr [0x10c7e3e8], 0 */
  w32((uint32_t)(0x10c7e3e8), (0x0u));
  /* 10c54712 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c54715 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5471b mov dword ptr [0x10c7ff20], 1 */
  w32((uint32_t)(0x10c7ff20), (0x1u));
  /* 10c54725 mov esp, ebp */
  ESP = (EBP);
  /* 10c54727 pop ebp */
  EBP = (pop32());
  /* 10c54728 ret  */
  ESPCHK(0x10c545e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x10c54730 (216 bytes, 69 insns) */
void f_10c54730(void) {
  FTRACE(0x10c54730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54730 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54731 mov ebp, esp */
  EBP = (ESP);
  /* 10c54733 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54736 cmp dword ptr [0x10c7ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5473d jne 0x10c54744 */
  if (!C.zf) goto L_10c54744;
  /* 10c5473f call 0x10c58f20 */
  push32(0x10c54744u); f_10c58f20();
L_10c54744:;
  /* 10c54744 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10c54749 push 0x10c7e458 */
  push32((uint32_t)(0x10c7e458u));
  /* 10c5474e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54750 call dword ptr [0x10c80248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80248))), 0x10c54756u);
  /* 10c54756 mov dword ptr [0x10c7e42c], 0x10c7e458 */
  w32((uint32_t)(0x10c7e42c), (0x10c7e458u));
  /* 10c54760 mov eax, dword ptr [0x10c7ff4c] */
  EAX = (r32((uint32_t)(0x10c7ff4c)));
  /* 10c54765 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c54768 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c5476a jne 0x10c54777 */
  if (!C.zf) goto L_10c54777;
  /* 10c5476c mov edx, dword ptr [0x10c7e42c] */
  EDX = (r32((uint32_t)(0x10c7e42c)));
  /* 10c54772 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c54775 jmp 0x10c5477f */
  goto L_10c5477f;
L_10c54777:;
  /* 10c54777 mov eax, dword ptr [0x10c7ff4c] */
  EAX = (r32((uint32_t)(0x10c7ff4c)));
  /* 10c5477c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10c5477f:;
  /* 10c5477f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c54782 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c54785 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10c54788 push edx */
  push32((uint32_t)(EDX));
  /* 10c54789 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10c5478c push eax */
  push32((uint32_t)(EAX));
  /* 10c5478d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5478f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54791 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54794 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54795 call 0x10c54810 */
  push32(0x10c5479au); f_10c54810();
  /* 10c5479a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5479d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10c547a2 push 0x10c79aa8 */
  push32((uint32_t)(0x10c79aa8u));
  /* 10c547a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c547a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c547ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c547af lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10c547b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c547b3 call 0x10c52670 */
  push32(0x10c547b8u); f_10c52670();
  /* 10c547b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c547bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c547be cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c547c2 jne 0x10c547ce */
  if (!C.zf) goto L_10c547ce;
  /* 10c547c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c547c6 call 0x10c515e0 */
  push32(0x10c547cbu); f_10c515e0();
  /* 10c547cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c547ce:;
  /* 10c547ce lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10c547d1 push edx */
  push32((uint32_t)(EDX));
  /* 10c547d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10c547d5 push eax */
  push32((uint32_t)(EAX));
  /* 10c547d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c547d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c547dc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10c547df push eax */
  push32((uint32_t)(EAX));
  /* 10c547e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c547e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c547e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c547e7 push edx */
  push32((uint32_t)(EDX));
  /* 10c547e8 call 0x10c54810 */
  push32(0x10c547edu); f_10c54810();
  /* 10c547ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c547f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c547f3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c547f6 mov dword ptr [0x10c7e410], eax */
  w32((uint32_t)(0x10c7e410), (EAX));
  /* 10c547fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c547fe mov dword ptr [0x10c7e414], ecx */
  w32((uint32_t)(0x10c7e414), (ECX));
  /* 10c54804 mov esp, ebp */
  ESP = (EBP);
  /* 10c54806 pop ebp */
  EBP = (pop32());
  /* 10c54807 ret  */
  ESPCHK(0x10c54730u, _esp0);
  ESP += 4; return;
}

/* FUN_10004810 @ 0x10c54810 (1060 bytes, 360 insns) */
void f_10c54810(void) {
  FTRACE(0x10c54810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54810 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54811 mov ebp, esp */
  EBP = (ESP);
  /* 10c54813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54816 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54819 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c5481f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c54822 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10c54828 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5482b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5482e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54832 je 0x10c54845 */
  if (C.zf) goto L_10c54845;
  /* 10c54834 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c54837 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5483a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c5483c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5483f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54842 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10c54845:;
  /* 10c54845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54848 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5484b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5484e jne 0x10c5491d */
  if (!C.zf) goto L_10c5491d;
L_10c54854:;
  /* 10c54854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54857 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5485a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5485d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54860 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c54863 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54866 je 0x10c548e2 */
  if (C.zf) goto L_10c548e2;
  /* 10c54868 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5486b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c5486e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c54870 je 0x10c548e2 */
  if (C.zf) goto L_10c548e2;
  /* 10c54872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54875 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c54877 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c54879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5487b mov al, byte ptr [edx + 0x10c7fc81] */
  AL = (r8((uint32_t)(EDX + 0x10c7fc81)));
  /* 10c54881 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c54884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c54886 je 0x10c548b7 */
  if (C.zf) goto L_10c548b7;
  /* 10c54888 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5488b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5488d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54890 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54893 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c54895 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54899 je 0x10c548b7 */
  if (C.zf) goto L_10c548b7;
  /* 10c5489b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5489e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c548a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c548a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c548a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c548a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c548ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c548ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c548b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c548b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c548b7:;
  /* 10c548b7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c548ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c548bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c548bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c548c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c548c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c548c8 je 0x10c548dd */
  if (C.zf) goto L_10c548dd;
  /* 10c548ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c548cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c548d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c548d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c548d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c548d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c548da mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c548dd:;
  /* 10c548dd jmp 0x10c54854 */
  goto L_10c54854;
L_10c548e2:;
  /* 10c548e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c548e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c548e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c548ea mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c548ed mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c548ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c548f3 je 0x10c54904 */
  if (C.zf) goto L_10c54904;
  /* 10c548f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c548f8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c548fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c548fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54901 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10c54904:;
  /* 10c54904 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54907 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c5490a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5490d jne 0x10c54918 */
  if (!C.zf) goto L_10c54918;
  /* 10c5490f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54912 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54915 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c54918:;
  /* 10c54918 jmp 0x10c549ec */
  goto L_10c549ec;
L_10c5491d:;
  /* 10c5491d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54920 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c54922 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54925 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54928 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c5492a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5492e je 0x10c54943 */
  if (C.zf) goto L_10c54943;
  /* 10c54930 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54936 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c54938 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c5493a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5493d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54940 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c54943:;
  /* 10c54943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54946 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c54948 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10c5494b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5494e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c54954 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c54957 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c5495d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5495f mov dl, byte ptr [ecx + 0x10c7fc81] */
  DL = (r8((uint32_t)(ECX + 0x10c7fc81)));
  /* 10c54965 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c54968 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5496a je 0x10c5499b */
  if (C.zf) goto L_10c5499b;
  /* 10c5496c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c5496f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c54971 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54974 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54977 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c54979 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5497d je 0x10c54992 */
  if (C.zf) goto L_10c54992;
  /* 10c5497f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54982 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54985 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c54987 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c54989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5498c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5498f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c54992:;
  /* 10c54992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54995 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54998 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c5499b:;
  /* 10c5499b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5499e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c549a4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c549a7 je 0x10c549c7 */
  if (C.zf) goto L_10c549c7;
  /* 10c549a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c549ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c549b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c549b3 je 0x10c549c7 */
  if (C.zf) goto L_10c549c7;
  /* 10c549b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c549b8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c549be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c549c1 jne 0x10c5491d */
  if (!C.zf) goto L_10c5491d;
L_10c549c7:;
  /* 10c549c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c549ca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c549d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c549d2 jne 0x10c549df */
  if (!C.zf) goto L_10c549df;
  /* 10c549d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c549d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c549da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c549dd jmp 0x10c549ec */
  goto L_10c549ec;
L_10c549df:;
  /* 10c549df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c549e3 je 0x10c549ec */
  if (C.zf) goto L_10c549ec;
  /* 10c549e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c549e8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10c549ec:;
  /* 10c549ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10c549f3:;
  /* 10c549f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c549f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c549f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c549fb je 0x10c54a1e */
  if (C.zf) goto L_10c54a1e;
L_10c549fd:;
  /* 10c549fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54a00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c54a03 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54a06 je 0x10c54a13 */
  if (C.zf) goto L_10c54a13;
  /* 10c54a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54a0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c54a0e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54a11 jne 0x10c54a1e */
  if (!C.zf) goto L_10c54a1e;
L_10c54a13:;
  /* 10c54a13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54a16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54a19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c54a1c jmp 0x10c549fd */
  goto L_10c549fd;
L_10c54a1e:;
  /* 10c54a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54a21 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c54a24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c54a26 jne 0x10c54a2d */
  if (!C.zf) goto L_10c54a2d;
  /* 10c54a28 jmp 0x10c54c0b */
  goto L_10c54c0b;
L_10c54a2d:;
  /* 10c54a2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54a31 je 0x10c54a44 */
  if (C.zf) goto L_10c54a44;
  /* 10c54a33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c54a36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54a39 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c54a3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c54a3e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54a41 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c54a44:;
  /* 10c54a44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c54a47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c54a49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54a4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c54a4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10c54a51:;
  /* 10c54a51 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c54a58 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c54a5f:;
  /* 10c54a5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54a62 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c54a65 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54a68 jne 0x10c54a7e */
  if (!C.zf) goto L_10c54a7e;
  /* 10c54a6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54a6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54a70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c54a73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54a76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54a79 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c54a7c jmp 0x10c54a5f */
  goto L_10c54a5f;
L_10c54a7e:;
  /* 10c54a7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54a81 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c54a84 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54a87 jne 0x10c54ada */
  if (!C.zf) goto L_10c54ada;
  /* 10c54a89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54a8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c54a8e mov ecx, 2 */
  ECX = (0x2u);
  /* 10c54a93 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c54a95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c54a97 jne 0x10c54ad2 */
  if (!C.zf) goto L_10c54ad2;
  /* 10c54a99 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54a9d je 0x10c54abf */
  if (C.zf) goto L_10c54abf;
  /* 10c54a9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54aa2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c54aa6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54aa9 jne 0x10c54ab6 */
  if (!C.zf) goto L_10c54ab6;
  /* 10c54aab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54aae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54ab1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c54ab4 jmp 0x10c54abd */
  goto L_10c54abd;
L_10c54ab6:;
  /* 10c54ab6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c54abd:;
  /* 10c54abd jmp 0x10c54ac6 */
  goto L_10c54ac6;
L_10c54abf:;
  /* 10c54abf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c54ac6:;
  /* 10c54ac6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c54ac8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54acc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10c54acf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c54ad2:;
  /* 10c54ad2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54ad5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c54ad7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c54ada:;
  /* 10c54ada mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54add mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54ae0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54ae3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c54ae6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c54ae8 je 0x10c54b0e */
  if (C.zf) goto L_10c54b0e;
  /* 10c54aea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54aee je 0x10c54aff */
  if (C.zf) goto L_10c54aff;
  /* 10c54af0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54af3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10c54af6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54af9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54afc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10c54aff:;
  /* 10c54aff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54b02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c54b04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54b07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54b0a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c54b0c jmp 0x10c54ada */
  goto L_10c54ada;
L_10c54b0e:;
  /* 10c54b0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54b11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c54b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c54b16 je 0x10c54b34 */
  if (C.zf) goto L_10c54b34;
  /* 10c54b18 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54b1c jne 0x10c54b39 */
  if (!C.zf) goto L_10c54b39;
  /* 10c54b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54b21 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c54b24 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54b27 je 0x10c54b34 */
  if (C.zf) goto L_10c54b34;
  /* 10c54b29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54b2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c54b2f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54b32 jne 0x10c54b39 */
  if (!C.zf) goto L_10c54b39;
L_10c54b34:;
  /* 10c54b34 jmp 0x10c54be4 */
  goto L_10c54be4;
L_10c54b39:;
  /* 10c54b39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54b3d je 0x10c54bd6 */
  if (C.zf) goto L_10c54bd6;
  /* 10c54b43 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54b47 je 0x10c54b9d */
  if (C.zf) goto L_10c54b9d;
  /* 10c54b49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54b4e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c54b50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c54b52 mov cl, byte ptr [eax + 0x10c7fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c7fc81)));
  /* 10c54b58 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c54b5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c54b5d je 0x10c54b88 */
  if (C.zf) goto L_10c54b88;
  /* 10c54b5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54b62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54b65 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c54b67 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c54b69 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54b6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54b6f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10c54b72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54b75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54b78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c54b7b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54b7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c54b80 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54b83 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54b86 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c54b88:;
  /* 10c54b88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54b8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54b8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c54b90 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c54b92 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54b95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54b98 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c54b9b jmp 0x10c54bc9 */
  goto L_10c54bc9;
L_10c54b9d:;
  /* 10c54b9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54ba0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54ba2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c54ba4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c54ba6 mov cl, byte ptr [eax + 0x10c7fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c7fc81)));
  /* 10c54bac and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c54baf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c54bb1 je 0x10c54bc9 */
  if (C.zf) goto L_10c54bc9;
  /* 10c54bb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54bb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54bb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c54bbc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54bbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c54bc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54bc4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54bc7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c54bc9:;
  /* 10c54bc9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54bcc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c54bce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54bd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54bd4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c54bd6:;
  /* 10c54bd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54bd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54bdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c54bdf jmp 0x10c54a51 */
  goto L_10c54a51;
L_10c54be4:;
  /* 10c54be4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54be8 je 0x10c54bf9 */
  if (C.zf) goto L_10c54bf9;
  /* 10c54bea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54bed mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c54bf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c54bf3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54bf6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10c54bf9:;
  /* 10c54bf9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54bfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c54bfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54c01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c54c04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c54c06 jmp 0x10c549f3 */
  goto L_10c549f3;
L_10c54c0b:;
  /* 10c54c0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54c0f je 0x10c54c23 */
  if (C.zf) goto L_10c54c23;
  /* 10c54c11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c54c14 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c54c1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c54c1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54c20 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c54c23:;
  /* 10c54c23 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c54c26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c54c28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54c2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c54c2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c54c30 mov esp, ebp */
  ESP = (EBP);
  /* 10c54c32 pop ebp */
  EBP = (pop32());
  /* 10c54c33 ret  */
  ESPCHK(0x10c54810u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x10c54c40 (537 bytes, 173 insns) */
void f_10c54c40(void) {
  FTRACE(0x10c54c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54c41 mov ebp, esp */
  EBP = (ESP);
  /* 10c54c43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54c46 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10c54c4d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10c54c54 cmp dword ptr [0x10c7e55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54c5b jne 0x10c54c9a */
  if (!C.zf) goto L_10c54c9a;
  /* 10c54c5d call dword ptr [0x10c80208] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80208))), 0x10c54c63u);
  /* 10c54c63 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c54c66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54c6a je 0x10c54c78 */
  if (C.zf) goto L_10c54c78;
  /* 10c54c6c mov dword ptr [0x10c7e55c], 1 */
  w32((uint32_t)(0x10c7e55c), (0x1u));
  /* 10c54c76 jmp 0x10c54c9a */
  goto L_10c54c9a;
L_10c54c78:;
  /* 10c54c78 call dword ptr [0x10c8020c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8020c))), 0x10c54c7eu);
  /* 10c54c7e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c54c81 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54c85 je 0x10c54c93 */
  if (C.zf) goto L_10c54c93;
  /* 10c54c87 mov dword ptr [0x10c7e55c], 2 */
  w32((uint32_t)(0x10c7e55c), (0x2u));
  /* 10c54c91 jmp 0x10c54c9a */
  goto L_10c54c9a;
L_10c54c93:;
  /* 10c54c93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54c95 jmp 0x10c54e55 */
  goto L_10c54e55;
L_10c54c9a:;
  /* 10c54c9a cmp dword ptr [0x10c7e55c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e55c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54ca1 jne 0x10c54d9e */
  if (!C.zf) goto L_10c54d9e;
  /* 10c54ca7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54cab jne 0x10c54cc3 */
  if (!C.zf) goto L_10c54cc3;
  /* 10c54cad call dword ptr [0x10c80208] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80208))), 0x10c54cb3u);
  /* 10c54cb3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c54cb6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54cba jne 0x10c54cc3 */
  if (!C.zf) goto L_10c54cc3;
  /* 10c54cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54cbe jmp 0x10c54e55 */
  goto L_10c54e55;
L_10c54cc3:;
  /* 10c54cc3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c54cc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c54cc9:;
  /* 10c54cc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54ccc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c54cce mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10c54cd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c54cd3 je 0x10c54cf5 */
  if (C.zf) goto L_10c54cf5;
  /* 10c54cd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54cd8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54cdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c54cde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54ce1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c54ce3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10c54ce6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c54ce8 jne 0x10c54cf3 */
  if (!C.zf) goto L_10c54cf3;
  /* 10c54cea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54ced add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54cf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c54cf3:;
  /* 10c54cf3 jmp 0x10c54cc9 */
  goto L_10c54cc9;
L_10c54cf5:;
  /* 10c54cf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54cf8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54cfb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c54cfd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54d00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c54d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54d0e push edx */
  push32((uint32_t)(EDX));
  /* 10c54d0f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c54d12 push eax */
  push32((uint32_t)(EAX));
  /* 10c54d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d17 call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c54d1du);
  /* 10c54d1d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c54d20 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54d24 je 0x10c54d44 */
  if (C.zf) goto L_10c54d44;
  /* 10c54d26 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10c54d28 push 0x10c79ab4 */
  push32((uint32_t)(0x10c79ab4u));
  /* 10c54d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c54d2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54d32 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54d33 call 0x10c52670 */
  push32(0x10c54d38u); f_10c52670();
  /* 10c54d38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54d3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c54d3e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54d42 jne 0x10c54d55 */
  if (!C.zf) goto L_10c54d55;
L_10c54d44:;
  /* 10c54d44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c54d47 push edx */
  push32((uint32_t)(EDX));
  /* 10c54d48 call dword ptr [0x10c80298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80298))), 0x10c54d4eu);
  /* 10c54d4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54d50 jmp 0x10c54e55 */
  goto L_10c54e55;
L_10c54d55:;
  /* 10c54d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54d5c push eax */
  push32((uint32_t)(EAX));
  /* 10c54d5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c54d60 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54d64 push edx */
  push32((uint32_t)(EDX));
  /* 10c54d65 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c54d68 push eax */
  push32((uint32_t)(EAX));
  /* 10c54d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54d6d call dword ptr [0x10c8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8029c))), 0x10c54d73u);
  /* 10c54d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c54d75 jne 0x10c54d8c */
  if (!C.zf) goto L_10c54d8c;
  /* 10c54d77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c54d79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c54d7c push ecx */
  push32((uint32_t)(ECX));
  /* 10c54d7d call 0x10c53100 */
  push32(0x10c54d82u); f_10c53100();
  /* 10c54d82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54d85 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10c54d8c:;
  /* 10c54d8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c54d8f push edx */
  push32((uint32_t)(EDX));
  /* 10c54d90 call dword ptr [0x10c80298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80298))), 0x10c54d96u);
  /* 10c54d96 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c54d99 jmp 0x10c54e55 */
  goto L_10c54e55;
L_10c54d9e:;
  /* 10c54d9e cmp dword ptr [0x10c7e55c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e55c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54da5 jne 0x10c54e53 */
  if (!C.zf) goto L_10c54e53;
  /* 10c54dab cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54daf jne 0x10c54dc7 */
  if (!C.zf) goto L_10c54dc7;
  /* 10c54db1 call dword ptr [0x10c8020c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8020c))), 0x10c54db7u);
  /* 10c54db7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c54dba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54dbe jne 0x10c54dc7 */
  if (!C.zf) goto L_10c54dc7;
  /* 10c54dc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54dc2 jmp 0x10c54e55 */
  goto L_10c54e55;
L_10c54dc7:;
  /* 10c54dc7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c54dca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c54dcd:;
  /* 10c54dcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c54dd0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c54dd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c54dd5 je 0x10c54df5 */
  if (C.zf) goto L_10c54df5;
  /* 10c54dd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c54dda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54ddd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c54de0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c54de3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c54de6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c54de8 jne 0x10c54df3 */
  if (!C.zf) goto L_10c54df3;
  /* 10c54dea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c54ded add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54df0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c54df3:;
  /* 10c54df3 jmp 0x10c54dcd */
  goto L_10c54dcd;
L_10c54df5:;
  /* 10c54df5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c54df8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54dfb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54dfe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c54e01 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10c54e06 push 0x10c79ab4 */
  push32((uint32_t)(0x10c79ab4u));
  /* 10c54e0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c54e0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54e10 push edx */
  push32((uint32_t)(EDX));
  /* 10c54e11 call 0x10c52670 */
  push32(0x10c54e16u); f_10c52670();
  /* 10c54e16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54e19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c54e1c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54e20 jne 0x10c54e30 */
  if (!C.zf) goto L_10c54e30;
  /* 10c54e22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c54e25 push eax */
  push32((uint32_t)(EAX));
  /* 10c54e26 call dword ptr [0x10c80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80294))), 0x10c54e2cu);
  /* 10c54e2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54e2e jmp 0x10c54e55 */
  goto L_10c54e55;
L_10c54e30:;
  /* 10c54e30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c54e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54e34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c54e37 push edx */
  push32((uint32_t)(EDX));
  /* 10c54e38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c54e3b push eax */
  push32((uint32_t)(EAX));
  /* 10c54e3c call 0x10c58f50 */
  push32(0x10c54e41u); f_10c58f50();
  /* 10c54e41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54e44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c54e47 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54e48 call dword ptr [0x10c80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80294))), 0x10c54e4eu);
  /* 10c54e4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c54e51 jmp 0x10c54e55 */
  goto L_10c54e55;
L_10c54e53:;
  /* 10c54e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c54e55:;
  /* 10c54e55 mov esp, ebp */
  ESP = (EBP);
  /* 10c54e57 pop ebp */
  EBP = (pop32());
  /* 10c54e58 ret  */
  ESPCHK(0x10c54c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e60 @ 0x10c54e60 (77 bytes, 25 insns) */
void f_10c54e60(void) {
  FTRACE(0x10c54e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54e61 mov ebp, esp */
  EBP = (ESP);
  /* 10c54e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54e65 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c54e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54e6c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54e70 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10c54e73 push eax */
  push32((uint32_t)(EAX));
  /* 10c54e74 call dword ptr [0x10c802ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802ac))), 0x10c54e7au);
  /* 10c54e7a mov dword ptr [0x10c7fdac], eax */
  w32((uint32_t)(0x10c7fdac), (EAX));
  /* 10c54e7f cmp dword ptr [0x10c7fdac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7fdac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54e86 jne 0x10c54e8c */
  if (!C.zf) goto L_10c54e8c;
  /* 10c54e88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54e8a jmp 0x10c54eab */
  goto L_10c54eab;
L_10c54e8c:;
  /* 10c54e8c call 0x10c56910 */
  push32(0x10c54e91u); f_10c56910();
  /* 10c54e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c54e93 jne 0x10c54ea6 */
  if (!C.zf) goto L_10c54ea6;
  /* 10c54e95 mov ecx, dword ptr [0x10c7fdac] */
  ECX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c54e9b push ecx */
  push32((uint32_t)(ECX));
  /* 10c54e9c call dword ptr [0x10c802a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a8))), 0x10c54ea2u);
  /* 10c54ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c54ea4 jmp 0x10c54eab */
  goto L_10c54eab;
L_10c54ea6:;
  /* 10c54ea6 mov eax, 1 */
  EAX = (0x1u);
L_10c54eab:;
  /* 10c54eab pop ebp */
  EBP = (pop32());
  /* 10c54eac ret  */
  ESPCHK(0x10c54e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004eb0 @ 0x10c54eb0 (156 bytes, 48 insns) */
void f_10c54eb0(void) {
  FTRACE(0x10c54eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c54eb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54eb6 mov eax, dword ptr [0x10c7fda8] */
  EAX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c54ebb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c54ebe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c54ec5 jmp 0x10c54ed0 */
  goto L_10c54ed0;
L_10c54ec7:;
  /* 10c54ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54eca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54ecd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c54ed0:;
  /* 10c54ed0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c54ed3 cmp edx, dword ptr [0x10c7fda4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7fda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54ed9 jge 0x10c54f26 */
  if ((C.sf==C.of)) goto L_10c54f26;
  /* 10c54edb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10c54ee0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10c54ee5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54ee8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c54eeb push ecx */
  push32((uint32_t)(ECX));
  /* 10c54eec call dword ptr [0x10c802b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b4))), 0x10c54ef2u);
  /* 10c54ef2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c54ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54ef9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54efc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c54eff push eax */
  push32((uint32_t)(EAX));
  /* 10c54f00 call dword ptr [0x10c802b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b4))), 0x10c54f06u);
  /* 10c54f06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54f09 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c54f0c push edx */
  push32((uint32_t)(EDX));
  /* 10c54f0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54f0f mov eax, dword ptr [0x10c7fdac] */
  EAX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c54f14 push eax */
  push32((uint32_t)(EAX));
  /* 10c54f15 call dword ptr [0x10c802b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b0))), 0x10c54f1bu);
  /* 10c54f1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54f1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54f21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c54f24 jmp 0x10c54ec7 */
  goto L_10c54ec7;
L_10c54f26:;
  /* 10c54f26 mov edx, dword ptr [0x10c7fda8] */
  EDX = (r32((uint32_t)(0x10c7fda8)));
  /* 10c54f2c push edx */
  push32((uint32_t)(EDX));
  /* 10c54f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c54f2f mov eax, dword ptr [0x10c7fdac] */
  EAX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c54f34 push eax */
  push32((uint32_t)(EAX));
  /* 10c54f35 call dword ptr [0x10c802b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b0))), 0x10c54f3bu);
  /* 10c54f3b mov ecx, dword ptr [0x10c7fdac] */
  ECX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c54f41 push ecx */
  push32((uint32_t)(ECX));
  /* 10c54f42 call dword ptr [0x10c802a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802a8))), 0x10c54f48u);
  /* 10c54f48 mov esp, ebp */
  ESP = (EBP);
  /* 10c54f4a pop ebp */
  EBP = (pop32());
  /* 10c54f4b ret  */
  ESPCHK(0x10c54eb0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10c54f50 (73 bytes, 19 insns) */
void f_10c54f50(void) {
  FTRACE(0x10c54f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54f51 mov ebp, esp */
  EBP = (ESP);
  /* 10c54f53 cmp dword ptr [0x10c7e3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54f5a je 0x10c54f6e */
  if (C.zf) goto L_10c54f6e;
  /* 10c54f5c cmp dword ptr [0x10c7e3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54f63 jne 0x10c54f97 */
  if (!C.zf) goto L_10c54f97;
  /* 10c54f65 cmp dword ptr [0x10c7e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54f6c jne 0x10c54f97 */
  if (!C.zf) goto L_10c54f97;
L_10c54f6e:;
  /* 10c54f6e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10c54f73 call 0x10c54fa0 */
  push32(0x10c54f78u); f_10c54fa0();
  /* 10c54f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54f7b cmp dword ptr [0x10c7e560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54f82 je 0x10c54f8a */
  if (C.zf) goto L_10c54f8a;
  /* 10c54f84 call dword ptr [0x10c7e560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e560))), 0x10c54f8au);
L_10c54f8a:;
  /* 10c54f8a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10c54f8f call 0x10c54fa0 */
  push32(0x10c54f94u); f_10c54fa0();
  /* 10c54f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c54f97:;
  /* 10c54f97 pop ebp */
  EBP = (pop32());
  /* 10c54f98 ret  */
  ESPCHK(0x10c54f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fa0 @ 0x10c54fa0 (447 bytes, 131 insns) */
void f_10c54fa0(void) {
  FTRACE(0x10c54fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c54fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c54fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10c54fa3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c54fa9 push ebx */
  push32((uint32_t)(EBX));
  /* 10c54faa push esi */
  push32((uint32_t)(ESI));
  /* 10c54fab push edi */
  push32((uint32_t)(EDI));
  /* 10c54fac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c54fb3 jmp 0x10c54fbe */
  goto L_10c54fbe;
L_10c54fb5:;
  /* 10c54fb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54fb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c54fbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c54fbe:;
  /* 10c54fbe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54fc2 jae 0x10c54fd7 */
  if (!C.cf) goto L_10c54fd7;
  /* 10c54fc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54fc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c54fca cmp edx, dword ptr [ecx*8 + 0x10c7cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10c7cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54fd1 jne 0x10c54fd5 */
  if (!C.zf) goto L_10c54fd5;
  /* 10c54fd3 jmp 0x10c54fd7 */
  goto L_10c54fd7;
L_10c54fd5:;
  /* 10c54fd5 jmp 0x10c54fb5 */
  goto L_10c54fb5;
L_10c54fd7:;
  /* 10c54fd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54fda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c54fdd cmp ecx, dword ptr [eax*8 + 0x10c7cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10c7cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54fe4 jne 0x10c55158 */
  if (!C.zf) goto L_10c55158;
  /* 10c54fea cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c54ff1 je 0x10c55014 */
  if (C.zf) goto L_10c55014;
  /* 10c54ff3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c54ff6 mov eax, dword ptr [edx*8 + 0x10c7cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10c7cab4)));
  /* 10c54ffd push eax */
  push32((uint32_t)(EAX));
  /* 10c54ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55000 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55002 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55004 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55006 call 0x10c51730 */
  push32(0x10c5500bu); f_10c51730();
  /* 10c5500b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5500e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55011 jne 0x10c55014 */
  if (!C.zf) goto L_10c55014;
  /* 10c55013 int3  */
  x86_unimpl("int3 @ 0x10c55013");
L_10c55014:;
  /* 10c55014 cmp dword ptr [0x10c7e3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5501b je 0x10c5502f */
  if (C.zf) goto L_10c5502f;
  /* 10c5501d cmp dword ptr [0x10c7e3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55024 jne 0x10c55068 */
  if (!C.zf) goto L_10c55068;
  /* 10c55026 cmp dword ptr [0x10c7e3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5502d jne 0x10c55068 */
  if (!C.zf) goto L_10c55068;
L_10c5502f:;
  /* 10c5502f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55031 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10c55034 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55035 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55038 mov eax, dword ptr [edx*8 + 0x10c7cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10c7cab4)));
  /* 10c5503f push eax */
  push32((uint32_t)(EAX));
  /* 10c55040 call 0x10c554a0 */
  push32(0x10c55045u); f_10c554a0();
  /* 10c55045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55048 push eax */
  push32((uint32_t)(EAX));
  /* 10c55049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5504c mov edx, dword ptr [ecx*8 + 0x10c7cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10c7cab4)));
  /* 10c55053 push edx */
  push32((uint32_t)(EDX));
  /* 10c55054 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c55056 call dword ptr [0x10c8022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8022c))), 0x10c5505cu);
  /* 10c5505c push eax */
  push32((uint32_t)(EAX));
  /* 10c5505d call dword ptr [0x10c80230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80230))), 0x10c55063u);
  /* 10c55063 jmp 0x10c55158 */
  goto L_10c55158;
L_10c55068:;
  /* 10c55068 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5506f je 0x10c55158 */
  if (C.zf) goto L_10c55158;
  /* 10c55075 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10c5507a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10c55080 push eax */
  push32((uint32_t)(EAX));
  /* 10c55081 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55083 call dword ptr [0x10c80248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80248))), 0x10c55089u);
  /* 10c55089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5508b jne 0x10c550a1 */
  if (!C.zf) goto L_10c550a1;
  /* 10c5508d push 0x10c7931c */
  push32((uint32_t)(0x10c7931cu));
  /* 10c55092 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10c55098 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55099 call 0x10c55620 */
  push32(0x10c5509eu); f_10c55620();
  /* 10c5509e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c550a1:;
  /* 10c550a1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10c550a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c550aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c550ad push eax */
  push32((uint32_t)(EAX));
  /* 10c550ae call 0x10c554a0 */
  push32(0x10c550b3u); f_10c554a0();
  /* 10c550b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c550b6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c550b9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c550bc jbe 0x10c550ea */
  if ((C.cf||C.zf)) goto L_10c550ea;
  /* 10c550be lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10c550c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c550c5 call 0x10c554a0 */
  push32(0x10c550cau); f_10c554a0();
  /* 10c550ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c550cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c550d0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10c550d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c550d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c550d9 push 0x10c79318 */
  push32((uint32_t)(0x10c79318u));
  /* 10c550de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c550e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c550e2 call 0x10c55e90 */
  push32(0x10c550e7u); f_10c55e90();
  /* 10c550e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c550ea:;
  /* 10c550ea push 0x10c79d70 */
  push32((uint32_t)(0x10c79d70u));
  /* 10c550ef lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10c550f5 push edx */
  push32((uint32_t)(EDX));
  /* 10c550f6 call 0x10c55620 */
  push32(0x10c550fbu); f_10c55620();
  /* 10c550fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c550fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c55101 push eax */
  push32((uint32_t)(EAX));
  /* 10c55102 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10c55108 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55109 call 0x10c55630 */
  push32(0x10c5510eu); f_10c55630();
  /* 10c5510e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55111 push 0x10c79290 */
  push32((uint32_t)(0x10c79290u));
  /* 10c55116 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10c5511c push edx */
  push32((uint32_t)(EDX));
  /* 10c5511d call 0x10c55630 */
  push32(0x10c55122u); f_10c55630();
  /* 10c55122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55128 mov ecx, dword ptr [eax*8 + 0x10c7cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10c7cab4)));
  /* 10c5512f push ecx */
  push32((uint32_t)(ECX));
  /* 10c55130 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10c55136 push edx */
  push32((uint32_t)(EDX));
  /* 10c55137 call 0x10c55630 */
  push32(0x10c5513cu); f_10c55630();
  /* 10c5513c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5513f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10c55144 push 0x10c79d48 */
  push32((uint32_t)(0x10c79d48u));
  /* 10c55149 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10c5514f push eax */
  push32((uint32_t)(EAX));
  /* 10c55150 call 0x10c55dd0 */
  push32(0x10c55155u); f_10c55dd0();
  /* 10c55155 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c55158:;
  /* 10c55158 pop edi */
  EDI = (pop32());
  /* 10c55159 pop esi */
  ESI = (pop32());
  /* 10c5515a pop ebx */
  EBX = (pop32());
  /* 10c5515b mov esp, ebp */
  ESP = (EBP);
  /* 10c5515d pop ebp */
  EBP = (pop32());
  /* 10c5515e ret  */
  ESPCHK(0x10c54fa0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10c55160 (80 bytes, 27 insns) */
void f_10c55160(void) {
  FTRACE(0x10c55160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55160 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55161 mov ebp, esp */
  EBP = (ESP);
  /* 10c55163 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55164 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c5516b jmp 0x10c55176 */
  goto L_10c55176;
L_10c5516d:;
  /* 10c5516d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55170 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55173 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c55176:;
  /* 10c55176 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5517a jae 0x10c5518f */
  if (!C.cf) goto L_10c5518f;
  /* 10c5517c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5517f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55182 cmp edx, dword ptr [ecx*8 + 0x10c7cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10c7cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55189 jne 0x10c5518d */
  if (!C.zf) goto L_10c5518d;
  /* 10c5518b jmp 0x10c5518f */
  goto L_10c5518f;
L_10c5518d:;
  /* 10c5518d jmp 0x10c5516d */
  goto L_10c5516d;
L_10c5518f:;
  /* 10c5518f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55195 cmp ecx, dword ptr [eax*8 + 0x10c7cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10c7cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5519c jne 0x10c551aa */
  if (!C.zf) goto L_10c551aa;
  /* 10c5519e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c551a1 mov eax, dword ptr [edx*8 + 0x10c7cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10c7cab4)));
  /* 10c551a8 jmp 0x10c551ac */
  goto L_10c551ac;
L_10c551aa:;
  /* 10c551aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c551ac:;
  /* 10c551ac mov esp, ebp */
  ESP = (EBP);
  /* 10c551ae pop ebp */
  EBP = (pop32());
  /* 10c551af ret  */
  ESPCHK(0x10c55160u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10c551b0 (66 bytes, 28 insns) */
void f_10c551b0(void) {
  FTRACE(0x10c551b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c551b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c551b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c551b3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c551b7 jne 0x10c551d7 */
  if (!C.zf) goto L_10c551d7;
  /* 10c551b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c551bd jge 0x10c551d7 */
  if ((C.sf==C.of)) goto L_10c551d7;
  /* 10c551bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10c551c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c551c4 push eax */
  push32((uint32_t)(EAX));
  /* 10c551c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c551c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c551c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c551cc push edx */
  push32((uint32_t)(EDX));
  /* 10c551cd call 0x10c55200 */
  push32(0x10c551d2u); f_10c55200();
  /* 10c551d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c551d5 jmp 0x10c551ed */
  goto L_10c551ed;
L_10c551d7:;
  /* 10c551d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c551d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c551dc push eax */
  push32((uint32_t)(EAX));
  /* 10c551dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c551e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c551e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c551e4 push edx */
  push32((uint32_t)(EDX));
  /* 10c551e5 call 0x10c55200 */
  push32(0x10c551eau); f_10c55200();
  /* 10c551ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c551ed:;
  /* 10c551ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c551f0 pop ebp */
  EBP = (pop32());
  /* 10c551f1 ret  */
  ESPCHK(0x10c551b0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10c55200 (194 bytes, 71 insns) */
void f_10c55200(void) {
  FTRACE(0x10c55200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55200 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55201 mov ebp, esp */
  EBP = (ESP);
  /* 10c55203 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55206 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55209 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5520c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55210 je 0x10c55229 */
  if (C.zf) goto L_10c55229;
  /* 10c55212 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55215 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10c55218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5521b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5521e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c55221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55224 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c55226 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c55229:;
  /* 10c55229 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5522c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c5522f:;
  /* 10c5522f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55232 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c55234 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c55237 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c5523a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5523d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5523f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c55242 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c55245 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55249 jbe 0x10c55261 */
  if ((C.cf||C.zf)) goto L_10c55261;
  /* 10c5524b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5524e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55254 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c55256 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55259 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5525c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c5525f jmp 0x10c55275 */
  goto L_10c55275;
L_10c55261:;
  /* 10c55261 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c55264 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5526a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c5526c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5526f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55272 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c55275:;
  /* 10c55275 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55279 ja 0x10c5522f */
  if ((!C.cf&&!C.zf)) goto L_10c5522f;
  /* 10c5527b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5527e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c55281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55284 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55287 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5528a:;
  /* 10c5528a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5528d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5528f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10c55292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55295 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55298 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5529a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c5529c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5529f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10c552a2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c552a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c552a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c552aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c552ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c552b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c552b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c552b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c552b9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c552bc jb 0x10c5528a */
  if (C.cf) goto L_10c5528a;
  /* 10c552be mov esp, ebp */
  ESP = (EBP);
  /* 10c552c0 pop ebp */
  EBP = (pop32());
  /* 10c552c1 ret  */
  ESPCHK(0x10c55200u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10c552d0 (63 bytes, 24 insns) */
void f_10c552d0(void) {
  FTRACE(0x10c552d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c552d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c552d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c552d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c552d4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c552d8 jne 0x10c552e9 */
  if (!C.zf) goto L_10c552e9;
  /* 10c552da cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c552de jge 0x10c552e9 */
  if ((C.sf==C.of)) goto L_10c552e9;
  /* 10c552e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c552e7 jmp 0x10c552f0 */
  goto L_10c552f0;
L_10c552e9:;
  /* 10c552e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c552f0:;
  /* 10c552f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c552f3 push eax */
  push32((uint32_t)(EAX));
  /* 10c552f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c552f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c552f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c552fb push edx */
  push32((uint32_t)(EDX));
  /* 10c552fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c552ff push eax */
  push32((uint32_t)(EAX));
  /* 10c55300 call 0x10c55200 */
  push32(0x10c55305u); f_10c55200();
  /* 10c55305 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5530b mov esp, ebp */
  ESP = (EBP);
  /* 10c5530d pop ebp */
  EBP = (pop32());
  /* 10c5530e ret  */
  ESPCHK(0x10c552d0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10c55310 (30 bytes, 14 insns) */
void f_10c55310(void) {
  FTRACE(0x10c55310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55310 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55311 mov ebp, esp */
  EBP = (ESP);
  /* 10c55313 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55315 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c55318 push eax */
  push32((uint32_t)(EAX));
  /* 10c55319 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5531c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5531d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55320 push edx */
  push32((uint32_t)(EDX));
  /* 10c55321 call 0x10c55200 */
  push32(0x10c55326u); f_10c55200();
  /* 10c55326 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55329 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5532c pop ebp */
  EBP = (pop32());
  /* 10c5532d ret  */
  ESPCHK(0x10c55310u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10c55330 (72 bytes, 28 insns) */
void f_10c55330(void) {
  FTRACE(0x10c55330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55330 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55331 mov ebp, esp */
  EBP = (ESP);
  /* 10c55333 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55334 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55338 jne 0x10c55351 */
  if (!C.zf) goto L_10c55351;
  /* 10c5533a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5533e jg 0x10c55351 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c55351;
  /* 10c55340 jl 0x10c55348 */
  if ((C.sf!=C.of)) goto L_10c55348;
  /* 10c55342 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55346 jae 0x10c55351 */
  if (!C.cf) goto L_10c55351;
L_10c55348:;
  /* 10c55348 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c5534f jmp 0x10c55358 */
  goto L_10c55358;
L_10c55351:;
  /* 10c55351 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c55358:;
  /* 10c55358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5535b push eax */
  push32((uint32_t)(EAX));
  /* 10c5535c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5535f push ecx */
  push32((uint32_t)(ECX));
  /* 10c55360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c55363 push edx */
  push32((uint32_t)(EDX));
  /* 10c55364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55367 push eax */
  push32((uint32_t)(EAX));
  /* 10c55368 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5536b push ecx */
  push32((uint32_t)(ECX));
  /* 10c5536c call 0x10c55380 */
  push32(0x10c55371u); f_10c55380();
  /* 10c55371 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c55374 mov esp, ebp */
  ESP = (EBP);
  /* 10c55376 pop ebp */
  EBP = (pop32());
  /* 10c55377 ret  */
  ESPCHK(0x10c55330u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10c55380 (242 bytes, 91 insns) */
void f_10c55380(void) {
  FTRACE(0x10c55380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55380 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55381 mov ebp, esp */
  EBP = (ESP);
  /* 10c55383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55386 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c55389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5538c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55390 je 0x10c553b4 */
  if (C.zf) goto L_10c553b4;
  /* 10c55392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55395 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10c55398 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5539b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5539e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c553a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c553a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c553a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c553a9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c553ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c553ae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c553b1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c553b4:;
  /* 10c553b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c553b7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c553ba:;
  /* 10c553ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c553bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c553bf push ecx */
  push32((uint32_t)(ECX));
  /* 10c553c0 push eax */
  push32((uint32_t)(EAX));
  /* 10c553c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c553c4 push edx */
  push32((uint32_t)(EDX));
  /* 10c553c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c553c8 push eax */
  push32((uint32_t)(EAX));
  /* 10c553c9 call 0x10c59300 */
  push32(0x10c553ceu); f_10c59300();
  /* 10c553ce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c553d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c553d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c553d6 push edx */
  push32((uint32_t)(EDX));
  /* 10c553d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c553d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c553db push eax */
  push32((uint32_t)(EAX));
  /* 10c553dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c553df push ecx */
  push32((uint32_t)(ECX));
  /* 10c553e0 call 0x10c59290 */
  push32(0x10c553e5u); f_10c59290();
  /* 10c553e5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c553e8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10c553eb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c553ef jbe 0x10c55407 */
  if ((C.cf||C.zf)) goto L_10c55407;
  /* 10c553f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c553f4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c553f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c553fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c553fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c553ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55402 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c55405 jmp 0x10c5541b */
  goto L_10c5541b;
L_10c55407:;
  /* 10c55407 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c5540a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5540d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55410 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c55412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55415 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55418 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c5541b:;
  /* 10c5541b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5541f ja 0x10c553ba */
  if ((!C.cf&&!C.zf)) goto L_10c553ba;
  /* 10c55421 jb 0x10c55429 */
  if (C.cf) goto L_10c55429;
  /* 10c55423 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55427 ja 0x10c553ba */
  if ((!C.cf&&!C.zf)) goto L_10c553ba;
L_10c55429:;
  /* 10c55429 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5542c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c5542f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55432 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55435 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c55438:;
  /* 10c55438 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5543b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5543d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10c55440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55443 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55446 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c55448 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c5544a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5544d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10c55450 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c55452 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55455 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55458 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c5545b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5545e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55461 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c55464 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55467 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5546a jb 0x10c55438 */
  if (C.cf) goto L_10c55438;
  /* 10c5546c mov esp, ebp */
  ESP = (EBP);
  /* 10c5546e pop ebp */
  EBP = (pop32());
  /* 10c5546f ret 0x14 */
  ESPCHK(0x10c55380u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10c55480 (31 bytes, 15 insns) */
void f_10c55480(void) {
  FTRACE(0x10c55480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55480 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55481 mov ebp, esp */
  EBP = (ESP);
  /* 10c55483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55485 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c55488 push eax */
  push32((uint32_t)(EAX));
  /* 10c55489 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5548c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5548d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55490 push edx */
  push32((uint32_t)(EDX));
  /* 10c55491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55494 push eax */
  push32((uint32_t)(EAX));
  /* 10c55495 call 0x10c55380 */
  push32(0x10c5549au); f_10c55380();
  /* 10c5549a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5549d pop ebp */
  EBP = (pop32());
  /* 10c5549e ret  */
  ESPCHK(0x10c55480u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10c554a0 (123 bytes, 44 insns) */
void f_10c554a0(void) {
  FTRACE(0x10c554a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c554a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c554a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c554aa je 0x10c554c0 */
  if (C.zf) goto L_10c554c0;
L_10c554ac:;
  /* 10c554ac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10c554ae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c554af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c554b1 je 0x10c554f3 */
  if (C.zf) goto L_10c554f3;
  /* 10c554b3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c554b9 jne 0x10c554ac */
  if (!C.zf) goto L_10c554ac;
  /* 10c554bb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10c554c0:;
  /* 10c554c0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c554c2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c554c7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c554c9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c554cc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c554ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c554d1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c554d6 je 0x10c554c0 */
  if (C.zf) goto L_10c554c0;
  /* 10c554d8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c554db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c554dd je 0x10c55511 */
  if (C.zf) goto L_10c55511;
  /* 10c554df test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c554e1 je 0x10c55507 */
  if (C.zf) goto L_10c55507;
  /* 10c554e3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c554e8 je 0x10c554fd */
  if (C.zf) goto L_10c554fd;
  /* 10c554ea test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c554ef je 0x10c554f3 */
  if (C.zf) goto L_10c554f3;
  /* 10c554f1 jmp 0x10c554c0 */
  goto L_10c554c0;
L_10c554f3:;
  /* 10c554f3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10c554f6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c554fa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c554fc ret  */
  ESPCHK(0x10c554a0u, _esp0);
  ESP += 4; return;
L_10c554fd:;
  /* 10c554fd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10c55500 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c55504 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55506 ret  */
  ESPCHK(0x10c554a0u, _esp0);
  ESP += 4; return;
L_10c55507:;
  /* 10c55507 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10c5550a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c5550e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55510 ret  */
  ESPCHK(0x10c554a0u, _esp0);
  ESP += 4; return;
L_10c55511:;
  /* 10c55511 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10c55514 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c55518 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c5551a ret  */
  ESPCHK(0x10c554a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x10c55520 (249 bytes, 93 insns) */
void f_10c55520(void) {
  FTRACE(0x10c55520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55520 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55521 mov ebp, esp */
  EBP = (ESP);
  /* 10c55523 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55526 push ebx */
  push32((uint32_t)(EBX));
  /* 10c55527 push esi */
  push32((uint32_t)(ESI));
  /* 10c55528 push edi */
  push32((uint32_t)(EDI));
  /* 10c55529 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10c5552c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c5552f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10c55532 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10c55535:;
  /* 10c55535 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55539 jne 0x10c55559 */
  if (!C.zf) goto L_10c55559;
  /* 10c5553b push 0x10c79da8 */
  push32((uint32_t)(0x10c79da8u));
  /* 10c55540 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55542 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10c55544 push 0x10c79d9c */
  push32((uint32_t)(0x10c79d9cu));
  /* 10c55549 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5554b call 0x10c51730 */
  push32(0x10c55550u); f_10c51730();
  /* 10c55550 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55553 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55556 jne 0x10c55559 */
  if (!C.zf) goto L_10c55559;
  /* 10c55558 int3  */
  x86_unimpl("int3 @ 0x10c55558");
L_10c55559:;
  /* 10c55559 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5555b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c5555d jne 0x10c55535 */
  if (!C.zf) goto L_10c55535;
L_10c5555f:;
  /* 10c5555f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55563 jne 0x10c55583 */
  if (!C.zf) goto L_10c55583;
  /* 10c55565 push 0x10c79d8c */
  push32((uint32_t)(0x10c79d8cu));
  /* 10c5556a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5556c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10c5556e push 0x10c79d9c */
  push32((uint32_t)(0x10c79d9cu));
  /* 10c55573 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c55575 call 0x10c51730 */
  push32(0x10c5557au); f_10c51730();
  /* 10c5557a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5557d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55580 jne 0x10c55583 */
  if (!C.zf) goto L_10c55583;
  /* 10c55582 int3  */
  x86_unimpl("int3 @ 0x10c55582");
L_10c55583:;
  /* 10c55583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c55585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c55587 jne 0x10c5555f */
  if (!C.zf) goto L_10c5555f;
  /* 10c55589 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5558c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10c55593 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c55596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55599 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c5559c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c5559f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c555a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c555a4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c555a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c555aa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c555ad mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c555b0 push edx */
  push32((uint32_t)(EDX));
  /* 10c555b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c555b4 push eax */
  push32((uint32_t)(EAX));
  /* 10c555b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c555b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c555b9 call 0x10c59600 */
  push32(0x10c555beu); f_10c59600();
  /* 10c555be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c555c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c555c4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c555c7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c555ca sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c555cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c555d0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c555d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c555d6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c555da jl 0x10c555fe */
  if ((C.sf!=C.of)) goto L_10c555fe;
  /* 10c555dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c555df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c555e1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c555e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c555e6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c555ec mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10c555ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c555f2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c555f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c555f7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c555fa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c555fc jmp 0x10c5560f */
  goto L_10c5560f;
L_10c555fe:;
  /* 10c555fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c55601 push eax */
  push32((uint32_t)(EAX));
  /* 10c55602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55604 call 0x10c59380 */
  push32(0x10c55609u); f_10c59380();
  /* 10c55609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5560c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10c5560f:;
  /* 10c5560f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c55612 pop edi */
  EDI = (pop32());
  /* 10c55613 pop esi */
  ESI = (pop32());
  /* 10c55614 pop ebx */
  EBX = (pop32());
  /* 10c55615 mov esp, ebp */
  ESP = (EBP);
  /* 10c55617 pop ebp */
  EBP = (pop32());
  /* 10c55618 ret  */
  ESPCHK(0x10c55520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005620 @ 0x10c55620 (7 bytes, 3 insns) */
void f_10c55620(void) {
  FTRACE(0x10c55620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55620 push edi */
  push32((uint32_t)(EDI));
  /* 10c55621 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10c55625 jmp 0x10c55691 */
  jmp_ind(0x10c55691u); return;
}

/* FUN_10005630 @ 0x10c55630 (224 bytes, 84 insns) */
void f_10c55630(void) {
  FTRACE(0x10c55630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55630 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c55634 push edi */
  push32((uint32_t)(EDI));
  /* 10c55635 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c5563b je 0x10c5564c */
  if (C.zf) goto L_10c5564c;
L_10c5563d:;
  /* 10c5563d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10c5563f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c55640 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c55642 je 0x10c5567f */
  if (C.zf) goto L_10c5567f;
  /* 10c55644 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c5564a jne 0x10c5563d */
  if (!C.zf) goto L_10c5563d;
L_10c5564c:;
  /* 10c5564c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c5564e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c55653 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55655 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c55658 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5565a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5565d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c55662 je 0x10c5564c */
  if (C.zf) goto L_10c5564c;
  /* 10c55664 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c55667 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c55669 je 0x10c5568e */
  if (C.zf) goto L_10c5568e;
  /* 10c5566b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c5566d je 0x10c55689 */
  if (C.zf) goto L_10c55689;
  /* 10c5566f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c55674 je 0x10c55684 */
  if (C.zf) goto L_10c55684;
  /* 10c55676 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c5567b je 0x10c5567f */
  if (C.zf) goto L_10c5567f;
  /* 10c5567d jmp 0x10c5564c */
  goto L_10c5564c;
L_10c5567f:;
  /* 10c5567f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10c55682 jmp 0x10c55691 */
  goto L_10c55691;
L_10c55684:;
  /* 10c55684 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10c55687 jmp 0x10c55691 */
  goto L_10c55691;
L_10c55689:;
  /* 10c55689 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10c5568c jmp 0x10c55691 */
  goto L_10c55691;
L_10c5568e:;
  /* 10c5568e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10c55691:;
  /* 10c55691 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c55695 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c5569b je 0x10c556b6 */
  if (C.zf) goto L_10c556b6;
L_10c5569d:;
  /* 10c5569d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c5569f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c556a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10c556a2 je 0x10c55708 */
  if (C.zf) goto L_10c55708;
  /* 10c556a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10c556a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c556a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c556ad jne 0x10c5569d */
  if (!C.zf) goto L_10c5569d;
  /* 10c556af jmp 0x10c556b6 */
  goto L_10c556b6;
L_10c556b1:;
  /* 10c556b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c556b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c556b6:;
  /* 10c556b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c556bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c556bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c556bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c556c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c556c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c556c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c556c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c556ce je 0x10c556b1 */
  if (C.zf) goto L_10c556b1;
  /* 10c556d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10c556d2 je 0x10c55708 */
  if (C.zf) goto L_10c55708;
  /* 10c556d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10c556d6 je 0x10c556ff */
  if (C.zf) goto L_10c556ff;
  /* 10c556d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c556de je 0x10c556f2 */
  if (C.zf) goto L_10c556f2;
  /* 10c556e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c556e6 je 0x10c556ea */
  if (C.zf) goto L_10c556ea;
  /* 10c556e8 jmp 0x10c556b1 */
  goto L_10c556b1;
L_10c556ea:;
  /* 10c556ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c556ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c556f0 pop edi */
  EDI = (pop32());
  /* 10c556f1 ret  */
  ESPCHK(0x10c55630u, _esp0);
  ESP += 4; return;
L_10c556f2:;
  /* 10c556f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10c556f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c556f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10c556fd pop edi */
  EDI = (pop32());
  /* 10c556fe ret  */
  ESPCHK(0x10c55630u, _esp0);
  ESP += 4; return;
L_10c556ff:;
  /* 10c556ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10c55702 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c55706 pop edi */
  EDI = (pop32());
  /* 10c55707 ret  */
  ESPCHK(0x10c55630u, _esp0);
  ESP += 4; return;
L_10c55708:;
  /* 10c55708 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10c5570a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c5570e pop edi */
  EDI = (pop32());
  /* 10c5570f ret  */
  ESPCHK(0x10c55630u, _esp0);
  ESP += 4; return;
}

/* FUN_10005710 @ 0x10c55710 (243 bytes, 91 insns) */
void f_10c55710(void) {
  FTRACE(0x10c55710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55710 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55711 mov ebp, esp */
  EBP = (ESP);
  /* 10c55713 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55716 push ebx */
  push32((uint32_t)(EBX));
  /* 10c55717 push esi */
  push32((uint32_t)(ESI));
  /* 10c55718 push edi */
  push32((uint32_t)(EDI));
  /* 10c55719 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10c5571c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c5571f:;
  /* 10c5571f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55723 jne 0x10c55743 */
  if (!C.zf) goto L_10c55743;
  /* 10c55725 push 0x10c79da8 */
  push32((uint32_t)(0x10c79da8u));
  /* 10c5572a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5572c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10c5572e push 0x10c79db8 */
  push32((uint32_t)(0x10c79db8u));
  /* 10c55733 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c55735 call 0x10c51730 */
  push32(0x10c5573au); f_10c51730();
  /* 10c5573a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5573d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55740 jne 0x10c55743 */
  if (!C.zf) goto L_10c55743;
  /* 10c55742 int3  */
  x86_unimpl("int3 @ 0x10c55742");
L_10c55743:;
  /* 10c55743 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c55745 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c55747 jne 0x10c5571f */
  if (!C.zf) goto L_10c5571f;
L_10c55749:;
  /* 10c55749 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5574d jne 0x10c5576d */
  if (!C.zf) goto L_10c5576d;
  /* 10c5574f push 0x10c79d8c */
  push32((uint32_t)(0x10c79d8cu));
  /* 10c55754 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c55756 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10c55758 push 0x10c79db8 */
  push32((uint32_t)(0x10c79db8u));
  /* 10c5575d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5575f call 0x10c51730 */
  push32(0x10c55764u); f_10c51730();
  /* 10c55764 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55767 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5576a jne 0x10c5576d */
  if (!C.zf) goto L_10c5576d;
  /* 10c5576c int3  */
  x86_unimpl("int3 @ 0x10c5576c");
L_10c5576d:;
  /* 10c5576d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c5576f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c55771 jne 0x10c55749 */
  if (!C.zf) goto L_10c55749;
  /* 10c55773 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c55776 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10c5577d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c55780 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55783 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c55786 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c55789 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5578c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c5578e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c55791 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55794 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c55797 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c5579a push ecx */
  push32((uint32_t)(ECX));
  /* 10c5579b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c5579e push edx */
  push32((uint32_t)(EDX));
  /* 10c5579f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c557a2 push eax */
  push32((uint32_t)(EAX));
  /* 10c557a3 call 0x10c59600 */
  push32(0x10c557a8u); f_10c59600();
  /* 10c557a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c557ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c557ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c557b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c557b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c557b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c557ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c557bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c557c0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c557c4 jl 0x10c557e8 */
  if ((C.sf!=C.of)) goto L_10c557e8;
  /* 10c557c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c557c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c557cb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c557ce xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c557d0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c557d6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c557d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c557dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c557de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c557e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c557e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c557e6 jmp 0x10c557f9 */
  goto L_10c557f9;
L_10c557e8:;
  /* 10c557e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c557eb push edx */
  push32((uint32_t)(EDX));
  /* 10c557ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10c557ee call 0x10c59380 */
  push32(0x10c557f3u); f_10c59380();
  /* 10c557f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c557f6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10c557f9:;
  /* 10c557f9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c557fc pop edi */
  EDI = (pop32());
  /* 10c557fd pop esi */
  ESI = (pop32());
  /* 10c557fe pop ebx */
  EBX = (pop32());
  /* 10c557ff mov esp, ebp */
  ESP = (EBP);
  /* 10c55801 pop ebp */
  EBP = (pop32());
  /* 10c55802 ret  */
  ESPCHK(0x10c55710u, _esp0);
  ESP += 4; return;
}

/* FUN_10005810 @ 0x10c55810 (47 bytes, 17 insns) */
void f_10c55810(void) {
  FTRACE(0x10c55810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55810 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55811 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55816 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10c5581a jb 0x10c55830 */
  if (C.cf) goto L_10c55830;
L_10c5581c:;
  /* 10c5581c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55822 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55827 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10c55829 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5582e jae 0x10c5581c */
  if (!C.cf) goto L_10c5581c;
L_10c55830:;
  /* 10c55830 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55832 mov eax, esp */
  EAX = (ESP);
  /* 10c55834 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10c55836 mov esp, ecx */
  ESP = (ECX);
  /* 10c55838 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c5583a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c5583d push eax */
  push32((uint32_t)(EAX));
  /* 10c5583e ret  */
  ESPCHK(0x10c55810u, _esp0);
  ESP += 4; return;
}

/* FUN_10005840 @ 0x10c55840 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10c55840(void) {
  FTRACE(0x10c55840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55840 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55841 mov ebp, esp */
  EBP = (ESP);
  /* 10c55843 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55846 push esi */
  push32((uint32_t)(ESI));
  /* 10c55847 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5584b je 0x10c55853 */
  if (C.zf) goto L_10c55853;
  /* 10c5584d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55851 jne 0x10c55858 */
  if (!C.zf) goto L_10c55858;
L_10c55853:;
  /* 10c55853 jmp 0x10c55a28 */
  goto L_10c55a28;
L_10c55858:;
  /* 10c55858 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5585c je 0x10c55874 */
  if (C.zf) goto L_10c55874;
  /* 10c5585e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55862 je 0x10c55874 */
  if (C.zf) goto L_10c55874;
  /* 10c55864 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55868 je 0x10c55874 */
  if (C.zf) goto L_10c55874;
  /* 10c5586a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5586e jne 0x10c55951 */
  if (!C.zf) goto L_10c55951;
L_10c55874:;
  /* 10c55874 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55876 call 0x10c56070 */
  push32(0x10c5587bu); f_10c56070();
  /* 10c5587b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5587e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55882 je 0x10c5588a */
  if (C.zf) goto L_10c5588a;
  /* 10c55884 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55888 jne 0x10c558cf */
  if (!C.zf) goto L_10c558cf;
L_10c5588a:;
  /* 10c5588a cmp dword ptr [0x10c7e574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55891 jne 0x10c558cf */
  if (!C.zf) goto L_10c558cf;
  /* 10c55893 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55895 push 0x10c55a70 */
  push32((uint32_t)(0x10c55a70u));
  /* 10c5589a call dword ptr [0x10c802b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b8))), 0x10c558a0u);
  /* 10c558a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c558a3 jne 0x10c558b1 */
  if (!C.zf) goto L_10c558b1;
  /* 10c558a5 mov dword ptr [0x10c7e574], 1 */
  w32((uint32_t)(0x10c7e574), (0x1u));
  /* 10c558af jmp 0x10c558cf */
  goto L_10c558cf;
L_10c558b1:;
  /* 10c558b1 call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c558b7u);
  /* 10c558b7 mov esi, eax */
  ESI = (EAX);
  /* 10c558b9 call 0x10c5a550 */
  push32(0x10c558beu); f_10c5a550();
  /* 10c558be mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10c558c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c558c2 call 0x10c56110 */
  push32(0x10c558c7u); f_10c56110();
  /* 10c558c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c558ca jmp 0x10c55a28 */
  goto L_10c55a28;
L_10c558cf:;
  /* 10c558cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c558d2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c558d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c558d8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c558db mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c558de cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c558e2 ja 0x10c55942 */
  if ((!C.cf&&!C.zf)) goto L_10c55942;
  /* 10c558e4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c558e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c558e9 mov dl, byte ptr [eax + 0x10c55a4f] */
  DL = (r8((uint32_t)(EAX + 0x10c55a4f)));
  /* 10c558ef jmp dword ptr [edx*4 + 0x10c55a3b] */
  switch (EDX) {
    case 0: goto L_10c558f6;
    case 1: goto L_10c55930;
    case 2: goto L_10c5590a;
    case 3: goto L_10c5591d;
    case 4: goto L_10c55942;
    default: x86_unimpl("switch@0x10c558ef out of table"); return;
  }
L_10c558f6:;
  /* 10c558f6 mov ecx, dword ptr [0x10c7e564] */
  ECX = (r32((uint32_t)(0x10c7e564)));
  /* 10c558fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c558ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55902 mov dword ptr [0x10c7e564], edx */
  w32((uint32_t)(0x10c7e564), (EDX));
  /* 10c55908 jmp 0x10c55942 */
  goto L_10c55942;
L_10c5590a:;
  /* 10c5590a mov eax, dword ptr [0x10c7e568] */
  EAX = (r32((uint32_t)(0x10c7e568)));
  /* 10c5590f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c55912 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55915 mov dword ptr [0x10c7e568], ecx */
  w32((uint32_t)(0x10c7e568), (ECX));
  /* 10c5591b jmp 0x10c55942 */
  goto L_10c55942;
L_10c5591d:;
  /* 10c5591d mov edx, dword ptr [0x10c7e56c] */
  EDX = (r32((uint32_t)(0x10c7e56c)));
  /* 10c55923 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c55926 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55929 mov dword ptr [0x10c7e56c], eax */
  w32((uint32_t)(0x10c7e56c), (EAX));
  /* 10c5592e jmp 0x10c55942 */
  goto L_10c55942;
L_10c55930:;
  /* 10c55930 mov ecx, dword ptr [0x10c7e570] */
  ECX = (r32((uint32_t)(0x10c7e570)));
  /* 10c55936 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c55939 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5593c mov dword ptr [0x10c7e570], edx */
  w32((uint32_t)(0x10c7e570), (EDX));
L_10c55942:;
  /* 10c55942 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55944 call 0x10c56110 */
  push32(0x10c55949u); f_10c56110();
  /* 10c55949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5594c jmp 0x10c55a23 */
  goto L_10c55a23;
L_10c55951:;
  /* 10c55951 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55955 je 0x10c55968 */
  if (C.zf) goto L_10c55968;
  /* 10c55957 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5595b je 0x10c55968 */
  if (C.zf) goto L_10c55968;
  /* 10c5595d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55961 je 0x10c55968 */
  if (C.zf) goto L_10c55968;
  /* 10c55963 jmp 0x10c55a28 */
  goto L_10c55a28;
L_10c55968:;
  /* 10c55968 call 0x10c520b0 */
  push32(0x10c5596du); f_10c520b0();
  /* 10c5596d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c55970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55973 cmp dword ptr [eax + 0x50], 0x10c7cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10c7cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5597a jne 0x10c559c5 */
  if (!C.zf) goto L_10c559c5;
  /* 10c5597c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10c55981 push 0x10c79dc4 */
  push32((uint32_t)(0x10c79dc4u));
  /* 10c55986 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c55988 mov ecx, dword ptr [0x10c7cc80] */
  ECX = (r32((uint32_t)(0x10c7cc80)));
  /* 10c5598e push ecx */
  push32((uint32_t)(ECX));
  /* 10c5598f call 0x10c52670 */
  push32(0x10c55994u); f_10c52670();
  /* 10c55994 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5599a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10c5599d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c559a0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c559a4 je 0x10c559c3 */
  if (C.zf) goto L_10c559c3;
  /* 10c559a6 mov ecx, dword ptr [0x10c7cc80] */
  ECX = (r32((uint32_t)(0x10c7cc80)));
  /* 10c559ac push ecx */
  push32((uint32_t)(ECX));
  /* 10c559ad push 0x10c7cc00 */
  push32((uint32_t)(0x10c7cc00u));
  /* 10c559b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c559b5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10c559b8 push eax */
  push32((uint32_t)(EAX));
  /* 10c559b9 call 0x10c58f50 */
  push32(0x10c559beu); f_10c58f50();
  /* 10c559be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c559c1 jmp 0x10c559c5 */
  goto L_10c559c5;
L_10c559c3:;
  /* 10c559c3 jmp 0x10c55a28 */
  goto L_10c55a28;
L_10c559c5:;
  /* 10c559c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c559c8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c559cb push edx */
  push32((uint32_t)(EDX));
  /* 10c559cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c559cf push eax */
  push32((uint32_t)(EAX));
  /* 10c559d0 call 0x10c55d50 */
  push32(0x10c559d5u); f_10c55d50();
  /* 10c559d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c559d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c559db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c559df jne 0x10c559e3 */
  if (!C.zf) goto L_10c559e3;
  /* 10c559e1 jmp 0x10c55a28 */
  goto L_10c55a28;
L_10c559e3:;
  /* 10c559e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c559e6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c559e9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c559ec:;
  /* 10c559ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c559ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c559f2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c559f5 jne 0x10c55a23 */
  if (!C.zf) goto L_10c55a23;
  /* 10c559f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c559fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c559fd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c55a00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55a03 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55a06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c55a09 mov edx, dword ptr [0x10c7cc84] */
  EDX = (r32((uint32_t)(0x10c7cc84)));
  /* 10c55a0f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c55a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55a15 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10c55a18 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55a1a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55a1d jb 0x10c55a21 */
  if (C.cf) goto L_10c55a21;
  /* 10c55a1f jmp 0x10c55a23 */
  goto L_10c55a23;
L_10c55a21:;
  /* 10c55a21 jmp 0x10c559ec */
  goto L_10c559ec;
L_10c55a23:;
  /* 10c55a23 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c55a26 jmp 0x10c55a36 */
  goto L_10c55a36;
L_10c55a28:;
  /* 10c55a28 call 0x10c5a540 */
  push32(0x10c55a2du); f_10c5a540();
  /* 10c55a2d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10c55a33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c55a36:;
  /* 10c55a36 pop esi */
  ESI = (pop32());
  /* 10c55a37 mov esp, ebp */
  ESP = (EBP);
  /* 10c55a39 pop ebp */
  EBP = (pop32());
  /* 10c55a3a ret  */
  ESPCHK(0x10c55840u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x10c55a70 (146 bytes, 45 insns) */
void f_10c55a70(void) {
  FTRACE(0x10c55a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55a71 mov ebp, esp */
  EBP = (ESP);
  /* 10c55a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55a76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55a78 call 0x10c56070 */
  push32(0x10c55a7du); f_10c56070();
  /* 10c55a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55a80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55a84 jne 0x10c55a9e */
  if (!C.zf) goto L_10c55a9e;
  /* 10c55a86 mov dword ptr [ebp - 8], 0x10c7e564 */
  w32((uint32_t)(EBP + -0x8), (0x10c7e564u));
  /* 10c55a8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55a90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c55a92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c55a95 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c55a9c jmp 0x10c55ab4 */
  goto L_10c55ab4;
L_10c55a9e:;
  /* 10c55a9e mov dword ptr [ebp - 8], 0x10c7e568 */
  w32((uint32_t)(EBP + -0x8), (0x10c7e568u));
  /* 10c55aa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55aa8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c55aaa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c55aad mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10c55ab4:;
  /* 10c55ab4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55ab8 jne 0x10c55ac8 */
  if (!C.zf) goto L_10c55ac8;
  /* 10c55aba push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55abc call 0x10c56110 */
  push32(0x10c55ac1u); f_10c56110();
  /* 10c55ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55ac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c55ac6 jmp 0x10c55afc */
  goto L_10c55afc;
L_10c55ac8:;
  /* 10c55ac8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55acc je 0x10c55aed */
  if (C.zf) goto L_10c55aed;
  /* 10c55ace mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55ad1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10c55ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55ad9 call 0x10c56110 */
  push32(0x10c55adeu); f_10c56110();
  /* 10c55ade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55ae4 push edx */
  push32((uint32_t)(EDX));
  /* 10c55ae5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10c55ae8u);
  /* 10c55ae8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55aeb jmp 0x10c55af7 */
  goto L_10c55af7;
L_10c55aed:;
  /* 10c55aed push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55aef call 0x10c56110 */
  push32(0x10c55af4u); f_10c56110();
  /* 10c55af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c55af7:;
  /* 10c55af7 mov eax, 1 */
  EAX = (0x1u);
L_10c55afc:;
  /* 10c55afc mov esp, ebp */
  ESP = (EBP);
  /* 10c55afe pop ebp */
  EBP = (pop32());
  /* 10c55aff ret 4 */
  ESPCHK(0x10c55a70u, _esp0);
  ESP += 8; return;
}

/* FUN_10005b10 @ 0x10c55b10 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10c55b10(void) {
  FTRACE(0x10c55b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55b11 mov ebp, esp */
  EBP = (ESP);
  /* 10c55b13 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55b16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c55b1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55b20 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c55b23 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c55b26 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55b29 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c55b2c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55b30 ja 0x10c55bde */
  if ((!C.cf&&!C.zf)) goto L_10c55bde;
  /* 10c55b36 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c55b39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c55b3b mov dl, byte ptr [eax + 0x10c55d32] */
  DL = (r8((uint32_t)(EAX + 0x10c55d32)));
  /* 10c55b41 jmp dword ptr [edx*4 + 0x10c55d1a] */
  switch (EDX) {
    case 0: goto L_10c55b48;
    case 1: goto L_10c55bb3;
    case 2: goto L_10c55b99;
    case 3: goto L_10c55b65;
    case 4: goto L_10c55b7f;
    case 5: goto L_10c55bde;
    default: x86_unimpl("switch@0x10c55b41 out of table"); return;
  }
L_10c55b48:;
  /* 10c55b48 mov dword ptr [ebp - 0x18], 0x10c7e564 */
  w32((uint32_t)(EBP + -0x18), (0x10c7e564u));
  /* 10c55b4f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c55b52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c55b54 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c55b57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c55b5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55b5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c55b60 jmp 0x10c55be6 */
  goto L_10c55be6;
L_10c55b65:;
  /* 10c55b65 mov dword ptr [ebp - 0x18], 0x10c7e568 */
  w32((uint32_t)(EBP + -0x18), (0x10c7e568u));
  /* 10c55b6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c55b6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c55b71 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c55b74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c55b77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55b7a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c55b7d jmp 0x10c55be6 */
  goto L_10c55be6;
L_10c55b7f:;
  /* 10c55b7f mov dword ptr [ebp - 0x18], 0x10c7e56c */
  w32((uint32_t)(EBP + -0x18), (0x10c7e56cu));
  /* 10c55b86 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c55b89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c55b8b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c55b8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c55b91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55b94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c55b97 jmp 0x10c55be6 */
  goto L_10c55be6;
L_10c55b99:;
  /* 10c55b99 mov dword ptr [ebp - 0x18], 0x10c7e570 */
  w32((uint32_t)(EBP + -0x18), (0x10c7e570u));
  /* 10c55ba0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c55ba3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c55ba5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c55ba8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c55bab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55bae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c55bb1 jmp 0x10c55be6 */
  goto L_10c55be6;
L_10c55bb3:;
  /* 10c55bb3 call 0x10c520b0 */
  push32(0x10c55bb8u); f_10c520b0();
  /* 10c55bb8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c55bbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55bbe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c55bc1 push edx */
  push32((uint32_t)(EDX));
  /* 10c55bc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55bc5 push eax */
  push32((uint32_t)(EAX));
  /* 10c55bc6 call 0x10c55d50 */
  push32(0x10c55bcbu); f_10c55d50();
  /* 10c55bcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55bce add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55bd1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c55bd4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c55bd7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c55bd9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c55bdc jmp 0x10c55be6 */
  goto L_10c55be6;
L_10c55bde:;
  /* 10c55bde or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c55be1 jmp 0x10c55d16 */
  goto L_10c55d16;
L_10c55be6:;
  /* 10c55be6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55bea je 0x10c55bf6 */
  if (C.zf) goto L_10c55bf6;
  /* 10c55bec push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55bee call 0x10c56070 */
  push32(0x10c55bf3u); f_10c56070();
  /* 10c55bf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c55bf6:;
  /* 10c55bf6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55bfa jne 0x10c55c13 */
  if (!C.zf) goto L_10c55c13;
  /* 10c55bfc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55c00 je 0x10c55c0c */
  if (C.zf) goto L_10c55c0c;
  /* 10c55c02 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55c04 call 0x10c56110 */
  push32(0x10c55c09u); f_10c56110();
  /* 10c55c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c55c0c:;
  /* 10c55c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c55c0e jmp 0x10c55d16 */
  goto L_10c55d16;
L_10c55c13:;
  /* 10c55c13 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55c17 jne 0x10c55c30 */
  if (!C.zf) goto L_10c55c30;
  /* 10c55c19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55c1d je 0x10c55c29 */
  if (C.zf) goto L_10c55c29;
  /* 10c55c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55c21 call 0x10c56110 */
  push32(0x10c55c26u); f_10c56110();
  /* 10c55c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c55c29:;
  /* 10c55c29 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c55c2b call 0x10c51e30 */
  push32(0x10c55c30u); f_10c51e30();
L_10c55c30:;
  /* 10c55c30 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55c34 je 0x10c55c42 */
  if (C.zf) goto L_10c55c42;
  /* 10c55c36 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55c3a je 0x10c55c42 */
  if (C.zf) goto L_10c55c42;
  /* 10c55c3c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55c40 jne 0x10c55c6e */
  if (!C.zf) goto L_10c55c6e;
L_10c55c42:;
  /* 10c55c42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55c45 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10c55c48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c55c4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55c4e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10c55c55 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55c59 jne 0x10c55c6e */
  if (!C.zf) goto L_10c55c6e;
  /* 10c55c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55c5e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10c55c61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c55c64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55c67 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10c55c6e:;
  /* 10c55c6e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55c72 jne 0x10c55cb0 */
  if (!C.zf) goto L_10c55cb0;
  /* 10c55c74 mov eax, dword ptr [0x10c7cc78] */
  EAX = (r32((uint32_t)(0x10c7cc78)));
  /* 10c55c79 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c55c7c jmp 0x10c55c87 */
  goto L_10c55c87;
L_10c55c7e:;
  /* 10c55c7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c55c81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55c84 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c55c87:;
  /* 10c55c87 mov edx, dword ptr [0x10c7cc78] */
  EDX = (r32((uint32_t)(0x10c7cc78)));
  /* 10c55c8d add edx, dword ptr [0x10c7cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55c93 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55c96 jge 0x10c55cae */
  if ((C.sf==C.of)) goto L_10c55cae;
  /* 10c55c98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c55c9b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c55c9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55ca1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c55ca4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10c55cac jmp 0x10c55c7e */
  goto L_10c55c7e;
L_10c55cae:;
  /* 10c55cae jmp 0x10c55cb9 */
  goto L_10c55cb9;
L_10c55cb0:;
  /* 10c55cb0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c55cb3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c55cb9:;
  /* 10c55cb9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55cbd je 0x10c55cc9 */
  if (C.zf) goto L_10c55cc9;
  /* 10c55cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10c55cc1 call 0x10c56110 */
  push32(0x10c55cc6u); f_10c56110();
  /* 10c55cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c55cc9:;
  /* 10c55cc9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55ccd jne 0x10c55ce0 */
  if (!C.zf) goto L_10c55ce0;
  /* 10c55ccf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55cd2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10c55cd5 push edx */
  push32((uint32_t)(EDX));
  /* 10c55cd6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c55cd8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10c55cdbu);
  /* 10c55cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55cde jmp 0x10c55cea */
  goto L_10c55cea;
L_10c55ce0:;
  /* 10c55ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55ce3 push eax */
  push32((uint32_t)(EAX));
  /* 10c55ce4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10c55ce7u);
  /* 10c55ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c55cea:;
  /* 10c55cea cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55cee je 0x10c55cfc */
  if (C.zf) goto L_10c55cfc;
  /* 10c55cf0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55cf4 je 0x10c55cfc */
  if (C.zf) goto L_10c55cfc;
  /* 10c55cf6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55cfa jne 0x10c55d14 */
  if (!C.zf) goto L_10c55d14;
L_10c55cfc:;
  /* 10c55cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55cff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c55d02 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10c55d05 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55d09 jne 0x10c55d14 */
  if (!C.zf) goto L_10c55d14;
  /* 10c55d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55d0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55d11 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10c55d14:;
  /* 10c55d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c55d16:;
  /* 10c55d16 mov esp, ebp */
  ESP = (EBP);
  /* 10c55d18 pop ebp */
  EBP = (pop32());
  /* 10c55d19 ret  */
  ESPCHK(0x10c55b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d50 @ 0x10c55d50 (91 bytes, 35 insns) */
void f_10c55d50(void) {
  FTRACE(0x10c55d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55d51 mov ebp, esp */
  EBP = (ESP);
  /* 10c55d53 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55d54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55d57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c55d5a:;
  /* 10c55d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55d5d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c55d60 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55d63 je 0x10c55d83 */
  if (C.zf) goto L_10c55d83;
  /* 10c55d65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55d68 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55d6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c55d6e mov ecx, dword ptr [0x10c7cc84] */
  ECX = (r32((uint32_t)(0x10c7cc84)));
  /* 10c55d74 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c55d77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55d7a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55d7c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55d7f jae 0x10c55d83 */
  if (!C.cf) goto L_10c55d83;
  /* 10c55d81 jmp 0x10c55d5a */
  goto L_10c55d5a;
L_10c55d83:;
  /* 10c55d83 mov eax, dword ptr [0x10c7cc84] */
  EAX = (r32((uint32_t)(0x10c7cc84)));
  /* 10c55d88 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c55d8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55d8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55d90 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55d93 jae 0x10c55da5 */
  if (!C.cf) goto L_10c55da5;
  /* 10c55d95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55d98 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c55d9b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55d9e jne 0x10c55da5 */
  if (!C.zf) goto L_10c55da5;
  /* 10c55da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55da3 jmp 0x10c55da7 */
  goto L_10c55da7;
L_10c55da5:;
  /* 10c55da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c55da7:;
  /* 10c55da7 mov esp, ebp */
  ESP = (EBP);
  /* 10c55da9 pop ebp */
  EBP = (pop32());
  /* 10c55daa ret  */
  ESPCHK(0x10c55d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005db0 @ 0x10c55db0 (13 bytes, 6 insns) */
void f_10c55db0(void) {
  FTRACE(0x10c55db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55db1 mov ebp, esp */
  EBP = (ESP);
  /* 10c55db3 call 0x10c520b0 */
  push32(0x10c55db8u); f_10c520b0();
  /* 10c55db8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55dbb pop ebp */
  EBP = (pop32());
  /* 10c55dbc ret  */
  ESPCHK(0x10c55db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dc0 @ 0x10c55dc0 (13 bytes, 6 insns) */
void f_10c55dc0(void) {
  FTRACE(0x10c55dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10c55dc3 call 0x10c520b0 */
  push32(0x10c55dc8u); f_10c520b0();
  /* 10c55dc8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55dcb pop ebp */
  EBP = (pop32());
  /* 10c55dcc ret  */
  ESPCHK(0x10c55dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x10c55dd0 (187 bytes, 54 insns) */
void f_10c55dd0(void) {
  FTRACE(0x10c55dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10c55dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c55dd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c55ddd cmp dword ptr [0x10c7e578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55de4 jne 0x10c55e43 */
  if (!C.zf) goto L_10c55e43;
  /* 10c55de6 push 0x10c791f0 */
  push32((uint32_t)(0x10c791f0u));
  /* 10c55deb call dword ptr [0x10c80240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80240))), 0x10c55df1u);
  /* 10c55df1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c55df4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55df8 je 0x10c55e17 */
  if (C.zf) goto L_10c55e17;
  /* 10c55dfa push 0x10c79df4 */
  push32((uint32_t)(0x10c79df4u));
  /* 10c55dff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55e02 push eax */
  push32((uint32_t)(EAX));
  /* 10c55e03 call dword ptr [0x10c8023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8023c))), 0x10c55e09u);
  /* 10c55e09 mov dword ptr [0x10c7e578], eax */
  w32((uint32_t)(0x10c7e578), (EAX));
  /* 10c55e0e cmp dword ptr [0x10c7e578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55e15 jne 0x10c55e1b */
  if (!C.zf) goto L_10c55e1b;
L_10c55e17:;
  /* 10c55e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c55e19 jmp 0x10c55e87 */
  goto L_10c55e87;
L_10c55e1b:;
  /* 10c55e1b push 0x10c79de4 */
  push32((uint32_t)(0x10c79de4u));
  /* 10c55e20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55e23 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55e24 call dword ptr [0x10c8023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8023c))), 0x10c55e2au);
  /* 10c55e2a mov dword ptr [0x10c7e57c], eax */
  w32((uint32_t)(0x10c7e57c), (EAX));
  /* 10c55e2f push 0x10c79dd0 */
  push32((uint32_t)(0x10c79dd0u));
  /* 10c55e34 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c55e37 push edx */
  push32((uint32_t)(EDX));
  /* 10c55e38 call dword ptr [0x10c8023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8023c))), 0x10c55e3eu);
  /* 10c55e3e mov dword ptr [0x10c7e580], eax */
  w32((uint32_t)(0x10c7e580), (EAX));
L_10c55e43:;
  /* 10c55e43 cmp dword ptr [0x10c7e57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55e4a je 0x10c55e55 */
  if (C.zf) goto L_10c55e55;
  /* 10c55e4c call dword ptr [0x10c7e57c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e57c))), 0x10c55e52u);
  /* 10c55e52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c55e55:;
  /* 10c55e55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55e59 je 0x10c55e71 */
  if (C.zf) goto L_10c55e71;
  /* 10c55e5b cmp dword ptr [0x10c7e580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55e62 je 0x10c55e71 */
  if (C.zf) goto L_10c55e71;
  /* 10c55e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55e67 push eax */
  push32((uint32_t)(EAX));
  /* 10c55e68 call dword ptr [0x10c7e580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e580))), 0x10c55e6eu);
  /* 10c55e6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c55e71:;
  /* 10c55e71 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c55e74 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55e75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c55e78 push edx */
  push32((uint32_t)(EDX));
  /* 10c55e79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c55e7c push eax */
  push32((uint32_t)(EAX));
  /* 10c55e7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55e80 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55e81 call dword ptr [0x10c7e578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c7e578))), 0x10c55e87u);
L_10c55e87:;
  /* 10c55e87 mov esp, ebp */
  ESP = (EBP);
  /* 10c55e89 pop ebp */
  EBP = (pop32());
  /* 10c55e8a ret  */
  ESPCHK(0x10c55dd0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10c55e90 (254 bytes, 109 insns) */
void f_10c55e90(void) {
  FTRACE(0x10c55e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55e90 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c55e94 push edi */
  push32((uint32_t)(EDI));
  /* 10c55e95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c55e97 je 0x10c55f13 */
  if (C.zf) goto L_10c55f13;
  /* 10c55e99 push esi */
  push32((uint32_t)(ESI));
  /* 10c55e9a push ebx */
  push32((uint32_t)(EBX));
  /* 10c55e9b mov ebx, ecx */
  EBX = (ECX);
  /* 10c55e9d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10c55ea1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10c55ea7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10c55eab jne 0x10c55eb4 */
  if (!C.zf) goto L_10c55eb4;
  /* 10c55ead shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c55eb0 jne 0x10c55f21 */
  if (!C.zf) goto L_10c55f21;
  /* 10c55eb2 jmp 0x10c55ed5 */
  goto L_10c55ed5;
L_10c55eb4:;
  /* 10c55eb4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c55eb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c55eb7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c55eb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c55eba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c55ebb je 0x10c55ee2 */
  if (C.zf) goto L_10c55ee2;
  /* 10c55ebd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c55ebf je 0x10c55eea */
  if (C.zf) goto L_10c55eea;
  /* 10c55ec1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10c55ec7 jne 0x10c55eb4 */
  if (!C.zf) goto L_10c55eb4;
  /* 10c55ec9 mov ebx, ecx */
  EBX = (ECX);
  /* 10c55ecb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c55ece jne 0x10c55f21 */
  if (!C.zf) goto L_10c55f21;
L_10c55ed0:;
  /* 10c55ed0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10c55ed3 je 0x10c55ee2 */
  if (C.zf) goto L_10c55ee2;
L_10c55ed5:;
  /* 10c55ed5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c55ed7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c55ed8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c55eda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c55edb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c55edd je 0x10c55f0e */
  if (C.zf) goto L_10c55f0e;
  /* 10c55edf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10c55ee0 jne 0x10c55ed5 */
  if (!C.zf) goto L_10c55ed5;
L_10c55ee2:;
  /* 10c55ee2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c55ee6 pop ebx */
  EBX = (pop32());
  /* 10c55ee7 pop esi */
  ESI = (pop32());
  /* 10c55ee8 pop edi */
  EDI = (pop32());
  /* 10c55ee9 ret  */
  ESPCHK(0x10c55e90u, _esp0);
  ESP += 4; return;
L_10c55eea:;
  /* 10c55eea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c55ef0 je 0x10c55f04 */
  if (C.zf) goto L_10c55f04;
L_10c55ef2:;
  /* 10c55ef2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c55ef4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c55ef5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c55ef6 je 0x10c55f86 */
  if (C.zf) goto L_10c55f86;
  /* 10c55efc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c55f02 jne 0x10c55ef2 */
  if (!C.zf) goto L_10c55ef2;
L_10c55f04:;
  /* 10c55f04 mov ebx, ecx */
  EBX = (ECX);
  /* 10c55f06 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c55f09 jne 0x10c55f77 */
  if (!C.zf) goto L_10c55f77;
L_10c55f0b:;
  /* 10c55f0b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c55f0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10c55f0e:;
  /* 10c55f0e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10c55f0f jne 0x10c55f0b */
  if (!C.zf) goto L_10c55f0b;
  /* 10c55f11 pop ebx */
  EBX = (pop32());
  /* 10c55f12 pop esi */
  ESI = (pop32());
L_10c55f13:;
  /* 10c55f13 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c55f17 pop edi */
  EDI = (pop32());
  /* 10c55f18 ret  */
  ESPCHK(0x10c55e90u, _esp0);
  ESP += 4; return;
L_10c55f19:;
  /* 10c55f19 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c55f1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55f1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c55f1f je 0x10c55ed0 */
  if (C.zf) goto L_10c55ed0;
L_10c55f21:;
  /* 10c55f21 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c55f26 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10c55f28 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55f2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c55f2d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c55f2f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10c55f31 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55f34 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c55f39 je 0x10c55f19 */
  if (C.zf) goto L_10c55f19;
  /* 10c55f3b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10c55f3d je 0x10c55f6b */
  if (C.zf) goto L_10c55f6b;
  /* 10c55f3f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10c55f41 je 0x10c55f61 */
  if (C.zf) goto L_10c55f61;
  /* 10c55f43 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c55f49 je 0x10c55f57 */
  if (C.zf) goto L_10c55f57;
  /* 10c55f4b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c55f51 jne 0x10c55f19 */
  if (!C.zf) goto L_10c55f19;
  /* 10c55f53 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c55f55 jmp 0x10c55f6f */
  goto L_10c55f6f;
L_10c55f57:;
  /* 10c55f57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c55f5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c55f5f jmp 0x10c55f6f */
  goto L_10c55f6f;
L_10c55f61:;
  /* 10c55f61 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c55f67 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c55f69 jmp 0x10c55f6f */
  goto L_10c55f6f;
L_10c55f6b:;
  /* 10c55f6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c55f6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10c55f6f:;
  /* 10c55f6f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55f72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c55f74 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c55f75 je 0x10c55f81 */
  if (C.zf) goto L_10c55f81;
L_10c55f77:;
  /* 10c55f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c55f79:;
  /* 10c55f79 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10c55f7b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55f7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c55f7f jne 0x10c55f79 */
  if (!C.zf) goto L_10c55f79;
L_10c55f81:;
  /* 10c55f81 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10c55f84 jne 0x10c55f0b */
  if (!C.zf) goto L_10c55f0b;
L_10c55f86:;
  /* 10c55f86 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c55f8a pop ebx */
  EBX = (pop32());
  /* 10c55f8b pop esi */
  ESI = (pop32());
  /* 10c55f8c pop edi */
  EDI = (pop32());
  /* 10c55f8d ret  */
  ESPCHK(0x10c55e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f90 @ 0x10c55f90 (55 bytes, 16 insns) */
void f_10c55f90(void) {
  FTRACE(0x10c55f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55f91 mov ebp, esp */
  EBP = (ESP);
  /* 10c55f93 mov eax, dword ptr [0x10c7cb84] */
  EAX = (r32((uint32_t)(0x10c7cb84)));
  /* 10c55f98 push eax */
  push32((uint32_t)(EAX));
  /* 10c55f99 call dword ptr [0x10c802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802bc))), 0x10c55f9fu);
  /* 10c55f9f mov ecx, dword ptr [0x10c7cb74] */
  ECX = (r32((uint32_t)(0x10c7cb74)));
  /* 10c55fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55fa6 call dword ptr [0x10c802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802bc))), 0x10c55facu);
  /* 10c55fac mov edx, dword ptr [0x10c7cb64] */
  EDX = (r32((uint32_t)(0x10c7cb64)));
  /* 10c55fb2 push edx */
  push32((uint32_t)(EDX));
  /* 10c55fb3 call dword ptr [0x10c802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802bc))), 0x10c55fb9u);
  /* 10c55fb9 mov eax, dword ptr [0x10c7cb44] */
  EAX = (r32((uint32_t)(0x10c7cb44)));
  /* 10c55fbe push eax */
  push32((uint32_t)(EAX));
  /* 10c55fbf call dword ptr [0x10c802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802bc))), 0x10c55fc5u);
  /* 10c55fc5 pop ebp */
  EBP = (pop32());
  /* 10c55fc6 ret  */
  ESPCHK(0x10c55f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10c55fd0 (159 bytes, 47 insns) */
void f_10c55fd0(void) {
  FTRACE(0x10c55fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c55fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c55fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10c55fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c55fd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c55fdb jmp 0x10c55fe6 */
  goto L_10c55fe6;
L_10c55fdd:;
  /* 10c55fdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55fe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c55fe3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c55fe6:;
  /* 10c55fe6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55fea jge 0x10c56039 */
  if ((C.sf==C.of)) goto L_10c56039;
  /* 10c55fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c55fef cmp dword ptr [ecx*4 + 0x10c7cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10c7cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55ff7 je 0x10c56037 */
  if (C.zf) goto L_10c56037;
  /* 10c55ff9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c55ffd je 0x10c56037 */
  if (C.zf) goto L_10c56037;
  /* 10c55fff cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56003 je 0x10c56037 */
  if (C.zf) goto L_10c56037;
  /* 10c56005 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56009 je 0x10c56037 */
  if (C.zf) goto L_10c56037;
  /* 10c5600b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5600f je 0x10c56037 */
  if (C.zf) goto L_10c56037;
  /* 10c56011 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56014 mov eax, dword ptr [edx*4 + 0x10c7cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c7cb40)));
  /* 10c5601b push eax */
  push32((uint32_t)(EAX));
  /* 10c5601c call dword ptr [0x10c80284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80284))), 0x10c56022u);
  /* 10c56022 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c56024 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56027 mov edx, dword ptr [ecx*4 + 0x10c7cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c7cb40)));
  /* 10c5602e push edx */
  push32((uint32_t)(EDX));
  /* 10c5602f call 0x10c53100 */
  push32(0x10c56034u); f_10c53100();
  /* 10c56034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c56037:;
  /* 10c56037 jmp 0x10c55fdd */
  goto L_10c55fdd;
L_10c56039:;
  /* 10c56039 mov eax, dword ptr [0x10c7cb64] */
  EAX = (r32((uint32_t)(0x10c7cb64)));
  /* 10c5603e push eax */
  push32((uint32_t)(EAX));
  /* 10c5603f call dword ptr [0x10c80284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80284))), 0x10c56045u);
  /* 10c56045 mov ecx, dword ptr [0x10c7cb74] */
  ECX = (r32((uint32_t)(0x10c7cb74)));
  /* 10c5604b push ecx */
  push32((uint32_t)(ECX));
  /* 10c5604c call dword ptr [0x10c80284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80284))), 0x10c56052u);
  /* 10c56052 mov edx, dword ptr [0x10c7cb84] */
  EDX = (r32((uint32_t)(0x10c7cb84)));
  /* 10c56058 push edx */
  push32((uint32_t)(EDX));
  /* 10c56059 call dword ptr [0x10c80284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80284))), 0x10c5605fu);
  /* 10c5605f mov eax, dword ptr [0x10c7cb44] */
  EAX = (r32((uint32_t)(0x10c7cb44)));
  /* 10c56064 push eax */
  push32((uint32_t)(EAX));
  /* 10c56065 call dword ptr [0x10c80284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80284))), 0x10c5606bu);
  /* 10c5606b mov esp, ebp */
  ESP = (EBP);
  /* 10c5606d pop ebp */
  EBP = (pop32());
  /* 10c5606e ret  */
  ESPCHK(0x10c55fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006070 @ 0x10c56070 (151 bytes, 46 insns) */
void f_10c56070(void) {
  FTRACE(0x10c56070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56070 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56071 mov ebp, esp */
  EBP = (ESP);
  /* 10c56073 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56077 cmp dword ptr [eax*4 + 0x10c7cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10c7cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5607f jne 0x10c560f2 */
  if (!C.zf) goto L_10c560f2;
  /* 10c56081 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10c56086 push 0x10c79e00 */
  push32((uint32_t)(0x10c79e00u));
  /* 10c5608b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c5608d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10c5608f call 0x10c52670 */
  push32(0x10c56094u); f_10c52670();
  /* 10c56094 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56097 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5609a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5609e jne 0x10c560aa */
  if (!C.zf) goto L_10c560aa;
  /* 10c560a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c560a2 call 0x10c515e0 */
  push32(0x10c560a7u); f_10c515e0();
  /* 10c560a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c560aa:;
  /* 10c560aa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c560ac call 0x10c56070 */
  push32(0x10c560b1u); f_10c56070();
  /* 10c560b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c560b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c560b7 cmp dword ptr [ecx*4 + 0x10c7cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10c7cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c560bf jne 0x10c560da */
  if (!C.zf) goto L_10c560da;
  /* 10c560c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c560c4 push edx */
  push32((uint32_t)(EDX));
  /* 10c560c5 call dword ptr [0x10c802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802bc))), 0x10c560cbu);
  /* 10c560cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c560ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c560d1 mov dword ptr [eax*4 + 0x10c7cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10c7cb40), (ECX));
  /* 10c560d8 jmp 0x10c560e8 */
  goto L_10c560e8;
L_10c560da:;
  /* 10c560da push 2 */
  push32((uint32_t)(0x2u));
  /* 10c560dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c560df push edx */
  push32((uint32_t)(EDX));
  /* 10c560e0 call 0x10c53100 */
  push32(0x10c560e5u); f_10c53100();
  /* 10c560e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c560e8:;
  /* 10c560e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c560ea call 0x10c56110 */
  push32(0x10c560efu); f_10c56110();
  /* 10c560ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c560f2:;
  /* 10c560f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c560f5 mov ecx, dword ptr [eax*4 + 0x10c7cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c7cb40)));
  /* 10c560fc push ecx */
  push32((uint32_t)(ECX));
  /* 10c560fd call dword ptr [0x10c802c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c0))), 0x10c56103u);
  /* 10c56103 mov esp, ebp */
  ESP = (EBP);
  /* 10c56105 pop ebp */
  EBP = (pop32());
  /* 10c56106 ret  */
  ESPCHK(0x10c56070u, _esp0);
  ESP += 4; return;
}

/* FUN_10006110 @ 0x10c56110 (22 bytes, 8 insns) */
void f_10c56110(void) {
  FTRACE(0x10c56110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56110 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56111 mov ebp, esp */
  EBP = (ESP);
  /* 10c56113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56116 mov ecx, dword ptr [eax*4 + 0x10c7cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c7cb40)));
  /* 10c5611d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5611e call dword ptr [0x10c802c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c4))), 0x10c56124u);
  /* 10c56124 pop ebp */
  EBP = (pop32());
  /* 10c56125 ret  */
  ESPCHK(0x10c56110u, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x10c56130 (26 bytes, 10 insns) */
void f_10c56130(void) {
  FTRACE(0x10c56130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56130 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56131 mov ebp, esp */
  EBP = (ESP);
  /* 10c56133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56136 push eax */
  push32((uint32_t)(EAX));
  /* 10c56137 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c56139 call dword ptr [0x10c802c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802c8))), 0x10c5613fu);
  /* 10c5613f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10c56144 call dword ptr [0x10c8024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c8024c))), 0x10c5614au);
  /* 10c5614a pop ebp */
  EBP = (pop32());
  /* 10c5614b ret  */
  ESPCHK(0x10c56130u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10c56150 (446 bytes, 130 insns) */
void f_10c56150(void) {
  FTRACE(0x10c56150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56150 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56151 mov ebp, esp */
  EBP = (ESP);
  /* 10c56153 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56156 call 0x10c520b0 */
  push32(0x10c5615bu); f_10c520b0();
  /* 10c5615b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5615e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56161 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10c56164 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56168 push edx */
  push32((uint32_t)(EDX));
  /* 10c56169 call 0x10c56310 */
  push32(0x10c5616eu); f_10c56310();
  /* 10c5616e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c56174 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56178 je 0x10c56183 */
  if (C.zf) goto L_10c56183;
  /* 10c5617a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5617d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56181 jne 0x10c56192 */
  if (!C.zf) goto L_10c56192;
L_10c56183:;
  /* 10c56183 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56186 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56187 call dword ptr [0x10c802cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802cc))), 0x10c5618du);
  /* 10c5618d jmp 0x10c5630a */
  goto L_10c5630a;
L_10c56192:;
  /* 10c56192 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c56195 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56199 jne 0x10c561af */
  if (!C.zf) goto L_10c561af;
  /* 10c5619b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5619e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c561a5 mov eax, 1 */
  EAX = (0x1u);
  /* 10c561aa jmp 0x10c5630a */
  goto L_10c5630a;
L_10c561af:;
  /* 10c561af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c561b2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c561b6 jne 0x10c561c0 */
  if (!C.zf) goto L_10c561c0;
  /* 10c561b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c561bb jmp 0x10c5630a */
  goto L_10c5630a;
L_10c561c0:;
  /* 10c561c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c561c3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c561c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c561c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c561cc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10c561cf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c561d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c561d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c561d8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10c561db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c561de cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c561e2 jne 0x10c562e7 */
  if (!C.zf) goto L_10c562e7;
  /* 10c561e8 mov eax, dword ptr [0x10c7cc78] */
  EAX = (r32((uint32_t)(0x10c7cc78)));
  /* 10c561ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c561f0 jmp 0x10c561fb */
  goto L_10c561fb;
L_10c561f2:;
  /* 10c561f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c561f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c561f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c561fb:;
  /* 10c561fb mov edx, dword ptr [0x10c7cc78] */
  EDX = (r32((uint32_t)(0x10c7cc78)));
  /* 10c56201 add edx, dword ptr [0x10c7cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c7cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56207 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5620a jge 0x10c56222 */
  if ((C.sf==C.of)) goto L_10c56222;
  /* 10c5620c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5620f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c56212 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56215 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c56218 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10c56220 jmp 0x10c561f2 */
  goto L_10c561f2;
L_10c56222:;
  /* 10c56222 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56225 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10c56228 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c5622b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5622e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56234 jne 0x10c56245 */
  if (!C.zf) goto L_10c56245;
  /* 10c56236 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56239 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10c56240 jmp 0x10c562cd */
  goto L_10c562cd;
L_10c56245:;
  /* 10c56245 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c56248 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5624e jne 0x10c5625c */
  if (!C.zf) goto L_10c5625c;
  /* 10c56250 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56253 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10c5625a jmp 0x10c562cd */
  goto L_10c562cd;
L_10c5625c:;
  /* 10c5625c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5625f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56265 jne 0x10c56273 */
  if (!C.zf) goto L_10c56273;
  /* 10c56267 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5626a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10c56271 jmp 0x10c562cd */
  goto L_10c562cd;
L_10c56273:;
  /* 10c56273 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c56276 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5627c jne 0x10c5628a */
  if (!C.zf) goto L_10c5628a;
  /* 10c5627e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56281 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10c56288 jmp 0x10c562cd */
  goto L_10c562cd;
L_10c5628a:;
  /* 10c5628a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c5628d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56293 jne 0x10c562a1 */
  if (!C.zf) goto L_10c562a1;
  /* 10c56295 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56298 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10c5629f jmp 0x10c562cd */
  goto L_10c562cd;
L_10c562a1:;
  /* 10c562a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c562a4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c562aa jne 0x10c562b8 */
  if (!C.zf) goto L_10c562b8;
  /* 10c562ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c562af mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10c562b6 jmp 0x10c562cd */
  goto L_10c562cd;
L_10c562b8:;
  /* 10c562b8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c562bb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c562c1 jne 0x10c562cd */
  if (!C.zf) goto L_10c562cd;
  /* 10c562c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c562c6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10c562cd:;
  /* 10c562cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c562d0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10c562d3 push edx */
  push32((uint32_t)(EDX));
  /* 10c562d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c562d6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10c562d9u);
  /* 10c562d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c562dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c562df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c562e2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10c562e5 jmp 0x10c562fe */
  goto L_10c562fe;
L_10c562e7:;
  /* 10c562e7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c562ea mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10c562f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c562f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c562f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c562f8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10c562fbu);
  /* 10c562fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c562fe:;
  /* 10c562fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56301 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c56304 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10c56307 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c5630a:;
  /* 10c5630a mov esp, ebp */
  ESP = (EBP);
  /* 10c5630c pop ebp */
  EBP = (pop32());
  /* 10c5630d ret  */
  ESPCHK(0x10c56150u, _esp0);
  ESP += 4; return;
}

/* FUN_10006310 @ 0x10c56310 (89 bytes, 35 insns) */
void f_10c56310(void) {
  FTRACE(0x10c56310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56310 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56311 mov ebp, esp */
  EBP = (ESP);
  /* 10c56313 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56314 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56317 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c5631a:;
  /* 10c5631a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5631d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c5631f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56322 je 0x10c56342 */
  if (C.zf) goto L_10c56342;
  /* 10c56324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56327 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5632a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c5632d mov ecx, dword ptr [0x10c7cc84] */
  ECX = (r32((uint32_t)(0x10c7cc84)));
  /* 10c56333 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c56336 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56339 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5633b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5633e jae 0x10c56342 */
  if (!C.cf) goto L_10c56342;
  /* 10c56340 jmp 0x10c5631a */
  goto L_10c5631a;
L_10c56342:;
  /* 10c56342 mov eax, dword ptr [0x10c7cc84] */
  EAX = (r32((uint32_t)(0x10c7cc84)));
  /* 10c56347 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c5634a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5634d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5634f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56352 jae 0x10c5635e */
  if (!C.cf) goto L_10c5635e;
  /* 10c56354 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56357 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c56359 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5635c je 0x10c56362 */
  if (C.zf) goto L_10c56362;
L_10c5635e:;
  /* 10c5635e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c56360 jmp 0x10c56365 */
  goto L_10c56365;
L_10c56362:;
  /* 10c56362 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c56365:;
  /* 10c56365 mov esp, ebp */
  ESP = (EBP);
  /* 10c56367 pop ebp */
  EBP = (pop32());
  /* 10c56368 ret  */
  ESPCHK(0x10c56310u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10c56370 (48 bytes, 17 insns) */
void f_10c56370(void) {
  FTRACE(0x10c56370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56370 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56371 mov ebp, esp */
  EBP = (ESP);
  /* 10c56373 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56374 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c56376 call 0x10c56070 */
  push32(0x10c5637bu); f_10c56070();
  /* 10c5637b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5637e mov eax, dword ptr [0x10c7e5ec] */
  EAX = (r32((uint32_t)(0x10c7e5ec)));
  /* 10c56383 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c56386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56389 mov dword ptr [0x10c7e5ec], ecx */
  w32((uint32_t)(0x10c7e5ec), (ECX));
  /* 10c5638f push 9 */
  push32((uint32_t)(0x9u));
  /* 10c56391 call 0x10c56110 */
  push32(0x10c56396u); f_10c56110();
  /* 10c56396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5639c mov esp, ebp */
  ESP = (EBP);
  /* 10c5639e pop ebp */
  EBP = (pop32());
  /* 10c5639f ret  */
  ESPCHK(0x10c56370u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x10c563a0 (10 bytes, 5 insns) */
void f_10c563a0(void) {
  FTRACE(0x10c563a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c563a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c563a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c563a3 mov eax, dword ptr [0x10c7e5ec] */
  EAX = (r32((uint32_t)(0x10c7e5ec)));
  /* 10c563a8 pop ebp */
  EBP = (pop32());
  /* 10c563a9 ret  */
  ESPCHK(0x10c563a0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10c563b0 (45 bytes, 19 insns) */
void f_10c563b0(void) {
  FTRACE(0x10c563b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c563b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c563b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c563b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c563b4 mov eax, dword ptr [0x10c7e5ec] */
  EAX = (r32((uint32_t)(0x10c7e5ec)));
  /* 10c563b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c563bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c563c0 je 0x10c563d0 */
  if (C.zf) goto L_10c563d0;
  /* 10c563c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c563c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c563c6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10c563c9u);
  /* 10c563c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c563cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c563ce jne 0x10c563d4 */
  if (!C.zf) goto L_10c563d4;
L_10c563d0:;
  /* 10c563d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c563d2 jmp 0x10c563d9 */
  goto L_10c563d9;
L_10c563d4:;
  /* 10c563d4 mov eax, 1 */
  EAX = (0x1u);
L_10c563d9:;
  /* 10c563d9 mov esp, ebp */
  ESP = (EBP);
  /* 10c563db pop ebp */
  EBP = (pop32());
  /* 10c563dc ret  */
  ESPCHK(0x10c563b0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10c563e0 (88 bytes, 40 insns) */
void f_10c563e0(void) {
  FTRACE(0x10c563e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c563e0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c563e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c563e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c563ea je 0x10c56433 */
  if (C.zf) goto L_10c56433;
  /* 10c563ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c563ee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10c563f2 push edi */
  push32((uint32_t)(EDI));
  /* 10c563f3 mov edi, ecx */
  EDI = (ECX);
  /* 10c563f5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c563f8 jb 0x10c56427 */
  if (C.cf) goto L_10c56427;
  /* 10c563fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c563fc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10c563ff je 0x10c56409 */
  if (C.zf) goto L_10c56409;
  /* 10c56401 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10c56403:;
  /* 10c56403 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c56405 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c56406 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c56407 jne 0x10c56403 */
  if (!C.zf) goto L_10c56403;
L_10c56409:;
  /* 10c56409 mov ecx, eax */
  ECX = (EAX);
  /* 10c5640b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10c5640e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56410 mov ecx, eax */
  ECX = (EAX);
  /* 10c56412 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c56415 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56417 mov ecx, edx */
  ECX = (EDX);
  /* 10c56419 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5641c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c5641f je 0x10c56427 */
  if (C.zf) goto L_10c56427;
  /* 10c56421 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c56423 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c56425 je 0x10c5642d */
  if (C.zf) goto L_10c5642d;
L_10c56427:;
  /* 10c56427 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c56429 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c5642a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10c5642b jne 0x10c56427 */
  if (!C.zf) goto L_10c56427;
L_10c5642d:;
  /* 10c5642d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c56431 pop edi */
  EDI = (pop32());
  /* 10c56432 ret  */
  ESPCHK(0x10c563e0u, _esp0);
  ESP += 4; return;
L_10c56433:;
  /* 10c56433 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c56437 ret  */
  ESPCHK(0x10c563e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006440 @ 0x10c56440 (23 bytes, 10 insns) */
void f_10c56440(void) {
  FTRACE(0x10c56440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56440 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56441 mov ebp, esp */
  EBP = (ESP);
  /* 10c56443 mov eax, dword ptr [0x10c7e5e8] */
  EAX = (r32((uint32_t)(0x10c7e5e8)));
  /* 10c56448 push eax */
  push32((uint32_t)(EAX));
  /* 10c56449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5644c push ecx */
  push32((uint32_t)(ECX));
  /* 10c5644d call 0x10c56460 */
  push32(0x10c56452u); f_10c56460();
  /* 10c56452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56455 pop ebp */
  EBP = (pop32());
  /* 10c56456 ret  */
  ESPCHK(0x10c56440u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10c56460 (87 bytes, 34 insns) */
void f_10c56460(void) {
  FTRACE(0x10c56460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56460 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56461 mov ebp, esp */
  EBP = (ESP);
  /* 10c56463 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56464 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56468 jbe 0x10c5646e */
  if ((C.cf||C.zf)) goto L_10c5646e;
  /* 10c5646a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5646c jmp 0x10c564b3 */
  goto L_10c564b3;
L_10c5646e:;
  /* 10c5646e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56472 ja 0x10c56485 */
  if ((!C.cf&&!C.zf)) goto L_10c56485;
  /* 10c56474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56477 push eax */
  push32((uint32_t)(EAX));
  /* 10c56478 call 0x10c564c0 */
  push32(0x10c5647du); f_10c564c0();
  /* 10c5647d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56480 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c56483 jmp 0x10c5648c */
  goto L_10c5648c;
L_10c56485:;
  /* 10c56485 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c5648c:;
  /* 10c5648c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56490 jne 0x10c56498 */
  if (!C.zf) goto L_10c56498;
  /* 10c56492 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56496 jne 0x10c5649d */
  if (!C.zf) goto L_10c5649d;
L_10c56498:;
  /* 10c56498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c5649b jmp 0x10c564b3 */
  goto L_10c564b3;
L_10c5649d:;
  /* 10c5649d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c564a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c564a1 call 0x10c563b0 */
  push32(0x10c564a6u); f_10c563b0();
  /* 10c564a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c564a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c564ab jne 0x10c564b1 */
  if (!C.zf) goto L_10c564b1;
  /* 10c564ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c564af jmp 0x10c564b3 */
  goto L_10c564b3;
L_10c564b1:;
  /* 10c564b1 jmp 0x10c5646e */
  goto L_10c5646e;
L_10c564b3:;
  /* 10c564b3 mov esp, ebp */
  ESP = (EBP);
  /* 10c564b5 pop ebp */
  EBP = (pop32());
  /* 10c564b6 ret  */
  ESPCHK(0x10c56460u, _esp0);
  ESP += 4; return;
}

/* FUN_100064c0 @ 0x10c564c0 (109 bytes, 37 insns) */
void f_10c564c0(void) {
  FTRACE(0x10c564c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c564c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c564c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c564c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c564c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c564c7 cmp eax, dword ptr [0x10c7cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c564cd ja 0x10c564fd */
  if ((!C.cf&&!C.zf)) goto L_10c564fd;
  /* 10c564cf push 9 */
  push32((uint32_t)(0x9u));
  /* 10c564d1 call 0x10c56070 */
  push32(0x10c564d6u); f_10c56070();
  /* 10c564d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c564d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c564dc push ecx */
  push32((uint32_t)(ECX));
  /* 10c564dd call 0x10c57000 */
  push32(0x10c564e2u); f_10c57000();
  /* 10c564e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c564e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c564e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c564ea call 0x10c56110 */
  push32(0x10c564efu); f_10c56110();
  /* 10c564ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c564f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c564f6 je 0x10c564fd */
  if (C.zf) goto L_10c564fd;
  /* 10c564f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c564fb jmp 0x10c56529 */
  goto L_10c56529;
L_10c564fd:;
  /* 10c564fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56501 jne 0x10c5650a */
  if (!C.zf) goto L_10c5650a;
  /* 10c56503 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10c5650a:;
  /* 10c5650a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5650d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56510 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10c56513 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c56516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56519 push eax */
  push32((uint32_t)(EAX));
  /* 10c5651a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c5651c mov ecx, dword ptr [0x10c7fdac] */
  ECX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c56522 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56523 call dword ptr [0x10c802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802d0))), 0x10c56529u);
L_10c56529:;
  /* 10c56529 mov esp, ebp */
  ESP = (EBP);
  /* 10c5652b pop ebp */
  EBP = (pop32());
  /* 10c5652c ret  */
  ESPCHK(0x10c564c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006530 @ 0x10c56530 (10 bytes, 5 insns) */
void f_10c56530(void) {
  FTRACE(0x10c56530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56530 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56531 mov ebp, esp */
  EBP = (ESP);
  /* 10c56533 mov eax, 1 */
  EAX = (0x1u);
  /* 10c56538 pop ebp */
  EBP = (pop32());
  /* 10c56539 ret  */
  ESPCHK(0x10c56530u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x10c56540 (173 bytes, 59 insns) */
void f_10c56540(void) {
  FTRACE(0x10c56540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56540 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56541 mov ebp, esp */
  EBP = (ESP);
  /* 10c56543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56546 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5654a jbe 0x10c56553 */
  if ((C.cf||C.zf)) goto L_10c56553;
  /* 10c5654c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c5654e jmp 0x10c565e9 */
  goto L_10c565e9;
L_10c56553:;
  /* 10c56553 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c56555 call 0x10c56070 */
  push32(0x10c5655au); f_10c56070();
  /* 10c5655a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5655d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56560 push eax */
  push32((uint32_t)(EAX));
  /* 10c56561 call 0x10c56970 */
  push32(0x10c56566u); f_10c56970();
  /* 10c56566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56569 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c5656c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56570 je 0x10c565b1 */
  if (C.zf) goto L_10c565b1;
  /* 10c56572 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c56579 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5657c cmp ecx, dword ptr [0x10c7cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c7cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56582 ja 0x10c565a2 */
  if ((!C.cf&&!C.zf)) goto L_10c565a2;
  /* 10c56584 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56587 push edx */
  push32((uint32_t)(EDX));
  /* 10c56588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5658b push eax */
  push32((uint32_t)(EAX));
  /* 10c5658c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c5658f push ecx */
  push32((uint32_t)(ECX));
  /* 10c56590 call 0x10c57840 */
  push32(0x10c56595u); f_10c57840();
  /* 10c56595 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5659a je 0x10c565a2 */
  if (C.zf) goto L_10c565a2;
  /* 10c5659c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5659f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c565a2:;
  /* 10c565a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c565a4 call 0x10c56110 */
  push32(0x10c565a9u); f_10c56110();
  /* 10c565a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c565ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c565af jmp 0x10c565e9 */
  goto L_10c565e9;
L_10c565b1:;
  /* 10c565b1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c565b3 call 0x10c56110 */
  push32(0x10c565b8u); f_10c56110();
  /* 10c565b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c565bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c565bf jne 0x10c565c8 */
  if (!C.zf) goto L_10c565c8;
  /* 10c565c1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10c565c8:;
  /* 10c565c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c565cb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c565ce and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10c565d0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c565d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c565d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c565d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c565da push edx */
  push32((uint32_t)(EDX));
  /* 10c565db push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10c565dd mov eax, dword ptr [0x10c7fdac] */
  EAX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c565e2 push eax */
  push32((uint32_t)(EAX));
  /* 10c565e3 call dword ptr [0x10c802d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802d4))), 0x10c565e9u);
L_10c565e9:;
  /* 10c565e9 mov esp, ebp */
  ESP = (EBP);
  /* 10c565eb pop ebp */
  EBP = (pop32());
  /* 10c565ec ret  */
  ESPCHK(0x10c56540u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f0 @ 0x10c565f0 (490 bytes, 165 insns) */
void f_10c565f0(void) {
  FTRACE(0x10c565f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c565f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c565f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c565f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c565f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c565fa jne 0x10c5660d */
  if (!C.zf) goto L_10c5660d;
  /* 10c565fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c565ff push eax */
  push32((uint32_t)(EAX));
  /* 10c56600 call 0x10c56440 */
  push32(0x10c56605u); f_10c56440();
  /* 10c56605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56608 jmp 0x10c567d6 */
  goto L_10c567d6;
L_10c5660d:;
  /* 10c5660d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56611 jne 0x10c56626 */
  if (!C.zf) goto L_10c56626;
  /* 10c56613 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56616 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56617 call 0x10c567e0 */
  push32(0x10c5661cu); f_10c567e0();
  /* 10c5661c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5661f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c56621 jmp 0x10c567d6 */
  goto L_10c567d6;
L_10c56626:;
  /* 10c56626 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c5662d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56631 ja 0x10c567a9 */
  if ((!C.cf&&!C.zf)) goto L_10c567a9;
  /* 10c56637 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c56639 call 0x10c56070 */
  push32(0x10c5663eu); f_10c56070();
  /* 10c5663e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56644 push edx */
  push32((uint32_t)(EDX));
  /* 10c56645 call 0x10c56970 */
  push32(0x10c5664au); f_10c56970();
  /* 10c5664a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5664d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c56650 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56654 je 0x10c5676c */
  if (C.zf) goto L_10c5676c;
  /* 10c5665a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c5665d cmp eax, dword ptr [0x10c7cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c7cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56663 ja 0x10c566e0 */
  if ((!C.cf&&!C.zf)) goto L_10c566e0;
  /* 10c56665 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56668 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5666c push edx */
  push32((uint32_t)(EDX));
  /* 10c5666d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c56670 push eax */
  push32((uint32_t)(EAX));
  /* 10c56671 call 0x10c57840 */
  push32(0x10c56676u); f_10c57840();
  /* 10c56676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5667b je 0x10c56685 */
  if (C.zf) goto L_10c56685;
  /* 10c5667d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56680 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c56683 jmp 0x10c566e0 */
  goto L_10c566e0;
L_10c56685:;
  /* 10c56685 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56688 push edx */
  push32((uint32_t)(EDX));
  /* 10c56689 call 0x10c57000 */
  push32(0x10c5668eu); f_10c57000();
  /* 10c5668e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56691 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c56694 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56698 je 0x10c566e0 */
  if (C.zf) goto L_10c566e0;
  /* 10c5669a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5669d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10c566a0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c566a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c566a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c566a9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c566ac jae 0x10c566b6 */
  if (!C.cf) goto L_10c566b6;
  /* 10c566ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c566b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c566b4 jmp 0x10c566bc */
  goto L_10c566bc;
L_10c566b6:;
  /* 10c566b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c566b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c566bc:;
  /* 10c566bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c566bf push edx */
  push32((uint32_t)(EDX));
  /* 10c566c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c566c3 push eax */
  push32((uint32_t)(EAX));
  /* 10c566c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c566c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c566c8 call 0x10c58f50 */
  push32(0x10c566cdu); f_10c58f50();
  /* 10c566cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c566d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c566d3 push edx */
  push32((uint32_t)(EDX));
  /* 10c566d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c566d7 push eax */
  push32((uint32_t)(EAX));
  /* 10c566d8 call 0x10c56a30 */
  push32(0x10c566ddu); f_10c56a30();
  /* 10c566dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c566e0:;
  /* 10c566e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c566e4 jne 0x10c56760 */
  if (!C.zf) goto L_10c56760;
  /* 10c566e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c566ea jne 0x10c566f3 */
  if (!C.zf) goto L_10c566f3;
  /* 10c566ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10c566f3:;
  /* 10c566f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c566f6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c566f9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10c566fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c566ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56702 push edx */
  push32((uint32_t)(EDX));
  /* 10c56703 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c56705 mov eax, dword ptr [0x10c7fdac] */
  EAX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c5670a push eax */
  push32((uint32_t)(EAX));
  /* 10c5670b call dword ptr [0x10c802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802d0))), 0x10c56711u);
  /* 10c56711 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c56714 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56718 je 0x10c56760 */
  if (C.zf) goto L_10c56760;
  /* 10c5671a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5671d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c56720 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c56723 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c56726 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56729 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5672c jae 0x10c56736 */
  if (!C.cf) goto L_10c56736;
  /* 10c5672e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56731 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c56734 jmp 0x10c5673c */
  goto L_10c5673c;
L_10c56736:;
  /* 10c56736 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56739 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c5673c:;
  /* 10c5673c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c5673f push eax */
  push32((uint32_t)(EAX));
  /* 10c56740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56743 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56744 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c56747 push edx */
  push32((uint32_t)(EDX));
  /* 10c56748 call 0x10c58f50 */
  push32(0x10c5674du); f_10c58f50();
  /* 10c5674d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56753 push eax */
  push32((uint32_t)(EAX));
  /* 10c56754 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c56757 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56758 call 0x10c56a30 */
  push32(0x10c5675du); f_10c56a30();
  /* 10c5675d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c56760:;
  /* 10c56760 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c56762 call 0x10c56110 */
  push32(0x10c56767u); f_10c56110();
  /* 10c56767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5676a jmp 0x10c567a9 */
  goto L_10c567a9;
L_10c5676c:;
  /* 10c5676c push 9 */
  push32((uint32_t)(0x9u));
  /* 10c5676e call 0x10c56110 */
  push32(0x10c56773u); f_10c56110();
  /* 10c56773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56776 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5677a jne 0x10c56783 */
  if (!C.zf) goto L_10c56783;
  /* 10c5677c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10c56783:;
  /* 10c56783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56786 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56789 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10c5678c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10c5678f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c56792 push eax */
  push32((uint32_t)(EAX));
  /* 10c56793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56796 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56797 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c56799 mov edx, dword ptr [0x10c7fdac] */
  EDX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c5679f push edx */
  push32((uint32_t)(EDX));
  /* 10c567a0 call dword ptr [0x10c802d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802d4))), 0x10c567a6u);
  /* 10c567a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c567a9:;
  /* 10c567a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c567ad jne 0x10c567b8 */
  if (!C.zf) goto L_10c567b8;
  /* 10c567af cmp dword ptr [0x10c7e5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c7e5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c567b6 jne 0x10c567bd */
  if (!C.zf) goto L_10c567bd;
L_10c567b8:;
  /* 10c567b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c567bb jmp 0x10c567d6 */
  goto L_10c567d6;
L_10c567bd:;
  /* 10c567bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c567c0 push eax */
  push32((uint32_t)(EAX));
  /* 10c567c1 call 0x10c563b0 */
  push32(0x10c567c6u); f_10c563b0();
  /* 10c567c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c567c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c567cb jne 0x10c567d1 */
  if (!C.zf) goto L_10c567d1;
  /* 10c567cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c567cf jmp 0x10c567d6 */
  goto L_10c567d6;
L_10c567d1:;
  /* 10c567d1 jmp 0x10c56626 */
  goto L_10c56626;
L_10c567d6:;
  /* 10c567d6 mov esp, ebp */
  ESP = (EBP);
  /* 10c567d8 pop ebp */
  EBP = (pop32());
  /* 10c567d9 ret  */
  ESPCHK(0x10c565f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067e0 @ 0x10c567e0 (104 bytes, 38 insns) */
void f_10c567e0(void) {
  FTRACE(0x10c567e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c567e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c567e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c567e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c567e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c567e8 jne 0x10c567ec */
  if (!C.zf) goto L_10c567ec;
  /* 10c567ea jmp 0x10c56844 */
  goto L_10c56844;
L_10c567ec:;
  /* 10c567ec push 9 */
  push32((uint32_t)(0x9u));
  /* 10c567ee call 0x10c56070 */
  push32(0x10c567f3u); f_10c56070();
  /* 10c567f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c567f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c567f9 push eax */
  push32((uint32_t)(EAX));
  /* 10c567fa call 0x10c56970 */
  push32(0x10c567ffu); f_10c56970();
  /* 10c567ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56802 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c56805 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c56809 je 0x10c56827 */
  if (C.zf) goto L_10c56827;
  /* 10c5680b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c5680e push ecx */
  push32((uint32_t)(ECX));
  /* 10c5680f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c56812 push edx */
  push32((uint32_t)(EDX));
  /* 10c56813 call 0x10c56a30 */
  push32(0x10c56818u); f_10c56a30();
  /* 10c56818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5681b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c5681d call 0x10c56110 */
  push32(0x10c56822u); f_10c56110();
  /* 10c56822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56825 jmp 0x10c56844 */
  goto L_10c56844;
L_10c56827:;
  /* 10c56827 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c56829 call 0x10c56110 */
  push32(0x10c5682eu); f_10c56110();
  /* 10c5682e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c56834 push eax */
  push32((uint32_t)(EAX));
  /* 10c56835 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c56837 mov ecx, dword ptr [0x10c7fdac] */
  ECX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c5683d push ecx */
  push32((uint32_t)(ECX));
  /* 10c5683e call dword ptr [0x10c802b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c802b0))), 0x10c56844u);
L_10c56844:;
  /* 10c56844 mov esp, ebp */
  ESP = (EBP);
  /* 10c56846 pop ebp */
  EBP = (pop32());
  /* 10c56847 ret  */
  ESPCHK(0x10c567e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006850 @ 0x10c56850 (116 bytes, 34 insns) */
void f_10c56850(void) {
  FTRACE(0x10c56850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c56850 push ebp */
  push32((uint32_t)(EBP));
  /* 10c56851 mov ebp, esp */
  EBP = (ESP);
  /* 10c56853 push ecx */
  push32((uint32_t)(ECX));
  /* 10c56854 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10c5685b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c5685d call 0x10c56070 */
  push32(0x10c56862u); f_10c56070();
  /* 10c56862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c56865 call 0x10c57f60 */
  push32(0x10c5686au); f_10c57f60();
  /* 10c5686a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c5686c jge 0x10c56875 */
  if ((C.sf==C.of)) goto L_10c56875;
  /* 10c5686e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10c56875:;
  /* 10c56875 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c56877 call 0x10c56110 */
  push32(0x10c5687cu); f_10c56110();
  /* 10c5687c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c5687f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c56881 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c56883 mov eax, dword ptr [0x10c7fdac] */
  EAX = (r32((uint32_t)(0x10c7fdac)));
  /* 10c56888 push eax */
  push32((uint32_t)(EAX));
  /* 10c56889 call dword ptr [0x10c80290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80290))), 0x10c5688fu);
  /* 10c5688f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c56891 jne 0x10c568bd */
  if (!C.zf) goto L_10c568bd;
  /* 10c56893 call dword ptr [0x10c80270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c80270))), 0x10c56899u);
  /* 10c56899 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c5689c jne 0x10c568b6 */
  if (!C.zf) goto L_10c568b6;
  /* 10c5689e call 0x10c5a550 */
  push32(0x10c568a3u); f_10c5a550();
  /* 10c568a3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10c568a9 call 0x10c5a540 */
  push32(0x10c568aeu); f_10c5a540();
  /* 10c568ae mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10c568b4 jmp 0x10c568bd */
  goto L_10c568bd;
L_10c568b6:;
  /* 10c568b6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10c568bd:;
  /* 10c568bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c568c0 mov esp, ebp */
  ESP = (EBP);
  /* 10c568c2 pop ebp */
  EBP = (pop32());
  /* 10c568c3 ret  */
  ESPCHK(0x10c56850u, _esp0);
  ESP += 4; return;
}

/* FUN_100068d0 @ 0x10c568d0 (10 bytes, 5 insns) */
void f_10c568d0(void) {
  FTRACE(0x10c568d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c568d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c568d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c568d3 call 0x10c56850 */
  push32(0x10c568d8u); f_10c56850();
  /* 10c568d8 pop ebp */
  EBP = (pop32());
  /* 10c568d9 ret  */
  ESPCHK(0x10c568d0u, _esp0);
  ESP += 4; return;
}

