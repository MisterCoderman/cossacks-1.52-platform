#include "recomp.h"

/* OnInit @ 0x12211005 (5 bytes, 1 insns) */
void f_12211005(void) {
  FTRACE(0x12211005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12211005 jmp 0x12211090 */
  f_12211090(); return;
}

/* thunk_FUN_10001030 @ 0x1221100a (5 bytes, 1 insns) */
void f_1221100a(void) {
  FTRACE(0x1221100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221100a jmp 0x12211030 */
  f_12211030(); return;
}

/* ProcessScenary @ 0x1221100f (5 bytes, 1 insns) */
void f_1221100f(void) {
  FTRACE(0x1221100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221100f jmp 0x12211b30 */
  f_12211b30(); return;
}

/* FUN_10001030 @ 0x12211030 (67 bytes, 26 insns) */
void f_12211030(void) {
  FTRACE(0x12211030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12211030 push ebp */
  push32((uint32_t)(EBP));
  /* 12211031 mov ebp, esp */
  EBP = (ESP);
  /* 12211033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12211036 push ebx */
  push32((uint32_t)(EBX));
  /* 12211037 push esi */
  push32((uint32_t)(ESI));
  /* 12211038 push edi */
  push32((uint32_t)(EDI));
  /* 12211039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1221103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12211041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12211046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12211048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211052 je 0x12211056 */
  if (C.zf) goto L_12211056;
  /* 12211054 jmp 0x1221105b */
  goto L_1221105b;
L_12211056:;
  /* 12211056 call 0x12211005 */
  push32(0x1221105bu); f_12211005();
L_1221105b:;
  /* 1221105b mov eax, 1 */
  EAX = (0x1u);
  /* 12211060 pop edi */
  EDI = (pop32());
  /* 12211061 pop esi */
  ESI = (pop32());
  /* 12211062 pop ebx */
  EBX = (pop32());
  /* 12211063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211068 call 0x12213e20 */
  push32(0x1221106du); f_12213e20();
  /* 1221106d mov esp, ebp */
  ESP = (EBP);
  /* 1221106f pop ebp */
  EBP = (pop32());
  /* 12211070 ret 0xc */
  ESPCHK(0x12211030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12211090 (2167 bytes, 588 insns) */
void f_12211090(void) {
  FTRACE(0x12211090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12211090 push ebp */
  push32((uint32_t)(EBP));
  /* 12211091 mov ebp, esp */
  EBP = (ESP);
  /* 12211093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12211096 push ebx */
  push32((uint32_t)(EBX));
  /* 12211097 push esi */
  push32((uint32_t)(ESI));
  /* 12211098 push edi */
  push32((uint32_t)(EDI));
  /* 12211099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1221109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 122110a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 122110a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 122110a8 mov esi, esp */
  ESI = (ESP);
  /* 122110aa push 0x1223b234 */
  push32((uint32_t)(0x1223b234u));
  /* 122110af push 0x122404c8 */
  push32((uint32_t)(0x122404c8u));
  /* 122110b4 call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x122110bau);
  /* 122110ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122110bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122110bf call 0x12213e20 */
  push32(0x122110c4u); f_12213e20();
  /* 122110c4 mov esi, esp */
  ESI = (ESP);
  /* 122110c6 push 0x1223b230 */
  push32((uint32_t)(0x1223b230u));
  /* 122110cb push 0x122404d0 */
  push32((uint32_t)(0x122404d0u));
  /* 122110d0 call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x122110d6u);
  /* 122110d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122110d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122110db call 0x12213e20 */
  push32(0x122110e0u); f_12213e20();
  /* 122110e0 mov esi, esp */
  ESI = (ESP);
  /* 122110e2 push 0x1223b22c */
  push32((uint32_t)(0x1223b22cu));
  /* 122110e7 push 0x122404d8 */
  push32((uint32_t)(0x122404d8u));
  /* 122110ec call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x122110f2u);
  /* 122110f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122110f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122110f7 call 0x12213e20 */
  push32(0x122110fcu); f_12213e20();
  /* 122110fc mov esi, esp */
  ESI = (ESP);
  /* 122110fe push 0x1223b228 */
  push32((uint32_t)(0x1223b228u));
  /* 12211103 push 0x122404e0 */
  push32((uint32_t)(0x122404e0u));
  /* 12211108 call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x1221110eu);
  /* 1221110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211113 call 0x12213e20 */
  push32(0x12211118u); f_12213e20();
  /* 12211118 mov esi, esp */
  ESI = (ESP);
  /* 1221111a push 0x1223b224 */
  push32((uint32_t)(0x1223b224u));
  /* 1221111f push 0x122404f0 */
  push32((uint32_t)(0x122404f0u));
  /* 12211124 call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x1221112au);
  /* 1221112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221112f call 0x12213e20 */
  push32(0x12211134u); f_12213e20();
  /* 12211134 mov esi, esp */
  ESI = (ESP);
  /* 12211136 push 0x1223b220 */
  push32((uint32_t)(0x1223b220u));
  /* 1221113b push 0x122404f8 */
  push32((uint32_t)(0x122404f8u));
  /* 12211140 call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x12211146u);
  /* 12211146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221114b call 0x12213e20 */
  push32(0x12211150u); f_12213e20();
  /* 12211150 mov esi, esp */
  ESI = (ESP);
  /* 12211152 push 0x1223b21c */
  push32((uint32_t)(0x1223b21cu));
  /* 12211157 push 0x12240508 */
  push32((uint32_t)(0x12240508u));
  /* 1221115c call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x12211162u);
  /* 12211162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211167 call 0x12213e20 */
  push32(0x1221116cu); f_12213e20();
  /* 1221116c mov esi, esp */
  ESI = (ESP);
  /* 1221116e push 0x1223b218 */
  push32((uint32_t)(0x1223b218u));
  /* 12211173 push 0x12240510 */
  push32((uint32_t)(0x12240510u));
  /* 12211178 call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x1221117eu);
  /* 1221117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211183 call 0x12213e20 */
  push32(0x12211188u); f_12213e20();
  /* 12211188 mov esi, esp */
  ESI = (ESP);
  /* 1221118a push 0x1223b214 */
  push32((uint32_t)(0x1223b214u));
  /* 1221118f push 0x12240518 */
  push32((uint32_t)(0x12240518u));
  /* 12211194 call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x1221119au);
  /* 1221119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221119f call 0x12213e20 */
  push32(0x122111a4u); f_12213e20();
  /* 122111a4 mov esi, esp */
  ESI = (ESP);
  /* 122111a6 push 0x1223b210 */
  push32((uint32_t)(0x1223b210u));
  /* 122111ab push 0x12240540 */
  push32((uint32_t)(0x12240540u));
  /* 122111b0 call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x122111b6u);
  /* 122111b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122111b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122111bb call 0x12213e20 */
  push32(0x122111c0u); f_12213e20();
  /* 122111c0 mov esi, esp */
  ESI = (ESP);
  /* 122111c2 push 0x1223b20c */
  push32((uint32_t)(0x1223b20cu));
  /* 122111c7 push 0x12240548 */
  push32((uint32_t)(0x12240548u));
  /* 122111cc call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x122111d2u);
  /* 122111d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122111d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122111d7 call 0x12213e20 */
  push32(0x122111dcu); f_12213e20();
  /* 122111dc mov esi, esp */
  ESI = (ESP);
  /* 122111de push 0x1223b208 */
  push32((uint32_t)(0x1223b208u));
  /* 122111e3 push 0x12240550 */
  push32((uint32_t)(0x12240550u));
  /* 122111e8 call dword ptr [0x122434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b8))), 0x122111eeu);
  /* 122111ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122111f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122111f3 call 0x12213e20 */
  push32(0x122111f8u); f_12213e20();
  /* 122111f8 mov esi, esp */
  ESI = (ESP);
  /* 122111fa push 8 */
  push32((uint32_t)(0x8u));
  /* 122111fc push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 12211201 call dword ptr [0x122434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c8))), 0x12211207u);
  /* 12211207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221120a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221120c call 0x12213e20 */
  push32(0x12211211u); f_12213e20();
  /* 12211211 mov esi, esp */
  ESI = (ESP);
  /* 12211213 push 8 */
  push32((uint32_t)(0x8u));
  /* 12211215 push 0x12240468 */
  push32((uint32_t)(0x12240468u));
  /* 1221121a call dword ptr [0x122434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c8))), 0x12211220u);
  /* 12211220 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211223 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211225 call 0x12213e20 */
  push32(0x1221122au); f_12213e20();
  /* 1221122a mov esi, esp */
  ESI = (ESP);
  /* 1221122c push 8 */
  push32((uint32_t)(0x8u));
  /* 1221122e push 0x12240470 */
  push32((uint32_t)(0x12240470u));
  /* 12211233 call dword ptr [0x122434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c8))), 0x12211239u);
  /* 12211239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221123c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221123e call 0x12213e20 */
  push32(0x12211243u); f_12213e20();
  /* 12211243 mov esi, esp */
  ESI = (ESP);
  /* 12211245 push 8 */
  push32((uint32_t)(0x8u));
  /* 12211247 push 0x12240478 */
  push32((uint32_t)(0x12240478u));
  /* 1221124c call dword ptr [0x122434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c8))), 0x12211252u);
  /* 12211252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211257 call 0x12213e20 */
  push32(0x1221125cu); f_12213e20();
  /* 1221125c mov esi, esp */
  ESI = (ESP);
  /* 1221125e push 8 */
  push32((uint32_t)(0x8u));
  /* 12211260 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12211265 call dword ptr [0x122434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c8))), 0x1221126bu);
  /* 1221126b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221126e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211270 call 0x12213e20 */
  push32(0x12211275u); f_12213e20();
  /* 12211275 mov esi, esp */
  ESI = (ESP);
  /* 12211277 push 8 */
  push32((uint32_t)(0x8u));
  /* 12211279 push 0x12240488 */
  push32((uint32_t)(0x12240488u));
  /* 1221127e call dword ptr [0x122434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c8))), 0x12211284u);
  /* 12211284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211287 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211289 call 0x12213e20 */
  push32(0x1221128eu); f_12213e20();
  /* 1221128e mov esi, esp */
  ESI = (ESP);
  /* 12211290 push 8 */
  push32((uint32_t)(0x8u));
  /* 12211292 push 0x12240490 */
  push32((uint32_t)(0x12240490u));
  /* 12211297 call dword ptr [0x122434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c8))), 0x1221129du);
  /* 1221129d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122112a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122112a2 call 0x12213e20 */
  push32(0x122112a7u); f_12213e20();
  /* 122112a7 mov esi, esp */
  ESI = (ESP);
  /* 122112a9 push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 122112ae call dword ptr [0x122434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434cc))), 0x122112b4u);
  /* 122112b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122112b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122112b9 call 0x12213e20 */
  push32(0x122112beu); f_12213e20();
  /* 122112be mov esi, esp */
  ESI = (ESP);
  /* 122112c0 push 0x12240468 */
  push32((uint32_t)(0x12240468u));
  /* 122112c5 call dword ptr [0x122434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434cc))), 0x122112cbu);
  /* 122112cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122112ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122112d0 call 0x12213e20 */
  push32(0x122112d5u); f_12213e20();
  /* 122112d5 mov esi, esp */
  ESI = (ESP);
  /* 122112d7 push 0x12240470 */
  push32((uint32_t)(0x12240470u));
  /* 122112dc call dword ptr [0x122434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434cc))), 0x122112e2u);
  /* 122112e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122112e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122112e7 call 0x12213e20 */
  push32(0x122112ecu); f_12213e20();
  /* 122112ec mov esi, esp */
  ESI = (ESP);
  /* 122112ee push 0x12240478 */
  push32((uint32_t)(0x12240478u));
  /* 122112f3 call dword ptr [0x122434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434cc))), 0x122112f9u);
  /* 122112f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122112fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122112fe call 0x12213e20 */
  push32(0x12211303u); f_12213e20();
  /* 12211303 mov esi, esp */
  ESI = (ESP);
  /* 12211305 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 1221130a call dword ptr [0x122434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434cc))), 0x12211310u);
  /* 12211310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211315 call 0x12213e20 */
  push32(0x1221131au); f_12213e20();
  /* 1221131a mov esi, esp */
  ESI = (ESP);
  /* 1221131c push 0x12240488 */
  push32((uint32_t)(0x12240488u));
  /* 12211321 call dword ptr [0x122434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434cc))), 0x12211327u);
  /* 12211327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221132a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221132c call 0x12213e20 */
  push32(0x12211331u); f_12213e20();
  /* 12211331 mov esi, esp */
  ESI = (ESP);
  /* 12211333 push 0x12240490 */
  push32((uint32_t)(0x12240490u));
  /* 12211338 call dword ptr [0x122434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434cc))), 0x1221133eu);
  /* 1221133e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211343 call 0x12213e20 */
  push32(0x12211348u); f_12213e20();
  /* 12211348 mov esi, esp */
  ESI = (ESP);
  /* 1221134a push 0x1223b204 */
  push32((uint32_t)(0x1223b204u));
  /* 1221134f push 0x12240498 */
  push32((uint32_t)(0x12240498u));
  /* 12211354 call dword ptr [0x122434c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c4))), 0x1221135au);
  /* 1221135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221135f call 0x12213e20 */
  push32(0x12211364u); f_12213e20();
  /* 12211364 mov esi, esp */
  ESI = (ESP);
  /* 12211366 push 0x1223b200 */
  push32((uint32_t)(0x1223b200u));
  /* 1221136b push 0x122404a0 */
  push32((uint32_t)(0x122404a0u));
  /* 12211370 call dword ptr [0x122434c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c4))), 0x12211376u);
  /* 12211376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221137b call 0x12213e20 */
  push32(0x12211380u); f_12213e20();
  /* 12211380 mov esi, esp */
  ESI = (ESP);
  /* 12211382 push 0x1223b1fc */
  push32((uint32_t)(0x1223b1fcu));
  /* 12211387 push 0x122404a8 */
  push32((uint32_t)(0x122404a8u));
  /* 1221138c call dword ptr [0x122434c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c4))), 0x12211392u);
  /* 12211392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211397 call 0x12213e20 */
  push32(0x1221139cu); f_12213e20();
  /* 1221139c mov esi, esp */
  ESI = (ESP);
  /* 1221139e push 0x1223b1f4 */
  push32((uint32_t)(0x1223b1f4u));
  /* 122113a3 push 0x122404b8 */
  push32((uint32_t)(0x122404b8u));
  /* 122113a8 call dword ptr [0x122434d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d4))), 0x122113aeu);
  /* 122113ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122113b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122113b3 call 0x12213e20 */
  push32(0x122113b8u); f_12213e20();
  /* 122113b8 mov esi, esp */
  ESI = (ESP);
  /* 122113ba push 0x1223b1e8 */
  push32((uint32_t)(0x1223b1e8u));
  /* 122113bf push 0x122404c0 */
  push32((uint32_t)(0x122404c0u));
  /* 122113c4 call dword ptr [0x122434d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d4))), 0x122113cau);
  /* 122113ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122113cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122113cf call 0x12213e20 */
  push32(0x122113d4u); f_12213e20();
  /* 122113d4 mov esi, esp */
  ESI = (ESP);
  /* 122113d6 push 0x1223b1d4 */
  push32((uint32_t)(0x1223b1d4u));
  /* 122113db push 0x12240418 */
  push32((uint32_t)(0x12240418u));
  /* 122113e0 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x122113e6u);
  /* 122113e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122113e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122113eb call 0x12213e20 */
  push32(0x122113f0u); f_12213e20();
  /* 122113f0 mov esi, esp */
  ESI = (ESP);
  /* 122113f2 push 0x1223b1c4 */
  push32((uint32_t)(0x1223b1c4u));
  /* 122113f7 push 0x12240420 */
  push32((uint32_t)(0x12240420u));
  /* 122113fc call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x12211402u);
  /* 12211402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211407 call 0x12213e20 */
  push32(0x1221140cu); f_12213e20();
  /* 1221140c mov esi, esp */
  ESI = (ESP);
  /* 1221140e push 0x1223b1b0 */
  push32((uint32_t)(0x1223b1b0u));
  /* 12211413 push 0x12240428 */
  push32((uint32_t)(0x12240428u));
  /* 12211418 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x1221141eu);
  /* 1221141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211423 call 0x12213e20 */
  push32(0x12211428u); f_12213e20();
  /* 12211428 mov esi, esp */
  ESI = (ESP);
  /* 1221142a push 0x1223b19c */
  push32((uint32_t)(0x1223b19cu));
  /* 1221142f push 0x12240430 */
  push32((uint32_t)(0x12240430u));
  /* 12211434 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x1221143au);
  /* 1221143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221143f call 0x12213e20 */
  push32(0x12211444u); f_12213e20();
  /* 12211444 mov esi, esp */
  ESI = (ESP);
  /* 12211446 push 0x1223b188 */
  push32((uint32_t)(0x1223b188u));
  /* 1221144b push 0x12240438 */
  push32((uint32_t)(0x12240438u));
  /* 12211450 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x12211456u);
  /* 12211456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221145b call 0x12213e20 */
  push32(0x12211460u); f_12213e20();
  /* 12211460 mov esi, esp */
  ESI = (ESP);
  /* 12211462 push 0x1223b178 */
  push32((uint32_t)(0x1223b178u));
  /* 12211467 push 0x12240440 */
  push32((uint32_t)(0x12240440u));
  /* 1221146c call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x12211472u);
  /* 12211472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211477 call 0x12213e20 */
  push32(0x1221147cu); f_12213e20();
  /* 1221147c mov esi, esp */
  ESI = (ESP);
  /* 1221147e push 0x1223b15c */
  push32((uint32_t)(0x1223b15cu));
  /* 12211483 push 0x12240448 */
  push32((uint32_t)(0x12240448u));
  /* 12211488 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x1221148eu);
  /* 1221148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211493 call 0x12213e20 */
  push32(0x12211498u); f_12213e20();
  /* 12211498 mov esi, esp */
  ESI = (ESP);
  /* 1221149a push 0x1223b148 */
  push32((uint32_t)(0x1223b148u));
  /* 1221149f push 0x12240450 */
  push32((uint32_t)(0x12240450u));
  /* 122114a4 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x122114aau);
  /* 122114aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122114ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122114af call 0x12213e20 */
  push32(0x122114b4u); f_12213e20();
  /* 122114b4 mov esi, esp */
  ESI = (ESP);
  /* 122114b6 push 0x1223b130 */
  push32((uint32_t)(0x1223b130u));
  /* 122114bb push 0x12240460 */
  push32((uint32_t)(0x12240460u));
  /* 122114c0 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x122114c6u);
  /* 122114c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122114c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122114cb call 0x12213e20 */
  push32(0x122114d0u); f_12213e20();
  /* 122114d0 mov esi, esp */
  ESI = (ESP);
  /* 122114d2 push 0x1223b118 */
  push32((uint32_t)(0x1223b118u));
  /* 122114d7 push 0x122403e0 */
  push32((uint32_t)(0x122403e0u));
  /* 122114dc call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x122114e2u);
  /* 122114e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122114e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122114e7 call 0x12213e20 */
  push32(0x122114ecu); f_12213e20();
  /* 122114ec mov esi, esp */
  ESI = (ESP);
  /* 122114ee push 0x1223b104 */
  push32((uint32_t)(0x1223b104u));
  /* 122114f3 push 0x122403e8 */
  push32((uint32_t)(0x122403e8u));
  /* 122114f8 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x122114feu);
  /* 122114fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211503 call 0x12213e20 */
  push32(0x12211508u); f_12213e20();
  /* 12211508 mov esi, esp */
  ESI = (ESP);
  /* 1221150a push 0x1223b0f4 */
  push32((uint32_t)(0x1223b0f4u));
  /* 1221150f push 0x122403f0 */
  push32((uint32_t)(0x122403f0u));
  /* 12211514 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x1221151au);
  /* 1221151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221151f call 0x12213e20 */
  push32(0x12211524u); f_12213e20();
  /* 12211524 mov esi, esp */
  ESI = (ESP);
  /* 12211526 push 0x1223b0e8 */
  push32((uint32_t)(0x1223b0e8u));
  /* 1221152b push 0x122403f8 */
  push32((uint32_t)(0x122403f8u));
  /* 12211530 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x12211536u);
  /* 12211536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221153b call 0x12213e20 */
  push32(0x12211540u); f_12213e20();
  /* 12211540 mov esi, esp */
  ESI = (ESP);
  /* 12211542 push 0x1223b0dc */
  push32((uint32_t)(0x1223b0dcu));
  /* 12211547 push 0x12240400 */
  push32((uint32_t)(0x12240400u));
  /* 1221154c call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x12211552u);
  /* 12211552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211557 call 0x12213e20 */
  push32(0x1221155cu); f_12213e20();
  /* 1221155c mov esi, esp */
  ESI = (ESP);
  /* 1221155e push 0x1223b0c0 */
  push32((uint32_t)(0x1223b0c0u));
  /* 12211563 push 0x12240408 */
  push32((uint32_t)(0x12240408u));
  /* 12211568 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x1221156eu);
  /* 1221156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211573 call 0x12213e20 */
  push32(0x12211578u); f_12213e20();
  /* 12211578 mov esi, esp */
  ESI = (ESP);
  /* 1221157a push 0x1223b0b0 */
  push32((uint32_t)(0x1223b0b0u));
  /* 1221157f push 0x12240410 */
  push32((uint32_t)(0x12240410u));
  /* 12211584 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x1221158au);
  /* 1221158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221158f call 0x12213e20 */
  push32(0x12211594u); f_12213e20();
  /* 12211594 mov esi, esp */
  ESI = (ESP);
  /* 12211596 push 0x1223b098 */
  push32((uint32_t)(0x1223b098u));
  /* 1221159b push 0x12240528 */
  push32((uint32_t)(0x12240528u));
  /* 122115a0 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x122115a6u);
  /* 122115a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122115a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122115ab call 0x12213e20 */
  push32(0x122115b0u); f_12213e20();
  /* 122115b0 mov esi, esp */
  ESI = (ESP);
  /* 122115b2 push 0x1223b084 */
  push32((uint32_t)(0x1223b084u));
  /* 122115b7 push 0x12240530 */
  push32((uint32_t)(0x12240530u));
  /* 122115bc call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x122115c2u);
  /* 122115c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122115c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122115c7 call 0x12213e20 */
  push32(0x122115ccu); f_12213e20();
  /* 122115cc mov esi, esp */
  ESI = (ESP);
  /* 122115ce push 0x1223b074 */
  push32((uint32_t)(0x1223b074u));
  /* 122115d3 push 0x12240538 */
  push32((uint32_t)(0x12240538u));
  /* 122115d8 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x122115deu);
  /* 122115de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122115e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122115e3 call 0x12213e20 */
  push32(0x122115e8u); f_12213e20();
  /* 122115e8 mov esi, esp */
  ESI = (ESP);
  /* 122115ea push 0x1223b064 */
  push32((uint32_t)(0x1223b064u));
  /* 122115ef push 0x122404b0 */
  push32((uint32_t)(0x122404b0u));
  /* 122115f4 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x122115fau);
  /* 122115fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122115fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122115ff call 0x12213e20 */
  push32(0x12211604u); f_12213e20();
  /* 12211604 mov esi, esp */
  ESI = (ESP);
  /* 12211606 push 0x1223b054 */
  push32((uint32_t)(0x1223b054u));
  /* 1221160b push 0x12240558 */
  push32((uint32_t)(0x12240558u));
  /* 12211610 call dword ptr [0x122434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d8))), 0x12211616u);
  /* 12211616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221161b call 0x12213e20 */
  push32(0x12211620u); f_12213e20();
  /* 12211620 mov esi, esp */
  ESI = (ESP);
  /* 12211622 push 0x1223b04c */
  push32((uint32_t)(0x1223b04cu));
  /* 12211627 push 0x12240500 */
  push32((uint32_t)(0x12240500u));
  /* 1221162c call dword ptr [0x122434d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d0))), 0x12211632u);
  /* 12211632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211637 call 0x12213e20 */
  push32(0x1221163cu); f_12213e20();
  /* 1221163c mov esi, esp */
  ESI = (ESP);
  /* 1221163e push 0x1223b044 */
  push32((uint32_t)(0x1223b044u));
  /* 12211643 push 0x122404e8 */
  push32((uint32_t)(0x122404e8u));
  /* 12211648 call dword ptr [0x122434d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d0))), 0x1221164eu);
  /* 1221164e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211653 call 0x12213e20 */
  push32(0x12211658u); f_12213e20();
  /* 12211658 mov esi, esp */
  ESI = (ESP);
  /* 1221165a push 0x1223b038 */
  push32((uint32_t)(0x1223b038u));
  /* 1221165f push 0x12240520 */
  push32((uint32_t)(0x12240520u));
  /* 12211664 call dword ptr [0x122434d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434d0))), 0x1221166au);
  /* 1221166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221166f call 0x12213e20 */
  push32(0x12211674u); f_12213e20();
  /* 12211674 mov esi, esp */
  ESI = (ESP);
  /* 12211676 push 0x1223b030 */
  push32((uint32_t)(0x1223b030u));
  /* 1221167b push 1 */
  push32((uint32_t)(0x1u));
  /* 1221167d call dword ptr [0x122434e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e0))), 0x12211683u);
  /* 12211683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211688 call 0x12213e20 */
  push32(0x1221168du); f_12213e20();
  /* 1221168d mov esi, esp */
  ESI = (ESP);
  /* 1221168f push 0x1223b030 */
  push32((uint32_t)(0x1223b030u));
  /* 12211694 push 2 */
  push32((uint32_t)(0x2u));
  /* 12211696 call dword ptr [0x122434e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e0))), 0x1221169cu);
  /* 1221169c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221169f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122116a1 call 0x12213e20 */
  push32(0x122116a6u); f_12213e20();
  /* 122116a6 mov esi, esp */
  ESI = (ESP);
  /* 122116a8 push 0x1223b028 */
  push32((uint32_t)(0x1223b028u));
  /* 122116ad push 3 */
  push32((uint32_t)(0x3u));
  /* 122116af call dword ptr [0x122434e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e0))), 0x122116b5u);
  /* 122116b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122116b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122116ba call 0x12213e20 */
  push32(0x122116bfu); f_12213e20();
  /* 122116bf mov esi, esp */
  ESI = (ESP);
  /* 122116c1 push 0x1223b01c */
  push32((uint32_t)(0x1223b01cu));
  /* 122116c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 122116c8 call dword ptr [0x122434e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e0))), 0x122116ceu);
  /* 122116ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122116d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122116d3 call 0x12213e20 */
  push32(0x122116d8u); f_12213e20();
  /* 122116d8 mov esi, esp */
  ESI = (ESP);
  /* 122116da push 0 */
  push32((uint32_t)(0x0u));
  /* 122116dc push 0x12240418 */
  push32((uint32_t)(0x12240418u));
  /* 122116e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122116e3 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x122116e9u);
  /* 122116e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122116ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122116ee call 0x12213e20 */
  push32(0x122116f3u); f_12213e20();
  /* 122116f3 mov esi, esp */
  ESI = (ESP);
  /* 122116f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122116f7 push 0x12240420 */
  push32((uint32_t)(0x12240420u));
  /* 122116fc push 0 */
  push32((uint32_t)(0x0u));
  /* 122116fe call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x12211704u);
  /* 12211704 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211707 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211709 call 0x12213e20 */
  push32(0x1221170eu); f_12213e20();
  /* 1221170e mov esi, esp */
  ESI = (ESP);
  /* 12211710 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211712 push 0x12240428 */
  push32((uint32_t)(0x12240428u));
  /* 12211717 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211719 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x1221171fu);
  /* 1221171f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211724 call 0x12213e20 */
  push32(0x12211729u); f_12213e20();
  /* 12211729 mov esi, esp */
  ESI = (ESP);
  /* 1221172b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221172d push 0x12240430 */
  push32((uint32_t)(0x12240430u));
  /* 12211732 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211734 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x1221173au);
  /* 1221173a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221173d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221173f call 0x12213e20 */
  push32(0x12211744u); f_12213e20();
  /* 12211744 mov esi, esp */
  ESI = (ESP);
  /* 12211746 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211748 push 0x12240438 */
  push32((uint32_t)(0x12240438u));
  /* 1221174d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221174f call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x12211755u);
  /* 12211755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211758 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221175a call 0x12213e20 */
  push32(0x1221175fu); f_12213e20();
  /* 1221175f mov esi, esp */
  ESI = (ESP);
  /* 12211761 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211763 push 0x12240440 */
  push32((uint32_t)(0x12240440u));
  /* 12211768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221176a call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x12211770u);
  /* 12211770 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211775 call 0x12213e20 */
  push32(0x1221177au); f_12213e20();
  /* 1221177a mov esi, esp */
  ESI = (ESP);
  /* 1221177c push 0 */
  push32((uint32_t)(0x0u));
  /* 1221177e push 0x12240448 */
  push32((uint32_t)(0x12240448u));
  /* 12211783 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211785 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x1221178bu);
  /* 1221178b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221178e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211790 call 0x12213e20 */
  push32(0x12211795u); f_12213e20();
  /* 12211795 mov esi, esp */
  ESI = (ESP);
  /* 12211797 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211799 push 0x12240450 */
  push32((uint32_t)(0x12240450u));
  /* 1221179e push 0 */
  push32((uint32_t)(0x0u));
  /* 122117a0 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x122117a6u);
  /* 122117a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122117a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122117ab call 0x12213e20 */
  push32(0x122117b0u); f_12213e20();
  /* 122117b0 mov esi, esp */
  ESI = (ESP);
  /* 122117b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122117b4 push 0x12240460 */
  push32((uint32_t)(0x12240460u));
  /* 122117b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122117bb call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x122117c1u);
  /* 122117c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122117c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122117c6 call 0x12213e20 */
  push32(0x122117cbu); f_12213e20();
  /* 122117cb mov esi, esp */
  ESI = (ESP);
  /* 122117cd push 0 */
  push32((uint32_t)(0x0u));
  /* 122117cf push 0x122403e0 */
  push32((uint32_t)(0x122403e0u));
  /* 122117d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122117d6 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x122117dcu);
  /* 122117dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122117df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122117e1 call 0x12213e20 */
  push32(0x122117e6u); f_12213e20();
  /* 122117e6 mov esi, esp */
  ESI = (ESP);
  /* 122117e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122117ea push 0x122403e8 */
  push32((uint32_t)(0x122403e8u));
  /* 122117ef push 0 */
  push32((uint32_t)(0x0u));
  /* 122117f1 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x122117f7u);
  /* 122117f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122117fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122117fc call 0x12213e20 */
  push32(0x12211801u); f_12213e20();
  /* 12211801 mov esi, esp */
  ESI = (ESP);
  /* 12211803 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211805 push 0x122403f0 */
  push32((uint32_t)(0x122403f0u));
  /* 1221180a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221180c call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x12211812u);
  /* 12211812 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211815 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211817 call 0x12213e20 */
  push32(0x1221181cu); f_12213e20();
  /* 1221181c mov esi, esp */
  ESI = (ESP);
  /* 1221181e push 0 */
  push32((uint32_t)(0x0u));
  /* 12211820 push 0x122403f8 */
  push32((uint32_t)(0x122403f8u));
  /* 12211825 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211827 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x1221182du);
  /* 1221182d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211830 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211832 call 0x12213e20 */
  push32(0x12211837u); f_12213e20();
  /* 12211837 mov esi, esp */
  ESI = (ESP);
  /* 12211839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221183b push 0x12240410 */
  push32((uint32_t)(0x12240410u));
  /* 12211840 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211842 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x12211848u);
  /* 12211848 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221184b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221184d call 0x12213e20 */
  push32(0x12211852u); f_12213e20();
  /* 12211852 mov esi, esp */
  ESI = (ESP);
  /* 12211854 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211856 push 0x12240400 */
  push32((uint32_t)(0x12240400u));
  /* 1221185b push 1 */
  push32((uint32_t)(0x1u));
  /* 1221185d call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x12211863u);
  /* 12211863 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211866 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211868 call 0x12213e20 */
  push32(0x1221186du); f_12213e20();
  /* 1221186d mov esi, esp */
  ESI = (ESP);
  /* 1221186f push 0 */
  push32((uint32_t)(0x0u));
  /* 12211871 push 0x122403e8 */
  push32((uint32_t)(0x122403e8u));
  /* 12211876 push 1 */
  push32((uint32_t)(0x1u));
  /* 12211878 call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x1221187eu);
  /* 1221187e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211883 call 0x12213e20 */
  push32(0x12211888u); f_12213e20();
  /* 12211888 mov esi, esp */
  ESI = (ESP);
  /* 1221188a push 9 */
  push32((uint32_t)(0x9u));
  /* 1221188c push 0 */
  push32((uint32_t)(0x0u));
  /* 1221188e call dword ptr [0x122434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434dc))), 0x12211894u);
  /* 12211894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211899 call 0x12213e20 */
  push32(0x1221189eu); f_12213e20();
  /* 1221189e mov esi, esp */
  ESI = (ESP);
  /* 122118a0 push 6 */
  push32((uint32_t)(0x6u));
  /* 122118a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 122118a4 call dword ptr [0x122434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434dc))), 0x122118aau);
  /* 122118aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122118ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122118af call 0x12213e20 */
  push32(0x122118b4u); f_12213e20();
  /* 122118b4 mov esi, esp */
  ESI = (ESP);
  /* 122118b6 push 6 */
  push32((uint32_t)(0x6u));
  /* 122118b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 122118ba call dword ptr [0x122434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434dc))), 0x122118c0u);
  /* 122118c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122118c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122118c5 call 0x12213e20 */
  push32(0x122118cau); f_12213e20();
  /* 122118ca mov esi, esp */
  ESI = (ESP);
  /* 122118cc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122118ce push 3 */
  push32((uint32_t)(0x3u));
  /* 122118d0 call dword ptr [0x122434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434dc))), 0x122118d6u);
  /* 122118d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122118d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122118db call 0x12213e20 */
  push32(0x122118e0u); f_12213e20();
  /* 122118e0 mov esi, esp */
  ESI = (ESP);
  /* 122118e2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 122118e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 122118e6 call dword ptr [0x122434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434dc))), 0x122118ecu);
  /* 122118ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122118ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122118f1 call 0x12213e20 */
  push32(0x122118f6u); f_12213e20();
  /* 122118f6 pop edi */
  EDI = (pop32());
  /* 122118f7 pop esi */
  ESI = (pop32());
  /* 122118f8 pop ebx */
  EBX = (pop32());
  /* 122118f9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122118fc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122118fe call 0x12213e20 */
  push32(0x12211903u); f_12213e20();
  /* 12211903 mov esp, ebp */
  ESP = (EBP);
  /* 12211905 pop ebp */
  EBP = (pop32());
  /* 12211906 ret  */
  ESPCHK(0x12211090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b30 @ 0x12211b30 (6944 bytes, 2035 insns) */
void f_12211b30(void) {
  FTRACE(0x12211b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12211b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12211b31 mov ebp, esp */
  EBP = (ESP);
  /* 12211b33 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12211b36 push ebx */
  push32((uint32_t)(EBX));
  /* 12211b37 push esi */
  push32((uint32_t)(ESI));
  /* 12211b38 push edi */
  push32((uint32_t)(EDI));
  /* 12211b39 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 12211b3c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 12211b41 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12211b46 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12211b48 mov esi, esp */
  ESI = (ESP);
  /* 12211b4a push 1 */
  push32((uint32_t)(0x1u));
  /* 12211b4c call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12211b52u);
  /* 12211b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211b55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211b57 call 0x12213e20 */
  push32(0x12211b5cu); f_12213e20();
  /* 12211b5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12211b61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12211b63 je 0x12212064 */
  if (C.zf) goto L_12212064;
  /* 12211b69 mov esi, esp */
  ESI = (ESP);
  /* 12211b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12211b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12211b6f call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12211b75u);
  /* 12211b75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211b78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211b7a call 0x12213e20 */
  push32(0x12211b7fu); f_12213e20();
  /* 12211b7f mov esi, esp */
  ESI = (ESP);
  /* 12211b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211b83 call dword ptr [0x12243448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243448))), 0x12211b89u);
  /* 12211b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211b8e call 0x12213e20 */
  push32(0x12211b93u); f_12213e20();
  /* 12211b93 imul eax, eax, 0x1194 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1194u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12211b99 mov ecx, 0x4e20 */
  ECX = (0x4e20u);
  /* 12211b9e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12211ba0 mov esi, esp */
  ESI = (ESP);
  /* 12211ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 12211ba3 push 3 */
  push32((uint32_t)(0x3u));
  /* 12211ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211ba7 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211badu);
  /* 12211bad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211bb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211bb2 call 0x12213e20 */
  push32(0x12211bb7u); f_12213e20();
  /* 12211bb7 mov esi, esp */
  ESI = (ESP);
  /* 12211bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211bbb call dword ptr [0x12243448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243448))), 0x12211bc1u);
  /* 12211bc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211bc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211bc6 call 0x12213e20 */
  push32(0x12211bcbu); f_12213e20();
  /* 12211bcb imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12211bd1 mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 12211bd6 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12211bd8 mov esi, esp */
  ESI = (ESP);
  /* 12211bda push edx */
  push32((uint32_t)(EDX));
  /* 12211bdb push 1 */
  push32((uint32_t)(0x1u));
  /* 12211bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 12211bdf call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211be5u);
  /* 12211be5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211be8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211bea call 0x12213e20 */
  push32(0x12211befu); f_12213e20();
  /* 12211bef mov esi, esp */
  ESI = (ESP);
  /* 12211bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211bf3 call dword ptr [0x12243448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243448))), 0x12211bf9u);
  /* 12211bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211bfe call 0x12213e20 */
  push32(0x12211c03u); f_12213e20();
  /* 12211c03 imul eax, eax, 0x2bc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2bcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12211c09 mov ecx, 0x1770 */
  ECX = (0x1770u);
  /* 12211c0e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12211c10 mov esi, esp */
  ESI = (ESP);
  /* 12211c12 push ecx */
  push32((uint32_t)(ECX));
  /* 12211c13 push 4 */
  push32((uint32_t)(0x4u));
  /* 12211c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211c17 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211c1du);
  /* 12211c1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211c20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211c22 call 0x12213e20 */
  push32(0x12211c27u); f_12213e20();
  /* 12211c27 mov esi, esp */
  ESI = (ESP);
  /* 12211c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211c2b call dword ptr [0x12243448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243448))), 0x12211c31u);
  /* 12211c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211c34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211c36 call 0x12213e20 */
  push32(0x12211c3bu); f_12213e20();
  /* 12211c3b imul eax, eax, 0x384 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x384u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12211c41 mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 12211c46 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12211c48 mov esi, esp */
  ESI = (ESP);
  /* 12211c4a push edx */
  push32((uint32_t)(EDX));
  /* 12211c4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12211c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12211c4f call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211c55u);
  /* 12211c55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211c58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211c5a call 0x12213e20 */
  push32(0x12211c5fu); f_12213e20();
  /* 12211c5f mov esi, esp */
  ESI = (ESP);
  /* 12211c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211c63 call dword ptr [0x12243448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243448))), 0x12211c69u);
  /* 12211c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211c6e call 0x12213e20 */
  push32(0x12211c73u); f_12213e20();
  /* 12211c73 imul eax, eax, 0x384 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x384u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12211c79 mov ecx, 0x1388 */
  ECX = (0x1388u);
  /* 12211c7e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12211c80 mov esi, esp */
  ESI = (ESP);
  /* 12211c82 push ecx */
  push32((uint32_t)(ECX));
  /* 12211c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211c87 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211c8du);
  /* 12211c8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211c90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211c92 call 0x12213e20 */
  push32(0x12211c97u); f_12213e20();
  /* 12211c97 mov esi, esp */
  ESI = (ESP);
  /* 12211c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211c9b call dword ptr [0x12243448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243448))), 0x12211ca1u);
  /* 12211ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211ca6 call 0x12213e20 */
  push32(0x12211cabu); f_12213e20();
  /* 12211cab imul eax, eax, 0x2bc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2bcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12211cb1 mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 12211cb6 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12211cb8 mov esi, esp */
  ESI = (ESP);
  /* 12211cba push edx */
  push32((uint32_t)(EDX));
  /* 12211cbb push 5 */
  push32((uint32_t)(0x5u));
  /* 12211cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12211cbf call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211cc5u);
  /* 12211cc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211cc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211cca call 0x12213e20 */
  push32(0x12211ccfu); f_12213e20();
  /* 12211ccf mov esi, esp */
  ESI = (ESP);
  /* 12211cd1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12211cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 12211cd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12211cda call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211ce0u);
  /* 12211ce0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211ce5 call 0x12213e20 */
  push32(0x12211ceau); f_12213e20();
  /* 12211cea mov esi, esp */
  ESI = (ESP);
  /* 12211cec push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12211cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12211cf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12211cf5 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211cfbu);
  /* 12211cfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211cfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211d00 call 0x12213e20 */
  push32(0x12211d05u); f_12213e20();
  /* 12211d05 mov esi, esp */
  ESI = (ESP);
  /* 12211d07 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12211d0c push 4 */
  push32((uint32_t)(0x4u));
  /* 12211d0e push 1 */
  push32((uint32_t)(0x1u));
  /* 12211d10 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211d16u);
  /* 12211d16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211d19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211d1b call 0x12213e20 */
  push32(0x12211d20u); f_12213e20();
  /* 12211d20 mov esi, esp */
  ESI = (ESP);
  /* 12211d22 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12211d27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12211d29 push 1 */
  push32((uint32_t)(0x1u));
  /* 12211d2b call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211d31u);
  /* 12211d31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211d34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211d36 call 0x12213e20 */
  push32(0x12211d3bu); f_12213e20();
  /* 12211d3b mov esi, esp */
  ESI = (ESP);
  /* 12211d3d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12211d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12211d46 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211d4cu);
  /* 12211d4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211d51 call 0x12213e20 */
  push32(0x12211d56u); f_12213e20();
  /* 12211d56 mov esi, esp */
  ESI = (ESP);
  /* 12211d58 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12211d5d push 5 */
  push32((uint32_t)(0x5u));
  /* 12211d5f push 1 */
  push32((uint32_t)(0x1u));
  /* 12211d61 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211d67u);
  /* 12211d67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211d6c call 0x12213e20 */
  push32(0x12211d71u); f_12213e20();
  /* 12211d71 mov esi, esp */
  ESI = (ESP);
  /* 12211d73 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211d78 push 3 */
  push32((uint32_t)(0x3u));
  /* 12211d7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12211d7c call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211d82u);
  /* 12211d82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211d87 call 0x12213e20 */
  push32(0x12211d8cu); f_12213e20();
  /* 12211d8c mov esi, esp */
  ESI = (ESP);
  /* 12211d8e push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211d93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12211d95 push 2 */
  push32((uint32_t)(0x2u));
  /* 12211d97 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211d9du);
  /* 12211d9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211da0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211da2 call 0x12213e20 */
  push32(0x12211da7u); f_12213e20();
  /* 12211da7 mov esi, esp */
  ESI = (ESP);
  /* 12211da9 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211dae push 4 */
  push32((uint32_t)(0x4u));
  /* 12211db0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12211db2 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211db8u);
  /* 12211db8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211dbd call 0x12213e20 */
  push32(0x12211dc2u); f_12213e20();
  /* 12211dc2 mov esi, esp */
  ESI = (ESP);
  /* 12211dc4 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211dc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12211dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 12211dcd call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211dd3u);
  /* 12211dd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211dd8 call 0x12213e20 */
  push32(0x12211dddu); f_12213e20();
  /* 12211ddd mov esi, esp */
  ESI = (ESP);
  /* 12211ddf push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211de6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12211de8 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211deeu);
  /* 12211dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211df1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211df3 call 0x12213e20 */
  push32(0x12211df8u); f_12213e20();
  /* 12211df8 mov esi, esp */
  ESI = (ESP);
  /* 12211dfa push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211dff push 5 */
  push32((uint32_t)(0x5u));
  /* 12211e01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12211e03 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211e09u);
  /* 12211e09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211e0e call 0x12213e20 */
  push32(0x12211e13u); f_12213e20();
  /* 12211e13 mov esi, esp */
  ESI = (ESP);
  /* 12211e15 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211e1a push 3 */
  push32((uint32_t)(0x3u));
  /* 12211e1c push 3 */
  push32((uint32_t)(0x3u));
  /* 12211e1e call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211e24u);
  /* 12211e24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211e27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211e29 call 0x12213e20 */
  push32(0x12211e2eu); f_12213e20();
  /* 12211e2e mov esi, esp */
  ESI = (ESP);
  /* 12211e30 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211e35 push 1 */
  push32((uint32_t)(0x1u));
  /* 12211e37 push 3 */
  push32((uint32_t)(0x3u));
  /* 12211e39 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211e3fu);
  /* 12211e3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211e42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211e44 call 0x12213e20 */
  push32(0x12211e49u); f_12213e20();
  /* 12211e49 mov esi, esp */
  ESI = (ESP);
  /* 12211e4b push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211e50 push 4 */
  push32((uint32_t)(0x4u));
  /* 12211e52 push 3 */
  push32((uint32_t)(0x3u));
  /* 12211e54 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211e5au);
  /* 12211e5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211e5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211e5f call 0x12213e20 */
  push32(0x12211e64u); f_12213e20();
  /* 12211e64 mov esi, esp */
  ESI = (ESP);
  /* 12211e66 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12211e6d push 3 */
  push32((uint32_t)(0x3u));
  /* 12211e6f call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211e75u);
  /* 12211e75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211e78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211e7a call 0x12213e20 */
  push32(0x12211e7fu); f_12213e20();
  /* 12211e7f mov esi, esp */
  ESI = (ESP);
  /* 12211e81 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211e88 push 3 */
  push32((uint32_t)(0x3u));
  /* 12211e8a call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211e90u);
  /* 12211e90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211e93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211e95 call 0x12213e20 */
  push32(0x12211e9au); f_12213e20();
  /* 12211e9a mov esi, esp */
  ESI = (ESP);
  /* 12211e9c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211ea1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12211ea3 push 3 */
  push32((uint32_t)(0x3u));
  /* 12211ea5 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211eabu);
  /* 12211eab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211eae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211eb0 call 0x12213e20 */
  push32(0x12211eb5u); f_12213e20();
  /* 12211eb5 mov esi, esp */
  ESI = (ESP);
  /* 12211eb7 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211ebc push 3 */
  push32((uint32_t)(0x3u));
  /* 12211ebe push 4 */
  push32((uint32_t)(0x4u));
  /* 12211ec0 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211ec6u);
  /* 12211ec6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211ec9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211ecb call 0x12213e20 */
  push32(0x12211ed0u); f_12213e20();
  /* 12211ed0 mov esi, esp */
  ESI = (ESP);
  /* 12211ed2 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12211ed9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12211edb call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211ee1u);
  /* 12211ee1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211ee6 call 0x12213e20 */
  push32(0x12211eebu); f_12213e20();
  /* 12211eeb mov esi, esp */
  ESI = (ESP);
  /* 12211eed push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211ef2 push 4 */
  push32((uint32_t)(0x4u));
  /* 12211ef4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12211ef6 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211efcu);
  /* 12211efc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211eff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211f01 call 0x12213e20 */
  push32(0x12211f06u); f_12213e20();
  /* 12211f06 mov esi, esp */
  ESI = (ESP);
  /* 12211f08 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12211f0f push 4 */
  push32((uint32_t)(0x4u));
  /* 12211f11 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211f17u);
  /* 12211f17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211f1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211f1c call 0x12213e20 */
  push32(0x12211f21u); f_12213e20();
  /* 12211f21 mov esi, esp */
  ESI = (ESP);
  /* 12211f23 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211f2a push 4 */
  push32((uint32_t)(0x4u));
  /* 12211f2c call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211f32u);
  /* 12211f32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211f35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211f37 call 0x12213e20 */
  push32(0x12211f3cu); f_12213e20();
  /* 12211f3c mov esi, esp */
  ESI = (ESP);
  /* 12211f3e push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12211f43 push 5 */
  push32((uint32_t)(0x5u));
  /* 12211f45 push 4 */
  push32((uint32_t)(0x4u));
  /* 12211f47 call dword ptr [0x12243440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243440))), 0x12211f4du);
  /* 12211f4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211f50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211f52 call 0x12213e20 */
  push32(0x12211f57u); f_12213e20();
  /* 12211f57 mov esi, esp */
  ESI = (ESP);
  /* 12211f59 push 0x1223b31c */
  push32((uint32_t)(0x1223b31cu));
  /* 12211f5e push 0x1223b200 */
  push32((uint32_t)(0x1223b200u));
  /* 12211f63 call dword ptr [0x12243450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243450))), 0x12211f69u);
  /* 12211f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211f6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211f6e call 0x12213e20 */
  push32(0x12211f73u); f_12213e20();
  /* 12211f73 mov esi, esp */
  ESI = (ESP);
  /* 12211f75 push 0x1223b310 */
  push32((uint32_t)(0x1223b310u));
  /* 12211f7a push 0x1223b1fc */
  push32((uint32_t)(0x1223b1fcu));
  /* 12211f7f call dword ptr [0x12243450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243450))), 0x12211f85u);
  /* 12211f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211f88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211f8a call 0x12213e20 */
  push32(0x12211f8fu); f_12213e20();
  /* 12211f8f mov esi, esp */
  ESI = (ESP);
  /* 12211f91 push 0x1223b304 */
  push32((uint32_t)(0x1223b304u));
  /* 12211f96 push 0x1223b1fc */
  push32((uint32_t)(0x1223b1fcu));
  /* 12211f9b call dword ptr [0x12243450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243450))), 0x12211fa1u);
  /* 12211fa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211fa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211fa6 call 0x12213e20 */
  push32(0x12211fabu); f_12213e20();
  /* 12211fab mov esi, esp */
  ESI = (ESP);
  /* 12211fad push 0x122404b8 */
  push32((uint32_t)(0x122404b8u));
  /* 12211fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12211fb4 call dword ptr [0x12243454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243454))), 0x12211fbau);
  /* 12211fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211fbf call 0x12213e20 */
  push32(0x12211fc4u); f_12213e20();
  /* 12211fc4 mov esi, esp */
  ESI = (ESP);
  /* 12211fc6 push 0x122404c0 */
  push32((uint32_t)(0x122404c0u));
  /* 12211fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12211fcd call dword ptr [0x12243454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243454))), 0x12211fd3u);
  /* 12211fd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211fd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211fd8 call 0x12213e20 */
  push32(0x12211fddu); f_12213e20();
  /* 12211fdd mov esi, esp */
  ESI = (ESP);
  /* 12211fdf push 0x1223b2fc */
  push32((uint32_t)(0x1223b2fcu));
  /* 12211fe4 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x12211feau);
  /* 12211fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12211fed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12211fef call 0x12213e20 */
  push32(0x12211ff4u); f_12213e20();
  /* 12211ff4 mov esi, esp */
  ESI = (ESP);
  /* 12211ff6 push 0x1223b2f4 */
  push32((uint32_t)(0x1223b2f4u));
  /* 12211ffb call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x12212001u);
  /* 12212001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212004 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212006 call 0x12213e20 */
  push32(0x1221200bu); f_12213e20();
  /* 1221200b mov esi, esp */
  ESI = (ESP);
  /* 1221200d push 1 */
  push32((uint32_t)(0x1u));
  /* 1221200f push 9 */
  push32((uint32_t)(0x9u));
  /* 12212011 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212017u);
  /* 12212017 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221201a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221201c call 0x12213e20 */
  push32(0x12212021u); f_12213e20();
  /* 12212021 mov esi, esp */
  ESI = (ESP);
  /* 12212023 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212025 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12212027 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x1221202du);
  /* 1221202d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212030 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212032 call 0x12213e20 */
  push32(0x12212037u); f_12213e20();
  /* 12212037 mov esi, esp */
  ESI = (ESP);
  /* 12212039 push 0x122404c8 */
  push32((uint32_t)(0x122404c8u));
  /* 1221203e call dword ptr [0x1224345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224345c))), 0x12212044u);
  /* 12212044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212047 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212049 call 0x12213e20 */
  push32(0x1221204eu); f_12213e20();
  /* 1221204e mov esi, esp */
  ESI = (ESP);
  /* 12212050 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212052 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12212054 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x1221205au);
  /* 1221205a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221205d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221205f call 0x12213e20 */
  push32(0x12212064u); f_12213e20();
L_12212064:;
  /* 12212064 mov esi, esp */
  ESI = (ESP);
  /* 12212066 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212068 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x1221206eu);
  /* 1221206e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212071 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212073 call 0x12213e20 */
  push32(0x12212078u); f_12213e20();
  /* 12212078 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221207d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221207f je 0x12212107 */
  if (C.zf) goto L_12212107;
  /* 12212085 mov esi, esp */
  ESI = (ESP);
  /* 12212087 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212089 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221208b call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212091u);
  /* 12212091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212094 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212096 call 0x12213e20 */
  push32(0x1221209bu); f_12213e20();
  /* 1221209b mov esi, esp */
  ESI = (ESP);
  /* 1221209d push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1221209f push 2 */
  push32((uint32_t)(0x2u));
  /* 122120a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122120a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122120a5 push 0x1223b2e8 */
  push32((uint32_t)(0x1223b2e8u));
  /* 122120aa push 1 */
  push32((uint32_t)(0x1u));
  /* 122120ac call dword ptr [0x12243460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243460))), 0x122120b2u);
  /* 122120b2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122120b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122120b7 call 0x12213e20 */
  push32(0x122120bcu); f_12213e20();
  /* 122120bc mov esi, esp */
  ESI = (ESP);
  /* 122120be push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 122120c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122120c5 call dword ptr [0x12243458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243458))), 0x122120cbu);
  /* 122120cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122120ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122120d0 call 0x12213e20 */
  push32(0x122120d5u); f_12213e20();
  /* 122120d5 mov esi, esp */
  ESI = (ESP);
  /* 122120d7 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 122120dc push 5 */
  push32((uint32_t)(0x5u));
  /* 122120de call dword ptr [0x12243458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243458))), 0x122120e4u);
  /* 122120e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122120e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122120e9 call 0x12213e20 */
  push32(0x122120eeu); f_12213e20();
  /* 122120ee mov esi, esp */
  ESI = (ESP);
  /* 122120f0 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 122120f5 push 6 */
  push32((uint32_t)(0x6u));
  /* 122120f7 call dword ptr [0x12243458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243458))), 0x122120fdu);
  /* 122120fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212100 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212102 call 0x12213e20 */
  push32(0x12212107u); f_12213e20();
L_12212107:;
  /* 12212107 mov esi, esp */
  ESI = (ESP);
  /* 12212109 push 4 */
  push32((uint32_t)(0x4u));
  /* 1221210b call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212111u);
  /* 12212111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212114 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212116 call 0x12213e20 */
  push32(0x1221211bu); f_12213e20();
  /* 1221211b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212122 je 0x122121b5 */
  if (C.zf) goto L_122121b5;
  /* 12212128 mov esi, esp */
  ESI = (ESP);
  /* 1221212a push 1 */
  push32((uint32_t)(0x1u));
  /* 1221212c call dword ptr [0x12243468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243468))), 0x12212132u);
  /* 12212132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212135 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212137 call 0x12213e20 */
  push32(0x1221213cu); f_12213e20();
  /* 1221213c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212143 je 0x122121b5 */
  if (C.zf) goto L_122121b5;
  /* 12212145 mov esi, esp */
  ESI = (ESP);
  /* 12212147 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212149 push 4 */
  push32((uint32_t)(0x4u));
  /* 1221214b call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212151u);
  /* 12212151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212154 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212156 call 0x12213e20 */
  push32(0x1221215bu); f_12213e20();
  /* 1221215b mov esi, esp */
  ESI = (ESP);
  /* 1221215d push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 12212162 push 0x122404d0 */
  push32((uint32_t)(0x122404d0u));
  /* 12212167 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212169 push 0x12240528 */
  push32((uint32_t)(0x12240528u));
  /* 1221216e push 0x122404e8 */
  push32((uint32_t)(0x122404e8u));
  /* 12212173 push 0x12240468 */
  push32((uint32_t)(0x12240468u));
  /* 12212178 call dword ptr [0x1224346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224346c))), 0x1221217eu);
  /* 1221217e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212183 call 0x12213e20 */
  push32(0x12212188u); f_12213e20();
  /* 12212188 mov esi, esp */
  ESI = (ESP);
  /* 1221218a push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 1221218f push 0x122404d0 */
  push32((uint32_t)(0x122404d0u));
  /* 12212194 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212196 push 0x12240530 */
  push32((uint32_t)(0x12240530u));
  /* 1221219b push 0x12240520 */
  push32((uint32_t)(0x12240520u));
  /* 122121a0 push 0x12240470 */
  push32((uint32_t)(0x12240470u));
  /* 122121a5 call dword ptr [0x1224346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224346c))), 0x122121abu);
  /* 122121ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122121ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122121b0 call 0x12213e20 */
  push32(0x122121b5u); f_12213e20();
L_122121b5:;
  /* 122121b5 mov esi, esp */
  ESI = (ESP);
  /* 122121b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 122121b9 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x122121bfu);
  /* 122121bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122121c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122121c4 call 0x12213e20 */
  push32(0x122121c9u); f_12213e20();
  /* 122121c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122121ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122121d0 je 0x122122a5 */
  if (C.zf) goto L_122122a5;
  /* 122121d6 mov esi, esp */
  ESI = (ESP);
  /* 122121d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 122121da call dword ptr [0x12243468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243468))), 0x122121e0u);
  /* 122121e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122121e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122121e5 call 0x12213e20 */
  push32(0x122121eau); f_12213e20();
  /* 122121ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122121ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122121f1 je 0x122122a5 */
  if (C.zf) goto L_122122a5;
  /* 122121f7 mov esi, esp */
  ESI = (ESP);
  /* 122121f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122121fb push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212200 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212202 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x12212208u);
  /* 12212208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221220b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221220d call 0x12213e20 */
  push32(0x12212212u); f_12213e20();
  /* 12212212 mov esi, esp */
  ESI = (ESP);
  /* 12212214 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212216 push 3 */
  push32((uint32_t)(0x3u));
  /* 12212218 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x1221221eu);
  /* 1221221e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212221 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212223 call 0x12213e20 */
  push32(0x12212228u); f_12213e20();
  /* 12212228 mov esi, esp */
  ESI = (ESP);
  /* 1221222a push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1221222c push 0x122404d8 */
  push32((uint32_t)(0x122404d8u));
  /* 12212231 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212233 push 0x12240538 */
  push32((uint32_t)(0x12240538u));
  /* 12212238 push 0x12240500 */
  push32((uint32_t)(0x12240500u));
  /* 1221223d push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 12212242 call dword ptr [0x1224346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224346c))), 0x12212248u);
  /* 12212248 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221224b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221224d call 0x12213e20 */
  push32(0x12212252u); f_12213e20();
  /* 12212252 mov esi, esp */
  ESI = (ESP);
  /* 12212254 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212256 push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 1221225b push 2 */
  push32((uint32_t)(0x2u));
  /* 1221225d call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212263u);
  /* 12212263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212266 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212268 call 0x12213e20 */
  push32(0x1221226du); f_12213e20();
  /* 1221226d mov esi, esp */
  ESI = (ESP);
  /* 1221226f push 0 */
  push32((uint32_t)(0x0u));
  /* 12212271 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12212273 push 0x122404e0 */
  push32((uint32_t)(0x122404e0u));
  /* 12212278 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221227a call dword ptr [0x12243478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243478))), 0x12212280u);
  /* 12212280 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212285 call 0x12213e20 */
  push32(0x1221228au); f_12213e20();
  /* 1221228a mov esi, esp */
  ESI = (ESP);
  /* 1221228c push 0 */
  push32((uint32_t)(0x0u));
  /* 1221228e push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212293 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212295 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x1221229bu);
  /* 1221229b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221229e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122122a0 call 0x12213e20 */
  push32(0x122122a5u); f_12213e20();
L_122122a5:;
  /* 122122a5 mov esi, esp */
  ESI = (ESP);
  /* 122122a7 push 5 */
  push32((uint32_t)(0x5u));
  /* 122122a9 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x122122afu);
  /* 122122af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122122b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122122b4 call 0x12213e20 */
  push32(0x122122b9u); f_12213e20();
  /* 122122b9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122122be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122122c0 je 0x122123e5 */
  if (C.zf) goto L_122123e5;
  /* 122122c6 mov esi, esp */
  ESI = (ESP);
  /* 122122c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 122122ca call dword ptr [0x12243468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243468))), 0x122122d0u);
  /* 122122d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122122d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122122d5 call 0x12213e20 */
  push32(0x122122dau); f_12213e20();
  /* 122122da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122122df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122122e1 je 0x122123e5 */
  if (C.zf) goto L_122123e5;
  /* 122122e7 mov esi, esp */
  ESI = (ESP);
  /* 122122e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122122eb push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 122122f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122122f2 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x122122f8u);
  /* 122122f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122122fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122122fd call 0x12213e20 */
  push32(0x12212302u); f_12213e20();
  /* 12212302 mov esi, esp */
  ESI = (ESP);
  /* 12212304 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212306 push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 1221230b push 2 */
  push32((uint32_t)(0x2u));
  /* 1221230d call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212313u);
  /* 12212313 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212316 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212318 call 0x12213e20 */
  push32(0x1221231du); f_12213e20();
  /* 1221231d mov esi, esp */
  ESI = (ESP);
  /* 1221231f push 2 */
  push32((uint32_t)(0x2u));
  /* 12212321 call dword ptr [0x12243470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243470))), 0x12212327u);
  /* 12212327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221232a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221232c call 0x12213e20 */
  push32(0x12212331u); f_12213e20();
  /* 12212331 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212338 je 0x122123e5 */
  if (C.zf) goto L_122123e5;
  /* 1221233e mov esi, esp */
  ESI = (ESP);
  /* 12212340 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212342 push 0x12240468 */
  push32((uint32_t)(0x12240468u));
  /* 12212347 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212349 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x1221234fu);
  /* 1221234f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212352 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212354 call 0x12213e20 */
  push32(0x12212359u); f_12213e20();
  /* 12212359 mov esi, esp */
  ESI = (ESP);
  /* 1221235b push 1 */
  push32((uint32_t)(0x1u));
  /* 1221235d push 0x12240470 */
  push32((uint32_t)(0x12240470u));
  /* 12212362 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212364 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x1221236au);
  /* 1221236a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221236d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221236f call 0x12213e20 */
  push32(0x12212374u); f_12213e20();
  /* 12212374 mov esi, esp */
  ESI = (ESP);
  /* 12212376 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212378 call dword ptr [0x12243480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243480))), 0x1221237eu);
  /* 1221237e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212381 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212383 call 0x12213e20 */
  push32(0x12212388u); f_12213e20();
  /* 12212388 mov esi, esp */
  ESI = (ESP);
  /* 1221238a push 1 */
  push32((uint32_t)(0x1u));
  /* 1221238c push 6 */
  push32((uint32_t)(0x6u));
  /* 1221238e call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212394u);
  /* 12212394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212397 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212399 call 0x12213e20 */
  push32(0x1221239eu); f_12213e20();
  /* 1221239e mov esi, esp */
  ESI = (ESP);
  /* 122123a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 122123a2 push 7 */
  push32((uint32_t)(0x7u));
  /* 122123a4 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122123aau);
  /* 122123aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122123ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122123af call 0x12213e20 */
  push32(0x122123b4u); f_12213e20();
  /* 122123b4 mov esi, esp */
  ESI = (ESP);
  /* 122123b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122123b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 122123ba call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122123c0u);
  /* 122123c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122123c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122123c5 call 0x12213e20 */
  push32(0x122123cau); f_12213e20();
  /* 122123ca mov esi, esp */
  ESI = (ESP);
  /* 122123cc push 0 */
  push32((uint32_t)(0x0u));
  /* 122123ce push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 122123d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122123d5 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x122123dbu);
  /* 122123db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122123de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122123e0 call 0x12213e20 */
  push32(0x122123e5u); f_12213e20();
L_122123e5:;
  /* 122123e5 mov esi, esp */
  ESI = (ESP);
  /* 122123e7 push 6 */
  push32((uint32_t)(0x6u));
  /* 122123e9 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x122123efu);
  /* 122123ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122123f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122123f4 call 0x12213e20 */
  push32(0x122123f9u); f_12213e20();
  /* 122123f9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122123fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212400 je 0x12212537 */
  if (C.zf) goto L_12212537;
  /* 12212406 mov esi, esp */
  ESI = (ESP);
  /* 12212408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221240a push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 1221240f push 0 */
  push32((uint32_t)(0x0u));
  /* 12212411 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x12212417u);
  /* 12212417 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221241a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221241c call 0x12213e20 */
  push32(0x12212421u); f_12213e20();
  /* 12212421 mov esi, esp */
  ESI = (ESP);
  /* 12212423 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212425 call dword ptr [0x12243484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243484))), 0x1221242bu);
  /* 1221242b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221242e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212430 call 0x12213e20 */
  push32(0x12212435u); f_12213e20();
  /* 12212435 mov esi, esp */
  ESI = (ESP);
  /* 12212437 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212439 push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 1221243e push 2 */
  push32((uint32_t)(0x2u));
  /* 12212440 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212446u);
  /* 12212446 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212449 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221244b call 0x12213e20 */
  push32(0x12212450u); f_12213e20();
  /* 12212450 mov esi, esp */
  ESI = (ESP);
  /* 12212452 push 7 */
  push32((uint32_t)(0x7u));
  /* 12212454 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x1221245au);
  /* 1221245a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221245d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221245f call 0x12213e20 */
  push32(0x12212464u); f_12213e20();
  /* 12212464 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221246b je 0x1221251c */
  if (C.zf) goto L_1221251c;
  /* 12212471 mov esi, esp */
  ESI = (ESP);
  /* 12212473 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212475 call dword ptr [0x1224347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224347c))), 0x1221247bu);
  /* 1221247b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221247e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212480 call 0x12213e20 */
  push32(0x12212485u); f_12213e20();
  /* 12212485 cmp eax, 0x4f */
  { uint32_t _a=(EAX),_b=(0x4fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212488 jle 0x1221251c */
  if ((C.zf||C.sf!=C.of)) goto L_1221251c;
  /* 1221248e mov esi, esp */
  ESI = (ESP);
  /* 12212490 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212492 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 12212494 push 0x12240518 */
  push32((uint32_t)(0x12240518u));
  /* 12212499 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221249b call dword ptr [0x12243478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243478))), 0x122124a1u);
  /* 122124a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122124a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122124a6 call 0x12213e20 */
  push32(0x122124abu); f_12213e20();
  /* 122124ab mov esi, esp */
  ESI = (ESP);
  /* 122124ad push 0 */
  push32((uint32_t)(0x0u));
  /* 122124af push 6 */
  push32((uint32_t)(0x6u));
  /* 122124b1 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122124b7u);
  /* 122124b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122124ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122124bc call 0x12213e20 */
  push32(0x122124c1u); f_12213e20();
  /* 122124c1 mov esi, esp */
  ESI = (ESP);
  /* 122124c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122124c5 push 7 */
  push32((uint32_t)(0x7u));
  /* 122124c7 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122124cdu);
  /* 122124cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122124d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122124d2 call 0x12213e20 */
  push32(0x122124d7u); f_12213e20();
  /* 122124d7 mov esi, esp */
  ESI = (ESP);
  /* 122124d9 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 122124de push 2 */
  push32((uint32_t)(0x2u));
  /* 122124e0 call dword ptr [0x12243458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243458))), 0x122124e6u);
  /* 122124e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122124e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122124eb call 0x12213e20 */
  push32(0x122124f0u); f_12213e20();
  /* 122124f0 mov esi, esp */
  ESI = (ESP);
  /* 122124f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 122124f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 122124f6 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122124fcu);
  /* 122124fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122124ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212501 call 0x12213e20 */
  push32(0x12212506u); f_12213e20();
  /* 12212506 mov esi, esp */
  ESI = (ESP);
  /* 12212508 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221250a push 8 */
  push32((uint32_t)(0x8u));
  /* 1221250c call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212512u);
  /* 12212512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212515 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212517 call 0x12213e20 */
  push32(0x1221251cu); f_12213e20();
L_1221251c:;
  /* 1221251c mov esi, esp */
  ESI = (ESP);
  /* 1221251e push 0 */
  push32((uint32_t)(0x0u));
  /* 12212520 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212525 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212527 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x1221252du);
  /* 1221252d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212532 call 0x12213e20 */
  push32(0x12212537u); f_12213e20();
L_12212537:;
  /* 12212537 mov esi, esp */
  ESI = (ESP);
  /* 12212539 push 8 */
  push32((uint32_t)(0x8u));
  /* 1221253b call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212541u);
  /* 12212541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212544 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212546 call 0x12213e20 */
  push32(0x1221254bu); f_12213e20();
  /* 1221254b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212552 je 0x12212640 */
  if (C.zf) goto L_12212640;
  /* 12212558 mov esi, esp */
  ESI = (ESP);
  /* 1221255a push 2 */
  push32((uint32_t)(0x2u));
  /* 1221255c call dword ptr [0x12243468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243468))), 0x12212562u);
  /* 12212562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212567 call 0x12213e20 */
  push32(0x1221256cu); f_12213e20();
  /* 1221256c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212573 je 0x12212640 */
  if (C.zf) goto L_12212640;
  /* 12212579 mov esi, esp */
  ESI = (ESP);
  /* 1221257b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221257d push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212582 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212584 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x1221258au);
  /* 1221258a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221258d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221258f call 0x12213e20 */
  push32(0x12212594u); f_12213e20();
  /* 12212594 mov esi, esp */
  ESI = (ESP);
  /* 12212596 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212598 call dword ptr [0x12243484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243484))), 0x1221259eu);
  /* 1221259e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122125a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122125a3 call 0x12213e20 */
  push32(0x122125a8u); f_12213e20();
  /* 122125a8 mov esi, esp */
  ESI = (ESP);
  /* 122125aa push 0 */
  push32((uint32_t)(0x0u));
  /* 122125ac push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 122125b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122125b3 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x122125b9u);
  /* 122125b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122125bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122125be call 0x12213e20 */
  push32(0x122125c3u); f_12213e20();
  /* 122125c3 mov esi, esp */
  ESI = (ESP);
  /* 122125c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122125c7 call dword ptr [0x12243470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243470))), 0x122125cdu);
  /* 122125cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122125d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122125d2 call 0x12213e20 */
  push32(0x122125d7u); f_12213e20();
  /* 122125d7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122125dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122125de je 0x12212625 */
  if (C.zf) goto L_12212625;
  /* 122125e0 mov esi, esp */
  ESI = (ESP);
  /* 122125e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122125e4 push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 122125e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122125eb call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x122125f1u);
  /* 122125f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122125f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122125f6 call 0x12213e20 */
  push32(0x122125fbu); f_12213e20();
  /* 122125fb mov esi, esp */
  ESI = (ESP);
  /* 122125fd push 2 */
  push32((uint32_t)(0x2u));
  /* 122125ff call dword ptr [0x1224348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224348c))), 0x12212605u);
  /* 12212605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212608 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221260a call 0x12213e20 */
  push32(0x1221260fu); f_12213e20();
  /* 1221260f mov esi, esp */
  ESI = (ESP);
  /* 12212611 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212613 push 9 */
  push32((uint32_t)(0x9u));
  /* 12212615 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x1221261bu);
  /* 1221261b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221261e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212620 call 0x12213e20 */
  push32(0x12212625u); f_12213e20();
L_12212625:;
  /* 12212625 mov esi, esp */
  ESI = (ESP);
  /* 12212627 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212629 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 1221262e push 0 */
  push32((uint32_t)(0x0u));
  /* 12212630 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212636u);
  /* 12212636 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212639 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221263b call 0x12213e20 */
  push32(0x12212640u); f_12213e20();
L_12212640:;
  /* 12212640 mov esi, esp */
  ESI = (ESP);
  /* 12212642 push 9 */
  push32((uint32_t)(0x9u));
  /* 12212644 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x1221264au);
  /* 1221264a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221264d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221264f call 0x12213e20 */
  push32(0x12212654u); f_12213e20();
  /* 12212654 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221265b je 0x1221275e */
  if (C.zf) goto L_1221275e;
  /* 12212661 mov esi, esp */
  ESI = (ESP);
  /* 12212663 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212665 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 1221266a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221266c call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x12212672u);
  /* 12212672 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212675 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212677 call 0x12213e20 */
  push32(0x1221267cu); f_12213e20();
  /* 1221267c mov esi, esp */
  ESI = (ESP);
  /* 1221267e push 0 */
  push32((uint32_t)(0x0u));
  /* 12212680 call dword ptr [0x12243484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243484))), 0x12212686u);
  /* 12212686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212689 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221268b call 0x12213e20 */
  push32(0x12212690u); f_12213e20();
  /* 12212690 mov esi, esp */
  ESI = (ESP);
  /* 12212692 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212694 push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 12212699 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221269b call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x122126a1u);
  /* 122126a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122126a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122126a6 call 0x12213e20 */
  push32(0x122126abu); f_12213e20();
  /* 122126ab mov esi, esp */
  ESI = (ESP);
  /* 122126ad push 2 */
  push32((uint32_t)(0x2u));
  /* 122126af call dword ptr [0x1224347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224347c))), 0x122126b5u);
  /* 122126b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122126b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122126ba call 0x12213e20 */
  push32(0x122126bfu); f_12213e20();
  /* 122126bf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122126c2 jge 0x12212743 */
  if ((C.sf==C.of)) goto L_12212743;
  /* 122126c4 mov esi, esp */
  ESI = (ESP);
  /* 122126c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122126c8 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 122126ca call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122126d0u);
  /* 122126d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122126d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122126d5 call 0x12213e20 */
  push32(0x122126dau); f_12213e20();
  /* 122126da mov esi, esp */
  ESI = (ESP);
  /* 122126dc push 0 */
  push32((uint32_t)(0x0u));
  /* 122126de push 0x12240468 */
  push32((uint32_t)(0x12240468u));
  /* 122126e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 122126e5 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x122126ebu);
  /* 122126eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122126ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122126f0 call 0x12213e20 */
  push32(0x122126f5u); f_12213e20();
  /* 122126f5 mov esi, esp */
  ESI = (ESP);
  /* 122126f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122126f9 push 0x12240470 */
  push32((uint32_t)(0x12240470u));
  /* 122126fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12212700 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212706u);
  /* 12212706 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221270b call 0x12213e20 */
  push32(0x12212710u); f_12213e20();
  /* 12212710 mov esi, esp */
  ESI = (ESP);
  /* 12212712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212714 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212716 push 0x122404c8 */
  push32((uint32_t)(0x122404c8u));
  /* 1221271b push 2 */
  push32((uint32_t)(0x2u));
  /* 1221271d call dword ptr [0x12243490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243490))), 0x12212723u);
  /* 12212723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212728 call 0x12213e20 */
  push32(0x1221272du); f_12213e20();
  /* 1221272d mov esi, esp */
  ESI = (ESP);
  /* 1221272f push 0 */
  push32((uint32_t)(0x0u));
  /* 12212731 push 8 */
  push32((uint32_t)(0x8u));
  /* 12212733 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212739u);
  /* 12212739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221273c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221273e call 0x12213e20 */
  push32(0x12212743u); f_12213e20();
L_12212743:;
  /* 12212743 mov esi, esp */
  ESI = (ESP);
  /* 12212745 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212747 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 1221274c push 0 */
  push32((uint32_t)(0x0u));
  /* 1221274e call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212754u);
  /* 12212754 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212759 call 0x12213e20 */
  push32(0x1221275eu); f_12213e20();
L_1221275e:;
  /* 1221275e mov esi, esp */
  ESI = (ESP);
  /* 12212760 push 9 */
  push32((uint32_t)(0x9u));
  /* 12212762 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212768u);
  /* 12212768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221276b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221276d call 0x12213e20 */
  push32(0x12212772u); f_12213e20();
  /* 12212772 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212779 je 0x12212797 */
  if (C.zf) goto L_12212797;
  /* 1221277b mov esi, esp */
  ESI = (ESP);
  /* 1221277d push 0x12240470 */
  push32((uint32_t)(0x12240470u));
  /* 12212782 call dword ptr [0x12243488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243488))), 0x12212788u);
  /* 12212788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221278b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221278d call 0x12213e20 */
  push32(0x12212792u); f_12213e20();
  /* 12212792 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212795 jl 0x122127b6 */
  if ((C.sf!=C.of)) goto L_122127b6;
L_12212797:;
  /* 12212797 mov esi, esp */
  ESI = (ESP);
  /* 12212799 push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 1221279e call dword ptr [0x12243488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243488))), 0x122127a4u);
  /* 122127a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122127a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122127a9 call 0x12213e20 */
  push32(0x122127aeu); f_12213e20();
  /* 122127ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122127b0 jne 0x12212887 */
  if (!C.zf) goto L_12212887;
L_122127b6:;
  /* 122127b6 mov esi, esp */
  ESI = (ESP);
  /* 122127b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122127ba push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 122127bf push 0 */
  push32((uint32_t)(0x0u));
  /* 122127c1 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x122127c7u);
  /* 122127c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122127ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122127cc call 0x12213e20 */
  push32(0x122127d1u); f_12213e20();
  /* 122127d1 mov esi, esp */
  ESI = (ESP);
  /* 122127d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122127d5 call dword ptr [0x12243484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243484))), 0x122127dbu);
  /* 122127db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122127de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122127e0 call 0x12213e20 */
  push32(0x122127e5u); f_12213e20();
  /* 122127e5 mov esi, esp */
  ESI = (ESP);
  /* 122127e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122127e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 122127eb call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122127f1u);
  /* 122127f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122127f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122127f6 call 0x12213e20 */
  push32(0x122127fbu); f_12213e20();
  /* 122127fb mov esi, esp */
  ESI = (ESP);
  /* 122127fd push 1 */
  push32((uint32_t)(0x1u));
  /* 122127ff push 3 */
  push32((uint32_t)(0x3u));
  /* 12212801 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212807u);
  /* 12212807 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221280a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221280c call 0x12213e20 */
  push32(0x12212811u); f_12213e20();
  /* 12212811 mov esi, esp */
  ESI = (ESP);
  /* 12212813 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212815 push 5 */
  push32((uint32_t)(0x5u));
  /* 12212817 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x1221281du);
  /* 1221281d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212820 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212822 call 0x12213e20 */
  push32(0x12212827u); f_12213e20();
  /* 12212827 mov esi, esp */
  ESI = (ESP);
  /* 12212829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221282b push 9 */
  push32((uint32_t)(0x9u));
  /* 1221282d call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212833u);
  /* 12212833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212836 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212838 call 0x12213e20 */
  push32(0x1221283du); f_12213e20();
  /* 1221283d mov esi, esp */
  ESI = (ESP);
  /* 1221283f push 0 */
  push32((uint32_t)(0x0u));
  /* 12212841 push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 12212846 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212848 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x1221284eu);
  /* 1221284e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212851 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212853 call 0x12213e20 */
  push32(0x12212858u); f_12213e20();
  /* 12212858 mov esi, esp */
  ESI = (ESP);
  /* 1221285a push 2 */
  push32((uint32_t)(0x2u));
  /* 1221285c call dword ptr [0x12243498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243498))), 0x12212862u);
  /* 12212862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212867 call 0x12213e20 */
  push32(0x1221286cu); f_12213e20();
  /* 1221286c mov esi, esp */
  ESI = (ESP);
  /* 1221286e push 0 */
  push32((uint32_t)(0x0u));
  /* 12212870 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212875 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212877 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x1221287du);
  /* 1221287d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212880 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212882 call 0x12213e20 */
  push32(0x12212887u); f_12213e20();
L_12212887:;
  /* 12212887 mov esi, esp */
  ESI = (ESP);
  /* 12212889 push 0xa */
  push32((uint32_t)(0xau));
  /* 1221288b call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212891u);
  /* 12212891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212894 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212896 call 0x12213e20 */
  push32(0x1221289bu); f_12213e20();
  /* 1221289b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122128a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122128a2 je 0x122129b7 */
  if (C.zf) goto L_122129b7;
  /* 122128a8 mov esi, esp */
  ESI = (ESP);
  /* 122128aa push 6 */
  push32((uint32_t)(0x6u));
  /* 122128ac call dword ptr [0x12243468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243468))), 0x122128b2u);
  /* 122128b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122128b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122128b7 call 0x12213e20 */
  push32(0x122128bcu); f_12213e20();
  /* 122128bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122128c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122128c3 je 0x122129b7 */
  if (C.zf) goto L_122129b7;
  /* 122128c9 mov esi, esp */
  ESI = (ESP);
  /* 122128cb push 0 */
  push32((uint32_t)(0x0u));
  /* 122128cd push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 122128d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122128d4 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x122128dau);
  /* 122128da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122128dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122128df call 0x12213e20 */
  push32(0x122128e4u); f_12213e20();
  /* 122128e4 mov esi, esp */
  ESI = (ESP);
  /* 122128e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122128e8 call dword ptr [0x12243484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243484))), 0x122128eeu);
  /* 122128ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122128f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122128f3 call 0x12213e20 */
  push32(0x122128f8u); f_12213e20();
  /* 122128f8 mov esi, esp */
  ESI = (ESP);
  /* 122128fa push 0 */
  push32((uint32_t)(0x0u));
  /* 122128fc push 0xa */
  push32((uint32_t)(0xau));
  /* 122128fe call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212904u);
  /* 12212904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212907 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212909 call 0x12213e20 */
  push32(0x1221290eu); f_12213e20();
  /* 1221290e mov esi, esp */
  ESI = (ESP);
  /* 12212910 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212912 push 0x122404f0 */
  push32((uint32_t)(0x122404f0u));
  /* 12212917 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212919 push 0x12240558 */
  push32((uint32_t)(0x12240558u));
  /* 1221291e push 0x12240500 */
  push32((uint32_t)(0x12240500u));
  /* 12212923 push 0x12240488 */
  push32((uint32_t)(0x12240488u));
  /* 12212928 call dword ptr [0x1224346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224346c))), 0x1221292eu);
  /* 1221292e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212931 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212933 call 0x12213e20 */
  push32(0x12212938u); f_12213e20();
  /* 12212938 mov esi, esp */
  ESI = (ESP);
  /* 1221293a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221293c push 0x12240488 */
  push32((uint32_t)(0x12240488u));
  /* 12212941 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212943 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212949u);
  /* 12212949 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221294c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221294e call 0x12213e20 */
  push32(0x12212953u); f_12213e20();
  /* 12212953 mov esi, esp */
  ESI = (ESP);
  /* 12212955 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212957 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212959 push 0x122404f8 */
  push32((uint32_t)(0x122404f8u));
  /* 1221295e push 2 */
  push32((uint32_t)(0x2u));
  /* 12212960 call dword ptr [0x12243490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243490))), 0x12212966u);
  /* 12212966 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221296b call 0x12213e20 */
  push32(0x12212970u); f_12213e20();
  /* 12212970 mov esi, esp */
  ESI = (ESP);
  /* 12212972 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212974 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12212976 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x1221297cu);
  /* 1221297c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221297f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212981 call 0x12213e20 */
  push32(0x12212986u); f_12213e20();
  /* 12212986 mov esi, esp */
  ESI = (ESP);
  /* 12212988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221298a push 0xc */
  push32((uint32_t)(0xcu));
  /* 1221298c call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212992u);
  /* 12212992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212995 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212997 call 0x12213e20 */
  push32(0x1221299cu); f_12213e20();
  /* 1221299c mov esi, esp */
  ESI = (ESP);
  /* 1221299e push 0 */
  push32((uint32_t)(0x0u));
  /* 122129a0 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 122129a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122129a7 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x122129adu);
  /* 122129ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122129b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122129b2 call 0x12213e20 */
  push32(0x122129b7u); f_12213e20();
L_122129b7:;
  /* 122129b7 mov esi, esp */
  ESI = (ESP);
  /* 122129b9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 122129bb call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x122129c1u);
  /* 122129c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122129c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122129c6 call 0x12213e20 */
  push32(0x122129cbu); f_12213e20();
  /* 122129cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122129d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122129d2 je 0x12212a92 */
  if (C.zf) goto L_12212a92;
  /* 122129d8 mov esi, esp */
  ESI = (ESP);
  /* 122129da push 2 */
  push32((uint32_t)(0x2u));
  /* 122129dc push 0x122404f8 */
  push32((uint32_t)(0x122404f8u));
  /* 122129e1 call dword ptr [0x1224349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224349c))), 0x122129e7u);
  /* 122129e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122129ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122129ec call 0x12213e20 */
  push32(0x122129f1u); f_12213e20();
  /* 122129f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122129f3 je 0x12212a92 */
  if (C.zf) goto L_12212a92;
  /* 122129f9 mov esi, esp */
  ESI = (ESP);
  /* 122129fb push 0 */
  push32((uint32_t)(0x0u));
  /* 122129fd push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212a04 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x12212a0au);
  /* 12212a0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212a0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212a0f call 0x12213e20 */
  push32(0x12212a14u); f_12213e20();
  /* 12212a14 mov esi, esp */
  ESI = (ESP);
  /* 12212a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212a18 call dword ptr [0x12243484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243484))), 0x12212a1eu);
  /* 12212a1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212a21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212a23 call 0x12213e20 */
  push32(0x12212a28u); f_12213e20();
  /* 12212a28 mov esi, esp */
  ESI = (ESP);
  /* 12212a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12212a2c push 0x12240488 */
  push32((uint32_t)(0x12240488u));
  /* 12212a31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212a33 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212a39u);
  /* 12212a39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212a3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212a3e call 0x12213e20 */
  push32(0x12212a43u); f_12213e20();
  /* 12212a43 mov esi, esp */
  ESI = (ESP);
  /* 12212a45 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 12212a4a push 0x12240540 */
  push32((uint32_t)(0x12240540u));
  /* 12212a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12212a51 call dword ptr [0x12243494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243494))), 0x12212a57u);
  /* 12212a57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212a5c call 0x12213e20 */
  push32(0x12212a61u); f_12213e20();
  /* 12212a61 mov esi, esp */
  ESI = (ESP);
  /* 12212a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212a65 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12212a67 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212a6du);
  /* 12212a6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212a70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212a72 call 0x12213e20 */
  push32(0x12212a77u); f_12213e20();
  /* 12212a77 mov esi, esp */
  ESI = (ESP);
  /* 12212a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212a7b push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212a82 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212a88u);
  /* 12212a88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212a8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212a8d call 0x12213e20 */
  push32(0x12212a92u); f_12213e20();
L_12212a92:;
  /* 12212a92 mov esi, esp */
  ESI = (ESP);
  /* 12212a94 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12212a96 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212a9cu);
  /* 12212a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212aa1 call 0x12213e20 */
  push32(0x12212aa6u); f_12213e20();
  /* 12212aa6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212aad je 0x12212af7 */
  if (C.zf) goto L_12212af7;
  /* 12212aaf mov esi, esp */
  ESI = (ESP);
  /* 12212ab1 push 0x12240488 */
  push32((uint32_t)(0x12240488u));
  /* 12212ab6 call dword ptr [0x12243488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243488))), 0x12212abcu);
  /* 12212abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212ac1 call 0x12213e20 */
  push32(0x12212ac6u); f_12213e20();
  /* 12212ac6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212ac9 jge 0x12212af7 */
  if ((C.sf==C.of)) goto L_12212af7;
  /* 12212acb mov esi, esp */
  ESI = (ESP);
  /* 12212acd push 0 */
  push32((uint32_t)(0x0u));
  /* 12212acf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12212ad1 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212ad7u);
  /* 12212ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212ada cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212adc call 0x12213e20 */
  push32(0x12212ae1u); f_12213e20();
  /* 12212ae1 mov esi, esp */
  ESI = (ESP);
  /* 12212ae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212ae5 push 0xa */
  push32((uint32_t)(0xau));
  /* 12212ae7 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212aedu);
  /* 12212aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212af0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212af2 call 0x12213e20 */
  push32(0x12212af7u); f_12213e20();
L_12212af7:;
  /* 12212af7 mov esi, esp */
  ESI = (ESP);
  /* 12212af9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12212afb call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212b01u);
  /* 12212b01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212b04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212b06 call 0x12213e20 */
  push32(0x12212b0bu); f_12213e20();
  /* 12212b0b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212b10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212b12 je 0x12212c27 */
  if (C.zf) goto L_12212c27;
  /* 12212b18 mov esi, esp */
  ESI = (ESP);
  /* 12212b1a push 5 */
  push32((uint32_t)(0x5u));
  /* 12212b1c call dword ptr [0x12243468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243468))), 0x12212b22u);
  /* 12212b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212b25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212b27 call 0x12213e20 */
  push32(0x12212b2cu); f_12213e20();
  /* 12212b2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212b31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212b33 je 0x12212c27 */
  if (C.zf) goto L_12212c27;
  /* 12212b39 mov esi, esp */
  ESI = (ESP);
  /* 12212b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12212b3d push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212b44 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x12212b4au);
  /* 12212b4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212b4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212b4f call 0x12213e20 */
  push32(0x12212b54u); f_12213e20();
  /* 12212b54 mov esi, esp */
  ESI = (ESP);
  /* 12212b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212b58 call dword ptr [0x12243484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243484))), 0x12212b5eu);
  /* 12212b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212b61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212b63 call 0x12213e20 */
  push32(0x12212b68u); f_12213e20();
  /* 12212b68 mov esi, esp */
  ESI = (ESP);
  /* 12212b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12212b6c push 0xd */
  push32((uint32_t)(0xdu));
  /* 12212b6e call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212b74u);
  /* 12212b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212b77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212b79 call 0x12213e20 */
  push32(0x12212b7eu); f_12213e20();
  /* 12212b7e mov esi, esp */
  ESI = (ESP);
  /* 12212b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212b82 push 0x122404f0 */
  push32((uint32_t)(0x122404f0u));
  /* 12212b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212b89 push 0x12240558 */
  push32((uint32_t)(0x12240558u));
  /* 12212b8e push 0x12240500 */
  push32((uint32_t)(0x12240500u));
  /* 12212b93 push 0x12240490 */
  push32((uint32_t)(0x12240490u));
  /* 12212b98 call dword ptr [0x1224346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224346c))), 0x12212b9eu);
  /* 12212b9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212ba1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212ba3 call 0x12213e20 */
  push32(0x12212ba8u); f_12213e20();
  /* 12212ba8 mov esi, esp */
  ESI = (ESP);
  /* 12212baa push 0 */
  push32((uint32_t)(0x0u));
  /* 12212bac push 0x12240490 */
  push32((uint32_t)(0x12240490u));
  /* 12212bb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212bb3 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212bb9u);
  /* 12212bb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212bbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212bbe call 0x12213e20 */
  push32(0x12212bc3u); f_12213e20();
  /* 12212bc3 mov esi, esp */
  ESI = (ESP);
  /* 12212bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212bc9 push 0x12240548 */
  push32((uint32_t)(0x12240548u));
  /* 12212bce push 2 */
  push32((uint32_t)(0x2u));
  /* 12212bd0 call dword ptr [0x12243490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243490))), 0x12212bd6u);
  /* 12212bd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212bd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212bdb call 0x12213e20 */
  push32(0x12212be0u); f_12213e20();
  /* 12212be0 mov esi, esp */
  ESI = (ESP);
  /* 12212be2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212be4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12212be6 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212becu);
  /* 12212bec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212bf1 call 0x12213e20 */
  push32(0x12212bf6u); f_12213e20();
  /* 12212bf6 mov esi, esp */
  ESI = (ESP);
  /* 12212bf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212bfa push 0xe */
  push32((uint32_t)(0xeu));
  /* 12212bfc call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212c02u);
  /* 12212c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212c05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212c07 call 0x12213e20 */
  push32(0x12212c0cu); f_12213e20();
  /* 12212c0c mov esi, esp */
  ESI = (ESP);
  /* 12212c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12212c10 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212c17 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212c1du);
  /* 12212c1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212c20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212c22 call 0x12213e20 */
  push32(0x12212c27u); f_12213e20();
L_12212c27:;
  /* 12212c27 mov esi, esp */
  ESI = (ESP);
  /* 12212c29 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12212c2b call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212c31u);
  /* 12212c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212c34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212c36 call 0x12213e20 */
  push32(0x12212c3bu); f_12213e20();
  /* 12212c3b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212c40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212c42 je 0x12212d02 */
  if (C.zf) goto L_12212d02;
  /* 12212c48 mov esi, esp */
  ESI = (ESP);
  /* 12212c4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12212c4c push 0x12240548 */
  push32((uint32_t)(0x12240548u));
  /* 12212c51 call dword ptr [0x1224349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224349c))), 0x12212c57u);
  /* 12212c57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212c5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212c5c call 0x12213e20 */
  push32(0x12212c61u); f_12213e20();
  /* 12212c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212c63 je 0x12212d02 */
  if (C.zf) goto L_12212d02;
  /* 12212c69 mov esi, esp */
  ESI = (ESP);
  /* 12212c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12212c6d push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212c74 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x12212c7au);
  /* 12212c7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212c7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212c7f call 0x12213e20 */
  push32(0x12212c84u); f_12213e20();
  /* 12212c84 mov esi, esp */
  ESI = (ESP);
  /* 12212c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212c88 call dword ptr [0x12243484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243484))), 0x12212c8eu);
  /* 12212c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212c91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212c93 call 0x12213e20 */
  push32(0x12212c98u); f_12213e20();
  /* 12212c98 mov esi, esp */
  ESI = (ESP);
  /* 12212c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12212c9c push 0x12240490 */
  push32((uint32_t)(0x12240490u));
  /* 12212ca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212ca3 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212ca9u);
  /* 12212ca9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212cae call 0x12213e20 */
  push32(0x12212cb3u); f_12213e20();
  /* 12212cb3 mov esi, esp */
  ESI = (ESP);
  /* 12212cb5 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 12212cba push 0x12240550 */
  push32((uint32_t)(0x12240550u));
  /* 12212cbf push 2 */
  push32((uint32_t)(0x2u));
  /* 12212cc1 call dword ptr [0x12243494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243494))), 0x12212cc7u);
  /* 12212cc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212ccc call 0x12213e20 */
  push32(0x12212cd1u); f_12213e20();
  /* 12212cd1 mov esi, esp */
  ESI = (ESP);
  /* 12212cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212cd5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12212cd7 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212cddu);
  /* 12212cdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212ce2 call 0x12213e20 */
  push32(0x12212ce7u); f_12213e20();
  /* 12212ce7 mov esi, esp */
  ESI = (ESP);
  /* 12212ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212ceb push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212cf2 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212cf8u);
  /* 12212cf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212cfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212cfd call 0x12213e20 */
  push32(0x12212d02u); f_12213e20();
L_12212d02:;
  /* 12212d02 mov esi, esp */
  ESI = (ESP);
  /* 12212d04 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12212d06 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212d0cu);
  /* 12212d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212d0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212d11 call 0x12213e20 */
  push32(0x12212d16u); f_12213e20();
  /* 12212d16 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212d1d je 0x12212d67 */
  if (C.zf) goto L_12212d67;
  /* 12212d1f mov esi, esp */
  ESI = (ESP);
  /* 12212d21 push 0x12240490 */
  push32((uint32_t)(0x12240490u));
  /* 12212d26 call dword ptr [0x12243488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243488))), 0x12212d2cu);
  /* 12212d2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212d2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212d31 call 0x12213e20 */
  push32(0x12212d36u); f_12213e20();
  /* 12212d36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212d39 jge 0x12212d67 */
  if ((C.sf==C.of)) goto L_12212d67;
  /* 12212d3b mov esi, esp */
  ESI = (ESP);
  /* 12212d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12212d3f push 0xf */
  push32((uint32_t)(0xfu));
  /* 12212d41 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212d47u);
  /* 12212d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212d4c call 0x12213e20 */
  push32(0x12212d51u); f_12213e20();
  /* 12212d51 mov esi, esp */
  ESI = (ESP);
  /* 12212d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212d55 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12212d57 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212d5du);
  /* 12212d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212d60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212d62 call 0x12213e20 */
  push32(0x12212d67u); f_12213e20();
L_12212d67:;
  /* 12212d67 mov esi, esp */
  ESI = (ESP);
  /* 12212d69 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12212d6b call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212d71u);
  /* 12212d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212d74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212d76 call 0x12213e20 */
  push32(0x12212d7bu); f_12213e20();
  /* 12212d7b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212d82 je 0x12212e80 */
  if (C.zf) goto L_12212e80;
  /* 12212d88 mov esi, esp */
  ESI = (ESP);
  /* 12212d8a push 0xd */
  push32((uint32_t)(0xdu));
  /* 12212d8c call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212d92u);
  /* 12212d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212d97 call 0x12213e20 */
  push32(0x12212d9cu); f_12213e20();
  /* 12212d9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212da3 je 0x12212e80 */
  if (C.zf) goto L_12212e80;
  /* 12212da9 mov esi, esp */
  ESI = (ESP);
  /* 12212dab push 0x12240458 */
  push32((uint32_t)(0x12240458u));
  /* 12212db0 call dword ptr [0x12243488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243488))), 0x12212db6u);
  /* 12212db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212db9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212dbb call 0x12213e20 */
  push32(0x12212dc0u); f_12213e20();
  /* 12212dc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212dc2 jne 0x12212e80 */
  if (!C.zf) goto L_12212e80;
  /* 12212dc8 mov esi, esp */
  ESI = (ESP);
  /* 12212dca push 0 */
  push32((uint32_t)(0x0u));
  /* 12212dcc push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12212dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212dd3 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x12212dd9u);
  /* 12212dd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212ddc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212dde call 0x12213e20 */
  push32(0x12212de3u); f_12213e20();
  /* 12212de3 mov esi, esp */
  ESI = (ESP);
  /* 12212de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212de7 push 0x12240488 */
  push32((uint32_t)(0x12240488u));
  /* 12212dec push 2 */
  push32((uint32_t)(0x2u));
  /* 12212dee call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212df4u);
  /* 12212df4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212df9 call 0x12213e20 */
  push32(0x12212dfeu); f_12213e20();
  /* 12212dfe mov esi, esp */
  ESI = (ESP);
  /* 12212e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212e04 push 0x122404f8 */
  push32((uint32_t)(0x122404f8u));
  /* 12212e09 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212e0b call dword ptr [0x12243490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243490))), 0x12212e11u);
  /* 12212e11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212e14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212e16 call 0x12213e20 */
  push32(0x12212e1bu); f_12213e20();
  /* 12212e1b mov esi, esp */
  ESI = (ESP);
  /* 12212e1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12212e1f push 0xb */
  push32((uint32_t)(0xbu));
  /* 12212e21 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212e27u);
  /* 12212e27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212e2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212e2c call 0x12213e20 */
  push32(0x12212e31u); f_12213e20();
  /* 12212e31 mov esi, esp */
  ESI = (ESP);
  /* 12212e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212e35 push 0x12240490 */
  push32((uint32_t)(0x12240490u));
  /* 12212e3a push 2 */
  push32((uint32_t)(0x2u));
  /* 12212e3c call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12212e42u);
  /* 12212e42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212e45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212e47 call 0x12213e20 */
  push32(0x12212e4cu); f_12213e20();
  /* 12212e4c mov esi, esp */
  ESI = (ESP);
  /* 12212e4e push 0x82 */
  push32((uint32_t)(0x82u));
  /* 12212e53 push 0x12240550 */
  push32((uint32_t)(0x12240550u));
  /* 12212e58 push 2 */
  push32((uint32_t)(0x2u));
  /* 12212e5a call dword ptr [0x12243494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243494))), 0x12212e60u);
  /* 12212e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212e63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212e65 call 0x12213e20 */
  push32(0x12212e6au); f_12213e20();
  /* 12212e6a mov esi, esp */
  ESI = (ESP);
  /* 12212e6c push 1 */
  push32((uint32_t)(0x1u));
  /* 12212e6e push 0xe */
  push32((uint32_t)(0xeu));
  /* 12212e70 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212e76u);
  /* 12212e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212e7b call 0x12213e20 */
  push32(0x12212e80u); f_12213e20();
L_12212e80:;
  /* 12212e80 mov esi, esp */
  ESI = (ESP);
  /* 12212e82 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12212e84 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212e8au);
  /* 12212e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212e8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212e8f call 0x12213e20 */
  push32(0x12212e94u); f_12213e20();
  /* 12212e94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212e9b je 0x12212f03 */
  if (C.zf) goto L_12212f03;
  /* 12212e9d mov esi, esp */
  ESI = (ESP);
  /* 12212e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12212ea1 push 0x12240408 */
  push32((uint32_t)(0x12240408u));
  /* 12212ea6 call dword ptr [0x122434a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434a4))), 0x12212eacu);
  /* 12212eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212eaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212eb1 call 0x12213e20 */
  push32(0x12212eb6u); f_12213e20();
  /* 12212eb6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212eb9 jle 0x12212f03 */
  if ((C.zf||C.sf!=C.of)) goto L_12212f03;
  /* 12212ebb mov esi, esp */
  ESI = (ESP);
  /* 12212ebd push 0x1223b2e0 */
  push32((uint32_t)(0x1223b2e0u));
  /* 12212ec2 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x12212ec8u);
  /* 12212ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212ecd call 0x12213e20 */
  push32(0x12212ed2u); f_12213e20();
  /* 12212ed2 mov esi, esp */
  ESI = (ESP);
  /* 12212ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212ed6 push 0x12240408 */
  push32((uint32_t)(0x12240408u));
  /* 12212edb push 0 */
  push32((uint32_t)(0x0u));
  /* 12212edd call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x12212ee3u);
  /* 12212ee3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212ee6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212ee8 call 0x12213e20 */
  push32(0x12212eedu); f_12213e20();
  /* 12212eed mov esi, esp */
  ESI = (ESP);
  /* 12212eef push 0 */
  push32((uint32_t)(0x0u));
  /* 12212ef1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12212ef3 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212ef9u);
  /* 12212ef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212efc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212efe call 0x12213e20 */
  push32(0x12212f03u); f_12213e20();
L_12212f03:;
  /* 12212f03 mov esi, esp */
  ESI = (ESP);
  /* 12212f05 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12212f07 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212f0du);
  /* 12212f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212f10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212f12 call 0x12213e20 */
  push32(0x12212f17u); f_12213e20();
  /* 12212f17 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212f1e jne 0x12212f6f */
  if (!C.zf) goto L_12212f6f;
  /* 12212f20 mov esi, esp */
  ESI = (ESP);
  /* 12212f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212f24 push 0x12240408 */
  push32((uint32_t)(0x12240408u));
  /* 12212f29 call dword ptr [0x122434a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434a4))), 0x12212f2fu);
  /* 12212f2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212f32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212f34 call 0x12213e20 */
  push32(0x12212f39u); f_12213e20();
  /* 12212f39 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212f3c jge 0x12212f6f */
  if ((C.sf==C.of)) goto L_12212f6f;
  /* 12212f3e mov esi, esp */
  ESI = (ESP);
  /* 12212f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212f42 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12212f44 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12212f4au);
  /* 12212f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212f4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212f4f call 0x12213e20 */
  push32(0x12212f54u); f_12213e20();
  /* 12212f54 mov esi, esp */
  ESI = (ESP);
  /* 12212f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 12212f58 push 0x12240408 */
  push32((uint32_t)(0x12240408u));
  /* 12212f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12212f5f call dword ptr [0x122434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434e4))), 0x12212f65u);
  /* 12212f65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212f68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212f6a call 0x12213e20 */
  push32(0x12212f6fu); f_12213e20();
L_12212f6f:;
  /* 12212f6f mov esi, esp */
  ESI = (ESP);
  /* 12212f71 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12212f73 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212f79u);
  /* 12212f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212f7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212f7e call 0x12213e20 */
  push32(0x12212f83u); f_12213e20();
  /* 12212f83 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212f8a je 0x122131d1 */
  if (C.zf) goto L_122131d1;
  /* 12212f90 mov esi, esp */
  ESI = (ESP);
  /* 12212f92 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12212f94 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x12212f9au);
  /* 12212f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212f9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212f9f call 0x12213e20 */
  push32(0x12212fa4u); f_12213e20();
  /* 12212fa4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12212fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212fab je 0x122131d1 */
  if (C.zf) goto L_122131d1;
  /* 12212fb1 mov esi, esp */
  ESI = (ESP);
  /* 12212fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12212fb5 push 0x12240508 */
  push32((uint32_t)(0x12240508u));
  /* 12212fba call dword ptr [0x1224349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224349c))), 0x12212fc0u);
  /* 12212fc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212fc5 call 0x12213e20 */
  push32(0x12212fcau); f_12213e20();
  /* 12212fca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12212fcc jle 0x122131d1 */
  if ((C.zf||C.sf!=C.of)) goto L_122131d1;
  /* 12212fd2 mov esi, esp */
  ESI = (ESP);
  /* 12212fd4 push 0x1223b2d8 */
  push32((uint32_t)(0x1223b2d8u));
  /* 12212fd9 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x12212fdfu);
  /* 12212fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212fe2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212fe4 call 0x12213e20 */
  push32(0x12212fe9u); f_12213e20();
  /* 12212fe9 mov esi, esp */
  ESI = (ESP);
  /* 12212feb push 0x1223b2d0 */
  push32((uint32_t)(0x1223b2d0u));
  /* 12212ff0 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x12212ff6u);
  /* 12212ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12212ff9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12212ffb call 0x12213e20 */
  push32(0x12213000u); f_12213e20();
  /* 12213000 mov esi, esp */
  ESI = (ESP);
  /* 12213002 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213004 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12213006 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x1221300cu);
  /* 1221300c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221300f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213011 call 0x12213e20 */
  push32(0x12213016u); f_12213e20();
  /* 12213016 mov esi, esp */
  ESI = (ESP);
  /* 12213018 push 0x1223b2b8 */
  push32((uint32_t)(0x1223b2b8u));
  /* 1221301d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221301f push 0x1223b2b0 */
  push32((uint32_t)(0x1223b2b0u));
  /* 12213024 push 9 */
  push32((uint32_t)(0x9u));
  /* 12213026 call dword ptr [0x122434a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434a8))), 0x1221302cu);
  /* 1221302c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221302f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213031 call 0x12213e20 */
  push32(0x12213036u); f_12213e20();
  /* 12213036 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12213039 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221303d je 0x12213054 */
  if (C.zf) goto L_12213054;
  /* 1221303f cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213043 je 0x122130b2 */
  if (C.zf) goto L_122130b2;
  /* 12213045 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213049 je 0x122131ba */
  if (C.zf) goto L_122131ba;
  /* 1221304f jmp 0x122131d1 */
  goto L_122131d1;
L_12213054:;
  /* 12213054 mov esi, esp */
  ESI = (ESP);
  /* 12213056 push 0x1223b2a8 */
  push32((uint32_t)(0x1223b2a8u));
  /* 1221305b call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x12213061u);
  /* 12213061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213064 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213066 call 0x12213e20 */
  push32(0x1221306bu); f_12213e20();
  /* 1221306b mov esi, esp */
  ESI = (ESP);
  /* 1221306d push 1 */
  push32((uint32_t)(0x1u));
  /* 1221306f push 0 */
  push32((uint32_t)(0x0u));
  /* 12213071 call dword ptr [0x122434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434dc))), 0x12213077u);
  /* 12213077 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221307a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221307c call 0x12213e20 */
  push32(0x12213081u); f_12213e20();
  /* 12213081 mov esi, esp */
  ESI = (ESP);
  /* 12213083 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12213085 push 4 */
  push32((uint32_t)(0x4u));
  /* 12213087 call dword ptr [0x122434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434dc))), 0x1221308du);
  /* 1221308d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213090 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213092 call 0x12213e20 */
  push32(0x12213097u); f_12213e20();
  /* 12213097 mov esi, esp */
  ESI = (ESP);
  /* 12213099 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221309b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1221309d call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122130a3u);
  /* 122130a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122130a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122130a8 call 0x12213e20 */
  push32(0x122130adu); f_12213e20();
  /* 122130ad jmp 0x122131d1 */
  goto L_122131d1;
L_122130b2:;
  /* 122130b2 mov esi, esp */
  ESI = (ESP);
  /* 122130b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 122130b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122130b8 call dword ptr [0x122434a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434a0))), 0x122130beu);
  /* 122130be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122130c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122130c3 call 0x12213e20 */
  push32(0x122130c8u); f_12213e20();
  /* 122130c8 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122130cd jle 0x1221318a */
  if ((C.zf||C.sf!=C.of)) goto L_1221318a;
  /* 122130d3 mov esi, esp */
  ESI = (ESP);
  /* 122130d5 push 0xffffd8f0 */
  push32((uint32_t)(0xffffd8f0u));
  /* 122130da push 1 */
  push32((uint32_t)(0x1u));
  /* 122130dc push 0 */
  push32((uint32_t)(0x0u));
  /* 122130de call dword ptr [0x122434b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b0))), 0x122130e4u);
  /* 122130e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122130e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122130e9 call 0x12213e20 */
  push32(0x122130eeu); f_12213e20();
  /* 122130ee mov esi, esp */
  ESI = (ESP);
  /* 122130f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122130f2 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 122130f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122130f9 call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x122130ffu);
  /* 122130ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213102 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213104 call 0x12213e20 */
  push32(0x12213109u); f_12213e20();
  /* 12213109 mov esi, esp */
  ESI = (ESP);
  /* 1221310b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221310d push 0x12240498 */
  push32((uint32_t)(0x12240498u));
  /* 12213112 push 4 */
  push32((uint32_t)(0x4u));
  /* 12213114 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x1221311au);
  /* 1221311a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221311d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221311f call 0x12213e20 */
  push32(0x12213124u); f_12213e20();
  /* 12213124 mov esi, esp */
  ESI = (ESP);
  /* 12213126 push 3 */
  push32((uint32_t)(0x3u));
  /* 12213128 push 4 */
  push32((uint32_t)(0x4u));
  /* 1221312a call dword ptr [0x122434b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b4))), 0x12213130u);
  /* 12213130 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213133 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213135 call 0x12213e20 */
  push32(0x1221313au); f_12213e20();
  /* 1221313a mov esi, esp */
  ESI = (ESP);
  /* 1221313c push 0 */
  push32((uint32_t)(0x0u));
  /* 1221313e push 0 */
  push32((uint32_t)(0x0u));
  /* 12213140 push 0x122404d0 */
  push32((uint32_t)(0x122404d0u));
  /* 12213145 push 3 */
  push32((uint32_t)(0x3u));
  /* 12213147 call dword ptr [0x12243478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243478))), 0x1221314du);
  /* 1221314d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213152 call 0x12213e20 */
  push32(0x12213157u); f_12213e20();
  /* 12213157 mov esi, esp */
  ESI = (ESP);
  /* 12213159 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221315b push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12213160 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213162 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12213168u);
  /* 12213168 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221316b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221316d call 0x12213e20 */
  push32(0x12213172u); f_12213e20();
  /* 12213172 mov esi, esp */
  ESI = (ESP);
  /* 12213174 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213176 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12213178 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x1221317eu);
  /* 1221317e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213183 call 0x12213e20 */
  push32(0x12213188u); f_12213e20();
  /* 12213188 jmp 0x122131b8 */
  goto L_122131b8;
L_1221318a:;
  /* 1221318a mov esi, esp */
  ESI = (ESP);
  /* 1221318c push 0x1223b29c */
  push32((uint32_t)(0x1223b29cu));
  /* 12213191 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x12213197u);
  /* 12213197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221319a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221319c call 0x12213e20 */
  push32(0x122131a1u); f_12213e20();
  /* 122131a1 mov esi, esp */
  ESI = (ESP);
  /* 122131a3 push 0x1223b290 */
  push32((uint32_t)(0x1223b290u));
  /* 122131a8 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x122131aeu);
  /* 122131ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122131b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122131b3 call 0x12213e20 */
  push32(0x122131b8u); f_12213e20();
L_122131b8:;
  /* 122131b8 jmp 0x122131d1 */
  goto L_122131d1;
L_122131ba:;
  /* 122131ba mov esi, esp */
  ESI = (ESP);
  /* 122131bc push 0x1223b288 */
  push32((uint32_t)(0x1223b288u));
  /* 122131c1 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x122131c7u);
  /* 122131c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122131ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122131cc call 0x12213e20 */
  push32(0x122131d1u); f_12213e20();
L_122131d1:;
  /* 122131d1 mov esi, esp */
  ESI = (ESP);
  /* 122131d3 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 122131d5 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x122131dbu);
  /* 122131db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122131de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122131e0 call 0x12213e20 */
  push32(0x122131e5u); f_12213e20();
  /* 122131e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122131ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122131ec jne 0x12213221 */
  if (!C.zf) goto L_12213221;
  /* 122131ee mov esi, esp */
  ESI = (ESP);
  /* 122131f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122131f2 push 0x12240508 */
  push32((uint32_t)(0x12240508u));
  /* 122131f7 call dword ptr [0x1224349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224349c))), 0x122131fdu);
  /* 122131fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213202 call 0x12213e20 */
  push32(0x12213207u); f_12213e20();
  /* 12213207 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12213209 jne 0x12213221 */
  if (!C.zf) goto L_12213221;
  /* 1221320b mov esi, esp */
  ESI = (ESP);
  /* 1221320d push 1 */
  push32((uint32_t)(0x1u));
  /* 1221320f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12213211 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12213217u);
  /* 12213217 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221321a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221321c call 0x12213e20 */
  push32(0x12213221u); f_12213e20();
L_12213221:;
  /* 12213221 mov esi, esp */
  ESI = (ESP);
  /* 12213223 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12213225 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x1221322bu);
  /* 1221322b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221322e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213230 call 0x12213e20 */
  push32(0x12213235u); f_12213e20();
  /* 12213235 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221323a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221323c je 0x12213455 */
  if (C.zf) goto L_12213455;
  /* 12213242 mov esi, esp */
  ESI = (ESP);
  /* 12213244 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12213246 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x1221324cu);
  /* 1221324c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221324f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213251 call 0x12213e20 */
  push32(0x12213256u); f_12213e20();
  /* 12213256 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221325b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221325d je 0x12213455 */
  if (C.zf) goto L_12213455;
  /* 12213263 mov esi, esp */
  ESI = (ESP);
  /* 12213265 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213267 push 0x12240508 */
  push32((uint32_t)(0x12240508u));
  /* 1221326c call dword ptr [0x1224349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224349c))), 0x12213272u);
  /* 12213272 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213277 call 0x12213e20 */
  push32(0x1221327cu); f_12213e20();
  /* 1221327c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221327e jle 0x12213455 */
  if ((C.zf||C.sf!=C.of)) goto L_12213455;
  /* 12213284 mov esi, esp */
  ESI = (ESP);
  /* 12213286 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213288 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1221328a call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12213290u);
  /* 12213290 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213295 call 0x12213e20 */
  push32(0x1221329au); f_12213e20();
  /* 1221329a mov esi, esp */
  ESI = (ESP);
  /* 1221329c push 0x1223b270 */
  push32((uint32_t)(0x1223b270u));
  /* 122132a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122132a3 push 0x1223b268 */
  push32((uint32_t)(0x1223b268u));
  /* 122132a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 122132aa call dword ptr [0x122434a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434a8))), 0x122132b0u);
  /* 122132b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122132b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122132b5 call 0x12213e20 */
  push32(0x122132bau); f_12213e20();
  /* 122132ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122132bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122132c1 je 0x122132d8 */
  if (C.zf) goto L_122132d8;
  /* 122132c3 cmp dword ptr [ebp - 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122132c7 je 0x12213336 */
  if (C.zf) goto L_12213336;
  /* 122132c9 cmp dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122132cd je 0x1221343e */
  if (C.zf) goto L_1221343e;
  /* 122132d3 jmp 0x12213455 */
  goto L_12213455;
L_122132d8:;
  /* 122132d8 mov esi, esp */
  ESI = (ESP);
  /* 122132da push 0x1223b25c */
  push32((uint32_t)(0x1223b25cu));
  /* 122132df call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x122132e5u);
  /* 122132e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122132e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122132ea call 0x12213e20 */
  push32(0x122132efu); f_12213e20();
  /* 122132ef mov esi, esp */
  ESI = (ESP);
  /* 122132f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122132f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122132f5 call dword ptr [0x122434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434dc))), 0x122132fbu);
  /* 122132fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122132fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213300 call 0x12213e20 */
  push32(0x12213305u); f_12213e20();
  /* 12213305 mov esi, esp */
  ESI = (ESP);
  /* 12213307 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12213309 push 4 */
  push32((uint32_t)(0x4u));
  /* 1221330b call dword ptr [0x122434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434dc))), 0x12213311u);
  /* 12213311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213314 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213316 call 0x12213e20 */
  push32(0x1221331bu); f_12213e20();
  /* 1221331b mov esi, esp */
  ESI = (ESP);
  /* 1221331d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221331f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12213321 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12213327u);
  /* 12213327 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221332a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221332c call 0x12213e20 */
  push32(0x12213331u); f_12213e20();
  /* 12213331 jmp 0x12213455 */
  goto L_12213455;
L_12213336:;
  /* 12213336 mov esi, esp */
  ESI = (ESP);
  /* 12213338 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221333a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221333c call dword ptr [0x122434a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434a0))), 0x12213342u);
  /* 12213342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213345 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213347 call 0x12213e20 */
  push32(0x1221334cu); f_12213e20();
  /* 1221334c cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213351 jle 0x1221340e */
  if ((C.zf||C.sf!=C.of)) goto L_1221340e;
  /* 12213357 mov esi, esp */
  ESI = (ESP);
  /* 12213359 push 0xffffd8f0 */
  push32((uint32_t)(0xffffd8f0u));
  /* 1221335e push 1 */
  push32((uint32_t)(0x1u));
  /* 12213360 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213362 call dword ptr [0x122434b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b0))), 0x12213368u);
  /* 12213368 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221336b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221336d call 0x12213e20 */
  push32(0x12213372u); f_12213e20();
  /* 12213372 mov esi, esp */
  ESI = (ESP);
  /* 12213374 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213376 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 1221337b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221337d call dword ptr [0x12243464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243464))), 0x12213383u);
  /* 12213383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213386 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213388 call 0x12213e20 */
  push32(0x1221338du); f_12213e20();
  /* 1221338d mov esi, esp */
  ESI = (ESP);
  /* 1221338f push 0 */
  push32((uint32_t)(0x0u));
  /* 12213391 push 0x12240498 */
  push32((uint32_t)(0x12240498u));
  /* 12213396 push 4 */
  push32((uint32_t)(0x4u));
  /* 12213398 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x1221339eu);
  /* 1221339e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122133a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122133a3 call 0x12213e20 */
  push32(0x122133a8u); f_12213e20();
  /* 122133a8 mov esi, esp */
  ESI = (ESP);
  /* 122133aa push 3 */
  push32((uint32_t)(0x3u));
  /* 122133ac push 4 */
  push32((uint32_t)(0x4u));
  /* 122133ae call dword ptr [0x122434b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434b4))), 0x122133b4u);
  /* 122133b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122133b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122133b9 call 0x12213e20 */
  push32(0x122133beu); f_12213e20();
  /* 122133be mov esi, esp */
  ESI = (ESP);
  /* 122133c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122133c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122133c4 push 0x122404d0 */
  push32((uint32_t)(0x122404d0u));
  /* 122133c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 122133cb call dword ptr [0x12243478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243478))), 0x122133d1u);
  /* 122133d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122133d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122133d6 call 0x12213e20 */
  push32(0x122133dbu); f_12213e20();
  /* 122133db mov esi, esp */
  ESI = (ESP);
  /* 122133dd push 0 */
  push32((uint32_t)(0x0u));
  /* 122133df push 0x16 */
  push32((uint32_t)(0x16u));
  /* 122133e1 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122133e7u);
  /* 122133e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122133ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122133ec call 0x12213e20 */
  push32(0x122133f1u); f_12213e20();
  /* 122133f1 mov esi, esp */
  ESI = (ESP);
  /* 122133f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122133f5 push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 122133fa push 0 */
  push32((uint32_t)(0x0u));
  /* 122133fc call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12213402u);
  /* 12213402 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213407 call 0x12213e20 */
  push32(0x1221340cu); f_12213e20();
  /* 1221340c jmp 0x1221343c */
  goto L_1221343c;
L_1221340e:;
  /* 1221340e mov esi, esp */
  ESI = (ESP);
  /* 12213410 push 0x1223b29c */
  push32((uint32_t)(0x1223b29cu));
  /* 12213415 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x1221341bu);
  /* 1221341b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221341e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213420 call 0x12213e20 */
  push32(0x12213425u); f_12213e20();
  /* 12213425 mov esi, esp */
  ESI = (ESP);
  /* 12213427 push 0x1223b290 */
  push32((uint32_t)(0x1223b290u));
  /* 1221342c call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x12213432u);
  /* 12213432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213437 call 0x12213e20 */
  push32(0x1221343cu); f_12213e20();
L_1221343c:;
  /* 1221343c jmp 0x12213455 */
  goto L_12213455;
L_1221343e:;
  /* 1221343e mov esi, esp */
  ESI = (ESP);
  /* 12213440 push 0x1223b288 */
  push32((uint32_t)(0x1223b288u));
  /* 12213445 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x1221344bu);
  /* 1221344b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221344e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213450 call 0x12213e20 */
  push32(0x12213455u); f_12213e20();
L_12213455:;
  /* 12213455 mov esi, esp */
  ESI = (ESP);
  /* 12213457 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12213459 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x1221345fu);
  /* 1221345f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213462 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213464 call 0x12213e20 */
  push32(0x12213469u); f_12213e20();
  /* 12213469 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221346e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12213470 je 0x12213553 */
  if (C.zf) goto L_12213553;
  /* 12213476 mov esi, esp */
  ESI = (ESP);
  /* 12213478 push 4 */
  push32((uint32_t)(0x4u));
  /* 1221347a push 0x12240508 */
  push32((uint32_t)(0x12240508u));
  /* 1221347f call dword ptr [0x1224349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224349c))), 0x12213485u);
  /* 12213485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221348a call 0x12213e20 */
  push32(0x1221348fu); f_12213e20();
  /* 1221348f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12213491 jne 0x12213553 */
  if (!C.zf) goto L_12213553;
  /* 12213497 mov esi, esp */
  ESI = (ESP);
  /* 12213499 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221349b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1221349d call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x122134a3u);
  /* 122134a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122134a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122134a8 call 0x12213e20 */
  push32(0x122134adu); f_12213e20();
  /* 122134ad mov esi, esp */
  ESI = (ESP);
  /* 122134af push 0x1223b250 */
  push32((uint32_t)(0x1223b250u));
  /* 122134b4 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x122134bau);
  /* 122134ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122134bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122134bf call 0x12213e20 */
  push32(0x122134c4u); f_12213e20();
  /* 122134c4 mov esi, esp */
  ESI = (ESP);
  /* 122134c6 push 0x12240510 */
  push32((uint32_t)(0x12240510u));
  /* 122134cb call dword ptr [0x1224345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224345c))), 0x122134d1u);
  /* 122134d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122134d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122134d6 call 0x12213e20 */
  push32(0x122134dbu); f_12213e20();
  /* 122134db mov esi, esp */
  ESI = (ESP);
  /* 122134dd push 0x96 */
  push32((uint32_t)(0x96u));
  /* 122134e2 push 0x12240510 */
  push32((uint32_t)(0x12240510u));
  /* 122134e7 push 3 */
  push32((uint32_t)(0x3u));
  /* 122134e9 push 0x122404b0 */
  push32((uint32_t)(0x122404b0u));
  /* 122134ee push 0x12240500 */
  push32((uint32_t)(0x12240500u));
  /* 122134f3 push 0x12240478 */
  push32((uint32_t)(0x12240478u));
  /* 122134f8 call dword ptr [0x1224346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224346c))), 0x122134feu);
  /* 122134fe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213503 call 0x12213e20 */
  push32(0x12213508u); f_12213e20();
  /* 12213508 mov esi, esp */
  ESI = (ESP);
  /* 1221350a push 0x1223b1f4 */
  push32((uint32_t)(0x1223b1f4u));
  /* 1221350f push 0x1223b1fc */
  push32((uint32_t)(0x1223b1fcu));
  /* 12213514 call dword ptr [0x12243450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243450))), 0x1221351au);
  /* 1221351a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221351d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221351f call 0x12213e20 */
  push32(0x12213524u); f_12213e20();
  /* 12213524 mov esi, esp */
  ESI = (ESP);
  /* 12213526 push 3 */
  push32((uint32_t)(0x3u));
  /* 12213528 call dword ptr [0x12243484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243484))), 0x1221352eu);
  /* 1221352e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213531 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213533 call 0x12213e20 */
  push32(0x12213538u); f_12213e20();
  /* 12213538 mov esi, esp */
  ESI = (ESP);
  /* 1221353a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221353c push 0x12240480 */
  push32((uint32_t)(0x12240480u));
  /* 12213541 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213543 call dword ptr [0x12243474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243474))), 0x12213549u);
  /* 12213549 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221354c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221354e call 0x12213e20 */
  push32(0x12213553u); f_12213e20();
L_12213553:;
  /* 12213553 mov esi, esp */
  ESI = (ESP);
  /* 12213555 push 8 */
  push32((uint32_t)(0x8u));
  /* 12213557 call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x1221355du);
  /* 1221355d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213560 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213562 call 0x12213e20 */
  push32(0x12213567u); f_12213e20();
  /* 12213567 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221356c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221356e je 0x122135c9 */
  if (C.zf) goto L_122135c9;
  /* 12213570 mov esi, esp */
  ESI = (ESP);
  /* 12213572 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213574 call dword ptr [0x122434ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434ac))), 0x1221357au);
  /* 1221357a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221357d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221357f call 0x12213e20 */
  push32(0x12213584u); f_12213e20();
  /* 12213584 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12213589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221358b je 0x122135c9 */
  if (C.zf) goto L_122135c9;
  /* 1221358d mov esi, esp */
  ESI = (ESP);
  /* 1221358f push 0 */
  push32((uint32_t)(0x0u));
  /* 12213591 push 8 */
  push32((uint32_t)(0x8u));
  /* 12213593 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x12213599u);
  /* 12213599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221359c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221359e call 0x12213e20 */
  push32(0x122135a3u); f_12213e20();
  /* 122135a3 mov esi, esp */
  ESI = (ESP);
  /* 122135a5 push 0x1223b244 */
  push32((uint32_t)(0x1223b244u));
  /* 122135aa call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x122135b0u);
  /* 122135b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122135b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122135b5 call 0x12213e20 */
  push32(0x122135bau); f_12213e20();
  /* 122135ba mov esi, esp */
  ESI = (ESP);
  /* 122135bc call dword ptr [0x122434bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434bc))), 0x122135c2u);
  /* 122135c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122135c4 call 0x12213e20 */
  push32(0x122135c9u); f_12213e20();
L_122135c9:;
  /* 122135c9 mov esi, esp */
  ESI = (ESP);
  /* 122135cb push 0x63 */
  push32((uint32_t)(0x63u));
  /* 122135cd call dword ptr [0x1224343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224343c))), 0x122135d3u);
  /* 122135d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122135d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122135d8 call 0x12213e20 */
  push32(0x122135ddu); f_12213e20();
  /* 122135dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122135e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122135e4 je 0x1221363f */
  if (C.zf) goto L_1221363f;
  /* 122135e6 mov esi, esp */
  ESI = (ESP);
  /* 122135e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 122135ea call dword ptr [0x122434ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434ac))), 0x122135f0u);
  /* 122135f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122135f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122135f5 call 0x12213e20 */
  push32(0x122135fau); f_12213e20();
  /* 122135fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122135ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12213601 je 0x1221363f */
  if (C.zf) goto L_1221363f;
  /* 12213603 mov esi, esp */
  ESI = (ESP);
  /* 12213605 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213607 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12213609 call dword ptr [0x12243444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243444))), 0x1221360fu);
  /* 1221360f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213612 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213614 call 0x12213e20 */
  push32(0x12213619u); f_12213e20();
  /* 12213619 mov esi, esp */
  ESI = (ESP);
  /* 1221361b push 0x1223b238 */
  push32((uint32_t)(0x1223b238u));
  /* 12213620 call dword ptr [0x1224344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224344c))), 0x12213626u);
  /* 12213626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221362b call 0x12213e20 */
  push32(0x12213630u); f_12213e20();
  /* 12213630 mov esi, esp */
  ESI = (ESP);
  /* 12213632 call dword ptr [0x122434c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122434c0))), 0x12213638u);
  /* 12213638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221363a call 0x12213e20 */
  push32(0x1221363fu); f_12213e20();
L_1221363f:;
  /* 1221363f pop edi */
  EDI = (pop32());
  /* 12213640 pop esi */
  ESI = (pop32());
  /* 12213641 pop ebx */
  EBX = (pop32());
  /* 12213642 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213645 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213647 call 0x12213e20 */
  push32(0x1221364cu); f_12213e20();
  /* 1221364c mov esp, ebp */
  ESP = (EBP);
  /* 1221364e pop ebp */
  EBP = (pop32());
  /* 1221364f ret  */
  ESPCHK(0x12211b30u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12213e20 (56 bytes, 28 insns) */
void f_12213e20(void) {
  FTRACE(0x12213e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12213e20 jne 0x12213e23 */
  if (!C.zf) goto L_12213e23;
  /* 12213e22 ret  */
  ESPCHK(0x12213e20u, _esp0);
  ESP += 4; return;
L_12213e23:;
  /* 12213e23 push ebp */
  push32((uint32_t)(EBP));
  /* 12213e24 mov ebp, esp */
  EBP = (ESP);
  /* 12213e26 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12213e29 push eax */
  push32((uint32_t)(EAX));
  /* 12213e2a push edx */
  push32((uint32_t)(EDX));
  /* 12213e2b push ebx */
  push32((uint32_t)(EBX));
  /* 12213e2c push esi */
  push32((uint32_t)(ESI));
  /* 12213e2d push edi */
  push32((uint32_t)(EDI));
  /* 12213e2e push 0x1223b33c */
  push32((uint32_t)(0x1223b33cu));
  /* 12213e33 push 0x1223b338 */
  push32((uint32_t)(0x1223b338u));
  /* 12213e38 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12213e3a push 0x1223b328 */
  push32((uint32_t)(0x1223b328u));
  /* 12213e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12213e41 call 0x122141f0 */
  push32(0x12213e46u); f_122141f0();
  /* 12213e46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213e49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213e4c jne 0x12213e4f */
  if (!C.zf) goto L_12213e4f;
  /* 12213e4e int3  */
  x86_unimpl("int3 @ 0x12213e4e");
L_12213e4f:;
  /* 12213e4f pop edi */
  EDI = (pop32());
  /* 12213e50 pop esi */
  ESI = (pop32());
  /* 12213e51 pop ebx */
  EBX = (pop32());
  /* 12213e52 pop edx */
  EDX = (pop32());
  /* 12213e53 pop eax */
  EAX = (pop32());
  /* 12213e54 mov esp, ebp */
  ESP = (EBP);
  /* 12213e56 pop ebp */
  EBP = (pop32());
  /* 12213e57 ret  */
  ESPCHK(0x12213e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e60 @ 0x12213e60 (313 bytes, 78 insns) */
void f_12213e60(void) {
  FTRACE(0x12213e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12213e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12213e61 mov ebp, esp */
  EBP = (ESP);
  /* 12213e63 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213e67 jne 0x12213f27 */
  if (!C.zf) goto L_12213f27;
  /* 12213e6d call dword ptr [0x12243368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243368))), 0x12213e73u);
  /* 12213e73 mov dword ptr [0x122405d0], eax */
  w32((uint32_t)(0x122405d0), (EAX));
  /* 12213e78 push 1 */
  push32((uint32_t)(0x1u));
  /* 12213e7a call 0x12217920 */
  push32(0x12213e7fu); f_12217920();
  /* 12213e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12213e84 jne 0x12213e8d */
  if (!C.zf) goto L_12213e8d;
  /* 12213e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12213e88 jmp 0x12213f95 */
  goto L_12213f95;
L_12213e8d:;
  /* 12213e8d mov eax, dword ptr [0x122405d0] */
  EAX = (r32((uint32_t)(0x122405d0)));
  /* 12213e92 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12213e95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12213e9a mov dword ptr [0x122405dc], eax */
  w32((uint32_t)(0x122405dc), (EAX));
  /* 12213e9f mov ecx, dword ptr [0x122405d0] */
  ECX = (r32((uint32_t)(0x122405d0)));
  /* 12213ea5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12213eab mov dword ptr [0x122405d8], ecx */
  w32((uint32_t)(0x122405d8), (ECX));
  /* 12213eb1 mov edx, dword ptr [0x122405d8] */
  EDX = (r32((uint32_t)(0x122405d8)));
  /* 12213eb7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12213eba add edx, dword ptr [0x122405dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122405dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12213ec0 mov dword ptr [0x122405d4], edx */
  w32((uint32_t)(0x122405d4), (EDX));
  /* 12213ec6 mov eax, dword ptr [0x122405d0] */
  EAX = (r32((uint32_t)(0x122405d0)));
  /* 12213ecb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12213ece and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12213ed3 mov dword ptr [0x122405d0], eax */
  w32((uint32_t)(0x122405d0), (EAX));
  /* 12213ed8 call 0x12214a90 */
  push32(0x12213eddu); f_12214a90();
  /* 12213edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12213edf jne 0x12213eed */
  if (!C.zf) goto L_12213eed;
  /* 12213ee1 call 0x12217970 */
  push32(0x12213ee6u); f_12217970();
  /* 12213ee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12213ee8 jmp 0x12213f95 */
  goto L_12213f95;
L_12213eed:;
  /* 12213eed call dword ptr [0x12243364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243364))), 0x12213ef3u);
  /* 12213ef3 mov dword ptr [0x1224210c], eax */
  w32((uint32_t)(0x1224210c), (EAX));
  /* 12213ef8 call 0x12217700 */
  push32(0x12213efdu); f_12217700();
  /* 12213efd mov dword ptr [0x122405b8], eax */
  w32((uint32_t)(0x122405b8), (EAX));
  /* 12213f02 call 0x12214d40 */
  push32(0x12213f07u); f_12214d40();
  /* 12213f07 call 0x122171f0 */
  push32(0x12213f0cu); f_122171f0();
  /* 12213f0c call 0x122170a0 */
  push32(0x12213f11u); f_122170a0();
  /* 12213f11 call 0x12214890 */
  push32(0x12213f16u); f_12214890();
  /* 12213f16 mov ecx, dword ptr [0x122405b4] */
  ECX = (r32((uint32_t)(0x122405b4)));
  /* 12213f1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12213f1f mov dword ptr [0x122405b4], ecx */
  w32((uint32_t)(0x122405b4), (ECX));
  /* 12213f25 jmp 0x12213f90 */
  goto L_12213f90;
L_12213f27:;
  /* 12213f27 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213f2b jne 0x12213f80 */
  if (!C.zf) goto L_12213f80;
  /* 12213f2d cmp dword ptr [0x122405b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213f34 jle 0x12213f7a */
  if ((C.zf||C.sf!=C.of)) goto L_12213f7a;
  /* 12213f36 mov edx, dword ptr [0x122405b4] */
  EDX = (r32((uint32_t)(0x122405b4)));
  /* 12213f3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12213f3f mov dword ptr [0x122405b4], edx */
  w32((uint32_t)(0x122405b4), (EDX));
  /* 12213f45 cmp dword ptr [0x12240608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213f4c jne 0x12213f53 */
  if (!C.zf) goto L_12213f53;
  /* 12213f4e call 0x12214910 */
  push32(0x12213f53u); f_12214910();
L_12213f53:;
  /* 12213f53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12213f55 call 0x12216640 */
  push32(0x12213f5au); f_12216640();
  /* 12213f5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12213f5d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12213f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12213f62 je 0x12213f69 */
  if (C.zf) goto L_12213f69;
  /* 12213f64 call 0x12216f50 */
  push32(0x12213f69u); f_12216f50();
L_12213f69:;
  /* 12213f69 call 0x12215070 */
  push32(0x12213f6eu); f_12215070();
  /* 12213f6e call 0x12214b20 */
  push32(0x12213f73u); f_12214b20();
  /* 12213f73 call 0x12217970 */
  push32(0x12213f78u); f_12217970();
  /* 12213f78 jmp 0x12213f7e */
  goto L_12213f7e;
L_12213f7a:;
  /* 12213f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12213f7c jmp 0x12213f95 */
  goto L_12213f95;
L_12213f7e:;
  /* 12213f7e jmp 0x12213f90 */
  goto L_12213f90;
L_12213f80:;
  /* 12213f80 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213f84 jne 0x12213f90 */
  if (!C.zf) goto L_12213f90;
  /* 12213f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12213f88 call 0x12214c10 */
  push32(0x12213f8du); f_12214c10();
  /* 12213f8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12213f90:;
  /* 12213f90 mov eax, 1 */
  EAX = (0x1u);
L_12213f95:;
  /* 12213f95 pop ebp */
  EBP = (pop32());
  /* 12213f96 ret 0xc */
  ESPCHK(0x12213e60u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12213fa0 (243 bytes, 86 insns) */
void f_12213fa0(void) {
  FTRACE(0x12213fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12213fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12213fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12213fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12213fa4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12213fab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213faf jne 0x12213fc1 */
  if (!C.zf) goto L_12213fc1;
  /* 12213fb1 cmp dword ptr [0x122405b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213fb8 jne 0x12213fc1 */
  if (!C.zf) goto L_12213fc1;
  /* 12213fba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12213fbc jmp 0x1221408d */
  goto L_1221408d;
L_12213fc1:;
  /* 12213fc1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213fc5 je 0x12213fcd */
  if (C.zf) goto L_12213fcd;
  /* 12213fc7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213fcb jne 0x1221400f */
  if (!C.zf) goto L_1221400f;
L_12213fcd:;
  /* 12213fcd cmp dword ptr [0x1224211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213fd4 je 0x12213feb */
  if (C.zf) goto L_12213feb;
  /* 12213fd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12213fd9 push eax */
  push32((uint32_t)(EAX));
  /* 12213fda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12213fdd push ecx */
  push32((uint32_t)(ECX));
  /* 12213fde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12213fe1 push edx */
  push32((uint32_t)(EDX));
  /* 12213fe2 call dword ptr [0x1224211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224211c))), 0x12213fe8u);
  /* 12213fe8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12213feb:;
  /* 12213feb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12213fef je 0x12214005 */
  if (C.zf) goto L_12214005;
  /* 12213ff1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12213ff4 push eax */
  push32((uint32_t)(EAX));
  /* 12213ff5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12213ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 12213ff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12213ffc push edx */
  push32((uint32_t)(EDX));
  /* 12213ffd call 0x12213e60 */
  push32(0x12214002u); f_12213e60();
  /* 12214002 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12214005:;
  /* 12214005 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214009 jne 0x1221400f */
  if (!C.zf) goto L_1221400f;
  /* 1221400b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221400d jmp 0x1221408d */
  goto L_1221408d;
L_1221400f:;
  /* 1221400f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12214012 push eax */
  push32((uint32_t)(EAX));
  /* 12214013 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12214016 push ecx */
  push32((uint32_t)(ECX));
  /* 12214017 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221401a push edx */
  push32((uint32_t)(EDX));
  /* 1221401b call 0x1221100a */
  push32(0x12214020u); f_1221100a();
  /* 12214020 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12214023 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214027 jne 0x1221403e */
  if (!C.zf) goto L_1221403e;
  /* 12214029 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221402d jne 0x1221403e */
  if (!C.zf) goto L_1221403e;
  /* 1221402f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12214032 push eax */
  push32((uint32_t)(EAX));
  /* 12214033 push 0 */
  push32((uint32_t)(0x0u));
  /* 12214035 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214038 push ecx */
  push32((uint32_t)(ECX));
  /* 12214039 call 0x12213e60 */
  push32(0x1221403eu); f_12213e60();
L_1221403e:;
  /* 1221403e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214042 je 0x1221404a */
  if (C.zf) goto L_1221404a;
  /* 12214044 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214048 jne 0x1221408a */
  if (!C.zf) goto L_1221408a;
L_1221404a:;
  /* 1221404a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221404d push edx */
  push32((uint32_t)(EDX));
  /* 1221404e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12214051 push eax */
  push32((uint32_t)(EAX));
  /* 12214052 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214055 push ecx */
  push32((uint32_t)(ECX));
  /* 12214056 call 0x12213e60 */
  push32(0x1221405bu); f_12213e60();
  /* 1221405b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221405d jne 0x12214066 */
  if (!C.zf) goto L_12214066;
  /* 1221405f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12214066:;
  /* 12214066 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221406a je 0x1221408a */
  if (C.zf) goto L_1221408a;
  /* 1221406c cmp dword ptr [0x1224211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214073 je 0x1221408a */
  if (C.zf) goto L_1221408a;
  /* 12214075 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12214078 push edx */
  push32((uint32_t)(EDX));
  /* 12214079 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221407c push eax */
  push32((uint32_t)(EAX));
  /* 1221407d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214080 push ecx */
  push32((uint32_t)(ECX));
  /* 12214081 call dword ptr [0x1224211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224211c))), 0x12214087u);
  /* 12214087 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221408a:;
  /* 1221408a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1221408d:;
  /* 1221408d mov esp, ebp */
  ESP = (EBP);
  /* 1221408f pop ebp */
  EBP = (pop32());
  /* 12214090 ret 0xc */
  ESPCHK(0x12213fa0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x122140a0 (58 bytes, 18 insns) */
void f_122140a0(void) {
  FTRACE(0x122140a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122140a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122140a1 mov ebp, esp */
  EBP = (ESP);
  /* 122140a3 cmp dword ptr [0x122405c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122405c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122140aa je 0x122140be */
  if (C.zf) goto L_122140be;
  /* 122140ac cmp dword ptr [0x122405c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122140b3 jne 0x122140c3 */
  if (!C.zf) goto L_122140c3;
  /* 122140b5 cmp dword ptr [0x122405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122140bc jne 0x122140c3 */
  if (!C.zf) goto L_122140c3;
L_122140be:;
  /* 122140be call 0x12217a10 */
  push32(0x122140c3u); f_12217a10();
L_122140c3:;
  /* 122140c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122140c6 push eax */
  push32((uint32_t)(EAX));
  /* 122140c7 call 0x12217a60 */
  push32(0x122140ccu); f_12217a60();
  /* 122140cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122140cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 122140d4 call dword ptr [0x1223ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1223ea30))), 0x122140dau);
  /* 122140da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122140dd pop ebp */
  EBP = (pop32());
  /* 122140de ret  */
  ESPCHK(0x122140a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x122140e0 (11 bytes, 5 insns) */
void f_122140e0(void) {
  FTRACE(0x122140e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122140e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122140e1 mov ebp, esp */
  EBP = (ESP);
  /* 122140e3 call dword ptr [0x1224336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224336c))), 0x122140e9u);
  /* 122140e9 pop ebp */
  EBP = (pop32());
  /* 122140ea ret  */
  ESPCHK(0x122140e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040f0 @ 0x122140f0 (87 bytes, 30 insns) */
void f_122140f0(void) {
  FTRACE(0x122140f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122140f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122140f1 mov ebp, esp */
  EBP = (ESP);
  /* 122140f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122140f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122140f8 jl 0x12214100 */
  if ((C.sf!=C.of)) goto L_12214100;
  /* 122140fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122140fe jl 0x12214105 */
  if ((C.sf!=C.of)) goto L_12214105;
L_12214100:;
  /* 12214100 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12214103 jmp 0x12214143 */
  goto L_12214143;
L_12214105:;
  /* 12214105 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214109 jne 0x12214117 */
  if (!C.zf) goto L_12214117;
  /* 1221410b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221410e mov eax, dword ptr [eax*4 + 0x1223ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1223ea38)));
  /* 12214115 jmp 0x12214143 */
  goto L_12214143;
L_12214117:;
  /* 12214117 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221411a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1221411d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221411f je 0x12214126 */
  if (C.zf) goto L_12214126;
  /* 12214121 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12214124 jmp 0x12214143 */
  goto L_12214143;
L_12214126:;
  /* 12214126 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214129 mov eax, dword ptr [edx*4 + 0x1223ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1223ea38)));
  /* 12214130 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12214133 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214136 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12214139 mov dword ptr [ecx*4 + 0x1223ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1223ea38), (EDX));
  /* 12214140 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12214143:;
  /* 12214143 mov esp, ebp */
  ESP = (EBP);
  /* 12214145 pop ebp */
  EBP = (pop32());
  /* 12214146 ret  */
  ESPCHK(0x122140f0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12214150 (126 bytes, 38 insns) */
void f_12214150(void) {
  FTRACE(0x12214150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214150 push ebp */
  push32((uint32_t)(EBP));
  /* 12214151 mov ebp, esp */
  EBP = (ESP);
  /* 12214153 push ecx */
  push32((uint32_t)(ECX));
  /* 12214154 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214158 jl 0x12214160 */
  if ((C.sf!=C.of)) goto L_12214160;
  /* 1221415a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221415e jl 0x12214167 */
  if ((C.sf!=C.of)) goto L_12214167;
L_12214160:;
  /* 12214160 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12214165 jmp 0x122141ca */
  goto L_122141ca;
L_12214167:;
  /* 12214167 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221416b jne 0x12214179 */
  if (!C.zf) goto L_12214179;
  /* 1221416d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214170 mov eax, dword ptr [eax*4 + 0x1223ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1223ea44)));
  /* 12214177 jmp 0x122141ca */
  goto L_122141ca;
L_12214179:;
  /* 12214179 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221417c mov edx, dword ptr [ecx*4 + 0x1223ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223ea44)));
  /* 12214183 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12214186 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221418a jne 0x122141a0 */
  if (!C.zf) goto L_122141a0;
  /* 1221418c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1221418e call dword ptr [0x12243370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243370))), 0x12214194u);
  /* 12214194 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214197 mov dword ptr [ecx*4 + 0x1223ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1223ea44), (EAX));
  /* 1221419e jmp 0x122141c7 */
  goto L_122141c7;
L_122141a0:;
  /* 122141a0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122141a4 jne 0x122141ba */
  if (!C.zf) goto L_122141ba;
  /* 122141a6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 122141a8 call dword ptr [0x12243370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243370))), 0x122141aeu);
  /* 122141ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122141b1 mov dword ptr [edx*4 + 0x1223ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1223ea44), (EAX));
  /* 122141b8 jmp 0x122141c7 */
  goto L_122141c7;
L_122141ba:;
  /* 122141ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122141bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122141c0 mov dword ptr [eax*4 + 0x1223ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1223ea44), (ECX));
L_122141c7:;
  /* 122141c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122141ca:;
  /* 122141ca mov esp, ebp */
  ESP = (EBP);
  /* 122141cc pop ebp */
  EBP = (pop32());
  /* 122141cd ret  */
  ESPCHK(0x12214150u, _esp0);
  ESP += 4; return;
}

/* FUN_100041d0 @ 0x122141d0 (28 bytes, 11 insns) */
void f_122141d0(void) {
  FTRACE(0x122141d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122141d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122141d1 mov ebp, esp */
  EBP = (ESP);
  /* 122141d3 push ecx */
  push32((uint32_t)(ECX));
  /* 122141d4 mov eax, dword ptr [0x12242100] */
  EAX = (r32((uint32_t)(0x12242100)));
  /* 122141d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122141dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122141df mov dword ptr [0x12242100], ecx */
  w32((uint32_t)(0x12242100), (ECX));
  /* 122141e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122141e8 mov esp, ebp */
  ESP = (EBP);
  /* 122141ea pop ebp */
  EBP = (pop32());
  /* 122141eb ret  */
  ESPCHK(0x122141d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f0 @ 0x122141f0 (912 bytes, 248 insns) */
void f_122141f0(void) {
  FTRACE(0x122141f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122141f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122141f1 mov ebp, esp */
  EBP = (ESP);
  /* 122141f3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 122141f8 call 0x122182d0 */
  push32(0x122141fdu); f_122182d0();
  /* 122141fd push edi */
  push32((uint32_t)(EDI));
  /* 122141fe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12214205 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1221420a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221420c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12214212 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12214214 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12214216 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12214217 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1221421e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12214223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12214225 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1221422b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1221422d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1221422f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12214230 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12214237 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1221423c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221423e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12214244 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12214246 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12214248 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12214249 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1221424c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12214252 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214256 jl 0x1221425e */
  if ((C.sf!=C.of)) goto L_1221425e;
  /* 12214258 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221425c jl 0x12214266 */
  if ((C.sf!=C.of)) goto L_12214266;
L_1221425e:;
  /* 1221425e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12214261 jmp 0x1221457b */
  goto L_1221457b;
L_12214266:;
  /* 12214266 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221426a jne 0x12214310 */
  if (!C.zf) goto L_12214310;
  /* 12214270 push 0x1223ea34 */
  push32((uint32_t)(0x1223ea34u));
  /* 12214275 call dword ptr [0x12243388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243388))), 0x1221427bu);
  /* 1221427b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221427d jle 0x12214310 */
  if ((C.zf||C.sf!=C.of)) goto L_12214310;
  /* 12214283 cmp dword ptr [0x122405c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221428a jne 0x122142ce */
  if (!C.zf) goto L_122142ce;
  /* 1221428c push 0x1223b4e4 */
  push32((uint32_t)(0x1223b4e4u));
  /* 12214291 call dword ptr [0x12243384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243384))), 0x12214297u);
  /* 12214297 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1221429d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122142a4 je 0x122142c6 */
  if (C.zf) goto L_122142c6;
  /* 122142a6 push 0x1223b4d8 */
  push32((uint32_t)(0x1223b4d8u));
  /* 122142ab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 122142b1 push ecx */
  push32((uint32_t)(ECX));
  /* 122142b2 call dword ptr [0x12243380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243380))), 0x122142b8u);
  /* 122142b8 mov dword ptr [0x122405c8], eax */
  w32((uint32_t)(0x122405c8), (EAX));
  /* 122142bd cmp dword ptr [0x122405c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122142c4 jne 0x122142ce */
  if (!C.zf) goto L_122142ce;
L_122142c6:;
  /* 122142c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122142c9 jmp 0x1221457b */
  goto L_1221457b;
L_122142ce:;
  /* 122142ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122142d1 push edx */
  push32((uint32_t)(EDX));
  /* 122142d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122142d5 push eax */
  push32((uint32_t)(EAX));
  /* 122142d6 push 0x1223b4a4 */
  push32((uint32_t)(0x1223b4a4u));
  /* 122142db lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 122142e1 push ecx */
  push32((uint32_t)(ECX));
  /* 122142e2 call dword ptr [0x122405c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122405c8))), 0x122142e8u);
  /* 122142e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122142eb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 122142f1 push edx */
  push32((uint32_t)(EDX));
  /* 122142f2 call dword ptr [0x1224337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224337c))), 0x122142f8u);
  /* 122142f8 push 0x1223ea34 */
  push32((uint32_t)(0x1223ea34u));
  /* 122142fd call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x12214303u);
  /* 12214303 call 0x122140e0 */
  push32(0x12214308u); f_122140e0();
  /* 12214308 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221430b jmp 0x1221457b */
  goto L_1221457b;
L_12214310:;
  /* 12214310 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214314 je 0x1221434d */
  if (C.zf) goto L_1221434d;
  /* 12214316 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1221431c push eax */
  push32((uint32_t)(EAX));
  /* 1221431d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12214320 push ecx */
  push32((uint32_t)(ECX));
  /* 12214321 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12214326 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1221432c push edx */
  push32((uint32_t)(EDX));
  /* 1221432d call 0x122181d0 */
  push32(0x12214332u); f_122181d0();
  /* 12214332 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12214337 jge 0x1221434d */
  if ((C.sf==C.of)) goto L_1221434d;
  /* 12214339 push 0x1223b478 */
  push32((uint32_t)(0x1223b478u));
  /* 1221433e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12214344 push eax */
  push32((uint32_t)(EAX));
  /* 12214345 call 0x122180e0 */
  push32(0x1221434au); f_122180e0();
  /* 1221434a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221434d:;
  /* 1221434d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214351 jne 0x12214385 */
  if (!C.zf) goto L_12214385;
  /* 12214353 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214357 je 0x12214365 */
  if (C.zf) goto L_12214365;
  /* 12214359 mov dword ptr [ebp - 0x3028], 0x1223b464 */
  w32((uint32_t)(EBP + -0x3028), (0x1223b464u));
  /* 12214363 jmp 0x1221436f */
  goto L_1221436f;
L_12214365:;
  /* 12214365 mov dword ptr [ebp - 0x3028], 0x1223b450 */
  w32((uint32_t)(EBP + -0x3028), (0x1223b450u));
L_1221436f:;
  /* 1221436f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12214375 push ecx */
  push32((uint32_t)(ECX));
  /* 12214376 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1221437c push edx */
  push32((uint32_t)(EDX));
  /* 1221437d call 0x122180e0 */
  push32(0x12214382u); f_122180e0();
  /* 12214382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214385:;
  /* 12214385 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1221438b push eax */
  push32((uint32_t)(EAX));
  /* 1221438c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12214392 push ecx */
  push32((uint32_t)(ECX));
  /* 12214393 call 0x122180f0 */
  push32(0x12214398u); f_122180f0();
  /* 12214398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221439b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221439f jne 0x122143da */
  if (!C.zf) goto L_122143da;
  /* 122143a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122143a4 mov eax, dword ptr [edx*4 + 0x1223ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1223ea38)));
  /* 122143ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 122143ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122143b0 je 0x122143c6 */
  if (C.zf) goto L_122143c6;
  /* 122143b2 push 0x1223b44c */
  push32((uint32_t)(0x1223b44cu));
  /* 122143b7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 122143bd push ecx */
  push32((uint32_t)(ECX));
  /* 122143be call 0x122180f0 */
  push32(0x122143c3u); f_122180f0();
  /* 122143c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122143c6:;
  /* 122143c6 push 0x1223b448 */
  push32((uint32_t)(0x1223b448u));
  /* 122143cb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 122143d1 push edx */
  push32((uint32_t)(EDX));
  /* 122143d2 call 0x122180f0 */
  push32(0x122143d7u); f_122180f0();
  /* 122143d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122143da:;
  /* 122143da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122143de je 0x12214422 */
  if (C.zf) goto L_12214422;
  /* 122143e0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 122143e6 push eax */
  push32((uint32_t)(EAX));
  /* 122143e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122143ea push ecx */
  push32((uint32_t)(ECX));
  /* 122143eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122143ee push edx */
  push32((uint32_t)(EDX));
  /* 122143ef push 0x1223b43c */
  push32((uint32_t)(0x1223b43cu));
  /* 122143f4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 122143f9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 122143ff push eax */
  push32((uint32_t)(EAX));
  /* 12214400 call 0x12217fe0 */
  push32(0x12214405u); f_12217fe0();
  /* 12214405 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221440a jge 0x12214420 */
  if ((C.sf==C.of)) goto L_12214420;
  /* 1221440c push 0x1223b478 */
  push32((uint32_t)(0x1223b478u));
  /* 12214411 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12214417 push ecx */
  push32((uint32_t)(ECX));
  /* 12214418 call 0x122180e0 */
  push32(0x1221441du); f_122180e0();
  /* 1221441d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214420:;
  /* 12214420 jmp 0x12214438 */
  goto L_12214438;
L_12214422:;
  /* 12214422 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12214428 push edx */
  push32((uint32_t)(EDX));
  /* 12214429 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1221442f push eax */
  push32((uint32_t)(EAX));
  /* 12214430 call 0x122180e0 */
  push32(0x12214435u); f_122180e0();
  /* 12214435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214438:;
  /* 12214438 cmp dword ptr [0x12242100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12242100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221443f je 0x1221447c */
  if (C.zf) goto L_1221447c;
  /* 12214441 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12214447 push ecx */
  push32((uint32_t)(ECX));
  /* 12214448 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1221444e push edx */
  push32((uint32_t)(EDX));
  /* 1221444f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214452 push eax */
  push32((uint32_t)(EAX));
  /* 12214453 call dword ptr [0x12242100] */
  call_ind((uint32_t)(r32((uint32_t)(0x12242100))), 0x12214459u);
  /* 12214459 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221445c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221445e je 0x1221447c */
  if (C.zf) goto L_1221447c;
  /* 12214460 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214464 jne 0x12214471 */
  if (!C.zf) goto L_12214471;
  /* 12214466 push 0x1223ea34 */
  push32((uint32_t)(0x1223ea34u));
  /* 1221446b call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x12214471u);
L_12214471:;
  /* 12214471 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12214477 jmp 0x1221457b */
  goto L_1221457b;
L_1221447c:;
  /* 1221447c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221447f mov edx, dword ptr [ecx*4 + 0x1223ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223ea38)));
  /* 12214486 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12214489 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221448b je 0x122144cb */
  if (C.zf) goto L_122144cb;
  /* 1221448d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214490 cmp dword ptr [eax*4 + 0x1223ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1223ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214498 je 0x122144cb */
  if (C.zf) goto L_122144cb;
  /* 1221449a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221449c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 122144a2 push ecx */
  push32((uint32_t)(ECX));
  /* 122144a3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 122144a9 push edx */
  push32((uint32_t)(EDX));
  /* 122144aa call 0x12217f60 */
  push32(0x122144afu); f_12217f60();
  /* 122144af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122144b2 push eax */
  push32((uint32_t)(EAX));
  /* 122144b3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 122144b9 push eax */
  push32((uint32_t)(EAX));
  /* 122144ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122144bd mov edx, dword ptr [ecx*4 + 0x1223ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223ea44)));
  /* 122144c4 push edx */
  push32((uint32_t)(EDX));
  /* 122144c5 call dword ptr [0x12243374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243374))), 0x122144cbu);
L_122144cb:;
  /* 122144cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122144ce mov ecx, dword ptr [eax*4 + 0x1223ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1223ea38)));
  /* 122144d5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 122144d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122144da je 0x122144e9 */
  if (C.zf) goto L_122144e9;
  /* 122144dc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 122144e2 push edx */
  push32((uint32_t)(EDX));
  /* 122144e3 call dword ptr [0x1224337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224337c))), 0x122144e9u);
L_122144e9:;
  /* 122144e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122144ec mov ecx, dword ptr [eax*4 + 0x1223ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1223ea38)));
  /* 122144f3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122144f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122144f8 je 0x12214568 */
  if (C.zf) goto L_12214568;
  /* 122144fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122144fe je 0x1221451d */
  if (C.zf) goto L_1221451d;
  /* 12214500 push 0xa */
  push32((uint32_t)(0xau));
  /* 12214502 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12214508 push edx */
  push32((uint32_t)(EDX));
  /* 12214509 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221450c push eax */
  push32((uint32_t)(EAX));
  /* 1221450d call 0x12217c70 */
  push32(0x12214512u); f_12217c70();
  /* 12214512 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214515 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1221451b jmp 0x12214527 */
  goto L_12214527;
L_1221451d:;
  /* 1221451d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12214527:;
  /* 12214527 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1221452d push ecx */
  push32((uint32_t)(ECX));
  /* 1221452e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12214531 push edx */
  push32((uint32_t)(EDX));
  /* 12214532 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12214538 push eax */
  push32((uint32_t)(EAX));
  /* 12214539 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221453c push ecx */
  push32((uint32_t)(ECX));
  /* 1221453d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214540 push edx */
  push32((uint32_t)(EDX));
  /* 12214541 call 0x12214580 */
  push32(0x12214546u); f_12214580();
  /* 12214546 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214549 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1221454f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214553 jne 0x12214560 */
  if (!C.zf) goto L_12214560;
  /* 12214555 push 0x1223ea34 */
  push32((uint32_t)(0x1223ea34u));
  /* 1221455a call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x12214560u);
L_12214560:;
  /* 12214560 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12214566 jmp 0x1221457b */
  goto L_1221457b;
L_12214568:;
  /* 12214568 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221456c jne 0x12214579 */
  if (!C.zf) goto L_12214579;
  /* 1221456e push 0x1223ea34 */
  push32((uint32_t)(0x1223ea34u));
  /* 12214573 call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x12214579u);
L_12214579:;
  /* 12214579 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221457b:;
  /* 1221457b pop edi */
  EDI = (pop32());
  /* 1221457c mov esp, ebp */
  ESP = (EBP);
  /* 1221457e pop ebp */
  EBP = (pop32());
  /* 1221457f ret  */
  ESPCHK(0x122141f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004580 @ 0x12214580 (780 bytes, 197 insns) */
void f_12214580(void) {
  FTRACE(0x12214580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214580 push ebp */
  push32((uint32_t)(EBP));
  /* 12214581 mov ebp, esp */
  EBP = (ESP);
  /* 12214583 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12214588 call 0x122182d0 */
  push32(0x1221458du); f_122182d0();
L_1221458d:;
  /* 1221458d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214591 jne 0x122145b8 */
  if (!C.zf) goto L_122145b8;
  /* 12214593 push 0x1223b634 */
  push32((uint32_t)(0x1223b634u));
  /* 12214598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221459a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1221459f push 0x1223b628 */
  push32((uint32_t)(0x1223b628u));
  /* 122145a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122145a6 call 0x122141f0 */
  push32(0x122145abu); f_122141f0();
  /* 122145ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122145ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122145b1 jne 0x122145b8 */
  if (!C.zf) goto L_122145b8;
  /* 122145b3 call 0x122140e0 */
  push32(0x122145b8u); f_122140e0();
L_122145b8:;
  /* 122145b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122145ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122145bc jne 0x1221458d */
  if (!C.zf) goto L_1221458d;
  /* 122145be push 0x104 */
  push32((uint32_t)(0x104u));
  /* 122145c3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 122145c9 push ecx */
  push32((uint32_t)(ECX));
  /* 122145ca push 0 */
  push32((uint32_t)(0x0u));
  /* 122145cc call dword ptr [0x1224338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224338c))), 0x122145d2u);
  /* 122145d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122145d4 jne 0x122145ea */
  if (!C.zf) goto L_122145ea;
  /* 122145d6 push 0x1223b610 */
  push32((uint32_t)(0x1223b610u));
  /* 122145db lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 122145e1 push edx */
  push32((uint32_t)(EDX));
  /* 122145e2 call 0x122180e0 */
  push32(0x122145e7u); f_122180e0();
  /* 122145e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122145ea:;
  /* 122145ea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 122145f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122145f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122145f6 push ecx */
  push32((uint32_t)(ECX));
  /* 122145f7 call 0x12217f60 */
  push32(0x122145fcu); f_12217f60();
  /* 122145fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122145ff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214602 jbe 0x1221462d */
  if ((C.cf||C.zf)) goto L_1221462d;
  /* 12214604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214607 push edx */
  push32((uint32_t)(EDX));
  /* 12214608 call 0x12217f60 */
  push32(0x1221460du); f_12217f60();
  /* 1221460d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214610 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214613 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12214617 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221461a push 3 */
  push32((uint32_t)(0x3u));
  /* 1221461c push 0x1223b60c */
  push32((uint32_t)(0x1223b60cu));
  /* 12214621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214624 push eax */
  push32((uint32_t)(EAX));
  /* 12214625 call 0x12218950 */
  push32(0x1221462au); f_12218950();
  /* 1221462a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221462d:;
  /* 1221462d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12214630 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12214636 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221463d je 0x12214688 */
  if (C.zf) goto L_12214688;
  /* 1221463f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12214645 push edx */
  push32((uint32_t)(EDX));
  /* 12214646 call 0x12217f60 */
  push32(0x1221464bu); f_12217f60();
  /* 1221464b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221464e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214651 jbe 0x12214688 */
  if ((C.cf||C.zf)) goto L_12214688;
  /* 12214653 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12214659 push eax */
  push32((uint32_t)(EAX));
  /* 1221465a call 0x12217f60 */
  push32(0x1221465fu); f_12217f60();
  /* 1221465f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214662 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12214668 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1221466c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12214672 push 3 */
  push32((uint32_t)(0x3u));
  /* 12214674 push 0x1223b60c */
  push32((uint32_t)(0x1223b60cu));
  /* 12214679 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1221467f push eax */
  push32((uint32_t)(EAX));
  /* 12214680 call 0x12218950 */
  push32(0x12214685u); f_12218950();
  /* 12214685 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214688:;
  /* 12214688 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221468c jne 0x1221469a */
  if (!C.zf) goto L_1221469a;
  /* 1221468e mov dword ptr [ebp - 0x1114], 0x1223b598 */
  w32((uint32_t)(EBP + -0x1114), (0x1223b598u));
  /* 12214698 jmp 0x122146a4 */
  goto L_122146a4;
L_1221469a:;
  /* 1221469a mov dword ptr [ebp - 0x1114], 0x1223b338 */
  w32((uint32_t)(EBP + -0x1114), (0x1223b338u));
L_122146a4:;
  /* 122146a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122146a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122146aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122146ac je 0x122146b9 */
  if (C.zf) goto L_122146b9;
  /* 122146ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122146b1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 122146b7 jmp 0x122146c3 */
  goto L_122146c3;
L_122146b9:;
  /* 122146b9 mov dword ptr [ebp - 0x1118], 0x1223b338 */
  w32((uint32_t)(EBP + -0x1118), (0x1223b338u));
L_122146c3:;
  /* 122146c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122146c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122146c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122146cb je 0x122146df */
  if (C.zf) goto L_122146df;
  /* 122146cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122146d1 jne 0x122146df */
  if (!C.zf) goto L_122146df;
  /* 122146d3 mov dword ptr [ebp - 0x111c], 0x1223b588 */
  w32((uint32_t)(EBP + -0x111c), (0x1223b588u));
  /* 122146dd jmp 0x122146e9 */
  goto L_122146e9;
L_122146df:;
  /* 122146df mov dword ptr [ebp - 0x111c], 0x1223b338 */
  w32((uint32_t)(EBP + -0x111c), (0x1223b338u));
L_122146e9:;
  /* 122146e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122146ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122146ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122146f1 je 0x122146ff */
  if (C.zf) goto L_122146ff;
  /* 122146f3 mov dword ptr [ebp - 0x1120], 0x1223b584 */
  w32((uint32_t)(EBP + -0x1120), (0x1223b584u));
  /* 122146fd jmp 0x12214709 */
  goto L_12214709;
L_122146ff:;
  /* 122146ff mov dword ptr [ebp - 0x1120], 0x1223b338 */
  w32((uint32_t)(EBP + -0x1120), (0x1223b338u));
L_12214709:;
  /* 12214709 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221470d je 0x1221471a */
  if (C.zf) goto L_1221471a;
  /* 1221470f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12214712 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12214718 jmp 0x12214724 */
  goto L_12214724;
L_1221471a:;
  /* 1221471a mov dword ptr [ebp - 0x1124], 0x1223b338 */
  w32((uint32_t)(EBP + -0x1124), (0x1223b338u));
L_12214724:;
  /* 12214724 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214728 je 0x12214736 */
  if (C.zf) goto L_12214736;
  /* 1221472a mov dword ptr [ebp - 0x1128], 0x1223b57c */
  w32((uint32_t)(EBP + -0x1128), (0x1223b57cu));
  /* 12214734 jmp 0x12214740 */
  goto L_12214740;
L_12214736:;
  /* 12214736 mov dword ptr [ebp - 0x1128], 0x1223b338 */
  w32((uint32_t)(EBP + -0x1128), (0x1223b338u));
L_12214740:;
  /* 12214740 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214744 je 0x12214751 */
  if (C.zf) goto L_12214751;
  /* 12214746 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12214749 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1221474f jmp 0x1221475b */
  goto L_1221475b;
L_12214751:;
  /* 12214751 mov dword ptr [ebp - 0x112c], 0x1223b338 */
  w32((uint32_t)(EBP + -0x112c), (0x1223b338u));
L_1221475b:;
  /* 1221475b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221475f je 0x1221476d */
  if (C.zf) goto L_1221476d;
  /* 12214761 mov dword ptr [ebp - 0x1130], 0x1223b574 */
  w32((uint32_t)(EBP + -0x1130), (0x1223b574u));
  /* 1221476b jmp 0x12214777 */
  goto L_12214777;
L_1221476d:;
  /* 1221476d mov dword ptr [ebp - 0x1130], 0x1223b338 */
  w32((uint32_t)(EBP + -0x1130), (0x1223b338u));
L_12214777:;
  /* 12214777 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221477e je 0x1221478e */
  if (C.zf) goto L_1221478e;
  /* 12214780 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12214786 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1221478c jmp 0x12214798 */
  goto L_12214798;
L_1221478e:;
  /* 1221478e mov dword ptr [ebp - 0x1134], 0x1223b338 */
  w32((uint32_t)(EBP + -0x1134), (0x1223b338u));
L_12214798:;
  /* 12214798 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221479f je 0x122147ad */
  if (C.zf) goto L_122147ad;
  /* 122147a1 mov dword ptr [ebp - 0x1138], 0x1223b568 */
  w32((uint32_t)(EBP + -0x1138), (0x1223b568u));
  /* 122147ab jmp 0x122147b7 */
  goto L_122147b7;
L_122147ad:;
  /* 122147ad mov dword ptr [ebp - 0x1138], 0x1223b338 */
  w32((uint32_t)(EBP + -0x1138), (0x1223b338u));
L_122147b7:;
  /* 122147b7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 122147bd push edx */
  push32((uint32_t)(EDX));
  /* 122147be mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 122147c4 push eax */
  push32((uint32_t)(EAX));
  /* 122147c5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 122147cb push ecx */
  push32((uint32_t)(ECX));
  /* 122147cc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 122147d2 push edx */
  push32((uint32_t)(EDX));
  /* 122147d3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 122147d9 push eax */
  push32((uint32_t)(EAX));
  /* 122147da mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 122147e0 push ecx */
  push32((uint32_t)(ECX));
  /* 122147e1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 122147e7 push edx */
  push32((uint32_t)(EDX));
  /* 122147e8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 122147ee push eax */
  push32((uint32_t)(EAX));
  /* 122147ef mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 122147f5 push ecx */
  push32((uint32_t)(ECX));
  /* 122147f6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 122147fc push edx */
  push32((uint32_t)(EDX));
  /* 122147fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214800 push eax */
  push32((uint32_t)(EAX));
  /* 12214801 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214804 mov edx, dword ptr [ecx*4 + 0x1223ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223ea50)));
  /* 1221480b push edx */
  push32((uint32_t)(EDX));
  /* 1221480c push 0x1223b514 */
  push32((uint32_t)(0x1223b514u));
  /* 12214811 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12214816 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1221481c push eax */
  push32((uint32_t)(EAX));
  /* 1221481d call 0x12217fe0 */
  push32(0x12214822u); f_12217fe0();
  /* 12214822 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214825 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12214827 jge 0x1221483d */
  if ((C.sf==C.of)) goto L_1221483d;
  /* 12214829 push 0x1223b478 */
  push32((uint32_t)(0x1223b478u));
  /* 1221482e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12214834 push ecx */
  push32((uint32_t)(ECX));
  /* 12214835 call 0x122180e0 */
  push32(0x1221483au); f_122180e0();
  /* 1221483a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221483d:;
  /* 1221483d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12214842 push 0x1223b4f0 */
  push32((uint32_t)(0x1223b4f0u));
  /* 12214847 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1221484d push edx */
  push32((uint32_t)(EDX));
  /* 1221484e call 0x12218890 */
  push32(0x12214853u); f_12218890();
  /* 12214853 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214856 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1221485c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214863 jne 0x12214876 */
  if (!C.zf) goto L_12214876;
  /* 12214865 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12214867 call 0x122185d0 */
  push32(0x1221486cu); f_122185d0();
  /* 1221486c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221486f push 3 */
  push32((uint32_t)(0x3u));
  /* 12214871 call 0x122148f0 */
  push32(0x12214876u); f_122148f0();
L_12214876:;
  /* 12214876 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221487d jne 0x12214886 */
  if (!C.zf) goto L_12214886;
  /* 1221487f mov eax, 1 */
  EAX = (0x1u);
  /* 12214884 jmp 0x12214888 */
  goto L_12214888;
L_12214886:;
  /* 12214886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12214888:;
  /* 12214888 mov esp, ebp */
  ESP = (EBP);
  /* 1221488a pop ebp */
  EBP = (pop32());
  /* 1221488b ret  */
  ESPCHK(0x12214580u, _esp0);
  ESP += 4; return;
}

/* FUN_10004890 @ 0x12214890 (56 bytes, 15 insns) */
void f_12214890(void) {
  FTRACE(0x12214890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214890 push ebp */
  push32((uint32_t)(EBP));
  /* 12214891 mov ebp, esp */
  EBP = (ESP);
  /* 12214893 cmp dword ptr [0x122420fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122420fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221489a je 0x122148a2 */
  if (C.zf) goto L_122148a2;
  /* 1221489c call dword ptr [0x122420fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122420fc))), 0x122148a2u);
L_122148a2:;
  /* 122148a2 push 0x1223e418 */
  push32((uint32_t)(0x1223e418u));
  /* 122148a7 push 0x1223e208 */
  push32((uint32_t)(0x1223e208u));
  /* 122148ac call 0x12214a60 */
  push32(0x122148b1u); f_12214a60();
  /* 122148b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122148b4 push 0x1223e104 */
  push32((uint32_t)(0x1223e104u));
  /* 122148b9 push 0x1223e000 */
  push32((uint32_t)(0x1223e000u));
  /* 122148be call 0x12214a60 */
  push32(0x122148c3u); f_12214a60();
  /* 122148c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122148c6 pop ebp */
  EBP = (pop32());
  /* 122148c7 ret  */
  ESPCHK(0x12214890u, _esp0);
  ESP += 4; return;
}

/* FUN_100048d0 @ 0x122148d0 (21 bytes, 10 insns) */
void f_122148d0(void) {
  FTRACE(0x122148d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122148d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122148d1 mov ebp, esp */
  EBP = (ESP);
  /* 122148d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122148d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122148d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122148da push eax */
  push32((uint32_t)(EAX));
  /* 122148db call 0x12214950 */
  push32(0x122148e0u); f_12214950();
  /* 122148e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122148e3 pop ebp */
  EBP = (pop32());
  /* 122148e4 ret  */
  ESPCHK(0x122148d0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x122148f0 (21 bytes, 10 insns) */
void f_122148f0(void) {
  FTRACE(0x122148f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122148f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122148f1 mov ebp, esp */
  EBP = (ESP);
  /* 122148f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122148f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 122148f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122148fa push eax */
  push32((uint32_t)(EAX));
  /* 122148fb call 0x12214950 */
  push32(0x12214900u); f_12214950();
  /* 12214900 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214903 pop ebp */
  EBP = (pop32());
  /* 12214904 ret  */
  ESPCHK(0x122148f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004910 @ 0x12214910 (19 bytes, 9 insns) */
void f_12214910(void) {
  FTRACE(0x12214910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214910 push ebp */
  push32((uint32_t)(EBP));
  /* 12214911 mov ebp, esp */
  EBP = (ESP);
  /* 12214913 push 1 */
  push32((uint32_t)(0x1u));
  /* 12214915 push 0 */
  push32((uint32_t)(0x0u));
  /* 12214917 push 0 */
  push32((uint32_t)(0x0u));
  /* 12214919 call 0x12214950 */
  push32(0x1221491eu); f_12214950();
  /* 1221491e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214921 pop ebp */
  EBP = (pop32());
  /* 12214922 ret  */
  ESPCHK(0x12214910u, _esp0);
  ESP += 4; return;
}

/* FUN_10004930 @ 0x12214930 (19 bytes, 9 insns) */
void f_12214930(void) {
  FTRACE(0x12214930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214930 push ebp */
  push32((uint32_t)(EBP));
  /* 12214931 mov ebp, esp */
  EBP = (ESP);
  /* 12214933 push 1 */
  push32((uint32_t)(0x1u));
  /* 12214935 push 1 */
  push32((uint32_t)(0x1u));
  /* 12214937 push 0 */
  push32((uint32_t)(0x0u));
  /* 12214939 call 0x12214950 */
  push32(0x1221493eu); f_12214950();
  /* 1221493e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214941 pop ebp */
  EBP = (pop32());
  /* 12214942 ret  */
  ESPCHK(0x12214930u, _esp0);
  ESP += 4; return;
}

/* FUN_10004950 @ 0x12214950 (227 bytes, 61 insns) */
void f_12214950(void) {
  FTRACE(0x12214950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214950 push ebp */
  push32((uint32_t)(EBP));
  /* 12214951 mov ebp, esp */
  EBP = (ESP);
  /* 12214953 push ecx */
  push32((uint32_t)(ECX));
  /* 12214954 call 0x12214a40 */
  push32(0x12214959u); f_12214a40();
  /* 12214959 cmp dword ptr [0x1224060c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1224060c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214960 jne 0x12214973 */
  if (!C.zf) goto L_12214973;
  /* 12214962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214965 push eax */
  push32((uint32_t)(EAX));
  /* 12214966 call dword ptr [0x12243398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243398))), 0x1221496cu);
  /* 1221496c push eax */
  push32((uint32_t)(EAX));
  /* 1221496d call dword ptr [0x12243394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243394))), 0x12214973u);
L_12214973:;
  /* 12214973 mov dword ptr [0x12240608], 1 */
  w32((uint32_t)(0x12240608), (0x1u));
  /* 1221497d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12214980 mov byte ptr [0x12240604], cl */
  w8((uint32_t)(0x12240604), (CL));
  /* 12214986 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221498a jne 0x122149d3 */
  if (!C.zf) goto L_122149d3;
  /* 1221498c cmp dword ptr [0x122420f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122420f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214993 je 0x122149c1 */
  if (C.zf) goto L_122149c1;
  /* 12214995 mov edx, dword ptr [0x122420f4] */
  EDX = (r32((uint32_t)(0x122420f4)));
  /* 1221499b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221499e:;
  /* 1221499e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122149a1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122149a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122149a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122149aa cmp ecx, dword ptr [0x122420f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122420f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122149b0 jb 0x122149c1 */
  if (C.cf) goto L_122149c1;
  /* 122149b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122149b5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122149b8 je 0x122149bf */
  if (C.zf) goto L_122149bf;
  /* 122149ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122149bd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x122149bfu);
L_122149bf:;
  /* 122149bf jmp 0x1221499e */
  goto L_1221499e;
L_122149c1:;
  /* 122149c1 push 0x1223e724 */
  push32((uint32_t)(0x1223e724u));
  /* 122149c6 push 0x1223e51c */
  push32((uint32_t)(0x1223e51cu));
  /* 122149cb call 0x12214a60 */
  push32(0x122149d0u); f_12214a60();
  /* 122149d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122149d3:;
  /* 122149d3 push 0x1223e92c */
  push32((uint32_t)(0x1223e92cu));
  /* 122149d8 push 0x1223e828 */
  push32((uint32_t)(0x1223e828u));
  /* 122149dd call 0x12214a60 */
  push32(0x122149e2u); f_12214a60();
  /* 122149e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122149e5 cmp dword ptr [0x12240610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122149ec jne 0x12214a0e */
  if (!C.zf) goto L_12214a0e;
  /* 122149ee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122149f0 call 0x12216640 */
  push32(0x122149f5u); f_12216640();
  /* 122149f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122149f8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 122149fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122149fd je 0x12214a0e */
  if (C.zf) goto L_12214a0e;
  /* 122149ff mov dword ptr [0x12240610], 1 */
  w32((uint32_t)(0x12240610), (0x1u));
  /* 12214a09 call 0x12216f50 */
  push32(0x12214a0eu); f_12216f50();
L_12214a0e:;
  /* 12214a0e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214a12 je 0x12214a1b */
  if (C.zf) goto L_12214a1b;
  /* 12214a14 call 0x12214a50 */
  push32(0x12214a19u); f_12214a50();
  /* 12214a19 jmp 0x12214a2f */
  goto L_12214a2f;
L_12214a1b:;
  /* 12214a1b mov dword ptr [0x1224060c], 1 */
  w32((uint32_t)(0x1224060c), (0x1u));
  /* 12214a25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214a28 push ecx */
  push32((uint32_t)(ECX));
  /* 12214a29 call dword ptr [0x12243390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243390))), 0x12214a2fu);
L_12214a2f:;
  /* 12214a2f mov esp, ebp */
  ESP = (EBP);
  /* 12214a31 pop ebp */
  EBP = (pop32());
  /* 12214a32 ret  */
  ESPCHK(0x12214950u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x12214a40 (15 bytes, 7 insns) */
void f_12214a40(void) {
  FTRACE(0x12214a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12214a41 mov ebp, esp */
  EBP = (ESP);
  /* 12214a43 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12214a45 call 0x12218b30 */
  push32(0x12214a4au); f_12218b30();
  /* 12214a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214a4d pop ebp */
  EBP = (pop32());
  /* 12214a4e ret  */
  ESPCHK(0x12214a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a50 @ 0x12214a50 (15 bytes, 7 insns) */
void f_12214a50(void) {
  FTRACE(0x12214a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12214a51 mov ebp, esp */
  EBP = (ESP);
  /* 12214a53 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12214a55 call 0x12218bd0 */
  push32(0x12214a5au); f_12218bd0();
  /* 12214a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214a5d pop ebp */
  EBP = (pop32());
  /* 12214a5e ret  */
  ESPCHK(0x12214a50u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12214a60 (37 bytes, 16 insns) */
void f_12214a60(void) {
  FTRACE(0x12214a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12214a61 mov ebp, esp */
  EBP = (ESP);
L_12214a63:;
  /* 12214a63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214a66 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214a69 jae 0x12214a83 */
  if (!C.cf) goto L_12214a83;
  /* 12214a6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214a6e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214a71 je 0x12214a78 */
  if (C.zf) goto L_12214a78;
  /* 12214a73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214a76 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12214a78u);
L_12214a78:;
  /* 12214a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214a7b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214a7e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12214a81 jmp 0x12214a63 */
  goto L_12214a63;
L_12214a83:;
  /* 12214a83 pop ebp */
  EBP = (pop32());
  /* 12214a84 ret  */
  ESPCHK(0x12214a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a90 @ 0x12214a90 (130 bytes, 42 insns) */
void f_12214a90(void) {
  FTRACE(0x12214a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12214a91 mov ebp, esp */
  EBP = (ESP);
  /* 12214a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12214a94 call 0x12218a50 */
  push32(0x12214a99u); f_12218a50();
  /* 12214a99 call dword ptr [0x122433a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433a4))), 0x12214a9fu);
  /* 12214a9f mov dword ptr [0x1223ea5c], eax */
  w32((uint32_t)(0x1223ea5c), (EAX));
  /* 12214aa4 cmp dword ptr [0x1223ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1223ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214aab jne 0x12214ab1 */
  if (!C.zf) goto L_12214ab1;
  /* 12214aad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12214aaf jmp 0x12214b0e */
  goto L_12214b0e;
L_12214ab1:;
  /* 12214ab1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12214ab3 push 0x1223b64c */
  push32((uint32_t)(0x1223b64cu));
  /* 12214ab8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12214aba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12214abc push 1 */
  push32((uint32_t)(0x1u));
  /* 12214abe call 0x12215540 */
  push32(0x12214ac3u); f_12215540();
  /* 12214ac3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214ac6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12214ac9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214acd je 0x12214ae4 */
  if (C.zf) goto L_12214ae4;
  /* 12214acf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214ad2 push eax */
  push32((uint32_t)(EAX));
  /* 12214ad3 mov ecx, dword ptr [0x1223ea5c] */
  ECX = (r32((uint32_t)(0x1223ea5c)));
  /* 12214ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 12214ada call dword ptr [0x122432bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432bc))), 0x12214ae0u);
  /* 12214ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12214ae2 jne 0x12214ae8 */
  if (!C.zf) goto L_12214ae8;
L_12214ae4:;
  /* 12214ae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12214ae6 jmp 0x12214b0e */
  goto L_12214b0e;
L_12214ae8:;
  /* 12214ae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214aeb push edx */
  push32((uint32_t)(EDX));
  /* 12214aec call 0x12214b50 */
  push32(0x12214af1u); f_12214b50();
  /* 12214af1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214af4 call dword ptr [0x122432b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432b8))), 0x12214afau);
  /* 12214afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214afd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12214aff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214b02 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12214b09 mov eax, 1 */
  EAX = (0x1u);
L_12214b0e:;
  /* 12214b0e mov esp, ebp */
  ESP = (EBP);
  /* 12214b10 pop ebp */
  EBP = (pop32());
  /* 12214b11 ret  */
  ESPCHK(0x12214a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b20 @ 0x12214b20 (41 bytes, 11 insns) */
void f_12214b20(void) {
  FTRACE(0x12214b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12214b21 mov ebp, esp */
  EBP = (ESP);
  /* 12214b23 call 0x12218a90 */
  push32(0x12214b28u); f_12218a90();
  /* 12214b28 cmp dword ptr [0x1223ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1223ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214b2f je 0x12214b47 */
  if (C.zf) goto L_12214b47;
  /* 12214b31 mov eax, dword ptr [0x1223ea5c] */
  EAX = (r32((uint32_t)(0x1223ea5c)));
  /* 12214b36 push eax */
  push32((uint32_t)(EAX));
  /* 12214b37 call dword ptr [0x122433a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433a8))), 0x12214b3du);
  /* 12214b3d mov dword ptr [0x1223ea5c], 0xffffffff */
  w32((uint32_t)(0x1223ea5c), (0xffffffffu));
L_12214b47:;
  /* 12214b47 pop ebp */
  EBP = (pop32());
  /* 12214b48 ret  */
  ESPCHK(0x12214b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b50 @ 0x12214b50 (25 bytes, 8 insns) */
void f_12214b50(void) {
  FTRACE(0x12214b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12214b51 mov ebp, esp */
  EBP = (ESP);
  /* 12214b53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214b56 mov dword ptr [eax + 0x50], 0x1223ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1223ec00u));
  /* 12214b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214b60 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12214b67 pop ebp */
  EBP = (pop32());
  /* 12214b68 ret  */
  ESPCHK(0x12214b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b70 @ 0x12214b70 (152 bytes, 48 insns) */
void f_12214b70(void) {
  FTRACE(0x12214b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12214b71 mov ebp, esp */
  EBP = (ESP);
  /* 12214b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12214b76 call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x12214b7cu);
  /* 12214b7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12214b7f mov eax, dword ptr [0x1223ea5c] */
  EAX = (r32((uint32_t)(0x1223ea5c)));
  /* 12214b84 push eax */
  push32((uint32_t)(EAX));
  /* 12214b85 call dword ptr [0x122433b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b0))), 0x12214b8bu);
  /* 12214b8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12214b8e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214b92 jne 0x12214bf7 */
  if (!C.zf) goto L_12214bf7;
  /* 12214b94 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12214b99 push 0x1223b64c */
  push32((uint32_t)(0x1223b64cu));
  /* 12214b9e push 2 */
  push32((uint32_t)(0x2u));
  /* 12214ba0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12214ba2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12214ba4 call 0x12215540 */
  push32(0x12214ba9u); f_12215540();
  /* 12214ba9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214bac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12214baf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214bb3 je 0x12214bed */
  if (C.zf) goto L_12214bed;
  /* 12214bb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214bb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12214bb9 mov edx, dword ptr [0x1223ea5c] */
  EDX = (r32((uint32_t)(0x1223ea5c)));
  /* 12214bbf push edx */
  push32((uint32_t)(EDX));
  /* 12214bc0 call dword ptr [0x122432bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432bc))), 0x12214bc6u);
  /* 12214bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12214bc8 je 0x12214bed */
  if (C.zf) goto L_12214bed;
  /* 12214bca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214bcd push eax */
  push32((uint32_t)(EAX));
  /* 12214bce call 0x12214b50 */
  push32(0x12214bd3u); f_12214b50();
  /* 12214bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214bd6 call dword ptr [0x122432b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432b8))), 0x12214bdcu);
  /* 12214bdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214bdf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12214be1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214be4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12214beb jmp 0x12214bf7 */
  goto L_12214bf7;
L_12214bed:;
  /* 12214bed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12214bef call 0x122140a0 */
  push32(0x12214bf4u); f_122140a0();
  /* 12214bf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214bf7:;
  /* 12214bf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12214bfa push eax */
  push32((uint32_t)(EAX));
  /* 12214bfb call dword ptr [0x122433ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433ac))), 0x12214c01u);
  /* 12214c01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214c04 mov esp, ebp */
  ESP = (EBP);
  /* 12214c06 pop ebp */
  EBP = (pop32());
  /* 12214c07 ret  */
  ESPCHK(0x12214b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x12214c10 (263 bytes, 86 insns) */
void f_12214c10(void) {
  FTRACE(0x12214c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12214c11 mov ebp, esp */
  EBP = (ESP);
  /* 12214c13 cmp dword ptr [0x1223ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1223ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214c1a je 0x12214d15 */
  if (C.zf) goto L_12214d15;
  /* 12214c20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214c24 jne 0x12214c35 */
  if (!C.zf) goto L_12214c35;
  /* 12214c26 mov eax, dword ptr [0x1223ea5c] */
  EAX = (r32((uint32_t)(0x1223ea5c)));
  /* 12214c2b push eax */
  push32((uint32_t)(EAX));
  /* 12214c2c call dword ptr [0x122433b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b0))), 0x12214c32u);
  /* 12214c32 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12214c35:;
  /* 12214c35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214c39 je 0x12214d06 */
  if (C.zf) goto L_12214d06;
  /* 12214c3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214c42 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214c46 je 0x12214c59 */
  if (C.zf) goto L_12214c59;
  /* 12214c48 push 2 */
  push32((uint32_t)(0x2u));
  /* 12214c4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214c4d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12214c50 push eax */
  push32((uint32_t)(EAX));
  /* 12214c51 call 0x12215bc0 */
  push32(0x12214c56u); f_12215bc0();
  /* 12214c56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214c59:;
  /* 12214c59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214c5c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214c60 je 0x12214c73 */
  if (C.zf) goto L_12214c73;
  /* 12214c62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12214c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214c67 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12214c6a push eax */
  push32((uint32_t)(EAX));
  /* 12214c6b call 0x12215bc0 */
  push32(0x12214c70u); f_12215bc0();
  /* 12214c70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214c73:;
  /* 12214c73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214c76 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214c7a je 0x12214c8d */
  if (C.zf) goto L_12214c8d;
  /* 12214c7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12214c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214c81 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12214c84 push eax */
  push32((uint32_t)(EAX));
  /* 12214c85 call 0x12215bc0 */
  push32(0x12214c8au); f_12215bc0();
  /* 12214c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214c8d:;
  /* 12214c8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214c90 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214c94 je 0x12214ca7 */
  if (C.zf) goto L_12214ca7;
  /* 12214c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 12214c98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214c9b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12214c9e push eax */
  push32((uint32_t)(EAX));
  /* 12214c9f call 0x12215bc0 */
  push32(0x12214ca4u); f_12215bc0();
  /* 12214ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214ca7:;
  /* 12214ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214caa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214cae je 0x12214cc1 */
  if (C.zf) goto L_12214cc1;
  /* 12214cb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12214cb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214cb5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12214cb8 push eax */
  push32((uint32_t)(EAX));
  /* 12214cb9 call 0x12215bc0 */
  push32(0x12214cbeu); f_12215bc0();
  /* 12214cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214cc1:;
  /* 12214cc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214cc4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214cc8 je 0x12214cdb */
  if (C.zf) goto L_12214cdb;
  /* 12214cca push 2 */
  push32((uint32_t)(0x2u));
  /* 12214ccc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214ccf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12214cd2 push eax */
  push32((uint32_t)(EAX));
  /* 12214cd3 call 0x12215bc0 */
  push32(0x12214cd8u); f_12215bc0();
  /* 12214cd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214cdb:;
  /* 12214cdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214cde cmp dword ptr [ecx + 0x50], 0x1223ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1223ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214ce5 je 0x12214cf8 */
  if (C.zf) goto L_12214cf8;
  /* 12214ce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12214ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214cec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12214cef push eax */
  push32((uint32_t)(EAX));
  /* 12214cf0 call 0x12215bc0 */
  push32(0x12214cf5u); f_12215bc0();
  /* 12214cf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214cf8:;
  /* 12214cf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12214cfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12214cfd push ecx */
  push32((uint32_t)(ECX));
  /* 12214cfe call 0x12215bc0 */
  push32(0x12214d03u); f_12215bc0();
  /* 12214d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214d06:;
  /* 12214d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12214d08 mov edx, dword ptr [0x1223ea5c] */
  EDX = (r32((uint32_t)(0x1223ea5c)));
  /* 12214d0e push edx */
  push32((uint32_t)(EDX));
  /* 12214d0f call dword ptr [0x122432bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432bc))), 0x12214d15u);
L_12214d15:;
  /* 12214d15 pop ebp */
  EBP = (pop32());
  /* 12214d16 ret  */
  ESPCHK(0x12214c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d20 @ 0x12214d20 (11 bytes, 5 insns) */
void f_12214d20(void) {
  FTRACE(0x12214d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12214d21 mov ebp, esp */
  EBP = (ESP);
  /* 12214d23 call dword ptr [0x122432b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432b8))), 0x12214d29u);
  /* 12214d29 pop ebp */
  EBP = (pop32());
  /* 12214d2a ret  */
  ESPCHK(0x12214d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d30 @ 0x12214d30 (11 bytes, 5 insns) */
void f_12214d30(void) {
  FTRACE(0x12214d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12214d31 mov ebp, esp */
  EBP = (ESP);
  /* 12214d33 call dword ptr [0x122433b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b8))), 0x12214d39u);
  /* 12214d39 pop ebp */
  EBP = (pop32());
  /* 12214d3a ret  */
  ESPCHK(0x12214d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d40 @ 0x12214d40 (804 bytes, 236 insns) */
void f_12214d40(void) {
  FTRACE(0x12214d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12214d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12214d41 mov ebp, esp */
  EBP = (ESP);
  /* 12214d43 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12214d46 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12214d4b push 0x1223b658 */
  push32((uint32_t)(0x1223b658u));
  /* 12214d50 push 2 */
  push32((uint32_t)(0x2u));
  /* 12214d52 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12214d57 call 0x12215130 */
  push32(0x12214d5cu); f_12215130();
  /* 12214d5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214d5f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12214d62 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214d66 jne 0x12214d72 */
  if (!C.zf) goto L_12214d72;
  /* 12214d68 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12214d6a call 0x122140a0 */
  push32(0x12214d6fu); f_122140a0();
  /* 12214d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12214d72:;
  /* 12214d72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214d75 mov dword ptr [0x12241fa0], eax */
  w32((uint32_t)(0x12241fa0), (EAX));
  /* 12214d7a mov dword ptr [0x122420dc], 0x20 */
  w32((uint32_t)(0x122420dc), (0x20u));
  /* 12214d84 jmp 0x12214d8f */
  goto L_12214d8f;
L_12214d86:;
  /* 12214d86 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214d89 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214d8c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12214d8f:;
  /* 12214d8f mov edx, dword ptr [0x12241fa0] */
  EDX = (r32((uint32_t)(0x12241fa0)));
  /* 12214d95 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214d9b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214d9e jae 0x12214dc3 */
  if (!C.cf) goto L_12214dc3;
  /* 12214da0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214da3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12214da7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214daa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12214db0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214db3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12214db7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214dba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12214dc1 jmp 0x12214d86 */
  goto L_12214d86;
L_12214dc3:;
  /* 12214dc3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12214dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12214dc7 call dword ptr [0x122433c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c0))), 0x12214dcdu);
  /* 12214dcd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12214dd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12214dd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12214dd8 je 0x12214f65 */
  if (C.zf) goto L_12214f65;
  /* 12214dde cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214de2 je 0x12214f65 */
  if (C.zf) goto L_12214f65;
  /* 12214de8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12214deb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12214ded mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12214df0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12214df3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214df6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12214df9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214dfc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214dff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12214e02 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214e09 jge 0x12214e13 */
  if ((C.sf==C.of)) goto L_12214e13;
  /* 12214e0b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12214e0e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12214e11 jmp 0x12214e1a */
  goto L_12214e1a;
L_12214e13:;
  /* 12214e13 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12214e1a:;
  /* 12214e1a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12214e1d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12214e20 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12214e27 jmp 0x12214e32 */
  goto L_12214e32;
L_12214e29:;
  /* 12214e29 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12214e2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214e2f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12214e32:;
  /* 12214e32 mov ecx, dword ptr [0x122420dc] */
  ECX = (r32((uint32_t)(0x122420dc)));
  /* 12214e38 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214e3b jge 0x12214ed2 */
  if ((C.sf==C.of)) goto L_12214ed2;
  /* 12214e41 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12214e46 push 0x1223b658 */
  push32((uint32_t)(0x1223b658u));
  /* 12214e4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12214e4d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12214e52 call 0x12215130 */
  push32(0x12214e57u); f_12215130();
  /* 12214e57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12214e5a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12214e5d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214e61 jne 0x12214e6e */
  if (!C.zf) goto L_12214e6e;
  /* 12214e63 mov edx, dword ptr [0x122420dc] */
  EDX = (r32((uint32_t)(0x122420dc)));
  /* 12214e69 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12214e6c jmp 0x12214ed2 */
  goto L_12214ed2;
L_12214e6e:;
  /* 12214e6e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12214e71 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214e74 mov dword ptr [eax*4 + 0x12241fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x12241fa0), (ECX));
  /* 12214e7b mov edx, dword ptr [0x122420dc] */
  EDX = (r32((uint32_t)(0x122420dc)));
  /* 12214e81 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214e84 mov dword ptr [0x122420dc], edx */
  w32((uint32_t)(0x122420dc), (EDX));
  /* 12214e8a jmp 0x12214e95 */
  goto L_12214e95;
L_12214e8c:;
  /* 12214e8c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214e8f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214e92 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12214e95:;
  /* 12214e95 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12214e98 mov edx, dword ptr [ecx*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 12214e9f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214ea5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214ea8 jae 0x12214ecd */
  if (!C.cf) goto L_12214ecd;
  /* 12214eaa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214ead mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12214eb1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214eb4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12214eba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214ebd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12214ec1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214ec4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12214ecb jmp 0x12214e8c */
  goto L_12214e8c;
L_12214ecd:;
  /* 12214ecd jmp 0x12214e29 */
  goto L_12214e29;
L_12214ed2:;
  /* 12214ed2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12214ed9 jmp 0x12214ef6 */
  goto L_12214ef6;
L_12214edb:;
  /* 12214edb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12214ede add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214ee1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12214ee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214ee7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214eea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12214eed mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12214ef0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214ef3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12214ef6:;
  /* 12214ef6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12214ef9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214efc jge 0x12214f65 */
  if ((C.sf==C.of)) goto L_12214f65;
  /* 12214efe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12214f01 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214f04 je 0x12214f60 */
  if (C.zf) goto L_12214f60;
  /* 12214f06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214f09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12214f0c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12214f0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12214f11 je 0x12214f60 */
  if (C.zf) goto L_12214f60;
  /* 12214f13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214f16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12214f19 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12214f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12214f1e jne 0x12214f30 */
  if (!C.zf) goto L_12214f30;
  /* 12214f20 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12214f23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12214f25 push edx */
  push32((uint32_t)(EDX));
  /* 12214f26 call dword ptr [0x122433a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433a0))), 0x12214f2cu);
  /* 12214f2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12214f2e je 0x12214f60 */
  if (C.zf) goto L_12214f60;
L_12214f30:;
  /* 12214f30 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12214f33 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12214f36 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12214f39 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12214f3c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12214f3f mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 12214f46 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214f48 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12214f4b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214f4e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12214f51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12214f53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12214f55 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214f58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12214f5b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12214f5d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12214f60:;
  /* 12214f60 jmp 0x12214edb */
  goto L_12214edb;
L_12214f65:;
  /* 12214f65 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12214f6c jmp 0x12214f77 */
  goto L_12214f77;
L_12214f6e:;
  /* 12214f6e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12214f71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214f74 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12214f77:;
  /* 12214f77 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214f7b jge 0x12215054 */
  if ((C.sf==C.of)) goto L_12215054;
  /* 12214f81 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12214f84 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12214f87 mov edx, dword ptr [0x12241fa0] */
  EDX = (r32((uint32_t)(0x12241fa0)));
  /* 12214f8d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214f8f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12214f92 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214f95 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214f98 jne 0x12215040 */
  if (!C.zf) goto L_12215040;
  /* 12214f9e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214fa1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12214fa5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214fa9 jne 0x12214fb4 */
  if (!C.zf) goto L_12214fb4;
  /* 12214fab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12214fb2 jmp 0x12214fc4 */
  goto L_12214fc4;
L_12214fb4:;
  /* 12214fb4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12214fb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12214fba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12214fbc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12214fbe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12214fc1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12214fc4:;
  /* 12214fc4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12214fc7 push eax */
  push32((uint32_t)(EAX));
  /* 12214fc8 call dword ptr [0x12243370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243370))), 0x12214fceu);
  /* 12214fce mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12214fd1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214fd5 je 0x1221502f */
  if (C.zf) goto L_1221502f;
  /* 12214fd7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12214fda push ecx */
  push32((uint32_t)(ECX));
  /* 12214fdb call dword ptr [0x122433a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433a0))), 0x12214fe1u);
  /* 12214fe1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12214fe4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214fe8 je 0x1221502f */
  if (C.zf) goto L_1221502f;
  /* 12214fea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12214fed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12214ff0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12214ff2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12214ff5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12214ffb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12214ffe jne 0x12215010 */
  if (!C.zf) goto L_12215010;
  /* 12215000 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12215003 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12215006 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12215008 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1221500b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1221500e jmp 0x1221502d */
  goto L_1221502d;
L_12215010:;
  /* 12215010 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12215013 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12215019 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221501c jne 0x1221502d */
  if (!C.zf) goto L_1221502d;
  /* 1221501e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12215021 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12215024 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12215027 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1221502a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1221502d:;
  /* 1221502d jmp 0x1221503e */
  goto L_1221503e;
L_1221502f:;
  /* 1221502f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12215032 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12215035 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12215038 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1221503b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1221503e:;
  /* 1221503e jmp 0x1221504f */
  goto L_1221504f;
L_12215040:;
  /* 12215040 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12215043 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12215046 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12215049 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1221504c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1221504f:;
  /* 1221504f jmp 0x12214f6e */
  goto L_12214f6e;
L_12215054:;
  /* 12215054 mov eax, dword ptr [0x122420dc] */
  EAX = (r32((uint32_t)(0x122420dc)));
  /* 12215059 push eax */
  push32((uint32_t)(EAX));
  /* 1221505a call dword ptr [0x1224339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224339c))), 0x12215060u);
  /* 12215060 mov esp, ebp */
  ESP = (EBP);
  /* 12215062 pop ebp */
  EBP = (pop32());
  /* 12215063 ret  */
  ESPCHK(0x12214d40u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12215070 (155 bytes, 45 insns) */
void f_12215070(void) {
  FTRACE(0x12215070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215070 push ebp */
  push32((uint32_t)(EBP));
  /* 12215071 mov ebp, esp */
  EBP = (ESP);
  /* 12215073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12215076 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1221507d jmp 0x12215088 */
  goto L_12215088;
L_1221507f:;
  /* 1221507f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12215082 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215085 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12215088:;
  /* 12215088 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221508c jge 0x12215107 */
  if ((C.sf==C.of)) goto L_12215107;
  /* 1221508e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12215091 cmp dword ptr [ecx*4 + 0x12241fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12241fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215099 je 0x12215102 */
  if (C.zf) goto L_12215102;
  /* 1221509b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221509e mov eax, dword ptr [edx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12241fa0)));
  /* 122150a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122150a8 jmp 0x122150b3 */
  goto L_122150b3;
L_122150aa:;
  /* 122150aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122150ad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122150b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122150b3:;
  /* 122150b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122150b6 mov eax, dword ptr [edx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12241fa0)));
  /* 122150bd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122150c2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122150c5 jae 0x122150df */
  if (!C.cf) goto L_122150df;
  /* 122150c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122150ca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122150ce je 0x122150dd */
  if (C.zf) goto L_122150dd;
  /* 122150d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122150d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122150d6 push edx */
  push32((uint32_t)(EDX));
  /* 122150d7 call dword ptr [0x122433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c4))), 0x122150ddu);
L_122150dd:;
  /* 122150dd jmp 0x122150aa */
  goto L_122150aa;
L_122150df:;
  /* 122150df push 2 */
  push32((uint32_t)(0x2u));
  /* 122150e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122150e4 mov ecx, dword ptr [eax*4 + 0x12241fa0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 122150eb push ecx */
  push32((uint32_t)(ECX));
  /* 122150ec call 0x12215bc0 */
  push32(0x122150f1u); f_12215bc0();
  /* 122150f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122150f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122150f7 mov dword ptr [edx*4 + 0x12241fa0], 0 */
  w32((uint32_t)(EDX*4 + 0x12241fa0), (0x0u));
L_12215102:;
  /* 12215102 jmp 0x1221507f */
  goto L_1221507f;
L_12215107:;
  /* 12215107 mov esp, ebp */
  ESP = (EBP);
  /* 12215109 pop ebp */
  EBP = (pop32());
  /* 1221510a ret  */
  ESPCHK(0x12215070u, _esp0);
  ESP += 4; return;
}

/* FUN_10005110 @ 0x12215110 (29 bytes, 13 insns) */
void f_12215110(void) {
  FTRACE(0x12215110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215110 push ebp */
  push32((uint32_t)(EBP));
  /* 12215111 mov ebp, esp */
  EBP = (ESP);
  /* 12215113 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215115 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215117 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215119 mov eax, dword ptr [0x122407b8] */
  EAX = (r32((uint32_t)(0x122407b8)));
  /* 1221511e push eax */
  push32((uint32_t)(EAX));
  /* 1221511f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215122 push ecx */
  push32((uint32_t)(ECX));
  /* 12215123 call 0x12215180 */
  push32(0x12215128u); f_12215180();
  /* 12215128 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221512b pop ebp */
  EBP = (pop32());
  /* 1221512c ret  */
  ESPCHK(0x12215110u, _esp0);
  ESP += 4; return;
}

/* FUN_10005130 @ 0x12215130 (35 bytes, 16 insns) */
void f_12215130(void) {
  FTRACE(0x12215130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215130 push ebp */
  push32((uint32_t)(EBP));
  /* 12215131 mov ebp, esp */
  EBP = (ESP);
  /* 12215133 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12215136 push eax */
  push32((uint32_t)(EAX));
  /* 12215137 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221513a push ecx */
  push32((uint32_t)(ECX));
  /* 1221513b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221513e push edx */
  push32((uint32_t)(EDX));
  /* 1221513f mov eax, dword ptr [0x122407b8] */
  EAX = (r32((uint32_t)(0x122407b8)));
  /* 12215144 push eax */
  push32((uint32_t)(EAX));
  /* 12215145 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215148 push ecx */
  push32((uint32_t)(ECX));
  /* 12215149 call 0x12215180 */
  push32(0x1221514eu); f_12215180();
  /* 1221514e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215151 pop ebp */
  EBP = (pop32());
  /* 12215152 ret  */
  ESPCHK(0x12215130u, _esp0);
  ESP += 4; return;
}

/* FUN_10005160 @ 0x12215160 (27 bytes, 13 insns) */
void f_12215160(void) {
  FTRACE(0x12215160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215160 push ebp */
  push32((uint32_t)(EBP));
  /* 12215161 mov ebp, esp */
  EBP = (ESP);
  /* 12215163 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215165 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215167 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215169 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221516c push eax */
  push32((uint32_t)(EAX));
  /* 1221516d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215170 push ecx */
  push32((uint32_t)(ECX));
  /* 12215171 call 0x12215180 */
  push32(0x12215176u); f_12215180();
  /* 12215176 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215179 pop ebp */
  EBP = (pop32());
  /* 1221517a ret  */
  ESPCHK(0x12215160u, _esp0);
  ESP += 4; return;
}

/* FUN_10005180 @ 0x12215180 (94 bytes, 38 insns) */
void f_12215180(void) {
  FTRACE(0x12215180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215180 push ebp */
  push32((uint32_t)(EBP));
  /* 12215181 mov ebp, esp */
  EBP = (ESP);
  /* 12215183 push ecx */
  push32((uint32_t)(ECX));
L_12215184:;
  /* 12215184 push 9 */
  push32((uint32_t)(0x9u));
  /* 12215186 call 0x12218b30 */
  push32(0x1221518bu); f_12218b30();
  /* 1221518b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221518e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12215191 push eax */
  push32((uint32_t)(EAX));
  /* 12215192 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12215195 push ecx */
  push32((uint32_t)(ECX));
  /* 12215196 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12215199 push edx */
  push32((uint32_t)(EDX));
  /* 1221519a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221519d push eax */
  push32((uint32_t)(EAX));
  /* 1221519e call 0x12215200 */
  push32(0x122151a3u); f_12215200();
  /* 122151a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122151a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122151a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 122151ab call 0x12218bd0 */
  push32(0x122151b0u); f_12218bd0();
  /* 122151b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122151b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122151b7 jne 0x122151bf */
  if (!C.zf) goto L_122151bf;
  /* 122151b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122151bd jne 0x122151c4 */
  if (!C.zf) goto L_122151c4;
L_122151bf:;
  /* 122151bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122151c2 jmp 0x122151da */
  goto L_122151da;
L_122151c4:;
  /* 122151c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122151c7 push ecx */
  push32((uint32_t)(ECX));
  /* 122151c8 call 0x12218e70 */
  push32(0x122151cdu); f_12218e70();
  /* 122151cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122151d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122151d2 jne 0x122151d8 */
  if (!C.zf) goto L_122151d8;
  /* 122151d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122151d6 jmp 0x122151da */
  goto L_122151da;
L_122151d8:;
  /* 122151d8 jmp 0x12215184 */
  goto L_12215184;
L_122151da:;
  /* 122151da mov esp, ebp */
  ESP = (EBP);
  /* 122151dc pop ebp */
  EBP = (pop32());
  /* 122151dd ret  */
  ESPCHK(0x12215180u, _esp0);
  ESP += 4; return;
}

/* FUN_100051e0 @ 0x122151e0 (23 bytes, 11 insns) */
void f_122151e0(void) {
  FTRACE(0x122151e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122151e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122151e1 mov ebp, esp */
  EBP = (ESP);
  /* 122151e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122151e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122151e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122151e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122151ec push eax */
  push32((uint32_t)(EAX));
  /* 122151ed call 0x12215200 */
  push32(0x122151f2u); f_12215200();
  /* 122151f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122151f5 pop ebp */
  EBP = (pop32());
  /* 122151f6 ret  */
  ESPCHK(0x122151e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x12215200 (787 bytes, 254 insns) */
void f_12215200(void) {
  FTRACE(0x12215200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215200 push ebp */
  push32((uint32_t)(EBP));
  /* 12215201 mov ebp, esp */
  EBP = (ESP);
  /* 12215203 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12215206 push ebx */
  push32((uint32_t)(EBX));
  /* 12215207 push esi */
  push32((uint32_t)(ESI));
  /* 12215208 push edi */
  push32((uint32_t)(EDI));
  /* 12215209 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12215210 mov eax, dword ptr [0x1223ea84] */
  EAX = (r32((uint32_t)(0x1223ea84)));
  /* 12215215 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12215218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221521a je 0x1221524c */
  if (C.zf) goto L_1221524c;
L_1221521c:;
  /* 1221521c call 0x122162d0 */
  push32(0x12215221u); f_122162d0();
  /* 12215221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215223 jne 0x12215246 */
  if (!C.zf) goto L_12215246;
  /* 12215225 push 0x1223b74c */
  push32((uint32_t)(0x1223b74cu));
  /* 1221522a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221522c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12215231 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215236 push 2 */
  push32((uint32_t)(0x2u));
  /* 12215238 call 0x122141f0 */
  push32(0x1221523du); f_122141f0();
  /* 1221523d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215240 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215243 jne 0x12215246 */
  if (!C.zf) goto L_12215246;
  /* 12215245 int3  */
  x86_unimpl("int3 @ 0x12215245");
L_12215246:;
  /* 12215246 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215248 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221524a jne 0x1221521c */
  if (!C.zf) goto L_1221521c;
L_1221524c:;
  /* 1221524c mov edx, dword ptr [0x1223ea88] */
  EDX = (r32((uint32_t)(0x1223ea88)));
  /* 12215252 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12215255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12215258 cmp eax, dword ptr [0x1223ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1223ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221525e jne 0x12215261 */
  if (!C.zf) goto L_12215261;
  /* 12215260 int3  */
  x86_unimpl("int3 @ 0x12215260");
L_12215261:;
  /* 12215261 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12215264 push ecx */
  push32((uint32_t)(ECX));
  /* 12215265 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12215268 push edx */
  push32((uint32_t)(EDX));
  /* 12215269 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221526c push eax */
  push32((uint32_t)(EAX));
  /* 1221526d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215270 push ecx */
  push32((uint32_t)(ECX));
  /* 12215271 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215274 push edx */
  push32((uint32_t)(EDX));
  /* 12215275 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215277 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215279 call dword ptr [0x1223ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1223ec90))), 0x1221527fu);
  /* 1221527f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215284 jne 0x122152e4 */
  if (!C.zf) goto L_122152e4;
  /* 12215286 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221528a je 0x122152b7 */
  if (C.zf) goto L_122152b7;
L_1221528c:;
  /* 1221528c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221528f push eax */
  push32((uint32_t)(EAX));
  /* 12215290 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12215293 push ecx */
  push32((uint32_t)(ECX));
  /* 12215294 push 0x1223b708 */
  push32((uint32_t)(0x1223b708u));
  /* 12215299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221529b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221529d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221529f push 0 */
  push32((uint32_t)(0x0u));
  /* 122152a1 call 0x122141f0 */
  push32(0x122152a6u); f_122141f0();
  /* 122152a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122152a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122152ac jne 0x122152af */
  if (!C.zf) goto L_122152af;
  /* 122152ae int3  */
  x86_unimpl("int3 @ 0x122152ae");
L_122152af:;
  /* 122152af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122152b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122152b3 jne 0x1221528c */
  if (!C.zf) goto L_1221528c;
  /* 122152b5 jmp 0x122152dd */
  goto L_122152dd;
L_122152b7:;
  /* 122152b7 push 0x1223b6e4 */
  push32((uint32_t)(0x1223b6e4u));
  /* 122152bc push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 122152c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122152c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122152c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122152c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122152c9 call 0x122141f0 */
  push32(0x122152ceu); f_122141f0();
  /* 122152ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122152d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122152d4 jne 0x122152d7 */
  if (!C.zf) goto L_122152d7;
  /* 122152d6 int3  */
  x86_unimpl("int3 @ 0x122152d6");
L_122152d7:;
  /* 122152d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122152d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122152db jne 0x122152b7 */
  if (!C.zf) goto L_122152b7;
L_122152dd:;
  /* 122152dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122152df jmp 0x1221550c */
  goto L_1221550c;
L_122152e4:;
  /* 122152e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122152e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122152ed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122152f0 je 0x12215306 */
  if (C.zf) goto L_12215306;
  /* 122152f2 mov edx, dword ptr [0x1223ea84] */
  EDX = (r32((uint32_t)(0x1223ea84)));
  /* 122152f8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 122152fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122152fd jne 0x12215306 */
  if (!C.zf) goto L_12215306;
  /* 122152ff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12215306:;
  /* 12215306 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221530a ja 0x12215317 */
  if ((!C.cf&&!C.zf)) goto L_12215317;
  /* 1221530c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221530f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215312 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215315 jbe 0x12215343 */
  if ((C.cf||C.zf)) goto L_12215343;
L_12215317:;
  /* 12215317 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221531a push ecx */
  push32((uint32_t)(ECX));
  /* 1221531b push 0x1223b6bc */
  push32((uint32_t)(0x1223b6bcu));
  /* 12215320 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215322 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215324 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215326 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215328 call 0x122141f0 */
  push32(0x1221532du); f_122141f0();
  /* 1221532d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215330 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215333 jne 0x12215336 */
  if (!C.zf) goto L_12215336;
  /* 12215335 int3  */
  x86_unimpl("int3 @ 0x12215335");
L_12215336:;
  /* 12215336 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12215338 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221533a jne 0x12215317 */
  if (!C.zf) goto L_12215317;
  /* 1221533c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221533e jmp 0x1221550c */
  goto L_1221550c;
L_12215343:;
  /* 12215343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215346 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221534b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221534e je 0x12215390 */
  if (C.zf) goto L_12215390;
  /* 12215350 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215354 je 0x12215390 */
  if (C.zf) goto L_12215390;
  /* 12215356 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215359 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221535f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215362 je 0x12215390 */
  if (C.zf) goto L_12215390;
  /* 12215364 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215368 je 0x12215390 */
  if (C.zf) goto L_12215390;
L_1221536a:;
  /* 1221536a push 0x1223b688 */
  push32((uint32_t)(0x1223b688u));
  /* 1221536f push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 12215374 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215376 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221537a push 1 */
  push32((uint32_t)(0x1u));
  /* 1221537c call 0x122141f0 */
  push32(0x12215381u); f_122141f0();
  /* 12215381 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215384 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215387 jne 0x1221538a */
  if (!C.zf) goto L_1221538a;
  /* 12215389 int3  */
  x86_unimpl("int3 @ 0x12215389");
L_1221538a:;
  /* 1221538a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221538c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221538e jne 0x1221536a */
  if (!C.zf) goto L_1221536a;
L_12215390:;
  /* 12215390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215393 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215396 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12215399 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221539c push ecx */
  push32((uint32_t)(ECX));
  /* 1221539d call 0x12218f80 */
  push32(0x122153a2u); f_12218f80();
  /* 122153a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122153a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122153a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122153ac jne 0x122153b5 */
  if (!C.zf) goto L_122153b5;
  /* 122153ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122153b0 jmp 0x1221550c */
  goto L_1221550c;
L_122153b5:;
  /* 122153b5 mov edx, dword ptr [0x1223ea88] */
  EDX = (r32((uint32_t)(0x1223ea88)));
  /* 122153bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122153be mov dword ptr [0x1223ea88], edx */
  w32((uint32_t)(0x1223ea88), (EDX));
  /* 122153c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122153c8 je 0x12215413 */
  if (C.zf) goto L_12215413;
  /* 122153ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122153cd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122153d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122153d6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 122153dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122153e0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 122153e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122153ea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 122153f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122153f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122153f7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 122153fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122153fd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12215404 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215407 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1221540e jmp 0x122154b3 */
  goto L_122154b3;
L_12215413:;
  /* 12215413 mov edx, dword ptr [0x12240618] */
  EDX = (r32((uint32_t)(0x12240618)));
  /* 12215419 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221541c mov dword ptr [0x12240618], edx */
  w32((uint32_t)(0x12240618), (EDX));
  /* 12215422 mov eax, dword ptr [0x12240620] */
  EAX = (r32((uint32_t)(0x12240620)));
  /* 12215427 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221542a mov dword ptr [0x12240620], eax */
  w32((uint32_t)(0x12240620), (EAX));
  /* 1221542f mov ecx, dword ptr [0x12240620] */
  ECX = (r32((uint32_t)(0x12240620)));
  /* 12215435 cmp ecx, dword ptr [0x12240624] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12240624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221543b jbe 0x12215449 */
  if ((C.cf||C.zf)) goto L_12215449;
  /* 1221543d mov edx, dword ptr [0x12240620] */
  EDX = (r32((uint32_t)(0x12240620)));
  /* 12215443 mov dword ptr [0x12240624], edx */
  w32((uint32_t)(0x12240624), (EDX));
L_12215449:;
  /* 12215449 cmp dword ptr [0x1224061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215450 je 0x1221545f */
  if (C.zf) goto L_1221545f;
  /* 12215452 mov eax, dword ptr [0x1224061c] */
  EAX = (r32((uint32_t)(0x1224061c)));
  /* 12215457 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221545a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1221545d jmp 0x12215468 */
  goto L_12215468;
L_1221545f:;
  /* 1221545f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215462 mov dword ptr [0x12240614], edx */
  w32((uint32_t)(0x12240614), (EDX));
L_12215468:;
  /* 12215468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221546b mov ecx, dword ptr [0x1224061c] */
  ECX = (r32((uint32_t)(0x1224061c)));
  /* 12215471 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12215473 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215476 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1221547d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215480 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12215483 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12215486 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215489 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221548c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1221548f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215495 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12215498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221549b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221549e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 122154a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122154a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122154a7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 122154aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122154ad mov dword ptr [0x1224061c], ecx */
  w32((uint32_t)(0x1224061c), (ECX));
L_122154b3:;
  /* 122154b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 122154b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122154b7 mov dl, byte ptr [0x1223ea90] */
  DL = (r8((uint32_t)(0x1223ea90)));
  /* 122154bd push edx */
  push32((uint32_t)(EDX));
  /* 122154be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122154c1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122154c4 push eax */
  push32((uint32_t)(EAX));
  /* 122154c5 call 0x12218ea0 */
  push32(0x122154cau); f_12218ea0();
  /* 122154ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122154cd push 4 */
  push32((uint32_t)(0x4u));
  /* 122154cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122154d1 mov cl, byte ptr [0x1223ea90] */
  CL = (r8((uint32_t)(0x1223ea90)));
  /* 122154d7 push ecx */
  push32((uint32_t)(ECX));
  /* 122154d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122154db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122154de lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 122154e2 push ecx */
  push32((uint32_t)(ECX));
  /* 122154e3 call 0x12218ea0 */
  push32(0x122154e8u); f_12218ea0();
  /* 122154e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122154eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122154ee push edx */
  push32((uint32_t)(EDX));
  /* 122154ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122154f1 mov al, byte ptr [0x1223ea92] */
  AL = (r8((uint32_t)(0x1223ea92)));
  /* 122154f6 push eax */
  push32((uint32_t)(EAX));
  /* 122154f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122154fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122154fd push ecx */
  push32((uint32_t)(ECX));
  /* 122154fe call 0x12218ea0 */
  push32(0x12215503u); f_12218ea0();
  /* 12215503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215509 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1221550c:;
  /* 1221550c pop edi */
  EDI = (pop32());
  /* 1221550d pop esi */
  ESI = (pop32());
  /* 1221550e pop ebx */
  EBX = (pop32());
  /* 1221550f mov esp, ebp */
  ESP = (EBP);
  /* 12215511 pop ebp */
  EBP = (pop32());
  /* 12215512 ret  */
  ESPCHK(0x12215200u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x12215520 (27 bytes, 13 insns) */
void f_12215520(void) {
  FTRACE(0x12215520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215520 push ebp */
  push32((uint32_t)(EBP));
  /* 12215521 mov ebp, esp */
  EBP = (ESP);
  /* 12215523 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215525 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215527 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215529 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221552c push eax */
  push32((uint32_t)(EAX));
  /* 1221552d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215530 push ecx */
  push32((uint32_t)(ECX));
  /* 12215531 call 0x12215540 */
  push32(0x12215536u); f_12215540();
  /* 12215536 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215539 pop ebp */
  EBP = (pop32());
  /* 1221553a ret  */
  ESPCHK(0x12215520u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12215540 (96 bytes, 37 insns) */
void f_12215540(void) {
  FTRACE(0x12215540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215540 push ebp */
  push32((uint32_t)(EBP));
  /* 12215541 mov ebp, esp */
  EBP = (ESP);
  /* 12215543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12215546 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215549 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221554d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12215550 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12215553 push ecx */
  push32((uint32_t)(ECX));
  /* 12215554 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12215557 push edx */
  push32((uint32_t)(EDX));
  /* 12215558 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221555b push eax */
  push32((uint32_t)(EAX));
  /* 1221555c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221555f push ecx */
  push32((uint32_t)(ECX));
  /* 12215560 call 0x12215130 */
  push32(0x12215565u); f_12215130();
  /* 12215565 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215568 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221556b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221556f je 0x12215599 */
  if (C.zf) goto L_12215599;
  /* 12215571 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12215574 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12215577 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221557a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221557d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12215580:;
  /* 12215580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215583 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215586 jae 0x12215599 */
  if (!C.cf) goto L_12215599;
  /* 12215588 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221558b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1221558e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215591 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215594 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12215597 jmp 0x12215580 */
  goto L_12215580;
L_12215599:;
  /* 12215599 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221559c mov esp, ebp */
  ESP = (EBP);
  /* 1221559e pop ebp */
  EBP = (pop32());
  /* 1221559f ret  */
  ESPCHK(0x12215540u, _esp0);
  ESP += 4; return;
}

/* FUN_100055a0 @ 0x122155a0 (27 bytes, 13 insns) */
void f_122155a0(void) {
  FTRACE(0x122155a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122155a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122155a1 mov ebp, esp */
  EBP = (ESP);
  /* 122155a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122155a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122155a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122155a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122155ac push eax */
  push32((uint32_t)(EAX));
  /* 122155ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122155b0 push ecx */
  push32((uint32_t)(ECX));
  /* 122155b1 call 0x122155c0 */
  push32(0x122155b6u); f_122155c0();
  /* 122155b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122155b9 pop ebp */
  EBP = (pop32());
  /* 122155ba ret  */
  ESPCHK(0x122155a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055c0 @ 0x122155c0 (64 bytes, 27 insns) */
void f_122155c0(void) {
  FTRACE(0x122155c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122155c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122155c1 mov ebp, esp */
  EBP = (ESP);
  /* 122155c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122155c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 122155c6 call 0x12218b30 */
  push32(0x122155cbu); f_12218b30();
  /* 122155cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122155ce push 1 */
  push32((uint32_t)(0x1u));
  /* 122155d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122155d3 push eax */
  push32((uint32_t)(EAX));
  /* 122155d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122155d7 push ecx */
  push32((uint32_t)(ECX));
  /* 122155d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122155db push edx */
  push32((uint32_t)(EDX));
  /* 122155dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122155df push eax */
  push32((uint32_t)(EAX));
  /* 122155e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122155e3 push ecx */
  push32((uint32_t)(ECX));
  /* 122155e4 call 0x12215600 */
  push32(0x122155e9u); f_12215600();
  /* 122155e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122155ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122155ef push 9 */
  push32((uint32_t)(0x9u));
  /* 122155f1 call 0x12218bd0 */
  push32(0x122155f6u); f_12218bd0();
  /* 122155f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122155f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122155fc mov esp, ebp */
  ESP = (EBP);
  /* 122155fe pop ebp */
  EBP = (pop32());
  /* 122155ff ret  */
  ESPCHK(0x122155c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005600 @ 0x12215600 (1297 bytes, 431 insns) */
void f_12215600(void) {
  FTRACE(0x12215600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215600 push ebp */
  push32((uint32_t)(EBP));
  /* 12215601 mov ebp, esp */
  EBP = (ESP);
  /* 12215603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12215606 push ebx */
  push32((uint32_t)(EBX));
  /* 12215607 push esi */
  push32((uint32_t)(ESI));
  /* 12215608 push edi */
  push32((uint32_t)(EDI));
  /* 12215609 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12215610 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215614 jne 0x12215633 */
  if (!C.zf) goto L_12215633;
  /* 12215616 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12215619 push eax */
  push32((uint32_t)(EAX));
  /* 1221561a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221561d push ecx */
  push32((uint32_t)(ECX));
  /* 1221561e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12215621 push edx */
  push32((uint32_t)(EDX));
  /* 12215622 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215625 push eax */
  push32((uint32_t)(EAX));
  /* 12215626 call 0x12215130 */
  push32(0x1221562bu); f_12215130();
  /* 1221562b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221562e jmp 0x12215b0a */
  goto L_12215b0a;
L_12215633:;
  /* 12215633 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215637 je 0x12215656 */
  if (C.zf) goto L_12215656;
  /* 12215639 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221563d jne 0x12215656 */
  if (!C.zf) goto L_12215656;
  /* 1221563f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12215642 push ecx */
  push32((uint32_t)(ECX));
  /* 12215643 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215646 push edx */
  push32((uint32_t)(EDX));
  /* 12215647 call 0x12215bc0 */
  push32(0x1221564cu); f_12215bc0();
  /* 1221564c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221564f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12215651 jmp 0x12215b0a */
  goto L_12215b0a;
L_12215656:;
  /* 12215656 mov eax, dword ptr [0x1223ea84] */
  EAX = (r32((uint32_t)(0x1223ea84)));
  /* 1221565b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1221565e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215660 je 0x12215692 */
  if (C.zf) goto L_12215692;
L_12215662:;
  /* 12215662 call 0x122162d0 */
  push32(0x12215667u); f_122162d0();
  /* 12215667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215669 jne 0x1221568c */
  if (!C.zf) goto L_1221568c;
  /* 1221566b push 0x1223b74c */
  push32((uint32_t)(0x1223b74cu));
  /* 12215670 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215672 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12215677 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 1221567c push 2 */
  push32((uint32_t)(0x2u));
  /* 1221567e call 0x122141f0 */
  push32(0x12215683u); f_122141f0();
  /* 12215683 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215686 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215689 jne 0x1221568c */
  if (!C.zf) goto L_1221568c;
  /* 1221568b int3  */
  x86_unimpl("int3 @ 0x1221568b");
L_1221568c:;
  /* 1221568c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221568e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215690 jne 0x12215662 */
  if (!C.zf) goto L_12215662;
L_12215692:;
  /* 12215692 mov edx, dword ptr [0x1223ea88] */
  EDX = (r32((uint32_t)(0x1223ea88)));
  /* 12215698 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1221569b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221569e cmp eax, dword ptr [0x1223ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1223ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122156a4 jne 0x122156a7 */
  if (!C.zf) goto L_122156a7;
  /* 122156a6 int3  */
  x86_unimpl("int3 @ 0x122156a6");
L_122156a7:;
  /* 122156a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122156aa push ecx */
  push32((uint32_t)(ECX));
  /* 122156ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122156ae push edx */
  push32((uint32_t)(EDX));
  /* 122156af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122156b2 push eax */
  push32((uint32_t)(EAX));
  /* 122156b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122156b6 push ecx */
  push32((uint32_t)(ECX));
  /* 122156b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122156ba push edx */
  push32((uint32_t)(EDX));
  /* 122156bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122156be push eax */
  push32((uint32_t)(EAX));
  /* 122156bf push 2 */
  push32((uint32_t)(0x2u));
  /* 122156c1 call dword ptr [0x1223ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1223ec90))), 0x122156c7u);
  /* 122156c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122156ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122156cc jne 0x1221572c */
  if (!C.zf) goto L_1221572c;
  /* 122156ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122156d2 je 0x122156ff */
  if (C.zf) goto L_122156ff;
L_122156d4:;
  /* 122156d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122156d7 push ecx */
  push32((uint32_t)(ECX));
  /* 122156d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122156db push edx */
  push32((uint32_t)(EDX));
  /* 122156dc push 0x1223b8c8 */
  push32((uint32_t)(0x1223b8c8u));
  /* 122156e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122156e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122156e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122156e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122156e9 call 0x122141f0 */
  push32(0x122156eeu); f_122141f0();
  /* 122156ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122156f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122156f4 jne 0x122156f7 */
  if (!C.zf) goto L_122156f7;
  /* 122156f6 int3  */
  x86_unimpl("int3 @ 0x122156f6");
L_122156f7:;
  /* 122156f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122156f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122156fb jne 0x122156d4 */
  if (!C.zf) goto L_122156d4;
  /* 122156fd jmp 0x12215725 */
  goto L_12215725;
L_122156ff:;
  /* 122156ff push 0x1223b8a4 */
  push32((uint32_t)(0x1223b8a4u));
  /* 12215704 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 12215709 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221570b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221570d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221570f push 0 */
  push32((uint32_t)(0x0u));
  /* 12215711 call 0x122141f0 */
  push32(0x12215716u); f_122141f0();
  /* 12215716 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215719 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221571c jne 0x1221571f */
  if (!C.zf) goto L_1221571f;
  /* 1221571e int3  */
  x86_unimpl("int3 @ 0x1221571e");
L_1221571f:;
  /* 1221571f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215723 jne 0x122156ff */
  if (!C.zf) goto L_122156ff;
L_12215725:;
  /* 12215725 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12215727 jmp 0x12215b0a */
  goto L_12215b0a;
L_1221572c:;
  /* 1221572c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215730 jbe 0x1221575e */
  if ((C.cf||C.zf)) goto L_1221575e;
L_12215732:;
  /* 12215732 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215735 push edx */
  push32((uint32_t)(EDX));
  /* 12215736 push 0x1223b874 */
  push32((uint32_t)(0x1223b874u));
  /* 1221573b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221573d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221573f push 0 */
  push32((uint32_t)(0x0u));
  /* 12215741 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215743 call 0x122141f0 */
  push32(0x12215748u); f_122141f0();
  /* 12215748 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221574b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221574e jne 0x12215751 */
  if (!C.zf) goto L_12215751;
  /* 12215750 int3  */
  x86_unimpl("int3 @ 0x12215750");
L_12215751:;
  /* 12215751 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12215753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215755 jne 0x12215732 */
  if (!C.zf) goto L_12215732;
  /* 12215757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12215759 jmp 0x12215b0a */
  goto L_12215b0a;
L_1221575e:;
  /* 1221575e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215762 je 0x122157a6 */
  if (C.zf) goto L_122157a6;
  /* 12215764 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12215767 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221576d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215770 je 0x122157a6 */
  if (C.zf) goto L_122157a6;
  /* 12215772 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12215775 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1221577b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221577e je 0x122157a6 */
  if (C.zf) goto L_122157a6;
L_12215780:;
  /* 12215780 push 0x1223b688 */
  push32((uint32_t)(0x1223b688u));
  /* 12215785 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 1221578a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221578c push 0 */
  push32((uint32_t)(0x0u));
  /* 1221578e push 0 */
  push32((uint32_t)(0x0u));
  /* 12215790 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215792 call 0x122141f0 */
  push32(0x12215797u); f_122141f0();
  /* 12215797 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221579a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221579d jne 0x122157a0 */
  if (!C.zf) goto L_122157a0;
  /* 1221579f int3  */
  x86_unimpl("int3 @ 0x1221579f");
L_122157a0:;
  /* 122157a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122157a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122157a4 jne 0x12215780 */
  if (!C.zf) goto L_12215780;
L_122157a6:;
  /* 122157a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122157a9 push ecx */
  push32((uint32_t)(ECX));
  /* 122157aa call 0x12216730 */
  push32(0x122157afu); f_12216730();
  /* 122157af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122157b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122157b4 jne 0x122157d7 */
  if (!C.zf) goto L_122157d7;
  /* 122157b6 push 0x1223b850 */
  push32((uint32_t)(0x1223b850u));
  /* 122157bb push 0 */
  push32((uint32_t)(0x0u));
  /* 122157bd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 122157c2 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 122157c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122157c9 call 0x122141f0 */
  push32(0x122157ceu); f_122141f0();
  /* 122157ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122157d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122157d4 jne 0x122157d7 */
  if (!C.zf) goto L_122157d7;
  /* 122157d6 int3  */
  x86_unimpl("int3 @ 0x122157d6");
L_122157d7:;
  /* 122157d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122157d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122157db jne 0x122157a6 */
  if (!C.zf) goto L_122157a6;
  /* 122157dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122157e0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122157e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122157e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122157e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122157ed jne 0x122157f6 */
  if (!C.zf) goto L_122157f6;
  /* 122157ef mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_122157f6:;
  /* 122157f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122157fa je 0x1221583a */
  if (C.zf) goto L_1221583a;
L_122157fc:;
  /* 122157fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122157ff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215806 jne 0x12215811 */
  if (!C.zf) goto L_12215811;
  /* 12215808 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221580b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221580f je 0x12215832 */
  if (C.zf) goto L_12215832;
L_12215811:;
  /* 12215811 push 0x1223b808 */
  push32((uint32_t)(0x1223b808u));
  /* 12215816 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215818 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1221581d push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215822 push 2 */
  push32((uint32_t)(0x2u));
  /* 12215824 call 0x122141f0 */
  push32(0x12215829u); f_122141f0();
  /* 12215829 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221582c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221582f jne 0x12215832 */
  if (!C.zf) goto L_12215832;
  /* 12215831 int3  */
  x86_unimpl("int3 @ 0x12215831");
L_12215832:;
  /* 12215832 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215834 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215836 jne 0x122157fc */
  if (!C.zf) goto L_122157fc;
  /* 12215838 jmp 0x1221589e */
  goto L_1221589e;
L_1221583a:;
  /* 1221583a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221583d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12215840 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12215845 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215848 jne 0x1221585f */
  if (!C.zf) goto L_1221585f;
  /* 1221584a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221584d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12215853 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215856 jne 0x1221585f */
  if (!C.zf) goto L_1221585f;
  /* 12215858 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1221585f:;
  /* 1221585f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12215862 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12215865 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221586a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221586d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12215873 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215875 je 0x12215898 */
  if (C.zf) goto L_12215898;
  /* 12215877 push 0x1223b7cc */
  push32((uint32_t)(0x1223b7ccu));
  /* 1221587c push 0 */
  push32((uint32_t)(0x0u));
  /* 1221587e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12215883 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215888 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221588a call 0x122141f0 */
  push32(0x1221588fu); f_122141f0();
  /* 1221588f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215892 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215895 jne 0x12215898 */
  if (!C.zf) goto L_12215898;
  /* 12215897 int3  */
  x86_unimpl("int3 @ 0x12215897");
L_12215898:;
  /* 12215898 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221589a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221589c jne 0x1221585f */
  if (!C.zf) goto L_1221585f;
L_1221589e:;
  /* 1221589e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122158a2 je 0x122158c9 */
  if (C.zf) goto L_122158c9;
  /* 122158a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122158a7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122158aa push eax */
  push32((uint32_t)(EAX));
  /* 122158ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122158ae push ecx */
  push32((uint32_t)(ECX));
  /* 122158af call 0x122190b0 */
  push32(0x122158b4u); f_122190b0();
  /* 122158b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122158b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122158ba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122158be jne 0x122158c7 */
  if (!C.zf) goto L_122158c7;
  /* 122158c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122158c2 jmp 0x12215b0a */
  goto L_12215b0a;
L_122158c7:;
  /* 122158c7 jmp 0x122158ec */
  goto L_122158ec;
L_122158c9:;
  /* 122158c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122158cc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122158cf push edx */
  push32((uint32_t)(EDX));
  /* 122158d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122158d3 push eax */
  push32((uint32_t)(EAX));
  /* 122158d4 call 0x12219000 */
  push32(0x122158d9u); f_12219000();
  /* 122158d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122158dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122158df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122158e3 jne 0x122158ec */
  if (!C.zf) goto L_122158ec;
  /* 122158e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122158e7 jmp 0x12215b0a */
  goto L_12215b0a;
L_122158ec:;
  /* 122158ec mov ecx, dword ptr [0x1223ea88] */
  ECX = (r32((uint32_t)(0x1223ea88)));
  /* 122158f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122158f5 mov dword ptr [0x1223ea88], ecx */
  w32((uint32_t)(0x1223ea88), (ECX));
  /* 122158fb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122158ff jne 0x12215957 */
  if (!C.zf) goto L_12215957;
  /* 12215901 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215904 mov eax, dword ptr [0x12240618] */
  EAX = (r32((uint32_t)(0x12240618)));
  /* 12215909 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221590c mov dword ptr [0x12240618], eax */
  w32((uint32_t)(0x12240618), (EAX));
  /* 12215911 mov ecx, dword ptr [0x12240618] */
  ECX = (r32((uint32_t)(0x12240618)));
  /* 12215917 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221591a mov dword ptr [0x12240618], ecx */
  w32((uint32_t)(0x12240618), (ECX));
  /* 12215920 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215923 mov eax, dword ptr [0x12240620] */
  EAX = (r32((uint32_t)(0x12240620)));
  /* 12215928 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221592b mov dword ptr [0x12240620], eax */
  w32((uint32_t)(0x12240620), (EAX));
  /* 12215930 mov ecx, dword ptr [0x12240620] */
  ECX = (r32((uint32_t)(0x12240620)));
  /* 12215936 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215939 mov dword ptr [0x12240620], ecx */
  w32((uint32_t)(0x12240620), (ECX));
  /* 1221593f mov edx, dword ptr [0x12240620] */
  EDX = (r32((uint32_t)(0x12240620)));
  /* 12215945 cmp edx, dword ptr [0x12240624] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12240624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221594b jbe 0x12215957 */
  if ((C.cf||C.zf)) goto L_12215957;
  /* 1221594d mov eax, dword ptr [0x12240620] */
  EAX = (r32((uint32_t)(0x12240620)));
  /* 12215952 mov dword ptr [0x12240624], eax */
  w32((uint32_t)(0x12240624), (EAX));
L_12215957:;
  /* 12215957 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221595a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221595d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12215960 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215963 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215966 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215969 jbe 0x1221598f */
  if ((C.cf||C.zf)) goto L_1221598f;
  /* 1221596b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221596e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215971 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12215974 push edx */
  push32((uint32_t)(EDX));
  /* 12215975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12215977 mov al, byte ptr [0x1223ea92] */
  AL = (r8((uint32_t)(0x1223ea92)));
  /* 1221597c push eax */
  push32((uint32_t)(EAX));
  /* 1221597d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215980 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215983 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215986 push edx */
  push32((uint32_t)(EDX));
  /* 12215987 call 0x12218ea0 */
  push32(0x1221598cu); f_12218ea0();
  /* 1221598c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221598f:;
  /* 1221598f push 4 */
  push32((uint32_t)(0x4u));
  /* 12215991 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12215993 mov al, byte ptr [0x1223ea90] */
  AL = (r8((uint32_t)(0x1223ea90)));
  /* 12215998 push eax */
  push32((uint32_t)(EAX));
  /* 12215999 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221599c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221599f push ecx */
  push32((uint32_t)(ECX));
  /* 122159a0 call 0x12218ea0 */
  push32(0x122159a5u); f_12218ea0();
  /* 122159a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122159a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122159ac jne 0x122159c9 */
  if (!C.zf) goto L_122159c9;
  /* 122159ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122159b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122159b4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122159b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122159ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122159bd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 122159c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122159c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122159c6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_122159c9:;
  /* 122159c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122159cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122159cf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_122159d2:;
  /* 122159d2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122159d6 jne 0x12215a07 */
  if (!C.zf) goto L_12215a07;
  /* 122159d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122159dc jne 0x122159e6 */
  if (!C.zf) goto L_122159e6;
  /* 122159de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122159e1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122159e4 je 0x12215a07 */
  if (C.zf) goto L_12215a07;
L_122159e6:;
  /* 122159e6 push 0x1223b798 */
  push32((uint32_t)(0x1223b798u));
  /* 122159eb push 0 */
  push32((uint32_t)(0x0u));
  /* 122159ed push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 122159f2 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 122159f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122159f9 call 0x122141f0 */
  push32(0x122159feu); f_122141f0();
  /* 122159fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215a01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215a04 jne 0x12215a07 */
  if (!C.zf) goto L_12215a07;
  /* 12215a06 int3  */
  x86_unimpl("int3 @ 0x12215a06");
L_12215a07:;
  /* 12215a07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12215a09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12215a0b jne 0x122159d2 */
  if (!C.zf) goto L_122159d2;
  /* 12215a0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215a10 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215a13 je 0x12215a1b */
  if (C.zf) goto L_12215a1b;
  /* 12215a15 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215a19 je 0x12215a23 */
  if (C.zf) goto L_12215a23;
L_12215a1b:;
  /* 12215a1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215a1e jmp 0x12215b0a */
  goto L_12215b0a;
L_12215a23:;
  /* 12215a23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215a26 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215a29 je 0x12215a3b */
  if (C.zf) goto L_12215a3b;
  /* 12215a2b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215a2e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12215a30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215a33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12215a36 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12215a39 jmp 0x12215a77 */
  goto L_12215a77;
L_12215a3b:;
  /* 12215a3b mov eax, dword ptr [0x12240614] */
  EAX = (r32((uint32_t)(0x12240614)));
  /* 12215a40 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215a43 je 0x12215a66 */
  if (C.zf) goto L_12215a66;
  /* 12215a45 push 0x1223b77c */
  push32((uint32_t)(0x1223b77cu));
  /* 12215a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12215a4c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12215a51 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215a56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12215a58 call 0x122141f0 */
  push32(0x12215a5du); f_122141f0();
  /* 12215a5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215a60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215a63 jne 0x12215a66 */
  if (!C.zf) goto L_12215a66;
  /* 12215a65 int3  */
  x86_unimpl("int3 @ 0x12215a65");
L_12215a66:;
  /* 12215a66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215a68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215a6a jne 0x12215a3b */
  if (!C.zf) goto L_12215a3b;
  /* 12215a6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215a6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12215a72 mov dword ptr [0x12240614], eax */
  w32((uint32_t)(0x12240614), (EAX));
L_12215a77:;
  /* 12215a77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215a7a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215a7e je 0x12215a8f */
  if (C.zf) goto L_12215a8f;
  /* 12215a80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215a83 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12215a86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215a89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12215a8b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12215a8d jmp 0x12215aca */
  goto L_12215aca;
L_12215a8f:;
  /* 12215a8f mov eax, dword ptr [0x1224061c] */
  EAX = (r32((uint32_t)(0x1224061c)));
  /* 12215a94 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215a97 je 0x12215aba */
  if (C.zf) goto L_12215aba;
  /* 12215a99 push 0x1223b760 */
  push32((uint32_t)(0x1223b760u));
  /* 12215a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12215aa0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12215aa5 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215aaa push 2 */
  push32((uint32_t)(0x2u));
  /* 12215aac call 0x122141f0 */
  push32(0x12215ab1u); f_122141f0();
  /* 12215ab1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215ab4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215ab7 jne 0x12215aba */
  if (!C.zf) goto L_12215aba;
  /* 12215ab9 int3  */
  x86_unimpl("int3 @ 0x12215ab9");
L_12215aba:;
  /* 12215aba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215abc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215abe jne 0x12215a8f */
  if (!C.zf) goto L_12215a8f;
  /* 12215ac0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215ac3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12215ac5 mov dword ptr [0x1224061c], eax */
  w32((uint32_t)(0x1224061c), (EAX));
L_12215aca:;
  /* 12215aca cmp dword ptr [0x1224061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215ad1 je 0x12215ae1 */
  if (C.zf) goto L_12215ae1;
  /* 12215ad3 mov ecx, dword ptr [0x1224061c] */
  ECX = (r32((uint32_t)(0x1224061c)));
  /* 12215ad9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215adc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12215adf jmp 0x12215ae9 */
  goto L_12215ae9;
L_12215ae1:;
  /* 12215ae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215ae4 mov dword ptr [0x12240614], eax */
  w32((uint32_t)(0x12240614), (EAX));
L_12215ae9:;
  /* 12215ae9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215aec mov edx, dword ptr [0x1224061c] */
  EDX = (r32((uint32_t)(0x1224061c)));
  /* 12215af2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12215af4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215af7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12215afe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12215b01 mov dword ptr [0x1224061c], ecx */
  w32((uint32_t)(0x1224061c), (ECX));
  /* 12215b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12215b0a:;
  /* 12215b0a pop edi */
  EDI = (pop32());
  /* 12215b0b pop esi */
  ESI = (pop32());
  /* 12215b0c pop ebx */
  EBX = (pop32());
  /* 12215b0d mov esp, ebp */
  ESP = (EBP);
  /* 12215b0f pop ebp */
  EBP = (pop32());
  /* 12215b10 ret  */
  ESPCHK(0x12215600u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x12215b20 (27 bytes, 13 insns) */
void f_12215b20(void) {
  FTRACE(0x12215b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12215b21 mov ebp, esp */
  EBP = (ESP);
  /* 12215b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215b29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215b2c push eax */
  push32((uint32_t)(EAX));
  /* 12215b2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215b30 push ecx */
  push32((uint32_t)(ECX));
  /* 12215b31 call 0x12215b40 */
  push32(0x12215b36u); f_12215b40();
  /* 12215b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215b39 pop ebp */
  EBP = (pop32());
  /* 12215b3a ret  */
  ESPCHK(0x12215b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b40 @ 0x12215b40 (64 bytes, 27 insns) */
void f_12215b40(void) {
  FTRACE(0x12215b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12215b41 mov ebp, esp */
  EBP = (ESP);
  /* 12215b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12215b44 push 9 */
  push32((uint32_t)(0x9u));
  /* 12215b46 call 0x12218b30 */
  push32(0x12215b4bu); f_12218b30();
  /* 12215b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12215b50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12215b53 push eax */
  push32((uint32_t)(EAX));
  /* 12215b54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12215b57 push ecx */
  push32((uint32_t)(ECX));
  /* 12215b58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12215b5b push edx */
  push32((uint32_t)(EDX));
  /* 12215b5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215b5f push eax */
  push32((uint32_t)(EAX));
  /* 12215b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12215b64 call 0x12215600 */
  push32(0x12215b69u); f_12215600();
  /* 12215b69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215b6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12215b6f push 9 */
  push32((uint32_t)(0x9u));
  /* 12215b71 call 0x12218bd0 */
  push32(0x12215b76u); f_12218bd0();
  /* 12215b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215b79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215b7c mov esp, ebp */
  ESP = (EBP);
  /* 12215b7e pop ebp */
  EBP = (pop32());
  /* 12215b7f ret  */
  ESPCHK(0x12215b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x12215b80 (19 bytes, 9 insns) */
void f_12215b80(void) {
  FTRACE(0x12215b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12215b81 mov ebp, esp */
  EBP = (ESP);
  /* 12215b83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215b85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215b88 push eax */
  push32((uint32_t)(EAX));
  /* 12215b89 call 0x12215bc0 */
  push32(0x12215b8eu); f_12215bc0();
  /* 12215b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215b91 pop ebp */
  EBP = (pop32());
  /* 12215b92 ret  */
  ESPCHK(0x12215b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba0 @ 0x12215ba0 (19 bytes, 9 insns) */
void f_12215ba0(void) {
  FTRACE(0x12215ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12215ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12215ba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215ba5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215ba8 push eax */
  push32((uint32_t)(EAX));
  /* 12215ba9 call 0x12215bf0 */
  push32(0x12215baeu); f_12215bf0();
  /* 12215bae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215bb1 pop ebp */
  EBP = (pop32());
  /* 12215bb2 ret  */
  ESPCHK(0x12215ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bc0 @ 0x12215bc0 (41 bytes, 16 insns) */
void f_12215bc0(void) {
  FTRACE(0x12215bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12215bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12215bc3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12215bc5 call 0x12218b30 */
  push32(0x12215bcau); f_12218b30();
  /* 12215bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215bcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215bd0 push eax */
  push32((uint32_t)(EAX));
  /* 12215bd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12215bd5 call 0x12215bf0 */
  push32(0x12215bdau); f_12215bf0();
  /* 12215bda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215bdd push 9 */
  push32((uint32_t)(0x9u));
  /* 12215bdf call 0x12218bd0 */
  push32(0x12215be4u); f_12218bd0();
  /* 12215be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215be7 pop ebp */
  EBP = (pop32());
  /* 12215be8 ret  */
  ESPCHK(0x12215bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x12215bf0 (1004 bytes, 342 insns) */
void f_12215bf0(void) {
  FTRACE(0x12215bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12215bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12215bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12215bf4 push ebx */
  push32((uint32_t)(EBX));
  /* 12215bf5 push esi */
  push32((uint32_t)(ESI));
  /* 12215bf6 push edi */
  push32((uint32_t)(EDI));
  /* 12215bf7 mov eax, dword ptr [0x1223ea84] */
  EAX = (r32((uint32_t)(0x1223ea84)));
  /* 12215bfc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12215bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215c01 je 0x12215c33 */
  if (C.zf) goto L_12215c33;
L_12215c03:;
  /* 12215c03 call 0x122162d0 */
  push32(0x12215c08u); f_122162d0();
  /* 12215c08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215c0a jne 0x12215c2d */
  if (!C.zf) goto L_12215c2d;
  /* 12215c0c push 0x1223b74c */
  push32((uint32_t)(0x1223b74cu));
  /* 12215c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c13 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12215c18 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215c1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12215c1f call 0x122141f0 */
  push32(0x12215c24u); f_122141f0();
  /* 12215c24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215c27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215c2a jne 0x12215c2d */
  if (!C.zf) goto L_12215c2d;
  /* 12215c2c int3  */
  x86_unimpl("int3 @ 0x12215c2c");
L_12215c2d:;
  /* 12215c2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215c2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215c31 jne 0x12215c03 */
  if (!C.zf) goto L_12215c03;
L_12215c33:;
  /* 12215c33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215c37 jne 0x12215c3e */
  if (!C.zf) goto L_12215c3e;
  /* 12215c39 jmp 0x12215fd5 */
  goto L_12215fd5;
L_12215c3e:;
  /* 12215c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12215c47 push edx */
  push32((uint32_t)(EDX));
  /* 12215c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215c4d push eax */
  push32((uint32_t)(EAX));
  /* 12215c4e push 3 */
  push32((uint32_t)(0x3u));
  /* 12215c50 call dword ptr [0x1223ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1223ec90))), 0x12215c56u);
  /* 12215c56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215c5b jne 0x12215c88 */
  if (!C.zf) goto L_12215c88;
L_12215c5d:;
  /* 12215c5d push 0x1223ba10 */
  push32((uint32_t)(0x1223ba10u));
  /* 12215c62 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 12215c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c6f call 0x122141f0 */
  push32(0x12215c74u); f_122141f0();
  /* 12215c74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215c77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215c7a jne 0x12215c7d */
  if (!C.zf) goto L_12215c7d;
  /* 12215c7c int3  */
  x86_unimpl("int3 @ 0x12215c7c");
L_12215c7d:;
  /* 12215c7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215c7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215c81 jne 0x12215c5d */
  if (!C.zf) goto L_12215c5d;
  /* 12215c83 jmp 0x12215fd5 */
  goto L_12215fd5;
L_12215c88:;
  /* 12215c88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215c8b push edx */
  push32((uint32_t)(EDX));
  /* 12215c8c call 0x12216730 */
  push32(0x12215c91u); f_12216730();
  /* 12215c91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215c96 jne 0x12215cb9 */
  if (!C.zf) goto L_12215cb9;
  /* 12215c98 push 0x1223b850 */
  push32((uint32_t)(0x1223b850u));
  /* 12215c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12215c9f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12215ca4 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215ca9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12215cab call 0x122141f0 */
  push32(0x12215cb0u); f_122141f0();
  /* 12215cb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215cb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215cb6 jne 0x12215cb9 */
  if (!C.zf) goto L_12215cb9;
  /* 12215cb8 int3  */
  x86_unimpl("int3 @ 0x12215cb8");
L_12215cb9:;
  /* 12215cb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12215cbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215cbd jne 0x12215c88 */
  if (!C.zf) goto L_12215c88;
  /* 12215cbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215cc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12215cc5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12215cc8:;
  /* 12215cc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215ccb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12215cce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12215cd3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215cd6 je 0x12215d1b */
  if (C.zf) goto L_12215d1b;
  /* 12215cd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215cdb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215cdf je 0x12215d1b */
  if (C.zf) goto L_12215d1b;
  /* 12215ce1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215ce4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12215ce7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12215cec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215cef je 0x12215d1b */
  if (C.zf) goto L_12215d1b;
  /* 12215cf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215cf4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215cf8 je 0x12215d1b */
  if (C.zf) goto L_12215d1b;
  /* 12215cfa push 0x1223b9e8 */
  push32((uint32_t)(0x1223b9e8u));
  /* 12215cff push 0 */
  push32((uint32_t)(0x0u));
  /* 12215d01 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12215d06 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12215d0d call 0x122141f0 */
  push32(0x12215d12u); f_122141f0();
  /* 12215d12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215d15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215d18 jne 0x12215d1b */
  if (!C.zf) goto L_12215d1b;
  /* 12215d1a int3  */
  x86_unimpl("int3 @ 0x12215d1a");
L_12215d1b:;
  /* 12215d1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12215d1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12215d1f jne 0x12215cc8 */
  if (!C.zf) goto L_12215cc8;
  /* 12215d21 mov eax, dword ptr [0x1223ea84] */
  EAX = (r32((uint32_t)(0x1223ea84)));
  /* 12215d26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12215d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215d2b jne 0x12215df6 */
  if (!C.zf) goto L_12215df6;
  /* 12215d31 push 4 */
  push32((uint32_t)(0x4u));
  /* 12215d33 mov cl, byte ptr [0x1223ea90] */
  CL = (r8((uint32_t)(0x1223ea90)));
  /* 12215d39 push ecx */
  push32((uint32_t)(ECX));
  /* 12215d3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215d3d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215d40 push edx */
  push32((uint32_t)(EDX));
  /* 12215d41 call 0x12216240 */
  push32(0x12215d46u); f_12216240();
  /* 12215d46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215d4b jne 0x12215d90 */
  if (!C.zf) goto L_12215d90;
L_12215d4d:;
  /* 12215d4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215d50 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215d53 push eax */
  push32((uint32_t)(EAX));
  /* 12215d54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215d57 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12215d5a push edx */
  push32((uint32_t)(EDX));
  /* 12215d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215d5e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12215d61 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12215d67 mov edx, dword ptr [ecx*4 + 0x1223ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223ea94)));
  /* 12215d6e push edx */
  push32((uint32_t)(EDX));
  /* 12215d6f push 0x1223b9bc */
  push32((uint32_t)(0x1223b9bcu));
  /* 12215d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215d7a push 1 */
  push32((uint32_t)(0x1u));
  /* 12215d7c call 0x122141f0 */
  push32(0x12215d81u); f_122141f0();
  /* 12215d81 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215d84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215d87 jne 0x12215d8a */
  if (!C.zf) goto L_12215d8a;
  /* 12215d89 int3  */
  x86_unimpl("int3 @ 0x12215d89");
L_12215d8a:;
  /* 12215d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12215d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215d8e jne 0x12215d4d */
  if (!C.zf) goto L_12215d4d;
L_12215d90:;
  /* 12215d90 push 4 */
  push32((uint32_t)(0x4u));
  /* 12215d92 mov cl, byte ptr [0x1223ea90] */
  CL = (r8((uint32_t)(0x1223ea90)));
  /* 12215d98 push ecx */
  push32((uint32_t)(ECX));
  /* 12215d99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215d9c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12215d9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215da2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12215da6 push edx */
  push32((uint32_t)(EDX));
  /* 12215da7 call 0x12216240 */
  push32(0x12215dacu); f_12216240();
  /* 12215dac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215db1 jne 0x12215df6 */
  if (!C.zf) goto L_12215df6;
L_12215db3:;
  /* 12215db3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215db6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215db9 push eax */
  push32((uint32_t)(EAX));
  /* 12215dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215dbd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12215dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12215dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215dc4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12215dc7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12215dcd mov edx, dword ptr [ecx*4 + 0x1223ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223ea94)));
  /* 12215dd4 push edx */
  push32((uint32_t)(EDX));
  /* 12215dd5 push 0x1223b990 */
  push32((uint32_t)(0x1223b990u));
  /* 12215dda push 0 */
  push32((uint32_t)(0x0u));
  /* 12215ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 12215dde push 0 */
  push32((uint32_t)(0x0u));
  /* 12215de0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215de2 call 0x122141f0 */
  push32(0x12215de7u); f_122141f0();
  /* 12215de7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215dea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215ded jne 0x12215df0 */
  if (!C.zf) goto L_12215df0;
  /* 12215def int3  */
  x86_unimpl("int3 @ 0x12215def");
L_12215df0:;
  /* 12215df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12215df2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12215df4 jne 0x12215db3 */
  if (!C.zf) goto L_12215db3;
L_12215df6:;
  /* 12215df6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215df9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215dfd jne 0x12215e6b */
  if (!C.zf) goto L_12215e6b;
L_12215dff:;
  /* 12215dff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215e02 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215e09 jne 0x12215e14 */
  if (!C.zf) goto L_12215e14;
  /* 12215e0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215e0e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215e12 je 0x12215e35 */
  if (C.zf) goto L_12215e35;
L_12215e14:;
  /* 12215e14 push 0x1223b950 */
  push32((uint32_t)(0x1223b950u));
  /* 12215e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215e1b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12215e20 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215e25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12215e27 call 0x122141f0 */
  push32(0x12215e2cu); f_122141f0();
  /* 12215e2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215e2f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215e32 jne 0x12215e35 */
  if (!C.zf) goto L_12215e35;
  /* 12215e34 int3  */
  x86_unimpl("int3 @ 0x12215e34");
L_12215e35:;
  /* 12215e35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215e37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215e39 jne 0x12215dff */
  if (!C.zf) goto L_12215dff;
  /* 12215e3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215e3e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12215e41 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215e44 push eax */
  push32((uint32_t)(EAX));
  /* 12215e45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215e47 mov cl, byte ptr [0x1223ea91] */
  CL = (r8((uint32_t)(0x1223ea91)));
  /* 12215e4d push ecx */
  push32((uint32_t)(ECX));
  /* 12215e4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215e51 push edx */
  push32((uint32_t)(EDX));
  /* 12215e52 call 0x12218ea0 */
  push32(0x12215e57u); f_12218ea0();
  /* 12215e57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215e5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215e5d push eax */
  push32((uint32_t)(EAX));
  /* 12215e5e call 0x122192a0 */
  push32(0x12215e63u); f_122192a0();
  /* 12215e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215e66 jmp 0x12215fd5 */
  goto L_12215fd5;
L_12215e6b:;
  /* 12215e6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215e6e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215e72 jne 0x12215e81 */
  if (!C.zf) goto L_12215e81;
  /* 12215e74 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215e78 jne 0x12215e81 */
  if (!C.zf) goto L_12215e81;
  /* 12215e7a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12215e81:;
  /* 12215e81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215e84 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12215e87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215e8a je 0x12215ead */
  if (C.zf) goto L_12215ead;
  /* 12215e8c push 0x1223b930 */
  push32((uint32_t)(0x1223b930u));
  /* 12215e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215e93 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12215e98 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12215e9f call 0x122141f0 */
  push32(0x12215ea4u); f_122141f0();
  /* 12215ea4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215ea7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215eaa jne 0x12215ead */
  if (!C.zf) goto L_12215ead;
  /* 12215eac int3  */
  x86_unimpl("int3 @ 0x12215eac");
L_12215ead:;
  /* 12215ead xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215eaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215eb1 jne 0x12215e81 */
  if (!C.zf) goto L_12215e81;
  /* 12215eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215eb6 mov eax, dword ptr [0x12240620] */
  EAX = (r32((uint32_t)(0x12240620)));
  /* 12215ebb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12215ebe mov dword ptr [0x12240620], eax */
  w32((uint32_t)(0x12240620), (EAX));
  /* 12215ec3 mov ecx, dword ptr [0x1223ea84] */
  ECX = (r32((uint32_t)(0x1223ea84)));
  /* 12215ec9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12215ecc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12215ece jne 0x12215fac */
  if (!C.zf) goto L_12215fac;
  /* 12215ed4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215ed7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215eda je 0x12215eec */
  if (C.zf) goto L_12215eec;
  /* 12215edc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215edf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12215ee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215ee4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12215ee7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12215eea jmp 0x12215f2a */
  goto L_12215f2a;
L_12215eec:;
  /* 12215eec mov ecx, dword ptr [0x12240614] */
  ECX = (r32((uint32_t)(0x12240614)));
  /* 12215ef2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215ef5 je 0x12215f18 */
  if (C.zf) goto L_12215f18;
  /* 12215ef7 push 0x1223b918 */
  push32((uint32_t)(0x1223b918u));
  /* 12215efc push 0 */
  push32((uint32_t)(0x0u));
  /* 12215efe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12215f03 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215f08 push 2 */
  push32((uint32_t)(0x2u));
  /* 12215f0a call 0x122141f0 */
  push32(0x12215f0fu); f_122141f0();
  /* 12215f0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215f12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215f15 jne 0x12215f18 */
  if (!C.zf) goto L_12215f18;
  /* 12215f17 int3  */
  x86_unimpl("int3 @ 0x12215f17");
L_12215f18:;
  /* 12215f18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12215f1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12215f1c jne 0x12215eec */
  if (!C.zf) goto L_12215eec;
  /* 12215f1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215f21 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12215f24 mov dword ptr [0x12240614], ecx */
  w32((uint32_t)(0x12240614), (ECX));
L_12215f2a:;
  /* 12215f2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215f2d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215f31 je 0x12215f42 */
  if (C.zf) goto L_12215f42;
  /* 12215f33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215f36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12215f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215f3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12215f3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12215f40 jmp 0x12215f7f */
  goto L_12215f7f;
L_12215f42:;
  /* 12215f42 mov ecx, dword ptr [0x1224061c] */
  ECX = (r32((uint32_t)(0x1224061c)));
  /* 12215f48 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215f4b je 0x12215f6e */
  if (C.zf) goto L_12215f6e;
  /* 12215f4d push 0x1223b900 */
  push32((uint32_t)(0x1223b900u));
  /* 12215f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12215f54 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12215f59 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12215f5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12215f60 call 0x122141f0 */
  push32(0x12215f65u); f_122141f0();
  /* 12215f65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215f68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12215f6b jne 0x12215f6e */
  if (!C.zf) goto L_12215f6e;
  /* 12215f6d int3  */
  x86_unimpl("int3 @ 0x12215f6d");
L_12215f6e:;
  /* 12215f6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12215f70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12215f72 jne 0x12215f42 */
  if (!C.zf) goto L_12215f42;
  /* 12215f74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215f77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12215f79 mov dword ptr [0x1224061c], ecx */
  w32((uint32_t)(0x1224061c), (ECX));
L_12215f7f:;
  /* 12215f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215f82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12215f85 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215f88 push eax */
  push32((uint32_t)(EAX));
  /* 12215f89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215f8b mov cl, byte ptr [0x1223ea91] */
  CL = (r8((uint32_t)(0x1223ea91)));
  /* 12215f91 push ecx */
  push32((uint32_t)(ECX));
  /* 12215f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215f95 push edx */
  push32((uint32_t)(EDX));
  /* 12215f96 call 0x12218ea0 */
  push32(0x12215f9bu); f_12218ea0();
  /* 12215f9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215fa1 push eax */
  push32((uint32_t)(EAX));
  /* 12215fa2 call 0x122192a0 */
  push32(0x12215fa7u); f_122192a0();
  /* 12215fa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215faa jmp 0x12215fd5 */
  goto L_12215fd5;
L_12215fac:;
  /* 12215fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215faf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12215fb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215fb9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12215fbc push eax */
  push32((uint32_t)(EAX));
  /* 12215fbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12215fbf mov cl, byte ptr [0x1223ea91] */
  CL = (r8((uint32_t)(0x1223ea91)));
  /* 12215fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12215fc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12215fc9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12215fcc push edx */
  push32((uint32_t)(EDX));
  /* 12215fcd call 0x12218ea0 */
  push32(0x12215fd2u); f_12218ea0();
  /* 12215fd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12215fd5:;
  /* 12215fd5 pop edi */
  EDI = (pop32());
  /* 12215fd6 pop esi */
  ESI = (pop32());
  /* 12215fd7 pop ebx */
  EBX = (pop32());
  /* 12215fd8 mov esp, ebp */
  ESP = (EBP);
  /* 12215fda pop ebp */
  EBP = (pop32());
  /* 12215fdb ret  */
  ESPCHK(0x12215bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x12215fe0 (19 bytes, 9 insns) */
void f_12215fe0(void) {
  FTRACE(0x12215fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12215fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12215fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12215fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12215fe5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12215fe8 push eax */
  push32((uint32_t)(EAX));
  /* 12215fe9 call 0x12216000 */
  push32(0x12215feeu); f_12216000();
  /* 12215fee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12215ff1 pop ebp */
  EBP = (pop32());
  /* 12215ff2 ret  */
  ESPCHK(0x12215fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x12216000 (342 bytes, 119 insns) */
void f_12216000(void) {
  FTRACE(0x12216000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216000 push ebp */
  push32((uint32_t)(EBP));
  /* 12216001 mov ebp, esp */
  EBP = (ESP);
  /* 12216003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216006 push ebx */
  push32((uint32_t)(EBX));
  /* 12216007 push esi */
  push32((uint32_t)(ESI));
  /* 12216008 push edi */
  push32((uint32_t)(EDI));
  /* 12216009 mov eax, dword ptr [0x1223ea84] */
  EAX = (r32((uint32_t)(0x1223ea84)));
  /* 1221600e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12216011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216013 je 0x12216045 */
  if (C.zf) goto L_12216045;
L_12216015:;
  /* 12216015 call 0x122162d0 */
  push32(0x1221601au); f_122162d0();
  /* 1221601a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221601c jne 0x1221603f */
  if (!C.zf) goto L_1221603f;
  /* 1221601e push 0x1223b74c */
  push32((uint32_t)(0x1223b74cu));
  /* 12216023 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216025 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1221602a push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 1221602f push 2 */
  push32((uint32_t)(0x2u));
  /* 12216031 call 0x122141f0 */
  push32(0x12216036u); f_122141f0();
  /* 12216036 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216039 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221603c jne 0x1221603f */
  if (!C.zf) goto L_1221603f;
  /* 1221603e int3  */
  x86_unimpl("int3 @ 0x1221603e");
L_1221603f:;
  /* 1221603f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12216041 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216043 jne 0x12216015 */
  if (!C.zf) goto L_12216015;
L_12216045:;
  /* 12216045 push 9 */
  push32((uint32_t)(0x9u));
  /* 12216047 call 0x12218b30 */
  push32(0x1221604cu); f_12218b30();
  /* 1221604c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221604f:;
  /* 1221604f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216052 push edx */
  push32((uint32_t)(EDX));
  /* 12216053 call 0x12216730 */
  push32(0x12216058u); f_12216730();
  /* 12216058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221605d jne 0x12216080 */
  if (!C.zf) goto L_12216080;
  /* 1221605f push 0x1223b850 */
  push32((uint32_t)(0x1223b850u));
  /* 12216064 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216066 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1221606b push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12216070 push 2 */
  push32((uint32_t)(0x2u));
  /* 12216072 call 0x122141f0 */
  push32(0x12216077u); f_122141f0();
  /* 12216077 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221607a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221607d jne 0x12216080 */
  if (!C.zf) goto L_12216080;
  /* 1221607f int3  */
  x86_unimpl("int3 @ 0x1221607f");
L_12216080:;
  /* 12216080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216084 jne 0x1221604f */
  if (!C.zf) goto L_1221604f;
  /* 12216086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216089 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221608c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1221608f:;
  /* 1221608f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216092 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12216095 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221609a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221609d je 0x122160e2 */
  if (C.zf) goto L_122160e2;
  /* 1221609f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122160a2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122160a6 je 0x122160e2 */
  if (C.zf) goto L_122160e2;
  /* 122160a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122160ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122160ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122160b3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122160b6 je 0x122160e2 */
  if (C.zf) goto L_122160e2;
  /* 122160b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122160bb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122160bf je 0x122160e2 */
  if (C.zf) goto L_122160e2;
  /* 122160c1 push 0x1223b9e8 */
  push32((uint32_t)(0x1223b9e8u));
  /* 122160c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122160c8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 122160cd push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 122160d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 122160d4 call 0x122141f0 */
  push32(0x122160d9u); f_122141f0();
  /* 122160d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122160dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122160df jne 0x122160e2 */
  if (!C.zf) goto L_122160e2;
  /* 122160e1 int3  */
  x86_unimpl("int3 @ 0x122160e1");
L_122160e2:;
  /* 122160e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122160e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122160e6 jne 0x1221608f */
  if (!C.zf) goto L_1221608f;
  /* 122160e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122160eb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122160ef jne 0x122160fe */
  if (!C.zf) goto L_122160fe;
  /* 122160f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122160f5 jne 0x122160fe */
  if (!C.zf) goto L_122160fe;
  /* 122160f7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_122160fe:;
  /* 122160fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216101 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216105 je 0x12216139 */
  if (C.zf) goto L_12216139;
L_12216107:;
  /* 12216107 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221610a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1221610d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216110 je 0x12216133 */
  if (C.zf) goto L_12216133;
  /* 12216112 push 0x1223b930 */
  push32((uint32_t)(0x1223b930u));
  /* 12216117 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216119 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1221611e push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 12216123 push 2 */
  push32((uint32_t)(0x2u));
  /* 12216125 call 0x122141f0 */
  push32(0x1221612au); f_122141f0();
  /* 1221612a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221612d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216130 jne 0x12216133 */
  if (!C.zf) goto L_12216133;
  /* 12216132 int3  */
  x86_unimpl("int3 @ 0x12216132");
L_12216133:;
  /* 12216133 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12216135 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216137 jne 0x12216107 */
  if (!C.zf) goto L_12216107;
L_12216139:;
  /* 12216139 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221613c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1221613f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12216142 push 9 */
  push32((uint32_t)(0x9u));
  /* 12216144 call 0x12218bd0 */
  push32(0x12216149u); f_12218bd0();
  /* 12216149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221614c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221614f pop edi */
  EDI = (pop32());
  /* 12216150 pop esi */
  ESI = (pop32());
  /* 12216151 pop ebx */
  EBX = (pop32());
  /* 12216152 mov esp, ebp */
  ESP = (EBP);
  /* 12216154 pop ebp */
  EBP = (pop32());
  /* 12216155 ret  */
  ESPCHK(0x12216000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006160 @ 0x12216160 (28 bytes, 11 insns) */
void f_12216160(void) {
  FTRACE(0x12216160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216160 push ebp */
  push32((uint32_t)(EBP));
  /* 12216161 mov ebp, esp */
  EBP = (ESP);
  /* 12216163 push ecx */
  push32((uint32_t)(ECX));
  /* 12216164 mov eax, dword ptr [0x1223ea8c] */
  EAX = (r32((uint32_t)(0x1223ea8c)));
  /* 12216169 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221616c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221616f mov dword ptr [0x1223ea8c], ecx */
  w32((uint32_t)(0x1223ea8c), (ECX));
  /* 12216175 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216178 mov esp, ebp */
  ESP = (EBP);
  /* 1221617a pop ebp */
  EBP = (pop32());
  /* 1221617b ret  */
  ESPCHK(0x12216160u, _esp0);
  ESP += 4; return;
}

/* FUN_10006180 @ 0x12216180 (157 bytes, 59 insns) */
void f_12216180(void) {
  FTRACE(0x12216180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216180 push ebp */
  push32((uint32_t)(EBP));
  /* 12216181 mov ebp, esp */
  EBP = (ESP);
  /* 12216183 push ecx */
  push32((uint32_t)(ECX));
  /* 12216184 push ebx */
  push32((uint32_t)(EBX));
  /* 12216185 push esi */
  push32((uint32_t)(ESI));
  /* 12216186 push edi */
  push32((uint32_t)(EDI));
  /* 12216187 push 9 */
  push32((uint32_t)(0x9u));
  /* 12216189 call 0x12218b30 */
  push32(0x1221618eu); f_12218b30();
  /* 1221618e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216194 push eax */
  push32((uint32_t)(EAX));
  /* 12216195 call 0x12216730 */
  push32(0x1221619au); f_12216730();
  /* 1221619a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221619d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221619f je 0x1221620c */
  if (C.zf) goto L_1221620c;
  /* 122161a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122161a4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122161a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122161aa:;
  /* 122161aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122161ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122161b0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122161b5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122161b8 je 0x122161fd */
  if (C.zf) goto L_122161fd;
  /* 122161ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122161bd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122161c1 je 0x122161fd */
  if (C.zf) goto L_122161fd;
  /* 122161c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122161c6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122161c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122161ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122161d1 je 0x122161fd */
  if (C.zf) goto L_122161fd;
  /* 122161d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122161d6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122161da je 0x122161fd */
  if (C.zf) goto L_122161fd;
  /* 122161dc push 0x1223b9e8 */
  push32((uint32_t)(0x1223b9e8u));
  /* 122161e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122161e3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 122161e8 push 0x1223b740 */
  push32((uint32_t)(0x1223b740u));
  /* 122161ed push 2 */
  push32((uint32_t)(0x2u));
  /* 122161ef call 0x122141f0 */
  push32(0x122161f4u); f_122141f0();
  /* 122161f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122161f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122161fa jne 0x122161fd */
  if (!C.zf) goto L_122161fd;
  /* 122161fc int3  */
  x86_unimpl("int3 @ 0x122161fc");
L_122161fd:;
  /* 122161fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122161ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12216201 jne 0x122161aa */
  if (!C.zf) goto L_122161aa;
  /* 12216203 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216206 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12216209 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1221620c:;
  /* 1221620c push 9 */
  push32((uint32_t)(0x9u));
  /* 1221620e call 0x12218bd0 */
  push32(0x12216213u); f_12218bd0();
  /* 12216213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216216 pop edi */
  EDI = (pop32());
  /* 12216217 pop esi */
  ESI = (pop32());
  /* 12216218 pop ebx */
  EBX = (pop32());
  /* 12216219 mov esp, ebp */
  ESP = (EBP);
  /* 1221621b pop ebp */
  EBP = (pop32());
  /* 1221621c ret  */
  ESPCHK(0x12216180u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x12216220 (28 bytes, 11 insns) */
void f_12216220(void) {
  FTRACE(0x12216220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216220 push ebp */
  push32((uint32_t)(EBP));
  /* 12216221 mov ebp, esp */
  EBP = (ESP);
  /* 12216223 push ecx */
  push32((uint32_t)(ECX));
  /* 12216224 mov eax, dword ptr [0x1223ec90] */
  EAX = (r32((uint32_t)(0x1223ec90)));
  /* 12216229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221622c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221622f mov dword ptr [0x1223ec90], ecx */
  w32((uint32_t)(0x1223ec90), (ECX));
  /* 12216235 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216238 mov esp, ebp */
  ESP = (EBP);
  /* 1221623a pop ebp */
  EBP = (pop32());
  /* 1221623b ret  */
  ESPCHK(0x12216220u, _esp0);
  ESP += 4; return;
}

/* FUN_10006240 @ 0x12216240 (136 bytes, 55 insns) */
void f_12216240(void) {
  FTRACE(0x12216240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216240 push ebp */
  push32((uint32_t)(EBP));
  /* 12216241 mov ebp, esp */
  EBP = (ESP);
  /* 12216243 push ecx */
  push32((uint32_t)(ECX));
  /* 12216244 push ebx */
  push32((uint32_t)(EBX));
  /* 12216245 push esi */
  push32((uint32_t)(ESI));
  /* 12216246 push edi */
  push32((uint32_t)(EDI));
  /* 12216247 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1221624e:;
  /* 1221624e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12216251 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12216254 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216257 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1221625a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221625c je 0x122162be */
  if (C.zf) goto L_122162be;
  /* 1221625e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216261 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216263 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12216265 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12216268 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221626e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216271 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216274 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12216277 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216279 je 0x122162bc */
  if (C.zf) goto L_122162bc;
L_1221627b:;
  /* 1221627b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221627e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12216283 push eax */
  push32((uint32_t)(EAX));
  /* 12216284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216287 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12216289 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1221628c push edx */
  push32((uint32_t)(EDX));
  /* 1221628d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216290 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216293 push eax */
  push32((uint32_t)(EAX));
  /* 12216294 push 0x1223ba2c */
  push32((uint32_t)(0x1223ba2cu));
  /* 12216299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221629b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221629d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221629f push 0 */
  push32((uint32_t)(0x0u));
  /* 122162a1 call 0x122141f0 */
  push32(0x122162a6u); f_122141f0();
  /* 122162a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122162a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122162ac jne 0x122162af */
  if (!C.zf) goto L_122162af;
  /* 122162ae int3  */
  x86_unimpl("int3 @ 0x122162ae");
L_122162af:;
  /* 122162af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122162b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122162b3 jne 0x1221627b */
  if (!C.zf) goto L_1221627b;
  /* 122162b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122162bc:;
  /* 122162bc jmp 0x1221624e */
  goto L_1221624e;
L_122162be:;
  /* 122162be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122162c1 pop edi */
  EDI = (pop32());
  /* 122162c2 pop esi */
  ESI = (pop32());
  /* 122162c3 pop ebx */
  EBX = (pop32());
  /* 122162c4 mov esp, ebp */
  ESP = (EBP);
  /* 122162c6 pop ebp */
  EBP = (pop32());
  /* 122162c7 ret  */
  ESPCHK(0x12216240u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x122162d0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_122162d0(void) {
  FTRACE(0x122162d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122162d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122162d1 mov ebp, esp */
  EBP = (ESP);
  /* 122162d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122162d6 push ebx */
  push32((uint32_t)(EBX));
  /* 122162d7 push esi */
  push32((uint32_t)(ESI));
  /* 122162d8 push edi */
  push32((uint32_t)(EDI));
  /* 122162d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122162e0 mov eax, dword ptr [0x1223ea84] */
  EAX = (r32((uint32_t)(0x1223ea84)));
  /* 122162e5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 122162e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122162ea jne 0x122162f6 */
  if (!C.zf) goto L_122162f6;
  /* 122162ec mov eax, 1 */
  EAX = (0x1u);
  /* 122162f1 jmp 0x12216628 */
  goto L_12216628;
L_122162f6:;
  /* 122162f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 122162f8 call 0x12218b30 */
  push32(0x122162fdu); f_12218b30();
  /* 122162fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216300 call 0x12219310 */
  push32(0x12216305u); f_12219310();
  /* 12216305 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12216308 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221630c je 0x12216419 */
  if (C.zf) goto L_12216419;
  /* 12216312 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216316 je 0x12216419 */
  if (C.zf) goto L_12216419;
  /* 1221631c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221631f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12216322 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12216325 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216328 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1221632b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221632f ja 0x122163e2 */
  if ((!C.cf&&!C.zf)) goto L_122163e2;
  /* 12216335 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12216338 jmp dword ptr [eax*4 + 0x1221662f] */
  switch (EAX) {
    case 0: goto L_122163ba;
    case 1: goto L_12216392;
    case 2: goto L_1221636a;
    case 3: goto L_1221633f;
    default: x86_unimpl("switch@0x12216338 out of table"); return;
  }
L_1221633f:;
  /* 1221633f push 0x1223bb80 */
  push32((uint32_t)(0x1223bb80u));
  /* 12216344 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 12216349 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221634b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221634d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221634f push 0 */
  push32((uint32_t)(0x0u));
  /* 12216351 call 0x122141f0 */
  push32(0x12216356u); f_122141f0();
  /* 12216356 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216359 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221635c jne 0x1221635f */
  if (!C.zf) goto L_1221635f;
  /* 1221635e int3  */
  x86_unimpl("int3 @ 0x1221635e");
L_1221635f:;
  /* 1221635f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12216361 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216363 jne 0x1221633f */
  if (!C.zf) goto L_1221633f;
  /* 12216365 jmp 0x12216408 */
  goto L_12216408;
L_1221636a:;
  /* 1221636a push 0x1223bb5c */
  push32((uint32_t)(0x1223bb5cu));
  /* 1221636f push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 12216374 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216376 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221637a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221637c call 0x122141f0 */
  push32(0x12216381u); f_122141f0();
  /* 12216381 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216384 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216387 jne 0x1221638a */
  if (!C.zf) goto L_1221638a;
  /* 12216389 int3  */
  x86_unimpl("int3 @ 0x12216389");
L_1221638a:;
  /* 1221638a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221638c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221638e jne 0x1221636a */
  if (!C.zf) goto L_1221636a;
  /* 12216390 jmp 0x12216408 */
  goto L_12216408;
L_12216392:;
  /* 12216392 push 0x1223bb38 */
  push32((uint32_t)(0x1223bb38u));
  /* 12216397 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 1221639c push 0 */
  push32((uint32_t)(0x0u));
  /* 1221639e push 0 */
  push32((uint32_t)(0x0u));
  /* 122163a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122163a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122163a4 call 0x122141f0 */
  push32(0x122163a9u); f_122141f0();
  /* 122163a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122163ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122163af jne 0x122163b2 */
  if (!C.zf) goto L_122163b2;
  /* 122163b1 int3  */
  x86_unimpl("int3 @ 0x122163b1");
L_122163b2:;
  /* 122163b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122163b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122163b6 jne 0x12216392 */
  if (!C.zf) goto L_12216392;
  /* 122163b8 jmp 0x12216408 */
  goto L_12216408;
L_122163ba:;
  /* 122163ba push 0x1223bb14 */
  push32((uint32_t)(0x1223bb14u));
  /* 122163bf push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 122163c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122163c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122163c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122163ca push 0 */
  push32((uint32_t)(0x0u));
  /* 122163cc call 0x122141f0 */
  push32(0x122163d1u); f_122141f0();
  /* 122163d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122163d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122163d7 jne 0x122163da */
  if (!C.zf) goto L_122163da;
  /* 122163d9 int3  */
  x86_unimpl("int3 @ 0x122163d9");
L_122163da:;
  /* 122163da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122163dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122163de jne 0x122163ba */
  if (!C.zf) goto L_122163ba;
  /* 122163e0 jmp 0x12216408 */
  goto L_12216408;
L_122163e2:;
  /* 122163e2 push 0x1223bae8 */
  push32((uint32_t)(0x1223bae8u));
  /* 122163e7 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 122163ec push 0 */
  push32((uint32_t)(0x0u));
  /* 122163ee push 0 */
  push32((uint32_t)(0x0u));
  /* 122163f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122163f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122163f4 call 0x122141f0 */
  push32(0x122163f9u); f_122141f0();
  /* 122163f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122163fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122163ff jne 0x12216402 */
  if (!C.zf) goto L_12216402;
  /* 12216401 int3  */
  x86_unimpl("int3 @ 0x12216401");
L_12216402:;
  /* 12216402 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12216404 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12216406 jne 0x122163e2 */
  if (!C.zf) goto L_122163e2;
L_12216408:;
  /* 12216408 push 9 */
  push32((uint32_t)(0x9u));
  /* 1221640a call 0x12218bd0 */
  push32(0x1221640fu); f_12218bd0();
  /* 1221640f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216412 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216414 jmp 0x12216628 */
  goto L_12216628;
L_12216419:;
  /* 12216419 mov eax, dword ptr [0x1224061c] */
  EAX = (r32((uint32_t)(0x1224061c)));
  /* 1221641e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12216421 jmp 0x1221642b */
  goto L_1221642b;
L_12216423:;
  /* 12216423 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216426 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12216428 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1221642b:;
  /* 1221642b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221642f je 0x1221661b */
  if (C.zf) goto L_1221661b;
  /* 12216435 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1221643c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221643f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12216442 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12216448 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221644b je 0x12216470 */
  if (C.zf) goto L_12216470;
  /* 1221644d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216450 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216454 je 0x12216470 */
  if (C.zf) goto L_12216470;
  /* 12216456 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216459 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1221645c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12216462 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216465 je 0x12216470 */
  if (C.zf) goto L_12216470;
  /* 12216467 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221646a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221646e jne 0x12216488 */
  if (!C.zf) goto L_12216488;
L_12216470:;
  /* 12216470 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216473 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12216476 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221647c mov edx, dword ptr [ecx*4 + 0x1223ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223ea94)));
  /* 12216483 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12216486 jmp 0x1221648f */
  goto L_1221648f;
L_12216488:;
  /* 12216488 mov dword ptr [ebp - 0x14], 0x1223bae0 */
  w32((uint32_t)(EBP + -0x14), (0x1223bae0u));
L_1221648f:;
  /* 1221648f push 4 */
  push32((uint32_t)(0x4u));
  /* 12216491 mov al, byte ptr [0x1223ea90] */
  AL = (r8((uint32_t)(0x1223ea90)));
  /* 12216496 push eax */
  push32((uint32_t)(EAX));
  /* 12216497 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221649a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221649d push ecx */
  push32((uint32_t)(ECX));
  /* 1221649e call 0x12216240 */
  push32(0x122164a3u); f_12216240();
  /* 122164a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122164a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122164a8 jne 0x122164e4 */
  if (!C.zf) goto L_122164e4;
L_122164aa:;
  /* 122164aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122164ad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122164b0 push edx */
  push32((uint32_t)(EDX));
  /* 122164b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122164b4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 122164b7 push ecx */
  push32((uint32_t)(ECX));
  /* 122164b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122164bb push edx */
  push32((uint32_t)(EDX));
  /* 122164bc push 0x1223b9bc */
  push32((uint32_t)(0x1223b9bcu));
  /* 122164c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122164c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122164c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122164c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122164c9 call 0x122141f0 */
  push32(0x122164ceu); f_122141f0();
  /* 122164ce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122164d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122164d4 jne 0x122164d7 */
  if (!C.zf) goto L_122164d7;
  /* 122164d6 int3  */
  x86_unimpl("int3 @ 0x122164d6");
L_122164d7:;
  /* 122164d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122164d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122164db jne 0x122164aa */
  if (!C.zf) goto L_122164aa;
  /* 122164dd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_122164e4:;
  /* 122164e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 122164e6 mov cl, byte ptr [0x1223ea90] */
  CL = (r8((uint32_t)(0x1223ea90)));
  /* 122164ec push ecx */
  push32((uint32_t)(ECX));
  /* 122164ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122164f0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122164f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122164f6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 122164fa push edx */
  push32((uint32_t)(EDX));
  /* 122164fb call 0x12216240 */
  push32(0x12216500u); f_12216240();
  /* 12216500 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216505 jne 0x12216541 */
  if (!C.zf) goto L_12216541;
L_12216507:;
  /* 12216507 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221650a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221650d push eax */
  push32((uint32_t)(EAX));
  /* 1221650e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216511 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12216514 push edx */
  push32((uint32_t)(EDX));
  /* 12216515 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12216518 push eax */
  push32((uint32_t)(EAX));
  /* 12216519 push 0x1223b990 */
  push32((uint32_t)(0x1223b990u));
  /* 1221651e push 0 */
  push32((uint32_t)(0x0u));
  /* 12216520 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216522 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216524 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216526 call 0x122141f0 */
  push32(0x1221652bu); f_122141f0();
  /* 1221652b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221652e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216531 jne 0x12216534 */
  if (!C.zf) goto L_12216534;
  /* 12216533 int3  */
  x86_unimpl("int3 @ 0x12216533");
L_12216534:;
  /* 12216534 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12216536 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216538 jne 0x12216507 */
  if (!C.zf) goto L_12216507;
  /* 1221653a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12216541:;
  /* 12216541 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216544 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216548 jne 0x1221659a */
  if (!C.zf) goto L_1221659a;
  /* 1221654a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221654d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12216550 push ecx */
  push32((uint32_t)(ECX));
  /* 12216551 mov dl, byte ptr [0x1223ea91] */
  DL = (r8((uint32_t)(0x1223ea91)));
  /* 12216557 push edx */
  push32((uint32_t)(EDX));
  /* 12216558 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221655b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221655e push eax */
  push32((uint32_t)(EAX));
  /* 1221655f call 0x12216240 */
  push32(0x12216564u); f_12216240();
  /* 12216564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216569 jne 0x1221659a */
  if (!C.zf) goto L_1221659a;
L_1221656b:;
  /* 1221656b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221656e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216571 push ecx */
  push32((uint32_t)(ECX));
  /* 12216572 push 0x1223bab4 */
  push32((uint32_t)(0x1223bab4u));
  /* 12216577 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221657b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221657d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221657f call 0x122141f0 */
  push32(0x12216584u); f_122141f0();
  /* 12216584 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216587 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221658a jne 0x1221658d */
  if (!C.zf) goto L_1221658d;
  /* 1221658c int3  */
  x86_unimpl("int3 @ 0x1221658c");
L_1221658d:;
  /* 1221658d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221658f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12216591 jne 0x1221656b */
  if (!C.zf) goto L_1221656b;
  /* 12216593 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1221659a:;
  /* 1221659a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221659e jne 0x12216616 */
  if (!C.zf) goto L_12216616;
  /* 122165a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122165a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122165a7 je 0x122165dc */
  if (C.zf) goto L_122165dc;
L_122165a9:;
  /* 122165a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122165ac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122165af push edx */
  push32((uint32_t)(EDX));
  /* 122165b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122165b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122165b6 push ecx */
  push32((uint32_t)(ECX));
  /* 122165b7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122165ba push edx */
  push32((uint32_t)(EDX));
  /* 122165bb push 0x1223ba94 */
  push32((uint32_t)(0x1223ba94u));
  /* 122165c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122165c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122165c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122165c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122165c8 call 0x122141f0 */
  push32(0x122165cdu); f_122141f0();
  /* 122165cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122165d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122165d3 jne 0x122165d6 */
  if (!C.zf) goto L_122165d6;
  /* 122165d5 int3  */
  x86_unimpl("int3 @ 0x122165d5");
L_122165d6:;
  /* 122165d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122165d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122165da jne 0x122165a9 */
  if (!C.zf) goto L_122165a9;
L_122165dc:;
  /* 122165dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122165df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 122165e2 push edx */
  push32((uint32_t)(EDX));
  /* 122165e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122165e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122165e9 push eax */
  push32((uint32_t)(EAX));
  /* 122165ea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122165ed push ecx */
  push32((uint32_t)(ECX));
  /* 122165ee push 0x1223ba68 */
  push32((uint32_t)(0x1223ba68u));
  /* 122165f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122165f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122165f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122165f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122165fb call 0x122141f0 */
  push32(0x12216600u); f_122141f0();
  /* 12216600 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216603 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216606 jne 0x12216609 */
  if (!C.zf) goto L_12216609;
  /* 12216608 int3  */
  x86_unimpl("int3 @ 0x12216608");
L_12216609:;
  /* 12216609 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221660b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221660d jne 0x122165dc */
  if (!C.zf) goto L_122165dc;
  /* 1221660f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12216616:;
  /* 12216616 jmp 0x12216423 */
  goto L_12216423;
L_1221661b:;
  /* 1221661b push 9 */
  push32((uint32_t)(0x9u));
  /* 1221661d call 0x12218bd0 */
  push32(0x12216622u); f_12218bd0();
  /* 12216622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12216628:;
  /* 12216628 pop edi */
  EDI = (pop32());
  /* 12216629 pop esi */
  ESI = (pop32());
  /* 1221662a pop ebx */
  EBX = (pop32());
  /* 1221662b mov esp, ebp */
  ESP = (EBP);
  /* 1221662d pop ebp */
  EBP = (pop32());
  /* 1221662e ret  */
  ESPCHK(0x122162d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x12216640 (34 bytes, 13 insns) */
void f_12216640(void) {
  FTRACE(0x12216640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216640 push ebp */
  push32((uint32_t)(EBP));
  /* 12216641 mov ebp, esp */
  EBP = (ESP);
  /* 12216643 push ecx */
  push32((uint32_t)(ECX));
  /* 12216644 mov eax, dword ptr [0x1223ea84] */
  EAX = (r32((uint32_t)(0x1223ea84)));
  /* 12216649 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221664c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216650 je 0x1221665b */
  if (C.zf) goto L_1221665b;
  /* 12216652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216655 mov dword ptr [0x1223ea84], ecx */
  w32((uint32_t)(0x1223ea84), (ECX));
L_1221665b:;
  /* 1221665b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221665e mov esp, ebp */
  ESP = (EBP);
  /* 12216660 pop ebp */
  EBP = (pop32());
  /* 12216661 ret  */
  ESPCHK(0x12216640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x12216670 (103 bytes, 38 insns) */
void f_12216670(void) {
  FTRACE(0x12216670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216670 push ebp */
  push32((uint32_t)(EBP));
  /* 12216671 mov ebp, esp */
  EBP = (ESP);
  /* 12216673 push ecx */
  push32((uint32_t)(ECX));
  /* 12216674 mov eax, dword ptr [0x1223ea84] */
  EAX = (r32((uint32_t)(0x1223ea84)));
  /* 12216679 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1221667c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221667e jne 0x12216682 */
  if (!C.zf) goto L_12216682;
  /* 12216680 jmp 0x122166d3 */
  goto L_122166d3;
L_12216682:;
  /* 12216682 push 9 */
  push32((uint32_t)(0x9u));
  /* 12216684 call 0x12218b30 */
  push32(0x12216689u); f_12218b30();
  /* 12216689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221668c mov ecx, dword ptr [0x1224061c] */
  ECX = (r32((uint32_t)(0x1224061c)));
  /* 12216692 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12216695 jmp 0x1221669f */
  goto L_1221669f;
L_12216697:;
  /* 12216697 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221669a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1221669c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221669f:;
  /* 1221669f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122166a3 je 0x122166c9 */
  if (C.zf) goto L_122166c9;
  /* 122166a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122166a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122166ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122166b1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122166b4 jne 0x122166c7 */
  if (!C.zf) goto L_122166c7;
  /* 122166b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122166b9 push eax */
  push32((uint32_t)(EAX));
  /* 122166ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122166bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122166c0 push ecx */
  push32((uint32_t)(ECX));
  /* 122166c1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x122166c4u);
  /* 122166c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122166c7:;
  /* 122166c7 jmp 0x12216697 */
  goto L_12216697;
L_122166c9:;
  /* 122166c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 122166cb call 0x12218bd0 */
  push32(0x122166d0u); f_12218bd0();
  /* 122166d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122166d3:;
  /* 122166d3 mov esp, ebp */
  ESP = (EBP);
  /* 122166d5 pop ebp */
  EBP = (pop32());
  /* 122166d6 ret  */
  ESPCHK(0x12216670u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x122166e0 (75 bytes, 28 insns) */
void f_122166e0(void) {
  FTRACE(0x122166e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122166e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122166e1 mov ebp, esp */
  EBP = (ESP);
  /* 122166e3 push ecx */
  push32((uint32_t)(ECX));
  /* 122166e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122166e8 je 0x1221671d */
  if (C.zf) goto L_1221671d;
  /* 122166ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122166ed push eax */
  push32((uint32_t)(EAX));
  /* 122166ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122166f1 push ecx */
  push32((uint32_t)(ECX));
  /* 122166f2 call dword ptr [0x122433cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433cc))), 0x122166f8u);
  /* 122166f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122166fa jne 0x1221671d */
  if (!C.zf) goto L_1221671d;
  /* 122166fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216700 je 0x12216714 */
  if (C.zf) goto L_12216714;
  /* 12216702 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12216705 push edx */
  push32((uint32_t)(EDX));
  /* 12216706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216709 push eax */
  push32((uint32_t)(EAX));
  /* 1221670a call dword ptr [0x122433bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433bc))), 0x12216710u);
  /* 12216710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216712 jne 0x1221671d */
  if (!C.zf) goto L_1221671d;
L_12216714:;
  /* 12216714 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1221671b jmp 0x12216724 */
  goto L_12216724;
L_1221671d:;
  /* 1221671d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12216724:;
  /* 12216724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216727 mov esp, ebp */
  ESP = (EBP);
  /* 12216729 pop ebp */
  EBP = (pop32());
  /* 1221672a ret  */
  ESPCHK(0x122166e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x12216730 (134 bytes, 50 insns) */
void f_12216730(void) {
  FTRACE(0x12216730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216730 push ebp */
  push32((uint32_t)(EBP));
  /* 12216731 mov ebp, esp */
  EBP = (ESP);
  /* 12216733 push ecx */
  push32((uint32_t)(ECX));
  /* 12216734 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216738 jne 0x1221673e */
  if (!C.zf) goto L_1221673e;
  /* 1221673a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221673c jmp 0x122167b2 */
  goto L_122167b2;
L_1221673e:;
  /* 1221673e push 1 */
  push32((uint32_t)(0x1u));
  /* 12216740 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12216742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216745 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216748 push eax */
  push32((uint32_t)(EAX));
  /* 12216749 call 0x122166e0 */
  push32(0x1221674eu); f_122166e0();
  /* 1221674e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216751 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216753 jne 0x12216759 */
  if (!C.zf) goto L_12216759;
  /* 12216755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216757 jmp 0x122167b2 */
  goto L_122167b2;
L_12216759:;
  /* 12216759 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221675c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221675f push ecx */
  push32((uint32_t)(ECX));
  /* 12216760 call 0x12219430 */
  push32(0x12216765u); f_12219430();
  /* 12216765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221676b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221676f je 0x12216786 */
  if (C.zf) goto L_12216786;
  /* 12216771 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216774 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216777 push edx */
  push32((uint32_t)(EDX));
  /* 12216778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221677b push eax */
  push32((uint32_t)(EAX));
  /* 1221677c call 0x12219490 */
  push32(0x12216781u); f_12219490();
  /* 12216781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216784 jmp 0x122167b2 */
  goto L_122167b2;
L_12216786:;
  /* 12216786 mov ecx, dword ptr [0x122405d0] */
  ECX = (r32((uint32_t)(0x122405d0)));
  /* 1221678c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12216792 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216794 je 0x1221679d */
  if (C.zf) goto L_1221679d;
  /* 12216796 mov eax, 1 */
  EAX = (0x1u);
  /* 1221679b jmp 0x122167b2 */
  goto L_122167b2;
L_1221679d:;
  /* 1221679d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122167a0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122167a3 push edx */
  push32((uint32_t)(EDX));
  /* 122167a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122167a6 mov eax, dword ptr [0x12241f6c] */
  EAX = (r32((uint32_t)(0x12241f6c)));
  /* 122167ab push eax */
  push32((uint32_t)(EAX));
  /* 122167ac call dword ptr [0x122433d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433d0))), 0x122167b2u);
L_122167b2:;
  /* 122167b2 mov esp, ebp */
  ESP = (EBP);
  /* 122167b4 pop ebp */
  EBP = (pop32());
  /* 122167b5 ret  */
  ESPCHK(0x12216730u, _esp0);
  ESP += 4; return;
}

/* FUN_100067c0 @ 0x122167c0 (227 bytes, 80 insns) */
void f_122167c0(void) {
  FTRACE(0x122167c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122167c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122167c1 mov ebp, esp */
  EBP = (ESP);
  /* 122167c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122167c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122167c7 push eax */
  push32((uint32_t)(EAX));
  /* 122167c8 call 0x12216730 */
  push32(0x122167cdu); f_12216730();
  /* 122167cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122167d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122167d2 jne 0x122167db */
  if (!C.zf) goto L_122167db;
  /* 122167d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122167d6 jmp 0x1221689f */
  goto L_1221689f;
L_122167db:;
  /* 122167db push 9 */
  push32((uint32_t)(0x9u));
  /* 122167dd call 0x12218b30 */
  push32(0x122167e2u); f_12218b30();
  /* 122167e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122167e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122167e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122167eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122167ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122167f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122167f4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122167f9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122167fc je 0x12216820 */
  if (C.zf) goto L_12216820;
  /* 122167fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216801 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216805 je 0x12216820 */
  if (C.zf) goto L_12216820;
  /* 12216807 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221680a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1221680d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12216812 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216815 je 0x12216820 */
  if (C.zf) goto L_12216820;
  /* 12216817 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221681a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221681e jne 0x12216893 */
  if (!C.zf) goto L_12216893;
L_12216820:;
  /* 12216820 push 1 */
  push32((uint32_t)(0x1u));
  /* 12216822 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12216825 push edx */
  push32((uint32_t)(EDX));
  /* 12216826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216829 push eax */
  push32((uint32_t)(EAX));
  /* 1221682a call 0x122166e0 */
  push32(0x1221682fu); f_122166e0();
  /* 1221682f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216834 je 0x12216893 */
  if (C.zf) goto L_12216893;
  /* 12216836 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216839 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1221683c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221683f jne 0x12216893 */
  if (!C.zf) goto L_12216893;
  /* 12216841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216844 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12216847 cmp ecx, dword ptr [0x1223ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1223ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221684d jg 0x12216893 */
  if ((!C.zf&&C.sf==C.of)) goto L_12216893;
  /* 1221684f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216853 je 0x12216860 */
  if (C.zf) goto L_12216860;
  /* 12216855 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12216858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221685b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1221685e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12216860:;
  /* 12216860 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216864 je 0x12216871 */
  if (C.zf) goto L_12216871;
  /* 12216866 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12216869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221686c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1221686f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12216871:;
  /* 12216871 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216875 je 0x12216882 */
  if (C.zf) goto L_12216882;
  /* 12216877 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221687a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221687d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12216880 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12216882:;
  /* 12216882 push 9 */
  push32((uint32_t)(0x9u));
  /* 12216884 call 0x12218bd0 */
  push32(0x12216889u); f_12218bd0();
  /* 12216889 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221688c mov eax, 1 */
  EAX = (0x1u);
  /* 12216891 jmp 0x1221689f */
  goto L_1221689f;
L_12216893:;
  /* 12216893 push 9 */
  push32((uint32_t)(0x9u));
  /* 12216895 call 0x12218bd0 */
  push32(0x1221689au); f_12218bd0();
  /* 1221689a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221689d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221689f:;
  /* 1221689f mov esp, ebp */
  ESP = (EBP);
  /* 122168a1 pop ebp */
  EBP = (pop32());
  /* 122168a2 ret  */
  ESPCHK(0x122167c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x122168b0 (28 bytes, 11 insns) */
void f_122168b0(void) {
  FTRACE(0x122168b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122168b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122168b1 mov ebp, esp */
  EBP = (ESP);
  /* 122168b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122168b4 mov eax, dword ptr [0x12241f78] */
  EAX = (r32((uint32_t)(0x12241f78)));
  /* 122168b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122168bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122168bf mov dword ptr [0x12241f78], ecx */
  w32((uint32_t)(0x12241f78), (ECX));
  /* 122168c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122168c8 mov esp, ebp */
  ESP = (EBP);
  /* 122168ca pop ebp */
  EBP = (pop32());
  /* 122168cb ret  */
  ESPCHK(0x122168b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068d0 @ 0x122168d0 (362 bytes, 116 insns) */
void f_122168d0(void) {
  FTRACE(0x122168d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122168d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122168d1 mov ebp, esp */
  EBP = (ESP);
  /* 122168d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122168d6 push ebx */
  push32((uint32_t)(EBX));
  /* 122168d7 push esi */
  push32((uint32_t)(ESI));
  /* 122168d8 push edi */
  push32((uint32_t)(EDI));
  /* 122168d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122168dd jne 0x1221690a */
  if (!C.zf) goto L_1221690a;
L_122168df:;
  /* 122168df push 0x1223bbc8 */
  push32((uint32_t)(0x1223bbc8u));
  /* 122168e4 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 122168e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122168eb push 0 */
  push32((uint32_t)(0x0u));
  /* 122168ed push 0 */
  push32((uint32_t)(0x0u));
  /* 122168ef push 0 */
  push32((uint32_t)(0x0u));
  /* 122168f1 call 0x122141f0 */
  push32(0x122168f6u); f_122141f0();
  /* 122168f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122168f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122168fc jne 0x122168ff */
  if (!C.zf) goto L_122168ff;
  /* 122168fe int3  */
  x86_unimpl("int3 @ 0x122168fe");
L_122168ff:;
  /* 122168ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216903 jne 0x122168df */
  if (!C.zf) goto L_122168df;
  /* 12216905 jmp 0x12216a33 */
  goto L_12216a33;
L_1221690a:;
  /* 1221690a push 9 */
  push32((uint32_t)(0x9u));
  /* 1221690c call 0x12218b30 */
  push32(0x12216911u); f_12218b30();
  /* 12216911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216914 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216917 mov edx, dword ptr [0x1224061c] */
  EDX = (r32((uint32_t)(0x1224061c)));
  /* 1221691d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1221691f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12216926 jmp 0x12216931 */
  goto L_12216931;
L_12216928:;
  /* 12216928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221692b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221692e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12216931:;
  /* 12216931 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216935 jge 0x12216955 */
  if ((C.sf==C.of)) goto L_12216955;
  /* 12216937 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221693a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221693d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12216945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216948 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221694b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12216953 jmp 0x12216928 */
  goto L_12216928;
L_12216955:;
  /* 12216955 mov edx, dword ptr [0x1224061c] */
  EDX = (r32((uint32_t)(0x1224061c)));
  /* 1221695b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1221695e jmp 0x12216968 */
  goto L_12216968;
L_12216960:;
  /* 12216960 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216963 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12216965 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12216968:;
  /* 12216968 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221696c je 0x12216a11 */
  if (C.zf) goto L_12216a11;
  /* 12216972 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216975 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12216978 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221697d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221697f jl 0x122169e7 */
  if ((C.sf!=C.of)) goto L_122169e7;
  /* 12216981 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216984 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12216987 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1221698d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216990 jge 0x122169e7 */
  if ((C.sf==C.of)) goto L_122169e7;
  /* 12216992 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216995 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12216998 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221699e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122169a1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 122169a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122169a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122169ab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122169ae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122169b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122169b7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 122169bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122169be mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122169c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122169c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122169c9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 122169cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122169d0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122169d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122169d6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 122169d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122169de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122169e1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 122169e5 jmp 0x12216a0c */
  goto L_12216a0c;
L_122169e7:;
  /* 122169e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122169ea push edx */
  push32((uint32_t)(EDX));
  /* 122169eb push 0x1223bba4 */
  push32((uint32_t)(0x1223bba4u));
  /* 122169f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122169f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122169f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122169f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122169f8 call 0x122141f0 */
  push32(0x122169fdu); f_122141f0();
  /* 122169fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216a00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216a03 jne 0x12216a06 */
  if (!C.zf) goto L_12216a06;
  /* 12216a05 int3  */
  x86_unimpl("int3 @ 0x12216a05");
L_12216a06:;
  /* 12216a06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216a0a jne 0x122169e7 */
  if (!C.zf) goto L_122169e7;
L_12216a0c:;
  /* 12216a0c jmp 0x12216960 */
  goto L_12216960;
L_12216a11:;
  /* 12216a11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216a14 mov edx, dword ptr [0x12240624] */
  EDX = (r32((uint32_t)(0x12240624)));
  /* 12216a1a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12216a1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216a20 mov ecx, dword ptr [0x12240618] */
  ECX = (r32((uint32_t)(0x12240618)));
  /* 12216a26 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12216a29 push 9 */
  push32((uint32_t)(0x9u));
  /* 12216a2b call 0x12218bd0 */
  push32(0x12216a30u); f_12218bd0();
  /* 12216a30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12216a33:;
  /* 12216a33 pop edi */
  EDI = (pop32());
  /* 12216a34 pop esi */
  ESI = (pop32());
  /* 12216a35 pop ebx */
  EBX = (pop32());
  /* 12216a36 mov esp, ebp */
  ESP = (EBP);
  /* 12216a38 pop ebp */
  EBP = (pop32());
  /* 12216a39 ret  */
  ESPCHK(0x122168d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x12216a40 (291 bytes, 95 insns) */
void f_12216a40(void) {
  FTRACE(0x12216a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12216a41 mov ebp, esp */
  EBP = (ESP);
  /* 12216a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216a46 push ebx */
  push32((uint32_t)(EBX));
  /* 12216a47 push esi */
  push32((uint32_t)(ESI));
  /* 12216a48 push edi */
  push32((uint32_t)(EDI));
  /* 12216a49 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12216a50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216a54 je 0x12216a62 */
  if (C.zf) goto L_12216a62;
  /* 12216a56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216a5a je 0x12216a62 */
  if (C.zf) goto L_12216a62;
  /* 12216a5c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216a60 jne 0x12216a90 */
  if (!C.zf) goto L_12216a90;
L_12216a62:;
  /* 12216a62 push 0x1223bbf0 */
  push32((uint32_t)(0x1223bbf0u));
  /* 12216a67 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 12216a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12216a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12216a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216a74 call 0x122141f0 */
  push32(0x12216a79u); f_122141f0();
  /* 12216a79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216a7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216a7f jne 0x12216a82 */
  if (!C.zf) goto L_12216a82;
  /* 12216a81 int3  */
  x86_unimpl("int3 @ 0x12216a81");
L_12216a82:;
  /* 12216a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216a84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216a86 jne 0x12216a62 */
  if (!C.zf) goto L_12216a62;
  /* 12216a88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12216a8b jmp 0x12216b5c */
  goto L_12216b5c;
L_12216a90:;
  /* 12216a90 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12216a97 jmp 0x12216aa2 */
  goto L_12216aa2;
L_12216a99:;
  /* 12216a99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216a9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216a9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12216aa2:;
  /* 12216aa2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216aa6 jge 0x12216b2c */
  if ((C.sf==C.of)) goto L_12216b2c;
  /* 12216aac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216aaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12216ab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216ab5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12216ab8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12216abc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216ac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216ac3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216ac6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12216aca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216acd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12216ad0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216ad3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12216ad6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12216ada sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216ade mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216ae1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216ae4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12216ae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216aee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216af3 jne 0x12216b02 */
  if (!C.zf) goto L_12216b02;
  /* 12216af5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216af8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216afb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216b00 je 0x12216b27 */
  if (C.zf) goto L_12216b27;
L_12216b02:;
  /* 12216b02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216b06 je 0x12216b27 */
  if (C.zf) goto L_12216b27;
  /* 12216b08 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216b0c jne 0x12216b20 */
  if (!C.zf) goto L_12216b20;
  /* 12216b0e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216b12 jne 0x12216b27 */
  if (!C.zf) goto L_12216b27;
  /* 12216b14 mov eax, dword ptr [0x1223ea84] */
  EAX = (r32((uint32_t)(0x1223ea84)));
  /* 12216b19 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12216b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216b1e je 0x12216b27 */
  if (C.zf) goto L_12216b27;
L_12216b20:;
  /* 12216b20 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12216b27:;
  /* 12216b27 jmp 0x12216a99 */
  goto L_12216a99;
L_12216b2c:;
  /* 12216b2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12216b2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12216b32 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12216b35 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216b38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216b3b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12216b3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12216b41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12216b44 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12216b47 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216b4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216b4d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12216b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216b53 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12216b59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12216b5c:;
  /* 12216b5c pop edi */
  EDI = (pop32());
  /* 12216b5d pop esi */
  ESI = (pop32());
  /* 12216b5e pop ebx */
  EBX = (pop32());
  /* 12216b5f mov esp, ebp */
  ESP = (EBP);
  /* 12216b61 pop ebp */
  EBP = (pop32());
  /* 12216b62 ret  */
  ESPCHK(0x12216a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x12216b70 (697 bytes, 253 insns) */
void f_12216b70(void) {
  FTRACE(0x12216b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12216b71 mov ebp, esp */
  EBP = (ESP);
  /* 12216b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216b76 push ebx */
  push32((uint32_t)(EBX));
  /* 12216b77 push esi */
  push32((uint32_t)(ESI));
  /* 12216b78 push edi */
  push32((uint32_t)(EDI));
  /* 12216b79 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12216b80 push 9 */
  push32((uint32_t)(0x9u));
  /* 12216b82 call 0x12218b30 */
  push32(0x12216b87u); f_12218b30();
  /* 12216b87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12216b8a:;
  /* 12216b8a push 0x1223bce8 */
  push32((uint32_t)(0x1223bce8u));
  /* 12216b8f push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 12216b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12216b9c call 0x122141f0 */
  push32(0x12216ba1u); f_122141f0();
  /* 12216ba1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216ba4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216ba7 jne 0x12216baa */
  if (!C.zf) goto L_12216baa;
  /* 12216ba9 int3  */
  x86_unimpl("int3 @ 0x12216ba9");
L_12216baa:;
  /* 12216baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216bac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216bae jne 0x12216b8a */
  if (!C.zf) goto L_12216b8a;
  /* 12216bb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216bb4 je 0x12216bbe */
  if (C.zf) goto L_12216bbe;
  /* 12216bb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216bb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12216bbb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12216bbe:;
  /* 12216bbe mov eax, dword ptr [0x1224061c] */
  EAX = (r32((uint32_t)(0x1224061c)));
  /* 12216bc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12216bc6 jmp 0x12216bd0 */
  goto L_12216bd0;
L_12216bc8:;
  /* 12216bc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216bcb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12216bcd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12216bd0:;
  /* 12216bd0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216bd4 je 0x12216df2 */
  if (C.zf) goto L_12216df2;
  /* 12216bda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216bdd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216be0 je 0x12216df2 */
  if (C.zf) goto L_12216df2;
  /* 12216be6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216be9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12216bec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12216bf2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216bf5 je 0x12216c24 */
  if (C.zf) goto L_12216c24;
  /* 12216bf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216bfa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12216bfd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12216c03 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216c05 je 0x12216c24 */
  if (C.zf) goto L_12216c24;
  /* 12216c07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216c0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12216c0d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12216c12 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216c15 jne 0x12216c29 */
  if (!C.zf) goto L_12216c29;
  /* 12216c17 mov ecx, dword ptr [0x1223ea84] */
  ECX = (r32((uint32_t)(0x1223ea84)));
  /* 12216c1d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12216c20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216c22 jne 0x12216c29 */
  if (!C.zf) goto L_12216c29;
L_12216c24:;
  /* 12216c24 jmp 0x12216ded */
  goto L_12216ded;
L_12216c29:;
  /* 12216c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216c2c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216c30 je 0x12216ca2 */
  if (C.zf) goto L_12216ca2;
  /* 12216c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216c34 push 1 */
  push32((uint32_t)(0x1u));
  /* 12216c36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216c39 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12216c3c push ecx */
  push32((uint32_t)(ECX));
  /* 12216c3d call 0x122166e0 */
  push32(0x12216c42u); f_122166e0();
  /* 12216c42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216c45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216c47 jne 0x12216c73 */
  if (!C.zf) goto L_12216c73;
L_12216c49:;
  /* 12216c49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216c4c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12216c4f push eax */
  push32((uint32_t)(EAX));
  /* 12216c50 push 0x1223bcd4 */
  push32((uint32_t)(0x1223bcd4u));
  /* 12216c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12216c5d call 0x122141f0 */
  push32(0x12216c62u); f_122141f0();
  /* 12216c62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216c65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216c68 jne 0x12216c6b */
  if (!C.zf) goto L_12216c6b;
  /* 12216c6a int3  */
  x86_unimpl("int3 @ 0x12216c6a");
L_12216c6b:;
  /* 12216c6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12216c6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216c6f jne 0x12216c49 */
  if (!C.zf) goto L_12216c49;
  /* 12216c71 jmp 0x12216ca2 */
  goto L_12216ca2;
L_12216c73:;
  /* 12216c73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216c76 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12216c79 push eax */
  push32((uint32_t)(EAX));
  /* 12216c7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216c7d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12216c80 push edx */
  push32((uint32_t)(EDX));
  /* 12216c81 push 0x1223bcc8 */
  push32((uint32_t)(0x1223bcc8u));
  /* 12216c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12216c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12216c8e call 0x122141f0 */
  push32(0x12216c93u); f_122141f0();
  /* 12216c93 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216c96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216c99 jne 0x12216c9c */
  if (!C.zf) goto L_12216c9c;
  /* 12216c9b int3  */
  x86_unimpl("int3 @ 0x12216c9b");
L_12216c9c:;
  /* 12216c9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216c9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216ca0 jne 0x12216c73 */
  if (!C.zf) goto L_12216c73;
L_12216ca2:;
  /* 12216ca2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216ca5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12216ca8 push edx */
  push32((uint32_t)(EDX));
  /* 12216ca9 push 0x1223bcc0 */
  push32((uint32_t)(0x1223bcc0u));
  /* 12216cae push 0 */
  push32((uint32_t)(0x0u));
  /* 12216cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216cb6 call 0x122141f0 */
  push32(0x12216cbbu); f_122141f0();
  /* 12216cbb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216cbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216cc1 jne 0x12216cc4 */
  if (!C.zf) goto L_12216cc4;
  /* 12216cc3 int3  */
  x86_unimpl("int3 @ 0x12216cc3");
L_12216cc4:;
  /* 12216cc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12216cc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12216cc8 jne 0x12216ca2 */
  if (!C.zf) goto L_12216ca2;
  /* 12216cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216ccd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12216cd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12216cd6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216cd9 jne 0x12216d4c */
  if (!C.zf) goto L_12216d4c;
L_12216cdb:;
  /* 12216cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216cde mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12216ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 12216ce2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216ce5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12216ce8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12216ceb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12216cf0 push eax */
  push32((uint32_t)(EAX));
  /* 12216cf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216cf4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 12216cf8 push 0x1223bc8c */
  push32((uint32_t)(0x1223bc8cu));
  /* 12216cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12216cff push 0 */
  push32((uint32_t)(0x0u));
  /* 12216d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216d05 call 0x122141f0 */
  push32(0x12216d0au); f_122141f0();
  /* 12216d0a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216d0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216d10 jne 0x12216d13 */
  if (!C.zf) goto L_12216d13;
  /* 12216d12 int3  */
  x86_unimpl("int3 @ 0x12216d12");
L_12216d13:;
  /* 12216d13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12216d15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12216d17 jne 0x12216cdb */
  if (!C.zf) goto L_12216cdb;
  /* 12216d19 cmp dword ptr [0x12241f78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12241f78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216d20 je 0x12216d3b */
  if (C.zf) goto L_12216d3b;
  /* 12216d22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216d25 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12216d28 push ecx */
  push32((uint32_t)(ECX));
  /* 12216d29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216d2c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216d2f push edx */
  push32((uint32_t)(EDX));
  /* 12216d30 call dword ptr [0x12241f78] */
  call_ind((uint32_t)(r32((uint32_t)(0x12241f78))), 0x12216d36u);
  /* 12216d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216d39 jmp 0x12216d47 */
  goto L_12216d47;
L_12216d3b:;
  /* 12216d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216d3e push eax */
  push32((uint32_t)(EAX));
  /* 12216d3f call 0x12216e30 */
  push32(0x12216d44u); f_12216e30();
  /* 12216d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12216d47:;
  /* 12216d47 jmp 0x12216ded */
  goto L_12216ded;
L_12216d4c:;
  /* 12216d4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216d4f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216d53 jne 0x12216d92 */
  if (!C.zf) goto L_12216d92;
L_12216d55:;
  /* 12216d55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216d58 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12216d5b push eax */
  push32((uint32_t)(EAX));
  /* 12216d5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216d5f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216d62 push ecx */
  push32((uint32_t)(ECX));
  /* 12216d63 push 0x1223bc64 */
  push32((uint32_t)(0x1223bc64u));
  /* 12216d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12216d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12216d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12216d70 call 0x122141f0 */
  push32(0x12216d75u); f_122141f0();
  /* 12216d75 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216d78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216d7b jne 0x12216d7e */
  if (!C.zf) goto L_12216d7e;
  /* 12216d7d int3  */
  x86_unimpl("int3 @ 0x12216d7d");
L_12216d7e:;
  /* 12216d7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12216d80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12216d82 jne 0x12216d55 */
  if (!C.zf) goto L_12216d55;
  /* 12216d84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216d87 push eax */
  push32((uint32_t)(EAX));
  /* 12216d88 call 0x12216e30 */
  push32(0x12216d8du); f_12216e30();
  /* 12216d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216d90 jmp 0x12216ded */
  goto L_12216ded;
L_12216d92:;
  /* 12216d92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216d95 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12216d98 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12216d9e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216da1 jne 0x12216ded */
  if (!C.zf) goto L_12216ded;
L_12216da3:;
  /* 12216da3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216da6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12216da9 push ecx */
  push32((uint32_t)(ECX));
  /* 12216daa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216dad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12216db0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12216db3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12216db8 push eax */
  push32((uint32_t)(EAX));
  /* 12216db9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216dbc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216dbf push ecx */
  push32((uint32_t)(ECX));
  /* 12216dc0 push 0x1223bc30 */
  push32((uint32_t)(0x1223bc30u));
  /* 12216dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12216dcd call 0x122141f0 */
  push32(0x12216dd2u); f_122141f0();
  /* 12216dd2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216dd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216dd8 jne 0x12216ddb */
  if (!C.zf) goto L_12216ddb;
  /* 12216dda int3  */
  x86_unimpl("int3 @ 0x12216dda");
L_12216ddb:;
  /* 12216ddb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12216ddd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12216ddf jne 0x12216da3 */
  if (!C.zf) goto L_12216da3;
  /* 12216de1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216de4 push eax */
  push32((uint32_t)(EAX));
  /* 12216de5 call 0x12216e30 */
  push32(0x12216deau); f_12216e30();
  /* 12216dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12216ded:;
  /* 12216ded jmp 0x12216bc8 */
  goto L_12216bc8;
L_12216df2:;
  /* 12216df2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12216df4 call 0x12218bd0 */
  push32(0x12216df9u); f_12218bd0();
  /* 12216df9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12216dfc:;
  /* 12216dfc push 0x1223bc18 */
  push32((uint32_t)(0x1223bc18u));
  /* 12216e01 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 12216e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12216e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12216e0e call 0x122141f0 */
  push32(0x12216e13u); f_122141f0();
  /* 12216e13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216e16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216e19 jne 0x12216e1c */
  if (!C.zf) goto L_12216e1c;
  /* 12216e1b int3  */
  x86_unimpl("int3 @ 0x12216e1b");
L_12216e1c:;
  /* 12216e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12216e1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216e20 jne 0x12216dfc */
  if (!C.zf) goto L_12216dfc;
  /* 12216e22 pop edi */
  EDI = (pop32());
  /* 12216e23 pop esi */
  ESI = (pop32());
  /* 12216e24 pop ebx */
  EBX = (pop32());
  /* 12216e25 mov esp, ebp */
  ESP = (EBP);
  /* 12216e27 pop ebp */
  EBP = (pop32());
  /* 12216e28 ret  */
  ESPCHK(0x12216b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e30 @ 0x12216e30 (276 bytes, 89 insns) */
void f_12216e30(void) {
  FTRACE(0x12216e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12216e31 mov ebp, esp */
  EBP = (ESP);
  /* 12216e33 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216e36 push ebx */
  push32((uint32_t)(EBX));
  /* 12216e37 push esi */
  push32((uint32_t)(ESI));
  /* 12216e38 push edi */
  push32((uint32_t)(EDI));
  /* 12216e39 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12216e40 jmp 0x12216e4b */
  goto L_12216e4b;
L_12216e42:;
  /* 12216e42 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12216e45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216e48 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12216e4b:;
  /* 12216e4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216e4e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216e52 jge 0x12216e5f */
  if ((C.sf==C.of)) goto L_12216e5f;
  /* 12216e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216e57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12216e5a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12216e5d jmp 0x12216e66 */
  goto L_12216e66;
L_12216e5f:;
  /* 12216e5f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12216e66:;
  /* 12216e66 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12216e69 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216e6c jge 0x12216f0c */
  if ((C.sf==C.of)) goto L_12216f0c;
  /* 12216e72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12216e75 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216e78 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12216e7b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12216e7e cmp dword ptr [0x1223eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1223eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216e85 jle 0x12216ea3 */
  if ((C.zf||C.sf!=C.of)) goto L_12216ea3;
  /* 12216e87 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12216e8c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12216e8f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12216e95 push ecx */
  push32((uint32_t)(ECX));
  /* 12216e96 call 0x1221b140 */
  push32(0x12216e9bu); f_1221b140();
  /* 12216e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216e9e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12216ea1 jmp 0x12216ec0 */
  goto L_12216ec0;
L_12216ea3:;
  /* 12216ea3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12216ea6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12216eac mov eax, dword ptr [0x1223ec98] */
  EAX = (r32((uint32_t)(0x1223ec98)));
  /* 12216eb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12216eb3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12216eb7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12216ebd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12216ec0:;
  /* 12216ec0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216ec4 je 0x12216ed4 */
  if (C.zf) goto L_12216ed4;
  /* 12216ec6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12216ec9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12216ecf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12216ed2 jmp 0x12216edb */
  goto L_12216edb;
L_12216ed4:;
  /* 12216ed4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12216edb:;
  /* 12216edb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12216ede mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12216ee1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12216ee5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12216ee8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12216eee push edx */
  push32((uint32_t)(EDX));
  /* 12216eef push 0x1223bd0c */
  push32((uint32_t)(0x1223bd0cu));
  /* 12216ef4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12216ef7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12216efa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12216efe push ecx */
  push32((uint32_t)(ECX));
  /* 12216eff call 0x1221b040 */
  push32(0x12216f04u); f_1221b040();
  /* 12216f04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216f07 jmp 0x12216e42 */
  goto L_12216e42;
L_12216f0c:;
  /* 12216f0c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12216f0f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12216f14:;
  /* 12216f14 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12216f17 push eax */
  push32((uint32_t)(EAX));
  /* 12216f18 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12216f1b push ecx */
  push32((uint32_t)(ECX));
  /* 12216f1c push 0x1223bcfc */
  push32((uint32_t)(0x1223bcfcu));
  /* 12216f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216f29 call 0x122141f0 */
  push32(0x12216f2eu); f_122141f0();
  /* 12216f2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216f31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216f34 jne 0x12216f37 */
  if (!C.zf) goto L_12216f37;
  /* 12216f36 int3  */
  x86_unimpl("int3 @ 0x12216f36");
L_12216f37:;
  /* 12216f37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12216f39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12216f3b jne 0x12216f14 */
  if (!C.zf) goto L_12216f14;
  /* 12216f3d pop edi */
  EDI = (pop32());
  /* 12216f3e pop esi */
  ESI = (pop32());
  /* 12216f3f pop ebx */
  EBX = (pop32());
  /* 12216f40 mov esp, ebp */
  ESP = (EBP);
  /* 12216f42 pop ebp */
  EBP = (pop32());
  /* 12216f43 ret  */
  ESPCHK(0x12216e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f50 @ 0x12216f50 (116 bytes, 46 insns) */
void f_12216f50(void) {
  FTRACE(0x12216f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12216f51 mov ebp, esp */
  EBP = (ESP);
  /* 12216f53 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12216f56 push ebx */
  push32((uint32_t)(EBX));
  /* 12216f57 push esi */
  push32((uint32_t)(ESI));
  /* 12216f58 push edi */
  push32((uint32_t)(EDI));
  /* 12216f59 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12216f5c push eax */
  push32((uint32_t)(EAX));
  /* 12216f5d call 0x122168d0 */
  push32(0x12216f62u); f_122168d0();
  /* 12216f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216f65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216f69 jne 0x12216f84 */
  if (!C.zf) goto L_12216f84;
  /* 12216f6b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216f6f jne 0x12216f84 */
  if (!C.zf) goto L_12216f84;
  /* 12216f71 mov ecx, dword ptr [0x1223ea84] */
  ECX = (r32((uint32_t)(0x1223ea84)));
  /* 12216f77 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12216f7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12216f7c je 0x12216fbb */
  if (C.zf) goto L_12216fbb;
  /* 12216f7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216f82 je 0x12216fbb */
  if (C.zf) goto L_12216fbb;
L_12216f84:;
  /* 12216f84 push 0x1223bd14 */
  push32((uint32_t)(0x1223bd14u));
  /* 12216f89 push 0x1223b6e0 */
  push32((uint32_t)(0x1223b6e0u));
  /* 12216f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12216f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12216f96 call 0x122141f0 */
  push32(0x12216f9bu); f_122141f0();
  /* 12216f9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216f9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216fa1 jne 0x12216fa4 */
  if (!C.zf) goto L_12216fa4;
  /* 12216fa3 int3  */
  x86_unimpl("int3 @ 0x12216fa3");
L_12216fa4:;
  /* 12216fa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12216fa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12216fa8 jne 0x12216f84 */
  if (!C.zf) goto L_12216f84;
  /* 12216faa push 0 */
  push32((uint32_t)(0x0u));
  /* 12216fac call 0x12216b70 */
  push32(0x12216fb1u); f_12216b70();
  /* 12216fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12216fb4 mov eax, 1 */
  EAX = (0x1u);
  /* 12216fb9 jmp 0x12216fbd */
  goto L_12216fbd;
L_12216fbb:;
  /* 12216fbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12216fbd:;
  /* 12216fbd pop edi */
  EDI = (pop32());
  /* 12216fbe pop esi */
  ESI = (pop32());
  /* 12216fbf pop ebx */
  EBX = (pop32());
  /* 12216fc0 mov esp, ebp */
  ESP = (EBP);
  /* 12216fc2 pop ebp */
  EBP = (pop32());
  /* 12216fc3 ret  */
  ESPCHK(0x12216f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fd0 @ 0x12216fd0 (197 bytes, 79 insns) */
void f_12216fd0(void) {
  FTRACE(0x12216fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12216fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12216fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12216fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12216fd4 push ebx */
  push32((uint32_t)(EBX));
  /* 12216fd5 push esi */
  push32((uint32_t)(ESI));
  /* 12216fd6 push edi */
  push32((uint32_t)(EDI));
  /* 12216fd7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216fdb jne 0x12216fe2 */
  if (!C.zf) goto L_12216fe2;
  /* 12216fdd jmp 0x1221708e */
  goto L_1221708e;
L_12216fe2:;
  /* 12216fe2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12216fe9 jmp 0x12216ff4 */
  goto L_12216ff4;
L_12216feb:;
  /* 12216feb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216fee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12216ff1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12216ff4:;
  /* 12216ff4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12216ff8 jge 0x1221703e */
  if ((C.sf==C.of)) goto L_1221703e;
L_12216ffa:;
  /* 12216ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12216ffd mov edx, dword ptr [ecx*4 + 0x1223ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223ea94)));
  /* 12217004 push edx */
  push32((uint32_t)(EDX));
  /* 12217005 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217008 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221700b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1221700f push edx */
  push32((uint32_t)(EDX));
  /* 12217010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217013 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217016 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1221701a push edx */
  push32((uint32_t)(EDX));
  /* 1221701b push 0x1223bd70 */
  push32((uint32_t)(0x1223bd70u));
  /* 12217020 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217022 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217024 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217026 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217028 call 0x122141f0 */
  push32(0x1221702du); f_122141f0();
  /* 1221702d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217030 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217033 jne 0x12217036 */
  if (!C.zf) goto L_12217036;
  /* 12217035 int3  */
  x86_unimpl("int3 @ 0x12217035");
L_12217036:;
  /* 12217036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12217038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221703a jne 0x12216ffa */
  if (!C.zf) goto L_12216ffa;
  /* 1221703c jmp 0x12216feb */
  goto L_12216feb;
L_1221703e:;
  /* 1221703e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217041 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12217044 push edx */
  push32((uint32_t)(EDX));
  /* 12217045 push 0x1223bd4c */
  push32((uint32_t)(0x1223bd4cu));
  /* 1221704a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221704c push 0 */
  push32((uint32_t)(0x0u));
  /* 1221704e push 0 */
  push32((uint32_t)(0x0u));
  /* 12217050 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217052 call 0x122141f0 */
  push32(0x12217057u); f_122141f0();
  /* 12217057 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221705a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221705d jne 0x12217060 */
  if (!C.zf) goto L_12217060;
  /* 1221705f int3  */
  x86_unimpl("int3 @ 0x1221705f");
L_12217060:;
  /* 12217060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12217062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12217064 jne 0x1221703e */
  if (!C.zf) goto L_1221703e;
L_12217066:;
  /* 12217066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217069 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1221706c push edx */
  push32((uint32_t)(EDX));
  /* 1221706d push 0x1223bd2c */
  push32((uint32_t)(0x1223bd2cu));
  /* 12217072 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217074 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217076 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221707a call 0x122141f0 */
  push32(0x1221707fu); f_122141f0();
  /* 1221707f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217082 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217085 jne 0x12217088 */
  if (!C.zf) goto L_12217088;
  /* 12217087 int3  */
  x86_unimpl("int3 @ 0x12217087");
L_12217088:;
  /* 12217088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221708a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221708c jne 0x12217066 */
  if (!C.zf) goto L_12217066;
L_1221708e:;
  /* 1221708e pop edi */
  EDI = (pop32());
  /* 1221708f pop esi */
  ESI = (pop32());
  /* 12217090 pop ebx */
  EBX = (pop32());
  /* 12217091 mov esp, ebp */
  ESP = (EBP);
  /* 12217093 pop ebp */
  EBP = (pop32());
  /* 12217094 ret  */
  ESPCHK(0x12216fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x122170a0 (329 bytes, 102 insns) */
void f_122170a0(void) {
  FTRACE(0x122170a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122170a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122170a1 mov ebp, esp */
  EBP = (ESP);
  /* 122170a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122170a6 cmp dword ptr [0x122420f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122420f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122170ad jne 0x122170b4 */
  if (!C.zf) goto L_122170b4;
  /* 122170af call 0x1221b9e0 */
  push32(0x122170b4u); f_1221b9e0();
L_122170b4:;
  /* 122170b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122170bb mov eax, dword ptr [0x122405b8] */
  EAX = (r32((uint32_t)(0x122405b8)));
  /* 122170c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122170c3:;
  /* 122170c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122170c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122170c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122170cb je 0x122170f9 */
  if (C.zf) goto L_122170f9;
  /* 122170cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122170d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122170d3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122170d6 je 0x122170e1 */
  if (C.zf) goto L_122170e1;
  /* 122170d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122170db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122170de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122170e1:;
  /* 122170e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122170e4 push eax */
  push32((uint32_t)(EAX));
  /* 122170e5 call 0x12217f60 */
  push32(0x122170eau); f_12217f60();
  /* 122170ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122170ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122170f0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122170f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122170f7 jmp 0x122170c3 */
  goto L_122170c3;
L_122170f9:;
  /* 122170f9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 122170fb push 0x1223bd90 */
  push32((uint32_t)(0x1223bd90u));
  /* 12217100 push 2 */
  push32((uint32_t)(0x2u));
  /* 12217102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217105 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1221710c push ecx */
  push32((uint32_t)(ECX));
  /* 1221710d call 0x12215130 */
  push32(0x12217112u); f_12215130();
  /* 12217112 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217115 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12217118 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221711b mov dword ptr [0x122405ec], edx */
  w32((uint32_t)(0x122405ec), (EDX));
  /* 12217121 cmp dword ptr [0x122405ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217128 jne 0x12217134 */
  if (!C.zf) goto L_12217134;
  /* 1221712a push 9 */
  push32((uint32_t)(0x9u));
  /* 1221712c call 0x122140a0 */
  push32(0x12217131u); f_122140a0();
  /* 12217131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12217134:;
  /* 12217134 mov eax, dword ptr [0x122405b8] */
  EAX = (r32((uint32_t)(0x122405b8)));
  /* 12217139 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221713c jmp 0x12217147 */
  goto L_12217147;
L_1221713e:;
  /* 1221713e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217141 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217144 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12217147:;
  /* 12217147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221714a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1221714d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221714f je 0x122171b7 */
  if (C.zf) goto L_122171b7;
  /* 12217151 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217154 push ecx */
  push32((uint32_t)(ECX));
  /* 12217155 call 0x12217f60 */
  push32(0x1221715au); f_12217f60();
  /* 1221715a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221715d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217160 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12217163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217166 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12217169 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221716c je 0x122171b5 */
  if (C.zf) goto L_122171b5;
  /* 1221716e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12217170 push 0x1223bd90 */
  push32((uint32_t)(0x1223bd90u));
  /* 12217175 push 2 */
  push32((uint32_t)(0x2u));
  /* 12217177 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221717a push ecx */
  push32((uint32_t)(ECX));
  /* 1221717b call 0x12215130 */
  push32(0x12217180u); f_12215130();
  /* 12217180 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217183 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217186 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12217188 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221718b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221718e jne 0x1221719a */
  if (!C.zf) goto L_1221719a;
  /* 12217190 push 9 */
  push32((uint32_t)(0x9u));
  /* 12217192 call 0x122140a0 */
  push32(0x12217197u); f_122140a0();
  /* 12217197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221719a:;
  /* 1221719a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221719d push ecx */
  push32((uint32_t)(ECX));
  /* 1221719e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122171a1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122171a3 push eax */
  push32((uint32_t)(EAX));
  /* 122171a4 call 0x122180e0 */
  push32(0x122171a9u); f_122180e0();
  /* 122171a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122171ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122171af add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122171b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122171b5:;
  /* 122171b5 jmp 0x1221713e */
  goto L_1221713e;
L_122171b7:;
  /* 122171b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122171b9 mov edx, dword ptr [0x122405b8] */
  EDX = (r32((uint32_t)(0x122405b8)));
  /* 122171bf push edx */
  push32((uint32_t)(EDX));
  /* 122171c0 call 0x12215bc0 */
  push32(0x122171c5u); f_12215bc0();
  /* 122171c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122171c8 mov dword ptr [0x122405b8], 0 */
  w32((uint32_t)(0x122405b8), (0x0u));
  /* 122171d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122171d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122171db mov dword ptr [0x122420e0], 1 */
  w32((uint32_t)(0x122420e0), (0x1u));
  /* 122171e5 mov esp, ebp */
  ESP = (EBP);
  /* 122171e7 pop ebp */
  EBP = (pop32());
  /* 122171e8 ret  */
  ESPCHK(0x122170a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x122171f0 (216 bytes, 69 insns) */
void f_122171f0(void) {
  FTRACE(0x122171f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122171f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122171f1 mov ebp, esp */
  EBP = (ESP);
  /* 122171f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122171f6 cmp dword ptr [0x122420f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122420f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122171fd jne 0x12217204 */
  if (!C.zf) goto L_12217204;
  /* 122171ff call 0x1221b9e0 */
  push32(0x12217204u); f_1221b9e0();
L_12217204:;
  /* 12217204 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12217209 push 0x12240628 */
  push32((uint32_t)(0x12240628u));
  /* 1221720e push 0 */
  push32((uint32_t)(0x0u));
  /* 12217210 call dword ptr [0x1224338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224338c))), 0x12217216u);
  /* 12217216 mov dword ptr [0x122405fc], 0x12240628 */
  w32((uint32_t)(0x122405fc), (0x12240628u));
  /* 12217220 mov eax, dword ptr [0x1224210c] */
  EAX = (r32((uint32_t)(0x1224210c)));
  /* 12217225 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12217228 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221722a jne 0x12217237 */
  if (!C.zf) goto L_12217237;
  /* 1221722c mov edx, dword ptr [0x122405fc] */
  EDX = (r32((uint32_t)(0x122405fc)));
  /* 12217232 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12217235 jmp 0x1221723f */
  goto L_1221723f;
L_12217237:;
  /* 12217237 mov eax, dword ptr [0x1224210c] */
  EAX = (r32((uint32_t)(0x1224210c)));
  /* 1221723c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1221723f:;
  /* 1221723f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12217242 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12217245 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12217248 push edx */
  push32((uint32_t)(EDX));
  /* 12217249 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1221724c push eax */
  push32((uint32_t)(EAX));
  /* 1221724d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221724f push 0 */
  push32((uint32_t)(0x0u));
  /* 12217251 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12217254 push ecx */
  push32((uint32_t)(ECX));
  /* 12217255 call 0x122172d0 */
  push32(0x1221725au); f_122172d0();
  /* 1221725a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221725d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12217262 push 0x1223bd9c */
  push32((uint32_t)(0x1223bd9cu));
  /* 12217267 push 2 */
  push32((uint32_t)(0x2u));
  /* 12217269 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221726c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221726f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12217272 push ecx */
  push32((uint32_t)(ECX));
  /* 12217273 call 0x12215130 */
  push32(0x12217278u); f_12215130();
  /* 12217278 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221727b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221727e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217282 jne 0x1221728e */
  if (!C.zf) goto L_1221728e;
  /* 12217284 push 8 */
  push32((uint32_t)(0x8u));
  /* 12217286 call 0x122140a0 */
  push32(0x1221728bu); f_122140a0();
  /* 1221728b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221728e:;
  /* 1221728e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12217291 push edx */
  push32((uint32_t)(EDX));
  /* 12217292 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12217295 push eax */
  push32((uint32_t)(EAX));
  /* 12217296 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217299 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221729c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1221729f push eax */
  push32((uint32_t)(EAX));
  /* 122172a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122172a3 push ecx */
  push32((uint32_t)(ECX));
  /* 122172a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122172a7 push edx */
  push32((uint32_t)(EDX));
  /* 122172a8 call 0x122172d0 */
  push32(0x122172adu); f_122172d0();
  /* 122172ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122172b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122172b3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122172b6 mov dword ptr [0x122405e0], eax */
  w32((uint32_t)(0x122405e0), (EAX));
  /* 122172bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122172be mov dword ptr [0x122405e4], ecx */
  w32((uint32_t)(0x122405e4), (ECX));
  /* 122172c4 mov esp, ebp */
  ESP = (EBP);
  /* 122172c6 pop ebp */
  EBP = (pop32());
  /* 122172c7 ret  */
  ESPCHK(0x122171f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x122172d0 (1060 bytes, 360 insns) */
void f_122172d0(void) {
  FTRACE(0x122172d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122172d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122172d1 mov ebp, esp */
  EBP = (ESP);
  /* 122172d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122172d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122172d9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122172df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122172e2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 122172e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122172eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122172ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122172f2 je 0x12217305 */
  if (C.zf) goto L_12217305;
  /* 122172f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122172f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122172fa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122172fc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122172ff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217302 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12217305:;
  /* 12217305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217308 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1221730b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221730e jne 0x122173dd */
  if (!C.zf) goto L_122173dd;
L_12217314:;
  /* 12217314 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217317 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221731a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221731d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217320 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12217323 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217326 je 0x122173a2 */
  if (C.zf) goto L_122173a2;
  /* 12217328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221732b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1221732e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12217330 je 0x122173a2 */
  if (C.zf) goto L_122173a2;
  /* 12217332 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217335 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12217337 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12217339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221733b mov al, byte ptr [edx + 0x12241e41] */
  AL = (r8((uint32_t)(EDX + 0x12241e41)));
  /* 12217341 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12217344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12217346 je 0x12217377 */
  if (C.zf) goto L_12217377;
  /* 12217348 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221734b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1221734d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217350 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12217353 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12217355 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217359 je 0x12217377 */
  if (C.zf) goto L_12217377;
  /* 1221735b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221735e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217361 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12217363 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12217365 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217368 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221736b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1221736e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217371 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217374 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12217377:;
  /* 12217377 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221737a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221737c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221737f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12217382 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12217384 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217388 je 0x1221739d */
  if (C.zf) goto L_1221739d;
  /* 1221738a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221738d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217390 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12217392 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12217394 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217397 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221739a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1221739d:;
  /* 1221739d jmp 0x12217314 */
  goto L_12217314;
L_122173a2:;
  /* 122173a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122173a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122173a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122173aa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122173ad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122173af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122173b3 je 0x122173c4 */
  if (C.zf) goto L_122173c4;
  /* 122173b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122173b8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 122173bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122173be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122173c1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_122173c4:;
  /* 122173c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122173c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122173ca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122173cd jne 0x122173d8 */
  if (!C.zf) goto L_122173d8;
  /* 122173cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122173d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122173d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122173d8:;
  /* 122173d8 jmp 0x122174ac */
  goto L_122174ac;
L_122173dd:;
  /* 122173dd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122173e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122173e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122173e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122173e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122173ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122173ee je 0x12217403 */
  if (C.zf) goto L_12217403;
  /* 122173f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122173f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122173f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122173f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122173fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122173fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217400 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12217403:;
  /* 12217403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217406 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12217408 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1221740b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221740e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217411 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12217414 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217417 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221741d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221741f mov dl, byte ptr [ecx + 0x12241e41] */
  DL = (r8((uint32_t)(ECX + 0x12241e41)));
  /* 12217425 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12217428 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221742a je 0x1221745b */
  if (C.zf) goto L_1221745b;
  /* 1221742c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221742f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12217431 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217434 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12217437 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12217439 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221743d je 0x12217452 */
  if (C.zf) goto L_12217452;
  /* 1221743f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217445 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12217447 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12217449 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221744c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221744f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12217452:;
  /* 12217452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217458 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1221745b:;
  /* 1221745b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221745e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12217464 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217467 je 0x12217487 */
  if (C.zf) goto L_12217487;
  /* 12217469 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221746c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12217471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12217473 je 0x12217487 */
  if (C.zf) goto L_12217487;
  /* 12217475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217478 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221747e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217481 jne 0x122173dd */
  if (!C.zf) goto L_122173dd;
L_12217487:;
  /* 12217487 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221748a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12217490 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12217492 jne 0x1221749f */
  if (!C.zf) goto L_1221749f;
  /* 12217494 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217497 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221749a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221749d jmp 0x122174ac */
  goto L_122174ac;
L_1221749f:;
  /* 1221749f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122174a3 je 0x122174ac */
  if (C.zf) goto L_122174ac;
  /* 122174a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122174a8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_122174ac:;
  /* 122174ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_122174b3:;
  /* 122174b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122174b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122174b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122174bb je 0x122174de */
  if (C.zf) goto L_122174de;
L_122174bd:;
  /* 122174bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122174c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122174c3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122174c6 je 0x122174d3 */
  if (C.zf) goto L_122174d3;
  /* 122174c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122174cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122174ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122174d1 jne 0x122174de */
  if (!C.zf) goto L_122174de;
L_122174d3:;
  /* 122174d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122174d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122174d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122174dc jmp 0x122174bd */
  goto L_122174bd;
L_122174de:;
  /* 122174de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122174e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122174e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122174e6 jne 0x122174ed */
  if (!C.zf) goto L_122174ed;
  /* 122174e8 jmp 0x122176cb */
  goto L_122176cb;
L_122174ed:;
  /* 122174ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122174f1 je 0x12217504 */
  if (C.zf) goto L_12217504;
  /* 122174f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122174f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122174f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122174fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122174fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217501 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12217504:;
  /* 12217504 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12217507 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12217509 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221750c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221750f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12217511:;
  /* 12217511 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12217518 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1221751f:;
  /* 1221751f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217522 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12217525 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217528 jne 0x1221753e */
  if (!C.zf) goto L_1221753e;
  /* 1221752a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221752d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217530 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12217533 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12217536 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217539 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1221753c jmp 0x1221751f */
  goto L_1221751f;
L_1221753e:;
  /* 1221753e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217541 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12217544 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217547 jne 0x1221759a */
  if (!C.zf) goto L_1221759a;
  /* 12217549 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221754c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221754e mov ecx, 2 */
  ECX = (0x2u);
  /* 12217553 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12217555 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12217557 jne 0x12217592 */
  if (!C.zf) goto L_12217592;
  /* 12217559 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221755d je 0x1221757f */
  if (C.zf) goto L_1221757f;
  /* 1221755f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217562 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12217566 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217569 jne 0x12217576 */
  if (!C.zf) goto L_12217576;
  /* 1221756b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221756e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217571 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12217574 jmp 0x1221757d */
  goto L_1221757d;
L_12217576:;
  /* 12217576 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1221757d:;
  /* 1221757d jmp 0x12217586 */
  goto L_12217586;
L_1221757f:;
  /* 1221757f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12217586:;
  /* 12217586 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12217588 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221758c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1221758f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12217592:;
  /* 12217592 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12217595 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12217597 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1221759a:;
  /* 1221759a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221759d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122175a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122175a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122175a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122175a8 je 0x122175ce */
  if (C.zf) goto L_122175ce;
  /* 122175aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122175ae je 0x122175bf */
  if (C.zf) goto L_122175bf;
  /* 122175b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122175b3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 122175b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122175b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122175bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_122175bf:;
  /* 122175bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122175c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122175c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122175c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122175ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122175cc jmp 0x1221759a */
  goto L_1221759a;
L_122175ce:;
  /* 122175ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122175d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122175d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122175d6 je 0x122175f4 */
  if (C.zf) goto L_122175f4;
  /* 122175d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122175dc jne 0x122175f9 */
  if (!C.zf) goto L_122175f9;
  /* 122175de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122175e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122175e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122175e7 je 0x122175f4 */
  if (C.zf) goto L_122175f4;
  /* 122175e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122175ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122175ef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122175f2 jne 0x122175f9 */
  if (!C.zf) goto L_122175f9;
L_122175f4:;
  /* 122175f4 jmp 0x122176a4 */
  goto L_122176a4;
L_122175f9:;
  /* 122175f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122175fd je 0x12217696 */
  if (C.zf) goto L_12217696;
  /* 12217603 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217607 je 0x1221765d */
  if (C.zf) goto L_1221765d;
  /* 12217609 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221760c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221760e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12217610 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12217612 mov cl, byte ptr [eax + 0x12241e41] */
  CL = (r8((uint32_t)(EAX + 0x12241e41)));
  /* 12217618 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1221761b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221761d je 0x12217648 */
  if (C.zf) goto L_12217648;
  /* 1221761f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217625 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12217627 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12217629 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221762c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221762f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12217632 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217635 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217638 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221763b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221763e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12217640 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217643 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12217646 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12217648:;
  /* 12217648 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221764b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221764e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12217650 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12217652 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217655 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217658 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1221765b jmp 0x12217689 */
  goto L_12217689;
L_1221765d:;
  /* 1221765d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217660 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12217662 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12217664 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12217666 mov cl, byte ptr [eax + 0x12241e41] */
  CL = (r8((uint32_t)(EAX + 0x12241e41)));
  /* 1221766c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1221766f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12217671 je 0x12217689 */
  if (C.zf) goto L_12217689;
  /* 12217673 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217676 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217679 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221767c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221767f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12217681 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217684 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12217687 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12217689:;
  /* 12217689 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221768c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221768e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217691 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12217694 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12217696:;
  /* 12217696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217699 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221769c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221769f jmp 0x12217511 */
  goto L_12217511;
L_122176a4:;
  /* 122176a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122176a8 je 0x122176b9 */
  if (C.zf) goto L_122176b9;
  /* 122176aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122176ad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 122176b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122176b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122176b6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_122176b9:;
  /* 122176b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122176bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122176be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122176c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122176c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122176c6 jmp 0x122174b3 */
  goto L_122174b3;
L_122176cb:;
  /* 122176cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122176cf je 0x122176e3 */
  if (C.zf) goto L_122176e3;
  /* 122176d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122176d4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122176da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122176dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122176e0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_122176e3:;
  /* 122176e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122176e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122176e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122176eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122176ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122176f0 mov esp, ebp */
  ESP = (EBP);
  /* 122176f2 pop ebp */
  EBP = (pop32());
  /* 122176f3 ret  */
  ESPCHK(0x122172d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007700 @ 0x12217700 (537 bytes, 173 insns) */
void f_12217700(void) {
  FTRACE(0x12217700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217700 push ebp */
  push32((uint32_t)(EBP));
  /* 12217701 mov ebp, esp */
  EBP = (ESP);
  /* 12217703 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217706 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1221770d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12217714 cmp dword ptr [0x1224072c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224072c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221771b jne 0x1221775a */
  if (!C.zf) goto L_1221775a;
  /* 1221771d call dword ptr [0x12243360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243360))), 0x12217723u);
  /* 12217723 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12217726 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221772a je 0x12217738 */
  if (C.zf) goto L_12217738;
  /* 1221772c mov dword ptr [0x1224072c], 1 */
  w32((uint32_t)(0x1224072c), (0x1u));
  /* 12217736 jmp 0x1221775a */
  goto L_1221775a;
L_12217738:;
  /* 12217738 call dword ptr [0x12243358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243358))), 0x1221773eu);
  /* 1221773e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12217741 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217745 je 0x12217753 */
  if (C.zf) goto L_12217753;
  /* 12217747 mov dword ptr [0x1224072c], 2 */
  w32((uint32_t)(0x1224072c), (0x2u));
  /* 12217751 jmp 0x1221775a */
  goto L_1221775a;
L_12217753:;
  /* 12217753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12217755 jmp 0x12217915 */
  goto L_12217915;
L_1221775a:;
  /* 1221775a cmp dword ptr [0x1224072c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1224072c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217761 jne 0x1221785e */
  if (!C.zf) goto L_1221785e;
  /* 12217767 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221776b jne 0x12217783 */
  if (!C.zf) goto L_12217783;
  /* 1221776d call dword ptr [0x12243360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243360))), 0x12217773u);
  /* 12217773 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12217776 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221777a jne 0x12217783 */
  if (!C.zf) goto L_12217783;
  /* 1221777c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221777e jmp 0x12217915 */
  goto L_12217915;
L_12217783:;
  /* 12217783 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12217786 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12217789:;
  /* 12217789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221778c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221778e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12217791 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12217793 je 0x122177b5 */
  if (C.zf) goto L_122177b5;
  /* 12217795 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217798 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221779b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221779e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122177a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122177a3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 122177a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122177a8 jne 0x122177b3 */
  if (!C.zf) goto L_122177b3;
  /* 122177aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122177ad add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122177b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122177b3:;
  /* 122177b3 jmp 0x12217789 */
  goto L_12217789;
L_122177b5:;
  /* 122177b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122177b8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122177bb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 122177bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122177c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122177c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122177c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122177c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122177c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122177cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122177ce push edx */
  push32((uint32_t)(EDX));
  /* 122177cf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122177d2 push eax */
  push32((uint32_t)(EAX));
  /* 122177d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122177d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122177d7 call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x122177ddu);
  /* 122177dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122177e0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122177e4 je 0x12217804 */
  if (C.zf) goto L_12217804;
  /* 122177e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 122177e8 push 0x1223bda8 */
  push32((uint32_t)(0x1223bda8u));
  /* 122177ed push 2 */
  push32((uint32_t)(0x2u));
  /* 122177ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122177f2 push ecx */
  push32((uint32_t)(ECX));
  /* 122177f3 call 0x12215130 */
  push32(0x122177f8u); f_12215130();
  /* 122177f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122177fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122177fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217802 jne 0x12217815 */
  if (!C.zf) goto L_12217815;
L_12217804:;
  /* 12217804 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12217807 push edx */
  push32((uint32_t)(EDX));
  /* 12217808 call dword ptr [0x122433d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433d4))), 0x1221780eu);
  /* 1221780e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12217810 jmp 0x12217915 */
  goto L_12217915;
L_12217815:;
  /* 12217815 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217817 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217819 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221781c push eax */
  push32((uint32_t)(EAX));
  /* 1221781d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12217820 push ecx */
  push32((uint32_t)(ECX));
  /* 12217821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217824 push edx */
  push32((uint32_t)(EDX));
  /* 12217825 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12217828 push eax */
  push32((uint32_t)(EAX));
  /* 12217829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221782b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221782d call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x12217833u);
  /* 12217833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12217835 jne 0x1221784c */
  if (!C.zf) goto L_1221784c;
  /* 12217837 push 2 */
  push32((uint32_t)(0x2u));
  /* 12217839 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221783c push ecx */
  push32((uint32_t)(ECX));
  /* 1221783d call 0x12215bc0 */
  push32(0x12217842u); f_12215bc0();
  /* 12217842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217845 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1221784c:;
  /* 1221784c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221784f push edx */
  push32((uint32_t)(EDX));
  /* 12217850 call dword ptr [0x122433d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433d4))), 0x12217856u);
  /* 12217856 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12217859 jmp 0x12217915 */
  goto L_12217915;
L_1221785e:;
  /* 1221785e cmp dword ptr [0x1224072c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1224072c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217865 jne 0x12217913 */
  if (!C.zf) goto L_12217913;
  /* 1221786b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221786f jne 0x12217887 */
  if (!C.zf) goto L_12217887;
  /* 12217871 call dword ptr [0x12243358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243358))), 0x12217877u);
  /* 12217877 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1221787a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221787e jne 0x12217887 */
  if (!C.zf) goto L_12217887;
  /* 12217880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12217882 jmp 0x12217915 */
  goto L_12217915;
L_12217887:;
  /* 12217887 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221788a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1221788d:;
  /* 1221788d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217890 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12217893 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12217895 je 0x122178b5 */
  if (C.zf) goto L_122178b5;
  /* 12217897 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221789a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221789d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122178a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122178a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122178a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122178a8 jne 0x122178b3 */
  if (!C.zf) goto L_122178b3;
  /* 122178aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122178ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122178b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_122178b3:;
  /* 122178b3 jmp 0x1221788d */
  goto L_1221788d;
L_122178b5:;
  /* 122178b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122178b8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122178bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122178be mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122178c1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 122178c6 push 0x1223bda8 */
  push32((uint32_t)(0x1223bda8u));
  /* 122178cb push 2 */
  push32((uint32_t)(0x2u));
  /* 122178cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122178d0 push edx */
  push32((uint32_t)(EDX));
  /* 122178d1 call 0x12215130 */
  push32(0x122178d6u); f_12215130();
  /* 122178d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122178d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122178dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122178e0 jne 0x122178f0 */
  if (!C.zf) goto L_122178f0;
  /* 122178e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122178e5 push eax */
  push32((uint32_t)(EAX));
  /* 122178e6 call dword ptr [0x122433c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c8))), 0x122178ecu);
  /* 122178ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122178ee jmp 0x12217915 */
  goto L_12217915;
L_122178f0:;
  /* 122178f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122178f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122178f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122178f7 push edx */
  push32((uint32_t)(EDX));
  /* 122178f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122178fb push eax */
  push32((uint32_t)(EAX));
  /* 122178fc call 0x1221ba10 */
  push32(0x12217901u); f_1221ba10();
  /* 12217901 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217904 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12217907 push ecx */
  push32((uint32_t)(ECX));
  /* 12217908 call dword ptr [0x122433c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c8))), 0x1221790eu);
  /* 1221790e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217911 jmp 0x12217915 */
  goto L_12217915;
L_12217913:;
  /* 12217913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12217915:;
  /* 12217915 mov esp, ebp */
  ESP = (EBP);
  /* 12217917 pop ebp */
  EBP = (pop32());
  /* 12217918 ret  */
  ESPCHK(0x12217700u, _esp0);
  ESP += 4; return;
}

/* FUN_10007920 @ 0x12217920 (77 bytes, 25 insns) */
void f_12217920(void) {
  FTRACE(0x12217920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217920 push ebp */
  push32((uint32_t)(EBP));
  /* 12217921 mov ebp, esp */
  EBP = (ESP);
  /* 12217923 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217925 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1221792a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221792c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217930 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12217933 push eax */
  push32((uint32_t)(EAX));
  /* 12217934 call dword ptr [0x1224334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224334c))), 0x1221793au);
  /* 1221793a mov dword ptr [0x12241f6c], eax */
  w32((uint32_t)(0x12241f6c), (EAX));
  /* 1221793f cmp dword ptr [0x12241f6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12241f6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217946 jne 0x1221794c */
  if (!C.zf) goto L_1221794c;
  /* 12217948 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221794a jmp 0x1221796b */
  goto L_1221796b;
L_1221794c:;
  /* 1221794c call 0x122193d0 */
  push32(0x12217951u); f_122193d0();
  /* 12217951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12217953 jne 0x12217966 */
  if (!C.zf) goto L_12217966;
  /* 12217955 mov ecx, dword ptr [0x12241f6c] */
  ECX = (r32((uint32_t)(0x12241f6c)));
  /* 1221795b push ecx */
  push32((uint32_t)(ECX));
  /* 1221795c call dword ptr [0x12243350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243350))), 0x12217962u);
  /* 12217962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12217964 jmp 0x1221796b */
  goto L_1221796b;
L_12217966:;
  /* 12217966 mov eax, 1 */
  EAX = (0x1u);
L_1221796b:;
  /* 1221796b pop ebp */
  EBP = (pop32());
  /* 1221796c ret  */
  ESPCHK(0x12217920u, _esp0);
  ESP += 4; return;
}

/* FUN_10007970 @ 0x12217970 (156 bytes, 48 insns) */
void f_12217970(void) {
  FTRACE(0x12217970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217970 push ebp */
  push32((uint32_t)(EBP));
  /* 12217971 mov ebp, esp */
  EBP = (ESP);
  /* 12217973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217976 mov eax, dword ptr [0x12241f68] */
  EAX = (r32((uint32_t)(0x12241f68)));
  /* 1221797b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221797e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12217985 jmp 0x12217990 */
  goto L_12217990;
L_12217987:;
  /* 12217987 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221798a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221798d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12217990:;
  /* 12217990 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217993 cmp edx, dword ptr [0x12241f64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12241f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217999 jge 0x122179e6 */
  if ((C.sf==C.of)) goto L_122179e6;
  /* 1221799b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 122179a0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 122179a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122179a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122179ab push ecx */
  push32((uint32_t)(ECX));
  /* 122179ac call dword ptr [0x12243344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243344))), 0x122179b2u);
  /* 122179b2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 122179b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122179b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122179bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 122179bf push eax */
  push32((uint32_t)(EAX));
  /* 122179c0 call dword ptr [0x12243344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243344))), 0x122179c6u);
  /* 122179c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122179c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 122179cc push edx */
  push32((uint32_t)(EDX));
  /* 122179cd push 0 */
  push32((uint32_t)(0x0u));
  /* 122179cf mov eax, dword ptr [0x12241f6c] */
  EAX = (r32((uint32_t)(0x12241f6c)));
  /* 122179d4 push eax */
  push32((uint32_t)(EAX));
  /* 122179d5 call dword ptr [0x12243354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243354))), 0x122179dbu);
  /* 122179db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122179de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122179e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122179e4 jmp 0x12217987 */
  goto L_12217987;
L_122179e6:;
  /* 122179e6 mov edx, dword ptr [0x12241f68] */
  EDX = (r32((uint32_t)(0x12241f68)));
  /* 122179ec push edx */
  push32((uint32_t)(EDX));
  /* 122179ed push 0 */
  push32((uint32_t)(0x0u));
  /* 122179ef mov eax, dword ptr [0x12241f6c] */
  EAX = (r32((uint32_t)(0x12241f6c)));
  /* 122179f4 push eax */
  push32((uint32_t)(EAX));
  /* 122179f5 call dword ptr [0x12243354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243354))), 0x122179fbu);
  /* 122179fb mov ecx, dword ptr [0x12241f6c] */
  ECX = (r32((uint32_t)(0x12241f6c)));
  /* 12217a01 push ecx */
  push32((uint32_t)(ECX));
  /* 12217a02 call dword ptr [0x12243350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243350))), 0x12217a08u);
  /* 12217a08 mov esp, ebp */
  ESP = (EBP);
  /* 12217a0a pop ebp */
  EBP = (pop32());
  /* 12217a0b ret  */
  ESPCHK(0x12217970u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12217a10 (73 bytes, 19 insns) */
void f_12217a10(void) {
  FTRACE(0x12217a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12217a11 mov ebp, esp */
  EBP = (ESP);
  /* 12217a13 cmp dword ptr [0x122405c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122405c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217a1a je 0x12217a2e */
  if (C.zf) goto L_12217a2e;
  /* 12217a1c cmp dword ptr [0x122405c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217a23 jne 0x12217a57 */
  if (!C.zf) goto L_12217a57;
  /* 12217a25 cmp dword ptr [0x122405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217a2c jne 0x12217a57 */
  if (!C.zf) goto L_12217a57;
L_12217a2e:;
  /* 12217a2e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12217a33 call 0x12217a60 */
  push32(0x12217a38u); f_12217a60();
  /* 12217a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217a3b cmp dword ptr [0x12240730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217a42 je 0x12217a4a */
  if (C.zf) goto L_12217a4a;
  /* 12217a44 call dword ptr [0x12240730] */
  call_ind((uint32_t)(r32((uint32_t)(0x12240730))), 0x12217a4au);
L_12217a4a:;
  /* 12217a4a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12217a4f call 0x12217a60 */
  push32(0x12217a54u); f_12217a60();
  /* 12217a54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12217a57:;
  /* 12217a57 pop ebp */
  EBP = (pop32());
  /* 12217a58 ret  */
  ESPCHK(0x12217a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x12217a60 (447 bytes, 131 insns) */
void f_12217a60(void) {
  FTRACE(0x12217a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12217a61 mov ebp, esp */
  EBP = (ESP);
  /* 12217a63 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217a69 push ebx */
  push32((uint32_t)(EBX));
  /* 12217a6a push esi */
  push32((uint32_t)(ESI));
  /* 12217a6b push edi */
  push32((uint32_t)(EDI));
  /* 12217a6c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12217a73 jmp 0x12217a7e */
  goto L_12217a7e;
L_12217a75:;
  /* 12217a75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217a78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217a7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12217a7e:;
  /* 12217a7e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217a82 jae 0x12217a97 */
  if (!C.cf) goto L_12217a97;
  /* 12217a84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217a87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217a8a cmp edx, dword ptr [ecx*8 + 0x1223eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1223eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217a91 jne 0x12217a95 */
  if (!C.zf) goto L_12217a95;
  /* 12217a93 jmp 0x12217a97 */
  goto L_12217a97;
L_12217a95:;
  /* 12217a95 jmp 0x12217a75 */
  goto L_12217a75;
L_12217a97:;
  /* 12217a97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217a9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217a9d cmp ecx, dword ptr [eax*8 + 0x1223eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1223eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217aa4 jne 0x12217c18 */
  if (!C.zf) goto L_12217c18;
  /* 12217aaa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217ab1 je 0x12217ad4 */
  if (C.zf) goto L_12217ad4;
  /* 12217ab3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217ab6 mov eax, dword ptr [edx*8 + 0x1223eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1223eab4)));
  /* 12217abd push eax */
  push32((uint32_t)(EAX));
  /* 12217abe push 0 */
  push32((uint32_t)(0x0u));
  /* 12217ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217ac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12217ac6 call 0x122141f0 */
  push32(0x12217acbu); f_122141f0();
  /* 12217acb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217ace cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217ad1 jne 0x12217ad4 */
  if (!C.zf) goto L_12217ad4;
  /* 12217ad3 int3  */
  x86_unimpl("int3 @ 0x12217ad3");
L_12217ad4:;
  /* 12217ad4 cmp dword ptr [0x122405c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122405c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217adb je 0x12217aef */
  if (C.zf) goto L_12217aef;
  /* 12217add cmp dword ptr [0x122405c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217ae4 jne 0x12217b28 */
  if (!C.zf) goto L_12217b28;
  /* 12217ae6 cmp dword ptr [0x122405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217aed jne 0x12217b28 */
  if (!C.zf) goto L_12217b28;
L_12217aef:;
  /* 12217aef push 0 */
  push32((uint32_t)(0x0u));
  /* 12217af1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12217af4 push ecx */
  push32((uint32_t)(ECX));
  /* 12217af5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217af8 mov eax, dword ptr [edx*8 + 0x1223eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1223eab4)));
  /* 12217aff push eax */
  push32((uint32_t)(EAX));
  /* 12217b00 call 0x12217f60 */
  push32(0x12217b05u); f_12217f60();
  /* 12217b05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217b08 push eax */
  push32((uint32_t)(EAX));
  /* 12217b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217b0c mov edx, dword ptr [ecx*8 + 0x1223eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1223eab4)));
  /* 12217b13 push edx */
  push32((uint32_t)(EDX));
  /* 12217b14 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12217b16 call dword ptr [0x12243370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243370))), 0x12217b1cu);
  /* 12217b1c push eax */
  push32((uint32_t)(EAX));
  /* 12217b1d call dword ptr [0x12243374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243374))), 0x12217b23u);
  /* 12217b23 jmp 0x12217c18 */
  goto L_12217c18;
L_12217b28:;
  /* 12217b28 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217b2f je 0x12217c18 */
  if (C.zf) goto L_12217c18;
  /* 12217b35 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12217b3a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12217b40 push eax */
  push32((uint32_t)(EAX));
  /* 12217b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217b43 call dword ptr [0x1224338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224338c))), 0x12217b49u);
  /* 12217b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12217b4b jne 0x12217b61 */
  if (!C.zf) goto L_12217b61;
  /* 12217b4d push 0x1223b610 */
  push32((uint32_t)(0x1223b610u));
  /* 12217b52 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12217b58 push ecx */
  push32((uint32_t)(ECX));
  /* 12217b59 call 0x122180e0 */
  push32(0x12217b5eu); f_122180e0();
  /* 12217b5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12217b61:;
  /* 12217b61 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12217b67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12217b6a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217b6d push eax */
  push32((uint32_t)(EAX));
  /* 12217b6e call 0x12217f60 */
  push32(0x12217b73u); f_12217f60();
  /* 12217b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217b76 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217b79 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217b7c jbe 0x12217baa */
  if ((C.cf||C.zf)) goto L_12217baa;
  /* 12217b7e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12217b84 push ecx */
  push32((uint32_t)(ECX));
  /* 12217b85 call 0x12217f60 */
  push32(0x12217b8au); f_12217f60();
  /* 12217b8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217b8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217b90 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12217b94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12217b97 push 3 */
  push32((uint32_t)(0x3u));
  /* 12217b99 push 0x1223b60c */
  push32((uint32_t)(0x1223b60cu));
  /* 12217b9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217ba1 push ecx */
  push32((uint32_t)(ECX));
  /* 12217ba2 call 0x12218950 */
  push32(0x12217ba7u); f_12218950();
  /* 12217ba7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12217baa:;
  /* 12217baa push 0x1223c064 */
  push32((uint32_t)(0x1223c064u));
  /* 12217baf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12217bb5 push edx */
  push32((uint32_t)(EDX));
  /* 12217bb6 call 0x122180e0 */
  push32(0x12217bbbu); f_122180e0();
  /* 12217bbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217bbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217bc1 push eax */
  push32((uint32_t)(EAX));
  /* 12217bc2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12217bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12217bc9 call 0x122180f0 */
  push32(0x12217bceu); f_122180f0();
  /* 12217bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217bd1 push 0x1223b584 */
  push32((uint32_t)(0x1223b584u));
  /* 12217bd6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12217bdc push edx */
  push32((uint32_t)(EDX));
  /* 12217bdd call 0x122180f0 */
  push32(0x12217be2u); f_122180f0();
  /* 12217be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217be5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217be8 mov ecx, dword ptr [eax*8 + 0x1223eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1223eab4)));
  /* 12217bef push ecx */
  push32((uint32_t)(ECX));
  /* 12217bf0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12217bf6 push edx */
  push32((uint32_t)(EDX));
  /* 12217bf7 call 0x122180f0 */
  push32(0x12217bfcu); f_122180f0();
  /* 12217bfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217bff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12217c04 push 0x1223c03c */
  push32((uint32_t)(0x1223c03cu));
  /* 12217c09 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12217c0f push eax */
  push32((uint32_t)(EAX));
  /* 12217c10 call 0x12218890 */
  push32(0x12217c15u); f_12218890();
  /* 12217c15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12217c18:;
  /* 12217c18 pop edi */
  EDI = (pop32());
  /* 12217c19 pop esi */
  ESI = (pop32());
  /* 12217c1a pop ebx */
  EBX = (pop32());
  /* 12217c1b mov esp, ebp */
  ESP = (EBP);
  /* 12217c1d pop ebp */
  EBP = (pop32());
  /* 12217c1e ret  */
  ESPCHK(0x12217a60u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12217c20 (80 bytes, 27 insns) */
void f_12217c20(void) {
  FTRACE(0x12217c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12217c21 mov ebp, esp */
  EBP = (ESP);
  /* 12217c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12217c24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12217c2b jmp 0x12217c36 */
  goto L_12217c36;
L_12217c2d:;
  /* 12217c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217c30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217c33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12217c36:;
  /* 12217c36 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217c3a jae 0x12217c4f */
  if (!C.cf) goto L_12217c4f;
  /* 12217c3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217c3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217c42 cmp edx, dword ptr [ecx*8 + 0x1223eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1223eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217c49 jne 0x12217c4d */
  if (!C.zf) goto L_12217c4d;
  /* 12217c4b jmp 0x12217c4f */
  goto L_12217c4f;
L_12217c4d:;
  /* 12217c4d jmp 0x12217c2d */
  goto L_12217c2d;
L_12217c4f:;
  /* 12217c4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217c52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217c55 cmp ecx, dword ptr [eax*8 + 0x1223eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1223eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217c5c jne 0x12217c6a */
  if (!C.zf) goto L_12217c6a;
  /* 12217c5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217c61 mov eax, dword ptr [edx*8 + 0x1223eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1223eab4)));
  /* 12217c68 jmp 0x12217c6c */
  goto L_12217c6c;
L_12217c6a:;
  /* 12217c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12217c6c:;
  /* 12217c6c mov esp, ebp */
  ESP = (EBP);
  /* 12217c6e pop ebp */
  EBP = (pop32());
  /* 12217c6f ret  */
  ESPCHK(0x12217c20u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12217c70 (66 bytes, 28 insns) */
void f_12217c70(void) {
  FTRACE(0x12217c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12217c71 mov ebp, esp */
  EBP = (ESP);
  /* 12217c73 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217c77 jne 0x12217c97 */
  if (!C.zf) goto L_12217c97;
  /* 12217c79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217c7d jge 0x12217c97 */
  if ((C.sf==C.of)) goto L_12217c97;
  /* 12217c7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12217c81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217c84 push eax */
  push32((uint32_t)(EAX));
  /* 12217c85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217c88 push ecx */
  push32((uint32_t)(ECX));
  /* 12217c89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217c8c push edx */
  push32((uint32_t)(EDX));
  /* 12217c8d call 0x12217cc0 */
  push32(0x12217c92u); f_12217cc0();
  /* 12217c92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217c95 jmp 0x12217cad */
  goto L_12217cad;
L_12217c97:;
  /* 12217c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217c99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217c9c push eax */
  push32((uint32_t)(EAX));
  /* 12217c9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 12217ca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217ca4 push edx */
  push32((uint32_t)(EDX));
  /* 12217ca5 call 0x12217cc0 */
  push32(0x12217caau); f_12217cc0();
  /* 12217caa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12217cad:;
  /* 12217cad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217cb0 pop ebp */
  EBP = (pop32());
  /* 12217cb1 ret  */
  ESPCHK(0x12217c70u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12217cc0 (194 bytes, 71 insns) */
void f_12217cc0(void) {
  FTRACE(0x12217cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12217cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12217cc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217cc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217cc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12217ccc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217cd0 je 0x12217ce9 */
  if (C.zf) goto L_12217ce9;
  /* 12217cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217cd5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12217cd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217cdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217cde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12217ce1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217ce4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12217ce6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12217ce9:;
  /* 12217ce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217cec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12217cef:;
  /* 12217cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217cf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12217cf4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12217cf7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12217cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217cfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12217cff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12217d02 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12217d05 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217d09 jbe 0x12217d21 */
  if ((C.cf||C.zf)) goto L_12217d21;
  /* 12217d0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217d0e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217d11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217d14 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12217d16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217d19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217d1c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12217d1f jmp 0x12217d35 */
  goto L_12217d35;
L_12217d21:;
  /* 12217d21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217d24 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217d27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217d2a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12217d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217d2f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217d32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12217d35:;
  /* 12217d35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217d39 ja 0x12217cef */
  if ((!C.cf&&!C.zf)) goto L_12217cef;
  /* 12217d3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217d3e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12217d41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217d44 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217d47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12217d4a:;
  /* 12217d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217d4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12217d4f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12217d52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217d55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217d58 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12217d5a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12217d5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217d5f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12217d62 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12217d64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217d67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217d6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12217d6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217d70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217d73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12217d76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217d79 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217d7c jb 0x12217d4a */
  if (C.cf) goto L_12217d4a;
  /* 12217d7e mov esp, ebp */
  ESP = (EBP);
  /* 12217d80 pop ebp */
  EBP = (pop32());
  /* 12217d81 ret  */
  ESPCHK(0x12217cc0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12217d90 (63 bytes, 24 insns) */
void f_12217d90(void) {
  FTRACE(0x12217d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12217d91 mov ebp, esp */
  EBP = (ESP);
  /* 12217d93 push ecx */
  push32((uint32_t)(ECX));
  /* 12217d94 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217d98 jne 0x12217da9 */
  if (!C.zf) goto L_12217da9;
  /* 12217d9a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217d9e jge 0x12217da9 */
  if ((C.sf==C.of)) goto L_12217da9;
  /* 12217da0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12217da7 jmp 0x12217db0 */
  goto L_12217db0;
L_12217da9:;
  /* 12217da9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12217db0:;
  /* 12217db0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217db3 push eax */
  push32((uint32_t)(EAX));
  /* 12217db4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217db7 push ecx */
  push32((uint32_t)(ECX));
  /* 12217db8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217dbb push edx */
  push32((uint32_t)(EDX));
  /* 12217dbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217dbf push eax */
  push32((uint32_t)(EAX));
  /* 12217dc0 call 0x12217cc0 */
  push32(0x12217dc5u); f_12217cc0();
  /* 12217dc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217dc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217dcb mov esp, ebp */
  ESP = (EBP);
  /* 12217dcd pop ebp */
  EBP = (pop32());
  /* 12217dce ret  */
  ESPCHK(0x12217d90u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12217dd0 (30 bytes, 14 insns) */
void f_12217dd0(void) {
  FTRACE(0x12217dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12217dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12217dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217dd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217dd8 push eax */
  push32((uint32_t)(EAX));
  /* 12217dd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217ddc push ecx */
  push32((uint32_t)(ECX));
  /* 12217ddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217de0 push edx */
  push32((uint32_t)(EDX));
  /* 12217de1 call 0x12217cc0 */
  push32(0x12217de6u); f_12217cc0();
  /* 12217de6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12217de9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217dec pop ebp */
  EBP = (pop32());
  /* 12217ded ret  */
  ESPCHK(0x12217dd0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12217df0 (72 bytes, 28 insns) */
void f_12217df0(void) {
  FTRACE(0x12217df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12217df1 mov ebp, esp */
  EBP = (ESP);
  /* 12217df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12217df4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217df8 jne 0x12217e11 */
  if (!C.zf) goto L_12217e11;
  /* 12217dfa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217dfe jg 0x12217e11 */
  if ((!C.zf&&C.sf==C.of)) goto L_12217e11;
  /* 12217e00 jl 0x12217e08 */
  if ((C.sf!=C.of)) goto L_12217e08;
  /* 12217e02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217e06 jae 0x12217e11 */
  if (!C.cf) goto L_12217e11;
L_12217e08:;
  /* 12217e08 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12217e0f jmp 0x12217e18 */
  goto L_12217e18;
L_12217e11:;
  /* 12217e11 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12217e18:;
  /* 12217e18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217e1b push eax */
  push32((uint32_t)(EAX));
  /* 12217e1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12217e1f push ecx */
  push32((uint32_t)(ECX));
  /* 12217e20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217e23 push edx */
  push32((uint32_t)(EDX));
  /* 12217e24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217e27 push eax */
  push32((uint32_t)(EAX));
  /* 12217e28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217e2b push ecx */
  push32((uint32_t)(ECX));
  /* 12217e2c call 0x12217e40 */
  push32(0x12217e31u); f_12217e40();
  /* 12217e31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217e34 mov esp, ebp */
  ESP = (EBP);
  /* 12217e36 pop ebp */
  EBP = (pop32());
  /* 12217e37 ret  */
  ESPCHK(0x12217df0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12217e40 (242 bytes, 91 insns) */
void f_12217e40(void) {
  FTRACE(0x12217e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12217e41 mov ebp, esp */
  EBP = (ESP);
  /* 12217e43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217e46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217e49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12217e4c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217e50 je 0x12217e74 */
  if (C.zf) goto L_12217e74;
  /* 12217e52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217e55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12217e58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217e5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217e5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12217e61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217e64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12217e66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217e69 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217e6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12217e6e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12217e71 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12217e74:;
  /* 12217e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217e77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12217e7a:;
  /* 12217e7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12217e7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12217e7f push ecx */
  push32((uint32_t)(ECX));
  /* 12217e80 push eax */
  push32((uint32_t)(EAX));
  /* 12217e81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217e84 push edx */
  push32((uint32_t)(EDX));
  /* 12217e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217e88 push eax */
  push32((uint32_t)(EAX));
  /* 12217e89 call 0x1221bdc0 */
  push32(0x12217e8eu); f_1221bdc0();
  /* 12217e8e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12217e91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12217e94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12217e96 push edx */
  push32((uint32_t)(EDX));
  /* 12217e97 push ecx */
  push32((uint32_t)(ECX));
  /* 12217e98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217e9b push eax */
  push32((uint32_t)(EAX));
  /* 12217e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217e9f push ecx */
  push32((uint32_t)(ECX));
  /* 12217ea0 call 0x1221bd50 */
  push32(0x12217ea5u); f_1221bd50();
  /* 12217ea5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12217ea8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12217eab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217eaf jbe 0x12217ec7 */
  if ((C.cf||C.zf)) goto L_12217ec7;
  /* 12217eb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217eb4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217eba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12217ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217ebf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217ec2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12217ec5 jmp 0x12217edb */
  goto L_12217edb;
L_12217ec7:;
  /* 12217ec7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12217eca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217ed0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12217ed2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217ed8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12217edb:;
  /* 12217edb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217edf ja 0x12217e7a */
  if ((!C.cf&&!C.zf)) goto L_12217e7a;
  /* 12217ee1 jb 0x12217ee9 */
  if (C.cf) goto L_12217ee9;
  /* 12217ee3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217ee7 ja 0x12217e7a */
  if ((!C.cf&&!C.zf)) goto L_12217e7a;
L_12217ee9:;
  /* 12217ee9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217eec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12217eef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217ef2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217ef5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12217ef8:;
  /* 12217ef8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217efb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12217efd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12217f00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217f03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217f06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12217f08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12217f0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217f0d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12217f10 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12217f12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12217f15 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217f18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12217f1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217f1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217f21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12217f24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12217f27 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217f2a jb 0x12217ef8 */
  if (C.cf) goto L_12217ef8;
  /* 12217f2c mov esp, ebp */
  ESP = (EBP);
  /* 12217f2e pop ebp */
  EBP = (pop32());
  /* 12217f2f ret 0x14 */
  ESPCHK(0x12217e40u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12217f40 (31 bytes, 15 insns) */
void f_12217f40(void) {
  FTRACE(0x12217f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12217f41 mov ebp, esp */
  EBP = (ESP);
  /* 12217f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12217f45 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12217f48 push eax */
  push32((uint32_t)(EAX));
  /* 12217f49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217f4c push ecx */
  push32((uint32_t)(ECX));
  /* 12217f4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12217f50 push edx */
  push32((uint32_t)(EDX));
  /* 12217f51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12217f54 push eax */
  push32((uint32_t)(EAX));
  /* 12217f55 call 0x12217e40 */
  push32(0x12217f5au); f_12217e40();
  /* 12217f5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12217f5d pop ebp */
  EBP = (pop32());
  /* 12217f5e ret  */
  ESPCHK(0x12217f40u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12217f60 (123 bytes, 44 insns) */
void f_12217f60(void) {
  FTRACE(0x12217f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217f60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12217f64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12217f6a je 0x12217f80 */
  if (C.zf) goto L_12217f80;
L_12217f6c:;
  /* 12217f6c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12217f6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12217f6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12217f71 je 0x12217fb3 */
  if (C.zf) goto L_12217fb3;
  /* 12217f73 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12217f79 jne 0x12217f6c */
  if (!C.zf) goto L_12217f6c;
  /* 12217f7b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12217f80:;
  /* 12217f80 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12217f82 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12217f87 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217f89 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12217f8c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12217f8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12217f91 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12217f96 je 0x12217f80 */
  if (C.zf) goto L_12217f80;
  /* 12217f98 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12217f9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12217f9d je 0x12217fd1 */
  if (C.zf) goto L_12217fd1;
  /* 12217f9f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12217fa1 je 0x12217fc7 */
  if (C.zf) goto L_12217fc7;
  /* 12217fa3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12217fa8 je 0x12217fbd */
  if (C.zf) goto L_12217fbd;
  /* 12217faa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12217faf je 0x12217fb3 */
  if (C.zf) goto L_12217fb3;
  /* 12217fb1 jmp 0x12217f80 */
  goto L_12217f80;
L_12217fb3:;
  /* 12217fb3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12217fb6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12217fba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217fbc ret  */
  ESPCHK(0x12217f60u, _esp0);
  ESP += 4; return;
L_12217fbd:;
  /* 12217fbd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12217fc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12217fc4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217fc6 ret  */
  ESPCHK(0x12217f60u, _esp0);
  ESP += 4; return;
L_12217fc7:;
  /* 12217fc7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12217fca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12217fce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217fd0 ret  */
  ESPCHK(0x12217f60u, _esp0);
  ESP += 4; return;
L_12217fd1:;
  /* 12217fd1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12217fd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12217fd8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217fda ret  */
  ESPCHK(0x12217f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe0 @ 0x12217fe0 (249 bytes, 93 insns) */
void f_12217fe0(void) {
  FTRACE(0x12217fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12217fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12217fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12217fe3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12217fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 12217fe7 push esi */
  push32((uint32_t)(ESI));
  /* 12217fe8 push edi */
  push32((uint32_t)(EDI));
  /* 12217fe9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12217fec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12217fef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12217ff2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12217ff5:;
  /* 12217ff5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12217ff9 jne 0x12218019 */
  if (!C.zf) goto L_12218019;
  /* 12217ffb push 0x1223c09c */
  push32((uint32_t)(0x1223c09cu));
  /* 12218000 push 0 */
  push32((uint32_t)(0x0u));
  /* 12218002 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12218004 push 0x1223c090 */
  push32((uint32_t)(0x1223c090u));
  /* 12218009 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221800b call 0x122141f0 */
  push32(0x12218010u); f_122141f0();
  /* 12218010 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218013 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218016 jne 0x12218019 */
  if (!C.zf) goto L_12218019;
  /* 12218018 int3  */
  x86_unimpl("int3 @ 0x12218018");
L_12218019:;
  /* 12218019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221801b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221801d jne 0x12217ff5 */
  if (!C.zf) goto L_12217ff5;
L_1221801f:;
  /* 1221801f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218023 jne 0x12218043 */
  if (!C.zf) goto L_12218043;
  /* 12218025 push 0x1223c080 */
  push32((uint32_t)(0x1223c080u));
  /* 1221802a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221802c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1221802e push 0x1223c090 */
  push32((uint32_t)(0x1223c090u));
  /* 12218033 push 2 */
  push32((uint32_t)(0x2u));
  /* 12218035 call 0x122141f0 */
  push32(0x1221803au); f_122141f0();
  /* 1221803a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221803d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218040 jne 0x12218043 */
  if (!C.zf) goto L_12218043;
  /* 12218042 int3  */
  x86_unimpl("int3 @ 0x12218042");
L_12218043:;
  /* 12218043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12218045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12218047 jne 0x1221801f */
  if (!C.zf) goto L_1221801f;
  /* 12218049 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221804c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12218053 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218059 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1221805c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221805f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218062 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12218064 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218067 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221806a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1221806d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12218070 push edx */
  push32((uint32_t)(EDX));
  /* 12218071 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12218074 push eax */
  push32((uint32_t)(EAX));
  /* 12218075 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218078 push ecx */
  push32((uint32_t)(ECX));
  /* 12218079 call 0x1221c0c0 */
  push32(0x1221807eu); f_1221c0c0();
  /* 1221807e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218081 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12218084 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218087 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1221808a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221808d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218090 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12218093 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218096 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221809a jl 0x122180be */
  if ((C.sf!=C.of)) goto L_122180be;
  /* 1221809c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221809f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122180a1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 122180a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122180a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122180ac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 122180af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122180b2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122180b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122180b7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122180ba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122180bc jmp 0x122180cf */
  goto L_122180cf;
L_122180be:;
  /* 122180be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122180c1 push eax */
  push32((uint32_t)(EAX));
  /* 122180c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122180c4 call 0x1221be40 */
  push32(0x122180c9u); f_1221be40();
  /* 122180c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122180cc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_122180cf:;
  /* 122180cf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122180d2 pop edi */
  EDI = (pop32());
  /* 122180d3 pop esi */
  ESI = (pop32());
  /* 122180d4 pop ebx */
  EBX = (pop32());
  /* 122180d5 mov esp, ebp */
  ESP = (EBP);
  /* 122180d7 pop ebp */
  EBP = (pop32());
  /* 122180d8 ret  */
  ESPCHK(0x12217fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x122180e0 (7 bytes, 3 insns) */
void f_122180e0(void) {
  FTRACE(0x122180e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122180e0 push edi */
  push32((uint32_t)(EDI));
  /* 122180e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 122180e5 jmp 0x12218151 */
  jmp_ind(0x12218151u); return;
}

/* FUN_100080f0 @ 0x122180f0 (224 bytes, 84 insns) */
void f_122180f0(void) {
  FTRACE(0x122180f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122180f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 122180f4 push edi */
  push32((uint32_t)(EDI));
  /* 122180f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122180fb je 0x1221810c */
  if (C.zf) goto L_1221810c;
L_122180fd:;
  /* 122180fd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 122180ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12218100 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12218102 je 0x1221813f */
  if (C.zf) goto L_1221813f;
  /* 12218104 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1221810a jne 0x122180fd */
  if (!C.zf) goto L_122180fd;
L_1221810c:;
  /* 1221810c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1221810e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12218113 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218115 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12218118 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221811a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221811d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12218122 je 0x1221810c */
  if (C.zf) goto L_1221810c;
  /* 12218124 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12218127 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12218129 je 0x1221814e */
  if (C.zf) goto L_1221814e;
  /* 1221812b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1221812d je 0x12218149 */
  if (C.zf) goto L_12218149;
  /* 1221812f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12218134 je 0x12218144 */
  if (C.zf) goto L_12218144;
  /* 12218136 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1221813b je 0x1221813f */
  if (C.zf) goto L_1221813f;
  /* 1221813d jmp 0x1221810c */
  goto L_1221810c;
L_1221813f:;
  /* 1221813f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12218142 jmp 0x12218151 */
  goto L_12218151;
L_12218144:;
  /* 12218144 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12218147 jmp 0x12218151 */
  goto L_12218151;
L_12218149:;
  /* 12218149 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1221814c jmp 0x12218151 */
  goto L_12218151;
L_1221814e:;
  /* 1221814e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12218151:;
  /* 12218151 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12218155 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1221815b je 0x12218176 */
  if (C.zf) goto L_12218176;
L_1221815d:;
  /* 1221815d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1221815f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12218160 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12218162 je 0x122181c8 */
  if (C.zf) goto L_122181c8;
  /* 12218164 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12218166 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12218167 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1221816d jne 0x1221815d */
  if (!C.zf) goto L_1221815d;
  /* 1221816f jmp 0x12218176 */
  goto L_12218176;
L_12218171:;
  /* 12218171 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12218173 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12218176:;
  /* 12218176 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1221817b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1221817d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221817f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12218182 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12218184 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12218186 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218189 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1221818e je 0x12218171 */
  if (C.zf) goto L_12218171;
  /* 12218190 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12218192 je 0x122181c8 */
  if (C.zf) goto L_122181c8;
  /* 12218194 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12218196 je 0x122181bf */
  if (C.zf) goto L_122181bf;
  /* 12218198 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1221819e je 0x122181b2 */
  if (C.zf) goto L_122181b2;
  /* 122181a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 122181a6 je 0x122181aa */
  if (C.zf) goto L_122181aa;
  /* 122181a8 jmp 0x12218171 */
  goto L_12218171;
L_122181aa:;
  /* 122181aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 122181ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122181b0 pop edi */
  EDI = (pop32());
  /* 122181b1 ret  */
  ESPCHK(0x122180f0u, _esp0);
  ESP += 4; return;
L_122181b2:;
  /* 122181b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 122181b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122181b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 122181bd pop edi */
  EDI = (pop32());
  /* 122181be ret  */
  ESPCHK(0x122180f0u, _esp0);
  ESP += 4; return;
L_122181bf:;
  /* 122181bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 122181c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122181c6 pop edi */
  EDI = (pop32());
  /* 122181c7 ret  */
  ESPCHK(0x122180f0u, _esp0);
  ESP += 4; return;
L_122181c8:;
  /* 122181c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 122181ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122181ce pop edi */
  EDI = (pop32());
  /* 122181cf ret  */
  ESPCHK(0x122180f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x122181d0 (243 bytes, 91 insns) */
void f_122181d0(void) {
  FTRACE(0x122181d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122181d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122181d1 mov ebp, esp */
  EBP = (ESP);
  /* 122181d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122181d6 push ebx */
  push32((uint32_t)(EBX));
  /* 122181d7 push esi */
  push32((uint32_t)(ESI));
  /* 122181d8 push edi */
  push32((uint32_t)(EDI));
  /* 122181d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 122181dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122181df:;
  /* 122181df cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122181e3 jne 0x12218203 */
  if (!C.zf) goto L_12218203;
  /* 122181e5 push 0x1223c09c */
  push32((uint32_t)(0x1223c09cu));
  /* 122181ea push 0 */
  push32((uint32_t)(0x0u));
  /* 122181ec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 122181ee push 0x1223c0ac */
  push32((uint32_t)(0x1223c0acu));
  /* 122181f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 122181f5 call 0x122141f0 */
  push32(0x122181fau); f_122141f0();
  /* 122181fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122181fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218200 jne 0x12218203 */
  if (!C.zf) goto L_12218203;
  /* 12218202 int3  */
  x86_unimpl("int3 @ 0x12218202");
L_12218203:;
  /* 12218203 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12218205 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12218207 jne 0x122181df */
  if (!C.zf) goto L_122181df;
L_12218209:;
  /* 12218209 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221820d jne 0x1221822d */
  if (!C.zf) goto L_1221822d;
  /* 1221820f push 0x1223c080 */
  push32((uint32_t)(0x1223c080u));
  /* 12218214 push 0 */
  push32((uint32_t)(0x0u));
  /* 12218216 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12218218 push 0x1223c0ac */
  push32((uint32_t)(0x1223c0acu));
  /* 1221821d push 2 */
  push32((uint32_t)(0x2u));
  /* 1221821f call 0x122141f0 */
  push32(0x12218224u); f_122141f0();
  /* 12218224 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218227 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221822a jne 0x1221822d */
  if (!C.zf) goto L_1221822d;
  /* 1221822c int3  */
  x86_unimpl("int3 @ 0x1221822c");
L_1221822d:;
  /* 1221822d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221822f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12218231 jne 0x12218209 */
  if (!C.zf) goto L_12218209;
  /* 12218233 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218236 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1221823d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218243 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12218246 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218249 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221824c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1221824e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218251 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12218254 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12218257 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221825a push ecx */
  push32((uint32_t)(ECX));
  /* 1221825b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221825e push edx */
  push32((uint32_t)(EDX));
  /* 1221825f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218262 push eax */
  push32((uint32_t)(EAX));
  /* 12218263 call 0x1221c0c0 */
  push32(0x12218268u); f_1221c0c0();
  /* 12218268 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221826b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1221826e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218271 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12218274 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12218277 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221827a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1221827d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218280 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218284 jl 0x122182a8 */
  if ((C.sf!=C.of)) goto L_122182a8;
  /* 12218286 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12218289 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1221828b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1221828e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12218290 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12218296 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12218299 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221829c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1221829e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122182a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122182a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122182a6 jmp 0x122182b9 */
  goto L_122182b9;
L_122182a8:;
  /* 122182a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122182ab push edx */
  push32((uint32_t)(EDX));
  /* 122182ac push 0 */
  push32((uint32_t)(0x0u));
  /* 122182ae call 0x1221be40 */
  push32(0x122182b3u); f_1221be40();
  /* 122182b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122182b6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_122182b9:;
  /* 122182b9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122182bc pop edi */
  EDI = (pop32());
  /* 122182bd pop esi */
  ESI = (pop32());
  /* 122182be pop ebx */
  EBX = (pop32());
  /* 122182bf mov esp, ebp */
  ESP = (EBP);
  /* 122182c1 pop ebp */
  EBP = (pop32());
  /* 122182c2 ret  */
  ESPCHK(0x122181d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082d0 @ 0x122182d0 (47 bytes, 17 insns) */
void f_122182d0(void) {
  FTRACE(0x122182d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122182d0 push ecx */
  push32((uint32_t)(ECX));
  /* 122182d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122182d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 122182da jb 0x122182f0 */
  if (C.cf) goto L_122182f0;
L_122182dc:;
  /* 122182dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122182e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122182e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 122182e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122182ee jae 0x122182dc */
  if (!C.cf) goto L_122182dc;
L_122182f0:;
  /* 122182f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122182f2 mov eax, esp */
  EAX = (ESP);
  /* 122182f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 122182f6 mov esp, ecx */
  ESP = (ECX);
  /* 122182f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122182fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 122182fd push eax */
  push32((uint32_t)(EAX));
  /* 122182fe ret  */
  ESPCHK(0x122182d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008300 @ 0x12218300 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12218300(void) {
  FTRACE(0x12218300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218300 push ebp */
  push32((uint32_t)(EBP));
  /* 12218301 mov ebp, esp */
  EBP = (ESP);
  /* 12218303 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12218306 push esi */
  push32((uint32_t)(ESI));
  /* 12218307 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221830b je 0x12218313 */
  if (C.zf) goto L_12218313;
  /* 1221830d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218311 jne 0x12218318 */
  if (!C.zf) goto L_12218318;
L_12218313:;
  /* 12218313 jmp 0x122184e8 */
  goto L_122184e8;
L_12218318:;
  /* 12218318 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221831c je 0x12218334 */
  if (C.zf) goto L_12218334;
  /* 1221831e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218322 je 0x12218334 */
  if (C.zf) goto L_12218334;
  /* 12218324 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218328 je 0x12218334 */
  if (C.zf) goto L_12218334;
  /* 1221832a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221832e jne 0x12218411 */
  if (!C.zf) goto L_12218411;
L_12218334:;
  /* 12218334 push 1 */
  push32((uint32_t)(0x1u));
  /* 12218336 call 0x12218b30 */
  push32(0x1221833bu); f_12218b30();
  /* 1221833b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221833e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218342 je 0x1221834a */
  if (C.zf) goto L_1221834a;
  /* 12218344 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218348 jne 0x1221838f */
  if (!C.zf) goto L_1221838f;
L_1221834a:;
  /* 1221834a cmp dword ptr [0x12240744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218351 jne 0x1221838f */
  if (!C.zf) goto L_1221838f;
  /* 12218353 push 1 */
  push32((uint32_t)(0x1u));
  /* 12218355 push 0x12218530 */
  push32((uint32_t)(0x12218530u));
  /* 1221835a call dword ptr [0x12243340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243340))), 0x12218360u);
  /* 12218360 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218363 jne 0x12218371 */
  if (!C.zf) goto L_12218371;
  /* 12218365 mov dword ptr [0x12240744], 1 */
  w32((uint32_t)(0x12240744), (0x1u));
  /* 1221836f jmp 0x1221838f */
  goto L_1221838f;
L_12218371:;
  /* 12218371 call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x12218377u);
  /* 12218377 mov esi, eax */
  ESI = (EAX);
  /* 12218379 call 0x1221d010 */
  push32(0x1221837eu); f_1221d010();
  /* 1221837e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12218380 push 1 */
  push32((uint32_t)(0x1u));
  /* 12218382 call 0x12218bd0 */
  push32(0x12218387u); f_12218bd0();
  /* 12218387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221838a jmp 0x122184e8 */
  goto L_122184e8;
L_1221838f:;
  /* 1221838f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218392 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12218395 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218398 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221839b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1221839e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122183a2 ja 0x12218402 */
  if ((!C.cf&&!C.zf)) goto L_12218402;
  /* 122183a4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122183a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122183a9 mov dl, byte ptr [eax + 0x1221850f] */
  DL = (r8((uint32_t)(EAX + 0x1221850f)));
  /* 122183af jmp dword ptr [edx*4 + 0x122184fb] */
  switch (EDX) {
    case 0: goto L_122183b6;
    case 1: goto L_122183f0;
    case 2: goto L_122183ca;
    case 3: goto L_122183dd;
    case 4: goto L_12218402;
    default: x86_unimpl("switch@0x122183af out of table"); return;
  }
L_122183b6:;
  /* 122183b6 mov ecx, dword ptr [0x12240734] */
  ECX = (r32((uint32_t)(0x12240734)));
  /* 122183bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122183bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122183c2 mov dword ptr [0x12240734], edx */
  w32((uint32_t)(0x12240734), (EDX));
  /* 122183c8 jmp 0x12218402 */
  goto L_12218402;
L_122183ca:;
  /* 122183ca mov eax, dword ptr [0x12240738] */
  EAX = (r32((uint32_t)(0x12240738)));
  /* 122183cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122183d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122183d5 mov dword ptr [0x12240738], ecx */
  w32((uint32_t)(0x12240738), (ECX));
  /* 122183db jmp 0x12218402 */
  goto L_12218402;
L_122183dd:;
  /* 122183dd mov edx, dword ptr [0x1224073c] */
  EDX = (r32((uint32_t)(0x1224073c)));
  /* 122183e3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122183e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122183e9 mov dword ptr [0x1224073c], eax */
  w32((uint32_t)(0x1224073c), (EAX));
  /* 122183ee jmp 0x12218402 */
  goto L_12218402;
L_122183f0:;
  /* 122183f0 mov ecx, dword ptr [0x12240740] */
  ECX = (r32((uint32_t)(0x12240740)));
  /* 122183f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122183f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122183fc mov dword ptr [0x12240740], edx */
  w32((uint32_t)(0x12240740), (EDX));
L_12218402:;
  /* 12218402 push 1 */
  push32((uint32_t)(0x1u));
  /* 12218404 call 0x12218bd0 */
  push32(0x12218409u); f_12218bd0();
  /* 12218409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221840c jmp 0x122184e3 */
  goto L_122184e3;
L_12218411:;
  /* 12218411 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218415 je 0x12218428 */
  if (C.zf) goto L_12218428;
  /* 12218417 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221841b je 0x12218428 */
  if (C.zf) goto L_12218428;
  /* 1221841d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218421 je 0x12218428 */
  if (C.zf) goto L_12218428;
  /* 12218423 jmp 0x122184e8 */
  goto L_122184e8;
L_12218428:;
  /* 12218428 call 0x12214b70 */
  push32(0x1221842du); f_12214b70();
  /* 1221842d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12218430 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218433 cmp dword ptr [eax + 0x50], 0x1223ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1223ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221843a jne 0x12218485 */
  if (!C.zf) goto L_12218485;
  /* 1221843c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12218441 push 0x1223c0b8 */
  push32((uint32_t)(0x1223c0b8u));
  /* 12218446 push 2 */
  push32((uint32_t)(0x2u));
  /* 12218448 mov ecx, dword ptr [0x1223ec80] */
  ECX = (r32((uint32_t)(0x1223ec80)));
  /* 1221844e push ecx */
  push32((uint32_t)(ECX));
  /* 1221844f call 0x12215130 */
  push32(0x12218454u); f_12215130();
  /* 12218454 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218457 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221845a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1221845d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218460 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218464 je 0x12218483 */
  if (C.zf) goto L_12218483;
  /* 12218466 mov ecx, dword ptr [0x1223ec80] */
  ECX = (r32((uint32_t)(0x1223ec80)));
  /* 1221846c push ecx */
  push32((uint32_t)(ECX));
  /* 1221846d push 0x1223ec00 */
  push32((uint32_t)(0x1223ec00u));
  /* 12218472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218475 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12218478 push eax */
  push32((uint32_t)(EAX));
  /* 12218479 call 0x1221ba10 */
  push32(0x1221847eu); f_1221ba10();
  /* 1221847e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218481 jmp 0x12218485 */
  goto L_12218485;
L_12218483:;
  /* 12218483 jmp 0x122184e8 */
  goto L_122184e8;
L_12218485:;
  /* 12218485 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218488 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1221848b push edx */
  push32((uint32_t)(EDX));
  /* 1221848c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221848f push eax */
  push32((uint32_t)(EAX));
  /* 12218490 call 0x12218810 */
  push32(0x12218495u); f_12218810();
  /* 12218495 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218498 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221849b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221849f jne 0x122184a3 */
  if (!C.zf) goto L_122184a3;
  /* 122184a1 jmp 0x122184e8 */
  goto L_122184e8;
L_122184a3:;
  /* 122184a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122184a6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122184a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122184ac:;
  /* 122184ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122184af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122184b2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122184b5 jne 0x122184e3 */
  if (!C.zf) goto L_122184e3;
  /* 122184b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122184ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122184bd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122184c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122184c3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122184c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122184c9 mov edx, dword ptr [0x1223ec84] */
  EDX = (r32((uint32_t)(0x1223ec84)));
  /* 122184cf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122184d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122184d5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 122184d8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122184da cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122184dd jb 0x122184e1 */
  if (C.cf) goto L_122184e1;
  /* 122184df jmp 0x122184e3 */
  goto L_122184e3;
L_122184e1:;
  /* 122184e1 jmp 0x122184ac */
  goto L_122184ac;
L_122184e3:;
  /* 122184e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122184e6 jmp 0x122184f6 */
  goto L_122184f6;
L_122184e8:;
  /* 122184e8 call 0x1221d000 */
  push32(0x122184edu); f_1221d000();
  /* 122184ed mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 122184f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_122184f6:;
  /* 122184f6 pop esi */
  ESI = (pop32());
  /* 122184f7 mov esp, ebp */
  ESP = (EBP);
  /* 122184f9 pop ebp */
  EBP = (pop32());
  /* 122184fa ret  */
  ESPCHK(0x12218300u, _esp0);
  ESP += 4; return;
}

/* FUN_10008530 @ 0x12218530 (146 bytes, 45 insns) */
void f_12218530(void) {
  FTRACE(0x12218530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218530 push ebp */
  push32((uint32_t)(EBP));
  /* 12218531 mov ebp, esp */
  EBP = (ESP);
  /* 12218533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12218536 push 1 */
  push32((uint32_t)(0x1u));
  /* 12218538 call 0x12218b30 */
  push32(0x1221853du); f_12218b30();
  /* 1221853d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218540 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218544 jne 0x1221855e */
  if (!C.zf) goto L_1221855e;
  /* 12218546 mov dword ptr [ebp - 8], 0x12240734 */
  w32((uint32_t)(EBP + -0x8), (0x12240734u));
  /* 1221854d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218550 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12218552 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12218555 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1221855c jmp 0x12218574 */
  goto L_12218574;
L_1221855e:;
  /* 1221855e mov dword ptr [ebp - 8], 0x12240738 */
  w32((uint32_t)(EBP + -0x8), (0x12240738u));
  /* 12218565 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218568 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1221856a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1221856d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12218574:;
  /* 12218574 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218578 jne 0x12218588 */
  if (!C.zf) goto L_12218588;
  /* 1221857a push 1 */
  push32((uint32_t)(0x1u));
  /* 1221857c call 0x12218bd0 */
  push32(0x12218581u); f_12218bd0();
  /* 12218581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12218586 jmp 0x122185bc */
  goto L_122185bc;
L_12218588:;
  /* 12218588 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221858c je 0x122185ad */
  if (C.zf) goto L_122185ad;
  /* 1221858e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218591 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12218597 push 1 */
  push32((uint32_t)(0x1u));
  /* 12218599 call 0x12218bd0 */
  push32(0x1221859eu); f_12218bd0();
  /* 1221859e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122185a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122185a4 push edx */
  push32((uint32_t)(EDX));
  /* 122185a5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x122185a8u);
  /* 122185a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122185ab jmp 0x122185b7 */
  goto L_122185b7;
L_122185ad:;
  /* 122185ad push 1 */
  push32((uint32_t)(0x1u));
  /* 122185af call 0x12218bd0 */
  push32(0x122185b4u); f_12218bd0();
  /* 122185b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122185b7:;
  /* 122185b7 mov eax, 1 */
  EAX = (0x1u);
L_122185bc:;
  /* 122185bc mov esp, ebp */
  ESP = (EBP);
  /* 122185be pop ebp */
  EBP = (pop32());
  /* 122185bf ret 4 */
  ESPCHK(0x12218530u, _esp0);
  ESP += 8; return;
}

/* FUN_100085d0 @ 0x122185d0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_122185d0(void) {
  FTRACE(0x122185d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122185d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122185d1 mov ebp, esp */
  EBP = (ESP);
  /* 122185d3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122185d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122185dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122185e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122185e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122185e6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122185e9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 122185ec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122185f0 ja 0x1221869e */
  if ((!C.cf&&!C.zf)) goto L_1221869e;
  /* 122185f6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122185f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122185fb mov dl, byte ptr [eax + 0x122187f2] */
  DL = (r8((uint32_t)(EAX + 0x122187f2)));
  /* 12218601 jmp dword ptr [edx*4 + 0x122187da] */
  switch (EDX) {
    case 0: goto L_12218608;
    case 1: goto L_12218673;
    case 2: goto L_12218659;
    case 3: goto L_12218625;
    case 4: goto L_1221863f;
    case 5: goto L_1221869e;
    default: x86_unimpl("switch@0x12218601 out of table"); return;
  }
L_12218608:;
  /* 12218608 mov dword ptr [ebp - 0x18], 0x12240734 */
  w32((uint32_t)(EBP + -0x18), (0x12240734u));
  /* 1221860f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12218612 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12218614 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12218617 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221861a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221861d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12218620 jmp 0x122186a6 */
  goto L_122186a6;
L_12218625:;
  /* 12218625 mov dword ptr [ebp - 0x18], 0x12240738 */
  w32((uint32_t)(EBP + -0x18), (0x12240738u));
  /* 1221862c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221862f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12218631 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12218634 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12218637 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221863a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1221863d jmp 0x122186a6 */
  goto L_122186a6;
L_1221863f:;
  /* 1221863f mov dword ptr [ebp - 0x18], 0x1224073c */
  w32((uint32_t)(EBP + -0x18), (0x1224073cu));
  /* 12218646 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12218649 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1221864b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1221864e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12218651 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218654 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12218657 jmp 0x122186a6 */
  goto L_122186a6;
L_12218659:;
  /* 12218659 mov dword ptr [ebp - 0x18], 0x12240740 */
  w32((uint32_t)(EBP + -0x18), (0x12240740u));
  /* 12218660 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12218663 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12218665 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12218668 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221866b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221866e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12218671 jmp 0x122186a6 */
  goto L_122186a6;
L_12218673:;
  /* 12218673 call 0x12214b70 */
  push32(0x12218678u); f_12214b70();
  /* 12218678 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221867b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221867e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12218681 push edx */
  push32((uint32_t)(EDX));
  /* 12218682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218685 push eax */
  push32((uint32_t)(EAX));
  /* 12218686 call 0x12218810 */
  push32(0x1221868bu); f_12218810();
  /* 1221868b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221868e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218691 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12218694 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12218697 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12218699 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1221869c jmp 0x122186a6 */
  goto L_122186a6;
L_1221869e:;
  /* 1221869e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122186a1 jmp 0x122187d6 */
  goto L_122187d6;
L_122186a6:;
  /* 122186a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122186aa je 0x122186b6 */
  if (C.zf) goto L_122186b6;
  /* 122186ac push 1 */
  push32((uint32_t)(0x1u));
  /* 122186ae call 0x12218b30 */
  push32(0x122186b3u); f_12218b30();
  /* 122186b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122186b6:;
  /* 122186b6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122186ba jne 0x122186d3 */
  if (!C.zf) goto L_122186d3;
  /* 122186bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122186c0 je 0x122186cc */
  if (C.zf) goto L_122186cc;
  /* 122186c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 122186c4 call 0x12218bd0 */
  push32(0x122186c9u); f_12218bd0();
  /* 122186c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122186cc:;
  /* 122186cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122186ce jmp 0x122187d6 */
  goto L_122187d6;
L_122186d3:;
  /* 122186d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122186d7 jne 0x122186f0 */
  if (!C.zf) goto L_122186f0;
  /* 122186d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122186dd je 0x122186e9 */
  if (C.zf) goto L_122186e9;
  /* 122186df push 1 */
  push32((uint32_t)(0x1u));
  /* 122186e1 call 0x12218bd0 */
  push32(0x122186e6u); f_12218bd0();
  /* 122186e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122186e9:;
  /* 122186e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 122186eb call 0x122148f0 */
  push32(0x122186f0u); f_122148f0();
L_122186f0:;
  /* 122186f0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122186f4 je 0x12218702 */
  if (C.zf) goto L_12218702;
  /* 122186f6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122186fa je 0x12218702 */
  if (C.zf) goto L_12218702;
  /* 122186fc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218700 jne 0x1221872e */
  if (!C.zf) goto L_1221872e;
L_12218702:;
  /* 12218702 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218705 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12218708 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1221870b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221870e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12218715 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218719 jne 0x1221872e */
  if (!C.zf) goto L_1221872e;
  /* 1221871b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221871e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12218721 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12218724 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218727 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1221872e:;
  /* 1221872e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218732 jne 0x12218770 */
  if (!C.zf) goto L_12218770;
  /* 12218734 mov eax, dword ptr [0x1223ec78] */
  EAX = (r32((uint32_t)(0x1223ec78)));
  /* 12218739 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1221873c jmp 0x12218747 */
  goto L_12218747;
L_1221873e:;
  /* 1221873e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218741 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218744 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12218747:;
  /* 12218747 mov edx, dword ptr [0x1223ec78] */
  EDX = (r32((uint32_t)(0x1223ec78)));
  /* 1221874d add edx, dword ptr [0x1223ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1223ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218753 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218756 jge 0x1221876e */
  if ((C.sf==C.of)) goto L_1221876e;
  /* 12218758 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221875b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221875e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218761 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12218764 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1221876c jmp 0x1221873e */
  goto L_1221873e;
L_1221876e:;
  /* 1221876e jmp 0x12218779 */
  goto L_12218779;
L_12218770:;
  /* 12218770 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12218773 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12218779:;
  /* 12218779 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221877d je 0x12218789 */
  if (C.zf) goto L_12218789;
  /* 1221877f push 1 */
  push32((uint32_t)(0x1u));
  /* 12218781 call 0x12218bd0 */
  push32(0x12218786u); f_12218bd0();
  /* 12218786 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12218789:;
  /* 12218789 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221878d jne 0x122187a0 */
  if (!C.zf) goto L_122187a0;
  /* 1221878f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218792 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12218795 push edx */
  push32((uint32_t)(EDX));
  /* 12218796 push 8 */
  push32((uint32_t)(0x8u));
  /* 12218798 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1221879bu);
  /* 1221879b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221879e jmp 0x122187aa */
  goto L_122187aa;
L_122187a0:;
  /* 122187a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122187a3 push eax */
  push32((uint32_t)(EAX));
  /* 122187a4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x122187a7u);
  /* 122187a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122187aa:;
  /* 122187aa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122187ae je 0x122187bc */
  if (C.zf) goto L_122187bc;
  /* 122187b0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122187b4 je 0x122187bc */
  if (C.zf) goto L_122187bc;
  /* 122187b6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122187ba jne 0x122187d4 */
  if (!C.zf) goto L_122187d4;
L_122187bc:;
  /* 122187bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122187bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122187c2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 122187c5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122187c9 jne 0x122187d4 */
  if (!C.zf) goto L_122187d4;
  /* 122187cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122187ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122187d1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_122187d4:;
  /* 122187d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122187d6:;
  /* 122187d6 mov esp, ebp */
  ESP = (EBP);
  /* 122187d8 pop ebp */
  EBP = (pop32());
  /* 122187d9 ret  */
  ESPCHK(0x122185d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008810 @ 0x12218810 (91 bytes, 35 insns) */
void f_12218810(void) {
  FTRACE(0x12218810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218810 push ebp */
  push32((uint32_t)(EBP));
  /* 12218811 mov ebp, esp */
  EBP = (ESP);
  /* 12218813 push ecx */
  push32((uint32_t)(ECX));
  /* 12218814 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12218817 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221881a:;
  /* 1221881a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221881d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12218820 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218823 je 0x12218843 */
  if (C.zf) goto L_12218843;
  /* 12218825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218828 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221882b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221882e mov ecx, dword ptr [0x1223ec84] */
  ECX = (r32((uint32_t)(0x1223ec84)));
  /* 12218834 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12218837 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221883a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221883c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221883f jae 0x12218843 */
  if (!C.cf) goto L_12218843;
  /* 12218841 jmp 0x1221881a */
  goto L_1221881a;
L_12218843:;
  /* 12218843 mov eax, dword ptr [0x1223ec84] */
  EAX = (r32((uint32_t)(0x1223ec84)));
  /* 12218848 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221884b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221884e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218850 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218853 jae 0x12218865 */
  if (!C.cf) goto L_12218865;
  /* 12218855 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218858 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1221885b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221885e jne 0x12218865 */
  if (!C.zf) goto L_12218865;
  /* 12218860 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218863 jmp 0x12218867 */
  goto L_12218867;
L_12218865:;
  /* 12218865 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12218867:;
  /* 12218867 mov esp, ebp */
  ESP = (EBP);
  /* 12218869 pop ebp */
  EBP = (pop32());
  /* 1221886a ret  */
  ESPCHK(0x12218810u, _esp0);
  ESP += 4; return;
}

/* FUN_10008870 @ 0x12218870 (13 bytes, 6 insns) */
void f_12218870(void) {
  FTRACE(0x12218870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218870 push ebp */
  push32((uint32_t)(EBP));
  /* 12218871 mov ebp, esp */
  EBP = (ESP);
  /* 12218873 call 0x12214b70 */
  push32(0x12218878u); f_12214b70();
  /* 12218878 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221887b pop ebp */
  EBP = (pop32());
  /* 1221887c ret  */
  ESPCHK(0x12218870u, _esp0);
  ESP += 4; return;
}

/* FUN_10008880 @ 0x12218880 (13 bytes, 6 insns) */
void f_12218880(void) {
  FTRACE(0x12218880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218880 push ebp */
  push32((uint32_t)(EBP));
  /* 12218881 mov ebp, esp */
  EBP = (ESP);
  /* 12218883 call 0x12214b70 */
  push32(0x12218888u); f_12214b70();
  /* 12218888 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221888b pop ebp */
  EBP = (pop32());
  /* 1221888c ret  */
  ESPCHK(0x12218880u, _esp0);
  ESP += 4; return;
}

/* FUN_10008890 @ 0x12218890 (187 bytes, 54 insns) */
void f_12218890(void) {
  FTRACE(0x12218890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218890 push ebp */
  push32((uint32_t)(EBP));
  /* 12218891 mov ebp, esp */
  EBP = (ESP);
  /* 12218893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12218896 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221889d cmp dword ptr [0x12240748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122188a4 jne 0x12218903 */
  if (!C.zf) goto L_12218903;
  /* 122188a6 push 0x1223b4e4 */
  push32((uint32_t)(0x1223b4e4u));
  /* 122188ab call dword ptr [0x12243384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243384))), 0x122188b1u);
  /* 122188b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122188b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122188b8 je 0x122188d7 */
  if (C.zf) goto L_122188d7;
  /* 122188ba push 0x1223c0e8 */
  push32((uint32_t)(0x1223c0e8u));
  /* 122188bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122188c2 push eax */
  push32((uint32_t)(EAX));
  /* 122188c3 call dword ptr [0x12243380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243380))), 0x122188c9u);
  /* 122188c9 mov dword ptr [0x12240748], eax */
  w32((uint32_t)(0x12240748), (EAX));
  /* 122188ce cmp dword ptr [0x12240748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122188d5 jne 0x122188db */
  if (!C.zf) goto L_122188db;
L_122188d7:;
  /* 122188d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122188d9 jmp 0x12218947 */
  goto L_12218947;
L_122188db:;
  /* 122188db push 0x1223c0d8 */
  push32((uint32_t)(0x1223c0d8u));
  /* 122188e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122188e3 push ecx */
  push32((uint32_t)(ECX));
  /* 122188e4 call dword ptr [0x12243380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243380))), 0x122188eau);
  /* 122188ea mov dword ptr [0x1224074c], eax */
  w32((uint32_t)(0x1224074c), (EAX));
  /* 122188ef push 0x1223c0c4 */
  push32((uint32_t)(0x1223c0c4u));
  /* 122188f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122188f7 push edx */
  push32((uint32_t)(EDX));
  /* 122188f8 call dword ptr [0x12243380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243380))), 0x122188feu);
  /* 122188fe mov dword ptr [0x12240750], eax */
  w32((uint32_t)(0x12240750), (EAX));
L_12218903:;
  /* 12218903 cmp dword ptr [0x1224074c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224074c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221890a je 0x12218915 */
  if (C.zf) goto L_12218915;
  /* 1221890c call dword ptr [0x1224074c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224074c))), 0x12218912u);
  /* 12218912 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12218915:;
  /* 12218915 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218919 je 0x12218931 */
  if (C.zf) goto L_12218931;
  /* 1221891b cmp dword ptr [0x12240750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218922 je 0x12218931 */
  if (C.zf) goto L_12218931;
  /* 12218924 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218927 push eax */
  push32((uint32_t)(EAX));
  /* 12218928 call dword ptr [0x12240750] */
  call_ind((uint32_t)(r32((uint32_t)(0x12240750))), 0x1221892eu);
  /* 1221892e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12218931:;
  /* 12218931 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12218934 push ecx */
  push32((uint32_t)(ECX));
  /* 12218935 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12218938 push edx */
  push32((uint32_t)(EDX));
  /* 12218939 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221893c push eax */
  push32((uint32_t)(EAX));
  /* 1221893d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218940 push ecx */
  push32((uint32_t)(ECX));
  /* 12218941 call dword ptr [0x12240748] */
  call_ind((uint32_t)(r32((uint32_t)(0x12240748))), 0x12218947u);
L_12218947:;
  /* 12218947 mov esp, ebp */
  ESP = (EBP);
  /* 12218949 pop ebp */
  EBP = (pop32());
  /* 1221894a ret  */
  ESPCHK(0x12218890u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12218950 (254 bytes, 109 insns) */
void f_12218950(void) {
  FTRACE(0x12218950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218950 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12218954 push edi */
  push32((uint32_t)(EDI));
  /* 12218955 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12218957 je 0x122189d3 */
  if (C.zf) goto L_122189d3;
  /* 12218959 push esi */
  push32((uint32_t)(ESI));
  /* 1221895a push ebx */
  push32((uint32_t)(EBX));
  /* 1221895b mov ebx, ecx */
  EBX = (ECX);
  /* 1221895d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12218961 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12218967 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1221896b jne 0x12218974 */
  if (!C.zf) goto L_12218974;
  /* 1221896d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12218970 jne 0x122189e1 */
  if (!C.zf) goto L_122189e1;
  /* 12218972 jmp 0x12218995 */
  goto L_12218995;
L_12218974:;
  /* 12218974 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12218976 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12218977 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12218979 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1221897a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1221897b je 0x122189a2 */
  if (C.zf) goto L_122189a2;
  /* 1221897d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1221897f je 0x122189aa */
  if (C.zf) goto L_122189aa;
  /* 12218981 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12218987 jne 0x12218974 */
  if (!C.zf) goto L_12218974;
  /* 12218989 mov ebx, ecx */
  EBX = (ECX);
  /* 1221898b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221898e jne 0x122189e1 */
  if (!C.zf) goto L_122189e1;
L_12218990:;
  /* 12218990 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12218993 je 0x122189a2 */
  if (C.zf) goto L_122189a2;
L_12218995:;
  /* 12218995 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12218997 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12218998 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221899a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1221899b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1221899d je 0x122189ce */
  if (C.zf) goto L_122189ce;
  /* 1221899f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 122189a0 jne 0x12218995 */
  if (!C.zf) goto L_12218995;
L_122189a2:;
  /* 122189a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 122189a6 pop ebx */
  EBX = (pop32());
  /* 122189a7 pop esi */
  ESI = (pop32());
  /* 122189a8 pop edi */
  EDI = (pop32());
  /* 122189a9 ret  */
  ESPCHK(0x12218950u, _esp0);
  ESP += 4; return;
L_122189aa:;
  /* 122189aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 122189b0 je 0x122189c4 */
  if (C.zf) goto L_122189c4;
L_122189b2:;
  /* 122189b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122189b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122189b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122189b6 je 0x12218a46 */
  if (C.zf) goto L_12218a46;
  /* 122189bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 122189c2 jne 0x122189b2 */
  if (!C.zf) goto L_122189b2;
L_122189c4:;
  /* 122189c4 mov ebx, ecx */
  EBX = (ECX);
  /* 122189c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122189c9 jne 0x12218a37 */
  if (!C.zf) goto L_12218a37;
L_122189cb:;
  /* 122189cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122189cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_122189ce:;
  /* 122189ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 122189cf jne 0x122189cb */
  if (!C.zf) goto L_122189cb;
  /* 122189d1 pop ebx */
  EBX = (pop32());
  /* 122189d2 pop esi */
  ESI = (pop32());
L_122189d3:;
  /* 122189d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122189d7 pop edi */
  EDI = (pop32());
  /* 122189d8 ret  */
  ESPCHK(0x12218950u, _esp0);
  ESP += 4; return;
L_122189d9:;
  /* 122189d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 122189db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122189de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122189df je 0x12218990 */
  if (C.zf) goto L_12218990;
L_122189e1:;
  /* 122189e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 122189e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 122189e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122189ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122189ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 122189ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 122189f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122189f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 122189f9 je 0x122189d9 */
  if (C.zf) goto L_122189d9;
  /* 122189fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 122189fd je 0x12218a2b */
  if (C.zf) goto L_12218a2b;
  /* 122189ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12218a01 je 0x12218a21 */
  if (C.zf) goto L_12218a21;
  /* 12218a03 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12218a09 je 0x12218a17 */
  if (C.zf) goto L_12218a17;
  /* 12218a0b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12218a11 jne 0x122189d9 */
  if (!C.zf) goto L_122189d9;
  /* 12218a13 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12218a15 jmp 0x12218a2f */
  goto L_12218a2f;
L_12218a17:;
  /* 12218a17 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12218a1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12218a1f jmp 0x12218a2f */
  goto L_12218a2f;
L_12218a21:;
  /* 12218a21 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12218a27 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12218a29 jmp 0x12218a2f */
  goto L_12218a2f;
L_12218a2b:;
  /* 12218a2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12218a2d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12218a2f:;
  /* 12218a2f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12218a32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12218a34 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12218a35 je 0x12218a41 */
  if (C.zf) goto L_12218a41;
L_12218a37:;
  /* 12218a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12218a39:;
  /* 12218a39 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12218a3b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12218a3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12218a3f jne 0x12218a39 */
  if (!C.zf) goto L_12218a39;
L_12218a41:;
  /* 12218a41 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12218a44 jne 0x122189cb */
  if (!C.zf) goto L_122189cb;
L_12218a46:;
  /* 12218a46 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12218a4a pop ebx */
  EBX = (pop32());
  /* 12218a4b pop esi */
  ESI = (pop32());
  /* 12218a4c pop edi */
  EDI = (pop32());
  /* 12218a4d ret  */
  ESPCHK(0x12218950u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a50 @ 0x12218a50 (55 bytes, 16 insns) */
void f_12218a50(void) {
  FTRACE(0x12218a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12218a51 mov ebp, esp */
  EBP = (ESP);
  /* 12218a53 mov eax, dword ptr [0x1223eb84] */
  EAX = (r32((uint32_t)(0x1223eb84)));
  /* 12218a58 push eax */
  push32((uint32_t)(EAX));
  /* 12218a59 call dword ptr [0x12243348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243348))), 0x12218a5fu);
  /* 12218a5f mov ecx, dword ptr [0x1223eb74] */
  ECX = (r32((uint32_t)(0x1223eb74)));
  /* 12218a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12218a66 call dword ptr [0x12243348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243348))), 0x12218a6cu);
  /* 12218a6c mov edx, dword ptr [0x1223eb64] */
  EDX = (r32((uint32_t)(0x1223eb64)));
  /* 12218a72 push edx */
  push32((uint32_t)(EDX));
  /* 12218a73 call dword ptr [0x12243348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243348))), 0x12218a79u);
  /* 12218a79 mov eax, dword ptr [0x1223eb44] */
  EAX = (r32((uint32_t)(0x1223eb44)));
  /* 12218a7e push eax */
  push32((uint32_t)(EAX));
  /* 12218a7f call dword ptr [0x12243348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243348))), 0x12218a85u);
  /* 12218a85 pop ebp */
  EBP = (pop32());
  /* 12218a86 ret  */
  ESPCHK(0x12218a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a90 @ 0x12218a90 (159 bytes, 47 insns) */
void f_12218a90(void) {
  FTRACE(0x12218a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12218a91 mov ebp, esp */
  EBP = (ESP);
  /* 12218a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12218a94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12218a9b jmp 0x12218aa6 */
  goto L_12218aa6;
L_12218a9d:;
  /* 12218a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218aa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218aa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12218aa6:;
  /* 12218aa6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218aaa jge 0x12218af9 */
  if ((C.sf==C.of)) goto L_12218af9;
  /* 12218aac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218aaf cmp dword ptr [ecx*4 + 0x1223eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1223eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218ab7 je 0x12218af7 */
  if (C.zf) goto L_12218af7;
  /* 12218ab9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218abd je 0x12218af7 */
  if (C.zf) goto L_12218af7;
  /* 12218abf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218ac3 je 0x12218af7 */
  if (C.zf) goto L_12218af7;
  /* 12218ac5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218ac9 je 0x12218af7 */
  if (C.zf) goto L_12218af7;
  /* 12218acb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218acf je 0x12218af7 */
  if (C.zf) goto L_12218af7;
  /* 12218ad1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218ad4 mov eax, dword ptr [edx*4 + 0x1223eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1223eb40)));
  /* 12218adb push eax */
  push32((uint32_t)(EAX));
  /* 12218adc call dword ptr [0x122433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c4))), 0x12218ae2u);
  /* 12218ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12218ae4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218ae7 mov edx, dword ptr [ecx*4 + 0x1223eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223eb40)));
  /* 12218aee push edx */
  push32((uint32_t)(EDX));
  /* 12218aef call 0x12215bc0 */
  push32(0x12218af4u); f_12215bc0();
  /* 12218af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12218af7:;
  /* 12218af7 jmp 0x12218a9d */
  goto L_12218a9d;
L_12218af9:;
  /* 12218af9 mov eax, dword ptr [0x1223eb64] */
  EAX = (r32((uint32_t)(0x1223eb64)));
  /* 12218afe push eax */
  push32((uint32_t)(EAX));
  /* 12218aff call dword ptr [0x122433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c4))), 0x12218b05u);
  /* 12218b05 mov ecx, dword ptr [0x1223eb74] */
  ECX = (r32((uint32_t)(0x1223eb74)));
  /* 12218b0b push ecx */
  push32((uint32_t)(ECX));
  /* 12218b0c call dword ptr [0x122433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c4))), 0x12218b12u);
  /* 12218b12 mov edx, dword ptr [0x1223eb84] */
  EDX = (r32((uint32_t)(0x1223eb84)));
  /* 12218b18 push edx */
  push32((uint32_t)(EDX));
  /* 12218b19 call dword ptr [0x122433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c4))), 0x12218b1fu);
  /* 12218b1f mov eax, dword ptr [0x1223eb44] */
  EAX = (r32((uint32_t)(0x1223eb44)));
  /* 12218b24 push eax */
  push32((uint32_t)(EAX));
  /* 12218b25 call dword ptr [0x122433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c4))), 0x12218b2bu);
  /* 12218b2b mov esp, ebp */
  ESP = (EBP);
  /* 12218b2d pop ebp */
  EBP = (pop32());
  /* 12218b2e ret  */
  ESPCHK(0x12218a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b30 @ 0x12218b30 (151 bytes, 46 insns) */
void f_12218b30(void) {
  FTRACE(0x12218b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12218b31 mov ebp, esp */
  EBP = (ESP);
  /* 12218b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12218b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218b37 cmp dword ptr [eax*4 + 0x1223eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1223eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218b3f jne 0x12218bb2 */
  if (!C.zf) goto L_12218bb2;
  /* 12218b41 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12218b46 push 0x1223c0f4 */
  push32((uint32_t)(0x1223c0f4u));
  /* 12218b4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12218b4d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12218b4f call 0x12215130 */
  push32(0x12218b54u); f_12215130();
  /* 12218b54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218b57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12218b5a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218b5e jne 0x12218b6a */
  if (!C.zf) goto L_12218b6a;
  /* 12218b60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12218b62 call 0x122140a0 */
  push32(0x12218b67u); f_122140a0();
  /* 12218b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12218b6a:;
  /* 12218b6a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12218b6c call 0x12218b30 */
  push32(0x12218b71u); f_12218b30();
  /* 12218b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218b74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218b77 cmp dword ptr [ecx*4 + 0x1223eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1223eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218b7f jne 0x12218b9a */
  if (!C.zf) goto L_12218b9a;
  /* 12218b81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218b84 push edx */
  push32((uint32_t)(EDX));
  /* 12218b85 call dword ptr [0x12243348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243348))), 0x12218b8bu);
  /* 12218b8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218b8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218b91 mov dword ptr [eax*4 + 0x1223eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1223eb40), (ECX));
  /* 12218b98 jmp 0x12218ba8 */
  goto L_12218ba8;
L_12218b9a:;
  /* 12218b9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12218b9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218b9f push edx */
  push32((uint32_t)(EDX));
  /* 12218ba0 call 0x12215bc0 */
  push32(0x12218ba5u); f_12215bc0();
  /* 12218ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12218ba8:;
  /* 12218ba8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12218baa call 0x12218bd0 */
  push32(0x12218bafu); f_12218bd0();
  /* 12218baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12218bb2:;
  /* 12218bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218bb5 mov ecx, dword ptr [eax*4 + 0x1223eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1223eb40)));
  /* 12218bbc push ecx */
  push32((uint32_t)(ECX));
  /* 12218bbd call dword ptr [0x12243338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243338))), 0x12218bc3u);
  /* 12218bc3 mov esp, ebp */
  ESP = (EBP);
  /* 12218bc5 pop ebp */
  EBP = (pop32());
  /* 12218bc6 ret  */
  ESPCHK(0x12218b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bd0 @ 0x12218bd0 (22 bytes, 8 insns) */
void f_12218bd0(void) {
  FTRACE(0x12218bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12218bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12218bd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218bd6 mov ecx, dword ptr [eax*4 + 0x1223eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1223eb40)));
  /* 12218bdd push ecx */
  push32((uint32_t)(ECX));
  /* 12218bde call dword ptr [0x12243334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243334))), 0x12218be4u);
  /* 12218be4 pop ebp */
  EBP = (pop32());
  /* 12218be5 ret  */
  ESPCHK(0x12218bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bf0 @ 0x12218bf0 (26 bytes, 10 insns) */
void f_12218bf0(void) {
  FTRACE(0x12218bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12218bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12218bf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218bf6 push eax */
  push32((uint32_t)(EAX));
  /* 12218bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12218bf9 call dword ptr [0x1224333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224333c))), 0x12218bffu);
  /* 12218bff push 0xff */
  push32((uint32_t)(0xffu));
  /* 12218c04 call dword ptr [0x12243390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243390))), 0x12218c0au);
  /* 12218c0a pop ebp */
  EBP = (pop32());
  /* 12218c0b ret  */
  ESPCHK(0x12218bf0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12218c10 (446 bytes, 130 insns) */
void f_12218c10(void) {
  FTRACE(0x12218c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12218c11 mov ebp, esp */
  EBP = (ESP);
  /* 12218c13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12218c16 call 0x12214b70 */
  push32(0x12218c1bu); f_12214b70();
  /* 12218c1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12218c1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218c21 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12218c24 push ecx */
  push32((uint32_t)(ECX));
  /* 12218c25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218c28 push edx */
  push32((uint32_t)(EDX));
  /* 12218c29 call 0x12218dd0 */
  push32(0x12218c2eu); f_12218dd0();
  /* 12218c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218c31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12218c34 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218c38 je 0x12218c43 */
  if (C.zf) goto L_12218c43;
  /* 12218c3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218c3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218c41 jne 0x12218c52 */
  if (!C.zf) goto L_12218c52;
L_12218c43:;
  /* 12218c43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12218c46 push ecx */
  push32((uint32_t)(ECX));
  /* 12218c47 call dword ptr [0x1224332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224332c))), 0x12218c4du);
  /* 12218c4d jmp 0x12218dca */
  goto L_12218dca;
L_12218c52:;
  /* 12218c52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218c55 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218c59 jne 0x12218c6f */
  if (!C.zf) goto L_12218c6f;
  /* 12218c5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218c5e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12218c65 mov eax, 1 */
  EAX = (0x1u);
  /* 12218c6a jmp 0x12218dca */
  goto L_12218dca;
L_12218c6f:;
  /* 12218c6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218c72 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218c76 jne 0x12218c80 */
  if (!C.zf) goto L_12218c80;
  /* 12218c78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12218c7b jmp 0x12218dca */
  goto L_12218dca;
L_12218c80:;
  /* 12218c80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218c83 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12218c86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12218c89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218c8c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12218c8f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12218c92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218c95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12218c98 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12218c9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218c9e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218ca2 jne 0x12218da7 */
  if (!C.zf) goto L_12218da7;
  /* 12218ca8 mov eax, dword ptr [0x1223ec78] */
  EAX = (r32((uint32_t)(0x1223ec78)));
  /* 12218cad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12218cb0 jmp 0x12218cbb */
  goto L_12218cbb;
L_12218cb2:;
  /* 12218cb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12218cb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218cb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12218cbb:;
  /* 12218cbb mov edx, dword ptr [0x1223ec78] */
  EDX = (r32((uint32_t)(0x1223ec78)));
  /* 12218cc1 add edx, dword ptr [0x1223ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1223ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218cc7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218cca jge 0x12218ce2 */
  if ((C.sf==C.of)) goto L_12218ce2;
  /* 12218ccc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12218ccf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12218cd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218cd5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12218cd8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12218ce0 jmp 0x12218cb2 */
  goto L_12218cb2;
L_12218ce2:;
  /* 12218ce2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218ce5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12218ce8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12218ceb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218cee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218cf4 jne 0x12218d05 */
  if (!C.zf) goto L_12218d05;
  /* 12218cf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218cf9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12218d00 jmp 0x12218d8d */
  goto L_12218d8d;
L_12218d05:;
  /* 12218d05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218d08 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218d0e jne 0x12218d1c */
  if (!C.zf) goto L_12218d1c;
  /* 12218d10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218d13 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12218d1a jmp 0x12218d8d */
  goto L_12218d8d;
L_12218d1c:;
  /* 12218d1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218d1f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218d25 jne 0x12218d33 */
  if (!C.zf) goto L_12218d33;
  /* 12218d27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218d2a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12218d31 jmp 0x12218d8d */
  goto L_12218d8d;
L_12218d33:;
  /* 12218d33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218d36 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218d3c jne 0x12218d4a */
  if (!C.zf) goto L_12218d4a;
  /* 12218d3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218d41 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12218d48 jmp 0x12218d8d */
  goto L_12218d8d;
L_12218d4a:;
  /* 12218d4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218d4d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218d53 jne 0x12218d61 */
  if (!C.zf) goto L_12218d61;
  /* 12218d55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218d58 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12218d5f jmp 0x12218d8d */
  goto L_12218d8d;
L_12218d61:;
  /* 12218d61 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218d64 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218d6a jne 0x12218d78 */
  if (!C.zf) goto L_12218d78;
  /* 12218d6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218d6f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12218d76 jmp 0x12218d8d */
  goto L_12218d8d;
L_12218d78:;
  /* 12218d78 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218d7b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218d81 jne 0x12218d8d */
  if (!C.zf) goto L_12218d8d;
  /* 12218d83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218d86 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12218d8d:;
  /* 12218d8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218d90 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12218d93 push edx */
  push32((uint32_t)(EDX));
  /* 12218d94 push 8 */
  push32((uint32_t)(0x8u));
  /* 12218d96 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12218d99u);
  /* 12218d99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218d9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218d9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12218da2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12218da5 jmp 0x12218dbe */
  goto L_12218dbe;
L_12218da7:;
  /* 12218da7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218daa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12218db1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12218db4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12218db7 push ecx */
  push32((uint32_t)(ECX));
  /* 12218db8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12218dbbu);
  /* 12218dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12218dbe:;
  /* 12218dbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12218dc1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12218dc4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12218dc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12218dca:;
  /* 12218dca mov esp, ebp */
  ESP = (EBP);
  /* 12218dcc pop ebp */
  EBP = (pop32());
  /* 12218dcd ret  */
  ESPCHK(0x12218c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dd0 @ 0x12218dd0 (89 bytes, 35 insns) */
void f_12218dd0(void) {
  FTRACE(0x12218dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12218dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12218dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12218dd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12218dd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12218dda:;
  /* 12218dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218ddd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12218ddf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218de2 je 0x12218e02 */
  if (C.zf) goto L_12218e02;
  /* 12218de4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218de7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218dea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12218ded mov ecx, dword ptr [0x1223ec84] */
  ECX = (r32((uint32_t)(0x1223ec84)));
  /* 12218df3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12218df6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12218df9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218dfb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218dfe jae 0x12218e02 */
  if (!C.cf) goto L_12218e02;
  /* 12218e00 jmp 0x12218dda */
  goto L_12218dda;
L_12218e02:;
  /* 12218e02 mov eax, dword ptr [0x1223ec84] */
  EAX = (r32((uint32_t)(0x1223ec84)));
  /* 12218e07 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12218e0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12218e0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218e0f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218e12 jae 0x12218e1e */
  if (!C.cf) goto L_12218e1e;
  /* 12218e14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218e17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12218e19 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218e1c je 0x12218e22 */
  if (C.zf) goto L_12218e22;
L_12218e1e:;
  /* 12218e1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12218e20 jmp 0x12218e25 */
  goto L_12218e25;
L_12218e22:;
  /* 12218e22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12218e25:;
  /* 12218e25 mov esp, ebp */
  ESP = (EBP);
  /* 12218e27 pop ebp */
  EBP = (pop32());
  /* 12218e28 ret  */
  ESPCHK(0x12218dd0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12218e30 (48 bytes, 17 insns) */
void f_12218e30(void) {
  FTRACE(0x12218e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12218e31 mov ebp, esp */
  EBP = (ESP);
  /* 12218e33 push ecx */
  push32((uint32_t)(ECX));
  /* 12218e34 push 9 */
  push32((uint32_t)(0x9u));
  /* 12218e36 call 0x12218b30 */
  push32(0x12218e3bu); f_12218b30();
  /* 12218e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218e3e mov eax, dword ptr [0x122407bc] */
  EAX = (r32((uint32_t)(0x122407bc)));
  /* 12218e43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12218e46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218e49 mov dword ptr [0x122407bc], ecx */
  w32((uint32_t)(0x122407bc), (ECX));
  /* 12218e4f push 9 */
  push32((uint32_t)(0x9u));
  /* 12218e51 call 0x12218bd0 */
  push32(0x12218e56u); f_12218bd0();
  /* 12218e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218e59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218e5c mov esp, ebp */
  ESP = (EBP);
  /* 12218e5e pop ebp */
  EBP = (pop32());
  /* 12218e5f ret  */
  ESPCHK(0x12218e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e60 @ 0x12218e60 (10 bytes, 5 insns) */
void f_12218e60(void) {
  FTRACE(0x12218e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12218e61 mov ebp, esp */
  EBP = (ESP);
  /* 12218e63 mov eax, dword ptr [0x122407bc] */
  EAX = (r32((uint32_t)(0x122407bc)));
  /* 12218e68 pop ebp */
  EBP = (pop32());
  /* 12218e69 ret  */
  ESPCHK(0x12218e60u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12218e70 (45 bytes, 19 insns) */
void f_12218e70(void) {
  FTRACE(0x12218e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12218e71 mov ebp, esp */
  EBP = (ESP);
  /* 12218e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12218e74 mov eax, dword ptr [0x122407bc] */
  EAX = (r32((uint32_t)(0x122407bc)));
  /* 12218e79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12218e7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218e80 je 0x12218e90 */
  if (C.zf) goto L_12218e90;
  /* 12218e82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218e85 push ecx */
  push32((uint32_t)(ECX));
  /* 12218e86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12218e89u);
  /* 12218e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12218e8e jne 0x12218e94 */
  if (!C.zf) goto L_12218e94;
L_12218e90:;
  /* 12218e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12218e92 jmp 0x12218e99 */
  goto L_12218e99;
L_12218e94:;
  /* 12218e94 mov eax, 1 */
  EAX = (0x1u);
L_12218e99:;
  /* 12218e99 mov esp, ebp */
  ESP = (EBP);
  /* 12218e9b pop ebp */
  EBP = (pop32());
  /* 12218e9c ret  */
  ESPCHK(0x12218e70u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12218ea0 (88 bytes, 40 insns) */
void f_12218ea0(void) {
  FTRACE(0x12218ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218ea0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12218ea4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12218ea8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12218eaa je 0x12218ef3 */
  if (C.zf) goto L_12218ef3;
  /* 12218eac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12218eae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12218eb2 push edi */
  push32((uint32_t)(EDI));
  /* 12218eb3 mov edi, ecx */
  EDI = (ECX);
  /* 12218eb5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218eb8 jb 0x12218ee7 */
  if (C.cf) goto L_12218ee7;
  /* 12218eba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12218ebc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12218ebf je 0x12218ec9 */
  if (C.zf) goto L_12218ec9;
  /* 12218ec1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12218ec3:;
  /* 12218ec3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12218ec5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12218ec6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12218ec7 jne 0x12218ec3 */
  if (!C.zf) goto L_12218ec3;
L_12218ec9:;
  /* 12218ec9 mov ecx, eax */
  ECX = (EAX);
  /* 12218ecb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12218ece add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218ed0 mov ecx, eax */
  ECX = (EAX);
  /* 12218ed2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12218ed5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218ed7 mov ecx, edx */
  ECX = (EDX);
  /* 12218ed9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12218edc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12218edf je 0x12218ee7 */
  if (C.zf) goto L_12218ee7;
  /* 12218ee1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12218ee3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12218ee5 je 0x12218eed */
  if (C.zf) goto L_12218eed;
L_12218ee7:;
  /* 12218ee7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12218ee9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12218eea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12218eeb jne 0x12218ee7 */
  if (!C.zf) goto L_12218ee7;
L_12218eed:;
  /* 12218eed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12218ef1 pop edi */
  EDI = (pop32());
  /* 12218ef2 ret  */
  ESPCHK(0x12218ea0u, _esp0);
  ESP += 4; return;
L_12218ef3:;
  /* 12218ef3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12218ef7 ret  */
  ESPCHK(0x12218ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x12218f00 (23 bytes, 10 insns) */
void f_12218f00(void) {
  FTRACE(0x12218f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12218f01 mov ebp, esp */
  EBP = (ESP);
  /* 12218f03 mov eax, dword ptr [0x122407b8] */
  EAX = (r32((uint32_t)(0x122407b8)));
  /* 12218f08 push eax */
  push32((uint32_t)(EAX));
  /* 12218f09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218f0c push ecx */
  push32((uint32_t)(ECX));
  /* 12218f0d call 0x12218f20 */
  push32(0x12218f12u); f_12218f20();
  /* 12218f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218f15 pop ebp */
  EBP = (pop32());
  /* 12218f16 ret  */
  ESPCHK(0x12218f00u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12218f20 (87 bytes, 34 insns) */
void f_12218f20(void) {
  FTRACE(0x12218f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12218f21 mov ebp, esp */
  EBP = (ESP);
  /* 12218f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12218f24 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218f28 jbe 0x12218f2e */
  if ((C.cf||C.zf)) goto L_12218f2e;
  /* 12218f2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12218f2c jmp 0x12218f73 */
  goto L_12218f73;
L_12218f2e:;
  /* 12218f2e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218f32 ja 0x12218f45 */
  if ((!C.cf&&!C.zf)) goto L_12218f45;
  /* 12218f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218f37 push eax */
  push32((uint32_t)(EAX));
  /* 12218f38 call 0x12218f80 */
  push32(0x12218f3du); f_12218f80();
  /* 12218f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218f40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12218f43 jmp 0x12218f4c */
  goto L_12218f4c;
L_12218f45:;
  /* 12218f45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12218f4c:;
  /* 12218f4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218f50 jne 0x12218f58 */
  if (!C.zf) goto L_12218f58;
  /* 12218f52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218f56 jne 0x12218f5d */
  if (!C.zf) goto L_12218f5d;
L_12218f58:;
  /* 12218f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218f5b jmp 0x12218f73 */
  goto L_12218f73;
L_12218f5d:;
  /* 12218f5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218f60 push ecx */
  push32((uint32_t)(ECX));
  /* 12218f61 call 0x12218e70 */
  push32(0x12218f66u); f_12218e70();
  /* 12218f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12218f6b jne 0x12218f71 */
  if (!C.zf) goto L_12218f71;
  /* 12218f6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12218f6f jmp 0x12218f73 */
  goto L_12218f73;
L_12218f71:;
  /* 12218f71 jmp 0x12218f2e */
  goto L_12218f2e;
L_12218f73:;
  /* 12218f73 mov esp, ebp */
  ESP = (EBP);
  /* 12218f75 pop ebp */
  EBP = (pop32());
  /* 12218f76 ret  */
  ESPCHK(0x12218f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f80 @ 0x12218f80 (109 bytes, 37 insns) */
void f_12218f80(void) {
  FTRACE(0x12218f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12218f81 mov ebp, esp */
  EBP = (ESP);
  /* 12218f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12218f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218f87 cmp eax, dword ptr [0x1223ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1223ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218f8d ja 0x12218fbd */
  if ((!C.cf&&!C.zf)) goto L_12218fbd;
  /* 12218f8f push 9 */
  push32((uint32_t)(0x9u));
  /* 12218f91 call 0x12218b30 */
  push32(0x12218f96u); f_12218b30();
  /* 12218f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218f99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218f9c push ecx */
  push32((uint32_t)(ECX));
  /* 12218f9d call 0x12219ac0 */
  push32(0x12218fa2u); f_12219ac0();
  /* 12218fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12218fa8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12218faa call 0x12218bd0 */
  push32(0x12218fafu); f_12218bd0();
  /* 12218faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12218fb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218fb6 je 0x12218fbd */
  if (C.zf) goto L_12218fbd;
  /* 12218fb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12218fbb jmp 0x12218fe9 */
  goto L_12218fe9;
L_12218fbd:;
  /* 12218fbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12218fc1 jne 0x12218fca */
  if (!C.zf) goto L_12218fca;
  /* 12218fc3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12218fca:;
  /* 12218fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218fcd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12218fd0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12218fd3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12218fd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12218fd9 push eax */
  push32((uint32_t)(EAX));
  /* 12218fda push 0 */
  push32((uint32_t)(0x0u));
  /* 12218fdc mov ecx, dword ptr [0x12241f6c] */
  ECX = (r32((uint32_t)(0x12241f6c)));
  /* 12218fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 12218fe3 call dword ptr [0x12243328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243328))), 0x12218fe9u);
L_12218fe9:;
  /* 12218fe9 mov esp, ebp */
  ESP = (EBP);
  /* 12218feb pop ebp */
  EBP = (pop32());
  /* 12218fec ret  */
  ESPCHK(0x12218f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ff0 @ 0x12218ff0 (10 bytes, 5 insns) */
void f_12218ff0(void) {
  FTRACE(0x12218ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12218ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12218ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12218ff3 mov eax, 1 */
  EAX = (0x1u);
  /* 12218ff8 pop ebp */
  EBP = (pop32());
  /* 12218ff9 ret  */
  ESPCHK(0x12218ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009000 @ 0x12219000 (173 bytes, 59 insns) */
void f_12219000(void) {
  FTRACE(0x12219000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12219000 push ebp */
  push32((uint32_t)(EBP));
  /* 12219001 mov ebp, esp */
  EBP = (ESP);
  /* 12219003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219006 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221900a jbe 0x12219013 */
  if ((C.cf||C.zf)) goto L_12219013;
  /* 1221900c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221900e jmp 0x122190a9 */
  goto L_122190a9;
L_12219013:;
  /* 12219013 push 9 */
  push32((uint32_t)(0x9u));
  /* 12219015 call 0x12218b30 */
  push32(0x1221901au); f_12218b30();
  /* 1221901a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221901d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219020 push eax */
  push32((uint32_t)(EAX));
  /* 12219021 call 0x12219430 */
  push32(0x12219026u); f_12219430();
  /* 12219026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219029 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221902c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219030 je 0x12219071 */
  if (C.zf) goto L_12219071;
  /* 12219032 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12219039 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221903c cmp ecx, dword ptr [0x1223ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1223ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219042 ja 0x12219062 */
  if ((!C.cf&&!C.zf)) goto L_12219062;
  /* 12219044 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12219047 push edx */
  push32((uint32_t)(EDX));
  /* 12219048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221904b push eax */
  push32((uint32_t)(EAX));
  /* 1221904c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221904f push ecx */
  push32((uint32_t)(ECX));
  /* 12219050 call 0x1221a300 */
  push32(0x12219055u); f_1221a300();
  /* 12219055 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221905a je 0x12219062 */
  if (C.zf) goto L_12219062;
  /* 1221905c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221905f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12219062:;
  /* 12219062 push 9 */
  push32((uint32_t)(0x9u));
  /* 12219064 call 0x12218bd0 */
  push32(0x12219069u); f_12218bd0();
  /* 12219069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221906c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221906f jmp 0x122190a9 */
  goto L_122190a9;
L_12219071:;
  /* 12219071 push 9 */
  push32((uint32_t)(0x9u));
  /* 12219073 call 0x12218bd0 */
  push32(0x12219078u); f_12218bd0();
  /* 12219078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221907b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221907f jne 0x12219088 */
  if (!C.zf) goto L_12219088;
  /* 12219081 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12219088:;
  /* 12219088 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221908b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221908e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12219090 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12219093 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12219096 push ecx */
  push32((uint32_t)(ECX));
  /* 12219097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221909a push edx */
  push32((uint32_t)(EDX));
  /* 1221909b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1221909d mov eax, dword ptr [0x12241f6c] */
  EAX = (r32((uint32_t)(0x12241f6c)));
  /* 122190a2 push eax */
  push32((uint32_t)(EAX));
  /* 122190a3 call dword ptr [0x12243330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243330))), 0x122190a9u);
L_122190a9:;
  /* 122190a9 mov esp, ebp */
  ESP = (EBP);
  /* 122190ab pop ebp */
  EBP = (pop32());
  /* 122190ac ret  */
  ESPCHK(0x12219000u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x122190b0 (490 bytes, 165 insns) */
void f_122190b0(void) {
  FTRACE(0x122190b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122190b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122190b1 mov ebp, esp */
  EBP = (ESP);
  /* 122190b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122190b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122190ba jne 0x122190cd */
  if (!C.zf) goto L_122190cd;
  /* 122190bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122190bf push eax */
  push32((uint32_t)(EAX));
  /* 122190c0 call 0x12218f00 */
  push32(0x122190c5u); f_12218f00();
  /* 122190c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122190c8 jmp 0x12219296 */
  goto L_12219296;
L_122190cd:;
  /* 122190cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122190d1 jne 0x122190e6 */
  if (!C.zf) goto L_122190e6;
  /* 122190d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122190d6 push ecx */
  push32((uint32_t)(ECX));
  /* 122190d7 call 0x122192a0 */
  push32(0x122190dcu); f_122192a0();
  /* 122190dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122190df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122190e1 jmp 0x12219296 */
  goto L_12219296;
L_122190e6:;
  /* 122190e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122190ed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122190f1 ja 0x12219269 */
  if ((!C.cf&&!C.zf)) goto L_12219269;
  /* 122190f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 122190f9 call 0x12218b30 */
  push32(0x122190feu); f_12218b30();
  /* 122190fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219104 push edx */
  push32((uint32_t)(EDX));
  /* 12219105 call 0x12219430 */
  push32(0x1221910au); f_12219430();
  /* 1221910a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221910d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12219110 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219114 je 0x1221922c */
  if (C.zf) goto L_1221922c;
  /* 1221911a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221911d cmp eax, dword ptr [0x1223ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1223ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219123 ja 0x122191a0 */
  if ((!C.cf&&!C.zf)) goto L_122191a0;
  /* 12219125 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12219128 push ecx */
  push32((uint32_t)(ECX));
  /* 12219129 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221912c push edx */
  push32((uint32_t)(EDX));
  /* 1221912d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12219130 push eax */
  push32((uint32_t)(EAX));
  /* 12219131 call 0x1221a300 */
  push32(0x12219136u); f_1221a300();
  /* 12219136 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221913b je 0x12219145 */
  if (C.zf) goto L_12219145;
  /* 1221913d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219140 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12219143 jmp 0x122191a0 */
  goto L_122191a0;
L_12219145:;
  /* 12219145 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12219148 push edx */
  push32((uint32_t)(EDX));
  /* 12219149 call 0x12219ac0 */
  push32(0x1221914eu); f_12219ac0();
  /* 1221914e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219151 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12219154 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219158 je 0x122191a0 */
  if (C.zf) goto L_122191a0;
  /* 1221915a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221915d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12219160 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219163 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12219166 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219169 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221916c jae 0x12219176 */
  if (!C.cf) goto L_12219176;
  /* 1221916e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12219174 jmp 0x1221917c */
  goto L_1221917c;
L_12219176:;
  /* 12219176 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12219179 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1221917c:;
  /* 1221917c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221917f push edx */
  push32((uint32_t)(EDX));
  /* 12219180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219183 push eax */
  push32((uint32_t)(EAX));
  /* 12219184 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219187 push ecx */
  push32((uint32_t)(ECX));
  /* 12219188 call 0x1221ba10 */
  push32(0x1221918du); f_1221ba10();
  /* 1221918d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219190 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219193 push edx */
  push32((uint32_t)(EDX));
  /* 12219194 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12219197 push eax */
  push32((uint32_t)(EAX));
  /* 12219198 call 0x122194f0 */
  push32(0x1221919du); f_122194f0();
  /* 1221919d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122191a0:;
  /* 122191a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122191a4 jne 0x12219220 */
  if (!C.zf) goto L_12219220;
  /* 122191a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122191aa jne 0x122191b3 */
  if (!C.zf) goto L_122191b3;
  /* 122191ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_122191b3:;
  /* 122191b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122191b6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122191b9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 122191bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 122191bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122191c2 push edx */
  push32((uint32_t)(EDX));
  /* 122191c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122191c5 mov eax, dword ptr [0x12241f6c] */
  EAX = (r32((uint32_t)(0x12241f6c)));
  /* 122191ca push eax */
  push32((uint32_t)(EAX));
  /* 122191cb call dword ptr [0x12243328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243328))), 0x122191d1u);
  /* 122191d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122191d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122191d8 je 0x12219220 */
  if (C.zf) goto L_12219220;
  /* 122191da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122191dd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 122191e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122191e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122191e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122191e9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122191ec jae 0x122191f6 */
  if (!C.cf) goto L_122191f6;
  /* 122191ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122191f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122191f4 jmp 0x122191fc */
  goto L_122191fc;
L_122191f6:;
  /* 122191f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122191f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_122191fc:;
  /* 122191fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122191ff push eax */
  push32((uint32_t)(EAX));
  /* 12219200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219203 push ecx */
  push32((uint32_t)(ECX));
  /* 12219204 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219207 push edx */
  push32((uint32_t)(EDX));
  /* 12219208 call 0x1221ba10 */
  push32(0x1221920du); f_1221ba10();
  /* 1221920d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219213 push eax */
  push32((uint32_t)(EAX));
  /* 12219214 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12219217 push ecx */
  push32((uint32_t)(ECX));
  /* 12219218 call 0x122194f0 */
  push32(0x1221921du); f_122194f0();
  /* 1221921d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12219220:;
  /* 12219220 push 9 */
  push32((uint32_t)(0x9u));
  /* 12219222 call 0x12218bd0 */
  push32(0x12219227u); f_12218bd0();
  /* 12219227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221922a jmp 0x12219269 */
  goto L_12219269;
L_1221922c:;
  /* 1221922c push 9 */
  push32((uint32_t)(0x9u));
  /* 1221922e call 0x12218bd0 */
  push32(0x12219233u); f_12218bd0();
  /* 12219233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219236 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221923a jne 0x12219243 */
  if (!C.zf) goto L_12219243;
  /* 1221923c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12219243:;
  /* 12219243 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12219246 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219249 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1221924c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1221924f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12219252 push eax */
  push32((uint32_t)(EAX));
  /* 12219253 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219256 push ecx */
  push32((uint32_t)(ECX));
  /* 12219257 push 0 */
  push32((uint32_t)(0x0u));
  /* 12219259 mov edx, dword ptr [0x12241f6c] */
  EDX = (r32((uint32_t)(0x12241f6c)));
  /* 1221925f push edx */
  push32((uint32_t)(EDX));
  /* 12219260 call dword ptr [0x12243330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243330))), 0x12219266u);
  /* 12219266 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12219269:;
  /* 12219269 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221926d jne 0x12219278 */
  if (!C.zf) goto L_12219278;
  /* 1221926f cmp dword ptr [0x122407b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219276 jne 0x1221927d */
  if (!C.zf) goto L_1221927d;
L_12219278:;
  /* 12219278 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221927b jmp 0x12219296 */
  goto L_12219296;
L_1221927d:;
  /* 1221927d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12219280 push eax */
  push32((uint32_t)(EAX));
  /* 12219281 call 0x12218e70 */
  push32(0x12219286u); f_12218e70();
  /* 12219286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221928b jne 0x12219291 */
  if (!C.zf) goto L_12219291;
  /* 1221928d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221928f jmp 0x12219296 */
  goto L_12219296;
L_12219291:;
  /* 12219291 jmp 0x122190e6 */
  goto L_122190e6;
L_12219296:;
  /* 12219296 mov esp, ebp */
  ESP = (EBP);
  /* 12219298 pop ebp */
  EBP = (pop32());
  /* 12219299 ret  */
  ESPCHK(0x122190b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100092a0 @ 0x122192a0 (104 bytes, 38 insns) */
void f_122192a0(void) {
  FTRACE(0x122192a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122192a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122192a1 mov ebp, esp */
  EBP = (ESP);
  /* 122192a3 push ecx */
  push32((uint32_t)(ECX));
  /* 122192a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122192a8 jne 0x122192ac */
  if (!C.zf) goto L_122192ac;
  /* 122192aa jmp 0x12219304 */
  goto L_12219304;
L_122192ac:;
  /* 122192ac push 9 */
  push32((uint32_t)(0x9u));
  /* 122192ae call 0x12218b30 */
  push32(0x122192b3u); f_12218b30();
  /* 122192b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122192b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122192b9 push eax */
  push32((uint32_t)(EAX));
  /* 122192ba call 0x12219430 */
  push32(0x122192bfu); f_12219430();
  /* 122192bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122192c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122192c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122192c9 je 0x122192e7 */
  if (C.zf) goto L_122192e7;
  /* 122192cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122192ce push ecx */
  push32((uint32_t)(ECX));
  /* 122192cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122192d2 push edx */
  push32((uint32_t)(EDX));
  /* 122192d3 call 0x122194f0 */
  push32(0x122192d8u); f_122194f0();
  /* 122192d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122192db push 9 */
  push32((uint32_t)(0x9u));
  /* 122192dd call 0x12218bd0 */
  push32(0x122192e2u); f_12218bd0();
  /* 122192e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122192e5 jmp 0x12219304 */
  goto L_12219304;
L_122192e7:;
  /* 122192e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 122192e9 call 0x12218bd0 */
  push32(0x122192eeu); f_12218bd0();
  /* 122192ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122192f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122192f4 push eax */
  push32((uint32_t)(EAX));
  /* 122192f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122192f7 mov ecx, dword ptr [0x12241f6c] */
  ECX = (r32((uint32_t)(0x12241f6c)));
  /* 122192fd push ecx */
  push32((uint32_t)(ECX));
  /* 122192fe call dword ptr [0x12243354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243354))), 0x12219304u);
L_12219304:;
  /* 12219304 mov esp, ebp */
  ESP = (EBP);
  /* 12219306 pop ebp */
  EBP = (pop32());
  /* 12219307 ret  */
  ESPCHK(0x122192a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009310 @ 0x12219310 (116 bytes, 34 insns) */
void f_12219310(void) {
  FTRACE(0x12219310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12219310 push ebp */
  push32((uint32_t)(EBP));
  /* 12219311 mov ebp, esp */
  EBP = (ESP);
  /* 12219313 push ecx */
  push32((uint32_t)(ECX));
  /* 12219314 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1221931b push 9 */
  push32((uint32_t)(0x9u));
  /* 1221931d call 0x12218b30 */
  push32(0x12219322u); f_12218b30();
  /* 12219322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219325 call 0x1221aa20 */
  push32(0x1221932au); f_1221aa20();
  /* 1221932a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221932c jge 0x12219335 */
  if ((C.sf==C.of)) goto L_12219335;
  /* 1221932e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12219335:;
  /* 12219335 push 9 */
  push32((uint32_t)(0x9u));
  /* 12219337 call 0x12218bd0 */
  push32(0x1221933cu); f_12218bd0();
  /* 1221933c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221933f push 0 */
  push32((uint32_t)(0x0u));
  /* 12219341 push 0 */
  push32((uint32_t)(0x0u));
  /* 12219343 mov eax, dword ptr [0x12241f6c] */
  EAX = (r32((uint32_t)(0x12241f6c)));
  /* 12219348 push eax */
  push32((uint32_t)(EAX));
  /* 12219349 call dword ptr [0x122433d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433d0))), 0x1221934fu);
  /* 1221934f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12219351 jne 0x1221937d */
  if (!C.zf) goto L_1221937d;
  /* 12219353 call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x12219359u);
  /* 12219359 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221935c jne 0x12219376 */
  if (!C.zf) goto L_12219376;
  /* 1221935e call 0x1221d010 */
  push32(0x12219363u); f_1221d010();
  /* 12219363 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12219369 call 0x1221d000 */
  push32(0x1221936eu); f_1221d000();
  /* 1221936e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12219374 jmp 0x1221937d */
  goto L_1221937d;
L_12219376:;
  /* 12219376 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1221937d:;
  /* 1221937d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219380 mov esp, ebp */
  ESP = (EBP);
  /* 12219382 pop ebp */
  EBP = (pop32());
  /* 12219383 ret  */
  ESPCHK(0x12219310u, _esp0);
  ESP += 4; return;
}

/* FUN_10009390 @ 0x12219390 (10 bytes, 5 insns) */
void f_12219390(void) {
  FTRACE(0x12219390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12219390 push ebp */
  push32((uint32_t)(EBP));
  /* 12219391 mov ebp, esp */
  EBP = (ESP);
  /* 12219393 call 0x12219310 */
  push32(0x12219398u); f_12219310();
  /* 12219398 pop ebp */
  EBP = (pop32());
  /* 12219399 ret  */
  ESPCHK(0x12219390u, _esp0);
  ESP += 4; return;
}

