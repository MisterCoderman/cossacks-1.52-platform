#include "recomp.h"

/* thunk_FUN_100047a0 @ 0x10a01005 (5 bytes, 1 insns) */
void f_10a01005(void) {
  FTRACE(0x10a01005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a01005 jmp 0x10a047a0 */
  f_10a047a0(); return;
}

/* OnInit @ 0x10a0100a (5 bytes, 1 insns) */
void f_10a0100a(void) {
  FTRACE(0x10a0100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0100a jmp 0x10a01090 */
  f_10a01090(); return;
}

/* thunk_FUN_10001030 @ 0x10a0100f (5 bytes, 1 insns) */
void f_10a0100f(void) {
  FTRACE(0x10a0100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a0100f jmp 0x10a01030 */
  f_10a01030(); return;
}

/* ProcessScenary @ 0x10a01014 (5 bytes, 1 insns) */
void f_10a01014(void) {
  FTRACE(0x10a01014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a01014 jmp 0x10a01b40 */
  f_10a01b40(); return;
}

/* FUN_10001030 @ 0x10a01030 (67 bytes, 26 insns) */
void f_10a01030(void) {
  FTRACE(0x10a01030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a01030 push ebp */
  push32((uint32_t)(EBP));
  /* 10a01031 mov ebp, esp */
  EBP = (ESP);
  /* 10a01033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a01036 push ebx */
  push32((uint32_t)(EBX));
  /* 10a01037 push esi */
  push32((uint32_t)(ESI));
  /* 10a01038 push edi */
  push32((uint32_t)(EDI));
  /* 10a01039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10a0103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10a01041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a01046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a01048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01052 je 0x10a01056 */
  if (C.zf) goto L_10a01056;
  /* 10a01054 jmp 0x10a0105b */
  goto L_10a0105b;
L_10a01056:;
  /* 10a01056 call 0x10a0100a */
  push32(0x10a0105bu); f_10a0100a();
L_10a0105b:;
  /* 10a0105b mov eax, 1 */
  EAX = (0x1u);
  /* 10a01060 pop edi */
  EDI = (pop32());
  /* 10a01061 pop esi */
  ESI = (pop32());
  /* 10a01062 pop ebx */
  EBX = (pop32());
  /* 10a01063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01068 call 0x10a048e0 */
  push32(0x10a0106du); f_10a048e0();
  /* 10a0106d mov esp, ebp */
  ESP = (EBP);
  /* 10a0106f pop ebp */
  EBP = (pop32());
  /* 10a01070 ret 0xc */
  ESPCHK(0x10a01030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10a01090 (2188 bytes, 579 insns) */
void f_10a01090(void) {
  FTRACE(0x10a01090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a01090 push ebp */
  push32((uint32_t)(EBP));
  /* 10a01091 mov ebp, esp */
  EBP = (ESP);
  /* 10a01093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a01096 push ebx */
  push32((uint32_t)(EBX));
  /* 10a01097 push esi */
  push32((uint32_t)(ESI));
  /* 10a01098 push edi */
  push32((uint32_t)(EDI));
  /* 10a01099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10a0109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10a010a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a010a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a010a8 mov esi, esp */
  ESI = (ESP);
  /* 10a010aa push 0x10a2c23c */
  push32((uint32_t)(0x10a2c23cu));
  /* 10a010af push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a010b4 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a010bau);
  /* 10a010ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a010bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a010bf call 0x10a048e0 */
  push32(0x10a010c4u); f_10a048e0();
  /* 10a010c4 mov esi, esp */
  ESI = (ESP);
  /* 10a010c6 push 0x10a2c234 */
  push32((uint32_t)(0x10a2c234u));
  /* 10a010cb push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a010d0 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a010d6u);
  /* 10a010d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a010d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a010db call 0x10a048e0 */
  push32(0x10a010e0u); f_10a048e0();
  /* 10a010e0 mov esi, esp */
  ESI = (ESP);
  /* 10a010e2 push 0x10a2c22c */
  push32((uint32_t)(0x10a2c22cu));
  /* 10a010e7 push 0x10a314d0 */
  push32((uint32_t)(0x10a314d0u));
  /* 10a010ec call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a010f2u);
  /* 10a010f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a010f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a010f7 call 0x10a048e0 */
  push32(0x10a010fcu); f_10a048e0();
  /* 10a010fc mov esi, esp */
  ESI = (ESP);
  /* 10a010fe push 0x10a2c224 */
  push32((uint32_t)(0x10a2c224u));
  /* 10a01103 push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a01108 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a0110eu);
  /* 10a0110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01113 call 0x10a048e0 */
  push32(0x10a01118u); f_10a048e0();
  /* 10a01118 mov esi, esp */
  ESI = (ESP);
  /* 10a0111a push 0x10a2c21c */
  push32((uint32_t)(0x10a2c21cu));
  /* 10a0111f push 0x10a314e0 */
  push32((uint32_t)(0x10a314e0u));
  /* 10a01124 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a0112au);
  /* 10a0112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0112f call 0x10a048e0 */
  push32(0x10a01134u); f_10a048e0();
  /* 10a01134 mov esi, esp */
  ESI = (ESP);
  /* 10a01136 push 0x10a2c214 */
  push32((uint32_t)(0x10a2c214u));
  /* 10a0113b push 0x10a314f0 */
  push32((uint32_t)(0x10a314f0u));
  /* 10a01140 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a01146u);
  /* 10a01146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0114b call 0x10a048e0 */
  push32(0x10a01150u); f_10a048e0();
  /* 10a01150 mov esi, esp */
  ESI = (ESP);
  /* 10a01152 push 0x10a2c20c */
  push32((uint32_t)(0x10a2c20cu));
  /* 10a01157 push 0x10a314f8 */
  push32((uint32_t)(0x10a314f8u));
  /* 10a0115c call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a01162u);
  /* 10a01162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01167 call 0x10a048e0 */
  push32(0x10a0116cu); f_10a048e0();
  /* 10a0116c mov esi, esp */
  ESI = (ESP);
  /* 10a0116e push 0x10a2c204 */
  push32((uint32_t)(0x10a2c204u));
  /* 10a01173 push 0x10a31500 */
  push32((uint32_t)(0x10a31500u));
  /* 10a01178 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a0117eu);
  /* 10a0117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01183 call 0x10a048e0 */
  push32(0x10a01188u); f_10a048e0();
  /* 10a01188 mov esi, esp */
  ESI = (ESP);
  /* 10a0118a push 0x10a2c1fc */
  push32((uint32_t)(0x10a2c1fcu));
  /* 10a0118f push 0x10a31508 */
  push32((uint32_t)(0x10a31508u));
  /* 10a01194 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a0119au);
  /* 10a0119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0119f call 0x10a048e0 */
  push32(0x10a011a4u); f_10a048e0();
  /* 10a011a4 mov esi, esp */
  ESI = (ESP);
  /* 10a011a6 push 0x10a2c1f4 */
  push32((uint32_t)(0x10a2c1f4u));
  /* 10a011ab push 0x10a31468 */
  push32((uint32_t)(0x10a31468u));
  /* 10a011b0 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a011b6u);
  /* 10a011b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a011b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a011bb call 0x10a048e0 */
  push32(0x10a011c0u); f_10a048e0();
  /* 10a011c0 mov esi, esp */
  ESI = (ESP);
  /* 10a011c2 push 0x10a2c1ec */
  push32((uint32_t)(0x10a2c1ecu));
  /* 10a011c7 push 0x10a31460 */
  push32((uint32_t)(0x10a31460u));
  /* 10a011cc call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a011d2u);
  /* 10a011d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a011d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a011d7 call 0x10a048e0 */
  push32(0x10a011dcu); f_10a048e0();
  /* 10a011dc mov esi, esp */
  ESI = (ESP);
  /* 10a011de push 0x10a2c1e4 */
  push32((uint32_t)(0x10a2c1e4u));
  /* 10a011e3 push 0x10a31478 */
  push32((uint32_t)(0x10a31478u));
  /* 10a011e8 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a011eeu);
  /* 10a011ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a011f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a011f3 call 0x10a048e0 */
  push32(0x10a011f8u); f_10a048e0();
  /* 10a011f8 mov esi, esp */
  ESI = (ESP);
  /* 10a011fa push 0x10a2c1dc */
  push32((uint32_t)(0x10a2c1dcu));
  /* 10a011ff push 0x10a31470 */
  push32((uint32_t)(0x10a31470u));
  /* 10a01204 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a0120au);
  /* 10a0120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0120f call 0x10a048e0 */
  push32(0x10a01214u); f_10a048e0();
  /* 10a01214 mov esi, esp */
  ESI = (ESP);
  /* 10a01216 push 0x10a2c1d4 */
  push32((uint32_t)(0x10a2c1d4u));
  /* 10a0121b push 0x10a31488 */
  push32((uint32_t)(0x10a31488u));
  /* 10a01220 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a01226u);
  /* 10a01226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0122b call 0x10a048e0 */
  push32(0x10a01230u); f_10a048e0();
  /* 10a01230 mov esi, esp */
  ESI = (ESP);
  /* 10a01232 push 0x10a2c1cc */
  push32((uint32_t)(0x10a2c1ccu));
  /* 10a01237 push 0x10a31480 */
  push32((uint32_t)(0x10a31480u));
  /* 10a0123c call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a01242u);
  /* 10a01242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01247 call 0x10a048e0 */
  push32(0x10a0124cu); f_10a048e0();
  /* 10a0124c mov esi, esp */
  ESI = (ESP);
  /* 10a0124e push 0x10a2c1c4 */
  push32((uint32_t)(0x10a2c1c4u));
  /* 10a01253 push 0x10a31498 */
  push32((uint32_t)(0x10a31498u));
  /* 10a01258 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a0125eu);
  /* 10a0125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01263 call 0x10a048e0 */
  push32(0x10a01268u); f_10a048e0();
  /* 10a01268 mov esi, esp */
  ESI = (ESP);
  /* 10a0126a push 0x10a2c1bc */
  push32((uint32_t)(0x10a2c1bcu));
  /* 10a0126f push 0x10a31490 */
  push32((uint32_t)(0x10a31490u));
  /* 10a01274 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a0127au);
  /* 10a0127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0127f call 0x10a048e0 */
  push32(0x10a01284u); f_10a048e0();
  /* 10a01284 mov esi, esp */
  ESI = (ESP);
  /* 10a01286 push 0x10a2c1b4 */
  push32((uint32_t)(0x10a2c1b4u));
  /* 10a0128b push 0x10a314a8 */
  push32((uint32_t)(0x10a314a8u));
  /* 10a01290 call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a01296u);
  /* 10a01296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0129b call 0x10a048e0 */
  push32(0x10a012a0u); f_10a048e0();
  /* 10a012a0 mov esi, esp */
  ESI = (ESP);
  /* 10a012a2 push 0x10a2c1ac */
  push32((uint32_t)(0x10a2c1acu));
  /* 10a012a7 push 0x10a314a0 */
  push32((uint32_t)(0x10a314a0u));
  /* 10a012ac call dword ptr [0x10a3449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3449c))), 0x10a012b2u);
  /* 10a012b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a012b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a012b7 call 0x10a048e0 */
  push32(0x10a012bcu); f_10a048e0();
  /* 10a012bc mov esi, esp */
  ESI = (ESP);
  /* 10a012be push 0x10a2c1a4 */
  push32((uint32_t)(0x10a2c1a4u));
  /* 10a012c3 push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a012c8 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a012ceu);
  /* 10a012ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a012d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a012d3 call 0x10a048e0 */
  push32(0x10a012d8u); f_10a048e0();
  /* 10a012d8 mov esi, esp */
  ESI = (ESP);
  /* 10a012da push 0x10a2c19c */
  push32((uint32_t)(0x10a2c19cu));
  /* 10a012df push 0x10a31420 */
  push32((uint32_t)(0x10a31420u));
  /* 10a012e4 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a012eau);
  /* 10a012ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a012ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a012ef call 0x10a048e0 */
  push32(0x10a012f4u); f_10a048e0();
  /* 10a012f4 mov esi, esp */
  ESI = (ESP);
  /* 10a012f6 push 0x10a2c194 */
  push32((uint32_t)(0x10a2c194u));
  /* 10a012fb push 0x10a31418 */
  push32((uint32_t)(0x10a31418u));
  /* 10a01300 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a01306u);
  /* 10a01306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0130b call 0x10a048e0 */
  push32(0x10a01310u); f_10a048e0();
  /* 10a01310 mov esi, esp */
  ESI = (ESP);
  /* 10a01312 push 0x10a2c18c */
  push32((uint32_t)(0x10a2c18cu));
  /* 10a01317 push 0x10a31430 */
  push32((uint32_t)(0x10a31430u));
  /* 10a0131c call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a01322u);
  /* 10a01322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01327 call 0x10a048e0 */
  push32(0x10a0132cu); f_10a048e0();
  /* 10a0132c mov esi, esp */
  ESI = (ESP);
  /* 10a0132e push 0x10a2c184 */
  push32((uint32_t)(0x10a2c184u));
  /* 10a01333 push 0x10a31428 */
  push32((uint32_t)(0x10a31428u));
  /* 10a01338 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a0133eu);
  /* 10a0133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01343 call 0x10a048e0 */
  push32(0x10a01348u); f_10a048e0();
  /* 10a01348 mov esi, esp */
  ESI = (ESP);
  /* 10a0134a push 0x10a2c17c */
  push32((uint32_t)(0x10a2c17cu));
  /* 10a0134f push 0x10a31440 */
  push32((uint32_t)(0x10a31440u));
  /* 10a01354 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a0135au);
  /* 10a0135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0135f call 0x10a048e0 */
  push32(0x10a01364u); f_10a048e0();
  /* 10a01364 mov esi, esp */
  ESI = (ESP);
  /* 10a01366 push 0x10a2c174 */
  push32((uint32_t)(0x10a2c174u));
  /* 10a0136b push 0x10a31438 */
  push32((uint32_t)(0x10a31438u));
  /* 10a01370 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a01376u);
  /* 10a01376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0137b call 0x10a048e0 */
  push32(0x10a01380u); f_10a048e0();
  /* 10a01380 mov esi, esp */
  ESI = (ESP);
  /* 10a01382 push 0x10a2c16c */
  push32((uint32_t)(0x10a2c16cu));
  /* 10a01387 push 0x10a31450 */
  push32((uint32_t)(0x10a31450u));
  /* 10a0138c call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a01392u);
  /* 10a01392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01397 call 0x10a048e0 */
  push32(0x10a0139cu); f_10a048e0();
  /* 10a0139c mov esi, esp */
  ESI = (ESP);
  /* 10a0139e push 0x10a2c164 */
  push32((uint32_t)(0x10a2c164u));
  /* 10a013a3 push 0x10a31448 */
  push32((uint32_t)(0x10a31448u));
  /* 10a013a8 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a013aeu);
  /* 10a013ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a013b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a013b3 call 0x10a048e0 */
  push32(0x10a013b8u); f_10a048e0();
  /* 10a013b8 mov esi, esp */
  ESI = (ESP);
  /* 10a013ba push 0x10a2c158 */
  push32((uint32_t)(0x10a2c158u));
  /* 10a013bf push 0x10a31530 */
  push32((uint32_t)(0x10a31530u));
  /* 10a013c4 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a013cau);
  /* 10a013ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a013cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a013cf call 0x10a048e0 */
  push32(0x10a013d4u); f_10a048e0();
  /* 10a013d4 mov esi, esp */
  ESI = (ESP);
  /* 10a013d6 push 0x10a2c14c */
  push32((uint32_t)(0x10a2c14cu));
  /* 10a013db push 0x10a31598 */
  push32((uint32_t)(0x10a31598u));
  /* 10a013e0 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a013e6u);
  /* 10a013e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a013e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a013eb call 0x10a048e0 */
  push32(0x10a013f0u); f_10a048e0();
  /* 10a013f0 mov esi, esp */
  ESI = (ESP);
  /* 10a013f2 push 0x10a2c140 */
  push32((uint32_t)(0x10a2c140u));
  /* 10a013f7 push 0x10a315a0 */
  push32((uint32_t)(0x10a315a0u));
  /* 10a013fc call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a01402u);
  /* 10a01402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01407 call 0x10a048e0 */
  push32(0x10a0140cu); f_10a048e0();
  /* 10a0140c mov esi, esp */
  ESI = (ESP);
  /* 10a0140e push 0x10a2c134 */
  push32((uint32_t)(0x10a2c134u));
  /* 10a01413 push 0x10a31580 */
  push32((uint32_t)(0x10a31580u));
  /* 10a01418 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a0141eu);
  /* 10a0141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01423 call 0x10a048e0 */
  push32(0x10a01428u); f_10a048e0();
  /* 10a01428 mov esi, esp */
  ESI = (ESP);
  /* 10a0142a push 0x10a2c128 */
  push32((uint32_t)(0x10a2c128u));
  /* 10a0142f push 0x10a31590 */
  push32((uint32_t)(0x10a31590u));
  /* 10a01434 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a0143au);
  /* 10a0143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0143f call 0x10a048e0 */
  push32(0x10a01444u); f_10a048e0();
  /* 10a01444 mov esi, esp */
  ESI = (ESP);
  /* 10a01446 push 0x10a2c11c */
  push32((uint32_t)(0x10a2c11cu));
  /* 10a0144b push 0x10a31568 */
  push32((uint32_t)(0x10a31568u));
  /* 10a01450 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a01456u);
  /* 10a01456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0145b call 0x10a048e0 */
  push32(0x10a01460u); f_10a048e0();
  /* 10a01460 mov esi, esp */
  ESI = (ESP);
  /* 10a01462 push 0x10a2c110 */
  push32((uint32_t)(0x10a2c110u));
  /* 10a01467 push 0x10a31578 */
  push32((uint32_t)(0x10a31578u));
  /* 10a0146c call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a01472u);
  /* 10a01472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01477 call 0x10a048e0 */
  push32(0x10a0147cu); f_10a048e0();
  /* 10a0147c mov esi, esp */
  ESI = (ESP);
  /* 10a0147e push 0x10a2c104 */
  push32((uint32_t)(0x10a2c104u));
  /* 10a01483 push 0x10a31540 */
  push32((uint32_t)(0x10a31540u));
  /* 10a01488 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a0148eu);
  /* 10a0148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01493 call 0x10a048e0 */
  push32(0x10a01498u); f_10a048e0();
  /* 10a01498 mov esi, esp */
  ESI = (ESP);
  /* 10a0149a push 0x10a2c0f8 */
  push32((uint32_t)(0x10a2c0f8u));
  /* 10a0149f push 0x10a31558 */
  push32((uint32_t)(0x10a31558u));
  /* 10a014a4 call dword ptr [0x10a344a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a0))), 0x10a014aau);
  /* 10a014aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a014ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a014af call 0x10a048e0 */
  push32(0x10a014b4u); f_10a048e0();
  /* 10a014b4 mov esi, esp */
  ESI = (ESP);
  /* 10a014b6 push 0x10a2c0ec */
  push32((uint32_t)(0x10a2c0ecu));
  /* 10a014bb push 0x10a31458 */
  push32((uint32_t)(0x10a31458u));
  /* 10a014c0 call dword ptr [0x10a344a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a4))), 0x10a014c6u);
  /* 10a014c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a014c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a014cb call 0x10a048e0 */
  push32(0x10a014d0u); f_10a048e0();
  /* 10a014d0 mov esi, esp */
  ESI = (ESP);
  /* 10a014d2 push 0x10a2c0dc */
  push32((uint32_t)(0x10a2c0dcu));
  /* 10a014d7 push 0x10a314b0 */
  push32((uint32_t)(0x10a314b0u));
  /* 10a014dc call dword ptr [0x10a344a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a8))), 0x10a014e2u);
  /* 10a014e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a014e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a014e7 call 0x10a048e0 */
  push32(0x10a014ecu); f_10a048e0();
  /* 10a014ec mov esi, esp */
  ESI = (ESP);
  /* 10a014ee push 0x10a2c0cc */
  push32((uint32_t)(0x10a2c0ccu));
  /* 10a014f3 push 0x10a314b8 */
  push32((uint32_t)(0x10a314b8u));
  /* 10a014f8 call dword ptr [0x10a344a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a8))), 0x10a014feu);
  /* 10a014fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01503 call 0x10a048e0 */
  push32(0x10a01508u); f_10a048e0();
  /* 10a01508 mov esi, esp */
  ESI = (ESP);
  /* 10a0150a push 0x10a2c0bc */
  push32((uint32_t)(0x10a2c0bcu));
  /* 10a0150f push 0x10a31520 */
  push32((uint32_t)(0x10a31520u));
  /* 10a01514 call dword ptr [0x10a344a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a8))), 0x10a0151au);
  /* 10a0151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0151f call 0x10a048e0 */
  push32(0x10a01524u); f_10a048e0();
  /* 10a01524 mov esi, esp */
  ESI = (ESP);
  /* 10a01526 push 0x10a2c0a8 */
  push32((uint32_t)(0x10a2c0a8u));
  /* 10a0152b push 0x10a31528 */
  push32((uint32_t)(0x10a31528u));
  /* 10a01530 call dword ptr [0x10a344a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a8))), 0x10a01536u);
  /* 10a01536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0153b call 0x10a048e0 */
  push32(0x10a01540u); f_10a048e0();
  /* 10a01540 mov esi, esp */
  ESI = (ESP);
  /* 10a01542 push 0x10a2c090 */
  push32((uint32_t)(0x10a2c090u));
  /* 10a01547 push 0x10a31400 */
  push32((uint32_t)(0x10a31400u));
  /* 10a0154c call dword ptr [0x10a344a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a8))), 0x10a01552u);
  /* 10a01552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01557 call 0x10a048e0 */
  push32(0x10a0155cu); f_10a048e0();
  /* 10a0155c mov esi, esp */
  ESI = (ESP);
  /* 10a0155e push 0x10a2c080 */
  push32((uint32_t)(0x10a2c080u));
  /* 10a01563 push 0x10a31408 */
  push32((uint32_t)(0x10a31408u));
  /* 10a01568 call dword ptr [0x10a344a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a8))), 0x10a0156eu);
  /* 10a0156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01573 call 0x10a048e0 */
  push32(0x10a01578u); f_10a048e0();
  /* 10a01578 mov esi, esp */
  ESI = (ESP);
  /* 10a0157a push 0x10a2c070 */
  push32((uint32_t)(0x10a2c070u));
  /* 10a0157f push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a01584 call dword ptr [0x10a344a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344a8))), 0x10a0158au);
  /* 10a0158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0158f call 0x10a048e0 */
  push32(0x10a01594u); f_10a048e0();
  /* 10a01594 mov esi, esp */
  ESI = (ESP);
  /* 10a01596 push 0x10a2c068 */
  push32((uint32_t)(0x10a2c068u));
  /* 10a0159b push 0x10a31510 */
  push32((uint32_t)(0x10a31510u));
  /* 10a015a0 call dword ptr [0x10a344ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344ac))), 0x10a015a6u);
  /* 10a015a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a015a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a015ab call 0x10a048e0 */
  push32(0x10a015b0u); f_10a048e0();
  /* 10a015b0 mov esi, esp */
  ESI = (ESP);
  /* 10a015b2 push 0x10a2c060 */
  push32((uint32_t)(0x10a2c060u));
  /* 10a015b7 push 0x10a313f8 */
  push32((uint32_t)(0x10a313f8u));
  /* 10a015bc call dword ptr [0x10a344ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344ac))), 0x10a015c2u);
  /* 10a015c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a015c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a015c7 call 0x10a048e0 */
  push32(0x10a015ccu); f_10a048e0();
  /* 10a015cc mov esi, esp */
  ESI = (ESP);
  /* 10a015ce push 0x10a2c054 */
  push32((uint32_t)(0x10a2c054u));
  /* 10a015d3 push 0x10a314e8 */
  push32((uint32_t)(0x10a314e8u));
  /* 10a015d8 call dword ptr [0x10a344ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344ac))), 0x10a015deu);
  /* 10a015de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a015e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a015e3 call 0x10a048e0 */
  push32(0x10a015e8u); f_10a048e0();
  /* 10a015e8 mov esi, esp */
  ESI = (ESP);
  /* 10a015ea push 0x10a2c048 */
  push32((uint32_t)(0x10a2c048u));
  /* 10a015ef push 0x10a313e0 */
  push32((uint32_t)(0x10a313e0u));
  /* 10a015f4 call dword ptr [0x10a344ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344ac))), 0x10a015fau);
  /* 10a015fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a015fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a015ff call 0x10a048e0 */
  push32(0x10a01604u); f_10a048e0();
  /* 10a01604 mov esi, esp */
  ESI = (ESP);
  /* 10a01606 push 0x10a2c03c */
  push32((uint32_t)(0x10a2c03cu));
  /* 10a0160b push 0x10a313e8 */
  push32((uint32_t)(0x10a313e8u));
  /* 10a01610 call dword ptr [0x10a344ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344ac))), 0x10a01616u);
  /* 10a01616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0161b call 0x10a048e0 */
  push32(0x10a01620u); f_10a048e0();
  /* 10a01620 mov esi, esp */
  ESI = (ESP);
  /* 10a01622 push 0x10a2c02c */
  push32((uint32_t)(0x10a2c02cu));
  /* 10a01627 push 0x10a31518 */
  push32((uint32_t)(0x10a31518u));
  /* 10a0162c call dword ptr [0x10a344ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344ac))), 0x10a01632u);
  /* 10a01632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01637 call 0x10a048e0 */
  push32(0x10a0163cu); f_10a048e0();
  /* 10a0163c mov esi, esp */
  ESI = (ESP);
  /* 10a0163e push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01640 push 0x10a31620 */
  push32((uint32_t)(0x10a31620u));
  /* 10a01645 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a0164bu);
  /* 10a0164b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0164e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01650 call 0x10a048e0 */
  push32(0x10a01655u); f_10a048e0();
  /* 10a01655 mov esi, esp */
  ESI = (ESP);
  /* 10a01657 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01659 push 0x10a31588 */
  push32((uint32_t)(0x10a31588u));
  /* 10a0165e call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a01664u);
  /* 10a01664 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01667 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01669 call 0x10a048e0 */
  push32(0x10a0166eu); f_10a048e0();
  /* 10a0166e mov esi, esp */
  ESI = (ESP);
  /* 10a01670 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01672 push 0x10a31560 */
  push32((uint32_t)(0x10a31560u));
  /* 10a01677 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a0167du);
  /* 10a0167d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01680 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01682 call 0x10a048e0 */
  push32(0x10a01687u); f_10a048e0();
  /* 10a01687 mov esi, esp */
  ESI = (ESP);
  /* 10a01689 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a0168b push 0x10a31570 */
  push32((uint32_t)(0x10a31570u));
  /* 10a01690 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a01696u);
  /* 10a01696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0169b call 0x10a048e0 */
  push32(0x10a016a0u); f_10a048e0();
  /* 10a016a0 mov esi, esp */
  ESI = (ESP);
  /* 10a016a2 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a016a4 push 0x10a31538 */
  push32((uint32_t)(0x10a31538u));
  /* 10a016a9 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a016afu);
  /* 10a016af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a016b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a016b4 call 0x10a048e0 */
  push32(0x10a016b9u); f_10a048e0();
  /* 10a016b9 mov esi, esp */
  ESI = (ESP);
  /* 10a016bb push 8 */
  push32((uint32_t)(0x8u));
  /* 10a016bd push 0x10a31550 */
  push32((uint32_t)(0x10a31550u));
  /* 10a016c2 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a016c8u);
  /* 10a016c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a016cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a016cd call 0x10a048e0 */
  push32(0x10a016d2u); f_10a048e0();
  /* 10a016d2 mov esi, esp */
  ESI = (ESP);
  /* 10a016d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a016d6 push 0x10a31618 */
  push32((uint32_t)(0x10a31618u));
  /* 10a016db call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a016e1u);
  /* 10a016e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a016e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a016e6 call 0x10a048e0 */
  push32(0x10a016ebu); f_10a048e0();
  /* 10a016eb mov esi, esp */
  ESI = (ESP);
  /* 10a016ed push 8 */
  push32((uint32_t)(0x8u));
  /* 10a016ef push 0x10a31630 */
  push32((uint32_t)(0x10a31630u));
  /* 10a016f4 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a016fau);
  /* 10a016fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a016fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a016ff call 0x10a048e0 */
  push32(0x10a01704u); f_10a048e0();
  /* 10a01704 mov esi, esp */
  ESI = (ESP);
  /* 10a01706 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01708 push 0x10a315f0 */
  push32((uint32_t)(0x10a315f0u));
  /* 10a0170d call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a01713u);
  /* 10a01713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01716 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01718 call 0x10a048e0 */
  push32(0x10a0171du); f_10a048e0();
  /* 10a0171d mov esi, esp */
  ESI = (ESP);
  /* 10a0171f push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01721 push 0x10a31608 */
  push32((uint32_t)(0x10a31608u));
  /* 10a01726 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a0172cu);
  /* 10a0172c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0172f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01731 call 0x10a048e0 */
  push32(0x10a01736u); f_10a048e0();
  /* 10a01736 mov esi, esp */
  ESI = (ESP);
  /* 10a01738 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a0173a push 0x10a315d0 */
  push32((uint32_t)(0x10a315d0u));
  /* 10a0173f call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a01745u);
  /* 10a01745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0174a call 0x10a048e0 */
  push32(0x10a0174fu); f_10a048e0();
  /* 10a0174f mov esi, esp */
  ESI = (ESP);
  /* 10a01751 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01753 push 0x10a31548 */
  push32((uint32_t)(0x10a31548u));
  /* 10a01758 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a0175eu);
  /* 10a0175e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01763 call 0x10a048e0 */
  push32(0x10a01768u); f_10a048e0();
  /* 10a01768 mov esi, esp */
  ESI = (ESP);
  /* 10a0176a push 8 */
  push32((uint32_t)(0x8u));
  /* 10a0176c push 0x10a31610 */
  push32((uint32_t)(0x10a31610u));
  /* 10a01771 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a01777u);
  /* 10a01777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0177a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0177c call 0x10a048e0 */
  push32(0x10a01781u); f_10a048e0();
  /* 10a01781 mov esi, esp */
  ESI = (ESP);
  /* 10a01783 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01785 push 0x10a31628 */
  push32((uint32_t)(0x10a31628u));
  /* 10a0178a call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a01790u);
  /* 10a01790 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01793 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01795 call 0x10a048e0 */
  push32(0x10a0179au); f_10a048e0();
  /* 10a0179a mov esi, esp */
  ESI = (ESP);
  /* 10a0179c push 8 */
  push32((uint32_t)(0x8u));
  /* 10a0179e push 0x10a315e8 */
  push32((uint32_t)(0x10a315e8u));
  /* 10a017a3 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a017a9u);
  /* 10a017a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a017ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a017ae call 0x10a048e0 */
  push32(0x10a017b3u); f_10a048e0();
  /* 10a017b3 mov esi, esp */
  ESI = (ESP);
  /* 10a017b5 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a017b7 push 0x10a31600 */
  push32((uint32_t)(0x10a31600u));
  /* 10a017bc call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a017c2u);
  /* 10a017c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a017c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a017c7 call 0x10a048e0 */
  push32(0x10a017ccu); f_10a048e0();
  /* 10a017cc mov esi, esp */
  ESI = (ESP);
  /* 10a017ce push 8 */
  push32((uint32_t)(0x8u));
  /* 10a017d0 push 0x10a315c8 */
  push32((uint32_t)(0x10a315c8u));
  /* 10a017d5 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a017dbu);
  /* 10a017db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a017de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a017e0 call 0x10a048e0 */
  push32(0x10a017e5u); f_10a048e0();
  /* 10a017e5 mov esi, esp */
  ESI = (ESP);
  /* 10a017e7 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a017e9 push 0x10a315e0 */
  push32((uint32_t)(0x10a315e0u));
  /* 10a017ee call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a017f4u);
  /* 10a017f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a017f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a017f9 call 0x10a048e0 */
  push32(0x10a017feu); f_10a048e0();
  /* 10a017fe mov esi, esp */
  ESI = (ESP);
  /* 10a01800 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01802 push 0x10a315b0 */
  push32((uint32_t)(0x10a315b0u));
  /* 10a01807 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a0180du);
  /* 10a0180d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01810 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01812 call 0x10a048e0 */
  push32(0x10a01817u); f_10a048e0();
  /* 10a01817 mov esi, esp */
  ESI = (ESP);
  /* 10a01819 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a0181b push 0x10a315b8 */
  push32((uint32_t)(0x10a315b8u));
  /* 10a01820 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a01826u);
  /* 10a01826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01829 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0182b call 0x10a048e0 */
  push32(0x10a01830u); f_10a048e0();
  /* 10a01830 mov esi, esp */
  ESI = (ESP);
  /* 10a01832 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01834 push 0x10a31638 */
  push32((uint32_t)(0x10a31638u));
  /* 10a01839 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a0183fu);
  /* 10a0183f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01842 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01844 call 0x10a048e0 */
  push32(0x10a01849u); f_10a048e0();
  /* 10a01849 mov esi, esp */
  ESI = (ESP);
  /* 10a0184b push 8 */
  push32((uint32_t)(0x8u));
  /* 10a0184d push 0x10a315f8 */
  push32((uint32_t)(0x10a315f8u));
  /* 10a01852 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a01858u);
  /* 10a01858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0185b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0185d call 0x10a048e0 */
  push32(0x10a01862u); f_10a048e0();
  /* 10a01862 mov esi, esp */
  ESI = (ESP);
  /* 10a01864 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01866 push 0x10a315c0 */
  push32((uint32_t)(0x10a315c0u));
  /* 10a0186b call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a01871u);
  /* 10a01871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01874 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01876 call 0x10a048e0 */
  push32(0x10a0187bu); f_10a048e0();
  /* 10a0187b mov esi, esp */
  ESI = (ESP);
  /* 10a0187d push 8 */
  push32((uint32_t)(0x8u));
  /* 10a0187f push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a01884 call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a0188au);
  /* 10a0188a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0188d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0188f call 0x10a048e0 */
  push32(0x10a01894u); f_10a048e0();
  /* 10a01894 mov esi, esp */
  ESI = (ESP);
  /* 10a01896 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a01898 push 0x10a315a8 */
  push32((uint32_t)(0x10a315a8u));
  /* 10a0189d call dword ptr [0x10a344b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b0))), 0x10a018a3u);
  /* 10a018a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a018a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a018a8 call 0x10a048e0 */
  push32(0x10a018adu); f_10a048e0();
  /* 10a018ad mov esi, esp */
  ESI = (ESP);
  /* 10a018af push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a018b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a018b3 call dword ptr [0x10a344b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b4))), 0x10a018b9u);
  /* 10a018b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a018bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a018be call 0x10a048e0 */
  push32(0x10a018c3u); f_10a048e0();
  /* 10a018c3 mov esi, esp */
  ESI = (ESP);
  /* 10a018c5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a018c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a018c9 call dword ptr [0x10a344b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b4))), 0x10a018cfu);
  /* 10a018cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a018d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a018d4 call 0x10a048e0 */
  push32(0x10a018d9u); f_10a048e0();
  /* 10a018d9 mov esi, esp */
  ESI = (ESP);
  /* 10a018db push 0x10a2c024 */
  push32((uint32_t)(0x10a2c024u));
  /* 10a018e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a018e2 call dword ptr [0x10a344b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b8))), 0x10a018e8u);
  /* 10a018e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a018eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a018ed call 0x10a048e0 */
  push32(0x10a018f2u); f_10a048e0();
  /* 10a018f2 mov esi, esp */
  ESI = (ESP);
  /* 10a018f4 push 0x10a2c01c */
  push32((uint32_t)(0x10a2c01cu));
  /* 10a018f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a018fb call dword ptr [0x10a344b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a344b8))), 0x10a01901u);
  /* 10a01901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01904 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01906 call 0x10a048e0 */
  push32(0x10a0190bu); f_10a048e0();
  /* 10a0190b pop edi */
  EDI = (pop32());
  /* 10a0190c pop esi */
  ESI = (pop32());
  /* 10a0190d pop ebx */
  EBX = (pop32());
  /* 10a0190e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01911 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01913 call 0x10a048e0 */
  push32(0x10a01918u); f_10a048e0();
  /* 10a01918 mov esp, ebp */
  ESP = (EBP);
  /* 10a0191a pop ebp */
  EBP = (pop32());
  /* 10a0191b ret  */
  ESPCHK(0x10a01090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b40 @ 0x10a01b40 (9087 bytes, 2615 insns) */
void f_10a01b40(void) {
  FTRACE(0x10a01b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a01b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a01b41 mov ebp, esp */
  EBP = (ESP);
  /* 10a01b43 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a01b46 push ebx */
  push32((uint32_t)(EBX));
  /* 10a01b47 push esi */
  push32((uint32_t)(ESI));
  /* 10a01b48 push edi */
  push32((uint32_t)(EDI));
  /* 10a01b49 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10a01b4c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10a01b51 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a01b56 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a01b58 mov esi, esp */
  ESI = (ESP);
  /* 10a01b5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01b5c call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a01b62u);
  /* 10a01b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01b65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01b67 call 0x10a048e0 */
  push32(0x10a01b6cu); f_10a048e0();
  /* 10a01b6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a01b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01b73 je 0x10a01d2e */
  if (C.zf) goto L_10a01d2e;
  /* 10a01b79 mov esi, esp */
  ESI = (ESP);
  /* 10a01b7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01b7f call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a01b85u);
  /* 10a01b85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01b8a call 0x10a048e0 */
  push32(0x10a01b8fu); f_10a048e0();
  /* 10a01b8f mov esi, esp */
  ESI = (ESP);
  /* 10a01b91 push 0x10a2c0ec */
  push32((uint32_t)(0x10a2c0ecu));
  /* 10a01b96 push 0x10a2c18c */
  push32((uint32_t)(0x10a2c18cu));
  /* 10a01b9b call dword ptr [0x10a34430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34430))), 0x10a01ba1u);
  /* 10a01ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01ba4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01ba6 call 0x10a048e0 */
  push32(0x10a01babu); f_10a048e0();
  /* 10a01bab mov esi, esp */
  ESI = (ESP);
  /* 10a01bad push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10a01bb2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a01bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01bb6 call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01bbcu);
  /* 10a01bbc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01bbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01bc1 call 0x10a048e0 */
  push32(0x10a01bc6u); f_10a048e0();
  /* 10a01bc6 mov esi, esp */
  ESI = (ESP);
  /* 10a01bc8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10a01bcd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01bd1 call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01bd7u);
  /* 10a01bd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01bda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01bdc call 0x10a048e0 */
  push32(0x10a01be1u); f_10a048e0();
  /* 10a01be1 mov esi, esp */
  ESI = (ESP);
  /* 10a01be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01be9 call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01befu);
  /* 10a01bef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01bf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01bf4 call 0x10a048e0 */
  push32(0x10a01bf9u); f_10a048e0();
  /* 10a01bf9 mov esi, esp */
  ESI = (ESP);
  /* 10a01bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01bfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a01bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01c01 call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01c07u);
  /* 10a01c07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01c0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01c0c call 0x10a048e0 */
  push32(0x10a01c11u); f_10a048e0();
  /* 10a01c11 mov esi, esp */
  ESI = (ESP);
  /* 10a01c13 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10a01c18 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a01c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01c1c call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01c22u);
  /* 10a01c22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01c25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01c27 call 0x10a048e0 */
  push32(0x10a01c2cu); f_10a048e0();
  /* 10a01c2c mov esi, esp */
  ESI = (ESP);
  /* 10a01c2e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10a01c33 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a01c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01c37 call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01c3du);
  /* 10a01c3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01c40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01c42 call 0x10a048e0 */
  push32(0x10a01c47u); f_10a048e0();
  /* 10a01c47 mov esi, esp */
  ESI = (ESP);
  /* 10a01c49 push 0x3b9aca00 */
  push32((uint32_t)(0x3b9aca00u));
  /* 10a01c4e push 3 */
  push32((uint32_t)(0x3u));
  /* 10a01c50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01c52 call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01c58u);
  /* 10a01c58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01c5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01c5d call 0x10a048e0 */
  push32(0x10a01c62u); f_10a048e0();
  /* 10a01c62 mov esi, esp */
  ESI = (ESP);
  /* 10a01c64 push 0x3b9aca00 */
  push32((uint32_t)(0x3b9aca00u));
  /* 10a01c69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01c6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01c6d call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01c73u);
  /* 10a01c73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01c76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01c78 call 0x10a048e0 */
  push32(0x10a01c7du); f_10a048e0();
  /* 10a01c7d mov esi, esp */
  ESI = (ESP);
  /* 10a01c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01c85 call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01c8bu);
  /* 10a01c8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01c8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01c90 call 0x10a048e0 */
  push32(0x10a01c95u); f_10a048e0();
  /* 10a01c95 mov esi, esp */
  ESI = (ESP);
  /* 10a01c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01c99 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a01c9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01c9d call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01ca3u);
  /* 10a01ca3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01ca6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01ca8 call 0x10a048e0 */
  push32(0x10a01cadu); f_10a048e0();
  /* 10a01cad mov esi, esp */
  ESI = (ESP);
  /* 10a01caf push 0x3b9aca00 */
  push32((uint32_t)(0x3b9aca00u));
  /* 10a01cb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a01cb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01cb8 call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01cbeu);
  /* 10a01cbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01cc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01cc3 call 0x10a048e0 */
  push32(0x10a01cc8u); f_10a048e0();
  /* 10a01cc8 mov esi, esp */
  ESI = (ESP);
  /* 10a01cca push 0x3b9aca00 */
  push32((uint32_t)(0x3b9aca00u));
  /* 10a01ccf push 4 */
  push32((uint32_t)(0x4u));
  /* 10a01cd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01cd3 call dword ptr [0x10a34434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34434))), 0x10a01cd9u);
  /* 10a01cd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01cdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01cde call 0x10a048e0 */
  push32(0x10a01ce3u); f_10a048e0();
  /* 10a01ce3 mov esi, esp */
  ESI = (ESP);
  /* 10a01ce5 push 0x10a2c344 */
  push32((uint32_t)(0x10a2c344u));
  /* 10a01cea call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a01cf0u);
  /* 10a01cf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01cf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01cf5 call 0x10a048e0 */
  push32(0x10a01cfau); f_10a048e0();
  /* 10a01cfa mov esi, esp */
  ESI = (ESP);
  /* 10a01cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01cfe push 0x10a31590 */
  push32((uint32_t)(0x10a31590u));
  /* 10a01d03 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a01d09u);
  /* 10a01d09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01d0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01d0e call 0x10a048e0 */
  push32(0x10a01d13u); f_10a048e0();
  /* 10a01d13 mov esi, esp */
  ESI = (ESP);
  /* 10a01d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01d17 push 0x10a31488 */
  push32((uint32_t)(0x10a31488u));
  /* 10a01d1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01d1e call dword ptr [0x10a34440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34440))), 0x10a01d24u);
  /* 10a01d24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01d27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01d29 call 0x10a048e0 */
  push32(0x10a01d2eu); f_10a048e0();
L_10a01d2e:;
  /* 10a01d2e mov esi, esp */
  ESI = (ESP);
  /* 10a01d30 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a01d32 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a01d38u);
  /* 10a01d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01d3d call 0x10a048e0 */
  push32(0x10a01d42u); f_10a048e0();
  /* 10a01d42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a01d47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01d49 je 0x10a01dc9 */
  if (C.zf) goto L_10a01dc9;
  /* 10a01d4b mov esi, esp */
  ESI = (ESP);
  /* 10a01d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01d4f push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a01d54 call dword ptr [0x10a34444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34444))), 0x10a01d5au);
  /* 10a01d5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01d5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01d5f call 0x10a048e0 */
  push32(0x10a01d64u); f_10a048e0();
  /* 10a01d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01d66 jle 0x10a01dc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10a01dc9;
  /* 10a01d68 mov esi, esp */
  ESI = (ESP);
  /* 10a01d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a01d6e call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a01d74u);
  /* 10a01d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01d77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01d79 call 0x10a048e0 */
  push32(0x10a01d7eu); f_10a048e0();
  /* 10a01d7e mov esi, esp */
  ESI = (ESP);
  /* 10a01d80 push 0x10a2c33c */
  push32((uint32_t)(0x10a2c33cu));
  /* 10a01d85 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a01d8bu);
  /* 10a01d8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01d8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01d90 call 0x10a048e0 */
  push32(0x10a01d95u); f_10a048e0();
  /* 10a01d95 mov esi, esp */
  ESI = (ESP);
  /* 10a01d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01d99 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a01d9e push 0x10a31428 */
  push32((uint32_t)(0x10a31428u));
  /* 10a01da3 call dword ptr [0x10a34448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34448))), 0x10a01da9u);
  /* 10a01da9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01dae call 0x10a048e0 */
  push32(0x10a01db3u); f_10a048e0();
  /* 10a01db3 mov esi, esp */
  ESI = (ESP);
  /* 10a01db5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10a01db7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a01db9 call dword ptr [0x10a3444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3444c))), 0x10a01dbfu);
  /* 10a01dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01dc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01dc4 call 0x10a048e0 */
  push32(0x10a01dc9u); f_10a048e0();
L_10a01dc9:;
  /* 10a01dc9 mov esi, esp */
  ESI = (ESP);
  /* 10a01dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a01dcd call dword ptr [0x10a34450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34450))), 0x10a01dd3u);
  /* 10a01dd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01dd8 call 0x10a048e0 */
  push32(0x10a01dddu); f_10a048e0();
  /* 10a01ddd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a01de2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01de4 je 0x10a01e48 */
  if (C.zf) goto L_10a01e48;
  /* 10a01de6 push 0x10a31428 */
  push32((uint32_t)(0x10a31428u));
  /* 10a01deb call 0x10a01005 */
  push32(0x10a01df0u); f_10a01005();
  /* 10a01df0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01df3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01df5 jle 0x10a01e48 */
  if ((C.zf||C.sf!=C.of)) goto L_10a01e48;
  /* 10a01df7 mov esi, esp */
  ESI = (ESP);
  /* 10a01df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01dfb push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a01e00 call dword ptr [0x10a34444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34444))), 0x10a01e06u);
  /* 10a01e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01e09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01e0b call 0x10a048e0 */
  push32(0x10a01e10u); f_10a048e0();
  /* 10a01e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01e12 je 0x10a01e48 */
  if (C.zf) goto L_10a01e48;
  /* 10a01e14 mov esi, esp */
  ESI = (ESP);
  /* 10a01e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01e18 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a01e1d push 0x10a31428 */
  push32((uint32_t)(0x10a31428u));
  /* 10a01e22 call dword ptr [0x10a34448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34448))), 0x10a01e28u);
  /* 10a01e28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01e2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01e2d call 0x10a048e0 */
  push32(0x10a01e32u); f_10a048e0();
  /* 10a01e32 mov esi, esp */
  ESI = (ESP);
  /* 10a01e34 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10a01e36 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a01e38 call dword ptr [0x10a3444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3444c))), 0x10a01e3eu);
  /* 10a01e3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01e41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01e43 call 0x10a048e0 */
  push32(0x10a01e48u); f_10a048e0();
L_10a01e48:;
  /* 10a01e48 mov esi, esp */
  ESI = (ESP);
  /* 10a01e4a push 3 */
  push32((uint32_t)(0x3u));
  /* 10a01e4c call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a01e52u);
  /* 10a01e52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01e55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01e57 call 0x10a048e0 */
  push32(0x10a01e5cu); f_10a048e0();
  /* 10a01e5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a01e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01e63 je 0x10a01eef */
  if (C.zf) goto L_10a01eef;
  /* 10a01e69 push 0x10a31440 */
  push32((uint32_t)(0x10a31440u));
  /* 10a01e6e call 0x10a01005 */
  push32(0x10a01e73u); f_10a01005();
  /* 10a01e73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01e76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01e78 jne 0x10a01eef */
  if (!C.zf) goto L_10a01eef;
  /* 10a01e7a mov esi, esp */
  ESI = (ESP);
  /* 10a01e7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01e7e push 3 */
  push32((uint32_t)(0x3u));
  /* 10a01e80 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a01e86u);
  /* 10a01e86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01e89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01e8b call 0x10a048e0 */
  push32(0x10a01e90u); f_10a048e0();
  /* 10a01e90 mov esi, esp */
  ESI = (ESP);
  /* 10a01e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01e94 push 0x10a31530 */
  push32((uint32_t)(0x10a31530u));
  /* 10a01e99 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a01e9fu);
  /* 10a01e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01ea2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01ea4 call 0x10a048e0 */
  push32(0x10a01ea9u); f_10a048e0();
  /* 10a01ea9 mov esi, esp */
  ESI = (ESP);
  /* 10a01eab push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01ead call dword ptr [0x10a34454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34454))), 0x10a01eb3u);
  /* 10a01eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01eb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01eb8 call 0x10a048e0 */
  push32(0x10a01ebdu); f_10a048e0();
  /* 10a01ebd mov esi, esp */
  ESI = (ESP);
  /* 10a01ebf push 0x10a2c334 */
  push32((uint32_t)(0x10a2c334u));
  /* 10a01ec4 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a01ecau);
  /* 10a01eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01ecd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01ecf call 0x10a048e0 */
  push32(0x10a01ed4u); f_10a048e0();
  /* 10a01ed4 mov esi, esp */
  ESI = (ESP);
  /* 10a01ed6 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10a01edb push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01edd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01edf call dword ptr [0x10a34458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34458))), 0x10a01ee5u);
  /* 10a01ee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01ee8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01eea call 0x10a048e0 */
  push32(0x10a01eefu); f_10a048e0();
L_10a01eef:;
  /* 10a01eef mov esi, esp */
  ESI = (ESP);
  /* 10a01ef1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a01ef3 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a01ef9u);
  /* 10a01ef9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01efc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01efe call 0x10a048e0 */
  push32(0x10a01f03u); f_10a048e0();
  /* 10a01f03 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a01f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01f0a je 0x10a01faf */
  if (C.zf) goto L_10a01faf;
  /* 10a01f10 push 0x10a31598 */
  push32((uint32_t)(0x10a31598u));
  /* 10a01f15 call 0x10a01005 */
  push32(0x10a01f1au); f_10a01005();
  /* 10a01f1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01f1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01f1f jne 0x10a01faf */
  if (!C.zf) goto L_10a01faf;
  /* 10a01f25 push 0x10a315a0 */
  push32((uint32_t)(0x10a315a0u));
  /* 10a01f2a call 0x10a01005 */
  push32(0x10a01f2fu); f_10a01005();
  /* 10a01f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01f34 jle 0x10a01faf */
  if ((C.zf||C.sf!=C.of)) goto L_10a01faf;
  /* 10a01f36 mov esi, esp */
  ESI = (ESP);
  /* 10a01f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01f3a push 0x10a31460 */
  push32((uint32_t)(0x10a31460u));
  /* 10a01f3f call dword ptr [0x10a34444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34444))), 0x10a01f45u);
  /* 10a01f45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01f48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01f4a call 0x10a048e0 */
  push32(0x10a01f4fu); f_10a048e0();
  /* 10a01f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01f51 jle 0x10a01faf */
  if ((C.zf||C.sf!=C.of)) goto L_10a01faf;
  /* 10a01f53 mov esi, esp */
  ESI = (ESP);
  /* 10a01f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01f57 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a01f59 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a01f5fu);
  /* 10a01f5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01f64 call 0x10a048e0 */
  push32(0x10a01f69u); f_10a048e0();
  /* 10a01f69 mov esi, esp */
  ESI = (ESP);
  /* 10a01f6b push 0x10a2c32c */
  push32((uint32_t)(0x10a2c32cu));
  /* 10a01f70 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a01f76u);
  /* 10a01f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01f79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01f7b call 0x10a048e0 */
  push32(0x10a01f80u); f_10a048e0();
  /* 10a01f80 mov esi, esp */
  ESI = (ESP);
  /* 10a01f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01f84 push 0x10a315a0 */
  push32((uint32_t)(0x10a315a0u));
  /* 10a01f89 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a01f8fu);
  /* 10a01f8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01f92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01f94 call 0x10a048e0 */
  push32(0x10a01f99u); f_10a048e0();
  /* 10a01f99 mov esi, esp */
  ESI = (ESP);
  /* 10a01f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01f9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a01f9f call dword ptr [0x10a3445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3445c))), 0x10a01fa5u);
  /* 10a01fa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01fa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01faa call 0x10a048e0 */
  push32(0x10a01fafu); f_10a048e0();
L_10a01faf:;
  /* 10a01faf mov esi, esp */
  ESI = (ESP);
  /* 10a01fb1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a01fb3 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a01fb9u);
  /* 10a01fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01fbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01fbe call 0x10a048e0 */
  push32(0x10a01fc3u); f_10a048e0();
  /* 10a01fc3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a01fc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01fca je 0x10a0205a */
  if (C.zf) goto L_10a0205a;
  /* 10a01fd0 push 0x10a31580 */
  push32((uint32_t)(0x10a31580u));
  /* 10a01fd5 call 0x10a01005 */
  push32(0x10a01fdau); f_10a01005();
  /* 10a01fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01fdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01fdf jle 0x10a0205a */
  if ((C.zf||C.sf!=C.of)) goto L_10a0205a;
  /* 10a01fe1 mov esi, esp */
  ESI = (ESP);
  /* 10a01fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a01fe5 push 0x10a31478 */
  push32((uint32_t)(0x10a31478u));
  /* 10a01fea call dword ptr [0x10a34444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34444))), 0x10a01ff0u);
  /* 10a01ff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a01ff3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a01ff5 call 0x10a048e0 */
  push32(0x10a01ffau); f_10a048e0();
  /* 10a01ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a01ffc jle 0x10a0205a */
  if ((C.zf||C.sf!=C.of)) goto L_10a0205a;
  /* 10a01ffe mov esi, esp */
  ESI = (ESP);
  /* 10a02000 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02002 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a02004 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a0200au);
  /* 10a0200a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0200d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0200f call 0x10a048e0 */
  push32(0x10a02014u); f_10a048e0();
  /* 10a02014 mov esi, esp */
  ESI = (ESP);
  /* 10a02016 push 0x10a2c324 */
  push32((uint32_t)(0x10a2c324u));
  /* 10a0201b call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02021u);
  /* 10a02021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02024 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02026 call 0x10a048e0 */
  push32(0x10a0202bu); f_10a048e0();
  /* 10a0202b mov esi, esp */
  ESI = (ESP);
  /* 10a0202d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0202f push 0x10a31580 */
  push32((uint32_t)(0x10a31580u));
  /* 10a02034 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a0203au);
  /* 10a0203a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0203d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0203f call 0x10a048e0 */
  push32(0x10a02044u); f_10a048e0();
  /* 10a02044 mov esi, esp */
  ESI = (ESP);
  /* 10a02046 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02048 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a0204a call dword ptr [0x10a3445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3445c))), 0x10a02050u);
  /* 10a02050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02053 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02055 call 0x10a048e0 */
  push32(0x10a0205au); f_10a048e0();
L_10a0205a:;
  /* 10a0205a mov esi, esp */
  ESI = (ESP);
  /* 10a0205c push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10a0205e call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02064u);
  /* 10a02064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02067 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02069 call 0x10a048e0 */
  push32(0x10a0206eu); f_10a048e0();
  /* 10a0206e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02075 jne 0x10a020e1 */
  if (!C.zf) goto L_10a020e1;
  /* 10a02077 mov esi, esp */
  ESI = (ESP);
  /* 10a02079 push 6 */
  push32((uint32_t)(0x6u));
  /* 10a0207b call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02081u);
  /* 10a02081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02084 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02086 call 0x10a048e0 */
  push32(0x10a0208bu); f_10a048e0();
  /* 10a0208b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02090 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02092 je 0x10a020e1 */
  if (C.zf) goto L_10a020e1;
  /* 10a02094 mov esi, esp */
  ESI = (ESP);
  /* 10a02096 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a0209b push 0x10a314a8 */
  push32((uint32_t)(0x10a314a8u));
  /* 10a020a0 call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a020a6u);
  /* 10a020a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a020a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a020ab call 0x10a048e0 */
  push32(0x10a020b0u); f_10a048e0();
  /* 10a020b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a020b2 jle 0x10a020e1 */
  if ((C.zf||C.sf!=C.of)) goto L_10a020e1;
  /* 10a020b4 mov esi, esp */
  ESI = (ESP);
  /* 10a020b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a020b8 push 6 */
  push32((uint32_t)(0x6u));
  /* 10a020ba call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a020c0u);
  /* 10a020c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a020c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a020c5 call 0x10a048e0 */
  push32(0x10a020cau); f_10a048e0();
  /* 10a020ca mov esi, esp */
  ESI = (ESP);
  /* 10a020cc push 0x10a2c31c */
  push32((uint32_t)(0x10a2c31cu));
  /* 10a020d1 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a020d7u);
  /* 10a020d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a020da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a020dc call 0x10a048e0 */
  push32(0x10a020e1u); f_10a048e0();
L_10a020e1:;
  /* 10a020e1 mov esi, esp */
  ESI = (ESP);
  /* 10a020e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10a020e5 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a020ebu);
  /* 10a020eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a020ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a020f0 call 0x10a048e0 */
  push32(0x10a020f5u); f_10a048e0();
  /* 10a020f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a020fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a020fc jne 0x10a021f7 */
  if (!C.zf) goto L_10a021f7;
  /* 10a02102 mov esi, esp */
  ESI = (ESP);
  /* 10a02104 push 7 */
  push32((uint32_t)(0x7u));
  /* 10a02106 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0210cu);
  /* 10a0210c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0210f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02111 call 0x10a048e0 */
  push32(0x10a02116u); f_10a048e0();
  /* 10a02116 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0211b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0211d je 0x10a021f7 */
  if (C.zf) goto L_10a021f7;
  /* 10a02123 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a02128 call 0x10a01005 */
  push32(0x10a0212du); f_10a01005();
  /* 10a0212d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02132 jle 0x10a021f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a021f7;
  /* 10a02138 mov esi, esp */
  ESI = (ESP);
  /* 10a0213a push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a0213f push 0x10a314a8 */
  push32((uint32_t)(0x10a314a8u));
  /* 10a02144 call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a0214au);
  /* 10a0214a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0214d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0214f call 0x10a048e0 */
  push32(0x10a02154u); f_10a048e0();
  /* 10a02154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02156 jle 0x10a021f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a021f7;
  /* 10a0215c mov esi, esp */
  ESI = (ESP);
  /* 10a0215e push 8 */
  push32((uint32_t)(0x8u));
  /* 10a02160 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02166u);
  /* 10a02166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02169 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0216b call 0x10a048e0 */
  push32(0x10a02170u); f_10a048e0();
  /* 10a02170 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02177 je 0x10a021f7 */
  if (C.zf) goto L_10a021f7;
  /* 10a02179 mov esi, esp */
  ESI = (ESP);
  /* 10a0217b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0217d push 7 */
  push32((uint32_t)(0x7u));
  /* 10a0217f call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02185u);
  /* 10a02185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0218a call 0x10a048e0 */
  push32(0x10a0218fu); f_10a048e0();
  /* 10a0218f mov esi, esp */
  ESI = (ESP);
  /* 10a02191 push 0x10a2c314 */
  push32((uint32_t)(0x10a2c314u));
  /* 10a02196 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a0219cu);
  /* 10a0219c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0219f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a021a1 call 0x10a048e0 */
  push32(0x10a021a6u); f_10a048e0();
  /* 10a021a6 mov esi, esp */
  ESI = (ESP);
  /* 10a021a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a021aa push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a021af call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a021b5u);
  /* 10a021b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a021b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a021ba call 0x10a048e0 */
  push32(0x10a021bfu); f_10a048e0();
  /* 10a021bf mov esi, esp */
  ESI = (ESP);
  /* 10a021c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a021c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a021c5 push 0x10a31508 */
  push32((uint32_t)(0x10a31508u));
  /* 10a021ca push 4 */
  push32((uint32_t)(0x4u));
  /* 10a021cc call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a021d2u);
  /* 10a021d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a021d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a021d7 call 0x10a048e0 */
  push32(0x10a021dcu); f_10a048e0();
  /* 10a021dc mov esi, esp */
  ESI = (ESP);
  /* 10a021de push 1 */
  push32((uint32_t)(0x1u));
  /* 10a021e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a021e2 push 0x10a31508 */
  push32((uint32_t)(0x10a31508u));
  /* 10a021e7 call dword ptr [0x10a34468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34468))), 0x10a021edu);
  /* 10a021ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a021f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a021f2 call 0x10a048e0 */
  push32(0x10a021f7u); f_10a048e0();
L_10a021f7:;
  /* 10a021f7 mov esi, esp */
  ESI = (ESP);
  /* 10a021f9 push 7 */
  push32((uint32_t)(0x7u));
  /* 10a021fb call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02201u);
  /* 10a02201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02204 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02206 call 0x10a048e0 */
  push32(0x10a0220bu); f_10a048e0();
  /* 10a0220b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02212 jne 0x10a0230a */
  if (!C.zf) goto L_10a0230a;
  /* 10a02218 mov esi, esp */
  ESI = (ESP);
  /* 10a0221a push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10a0221c call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02222u);
  /* 10a02222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02225 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02227 call 0x10a048e0 */
  push32(0x10a0222cu); f_10a048e0();
  /* 10a0222c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02233 je 0x10a0230a */
  if (C.zf) goto L_10a0230a;
  /* 10a02239 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a0223e call 0x10a01005 */
  push32(0x10a02243u); f_10a01005();
  /* 10a02243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02248 jle 0x10a0230a */
  if ((C.zf||C.sf!=C.of)) goto L_10a0230a;
  /* 10a0224e mov esi, esp */
  ESI = (ESP);
  /* 10a02250 push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a02255 push 0x10a31508 */
  push32((uint32_t)(0x10a31508u));
  /* 10a0225a call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a02260u);
  /* 10a02260 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02263 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02265 call 0x10a048e0 */
  push32(0x10a0226au); f_10a048e0();
  /* 10a0226a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0226c jle 0x10a0230a */
  if ((C.zf||C.sf!=C.of)) goto L_10a0230a;
  /* 10a02272 mov esi, esp */
  ESI = (ESP);
  /* 10a02274 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a02276 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0227cu);
  /* 10a0227c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0227f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02281 call 0x10a048e0 */
  push32(0x10a02286u); f_10a048e0();
  /* 10a02286 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0228b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0228d je 0x10a0230a */
  if (C.zf) goto L_10a0230a;
  /* 10a0228f mov esi, esp */
  ESI = (ESP);
  /* 10a02291 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02293 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10a02295 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a0229bu);
  /* 10a0229b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0229e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a022a0 call 0x10a048e0 */
  push32(0x10a022a5u); f_10a048e0();
  /* 10a022a5 mov esi, esp */
  ESI = (ESP);
  /* 10a022a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a022a9 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a022ae call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a022b4u);
  /* 10a022b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a022b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a022b9 call 0x10a048e0 */
  push32(0x10a022beu); f_10a048e0();
  /* 10a022be mov esi, esp */
  ESI = (ESP);
  /* 10a022c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a022c2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a022c4 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a022c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a022cb call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a022d1u);
  /* 10a022d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a022d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a022d6 call 0x10a048e0 */
  push32(0x10a022dbu); f_10a048e0();
  /* 10a022db mov esi, esp */
  ESI = (ESP);
  /* 10a022dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a022df call dword ptr [0x10a3446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3446c))), 0x10a022e5u);
  /* 10a022e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a022e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a022ea call 0x10a048e0 */
  push32(0x10a022efu); f_10a048e0();
  /* 10a022ef mov esi, esp */
  ESI = (ESP);
  /* 10a022f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a022f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a022f5 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a022fa call dword ptr [0x10a34468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34468))), 0x10a02300u);
  /* 10a02300 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02303 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02305 call 0x10a048e0 */
  push32(0x10a0230au); f_10a048e0();
L_10a0230a:;
  /* 10a0230a mov esi, esp */
  ESI = (ESP);
  /* 10a0230c push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10a0230e call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02314u);
  /* 10a02314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02317 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02319 call 0x10a048e0 */
  push32(0x10a0231eu); f_10a048e0();
  /* 10a0231e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02323 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02325 jne 0x10a02420 */
  if (!C.zf) goto L_10a02420;
  /* 10a0232b mov esi, esp */
  ESI = (ESP);
  /* 10a0232d push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10a0232f call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02335u);
  /* 10a02335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0233a call 0x10a048e0 */
  push32(0x10a0233fu); f_10a048e0();
  /* 10a0233f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02346 je 0x10a02420 */
  if (C.zf) goto L_10a02420;
  /* 10a0234c push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a02351 call 0x10a01005 */
  push32(0x10a02356u); f_10a01005();
  /* 10a02356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0235b jle 0x10a02420 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02420;
  /* 10a02361 mov esi, esp */
  ESI = (ESP);
  /* 10a02363 push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a02368 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a0236d call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a02373u);
  /* 10a02373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02376 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02378 call 0x10a048e0 */
  push32(0x10a0237du); f_10a048e0();
  /* 10a0237d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0237f jle 0x10a02420 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02420;
  /* 10a02385 mov esi, esp */
  ESI = (ESP);
  /* 10a02387 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a02389 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0238fu);
  /* 10a0238f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02392 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02394 call 0x10a048e0 */
  push32(0x10a02399u); f_10a048e0();
  /* 10a02399 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0239e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a023a0 je 0x10a02420 */
  if (C.zf) goto L_10a02420;
  /* 10a023a2 mov esi, esp */
  ESI = (ESP);
  /* 10a023a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a023a6 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10a023a8 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a023aeu);
  /* 10a023ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a023b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a023b3 call 0x10a048e0 */
  push32(0x10a023b8u); f_10a048e0();
  /* 10a023b8 mov esi, esp */
  ESI = (ESP);
  /* 10a023ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a023bc push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a023c1 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a023c7u);
  /* 10a023c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a023ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a023cc call 0x10a048e0 */
  push32(0x10a023d1u); f_10a048e0();
  /* 10a023d1 mov esi, esp */
  ESI = (ESP);
  /* 10a023d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a023d5 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10a023da push 0x10a31500 */
  push32((uint32_t)(0x10a31500u));
  /* 10a023df push 4 */
  push32((uint32_t)(0x4u));
  /* 10a023e1 call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a023e7u);
  /* 10a023e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a023ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a023ec call 0x10a048e0 */
  push32(0x10a023f1u); f_10a048e0();
  /* 10a023f1 mov esi, esp */
  ESI = (ESP);
  /* 10a023f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a023f5 call dword ptr [0x10a3446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3446c))), 0x10a023fbu);
  /* 10a023fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a023fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02400 call 0x10a048e0 */
  push32(0x10a02405u); f_10a048e0();
  /* 10a02405 mov esi, esp */
  ESI = (ESP);
  /* 10a02407 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02409 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0240b push 0x10a31500 */
  push32((uint32_t)(0x10a31500u));
  /* 10a02410 call dword ptr [0x10a34468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34468))), 0x10a02416u);
  /* 10a02416 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02419 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0241b call 0x10a048e0 */
  push32(0x10a02420u); f_10a048e0();
L_10a02420:;
  /* 10a02420 mov esi, esp */
  ESI = (ESP);
  /* 10a02422 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10a02424 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0242au);
  /* 10a0242a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0242d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0242f call 0x10a048e0 */
  push32(0x10a02434u); f_10a048e0();
  /* 10a02434 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0243b jne 0x10a02551 */
  if (!C.zf) goto L_10a02551;
  /* 10a02441 mov esi, esp */
  ESI = (ESP);
  /* 10a02443 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10a02445 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0244bu);
  /* 10a0244b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0244e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02450 call 0x10a048e0 */
  push32(0x10a02455u); f_10a048e0();
  /* 10a02455 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0245a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0245c je 0x10a02551 */
  if (C.zf) goto L_10a02551;
  /* 10a02462 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a02467 call 0x10a01005 */
  push32(0x10a0246cu); f_10a01005();
  /* 10a0246c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0246f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02471 jle 0x10a02551 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02551;
  /* 10a02477 mov esi, esp */
  ESI = (ESP);
  /* 10a02479 push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a0247e push 0x10a31500 */
  push32((uint32_t)(0x10a31500u));
  /* 10a02483 call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a02489u);
  /* 10a02489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0248c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0248e call 0x10a048e0 */
  push32(0x10a02493u); f_10a048e0();
  /* 10a02493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02495 jle 0x10a02551 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02551;
  /* 10a0249b mov esi, esp */
  ESI = (ESP);
  /* 10a0249d push 8 */
  push32((uint32_t)(0x8u));
  /* 10a0249f call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a024a5u);
  /* 10a024a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a024a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a024aa call 0x10a048e0 */
  push32(0x10a024afu); f_10a048e0();
  /* 10a024af and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a024b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a024b6 je 0x10a02551 */
  if (C.zf) goto L_10a02551;
  /* 10a024bc mov esi, esp */
  ESI = (ESP);
  /* 10a024be push 0 */
  push32((uint32_t)(0x0u));
  /* 10a024c0 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10a024c2 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a024c8u);
  /* 10a024c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a024cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a024cd call 0x10a048e0 */
  push32(0x10a024d2u); f_10a048e0();
  /* 10a024d2 mov esi, esp */
  ESI = (ESP);
  /* 10a024d4 push 0x10a2c308 */
  push32((uint32_t)(0x10a2c308u));
  /* 10a024d9 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a024dfu);
  /* 10a024df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a024e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a024e4 call 0x10a048e0 */
  push32(0x10a024e9u); f_10a048e0();
  /* 10a024e9 mov esi, esp */
  ESI = (ESP);
  /* 10a024eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a024ed push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a024f2 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a024f8u);
  /* 10a024f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a024fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a024fd call 0x10a048e0 */
  push32(0x10a02502u); f_10a048e0();
  /* 10a02502 mov esi, esp */
  ESI = (ESP);
  /* 10a02504 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02506 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10a0250b push 0x10a31468 */
  push32((uint32_t)(0x10a31468u));
  /* 10a02510 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a02512 call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a02518u);
  /* 10a02518 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0251b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0251d call 0x10a048e0 */
  push32(0x10a02522u); f_10a048e0();
  /* 10a02522 mov esi, esp */
  ESI = (ESP);
  /* 10a02524 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02526 call dword ptr [0x10a3446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3446c))), 0x10a0252cu);
  /* 10a0252c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0252f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02531 call 0x10a048e0 */
  push32(0x10a02536u); f_10a048e0();
  /* 10a02536 mov esi, esp */
  ESI = (ESP);
  /* 10a02538 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0253a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0253c push 0x10a31468 */
  push32((uint32_t)(0x10a31468u));
  /* 10a02541 call dword ptr [0x10a34468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34468))), 0x10a02547u);
  /* 10a02547 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0254a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0254c call 0x10a048e0 */
  push32(0x10a02551u); f_10a048e0();
L_10a02551:;
  /* 10a02551 mov esi, esp */
  ESI = (ESP);
  /* 10a02553 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10a02555 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0255bu);
  /* 10a0255b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0255e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02560 call 0x10a048e0 */
  push32(0x10a02565u); f_10a048e0();
  /* 10a02565 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0256a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0256c jne 0x10a02664 */
  if (!C.zf) goto L_10a02664;
  /* 10a02572 mov esi, esp */
  ESI = (ESP);
  /* 10a02574 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10a02576 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0257cu);
  /* 10a0257c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0257f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02581 call 0x10a048e0 */
  push32(0x10a02586u); f_10a048e0();
  /* 10a02586 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0258b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0258d je 0x10a02664 */
  if (C.zf) goto L_10a02664;
  /* 10a02593 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a02598 call 0x10a01005 */
  push32(0x10a0259du); f_10a01005();
  /* 10a0259d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a025a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a025a2 jle 0x10a02664 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02664;
  /* 10a025a8 mov esi, esp */
  ESI = (ESP);
  /* 10a025aa push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a025af push 0x10a31468 */
  push32((uint32_t)(0x10a31468u));
  /* 10a025b4 call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a025bau);
  /* 10a025ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a025bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a025bf call 0x10a048e0 */
  push32(0x10a025c4u); f_10a048e0();
  /* 10a025c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a025c6 jle 0x10a02664 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02664;
  /* 10a025cc mov esi, esp */
  ESI = (ESP);
  /* 10a025ce push 8 */
  push32((uint32_t)(0x8u));
  /* 10a025d0 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a025d6u);
  /* 10a025d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a025d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a025db call 0x10a048e0 */
  push32(0x10a025e0u); f_10a048e0();
  /* 10a025e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a025e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a025e7 je 0x10a02664 */
  if (C.zf) goto L_10a02664;
  /* 10a025e9 mov esi, esp */
  ESI = (ESP);
  /* 10a025eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a025ed push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10a025ef call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a025f5u);
  /* 10a025f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a025f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a025fa call 0x10a048e0 */
  push32(0x10a025ffu); f_10a048e0();
  /* 10a025ff mov esi, esp */
  ESI = (ESP);
  /* 10a02601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02603 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a02608 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a0260eu);
  /* 10a0260e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02613 call 0x10a048e0 */
  push32(0x10a02618u); f_10a048e0();
  /* 10a02618 mov esi, esp */
  ESI = (ESP);
  /* 10a0261a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0261c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0261e push 0x10a314f8 */
  push32((uint32_t)(0x10a314f8u));
  /* 10a02623 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a02625 call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a0262bu);
  /* 10a0262b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0262e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02630 call 0x10a048e0 */
  push32(0x10a02635u); f_10a048e0();
  /* 10a02635 mov esi, esp */
  ESI = (ESP);
  /* 10a02637 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02639 call dword ptr [0x10a3446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3446c))), 0x10a0263fu);
  /* 10a0263f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02642 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02644 call 0x10a048e0 */
  push32(0x10a02649u); f_10a048e0();
  /* 10a02649 mov esi, esp */
  ESI = (ESP);
  /* 10a0264b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0264d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0264f push 0x10a314f8 */
  push32((uint32_t)(0x10a314f8u));
  /* 10a02654 call dword ptr [0x10a34468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34468))), 0x10a0265au);
  /* 10a0265a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0265d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0265f call 0x10a048e0 */
  push32(0x10a02664u); f_10a048e0();
L_10a02664:;
  /* 10a02664 mov esi, esp */
  ESI = (ESP);
  /* 10a02666 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10a02668 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0266eu);
  /* 10a0266e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02671 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02673 call 0x10a048e0 */
  push32(0x10a02678u); f_10a048e0();
  /* 10a02678 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0267d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0267f jne 0x10a027af */
  if (!C.zf) goto L_10a027af;
  /* 10a02685 mov esi, esp */
  ESI = (ESP);
  /* 10a02687 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a02689 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0268fu);
  /* 10a0268f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02694 call 0x10a048e0 */
  push32(0x10a02699u); f_10a048e0();
  /* 10a02699 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0269e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a026a0 je 0x10a027af */
  if (C.zf) goto L_10a027af;
  /* 10a026a6 push 0x10a315c0 */
  push32((uint32_t)(0x10a315c0u));
  /* 10a026ab call 0x10a01005 */
  push32(0x10a026b0u); f_10a01005();
  /* 10a026b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a026b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a026b5 jle 0x10a027af */
  if ((C.zf||C.sf!=C.of)) goto L_10a027af;
  /* 10a026bb mov esi, esp */
  ESI = (ESP);
  /* 10a026bd push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a026c2 push 0x10a314f8 */
  push32((uint32_t)(0x10a314f8u));
  /* 10a026c7 call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a026cdu);
  /* 10a026cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a026d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a026d2 call 0x10a048e0 */
  push32(0x10a026d7u); f_10a048e0();
  /* 10a026d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a026d9 jle 0x10a027af */
  if ((C.zf||C.sf!=C.of)) goto L_10a027af;
  /* 10a026df mov esi, esp */
  ESI = (ESP);
  /* 10a026e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a026e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a026e5 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a026ebu);
  /* 10a026eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a026ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a026f0 call 0x10a048e0 */
  push32(0x10a026f5u); f_10a048e0();
  /* 10a026f5 mov esi, esp */
  ESI = (ESP);
  /* 10a026f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a026f9 call dword ptr [0x10a3446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3446c))), 0x10a026ffu);
  /* 10a026ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02702 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02704 call 0x10a048e0 */
  push32(0x10a02709u); f_10a048e0();
  /* 10a02709 mov esi, esp */
  ESI = (ESP);
  /* 10a0270b push 0x10a2c300 */
  push32((uint32_t)(0x10a2c300u));
  /* 10a02710 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02716u);
  /* 10a02716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02719 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0271b call 0x10a048e0 */
  push32(0x10a02720u); f_10a048e0();
  /* 10a02720 mov esi, esp */
  ESI = (ESP);
  /* 10a02722 push 0x10a2c2f4 */
  push32((uint32_t)(0x10a2c2f4u));
  /* 10a02727 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a0272du);
  /* 10a0272d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02730 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02732 call 0x10a048e0 */
  push32(0x10a02737u); f_10a048e0();
  /* 10a02737 mov esi, esp */
  ESI = (ESP);
  /* 10a02739 push 0x10a2c2e8 */
  push32((uint32_t)(0x10a2c2e8u));
  /* 10a0273e call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02744u);
  /* 10a02744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02747 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02749 call 0x10a048e0 */
  push32(0x10a0274eu); f_10a048e0();
  /* 10a0274e mov esi, esp */
  ESI = (ESP);
  /* 10a02750 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02752 push 0x10a315f8 */
  push32((uint32_t)(0x10a315f8u));
  /* 10a02757 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a0275du);
  /* 10a0275d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02760 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02762 call 0x10a048e0 */
  push32(0x10a02767u); f_10a048e0();
  /* 10a02767 mov esi, esp */
  ESI = (ESP);
  /* 10a02769 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0276b push 0x10a315c0 */
  push32((uint32_t)(0x10a315c0u));
  /* 10a02770 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a02776u);
  /* 10a02776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0277b call 0x10a048e0 */
  push32(0x10a02780u); f_10a048e0();
  /* 10a02780 mov esi, esp */
  ESI = (ESP);
  /* 10a02782 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02784 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a02789 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a0278fu);
  /* 10a0278f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02794 call 0x10a048e0 */
  push32(0x10a02799u); f_10a048e0();
  /* 10a02799 mov esi, esp */
  ESI = (ESP);
  /* 10a0279b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0279d push 4 */
  push32((uint32_t)(0x4u));
  /* 10a0279f call dword ptr [0x10a3445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3445c))), 0x10a027a5u);
  /* 10a027a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a027a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a027aa call 0x10a048e0 */
  push32(0x10a027afu); f_10a048e0();
L_10a027af:;
  /* 10a027af mov esi, esp */
  ESI = (ESP);
  /* 10a027b1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10a027b3 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a027b9u);
  /* 10a027b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a027bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a027be call 0x10a048e0 */
  push32(0x10a027c3u); f_10a048e0();
  /* 10a027c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a027c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a027ca jne 0x10a02836 */
  if (!C.zf) goto L_10a02836;
  /* 10a027cc mov esi, esp */
  ESI = (ESP);
  /* 10a027ce push 9 */
  push32((uint32_t)(0x9u));
  /* 10a027d0 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a027d6u);
  /* 10a027d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a027d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a027db call 0x10a048e0 */
  push32(0x10a027e0u); f_10a048e0();
  /* 10a027e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a027e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a027e7 je 0x10a02836 */
  if (C.zf) goto L_10a02836;
  /* 10a027e9 mov esi, esp */
  ESI = (ESP);
  /* 10a027eb push 0x10a315a8 */
  push32((uint32_t)(0x10a315a8u));
  /* 10a027f0 push 0x10a314a8 */
  push32((uint32_t)(0x10a314a8u));
  /* 10a027f5 call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a027fbu);
  /* 10a027fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a027fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02800 call 0x10a048e0 */
  push32(0x10a02805u); f_10a048e0();
  /* 10a02805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02807 jle 0x10a02836 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02836;
  /* 10a02809 mov esi, esp */
  ESI = (ESP);
  /* 10a0280b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0280d push 9 */
  push32((uint32_t)(0x9u));
  /* 10a0280f call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02815u);
  /* 10a02815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02818 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0281a call 0x10a048e0 */
  push32(0x10a0281fu); f_10a048e0();
  /* 10a0281f mov esi, esp */
  ESI = (ESP);
  /* 10a02821 push 0x10a2c2e0 */
  push32((uint32_t)(0x10a2c2e0u));
  /* 10a02826 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a0282cu);
  /* 10a0282c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0282f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02831 call 0x10a048e0 */
  push32(0x10a02836u); f_10a048e0();
L_10a02836:;
  /* 10a02836 mov esi, esp */
  ESI = (ESP);
  /* 10a02838 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a0283a call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02840u);
  /* 10a02840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02845 call 0x10a048e0 */
  push32(0x10a0284au); f_10a048e0();
  /* 10a0284a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0284f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02851 jne 0x10a02905 */
  if (!C.zf) goto L_10a02905;
  /* 10a02857 mov esi, esp */
  ESI = (ESP);
  /* 10a02859 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a0285b call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02861u);
  /* 10a02861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02864 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02866 call 0x10a048e0 */
  push32(0x10a0286bu); f_10a048e0();
  /* 10a0286b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02872 je 0x10a02905 */
  if (C.zf) goto L_10a02905;
  /* 10a02878 push 0x10a315a8 */
  push32((uint32_t)(0x10a315a8u));
  /* 10a0287d call 0x10a01005 */
  push32(0x10a02882u); f_10a01005();
  /* 10a02882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02887 jle 0x10a02905 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02905;
  /* 10a02889 mov esi, esp */
  ESI = (ESP);
  /* 10a0288b push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a02890 push 0x10a314a8 */
  push32((uint32_t)(0x10a314a8u));
  /* 10a02895 call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a0289bu);
  /* 10a0289b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0289e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a028a0 call 0x10a048e0 */
  push32(0x10a028a5u); f_10a048e0();
  /* 10a028a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a028a7 jle 0x10a02905 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02905;
  /* 10a028a9 mov esi, esp */
  ESI = (ESP);
  /* 10a028ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10a028ad push 0xa */
  push32((uint32_t)(0xau));
  /* 10a028af call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a028b5u);
  /* 10a028b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a028b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a028ba call 0x10a048e0 */
  push32(0x10a028bfu); f_10a048e0();
  /* 10a028bf mov esi, esp */
  ESI = (ESP);
  /* 10a028c1 push 0x10a2c2d4 */
  push32((uint32_t)(0x10a2c2d4u));
  /* 10a028c6 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a028ccu);
  /* 10a028cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a028cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a028d1 call 0x10a048e0 */
  push32(0x10a028d6u); f_10a048e0();
  /* 10a028d6 mov esi, esp */
  ESI = (ESP);
  /* 10a028d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a028da push 0x10a315a8 */
  push32((uint32_t)(0x10a315a8u));
  /* 10a028df call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a028e5u);
  /* 10a028e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a028e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a028ea call 0x10a048e0 */
  push32(0x10a028efu); f_10a048e0();
  /* 10a028ef mov esi, esp */
  ESI = (ESP);
  /* 10a028f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a028f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a028f5 call dword ptr [0x10a3445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3445c))), 0x10a028fbu);
  /* 10a028fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a028fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02900 call 0x10a048e0 */
  push32(0x10a02905u); f_10a048e0();
L_10a02905:;
  /* 10a02905 mov esi, esp */
  ESI = (ESP);
  /* 10a02907 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a02909 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0290fu);
  /* 10a0290f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02912 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02914 call 0x10a048e0 */
  push32(0x10a02919u); f_10a048e0();
  /* 10a02919 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0291e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02920 je 0x10a0296f */
  if (C.zf) goto L_10a0296f;
  /* 10a02922 push 0x10a31568 */
  push32((uint32_t)(0x10a31568u));
  /* 10a02927 call 0x10a01005 */
  push32(0x10a0292cu); f_10a01005();
  /* 10a0292c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0292f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02931 jne 0x10a0296f */
  if (!C.zf) goto L_10a0296f;
  /* 10a02933 mov esi, esp */
  ESI = (ESP);
  /* 10a02935 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02937 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a02939 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a0293fu);
  /* 10a0293f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02942 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02944 call 0x10a048e0 */
  push32(0x10a02949u); f_10a048e0();
  /* 10a02949 mov esi, esp */
  ESI = (ESP);
  /* 10a0294b push 0x10a2c2c8 */
  push32((uint32_t)(0x10a2c2c8u));
  /* 10a02950 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02956u);
  /* 10a02956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02959 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0295b call 0x10a048e0 */
  push32(0x10a02960u); f_10a048e0();
  /* 10a02960 mov esi, esp */
  ESI = (ESP);
  /* 10a02962 call dword ptr [0x10a34470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34470))), 0x10a02968u);
  /* 10a02968 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0296a call 0x10a048e0 */
  push32(0x10a0296fu); f_10a048e0();
L_10a0296f:;
  /* 10a0296f mov esi, esp */
  ESI = (ESP);
  /* 10a02971 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a02973 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02979u);
  /* 10a02979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0297c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0297e call 0x10a048e0 */
  push32(0x10a02983u); f_10a048e0();
  /* 10a02983 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0298a je 0x10a02a10 */
  if (C.zf) goto L_10a02a10;
  /* 10a02990 push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a02995 call 0x10a01005 */
  push32(0x10a0299au); f_10a01005();
  /* 10a0299a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0299d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0299f jne 0x10a02a10 */
  if (!C.zf) goto L_10a02a10;
  /* 10a029a1 mov esi, esp */
  ESI = (ESP);
  /* 10a029a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a029a5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a029a7 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a029adu);
  /* 10a029ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a029b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a029b2 call 0x10a048e0 */
  push32(0x10a029b7u); f_10a048e0();
  /* 10a029b7 mov esi, esp */
  ESI = (ESP);
  /* 10a029b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a029bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a029bd call dword ptr [0x10a34474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34474))), 0x10a029c3u);
  /* 10a029c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a029c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a029c8 call 0x10a048e0 */
  push32(0x10a029cdu); f_10a048e0();
  /* 10a029cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a029cf jne 0x10a029ea */
  if (!C.zf) goto L_10a029ea;
  /* 10a029d1 mov esi, esp */
  ESI = (ESP);
  /* 10a029d3 push 0x10a2c2bc */
  push32((uint32_t)(0x10a2c2bcu));
  /* 10a029d8 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a029deu);
  /* 10a029de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a029e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a029e3 call 0x10a048e0 */
  push32(0x10a029e8u); f_10a048e0();
  /* 10a029e8 jmp 0x10a02a01 */
  goto L_10a02a01;
L_10a029ea:;
  /* 10a029ea mov esi, esp */
  ESI = (ESP);
  /* 10a029ec push 0x10a2c2b0 */
  push32((uint32_t)(0x10a2c2b0u));
  /* 10a029f1 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a029f7u);
  /* 10a029f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a029fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a029fc call 0x10a048e0 */
  push32(0x10a02a01u); f_10a048e0();
L_10a02a01:;
  /* 10a02a01 mov esi, esp */
  ESI = (ESP);
  /* 10a02a03 call dword ptr [0x10a34478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34478))), 0x10a02a09u);
  /* 10a02a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02a0b call 0x10a048e0 */
  push32(0x10a02a10u); f_10a048e0();
L_10a02a10:;
  /* 10a02a10 mov esi, esp */
  ESI = (ESP);
  /* 10a02a12 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a02a14 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02a1au);
  /* 10a02a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02a1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02a1f call 0x10a048e0 */
  push32(0x10a02a24u); f_10a048e0();
  /* 10a02a24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02a2b je 0x10a02aa4 */
  if (C.zf) goto L_10a02aa4;
  /* 10a02a2d mov esi, esp */
  ESI = (ESP);
  /* 10a02a2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02a31 push 0x10a31470 */
  push32((uint32_t)(0x10a31470u));
  /* 10a02a36 call dword ptr [0x10a34444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34444))), 0x10a02a3cu);
  /* 10a02a3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02a3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02a41 call 0x10a048e0 */
  push32(0x10a02a46u); f_10a048e0();
  /* 10a02a46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02a48 jne 0x10a02aa4 */
  if (!C.zf) goto L_10a02aa4;
  /* 10a02a4a mov esi, esp */
  ESI = (ESP);
  /* 10a02a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02a4e push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a02a50 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02a56u);
  /* 10a02a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02a59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02a5b call 0x10a048e0 */
  push32(0x10a02a60u); f_10a048e0();
  /* 10a02a60 mov esi, esp */
  ESI = (ESP);
  /* 10a02a62 push 0x10a2c2a4 */
  push32((uint32_t)(0x10a2c2a4u));
  /* 10a02a67 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02a6du);
  /* 10a02a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02a70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02a72 call 0x10a048e0 */
  push32(0x10a02a77u); f_10a048e0();
  /* 10a02a77 mov esi, esp */
  ESI = (ESP);
  /* 10a02a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02a7b push 0x10a31448 */
  push32((uint32_t)(0x10a31448u));
  /* 10a02a80 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a02a86u);
  /* 10a02a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02a89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02a8b call 0x10a048e0 */
  push32(0x10a02a90u); f_10a048e0();
  /* 10a02a90 mov esi, esp */
  ESI = (ESP);
  /* 10a02a92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02a94 call dword ptr [0x10a34454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34454))), 0x10a02a9au);
  /* 10a02a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02a9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02a9f call 0x10a048e0 */
  push32(0x10a02aa4u); f_10a048e0();
L_10a02aa4:;
  /* 10a02aa4 mov esi, esp */
  ESI = (ESP);
  /* 10a02aa6 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10a02aa8 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02aaeu);
  /* 10a02aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02ab3 call 0x10a048e0 */
  push32(0x10a02ab8u); f_10a048e0();
  /* 10a02ab8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02abf je 0x10a02bbd */
  if (C.zf) goto L_10a02bbd;
  /* 10a02ac5 push 0x10a31578 */
  push32((uint32_t)(0x10a31578u));
  /* 10a02aca call 0x10a01005 */
  push32(0x10a02acfu); f_10a01005();
  /* 10a02acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02ad4 jne 0x10a02bbd */
  if (!C.zf) goto L_10a02bbd;
  /* 10a02ada mov esi, esp */
  ESI = (ESP);
  /* 10a02adc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02ade push 0xe */
  push32((uint32_t)(0xeu));
  /* 10a02ae0 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02ae6u);
  /* 10a02ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02ae9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02aeb call 0x10a048e0 */
  push32(0x10a02af0u); f_10a048e0();
  /* 10a02af0 mov esi, esp */
  ESI = (ESP);
  /* 10a02af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02af4 call dword ptr [0x10a3447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3447c))), 0x10a02afau);
  /* 10a02afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02afd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02aff call 0x10a048e0 */
  push32(0x10a02b04u); f_10a048e0();
  /* 10a02b04 mov esi, esp */
  ESI = (ESP);
  /* 10a02b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02b08 push 0x10a31540 */
  push32((uint32_t)(0x10a31540u));
  /* 10a02b0d call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a02b13u);
  /* 10a02b13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02b16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02b18 call 0x10a048e0 */
  push32(0x10a02b1du); f_10a048e0();
  /* 10a02b1d mov esi, esp */
  ESI = (ESP);
  /* 10a02b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02b21 call dword ptr [0x10a34454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34454))), 0x10a02b27u);
  /* 10a02b27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02b2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02b2c call 0x10a048e0 */
  push32(0x10a02b31u); f_10a048e0();
  /* 10a02b31 mov esi, esp */
  ESI = (ESP);
  /* 10a02b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02b35 call dword ptr [0x10a3447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3447c))), 0x10a02b3bu);
  /* 10a02b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02b40 call 0x10a048e0 */
  push32(0x10a02b45u); f_10a048e0();
  /* 10a02b45 mov esi, esp */
  ESI = (ESP);
  /* 10a02b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02b49 push 0x10a31540 */
  push32((uint32_t)(0x10a31540u));
  /* 10a02b4e call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a02b54u);
  /* 10a02b54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02b57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02b59 call 0x10a048e0 */
  push32(0x10a02b5eu); f_10a048e0();
  /* 10a02b5e mov esi, esp */
  ESI = (ESP);
  /* 10a02b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02b62 call dword ptr [0x10a34454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34454))), 0x10a02b68u);
  /* 10a02b68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02b6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02b6d call 0x10a048e0 */
  push32(0x10a02b72u); f_10a048e0();
  /* 10a02b72 mov esi, esp */
  ESI = (ESP);
  /* 10a02b74 push 0x10a2c298 */
  push32((uint32_t)(0x10a2c298u));
  /* 10a02b79 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02b7fu);
  /* 10a02b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02b82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02b84 call 0x10a048e0 */
  push32(0x10a02b89u); f_10a048e0();
  /* 10a02b89 mov esi, esp */
  ESI = (ESP);
  /* 10a02b8b push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10a02b90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02b94 call dword ptr [0x10a34458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34458))), 0x10a02b9au);
  /* 10a02b9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02b9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02b9f call 0x10a048e0 */
  push32(0x10a02ba4u); f_10a048e0();
  /* 10a02ba4 mov esi, esp */
  ESI = (ESP);
  /* 10a02ba6 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10a02bab push 0xa */
  push32((uint32_t)(0xau));
  /* 10a02bad call dword ptr [0x10a3444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3444c))), 0x10a02bb3u);
  /* 10a02bb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02bb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02bb8 call 0x10a048e0 */
  push32(0x10a02bbdu); f_10a048e0();
L_10a02bbd:;
  /* 10a02bbd mov esi, esp */
  ESI = (ESP);
  /* 10a02bbf push 0xa */
  push32((uint32_t)(0xau));
  /* 10a02bc1 call dword ptr [0x10a34480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34480))), 0x10a02bc7u);
  /* 10a02bc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02bca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02bcc call 0x10a048e0 */
  push32(0x10a02bd1u); f_10a048e0();
  /* 10a02bd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02bd8 je 0x10a02c1b */
  if (C.zf) goto L_10a02c1b;
  /* 10a02bda mov esi, esp */
  ESI = (ESP);
  /* 10a02bdc push 0x10a2c28c */
  push32((uint32_t)(0x10a2c28cu));
  /* 10a02be1 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02be7u);
  /* 10a02be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02bea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02bec call 0x10a048e0 */
  push32(0x10a02bf1u); f_10a048e0();
  /* 10a02bf1 mov esi, esp */
  ESI = (ESP);
  /* 10a02bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02bf5 push 0x10a31498 */
  push32((uint32_t)(0x10a31498u));
  /* 10a02bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02bfc push 0x10a31520 */
  push32((uint32_t)(0x10a31520u));
  /* 10a02c01 push 0x10a313f8 */
  push32((uint32_t)(0x10a313f8u));
  /* 10a02c06 push 0x10a315a8 */
  push32((uint32_t)(0x10a315a8u));
  /* 10a02c0b call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a02c11u);
  /* 10a02c11 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02c14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02c16 call 0x10a048e0 */
  push32(0x10a02c1bu); f_10a048e0();
L_10a02c1b:;
  /* 10a02c1b mov esi, esp */
  ESI = (ESP);
  /* 10a02c1d push 0xf */
  push32((uint32_t)(0xfu));
  /* 10a02c1f call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02c25u);
  /* 10a02c25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02c28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02c2a call 0x10a048e0 */
  push32(0x10a02c2fu); f_10a048e0();
  /* 10a02c2f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02c34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02c36 je 0x10a02e9d */
  if (C.zf) goto L_10a02e9d;
  /* 10a02c3c mov esi, esp */
  ESI = (ESP);
  /* 10a02c3e push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10a02c40 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02c46u);
  /* 10a02c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02c4b call 0x10a048e0 */
  push32(0x10a02c50u); f_10a048e0();
  /* 10a02c50 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02c57 je 0x10a02e9d */
  if (C.zf) goto L_10a02e9d;
  /* 10a02c5d mov esi, esp */
  ESI = (ESP);
  /* 10a02c5f push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a02c64 push 0x10a314a0 */
  push32((uint32_t)(0x10a314a0u));
  /* 10a02c69 call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a02c6fu);
  /* 10a02c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02c72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02c74 call 0x10a048e0 */
  push32(0x10a02c79u); f_10a048e0();
  /* 10a02c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02c7b jle 0x10a02e9d */
  if ((C.zf||C.sf!=C.of)) goto L_10a02e9d;
  /* 10a02c81 mov esi, esp */
  ESI = (ESP);
  /* 10a02c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02c85 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10a02c87 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02c8du);
  /* 10a02c8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02c90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02c92 call 0x10a048e0 */
  push32(0x10a02c97u); f_10a048e0();
  /* 10a02c97 mov esi, esp */
  ESI = (ESP);
  /* 10a02c99 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10a02c9b call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02ca1u);
  /* 10a02ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02ca6 call 0x10a048e0 */
  push32(0x10a02cabu); f_10a048e0();
  /* 10a02cab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02cb2 je 0x10a02db8 */
  if (C.zf) goto L_10a02db8;
  /* 10a02cb8 mov esi, esp */
  ESI = (ESP);
  /* 10a02cba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02cbc push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10a02cbe call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02cc4u);
  /* 10a02cc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02cc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02cc9 call 0x10a048e0 */
  push32(0x10a02cceu); f_10a048e0();
  /* 10a02cce mov esi, esp */
  ESI = (ESP);
  /* 10a02cd0 push 0x10a2c280 */
  push32((uint32_t)(0x10a2c280u));
  /* 10a02cd5 call dword ptr [0x10a34488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34488))), 0x10a02cdbu);
  /* 10a02cdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02ce0 call 0x10a048e0 */
  push32(0x10a02ce5u); f_10a048e0();
  /* 10a02ce5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02cea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02cec je 0x10a02d9c */
  if (C.zf) goto L_10a02d9c;
  /* 10a02cf2 mov esi, esp */
  ESI = (ESP);
  /* 10a02cf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02cf8 call dword ptr [0x10a34474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34474))), 0x10a02cfeu);
  /* 10a02cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02d01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02d03 call 0x10a048e0 */
  push32(0x10a02d08u); f_10a048e0();
  /* 10a02d08 cmp eax, 0x63 */
  { uint32_t _a=(EAX),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02d0b jle 0x10a02d26 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02d26;
  /* 10a02d0d mov esi, esp */
  ESI = (ESP);
  /* 10a02d0f push 0x10a2c274 */
  push32((uint32_t)(0x10a2c274u));
  /* 10a02d14 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02d1au);
  /* 10a02d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02d1f call 0x10a048e0 */
  push32(0x10a02d24u); f_10a048e0();
  /* 10a02d24 jmp 0x10a02d3d */
  goto L_10a02d3d;
L_10a02d26:;
  /* 10a02d26 mov esi, esp */
  ESI = (ESP);
  /* 10a02d28 push 0x10a2c268 */
  push32((uint32_t)(0x10a2c268u));
  /* 10a02d2d call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02d33u);
  /* 10a02d33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02d36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02d38 call 0x10a048e0 */
  push32(0x10a02d3du); f_10a048e0();
L_10a02d3d:;
  /* 10a02d3d mov esi, esp */
  ESI = (ESP);
  /* 10a02d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02d41 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10a02d43 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02d49u);
  /* 10a02d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02d4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02d4e call 0x10a048e0 */
  push32(0x10a02d53u); f_10a048e0();
  /* 10a02d53 mov esi, esp */
  ESI = (ESP);
  /* 10a02d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02d57 push 0x10a31558 */
  push32((uint32_t)(0x10a31558u));
  /* 10a02d5c call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a02d62u);
  /* 10a02d62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02d65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02d67 call 0x10a048e0 */
  push32(0x10a02d6cu); f_10a048e0();
  /* 10a02d6c mov esi, esp */
  ESI = (ESP);
  /* 10a02d6e push -0x64 */
  push32((uint32_t)(0xffffff9cu));
  /* 10a02d70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02d74 call dword ptr [0x10a34458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34458))), 0x10a02d7au);
  /* 10a02d7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02d7f call 0x10a048e0 */
  push32(0x10a02d84u); f_10a048e0();
  /* 10a02d84 mov esi, esp */
  ESI = (ESP);
  /* 10a02d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02d88 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a02d8a call dword ptr [0x10a3445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3445c))), 0x10a02d90u);
  /* 10a02d90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02d93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02d95 call 0x10a048e0 */
  push32(0x10a02d9au); f_10a048e0();
  /* 10a02d9a jmp 0x10a02db3 */
  goto L_10a02db3;
L_10a02d9c:;
  /* 10a02d9c mov esi, esp */
  ESI = (ESP);
  /* 10a02d9e push 0x10a2c25c */
  push32((uint32_t)(0x10a2c25cu));
  /* 10a02da3 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02da9u);
  /* 10a02da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02dae call 0x10a048e0 */
  push32(0x10a02db3u); f_10a048e0();
L_10a02db3:;
  /* 10a02db3 jmp 0x10a02e9d */
  goto L_10a02e9d;
L_10a02db8:;
  /* 10a02db8 mov esi, esp */
  ESI = (ESP);
  /* 10a02dba push 0x10a2c250 */
  push32((uint32_t)(0x10a2c250u));
  /* 10a02dbf call dword ptr [0x10a34488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34488))), 0x10a02dc5u);
  /* 10a02dc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02dc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02dca call 0x10a048e0 */
  push32(0x10a02dcfu); f_10a048e0();
  /* 10a02dcf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02dd6 je 0x10a02e86 */
  if (C.zf) goto L_10a02e86;
  /* 10a02ddc mov esi, esp */
  ESI = (ESP);
  /* 10a02dde push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02de2 call dword ptr [0x10a34474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34474))), 0x10a02de8u);
  /* 10a02de8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02deb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02ded call 0x10a048e0 */
  push32(0x10a02df2u); f_10a048e0();
  /* 10a02df2 cmp eax, 0x63 */
  { uint32_t _a=(EAX),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02df5 jle 0x10a02e10 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02e10;
  /* 10a02df7 mov esi, esp */
  ESI = (ESP);
  /* 10a02df9 push 0x10a2c274 */
  push32((uint32_t)(0x10a2c274u));
  /* 10a02dfe call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02e04u);
  /* 10a02e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02e07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02e09 call 0x10a048e0 */
  push32(0x10a02e0eu); f_10a048e0();
  /* 10a02e0e jmp 0x10a02e27 */
  goto L_10a02e27;
L_10a02e10:;
  /* 10a02e10 mov esi, esp */
  ESI = (ESP);
  /* 10a02e12 push 0x10a2c268 */
  push32((uint32_t)(0x10a2c268u));
  /* 10a02e17 call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02e1du);
  /* 10a02e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02e20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02e22 call 0x10a048e0 */
  push32(0x10a02e27u); f_10a048e0();
L_10a02e27:;
  /* 10a02e27 mov esi, esp */
  ESI = (ESP);
  /* 10a02e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02e2b push 0xf */
  push32((uint32_t)(0xfu));
  /* 10a02e2d call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02e33u);
  /* 10a02e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02e36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02e38 call 0x10a048e0 */
  push32(0x10a02e3du); f_10a048e0();
  /* 10a02e3d mov esi, esp */
  ESI = (ESP);
  /* 10a02e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02e41 push 0x10a31558 */
  push32((uint32_t)(0x10a31558u));
  /* 10a02e46 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a02e4cu);
  /* 10a02e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02e51 call 0x10a048e0 */
  push32(0x10a02e56u); f_10a048e0();
  /* 10a02e56 mov esi, esp */
  ESI = (ESP);
  /* 10a02e58 push -0x64 */
  push32((uint32_t)(0xffffff9cu));
  /* 10a02e5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02e5e call dword ptr [0x10a34458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34458))), 0x10a02e64u);
  /* 10a02e64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02e67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02e69 call 0x10a048e0 */
  push32(0x10a02e6eu); f_10a048e0();
  /* 10a02e6e mov esi, esp */
  ESI = (ESP);
  /* 10a02e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02e72 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a02e74 call dword ptr [0x10a3445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3445c))), 0x10a02e7au);
  /* 10a02e7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02e7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02e7f call 0x10a048e0 */
  push32(0x10a02e84u); f_10a048e0();
  /* 10a02e84 jmp 0x10a02e9d */
  goto L_10a02e9d;
L_10a02e86:;
  /* 10a02e86 mov esi, esp */
  ESI = (ESP);
  /* 10a02e88 push 0x10a2c25c */
  push32((uint32_t)(0x10a2c25cu));
  /* 10a02e8d call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02e93u);
  /* 10a02e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02e96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02e98 call 0x10a048e0 */
  push32(0x10a02e9du); f_10a048e0();
L_10a02e9d:;
  /* 10a02e9d mov esi, esp */
  ESI = (ESP);
  /* 10a02e9f push 0xf */
  push32((uint32_t)(0xfu));
  /* 10a02ea1 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02ea7u);
  /* 10a02ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02eaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02eac call 0x10a048e0 */
  push32(0x10a02eb1u); f_10a048e0();
  /* 10a02eb1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02eb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02eb8 je 0x10a02f0d */
  if (C.zf) goto L_10a02f0d;
  /* 10a02eba mov esi, esp */
  ESI = (ESP);
  /* 10a02ebc push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10a02ebe call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02ec4u);
  /* 10a02ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02ec7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02ec9 call 0x10a048e0 */
  push32(0x10a02eceu); f_10a048e0();
  /* 10a02ece and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02ed5 jne 0x10a02f0d */
  if (!C.zf) goto L_10a02f0d;
  /* 10a02ed7 mov esi, esp */
  ESI = (ESP);
  /* 10a02ed9 push 0x10a31410 */
  push32((uint32_t)(0x10a31410u));
  /* 10a02ede push 0x10a314a0 */
  push32((uint32_t)(0x10a314a0u));
  /* 10a02ee3 call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a02ee9u);
  /* 10a02ee9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02eec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02eee call 0x10a048e0 */
  push32(0x10a02ef3u); f_10a048e0();
  /* 10a02ef3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02ef5 jne 0x10a02f0d */
  if (!C.zf) goto L_10a02f0d;
  /* 10a02ef7 mov esi, esp */
  ESI = (ESP);
  /* 10a02ef9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02efb push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10a02efd call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02f03u);
  /* 10a02f03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02f06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02f08 call 0x10a048e0 */
  push32(0x10a02f0du); f_10a048e0();
L_10a02f0d:;
  /* 10a02f0d mov esi, esp */
  ESI = (ESP);
  /* 10a02f0f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a02f11 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02f17u);
  /* 10a02f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02f1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02f1c call 0x10a048e0 */
  push32(0x10a02f21u); f_10a048e0();
  /* 10a02f21 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02f26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02f28 je 0x10a02f8d */
  if (C.zf) goto L_10a02f8d;
  /* 10a02f2a mov esi, esp */
  ESI = (ESP);
  /* 10a02f2c push 5 */
  push32((uint32_t)(0x5u));
  /* 10a02f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02f30 call dword ptr [0x10a34474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34474))), 0x10a02f36u);
  /* 10a02f36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02f39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02f3b call 0x10a048e0 */
  push32(0x10a02f40u); f_10a048e0();
  /* 10a02f40 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02f43 jl 0x10a02f60 */
  if ((C.sf!=C.of)) goto L_10a02f60;
  /* 10a02f45 mov esi, esp */
  ESI = (ESP);
  /* 10a02f47 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a02f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02f4b call dword ptr [0x10a34474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34474))), 0x10a02f51u);
  /* 10a02f51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02f54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02f56 call 0x10a048e0 */
  push32(0x10a02f5bu); f_10a048e0();
  /* 10a02f5b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02f5e jge 0x10a02f8d */
  if ((C.sf==C.of)) goto L_10a02f8d;
L_10a02f60:;
  /* 10a02f60 mov esi, esp */
  ESI = (ESP);
  /* 10a02f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02f64 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a02f66 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02f6cu);
  /* 10a02f6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02f6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02f71 call 0x10a048e0 */
  push32(0x10a02f76u); f_10a048e0();
  /* 10a02f76 mov esi, esp */
  ESI = (ESP);
  /* 10a02f78 push 0x10a2c244 */
  push32((uint32_t)(0x10a2c244u));
  /* 10a02f7d call dword ptr [0x10a34438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34438))), 0x10a02f83u);
  /* 10a02f83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02f86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02f88 call 0x10a048e0 */
  push32(0x10a02f8du); f_10a048e0();
L_10a02f8d:;
  /* 10a02f8d mov esi, esp */
  ESI = (ESP);
  /* 10a02f8f push 5 */
  push32((uint32_t)(0x5u));
  /* 10a02f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02f93 call dword ptr [0x10a34474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34474))), 0x10a02f99u);
  /* 10a02f99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02f9e call 0x10a048e0 */
  push32(0x10a02fa3u); f_10a048e0();
  /* 10a02fa3 cmp eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02fa6 jle 0x10a02fd9 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02fd9;
  /* 10a02fa8 mov esi, esp */
  ESI = (ESP);
  /* 10a02faa push 4 */
  push32((uint32_t)(0x4u));
  /* 10a02fac push 0 */
  push32((uint32_t)(0x0u));
  /* 10a02fae call dword ptr [0x10a34474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34474))), 0x10a02fb4u);
  /* 10a02fb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02fb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02fb9 call 0x10a048e0 */
  push32(0x10a02fbeu); f_10a048e0();
  /* 10a02fbe cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02fc1 jle 0x10a02fd9 */
  if ((C.zf||C.sf!=C.of)) goto L_10a02fd9;
  /* 10a02fc3 mov esi, esp */
  ESI = (ESP);
  /* 10a02fc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a02fc7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a02fc9 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a02fcfu);
  /* 10a02fcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02fd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02fd4 call 0x10a048e0 */
  push32(0x10a02fd9u); f_10a048e0();
L_10a02fd9:;
  /* 10a02fd9 mov esi, esp */
  ESI = (ESP);
  /* 10a02fdb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10a02fdd call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a02fe3u);
  /* 10a02fe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a02fe6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a02fe8 call 0x10a048e0 */
  push32(0x10a02fedu); f_10a048e0();
  /* 10a02fed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a02ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a02ff4 je 0x10a03071 */
  if (C.zf) goto L_10a03071;
  /* 10a02ff6 mov esi, esp */
  ESI = (ESP);
  /* 10a02ff8 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a02ffeu);
  /* 10a02ffe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03000 call 0x10a048e0 */
  push32(0x10a03005u); f_10a048e0();
  /* 10a03005 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0300a jle 0x10a03071 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03071;
  /* 10a0300c mov esi, esp */
  ESI = (ESP);
  /* 10a0300e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03010 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10a03012 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a03018u);
  /* 10a03018 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0301b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0301d call 0x10a048e0 */
  push32(0x10a03022u); f_10a048e0();
  /* 10a03022 mov esi, esp */
  ESI = (ESP);
  /* 10a03024 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03026 push 0x10a31420 */
  push32((uint32_t)(0x10a31420u));
  /* 10a0302b call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03031u);
  /* 10a03031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03034 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03036 call 0x10a048e0 */
  push32(0x10a0303bu); f_10a048e0();
  /* 10a0303b mov esi, esp */
  ESI = (ESP);
  /* 10a0303d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0303f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03041 push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a03046 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03048 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0304eu);
  /* 10a0304e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03051 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03053 call 0x10a048e0 */
  push32(0x10a03058u); f_10a048e0();
  /* 10a03058 mov esi, esp */
  ESI = (ESP);
  /* 10a0305a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10a0305f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03061 call dword ptr [0x10a3444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3444c))), 0x10a03067u);
  /* 10a03067 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0306a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0306c call 0x10a048e0 */
  push32(0x10a03071u); f_10a048e0();
L_10a03071:;
  /* 10a03071 mov esi, esp */
  ESI = (ESP);
  /* 10a03073 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10a03075 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0307bu);
  /* 10a0307b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0307e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03080 call 0x10a048e0 */
  push32(0x10a03085u); f_10a048e0();
  /* 10a03085 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0308a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0308c jne 0x10a030f0 */
  if (!C.zf) goto L_10a030f0;
  /* 10a0308e mov esi, esp */
  ESI = (ESP);
  /* 10a03090 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03092 call dword ptr [0x10a34450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34450))), 0x10a03098u);
  /* 10a03098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0309b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0309d call 0x10a048e0 */
  push32(0x10a030a2u); f_10a048e0();
  /* 10a030a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a030a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a030a9 je 0x10a030f0 */
  if (C.zf) goto L_10a030f0;
  /* 10a030ab push 0x10a31420 */
  push32((uint32_t)(0x10a31420u));
  /* 10a030b0 call 0x10a01005 */
  push32(0x10a030b5u); f_10a01005();
  /* 10a030b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a030b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a030ba jle 0x10a030f0 */
  if ((C.zf||C.sf!=C.of)) goto L_10a030f0;
  /* 10a030bc mov esi, esp */
  ESI = (ESP);
  /* 10a030be push 0 */
  push32((uint32_t)(0x0u));
  /* 10a030c0 push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a030c5 push 0x10a31420 */
  push32((uint32_t)(0x10a31420u));
  /* 10a030ca call dword ptr [0x10a34448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34448))), 0x10a030d0u);
  /* 10a030d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a030d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a030d5 call 0x10a048e0 */
  push32(0x10a030dau); f_10a048e0();
  /* 10a030da mov esi, esp */
  ESI = (ESP);
  /* 10a030dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10a030de push 1 */
  push32((uint32_t)(0x1u));
  /* 10a030e0 call dword ptr [0x10a3444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3444c))), 0x10a030e6u);
  /* 10a030e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a030e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a030eb call 0x10a048e0 */
  push32(0x10a030f0u); f_10a048e0();
L_10a030f0:;
  /* 10a030f0 mov esi, esp */
  ESI = (ESP);
  /* 10a030f2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10a030f4 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a030fau);
  /* 10a030fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a030fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a030ff call 0x10a048e0 */
  push32(0x10a03104u); f_10a048e0();
  /* 10a03104 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0310b je 0x10a03139 */
  if (C.zf) goto L_10a03139;
  /* 10a0310d mov esi, esp */
  ESI = (ESP);
  /* 10a0310f call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a03115u);
  /* 10a03115 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03117 call 0x10a048e0 */
  push32(0x10a0311cu); f_10a048e0();
  /* 10a0311c cmp eax, 0x5dc */
  { uint32_t _a=(EAX),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03121 jle 0x10a03139 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03139;
  /* 10a03123 mov esi, esp */
  ESI = (ESP);
  /* 10a03125 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03127 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10a03129 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a0312fu);
  /* 10a0312f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03132 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03134 call 0x10a048e0 */
  push32(0x10a03139u); f_10a048e0();
L_10a03139:;
  /* 10a03139 mov esi, esp */
  ESI = (ESP);
  /* 10a0313b push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10a0313d call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03143u);
  /* 10a03143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03146 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03148 call 0x10a048e0 */
  push32(0x10a0314du); f_10a048e0();
  /* 10a0314d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03154 jne 0x10a03199 */
  if (!C.zf) goto L_10a03199;
  /* 10a03156 push 0x10a31418 */
  push32((uint32_t)(0x10a31418u));
  /* 10a0315b call 0x10a01005 */
  push32(0x10a03160u); f_10a01005();
  /* 10a03160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03165 jle 0x10a03199 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03199;
  /* 10a03167 mov esi, esp */
  ESI = (ESP);
  /* 10a03169 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0316b push 0x10a31418 */
  push32((uint32_t)(0x10a31418u));
  /* 10a03170 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03176u);
  /* 10a03176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03179 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0317b call 0x10a048e0 */
  push32(0x10a03180u); f_10a048e0();
  /* 10a03180 mov esi, esp */
  ESI = (ESP);
  /* 10a03182 push 0x10a31450 */
  push32((uint32_t)(0x10a31450u));
  /* 10a03187 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03189 call dword ptr [0x10a34494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34494))), 0x10a0318fu);
  /* 10a0318f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03192 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03194 call 0x10a048e0 */
  push32(0x10a03199u); f_10a048e0();
L_10a03199:;
  /* 10a03199 mov esi, esp */
  ESI = (ESP);
  /* 10a0319b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a0319d call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a031a3u);
  /* 10a031a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a031a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a031a8 call 0x10a048e0 */
  push32(0x10a031adu); f_10a048e0();
  /* 10a031ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a031b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a031b4 je 0x10a03288 */
  if (C.zf) goto L_10a03288;
  /* 10a031ba mov esi, esp */
  ESI = (ESP);
  /* 10a031bc call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a031c2u);
  /* 10a031c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a031c4 call 0x10a048e0 */
  push32(0x10a031c9u); f_10a048e0();
  /* 10a031c9 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a031ce jle 0x10a03288 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03288;
  /* 10a031d4 mov esi, esp */
  ESI = (ESP);
  /* 10a031d6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a031d8 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a031deu);
  /* 10a031de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a031e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a031e3 call 0x10a048e0 */
  push32(0x10a031e8u); f_10a048e0();
  /* 10a031e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a031ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a031ef je 0x10a03288 */
  if (C.zf) goto L_10a03288;
  /* 10a031f5 mov esi, esp */
  ESI = (ESP);
  /* 10a031f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a031f9 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a031fb call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a03201u);
  /* 10a03201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03204 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03206 call 0x10a048e0 */
  push32(0x10a0320bu); f_10a048e0();
  /* 10a0320b mov esi, esp */
  ESI = (ESP);
  /* 10a0320d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0320f push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a03214 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03216 push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a0321b push 0x10a314e8 */
  push32((uint32_t)(0x10a314e8u));
  /* 10a03220 push 0x10a31588 */
  push32((uint32_t)(0x10a31588u));
  /* 10a03225 call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a0322bu);
  /* 10a0322b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0322e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03230 call 0x10a048e0 */
  push32(0x10a03235u); f_10a048e0();
  /* 10a03235 mov esi, esp */
  ESI = (ESP);
  /* 10a03237 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03239 push 0x10a31588 */
  push32((uint32_t)(0x10a31588u));
  /* 10a0323e call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03244u);
  /* 10a03244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03247 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03249 call 0x10a048e0 */
  push32(0x10a0324eu); f_10a048e0();
  /* 10a0324e mov esi, esp */
  ESI = (ESP);
  /* 10a03250 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03252 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03254 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a03259 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0325b call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a03261u);
  /* 10a03261 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03264 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03266 call 0x10a048e0 */
  push32(0x10a0326bu); f_10a048e0();
  /* 10a0326b mov esi, esp */
  ESI = (ESP);
  /* 10a0326d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0326f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03271 push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a03276 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03278 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0327eu);
  /* 10a0327e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03281 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03283 call 0x10a048e0 */
  push32(0x10a03288u); f_10a048e0();
L_10a03288:;
  /* 10a03288 mov esi, esp */
  ESI = (ESP);
  /* 10a0328a push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10a0328c call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03292u);
  /* 10a03292 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03295 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03297 call 0x10a048e0 */
  push32(0x10a0329cu); f_10a048e0();
  /* 10a0329c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a032a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a032a3 je 0x10a03377 */
  if (C.zf) goto L_10a03377;
  /* 10a032a9 mov esi, esp */
  ESI = (ESP);
  /* 10a032ab call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a032b1u);
  /* 10a032b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a032b3 call 0x10a048e0 */
  push32(0x10a032b8u); f_10a048e0();
  /* 10a032b8 cmp eax, 0x3a98 */
  { uint32_t _a=(EAX),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a032bd jle 0x10a03377 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03377;
  /* 10a032c3 mov esi, esp */
  ESI = (ESP);
  /* 10a032c5 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a032c7 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a032cdu);
  /* 10a032cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a032d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a032d2 call 0x10a048e0 */
  push32(0x10a032d7u); f_10a048e0();
  /* 10a032d7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a032dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a032de je 0x10a03377 */
  if (C.zf) goto L_10a03377;
  /* 10a032e4 mov esi, esp */
  ESI = (ESP);
  /* 10a032e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a032e8 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10a032ea call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a032f0u);
  /* 10a032f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a032f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a032f5 call 0x10a048e0 */
  push32(0x10a032fau); f_10a048e0();
  /* 10a032fa mov esi, esp */
  ESI = (ESP);
  /* 10a032fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a032fe push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a03303 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03305 push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a0330a push 0x10a314e8 */
  push32((uint32_t)(0x10a314e8u));
  /* 10a0330f push 0x10a31560 */
  push32((uint32_t)(0x10a31560u));
  /* 10a03314 call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a0331au);
  /* 10a0331a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0331d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0331f call 0x10a048e0 */
  push32(0x10a03324u); f_10a048e0();
  /* 10a03324 mov esi, esp */
  ESI = (ESP);
  /* 10a03326 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03328 push 0x10a31560 */
  push32((uint32_t)(0x10a31560u));
  /* 10a0332d call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03333u);
  /* 10a03333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03338 call 0x10a048e0 */
  push32(0x10a0333du); f_10a048e0();
  /* 10a0333d mov esi, esp */
  ESI = (ESP);
  /* 10a0333f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03341 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03343 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a03348 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0334a call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a03350u);
  /* 10a03350 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03353 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03355 call 0x10a048e0 */
  push32(0x10a0335au); f_10a048e0();
  /* 10a0335a mov esi, esp */
  ESI = (ESP);
  /* 10a0335c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0335e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03360 push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a03365 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03367 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0336du);
  /* 10a0336d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03370 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03372 call 0x10a048e0 */
  push32(0x10a03377u); f_10a048e0();
L_10a03377:;
  /* 10a03377 mov esi, esp */
  ESI = (ESP);
  /* 10a03379 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10a0337b call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03381u);
  /* 10a03381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03384 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03386 call 0x10a048e0 */
  push32(0x10a0338bu); f_10a048e0();
  /* 10a0338b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03392 je 0x10a03466 */
  if (C.zf) goto L_10a03466;
  /* 10a03398 mov esi, esp */
  ESI = (ESP);
  /* 10a0339a call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a033a0u);
  /* 10a033a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a033a2 call 0x10a048e0 */
  push32(0x10a033a7u); f_10a048e0();
  /* 10a033a7 cmp eax, 0x61a8 */
  { uint32_t _a=(EAX),_b=(0x61a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a033ac jle 0x10a03466 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03466;
  /* 10a033b2 mov esi, esp */
  ESI = (ESP);
  /* 10a033b4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a033b6 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a033bcu);
  /* 10a033bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a033bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a033c1 call 0x10a048e0 */
  push32(0x10a033c6u); f_10a048e0();
  /* 10a033c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a033cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a033cd je 0x10a03466 */
  if (C.zf) goto L_10a03466;
  /* 10a033d3 mov esi, esp */
  ESI = (ESP);
  /* 10a033d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a033d7 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10a033d9 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a033dfu);
  /* 10a033df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a033e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a033e4 call 0x10a048e0 */
  push32(0x10a033e9u); f_10a048e0();
  /* 10a033e9 mov esi, esp */
  ESI = (ESP);
  /* 10a033eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a033ed push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a033f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a033f4 push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a033f9 push 0x10a313e0 */
  push32((uint32_t)(0x10a313e0u));
  /* 10a033fe push 0x10a31570 */
  push32((uint32_t)(0x10a31570u));
  /* 10a03403 call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a03409u);
  /* 10a03409 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0340c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0340e call 0x10a048e0 */
  push32(0x10a03413u); f_10a048e0();
  /* 10a03413 mov esi, esp */
  ESI = (ESP);
  /* 10a03415 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03417 push 0x10a31570 */
  push32((uint32_t)(0x10a31570u));
  /* 10a0341c call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03422u);
  /* 10a03422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03425 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03427 call 0x10a048e0 */
  push32(0x10a0342cu); f_10a048e0();
  /* 10a0342c mov esi, esp */
  ESI = (ESP);
  /* 10a0342e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03430 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03432 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a03437 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03439 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0343fu);
  /* 10a0343f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03442 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03444 call 0x10a048e0 */
  push32(0x10a03449u); f_10a048e0();
  /* 10a03449 mov esi, esp */
  ESI = (ESP);
  /* 10a0344b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0344d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0344f push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a03454 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03456 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0345cu);
  /* 10a0345c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0345f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03461 call 0x10a048e0 */
  push32(0x10a03466u); f_10a048e0();
L_10a03466:;
  /* 10a03466 mov esi, esp */
  ESI = (ESP);
  /* 10a03468 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10a0346a call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03470u);
  /* 10a03470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03473 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03475 call 0x10a048e0 */
  push32(0x10a0347au); f_10a048e0();
  /* 10a0347a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0347f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03481 je 0x10a03555 */
  if (C.zf) goto L_10a03555;
  /* 10a03487 mov esi, esp */
  ESI = (ESP);
  /* 10a03489 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a0348fu);
  /* 10a0348f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03491 call 0x10a048e0 */
  push32(0x10a03496u); f_10a048e0();
  /* 10a03496 cmp eax, 0x88b8 */
  { uint32_t _a=(EAX),_b=(0x88b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0349b jle 0x10a03555 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03555;
  /* 10a034a1 mov esi, esp */
  ESI = (ESP);
  /* 10a034a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a034a5 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a034abu);
  /* 10a034ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a034ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a034b0 call 0x10a048e0 */
  push32(0x10a034b5u); f_10a048e0();
  /* 10a034b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a034ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a034bc je 0x10a03555 */
  if (C.zf) goto L_10a03555;
  /* 10a034c2 mov esi, esp */
  ESI = (ESP);
  /* 10a034c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a034c6 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10a034c8 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a034ceu);
  /* 10a034ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a034d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a034d3 call 0x10a048e0 */
  push32(0x10a034d8u); f_10a048e0();
  /* 10a034d8 mov esi, esp */
  ESI = (ESP);
  /* 10a034da push 0 */
  push32((uint32_t)(0x0u));
  /* 10a034dc push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a034e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a034e3 push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a034e8 push 0x10a313e0 */
  push32((uint32_t)(0x10a313e0u));
  /* 10a034ed push 0x10a31538 */
  push32((uint32_t)(0x10a31538u));
  /* 10a034f2 call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a034f8u);
  /* 10a034f8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a034fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a034fd call 0x10a048e0 */
  push32(0x10a03502u); f_10a048e0();
  /* 10a03502 mov esi, esp */
  ESI = (ESP);
  /* 10a03504 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03506 push 0x10a31538 */
  push32((uint32_t)(0x10a31538u));
  /* 10a0350b call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03511u);
  /* 10a03511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03514 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03516 call 0x10a048e0 */
  push32(0x10a0351bu); f_10a048e0();
  /* 10a0351b mov esi, esp */
  ESI = (ESP);
  /* 10a0351d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0351f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03521 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a03526 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03528 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0352eu);
  /* 10a0352e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03531 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03533 call 0x10a048e0 */
  push32(0x10a03538u); f_10a048e0();
  /* 10a03538 mov esi, esp */
  ESI = (ESP);
  /* 10a0353a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0353c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0353e push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a03543 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03545 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0354bu);
  /* 10a0354b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0354e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03550 call 0x10a048e0 */
  push32(0x10a03555u); f_10a048e0();
L_10a03555:;
  /* 10a03555 mov esi, esp */
  ESI = (ESP);
  /* 10a03557 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10a03559 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0355fu);
  /* 10a0355f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03562 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03564 call 0x10a048e0 */
  push32(0x10a03569u); f_10a048e0();
  /* 10a03569 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0356e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03570 je 0x10a03644 */
  if (C.zf) goto L_10a03644;
  /* 10a03576 mov esi, esp */
  ESI = (ESP);
  /* 10a03578 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a0357eu);
  /* 10a0357e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03580 call 0x10a048e0 */
  push32(0x10a03585u); f_10a048e0();
  /* 10a03585 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0358a jle 0x10a03644 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03644;
  /* 10a03590 mov esi, esp */
  ESI = (ESP);
  /* 10a03592 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a03594 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0359au);
  /* 10a0359a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0359d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0359f call 0x10a048e0 */
  push32(0x10a035a4u); f_10a048e0();
  /* 10a035a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a035a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a035ab je 0x10a03644 */
  if (C.zf) goto L_10a03644;
  /* 10a035b1 mov esi, esp */
  ESI = (ESP);
  /* 10a035b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a035b5 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10a035b7 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a035bdu);
  /* 10a035bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a035c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a035c2 call 0x10a048e0 */
  push32(0x10a035c7u); f_10a048e0();
  /* 10a035c7 mov esi, esp */
  ESI = (ESP);
  /* 10a035c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a035cb push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a035d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a035d2 push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a035d7 push 0x10a313e8 */
  push32((uint32_t)(0x10a313e8u));
  /* 10a035dc push 0x10a31550 */
  push32((uint32_t)(0x10a31550u));
  /* 10a035e1 call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a035e7u);
  /* 10a035e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a035ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a035ec call 0x10a048e0 */
  push32(0x10a035f1u); f_10a048e0();
  /* 10a035f1 mov esi, esp */
  ESI = (ESP);
  /* 10a035f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a035f5 push 0x10a31550 */
  push32((uint32_t)(0x10a31550u));
  /* 10a035fa call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03600u);
  /* 10a03600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03603 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03605 call 0x10a048e0 */
  push32(0x10a0360au); f_10a048e0();
  /* 10a0360a mov esi, esp */
  ESI = (ESP);
  /* 10a0360c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0360e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03610 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a03615 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03617 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0361du);
  /* 10a0361d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03620 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03622 call 0x10a048e0 */
  push32(0x10a03627u); f_10a048e0();
  /* 10a03627 mov esi, esp */
  ESI = (ESP);
  /* 10a03629 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0362b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0362d push 0x10a314d0 */
  push32((uint32_t)(0x10a314d0u));
  /* 10a03632 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03634 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0363au);
  /* 10a0363a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0363d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0363f call 0x10a048e0 */
  push32(0x10a03644u); f_10a048e0();
L_10a03644:;
  /* 10a03644 mov esi, esp */
  ESI = (ESP);
  /* 10a03646 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10a03648 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0364eu);
  /* 10a0364e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03653 call 0x10a048e0 */
  push32(0x10a03658u); f_10a048e0();
  /* 10a03658 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0365d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0365f jne 0x10a036b4 */
  if (!C.zf) goto L_10a036b4;
  /* 10a03661 mov esi, esp */
  ESI = (ESP);
  /* 10a03663 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10a03665 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0366bu);
  /* 10a0366b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0366e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03670 call 0x10a048e0 */
  push32(0x10a03675u); f_10a048e0();
  /* 10a03675 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0367a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0367c je 0x10a036b4 */
  if (C.zf) goto L_10a036b4;
  /* 10a0367e mov esi, esp */
  ESI = (ESP);
  /* 10a03680 push 0x10a31550 */
  push32((uint32_t)(0x10a31550u));
  /* 10a03685 push 0x10a314d0 */
  push32((uint32_t)(0x10a314d0u));
  /* 10a0368a call dword ptr [0x10a34460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34460))), 0x10a03690u);
  /* 10a03690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03693 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03695 call 0x10a048e0 */
  push32(0x10a0369au); f_10a048e0();
  /* 10a0369a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0369c jle 0x10a036b4 */
  if ((C.zf||C.sf!=C.of)) goto L_10a036b4;
  /* 10a0369e mov esi, esp */
  ESI = (ESP);
  /* 10a036a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a036a2 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10a036a4 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a036aau);
  /* 10a036aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a036ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a036af call 0x10a048e0 */
  push32(0x10a036b4u); f_10a048e0();
L_10a036b4:;
  /* 10a036b4 mov esi, esp */
  ESI = (ESP);
  /* 10a036b6 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10a036b8 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a036beu);
  /* 10a036be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a036c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a036c3 call 0x10a048e0 */
  push32(0x10a036c8u); f_10a048e0();
  /* 10a036c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a036cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a036cf jne 0x10a03725 */
  if (!C.zf) goto L_10a03725;
  /* 10a036d1 push 0x10a31550 */
  push32((uint32_t)(0x10a31550u));
  /* 10a036d6 call 0x10a01005 */
  push32(0x10a036dbu); f_10a01005();
  /* 10a036db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a036de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a036e0 jle 0x10a03725 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03725;
  /* 10a036e2 push 0x10a31450 */
  push32((uint32_t)(0x10a31450u));
  /* 10a036e7 call 0x10a01005 */
  push32(0x10a036ecu); f_10a01005();
  /* 10a036ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a036ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a036f1 jle 0x10a03725 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03725;
  /* 10a036f3 mov esi, esp */
  ESI = (ESP);
  /* 10a036f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a036f7 push 0x10a31550 */
  push32((uint32_t)(0x10a31550u));
  /* 10a036fc call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03702u);
  /* 10a03702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03705 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03707 call 0x10a048e0 */
  push32(0x10a0370cu); f_10a048e0();
  /* 10a0370c mov esi, esp */
  ESI = (ESP);
  /* 10a0370e push 0x10a31450 */
  push32((uint32_t)(0x10a31450u));
  /* 10a03713 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03715 call dword ptr [0x10a34494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34494))), 0x10a0371bu);
  /* 10a0371b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0371e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03720 call 0x10a048e0 */
  push32(0x10a03725u); f_10a048e0();
L_10a03725:;
  /* 10a03725 mov esi, esp */
  ESI = (ESP);
  /* 10a03727 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 10a03729 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0372fu);
  /* 10a0372f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03732 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03734 call 0x10a048e0 */
  push32(0x10a03739u); f_10a048e0();
  /* 10a03739 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0373e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03740 je 0x10a03814 */
  if (C.zf) goto L_10a03814;
  /* 10a03746 mov esi, esp */
  ESI = (ESP);
  /* 10a03748 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a0374eu);
  /* 10a0374e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03750 call 0x10a048e0 */
  push32(0x10a03755u); f_10a048e0();
  /* 10a03755 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0375a jle 0x10a03814 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03814;
  /* 10a03760 mov esi, esp */
  ESI = (ESP);
  /* 10a03762 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a03764 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0376au);
  /* 10a0376a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0376d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0376f call 0x10a048e0 */
  push32(0x10a03774u); f_10a048e0();
  /* 10a03774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0377b je 0x10a03814 */
  if (C.zf) goto L_10a03814;
  /* 10a03781 mov esi, esp */
  ESI = (ESP);
  /* 10a03783 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03785 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 10a03787 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a0378du);
  /* 10a0378d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03792 call 0x10a048e0 */
  push32(0x10a03797u); f_10a048e0();
  /* 10a03797 mov esi, esp */
  ESI = (ESP);
  /* 10a03799 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0379b push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a037a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a037a2 push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a037a7 push 0x10a313e8 */
  push32((uint32_t)(0x10a313e8u));
  /* 10a037ac push 0x10a31618 */
  push32((uint32_t)(0x10a31618u));
  /* 10a037b1 call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a037b7u);
  /* 10a037b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a037ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a037bc call 0x10a048e0 */
  push32(0x10a037c1u); f_10a048e0();
  /* 10a037c1 mov esi, esp */
  ESI = (ESP);
  /* 10a037c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a037c5 push 0x10a31618 */
  push32((uint32_t)(0x10a31618u));
  /* 10a037ca call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a037d0u);
  /* 10a037d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a037d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a037d5 call 0x10a048e0 */
  push32(0x10a037dau); f_10a048e0();
  /* 10a037da mov esi, esp */
  ESI = (ESP);
  /* 10a037dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a037de push 0 */
  push32((uint32_t)(0x0u));
  /* 10a037e0 push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a037e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a037e7 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a037edu);
  /* 10a037ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a037f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a037f2 call 0x10a048e0 */
  push32(0x10a037f7u); f_10a048e0();
  /* 10a037f7 mov esi, esp */
  ESI = (ESP);
  /* 10a037f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a037fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a037fd push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a03802 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03804 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a0380au);
  /* 10a0380a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0380d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0380f call 0x10a048e0 */
  push32(0x10a03814u); f_10a048e0();
L_10a03814:;
  /* 10a03814 mov esi, esp */
  ESI = (ESP);
  /* 10a03816 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10a03818 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0381eu);
  /* 10a0381e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03821 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03823 call 0x10a048e0 */
  push32(0x10a03828u); f_10a048e0();
  /* 10a03828 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0382d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0382f je 0x10a03903 */
  if (C.zf) goto L_10a03903;
  /* 10a03835 mov esi, esp */
  ESI = (ESP);
  /* 10a03837 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a0383du);
  /* 10a0383d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0383f call 0x10a048e0 */
  push32(0x10a03844u); f_10a048e0();
  /* 10a03844 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03849 jle 0x10a03903 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03903;
  /* 10a0384f mov esi, esp */
  ESI = (ESP);
  /* 10a03851 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a03853 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03859u);
  /* 10a03859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0385c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0385e call 0x10a048e0 */
  push32(0x10a03863u); f_10a048e0();
  /* 10a03863 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0386a je 0x10a03903 */
  if (C.zf) goto L_10a03903;
  /* 10a03870 mov esi, esp */
  ESI = (ESP);
  /* 10a03872 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03874 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10a03876 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a0387cu);
  /* 10a0387c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0387f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03881 call 0x10a048e0 */
  push32(0x10a03886u); f_10a048e0();
  /* 10a03886 mov esi, esp */
  ESI = (ESP);
  /* 10a03888 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0388a push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a0388f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03891 push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a03896 push 0x10a313e8 */
  push32((uint32_t)(0x10a313e8u));
  /* 10a0389b push 0x10a31630 */
  push32((uint32_t)(0x10a31630u));
  /* 10a038a0 call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a038a6u);
  /* 10a038a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a038a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a038ab call 0x10a048e0 */
  push32(0x10a038b0u); f_10a048e0();
  /* 10a038b0 mov esi, esp */
  ESI = (ESP);
  /* 10a038b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a038b4 push 0x10a31630 */
  push32((uint32_t)(0x10a31630u));
  /* 10a038b9 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a038bfu);
  /* 10a038bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a038c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a038c4 call 0x10a048e0 */
  push32(0x10a038c9u); f_10a048e0();
  /* 10a038c9 mov esi, esp */
  ESI = (ESP);
  /* 10a038cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a038cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a038cf push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a038d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a038d6 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a038dcu);
  /* 10a038dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a038df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a038e1 call 0x10a048e0 */
  push32(0x10a038e6u); f_10a048e0();
  /* 10a038e6 mov esi, esp */
  ESI = (ESP);
  /* 10a038e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a038ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10a038ec push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a038f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a038f3 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a038f9u);
  /* 10a038f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a038fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a038fe call 0x10a048e0 */
  push32(0x10a03903u); f_10a048e0();
L_10a03903:;
  /* 10a03903 mov esi, esp */
  ESI = (ESP);
  /* 10a03905 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10a03907 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a0390du);
  /* 10a0390d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03910 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03912 call 0x10a048e0 */
  push32(0x10a03917u); f_10a048e0();
  /* 10a03917 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0391c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0391e je 0x10a039f2 */
  if (C.zf) goto L_10a039f2;
  /* 10a03924 mov esi, esp */
  ESI = (ESP);
  /* 10a03926 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a0392cu);
  /* 10a0392c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0392e call 0x10a048e0 */
  push32(0x10a03933u); f_10a048e0();
  /* 10a03933 cmp eax, 0xfde8 */
  { uint32_t _a=(EAX),_b=(0xfde8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03938 jle 0x10a039f2 */
  if ((C.zf||C.sf!=C.of)) goto L_10a039f2;
  /* 10a0393e mov esi, esp */
  ESI = (ESP);
  /* 10a03940 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a03942 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03948u);
  /* 10a03948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0394b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0394d call 0x10a048e0 */
  push32(0x10a03952u); f_10a048e0();
  /* 10a03952 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03959 je 0x10a039f2 */
  if (C.zf) goto L_10a039f2;
  /* 10a0395f mov esi, esp */
  ESI = (ESP);
  /* 10a03961 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03963 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10a03965 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a0396bu);
  /* 10a0396b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0396e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03970 call 0x10a048e0 */
  push32(0x10a03975u); f_10a048e0();
  /* 10a03975 mov esi, esp */
  ESI = (ESP);
  /* 10a03977 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03979 push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a0397e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03980 push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a03985 push 0x10a31518 */
  push32((uint32_t)(0x10a31518u));
  /* 10a0398a push 0x10a315f0 */
  push32((uint32_t)(0x10a315f0u));
  /* 10a0398f call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a03995u);
  /* 10a03995 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03998 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0399a call 0x10a048e0 */
  push32(0x10a0399fu); f_10a048e0();
  /* 10a0399f mov esi, esp */
  ESI = (ESP);
  /* 10a039a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a039a3 push 0x10a315f0 */
  push32((uint32_t)(0x10a315f0u));
  /* 10a039a8 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a039aeu);
  /* 10a039ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a039b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a039b3 call 0x10a048e0 */
  push32(0x10a039b8u); f_10a048e0();
  /* 10a039b8 mov esi, esp */
  ESI = (ESP);
  /* 10a039ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a039bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a039be push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a039c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a039c5 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a039cbu);
  /* 10a039cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a039ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a039d0 call 0x10a048e0 */
  push32(0x10a039d5u); f_10a048e0();
  /* 10a039d5 mov esi, esp */
  ESI = (ESP);
  /* 10a039d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a039d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a039db push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a039e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a039e2 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a039e8u);
  /* 10a039e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a039eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a039ed call 0x10a048e0 */
  push32(0x10a039f2u); f_10a048e0();
L_10a039f2:;
  /* 10a039f2 mov esi, esp */
  ESI = (ESP);
  /* 10a039f4 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10a039f6 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a039fcu);
  /* 10a039fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a039ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03a01 call 0x10a048e0 */
  push32(0x10a03a06u); f_10a048e0();
  /* 10a03a06 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03a0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03a0d je 0x10a03ae1 */
  if (C.zf) goto L_10a03ae1;
  /* 10a03a13 mov esi, esp */
  ESI = (ESP);
  /* 10a03a15 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a03a1bu);
  /* 10a03a1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03a1d call 0x10a048e0 */
  push32(0x10a03a22u); f_10a048e0();
  /* 10a03a22 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03a27 jle 0x10a03ae1 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03ae1;
  /* 10a03a2d mov esi, esp */
  ESI = (ESP);
  /* 10a03a2f push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a03a31 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03a37u);
  /* 10a03a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03a3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03a3c call 0x10a048e0 */
  push32(0x10a03a41u); f_10a048e0();
  /* 10a03a41 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03a46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03a48 je 0x10a03ae1 */
  if (C.zf) goto L_10a03ae1;
  /* 10a03a4e mov esi, esp */
  ESI = (ESP);
  /* 10a03a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03a52 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10a03a54 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a03a5au);
  /* 10a03a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03a5f call 0x10a048e0 */
  push32(0x10a03a64u); f_10a048e0();
  /* 10a03a64 mov esi, esp */
  ESI = (ESP);
  /* 10a03a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03a68 push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a03a6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03a6f push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a03a74 push 0x10a31518 */
  push32((uint32_t)(0x10a31518u));
  /* 10a03a79 push 0x10a31608 */
  push32((uint32_t)(0x10a31608u));
  /* 10a03a7e call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a03a84u);
  /* 10a03a84 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03a87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03a89 call 0x10a048e0 */
  push32(0x10a03a8eu); f_10a048e0();
  /* 10a03a8e mov esi, esp */
  ESI = (ESP);
  /* 10a03a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03a92 push 0x10a31608 */
  push32((uint32_t)(0x10a31608u));
  /* 10a03a97 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03a9du);
  /* 10a03a9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03aa0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03aa2 call 0x10a048e0 */
  push32(0x10a03aa7u); f_10a048e0();
  /* 10a03aa7 mov esi, esp */
  ESI = (ESP);
  /* 10a03aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03aab push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03aad push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a03ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03ab4 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a03abau);
  /* 10a03aba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03abd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03abf call 0x10a048e0 */
  push32(0x10a03ac4u); f_10a048e0();
  /* 10a03ac4 mov esi, esp */
  ESI = (ESP);
  /* 10a03ac6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a03ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03aca push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a03acf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03ad1 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a03ad7u);
  /* 10a03ad7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03ada cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03adc call 0x10a048e0 */
  push32(0x10a03ae1u); f_10a048e0();
L_10a03ae1:;
  /* 10a03ae1 mov esi, esp */
  ESI = (ESP);
  /* 10a03ae3 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10a03ae5 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03aebu);
  /* 10a03aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03aee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03af0 call 0x10a048e0 */
  push32(0x10a03af5u); f_10a048e0();
  /* 10a03af5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03afc je 0x10a03bd0 */
  if (C.zf) goto L_10a03bd0;
  /* 10a03b02 mov esi, esp */
  ESI = (ESP);
  /* 10a03b04 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a03b0au);
  /* 10a03b0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03b0c call 0x10a048e0 */
  push32(0x10a03b11u); f_10a048e0();
  /* 10a03b11 cmp eax, 0x124f8 */
  { uint32_t _a=(EAX),_b=(0x124f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03b16 jle 0x10a03bd0 */
  if ((C.zf||C.sf!=C.of)) goto L_10a03bd0;
  /* 10a03b1c mov esi, esp */
  ESI = (ESP);
  /* 10a03b1e push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a03b20 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03b26u);
  /* 10a03b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03b29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03b2b call 0x10a048e0 */
  push32(0x10a03b30u); f_10a048e0();
  /* 10a03b30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03b35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03b37 je 0x10a03bd0 */
  if (C.zf) goto L_10a03bd0;
  /* 10a03b3d mov esi, esp */
  ESI = (ESP);
  /* 10a03b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03b41 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10a03b43 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a03b49u);
  /* 10a03b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03b4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03b4e call 0x10a048e0 */
  push32(0x10a03b53u); f_10a048e0();
  /* 10a03b53 mov esi, esp */
  ESI = (ESP);
  /* 10a03b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03b57 push 0x10a314d8 */
  push32((uint32_t)(0x10a314d8u));
  /* 10a03b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03b5e push 0x10a313f0 */
  push32((uint32_t)(0x10a313f0u));
  /* 10a03b63 push 0x10a31518 */
  push32((uint32_t)(0x10a31518u));
  /* 10a03b68 push 0x10a315d0 */
  push32((uint32_t)(0x10a315d0u));
  /* 10a03b6d call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a03b73u);
  /* 10a03b73 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03b76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03b78 call 0x10a048e0 */
  push32(0x10a03b7du); f_10a048e0();
  /* 10a03b7d mov esi, esp */
  ESI = (ESP);
  /* 10a03b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03b81 push 0x10a315d0 */
  push32((uint32_t)(0x10a315d0u));
  /* 10a03b86 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03b8cu);
  /* 10a03b8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03b8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03b91 call 0x10a048e0 */
  push32(0x10a03b96u); f_10a048e0();
  /* 10a03b96 mov esi, esp */
  ESI = (ESP);
  /* 10a03b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03b9c push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a03ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03ba3 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a03ba9u);
  /* 10a03ba9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03bac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03bae call 0x10a048e0 */
  push32(0x10a03bb3u); f_10a048e0();
  /* 10a03bb3 mov esi, esp */
  ESI = (ESP);
  /* 10a03bb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a03bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03bb9 push 0x10a314c0 */
  push32((uint32_t)(0x10a314c0u));
  /* 10a03bbe push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03bc0 call dword ptr [0x10a34490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34490))), 0x10a03bc6u);
  /* 10a03bc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03bc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03bcb call 0x10a048e0 */
  push32(0x10a03bd0u); f_10a048e0();
L_10a03bd0:;
  /* 10a03bd0 mov esi, esp */
  ESI = (ESP);
  /* 10a03bd2 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10a03bd4 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03bdau);
  /* 10a03bda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03bdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03bdf call 0x10a048e0 */
  push32(0x10a03be4u); f_10a048e0();
  /* 10a03be4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03beb je 0x10a03dfe */
  if (C.zf) goto L_10a03dfe;
  /* 10a03bf1 mov esi, esp */
  ESI = (ESP);
  /* 10a03bf3 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a03bf9u);
  /* 10a03bf9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03bfb call 0x10a048e0 */
  push32(0x10a03c00u); f_10a048e0();
  /* 10a03c00 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03c05 jle 0x10a03dfe */
  if ((C.zf||C.sf!=C.of)) goto L_10a03dfe;
  /* 10a03c0b mov esi, esp */
  ESI = (ESP);
  /* 10a03c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03c0f push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10a03c11 call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a03c17u);
  /* 10a03c17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03c1c call 0x10a048e0 */
  push32(0x10a03c21u); f_10a048e0();
  /* 10a03c21 mov esi, esp */
  ESI = (ESP);
  /* 10a03c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03c25 push 0x10a314e0 */
  push32((uint32_t)(0x10a314e0u));
  /* 10a03c2a push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03c2c push 0x10a31528 */
  push32((uint32_t)(0x10a31528u));
  /* 10a03c31 push 0x10a31510 */
  push32((uint32_t)(0x10a31510u));
  /* 10a03c36 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a03c3b call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a03c41u);
  /* 10a03c41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03c46 call 0x10a048e0 */
  push32(0x10a03c4bu); f_10a048e0();
  /* 10a03c4b mov esi, esp */
  ESI = (ESP);
  /* 10a03c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03c4f push 0x10a314e0 */
  push32((uint32_t)(0x10a314e0u));
  /* 10a03c54 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03c56 push 0x10a31408 */
  push32((uint32_t)(0x10a31408u));
  /* 10a03c5b push 0x10a31510 */
  push32((uint32_t)(0x10a31510u));
  /* 10a03c60 push 0x10a315c0 */
  push32((uint32_t)(0x10a315c0u));
  /* 10a03c65 call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a03c6bu);
  /* 10a03c6b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03c70 call 0x10a048e0 */
  push32(0x10a03c75u); f_10a048e0();
  /* 10a03c75 mov esi, esp */
  ESI = (ESP);
  /* 10a03c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03c79 push 0x10a314e0 */
  push32((uint32_t)(0x10a314e0u));
  /* 10a03c7e push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03c80 push 0x10a31528 */
  push32((uint32_t)(0x10a31528u));
  /* 10a03c85 push 0x10a313e8 */
  push32((uint32_t)(0x10a313e8u));
  /* 10a03c8a push 0x10a315f8 */
  push32((uint32_t)(0x10a315f8u));
  /* 10a03c8f call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a03c95u);
  /* 10a03c95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03c98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03c9a call 0x10a048e0 */
  push32(0x10a03c9fu); f_10a048e0();
  /* 10a03c9f mov esi, esp */
  ESI = (ESP);
  /* 10a03ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03ca3 push 0x10a315f8 */
  push32((uint32_t)(0x10a315f8u));
  /* 10a03ca8 call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03caeu);
  /* 10a03cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03cb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03cb3 call 0x10a048e0 */
  push32(0x10a03cb8u); f_10a048e0();
  /* 10a03cb8 mov esi, esp */
  ESI = (ESP);
  /* 10a03cba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03cbe push 0x10a314f0 */
  push32((uint32_t)(0x10a314f0u));
  /* 10a03cc3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03cc5 call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a03ccbu);
  /* 10a03ccb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03cce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03cd0 call 0x10a048e0 */
  push32(0x10a03cd5u); f_10a048e0();
  /* 10a03cd5 mov esi, esp */
  ESI = (ESP);
  /* 10a03cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03cd9 push 0x10a315c0 */
  push32((uint32_t)(0x10a315c0u));
  /* 10a03cde call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03ce4u);
  /* 10a03ce4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03ce9 call 0x10a048e0 */
  push32(0x10a03ceeu); f_10a048e0();
  /* 10a03cee mov esi, esp */
  ESI = (ESP);
  /* 10a03cf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03cf2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03cf4 call dword ptr [0x10a34498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34498))), 0x10a03cfau);
  /* 10a03cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03cfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03cff call 0x10a048e0 */
  push32(0x10a03d04u); f_10a048e0();
  /* 10a03d04 mov esi, esp */
  ESI = (ESP);
  /* 10a03d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03d0a push 0x10a314f8 */
  push32((uint32_t)(0x10a314f8u));
  /* 10a03d0f push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03d11 call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a03d17u);
  /* 10a03d17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03d1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03d1c call 0x10a048e0 */
  push32(0x10a03d21u); f_10a048e0();
  /* 10a03d21 mov esi, esp */
  ESI = (ESP);
  /* 10a03d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03d25 push 0x10a315d8 */
  push32((uint32_t)(0x10a315d8u));
  /* 10a03d2a call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03d30u);
  /* 10a03d30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03d33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03d35 call 0x10a048e0 */
  push32(0x10a03d3au); f_10a048e0();
  /* 10a03d3a mov esi, esp */
  ESI = (ESP);
  /* 10a03d3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a03d3e push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03d40 call dword ptr [0x10a34498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34498))), 0x10a03d46u);
  /* 10a03d46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03d49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03d4b call 0x10a048e0 */
  push32(0x10a03d50u); f_10a048e0();
  /* 10a03d50 mov esi, esp */
  ESI = (ESP);
  /* 10a03d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03d56 push 0x10a314f8 */
  push32((uint32_t)(0x10a314f8u));
  /* 10a03d5b push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03d5d call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a03d63u);
  /* 10a03d63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03d66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03d68 call 0x10a048e0 */
  push32(0x10a03d6du); f_10a048e0();
  /* 10a03d6d mov esi, esp */
  ESI = (ESP);
  /* 10a03d6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a03d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03d73 push 0x10a31468 */
  push32((uint32_t)(0x10a31468u));
  /* 10a03d78 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03d7a call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a03d80u);
  /* 10a03d80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03d83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03d85 call 0x10a048e0 */
  push32(0x10a03d8au); f_10a048e0();
  /* 10a03d8a mov esi, esp */
  ESI = (ESP);
  /* 10a03d8c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a03d8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03d90 push 0x10a31500 */
  push32((uint32_t)(0x10a31500u));
  /* 10a03d95 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03d97 call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a03d9du);
  /* 10a03d9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03da0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03da2 call 0x10a048e0 */
  push32(0x10a03da7u); f_10a048e0();
  /* 10a03da7 mov esi, esp */
  ESI = (ESP);
  /* 10a03da9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a03dab push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03dad push 0x10a314c8 */
  push32((uint32_t)(0x10a314c8u));
  /* 10a03db2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03db4 call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a03dbau);
  /* 10a03dba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03dbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03dbf call 0x10a048e0 */
  push32(0x10a03dc4u); f_10a048e0();
  /* 10a03dc4 mov esi, esp */
  ESI = (ESP);
  /* 10a03dc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a03dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03dca push 0x10a31508 */
  push32((uint32_t)(0x10a31508u));
  /* 10a03dcf push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03dd1 call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a03dd7u);
  /* 10a03dd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03dda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03ddc call 0x10a048e0 */
  push32(0x10a03de1u); f_10a048e0();
  /* 10a03de1 mov esi, esp */
  ESI = (ESP);
  /* 10a03de3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a03de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03de7 push 0x10a314a8 */
  push32((uint32_t)(0x10a314a8u));
  /* 10a03dec push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03dee call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a03df4u);
  /* 10a03df4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03df9 call 0x10a048e0 */
  push32(0x10a03dfeu); f_10a048e0();
L_10a03dfe:;
  /* 10a03dfe mov esi, esp */
  ESI = (ESP);
  /* 10a03e00 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10a03e02 call dword ptr [0x10a34428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34428))), 0x10a03e08u);
  /* 10a03e08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03e0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03e0d call 0x10a048e0 */
  push32(0x10a03e12u); f_10a048e0();
  /* 10a03e12 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a03e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a03e19 je 0x10a03eae */
  if (C.zf) goto L_10a03eae;
  /* 10a03e1f mov esi, esp */
  ESI = (ESP);
  /* 10a03e21 call dword ptr [0x10a3448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3448c))), 0x10a03e27u);
  /* 10a03e27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03e29 call 0x10a048e0 */
  push32(0x10a03e2eu); f_10a048e0();
  /* 10a03e2e cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03e33 jle 0x10a03eae */
  if ((C.zf||C.sf!=C.of)) goto L_10a03eae;
  /* 10a03e35 mov esi, esp */
  ESI = (ESP);
  /* 10a03e37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03e39 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10a03e3b call dword ptr [0x10a3442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3442c))), 0x10a03e41u);
  /* 10a03e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03e44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03e46 call 0x10a048e0 */
  push32(0x10a03e4bu); f_10a048e0();
  /* 10a03e4b mov esi, esp */
  ESI = (ESP);
  /* 10a03e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03e4f push 0x10a31490 */
  push32((uint32_t)(0x10a31490u));
  /* 10a03e54 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03e56 push 0x10a31400 */
  push32((uint32_t)(0x10a31400u));
  /* 10a03e5b push 0x10a31510 */
  push32((uint32_t)(0x10a31510u));
  /* 10a03e60 push 0x10a315a8 */
  push32((uint32_t)(0x10a315a8u));
  /* 10a03e65 call dword ptr [0x10a34484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34484))), 0x10a03e6bu);
  /* 10a03e6b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03e6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03e70 call 0x10a048e0 */
  push32(0x10a03e75u); f_10a048e0();
  /* 10a03e75 mov esi, esp */
  ESI = (ESP);
  /* 10a03e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03e79 push 0x10a315a8 */
  push32((uint32_t)(0x10a315a8u));
  /* 10a03e7e call dword ptr [0x10a3443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3443c))), 0x10a03e84u);
  /* 10a03e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03e87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03e89 call 0x10a048e0 */
  push32(0x10a03e8eu); f_10a048e0();
  /* 10a03e8e mov esi, esp */
  ESI = (ESP);
  /* 10a03e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a03e92 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10a03e97 push 0x10a314a8 */
  push32((uint32_t)(0x10a314a8u));
  /* 10a03e9c push 4 */
  push32((uint32_t)(0x4u));
  /* 10a03e9e call dword ptr [0x10a34464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34464))), 0x10a03ea4u);
  /* 10a03ea4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03ea7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03ea9 call 0x10a048e0 */
  push32(0x10a03eaeu); f_10a048e0();
L_10a03eae:;
  /* 10a03eae pop edi */
  EDI = (pop32());
  /* 10a03eaf pop esi */
  ESI = (pop32());
  /* 10a03eb0 pop ebx */
  EBX = (pop32());
  /* 10a03eb1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a03eb4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a03eb6 call 0x10a048e0 */
  push32(0x10a03ebbu); f_10a048e0();
  /* 10a03ebb mov esp, ebp */
  ESP = (EBP);
  /* 10a03ebd pop ebp */
  EBP = (pop32());
  /* 10a03ebe ret  */
  ESPCHK(0x10a01b40u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x10a047a0 (63 bytes, 26 insns) */
void f_10a047a0(void) {
  FTRACE(0x10a047a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a047a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a047a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a047a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a047a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a047a7 push esi */
  push32((uint32_t)(ESI));
  /* 10a047a8 push edi */
  push32((uint32_t)(EDI));
  /* 10a047a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10a047ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10a047b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a047b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a047b8 mov esi, esp */
  ESI = (ESP);
  /* 10a047ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a047bd push eax */
  push32((uint32_t)(EAX));
  /* 10a047be call dword ptr [0x10a34424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34424))), 0x10a047c4u);
  /* 10a047c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a047c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a047c9 call 0x10a048e0 */
  push32(0x10a047ceu); f_10a048e0();
  /* 10a047ce pop edi */
  EDI = (pop32());
  /* 10a047cf pop esi */
  ESI = (pop32());
  /* 10a047d0 pop ebx */
  EBX = (pop32());
  /* 10a047d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a047d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a047d6 call 0x10a048e0 */
  push32(0x10a047dbu); f_10a048e0();
  /* 10a047db mov esp, ebp */
  ESP = (EBP);
  /* 10a047dd pop ebp */
  EBP = (pop32());
  /* 10a047de ret  */
  ESPCHK(0x10a047a0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10a048e0 (56 bytes, 28 insns) */
void f_10a048e0(void) {
  FTRACE(0x10a048e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a048e0 jne 0x10a048e3 */
  if (!C.zf) goto L_10a048e3;
  /* 10a048e2 ret  */
  ESPCHK(0x10a048e0u, _esp0);
  ESP += 4; return;
L_10a048e3:;
  /* 10a048e3 push ebp */
  push32((uint32_t)(EBP));
  /* 10a048e4 mov ebp, esp */
  EBP = (ESP);
  /* 10a048e6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a048e9 push eax */
  push32((uint32_t)(EAX));
  /* 10a048ea push edx */
  push32((uint32_t)(EDX));
  /* 10a048eb push ebx */
  push32((uint32_t)(EBX));
  /* 10a048ec push esi */
  push32((uint32_t)(ESI));
  /* 10a048ed push edi */
  push32((uint32_t)(EDI));
  /* 10a048ee push 0x10a2c360 */
  push32((uint32_t)(0x10a2c360u));
  /* 10a048f3 push 0x10a2c35c */
  push32((uint32_t)(0x10a2c35cu));
  /* 10a048f8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10a048fa push 0x10a2c34c */
  push32((uint32_t)(0x10a2c34cu));
  /* 10a048ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10a04901 call 0x10a04cb0 */
  push32(0x10a04906u); f_10a04cb0();
  /* 10a04906 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04909 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0490c jne 0x10a0490f */
  if (!C.zf) goto L_10a0490f;
  /* 10a0490e int3  */
  x86_unimpl("int3 @ 0x10a0490e");
L_10a0490f:;
  /* 10a0490f pop edi */
  EDI = (pop32());
  /* 10a04910 pop esi */
  ESI = (pop32());
  /* 10a04911 pop ebx */
  EBX = (pop32());
  /* 10a04912 pop edx */
  EDX = (pop32());
  /* 10a04913 pop eax */
  EAX = (pop32());
  /* 10a04914 mov esp, ebp */
  ESP = (EBP);
  /* 10a04916 pop ebp */
  EBP = (pop32());
  /* 10a04917 ret  */
  ESPCHK(0x10a048e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004920 @ 0x10a04920 (313 bytes, 78 insns) */
void f_10a04920(void) {
  FTRACE(0x10a04920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a04920 push ebp */
  push32((uint32_t)(EBP));
  /* 10a04921 mov ebp, esp */
  EBP = (ESP);
  /* 10a04923 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04927 jne 0x10a049e7 */
  if (!C.zf) goto L_10a049e7;
  /* 10a0492d call dword ptr [0x10a3433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3433c))), 0x10a04933u);
  /* 10a04933 mov dword ptr [0x10a316dc], eax */
  w32((uint32_t)(0x10a316dc), (EAX));
  /* 10a04938 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0493a call 0x10a083e0 */
  push32(0x10a0493fu); f_10a083e0();
  /* 10a0493f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a04944 jne 0x10a0494d */
  if (!C.zf) goto L_10a0494d;
  /* 10a04946 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a04948 jmp 0x10a04a55 */
  goto L_10a04a55;
L_10a0494d:;
  /* 10a0494d mov eax, dword ptr [0x10a316dc] */
  EAX = (r32((uint32_t)(0x10a316dc)));
  /* 10a04952 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10a04955 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0495a mov dword ptr [0x10a316e8], eax */
  w32((uint32_t)(0x10a316e8), (EAX));
  /* 10a0495f mov ecx, dword ptr [0x10a316dc] */
  ECX = (r32((uint32_t)(0x10a316dc)));
  /* 10a04965 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0496b mov dword ptr [0x10a316e4], ecx */
  w32((uint32_t)(0x10a316e4), (ECX));
  /* 10a04971 mov edx, dword ptr [0x10a316e4] */
  EDX = (r32((uint32_t)(0x10a316e4)));
  /* 10a04977 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a0497a add edx, dword ptr [0x10a316e8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a316e8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04980 mov dword ptr [0x10a316e0], edx */
  w32((uint32_t)(0x10a316e0), (EDX));
  /* 10a04986 mov eax, dword ptr [0x10a316dc] */
  EAX = (r32((uint32_t)(0x10a316dc)));
  /* 10a0498b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a0498e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a04993 mov dword ptr [0x10a316dc], eax */
  w32((uint32_t)(0x10a316dc), (EAX));
  /* 10a04998 call 0x10a05550 */
  push32(0x10a0499du); f_10a05550();
  /* 10a0499d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0499f jne 0x10a049ad */
  if (!C.zf) goto L_10a049ad;
  /* 10a049a1 call 0x10a08430 */
  push32(0x10a049a6u); f_10a08430();
  /* 10a049a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a049a8 jmp 0x10a04a55 */
  goto L_10a04a55;
L_10a049ad:;
  /* 10a049ad call dword ptr [0x10a34338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34338))), 0x10a049b3u);
  /* 10a049b3 mov dword ptr [0x10a3322c], eax */
  w32((uint32_t)(0x10a3322c), (EAX));
  /* 10a049b8 call 0x10a081c0 */
  push32(0x10a049bdu); f_10a081c0();
  /* 10a049bd mov dword ptr [0x10a316c4], eax */
  w32((uint32_t)(0x10a316c4), (EAX));
  /* 10a049c2 call 0x10a05800 */
  push32(0x10a049c7u); f_10a05800();
  /* 10a049c7 call 0x10a07cb0 */
  push32(0x10a049ccu); f_10a07cb0();
  /* 10a049cc call 0x10a07b60 */
  push32(0x10a049d1u); f_10a07b60();
  /* 10a049d1 call 0x10a05350 */
  push32(0x10a049d6u); f_10a05350();
  /* 10a049d6 mov ecx, dword ptr [0x10a316c0] */
  ECX = (r32((uint32_t)(0x10a316c0)));
  /* 10a049dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a049df mov dword ptr [0x10a316c0], ecx */
  w32((uint32_t)(0x10a316c0), (ECX));
  /* 10a049e5 jmp 0x10a04a50 */
  goto L_10a04a50;
L_10a049e7:;
  /* 10a049e7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a049eb jne 0x10a04a40 */
  if (!C.zf) goto L_10a04a40;
  /* 10a049ed cmp dword ptr [0x10a316c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a049f4 jle 0x10a04a3a */
  if ((C.zf||C.sf!=C.of)) goto L_10a04a3a;
  /* 10a049f6 mov edx, dword ptr [0x10a316c0] */
  EDX = (r32((uint32_t)(0x10a316c0)));
  /* 10a049fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a049ff mov dword ptr [0x10a316c0], edx */
  w32((uint32_t)(0x10a316c0), (EDX));
  /* 10a04a05 cmp dword ptr [0x10a31714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04a0c jne 0x10a04a13 */
  if (!C.zf) goto L_10a04a13;
  /* 10a04a0e call 0x10a053d0 */
  push32(0x10a04a13u); f_10a053d0();
L_10a04a13:;
  /* 10a04a13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a04a15 call 0x10a07100 */
  push32(0x10a04a1au); f_10a07100();
  /* 10a04a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04a1d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a04a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a04a22 je 0x10a04a29 */
  if (C.zf) goto L_10a04a29;
  /* 10a04a24 call 0x10a07a10 */
  push32(0x10a04a29u); f_10a07a10();
L_10a04a29:;
  /* 10a04a29 call 0x10a05b30 */
  push32(0x10a04a2eu); f_10a05b30();
  /* 10a04a2e call 0x10a055e0 */
  push32(0x10a04a33u); f_10a055e0();
  /* 10a04a33 call 0x10a08430 */
  push32(0x10a04a38u); f_10a08430();
  /* 10a04a38 jmp 0x10a04a3e */
  goto L_10a04a3e;
L_10a04a3a:;
  /* 10a04a3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a04a3c jmp 0x10a04a55 */
  goto L_10a04a55;
L_10a04a3e:;
  /* 10a04a3e jmp 0x10a04a50 */
  goto L_10a04a50;
L_10a04a40:;
  /* 10a04a40 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04a44 jne 0x10a04a50 */
  if (!C.zf) goto L_10a04a50;
  /* 10a04a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a04a48 call 0x10a056d0 */
  push32(0x10a04a4du); f_10a056d0();
  /* 10a04a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a04a50:;
  /* 10a04a50 mov eax, 1 */
  EAX = (0x1u);
L_10a04a55:;
  /* 10a04a55 pop ebp */
  EBP = (pop32());
  /* 10a04a56 ret 0xc */
  ESPCHK(0x10a04920u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10a04a60 (243 bytes, 86 insns) */
void f_10a04a60(void) {
  FTRACE(0x10a04a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a04a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a04a61 mov ebp, esp */
  EBP = (ESP);
  /* 10a04a63 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04a64 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a04a6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04a6f jne 0x10a04a81 */
  if (!C.zf) goto L_10a04a81;
  /* 10a04a71 cmp dword ptr [0x10a316c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04a78 jne 0x10a04a81 */
  if (!C.zf) goto L_10a04a81;
  /* 10a04a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a04a7c jmp 0x10a04b4d */
  goto L_10a04b4d;
L_10a04a81:;
  /* 10a04a81 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04a85 je 0x10a04a8d */
  if (C.zf) goto L_10a04a8d;
  /* 10a04a87 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04a8b jne 0x10a04acf */
  if (!C.zf) goto L_10a04acf;
L_10a04a8d:;
  /* 10a04a8d cmp dword ptr [0x10a3323c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3323c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04a94 je 0x10a04aab */
  if (C.zf) goto L_10a04aab;
  /* 10a04a96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a04a99 push eax */
  push32((uint32_t)(EAX));
  /* 10a04a9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04a9d push ecx */
  push32((uint32_t)(ECX));
  /* 10a04a9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04aa1 push edx */
  push32((uint32_t)(EDX));
  /* 10a04aa2 call dword ptr [0x10a3323c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3323c))), 0x10a04aa8u);
  /* 10a04aa8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a04aab:;
  /* 10a04aab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04aaf je 0x10a04ac5 */
  if (C.zf) goto L_10a04ac5;
  /* 10a04ab1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a04ab4 push eax */
  push32((uint32_t)(EAX));
  /* 10a04ab5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04ab9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04abc push edx */
  push32((uint32_t)(EDX));
  /* 10a04abd call 0x10a04920 */
  push32(0x10a04ac2u); f_10a04920();
  /* 10a04ac2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a04ac5:;
  /* 10a04ac5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04ac9 jne 0x10a04acf */
  if (!C.zf) goto L_10a04acf;
  /* 10a04acb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a04acd jmp 0x10a04b4d */
  goto L_10a04b4d;
L_10a04acf:;
  /* 10a04acf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a04ad2 push eax */
  push32((uint32_t)(EAX));
  /* 10a04ad3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04ad7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04ada push edx */
  push32((uint32_t)(EDX));
  /* 10a04adb call 0x10a0100f */
  push32(0x10a04ae0u); f_10a0100f();
  /* 10a04ae0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a04ae3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04ae7 jne 0x10a04afe */
  if (!C.zf) goto L_10a04afe;
  /* 10a04ae9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04aed jne 0x10a04afe */
  if (!C.zf) goto L_10a04afe;
  /* 10a04aef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a04af2 push eax */
  push32((uint32_t)(EAX));
  /* 10a04af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a04af5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04af8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04af9 call 0x10a04920 */
  push32(0x10a04afeu); f_10a04920();
L_10a04afe:;
  /* 10a04afe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04b02 je 0x10a04b0a */
  if (C.zf) goto L_10a04b0a;
  /* 10a04b04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04b08 jne 0x10a04b4a */
  if (!C.zf) goto L_10a04b4a;
L_10a04b0a:;
  /* 10a04b0a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a04b0d push edx */
  push32((uint32_t)(EDX));
  /* 10a04b0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04b11 push eax */
  push32((uint32_t)(EAX));
  /* 10a04b12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04b15 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04b16 call 0x10a04920 */
  push32(0x10a04b1bu); f_10a04920();
  /* 10a04b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a04b1d jne 0x10a04b26 */
  if (!C.zf) goto L_10a04b26;
  /* 10a04b1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a04b26:;
  /* 10a04b26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04b2a je 0x10a04b4a */
  if (C.zf) goto L_10a04b4a;
  /* 10a04b2c cmp dword ptr [0x10a3323c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3323c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04b33 je 0x10a04b4a */
  if (C.zf) goto L_10a04b4a;
  /* 10a04b35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a04b38 push edx */
  push32((uint32_t)(EDX));
  /* 10a04b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04b3c push eax */
  push32((uint32_t)(EAX));
  /* 10a04b3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04b40 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04b41 call dword ptr [0x10a3323c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3323c))), 0x10a04b47u);
  /* 10a04b47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a04b4a:;
  /* 10a04b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a04b4d:;
  /* 10a04b4d mov esp, ebp */
  ESP = (EBP);
  /* 10a04b4f pop ebp */
  EBP = (pop32());
  /* 10a04b50 ret 0xc */
  ESPCHK(0x10a04a60u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10a04b60 (58 bytes, 18 insns) */
void f_10a04b60(void) {
  FTRACE(0x10a04b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a04b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a04b61 mov ebp, esp */
  EBP = (ESP);
  /* 10a04b63 cmp dword ptr [0x10a316cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a316cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04b6a je 0x10a04b7e */
  if (C.zf) goto L_10a04b7e;
  /* 10a04b6c cmp dword ptr [0x10a316cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04b73 jne 0x10a04b83 */
  if (!C.zf) goto L_10a04b83;
  /* 10a04b75 cmp dword ptr [0x10a316d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a316d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04b7c jne 0x10a04b83 */
  if (!C.zf) goto L_10a04b83;
L_10a04b7e:;
  /* 10a04b7e call 0x10a084d0 */
  push32(0x10a04b83u); f_10a084d0();
L_10a04b83:;
  /* 10a04b83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04b86 push eax */
  push32((uint32_t)(EAX));
  /* 10a04b87 call 0x10a08520 */
  push32(0x10a04b8cu); f_10a08520();
  /* 10a04b8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04b8f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10a04b94 call dword ptr [0x10a2fa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a2fa30))), 0x10a04b9au);
  /* 10a04b9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04b9d pop ebp */
  EBP = (pop32());
  /* 10a04b9e ret  */
  ESPCHK(0x10a04b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x10a04ba0 (11 bytes, 5 insns) */
void f_10a04ba0(void) {
  FTRACE(0x10a04ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a04ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a04ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10a04ba3 call dword ptr [0x10a34340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34340))), 0x10a04ba9u);
  /* 10a04ba9 pop ebp */
  EBP = (pop32());
  /* 10a04baa ret  */
  ESPCHK(0x10a04ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bb0 @ 0x10a04bb0 (87 bytes, 30 insns) */
void f_10a04bb0(void) {
  FTRACE(0x10a04bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a04bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a04bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a04bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04bb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04bb8 jl 0x10a04bc0 */
  if ((C.sf!=C.of)) goto L_10a04bc0;
  /* 10a04bba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04bbe jl 0x10a04bc5 */
  if ((C.sf!=C.of)) goto L_10a04bc5;
L_10a04bc0:;
  /* 10a04bc0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a04bc3 jmp 0x10a04c03 */
  goto L_10a04c03;
L_10a04bc5:;
  /* 10a04bc5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04bc9 jne 0x10a04bd7 */
  if (!C.zf) goto L_10a04bd7;
  /* 10a04bcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04bce mov eax, dword ptr [eax*4 + 0x10a2fa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10a2fa38)));
  /* 10a04bd5 jmp 0x10a04c03 */
  goto L_10a04c03;
L_10a04bd7:;
  /* 10a04bd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04bda and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a04bdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a04bdf je 0x10a04be6 */
  if (C.zf) goto L_10a04be6;
  /* 10a04be1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a04be4 jmp 0x10a04c03 */
  goto L_10a04c03;
L_10a04be6:;
  /* 10a04be6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04be9 mov eax, dword ptr [edx*4 + 0x10a2fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a2fa38)));
  /* 10a04bf0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a04bf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04bf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04bf9 mov dword ptr [ecx*4 + 0x10a2fa38], edx */
  w32((uint32_t)(ECX*4 + 0x10a2fa38), (EDX));
  /* 10a04c00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a04c03:;
  /* 10a04c03 mov esp, ebp */
  ESP = (EBP);
  /* 10a04c05 pop ebp */
  EBP = (pop32());
  /* 10a04c06 ret  */
  ESPCHK(0x10a04bb0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10a04c10 (126 bytes, 38 insns) */
void f_10a04c10(void) {
  FTRACE(0x10a04c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a04c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a04c11 mov ebp, esp */
  EBP = (ESP);
  /* 10a04c13 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04c14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04c18 jl 0x10a04c20 */
  if ((C.sf!=C.of)) goto L_10a04c20;
  /* 10a04c1a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04c1e jl 0x10a04c27 */
  if ((C.sf!=C.of)) goto L_10a04c27;
L_10a04c20:;
  /* 10a04c20 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10a04c25 jmp 0x10a04c8a */
  goto L_10a04c8a;
L_10a04c27:;
  /* 10a04c27 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04c2b jne 0x10a04c39 */
  if (!C.zf) goto L_10a04c39;
  /* 10a04c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04c30 mov eax, dword ptr [eax*4 + 0x10a2fa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10a2fa44)));
  /* 10a04c37 jmp 0x10a04c8a */
  goto L_10a04c8a;
L_10a04c39:;
  /* 10a04c39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04c3c mov edx, dword ptr [ecx*4 + 0x10a2fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a2fa44)));
  /* 10a04c43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a04c46 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04c4a jne 0x10a04c60 */
  if (!C.zf) goto L_10a04c60;
  /* 10a04c4c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10a04c4e call dword ptr [0x10a34344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34344))), 0x10a04c54u);
  /* 10a04c54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04c57 mov dword ptr [ecx*4 + 0x10a2fa44], eax */
  w32((uint32_t)(ECX*4 + 0x10a2fa44), (EAX));
  /* 10a04c5e jmp 0x10a04c87 */
  goto L_10a04c87;
L_10a04c60:;
  /* 10a04c60 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04c64 jne 0x10a04c7a */
  if (!C.zf) goto L_10a04c7a;
  /* 10a04c66 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a04c68 call dword ptr [0x10a34344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34344))), 0x10a04c6eu);
  /* 10a04c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04c71 mov dword ptr [edx*4 + 0x10a2fa44], eax */
  w32((uint32_t)(EDX*4 + 0x10a2fa44), (EAX));
  /* 10a04c78 jmp 0x10a04c87 */
  goto L_10a04c87;
L_10a04c7a:;
  /* 10a04c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04c80 mov dword ptr [eax*4 + 0x10a2fa44], ecx */
  w32((uint32_t)(EAX*4 + 0x10a2fa44), (ECX));
L_10a04c87:;
  /* 10a04c87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a04c8a:;
  /* 10a04c8a mov esp, ebp */
  ESP = (EBP);
  /* 10a04c8c pop ebp */
  EBP = (pop32());
  /* 10a04c8d ret  */
  ESPCHK(0x10a04c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c90 @ 0x10a04c90 (28 bytes, 11 insns) */
void f_10a04c90(void) {
  FTRACE(0x10a04c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a04c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a04c91 mov ebp, esp */
  EBP = (ESP);
  /* 10a04c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04c94 mov eax, dword ptr [0x10a33220] */
  EAX = (r32((uint32_t)(0x10a33220)));
  /* 10a04c99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a04c9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04c9f mov dword ptr [0x10a33220], ecx */
  w32((uint32_t)(0x10a33220), (ECX));
  /* 10a04ca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a04ca8 mov esp, ebp */
  ESP = (EBP);
  /* 10a04caa pop ebp */
  EBP = (pop32());
  /* 10a04cab ret  */
  ESPCHK(0x10a04c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cb0 @ 0x10a04cb0 (912 bytes, 248 insns) */
void f_10a04cb0(void) {
  FTRACE(0x10a04cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a04cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a04cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a04cb3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10a04cb8 call 0x10a08d90 */
  push32(0x10a04cbdu); f_10a08d90();
  /* 10a04cbd push edi */
  push32((uint32_t)(EDI));
  /* 10a04cbe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10a04cc5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10a04cca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a04ccc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10a04cd2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a04cd4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10a04cd6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10a04cd7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10a04cde mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10a04ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a04ce5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10a04ceb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a04ced stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10a04cef stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10a04cf0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10a04cf7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10a04cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a04cfe lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10a04d04 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a04d06 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10a04d08 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10a04d09 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10a04d0c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10a04d12 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04d16 jl 0x10a04d1e */
  if ((C.sf!=C.of)) goto L_10a04d1e;
  /* 10a04d18 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04d1c jl 0x10a04d26 */
  if ((C.sf!=C.of)) goto L_10a04d26;
L_10a04d1e:;
  /* 10a04d1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a04d21 jmp 0x10a0503b */
  goto L_10a0503b;
L_10a04d26:;
  /* 10a04d26 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04d2a jne 0x10a04dd0 */
  if (!C.zf) goto L_10a04dd0;
  /* 10a04d30 push 0x10a2fa34 */
  push32((uint32_t)(0x10a2fa34u));
  /* 10a04d35 call dword ptr [0x10a3435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3435c))), 0x10a04d3bu);
  /* 10a04d3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a04d3d jle 0x10a04dd0 */
  if ((C.zf||C.sf!=C.of)) goto L_10a04dd0;
  /* 10a04d43 cmp dword ptr [0x10a316d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04d4a jne 0x10a04d8e */
  if (!C.zf) goto L_10a04d8e;
  /* 10a04d4c push 0x10a2c508 */
  push32((uint32_t)(0x10a2c508u));
  /* 10a04d51 call dword ptr [0x10a34358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34358))), 0x10a04d57u);
  /* 10a04d57 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10a04d5d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04d64 je 0x10a04d86 */
  if (C.zf) goto L_10a04d86;
  /* 10a04d66 push 0x10a2c4fc */
  push32((uint32_t)(0x10a2c4fcu));
  /* 10a04d6b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10a04d71 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04d72 call dword ptr [0x10a34354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34354))), 0x10a04d78u);
  /* 10a04d78 mov dword ptr [0x10a316d4], eax */
  w32((uint32_t)(0x10a316d4), (EAX));
  /* 10a04d7d cmp dword ptr [0x10a316d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04d84 jne 0x10a04d8e */
  if (!C.zf) goto L_10a04d8e;
L_10a04d86:;
  /* 10a04d86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a04d89 jmp 0x10a0503b */
  goto L_10a0503b;
L_10a04d8e:;
  /* 10a04d8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a04d91 push edx */
  push32((uint32_t)(EDX));
  /* 10a04d92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04d95 push eax */
  push32((uint32_t)(EAX));
  /* 10a04d96 push 0x10a2c4c8 */
  push32((uint32_t)(0x10a2c4c8u));
  /* 10a04d9b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10a04da1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04da2 call dword ptr [0x10a316d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a316d4))), 0x10a04da8u);
  /* 10a04da8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04dab lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a04db1 push edx */
  push32((uint32_t)(EDX));
  /* 10a04db2 call dword ptr [0x10a34350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34350))), 0x10a04db8u);
  /* 10a04db8 push 0x10a2fa34 */
  push32((uint32_t)(0x10a2fa34u));
  /* 10a04dbd call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a04dc3u);
  /* 10a04dc3 call 0x10a04ba0 */
  push32(0x10a04dc8u); f_10a04ba0();
  /* 10a04dc8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a04dcb jmp 0x10a0503b */
  goto L_10a0503b;
L_10a04dd0:;
  /* 10a04dd0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04dd4 je 0x10a04e0d */
  if (C.zf) goto L_10a04e0d;
  /* 10a04dd6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10a04ddc push eax */
  push32((uint32_t)(EAX));
  /* 10a04ddd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a04de0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04de1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10a04de6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10a04dec push edx */
  push32((uint32_t)(EDX));
  /* 10a04ded call 0x10a08c90 */
  push32(0x10a04df2u); f_10a08c90();
  /* 10a04df2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04df5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a04df7 jge 0x10a04e0d */
  if ((C.sf==C.of)) goto L_10a04e0d;
  /* 10a04df9 push 0x10a2c49c */
  push32((uint32_t)(0x10a2c49cu));
  /* 10a04dfe lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10a04e04 push eax */
  push32((uint32_t)(EAX));
  /* 10a04e05 call 0x10a08ba0 */
  push32(0x10a04e0au); f_10a08ba0();
  /* 10a04e0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a04e0d:;
  /* 10a04e0d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04e11 jne 0x10a04e45 */
  if (!C.zf) goto L_10a04e45;
  /* 10a04e13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04e17 je 0x10a04e25 */
  if (C.zf) goto L_10a04e25;
  /* 10a04e19 mov dword ptr [ebp - 0x3028], 0x10a2c488 */
  w32((uint32_t)(EBP + -0x3028), (0x10a2c488u));
  /* 10a04e23 jmp 0x10a04e2f */
  goto L_10a04e2f;
L_10a04e25:;
  /* 10a04e25 mov dword ptr [ebp - 0x3028], 0x10a2c474 */
  w32((uint32_t)(EBP + -0x3028), (0x10a2c474u));
L_10a04e2f:;
  /* 10a04e2f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10a04e35 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04e36 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10a04e3c push edx */
  push32((uint32_t)(EDX));
  /* 10a04e3d call 0x10a08ba0 */
  push32(0x10a04e42u); f_10a08ba0();
  /* 10a04e42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a04e45:;
  /* 10a04e45 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10a04e4b push eax */
  push32((uint32_t)(EAX));
  /* 10a04e4c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10a04e52 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04e53 call 0x10a08bb0 */
  push32(0x10a04e58u); f_10a08bb0();
  /* 10a04e58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04e5b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04e5f jne 0x10a04e9a */
  if (!C.zf) goto L_10a04e9a;
  /* 10a04e61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04e64 mov eax, dword ptr [edx*4 + 0x10a2fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a2fa38)));
  /* 10a04e6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a04e6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a04e70 je 0x10a04e86 */
  if (C.zf) goto L_10a04e86;
  /* 10a04e72 push 0x10a2c470 */
  push32((uint32_t)(0x10a2c470u));
  /* 10a04e77 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10a04e7d push ecx */
  push32((uint32_t)(ECX));
  /* 10a04e7e call 0x10a08bb0 */
  push32(0x10a04e83u); f_10a08bb0();
  /* 10a04e83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a04e86:;
  /* 10a04e86 push 0x10a2c46c */
  push32((uint32_t)(0x10a2c46cu));
  /* 10a04e8b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10a04e91 push edx */
  push32((uint32_t)(EDX));
  /* 10a04e92 call 0x10a08bb0 */
  push32(0x10a04e97u); f_10a08bb0();
  /* 10a04e97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a04e9a:;
  /* 10a04e9a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04e9e je 0x10a04ee2 */
  if (C.zf) goto L_10a04ee2;
  /* 10a04ea0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10a04ea6 push eax */
  push32((uint32_t)(EAX));
  /* 10a04ea7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a04eaa push ecx */
  push32((uint32_t)(ECX));
  /* 10a04eab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04eae push edx */
  push32((uint32_t)(EDX));
  /* 10a04eaf push 0x10a2c460 */
  push32((uint32_t)(0x10a2c460u));
  /* 10a04eb4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a04eb9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10a04ebf push eax */
  push32((uint32_t)(EAX));
  /* 10a04ec0 call 0x10a08aa0 */
  push32(0x10a04ec5u); f_10a08aa0();
  /* 10a04ec5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a04eca jge 0x10a04ee0 */
  if ((C.sf==C.of)) goto L_10a04ee0;
  /* 10a04ecc push 0x10a2c49c */
  push32((uint32_t)(0x10a2c49cu));
  /* 10a04ed1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10a04ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04ed8 call 0x10a08ba0 */
  push32(0x10a04eddu); f_10a08ba0();
  /* 10a04edd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a04ee0:;
  /* 10a04ee0 jmp 0x10a04ef8 */
  goto L_10a04ef8;
L_10a04ee2:;
  /* 10a04ee2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10a04ee8 push edx */
  push32((uint32_t)(EDX));
  /* 10a04ee9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10a04eef push eax */
  push32((uint32_t)(EAX));
  /* 10a04ef0 call 0x10a08ba0 */
  push32(0x10a04ef5u); f_10a08ba0();
  /* 10a04ef5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a04ef8:;
  /* 10a04ef8 cmp dword ptr [0x10a33220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04eff je 0x10a04f3c */
  if (C.zf) goto L_10a04f3c;
  /* 10a04f01 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10a04f07 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04f08 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a04f0e push edx */
  push32((uint32_t)(EDX));
  /* 10a04f0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04f12 push eax */
  push32((uint32_t)(EAX));
  /* 10a04f13 call dword ptr [0x10a33220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a33220))), 0x10a04f19u);
  /* 10a04f19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a04f1e je 0x10a04f3c */
  if (C.zf) goto L_10a04f3c;
  /* 10a04f20 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04f24 jne 0x10a04f31 */
  if (!C.zf) goto L_10a04f31;
  /* 10a04f26 push 0x10a2fa34 */
  push32((uint32_t)(0x10a2fa34u));
  /* 10a04f2b call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a04f31u);
L_10a04f31:;
  /* 10a04f31 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10a04f37 jmp 0x10a0503b */
  goto L_10a0503b;
L_10a04f3c:;
  /* 10a04f3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04f3f mov edx, dword ptr [ecx*4 + 0x10a2fa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a2fa38)));
  /* 10a04f46 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a04f49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a04f4b je 0x10a04f8b */
  if (C.zf) goto L_10a04f8b;
  /* 10a04f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04f50 cmp dword ptr [eax*4 + 0x10a2fa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10a2fa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04f58 je 0x10a04f8b */
  if (C.zf) goto L_10a04f8b;
  /* 10a04f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a04f5c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10a04f62 push ecx */
  push32((uint32_t)(ECX));
  /* 10a04f63 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a04f69 push edx */
  push32((uint32_t)(EDX));
  /* 10a04f6a call 0x10a08a20 */
  push32(0x10a04f6fu); f_10a08a20();
  /* 10a04f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04f72 push eax */
  push32((uint32_t)(EAX));
  /* 10a04f73 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10a04f79 push eax */
  push32((uint32_t)(EAX));
  /* 10a04f7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04f7d mov edx, dword ptr [ecx*4 + 0x10a2fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a2fa44)));
  /* 10a04f84 push edx */
  push32((uint32_t)(EDX));
  /* 10a04f85 call dword ptr [0x10a34348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34348))), 0x10a04f8bu);
L_10a04f8b:;
  /* 10a04f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04f8e mov ecx, dword ptr [eax*4 + 0x10a2fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a2fa38)));
  /* 10a04f95 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a04f98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a04f9a je 0x10a04fa9 */
  if (C.zf) goto L_10a04fa9;
  /* 10a04f9c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a04fa2 push edx */
  push32((uint32_t)(EDX));
  /* 10a04fa3 call dword ptr [0x10a34350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34350))), 0x10a04fa9u);
L_10a04fa9:;
  /* 10a04fa9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a04fac mov ecx, dword ptr [eax*4 + 0x10a2fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a2fa38)));
  /* 10a04fb3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a04fb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a04fb8 je 0x10a05028 */
  if (C.zf) goto L_10a05028;
  /* 10a04fba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a04fbe je 0x10a04fdd */
  if (C.zf) goto L_10a04fdd;
  /* 10a04fc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a04fc2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10a04fc8 push edx */
  push32((uint32_t)(EDX));
  /* 10a04fc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a04fcc push eax */
  push32((uint32_t)(EAX));
  /* 10a04fcd call 0x10a08730 */
  push32(0x10a04fd2u); f_10a08730();
  /* 10a04fd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a04fd5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10a04fdb jmp 0x10a04fe7 */
  goto L_10a04fe7;
L_10a04fdd:;
  /* 10a04fdd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10a04fe7:;
  /* 10a04fe7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10a04fed push ecx */
  push32((uint32_t)(ECX));
  /* 10a04fee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a04ff1 push edx */
  push32((uint32_t)(EDX));
  /* 10a04ff2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10a04ff8 push eax */
  push32((uint32_t)(EAX));
  /* 10a04ff9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a04ffc push ecx */
  push32((uint32_t)(ECX));
  /* 10a04ffd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05000 push edx */
  push32((uint32_t)(EDX));
  /* 10a05001 call 0x10a05040 */
  push32(0x10a05006u); f_10a05040();
  /* 10a05006 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05009 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10a0500f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05013 jne 0x10a05020 */
  if (!C.zf) goto L_10a05020;
  /* 10a05015 push 0x10a2fa34 */
  push32((uint32_t)(0x10a2fa34u));
  /* 10a0501a call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a05020u);
L_10a05020:;
  /* 10a05020 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10a05026 jmp 0x10a0503b */
  goto L_10a0503b;
L_10a05028:;
  /* 10a05028 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0502c jne 0x10a05039 */
  if (!C.zf) goto L_10a05039;
  /* 10a0502e push 0x10a2fa34 */
  push32((uint32_t)(0x10a2fa34u));
  /* 10a05033 call dword ptr [0x10a3434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3434c))), 0x10a05039u);
L_10a05039:;
  /* 10a05039 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a0503b:;
  /* 10a0503b pop edi */
  EDI = (pop32());
  /* 10a0503c mov esp, ebp */
  ESP = (EBP);
  /* 10a0503e pop ebp */
  EBP = (pop32());
  /* 10a0503f ret  */
  ESPCHK(0x10a04cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005040 @ 0x10a05040 (780 bytes, 197 insns) */
void f_10a05040(void) {
  FTRACE(0x10a05040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05040 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05041 mov ebp, esp */
  EBP = (ESP);
  /* 10a05043 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10a05048 call 0x10a08d90 */
  push32(0x10a0504du); f_10a08d90();
L_10a0504d:;
  /* 10a0504d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05051 jne 0x10a05078 */
  if (!C.zf) goto L_10a05078;
  /* 10a05053 push 0x10a2c658 */
  push32((uint32_t)(0x10a2c658u));
  /* 10a05058 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0505a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10a0505f push 0x10a2c64c */
  push32((uint32_t)(0x10a2c64cu));
  /* 10a05064 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a05066 call 0x10a04cb0 */
  push32(0x10a0506bu); f_10a04cb0();
  /* 10a0506b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0506e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05071 jne 0x10a05078 */
  if (!C.zf) goto L_10a05078;
  /* 10a05073 call 0x10a04ba0 */
  push32(0x10a05078u); f_10a04ba0();
L_10a05078:;
  /* 10a05078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0507a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0507c jne 0x10a0504d */
  if (!C.zf) goto L_10a0504d;
  /* 10a0507e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10a05083 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10a05089 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0508a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0508c call dword ptr [0x10a34360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34360))), 0x10a05092u);
  /* 10a05092 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a05094 jne 0x10a050aa */
  if (!C.zf) goto L_10a050aa;
  /* 10a05096 push 0x10a2c634 */
  push32((uint32_t)(0x10a2c634u));
  /* 10a0509b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10a050a1 push edx */
  push32((uint32_t)(EDX));
  /* 10a050a2 call 0x10a08ba0 */
  push32(0x10a050a7u); f_10a08ba0();
  /* 10a050a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a050aa:;
  /* 10a050aa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10a050b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a050b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a050b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a050b7 call 0x10a08a20 */
  push32(0x10a050bcu); f_10a08a20();
  /* 10a050bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a050bf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a050c2 jbe 0x10a050ed */
  if ((C.cf||C.zf)) goto L_10a050ed;
  /* 10a050c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a050c7 push edx */
  push32((uint32_t)(EDX));
  /* 10a050c8 call 0x10a08a20 */
  push32(0x10a050cdu); f_10a08a20();
  /* 10a050cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a050d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a050d3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10a050d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a050da push 3 */
  push32((uint32_t)(0x3u));
  /* 10a050dc push 0x10a2c630 */
  push32((uint32_t)(0x10a2c630u));
  /* 10a050e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a050e4 push eax */
  push32((uint32_t)(EAX));
  /* 10a050e5 call 0x10a09410 */
  push32(0x10a050eau); f_10a09410();
  /* 10a050ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a050ed:;
  /* 10a050ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a050f0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10a050f6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a050fd je 0x10a05148 */
  if (C.zf) goto L_10a05148;
  /* 10a050ff mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a05105 push edx */
  push32((uint32_t)(EDX));
  /* 10a05106 call 0x10a08a20 */
  push32(0x10a0510bu); f_10a08a20();
  /* 10a0510b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0510e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05111 jbe 0x10a05148 */
  if ((C.cf||C.zf)) goto L_10a05148;
  /* 10a05113 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a05119 push eax */
  push32((uint32_t)(EAX));
  /* 10a0511a call 0x10a08a20 */
  push32(0x10a0511fu); f_10a08a20();
  /* 10a0511f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05122 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a05128 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10a0512c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10a05132 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a05134 push 0x10a2c630 */
  push32((uint32_t)(0x10a2c630u));
  /* 10a05139 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a0513f push eax */
  push32((uint32_t)(EAX));
  /* 10a05140 call 0x10a09410 */
  push32(0x10a05145u); f_10a09410();
  /* 10a05145 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a05148:;
  /* 10a05148 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0514c jne 0x10a0515a */
  if (!C.zf) goto L_10a0515a;
  /* 10a0514e mov dword ptr [ebp - 0x1114], 0x10a2c5bc */
  w32((uint32_t)(EBP + -0x1114), (0x10a2c5bcu));
  /* 10a05158 jmp 0x10a05164 */
  goto L_10a05164;
L_10a0515a:;
  /* 10a0515a mov dword ptr [ebp - 0x1114], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x1114), (0x10a2c35cu));
L_10a05164:;
  /* 10a05164 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a05167 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a0516a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0516c je 0x10a05179 */
  if (C.zf) goto L_10a05179;
  /* 10a0516e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a05171 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10a05177 jmp 0x10a05183 */
  goto L_10a05183;
L_10a05179:;
  /* 10a05179 mov dword ptr [ebp - 0x1118], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x1118), (0x10a2c35cu));
L_10a05183:;
  /* 10a05183 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a05186 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a05189 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0518b je 0x10a0519f */
  if (C.zf) goto L_10a0519f;
  /* 10a0518d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05191 jne 0x10a0519f */
  if (!C.zf) goto L_10a0519f;
  /* 10a05193 mov dword ptr [ebp - 0x111c], 0x10a2c5ac */
  w32((uint32_t)(EBP + -0x111c), (0x10a2c5acu));
  /* 10a0519d jmp 0x10a051a9 */
  goto L_10a051a9;
L_10a0519f:;
  /* 10a0519f mov dword ptr [ebp - 0x111c], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x111c), (0x10a2c35cu));
L_10a051a9:;
  /* 10a051a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a051ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a051af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a051b1 je 0x10a051bf */
  if (C.zf) goto L_10a051bf;
  /* 10a051b3 mov dword ptr [ebp - 0x1120], 0x10a2c5a8 */
  w32((uint32_t)(EBP + -0x1120), (0x10a2c5a8u));
  /* 10a051bd jmp 0x10a051c9 */
  goto L_10a051c9;
L_10a051bf:;
  /* 10a051bf mov dword ptr [ebp - 0x1120], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x1120), (0x10a2c35cu));
L_10a051c9:;
  /* 10a051c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a051cd je 0x10a051da */
  if (C.zf) goto L_10a051da;
  /* 10a051cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a051d2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10a051d8 jmp 0x10a051e4 */
  goto L_10a051e4;
L_10a051da:;
  /* 10a051da mov dword ptr [ebp - 0x1124], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x1124), (0x10a2c35cu));
L_10a051e4:;
  /* 10a051e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a051e8 je 0x10a051f6 */
  if (C.zf) goto L_10a051f6;
  /* 10a051ea mov dword ptr [ebp - 0x1128], 0x10a2c5a0 */
  w32((uint32_t)(EBP + -0x1128), (0x10a2c5a0u));
  /* 10a051f4 jmp 0x10a05200 */
  goto L_10a05200;
L_10a051f6:;
  /* 10a051f6 mov dword ptr [ebp - 0x1128], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x1128), (0x10a2c35cu));
L_10a05200:;
  /* 10a05200 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05204 je 0x10a05211 */
  if (C.zf) goto L_10a05211;
  /* 10a05206 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a05209 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10a0520f jmp 0x10a0521b */
  goto L_10a0521b;
L_10a05211:;
  /* 10a05211 mov dword ptr [ebp - 0x112c], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x112c), (0x10a2c35cu));
L_10a0521b:;
  /* 10a0521b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0521f je 0x10a0522d */
  if (C.zf) goto L_10a0522d;
  /* 10a05221 mov dword ptr [ebp - 0x1130], 0x10a2c598 */
  w32((uint32_t)(EBP + -0x1130), (0x10a2c598u));
  /* 10a0522b jmp 0x10a05237 */
  goto L_10a05237;
L_10a0522d:;
  /* 10a0522d mov dword ptr [ebp - 0x1130], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x1130), (0x10a2c35cu));
L_10a05237:;
  /* 10a05237 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0523e je 0x10a0524e */
  if (C.zf) goto L_10a0524e;
  /* 10a05240 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a05246 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10a0524c jmp 0x10a05258 */
  goto L_10a05258;
L_10a0524e:;
  /* 10a0524e mov dword ptr [ebp - 0x1134], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x1134), (0x10a2c35cu));
L_10a05258:;
  /* 10a05258 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0525f je 0x10a0526d */
  if (C.zf) goto L_10a0526d;
  /* 10a05261 mov dword ptr [ebp - 0x1138], 0x10a2c58c */
  w32((uint32_t)(EBP + -0x1138), (0x10a2c58cu));
  /* 10a0526b jmp 0x10a05277 */
  goto L_10a05277;
L_10a0526d:;
  /* 10a0526d mov dword ptr [ebp - 0x1138], 0x10a2c35c */
  w32((uint32_t)(EBP + -0x1138), (0x10a2c35cu));
L_10a05277:;
  /* 10a05277 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10a0527d push edx */
  push32((uint32_t)(EDX));
  /* 10a0527e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10a05284 push eax */
  push32((uint32_t)(EAX));
  /* 10a05285 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10a0528b push ecx */
  push32((uint32_t)(ECX));
  /* 10a0528c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10a05292 push edx */
  push32((uint32_t)(EDX));
  /* 10a05293 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10a05299 push eax */
  push32((uint32_t)(EAX));
  /* 10a0529a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10a052a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a052a1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10a052a7 push edx */
  push32((uint32_t)(EDX));
  /* 10a052a8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10a052ae push eax */
  push32((uint32_t)(EAX));
  /* 10a052af mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10a052b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a052b6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10a052bc push edx */
  push32((uint32_t)(EDX));
  /* 10a052bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a052c0 push eax */
  push32((uint32_t)(EAX));
  /* 10a052c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a052c4 mov edx, dword ptr [ecx*4 + 0x10a2fa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a2fa50)));
  /* 10a052cb push edx */
  push32((uint32_t)(EDX));
  /* 10a052cc push 0x10a2c538 */
  push32((uint32_t)(0x10a2c538u));
  /* 10a052d1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a052d6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10a052dc push eax */
  push32((uint32_t)(EAX));
  /* 10a052dd call 0x10a08aa0 */
  push32(0x10a052e2u); f_10a08aa0();
  /* 10a052e2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a052e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a052e7 jge 0x10a052fd */
  if ((C.sf==C.of)) goto L_10a052fd;
  /* 10a052e9 push 0x10a2c49c */
  push32((uint32_t)(0x10a2c49cu));
  /* 10a052ee lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10a052f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a052f5 call 0x10a08ba0 */
  push32(0x10a052fau); f_10a08ba0();
  /* 10a052fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a052fd:;
  /* 10a052fd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10a05302 push 0x10a2c514 */
  push32((uint32_t)(0x10a2c514u));
  /* 10a05307 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10a0530d push edx */
  push32((uint32_t)(EDX));
  /* 10a0530e call 0x10a09350 */
  push32(0x10a05313u); f_10a09350();
  /* 10a05313 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05316 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10a0531c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05323 jne 0x10a05336 */
  if (!C.zf) goto L_10a05336;
  /* 10a05325 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a05327 call 0x10a09090 */
  push32(0x10a0532cu); f_10a09090();
  /* 10a0532c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0532f push 3 */
  push32((uint32_t)(0x3u));
  /* 10a05331 call 0x10a053b0 */
  push32(0x10a05336u); f_10a053b0();
L_10a05336:;
  /* 10a05336 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0533d jne 0x10a05346 */
  if (!C.zf) goto L_10a05346;
  /* 10a0533f mov eax, 1 */
  EAX = (0x1u);
  /* 10a05344 jmp 0x10a05348 */
  goto L_10a05348;
L_10a05346:;
  /* 10a05346 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a05348:;
  /* 10a05348 mov esp, ebp */
  ESP = (EBP);
  /* 10a0534a pop ebp */
  EBP = (pop32());
  /* 10a0534b ret  */
  ESPCHK(0x10a05040u, _esp0);
  ESP += 4; return;
}

/* FUN_10005350 @ 0x10a05350 (56 bytes, 15 insns) */
void f_10a05350(void) {
  FTRACE(0x10a05350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05350 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05351 mov ebp, esp */
  EBP = (ESP);
  /* 10a05353 cmp dword ptr [0x10a3321c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3321c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0535a je 0x10a05362 */
  if (C.zf) goto L_10a05362;
  /* 10a0535c call dword ptr [0x10a3321c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3321c))), 0x10a05362u);
L_10a05362:;
  /* 10a05362 push 0x10a2f418 */
  push32((uint32_t)(0x10a2f418u));
  /* 10a05367 push 0x10a2f208 */
  push32((uint32_t)(0x10a2f208u));
  /* 10a0536c call 0x10a05520 */
  push32(0x10a05371u); f_10a05520();
  /* 10a05371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05374 push 0x10a2f104 */
  push32((uint32_t)(0x10a2f104u));
  /* 10a05379 push 0x10a2f000 */
  push32((uint32_t)(0x10a2f000u));
  /* 10a0537e call 0x10a05520 */
  push32(0x10a05383u); f_10a05520();
  /* 10a05383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05386 pop ebp */
  EBP = (pop32());
  /* 10a05387 ret  */
  ESPCHK(0x10a05350u, _esp0);
  ESP += 4; return;
}

/* FUN_10005390 @ 0x10a05390 (21 bytes, 10 insns) */
void f_10a05390(void) {
  FTRACE(0x10a05390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05390 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05391 mov ebp, esp */
  EBP = (ESP);
  /* 10a05393 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05395 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0539a push eax */
  push32((uint32_t)(EAX));
  /* 10a0539b call 0x10a05410 */
  push32(0x10a053a0u); f_10a05410();
  /* 10a053a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a053a3 pop ebp */
  EBP = (pop32());
  /* 10a053a4 ret  */
  ESPCHK(0x10a05390u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10a053b0 (21 bytes, 10 insns) */
void f_10a053b0(void) {
  FTRACE(0x10a053b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a053b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a053b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a053b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a053b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a053b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a053ba push eax */
  push32((uint32_t)(EAX));
  /* 10a053bb call 0x10a05410 */
  push32(0x10a053c0u); f_10a05410();
  /* 10a053c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a053c3 pop ebp */
  EBP = (pop32());
  /* 10a053c4 ret  */
  ESPCHK(0x10a053b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053d0 @ 0x10a053d0 (19 bytes, 9 insns) */
void f_10a053d0(void) {
  FTRACE(0x10a053d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a053d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a053d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a053d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a053d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a053d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a053d9 call 0x10a05410 */
  push32(0x10a053deu); f_10a05410();
  /* 10a053de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a053e1 pop ebp */
  EBP = (pop32());
  /* 10a053e2 ret  */
  ESPCHK(0x10a053d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x10a053f0 (19 bytes, 9 insns) */
void f_10a053f0(void) {
  FTRACE(0x10a053f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a053f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a053f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a053f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a053f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a053f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a053f9 call 0x10a05410 */
  push32(0x10a053feu); f_10a05410();
  /* 10a053fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05401 pop ebp */
  EBP = (pop32());
  /* 10a05402 ret  */
  ESPCHK(0x10a053f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x10a05410 (227 bytes, 61 insns) */
void f_10a05410(void) {
  FTRACE(0x10a05410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05410 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05411 mov ebp, esp */
  EBP = (ESP);
  /* 10a05413 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05414 call 0x10a05500 */
  push32(0x10a05419u); f_10a05500();
  /* 10a05419 cmp dword ptr [0x10a31718], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a31718))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05420 jne 0x10a05433 */
  if (!C.zf) goto L_10a05433;
  /* 10a05422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05425 push eax */
  push32((uint32_t)(EAX));
  /* 10a05426 call dword ptr [0x10a3436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3436c))), 0x10a0542cu);
  /* 10a0542c push eax */
  push32((uint32_t)(EAX));
  /* 10a0542d call dword ptr [0x10a34368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34368))), 0x10a05433u);
L_10a05433:;
  /* 10a05433 mov dword ptr [0x10a31714], 1 */
  w32((uint32_t)(0x10a31714), (0x1u));
  /* 10a0543d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10a05440 mov byte ptr [0x10a31710], cl */
  w8((uint32_t)(0x10a31710), (CL));
  /* 10a05446 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0544a jne 0x10a05493 */
  if (!C.zf) goto L_10a05493;
  /* 10a0544c cmp dword ptr [0x10a33218], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33218))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05453 je 0x10a05481 */
  if (C.zf) goto L_10a05481;
  /* 10a05455 mov edx, dword ptr [0x10a33214] */
  EDX = (r32((uint32_t)(0x10a33214)));
  /* 10a0545b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a0545e:;
  /* 10a0545e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05461 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a05464 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a05467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0546a cmp ecx, dword ptr [0x10a33218] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a33218))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05470 jb 0x10a05481 */
  if (C.cf) goto L_10a05481;
  /* 10a05472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05475 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05478 je 0x10a0547f */
  if (C.zf) goto L_10a0547f;
  /* 10a0547a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0547d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10a0547fu);
L_10a0547f:;
  /* 10a0547f jmp 0x10a0545e */
  goto L_10a0545e;
L_10a05481:;
  /* 10a05481 push 0x10a2f724 */
  push32((uint32_t)(0x10a2f724u));
  /* 10a05486 push 0x10a2f51c */
  push32((uint32_t)(0x10a2f51cu));
  /* 10a0548b call 0x10a05520 */
  push32(0x10a05490u); f_10a05520();
  /* 10a05490 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a05493:;
  /* 10a05493 push 0x10a2f92c */
  push32((uint32_t)(0x10a2f92cu));
  /* 10a05498 push 0x10a2f828 */
  push32((uint32_t)(0x10a2f828u));
  /* 10a0549d call 0x10a05520 */
  push32(0x10a054a2u); f_10a05520();
  /* 10a054a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a054a5 cmp dword ptr [0x10a3171c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3171c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a054ac jne 0x10a054ce */
  if (!C.zf) goto L_10a054ce;
  /* 10a054ae push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a054b0 call 0x10a07100 */
  push32(0x10a054b5u); f_10a07100();
  /* 10a054b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a054b8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a054bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a054bd je 0x10a054ce */
  if (C.zf) goto L_10a054ce;
  /* 10a054bf mov dword ptr [0x10a3171c], 1 */
  w32((uint32_t)(0x10a3171c), (0x1u));
  /* 10a054c9 call 0x10a07a10 */
  push32(0x10a054ceu); f_10a07a10();
L_10a054ce:;
  /* 10a054ce cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a054d2 je 0x10a054db */
  if (C.zf) goto L_10a054db;
  /* 10a054d4 call 0x10a05510 */
  push32(0x10a054d9u); f_10a05510();
  /* 10a054d9 jmp 0x10a054ef */
  goto L_10a054ef;
L_10a054db:;
  /* 10a054db mov dword ptr [0x10a31718], 1 */
  w32((uint32_t)(0x10a31718), (0x1u));
  /* 10a054e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a054e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a054e9 call dword ptr [0x10a34364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34364))), 0x10a054efu);
L_10a054ef:;
  /* 10a054ef mov esp, ebp */
  ESP = (EBP);
  /* 10a054f1 pop ebp */
  EBP = (pop32());
  /* 10a054f2 ret  */
  ESPCHK(0x10a05410u, _esp0);
  ESP += 4; return;
}

/* FUN_10005500 @ 0x10a05500 (15 bytes, 7 insns) */
void f_10a05500(void) {
  FTRACE(0x10a05500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05500 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05501 mov ebp, esp */
  EBP = (ESP);
  /* 10a05503 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a05505 call 0x10a095f0 */
  push32(0x10a0550au); f_10a095f0();
  /* 10a0550a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0550d pop ebp */
  EBP = (pop32());
  /* 10a0550e ret  */
  ESPCHK(0x10a05500u, _esp0);
  ESP += 4; return;
}

/* FUN_10005510 @ 0x10a05510 (15 bytes, 7 insns) */
void f_10a05510(void) {
  FTRACE(0x10a05510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05510 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05511 mov ebp, esp */
  EBP = (ESP);
  /* 10a05513 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a05515 call 0x10a09690 */
  push32(0x10a0551au); f_10a09690();
  /* 10a0551a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0551d pop ebp */
  EBP = (pop32());
  /* 10a0551e ret  */
  ESPCHK(0x10a05510u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10a05520 (37 bytes, 16 insns) */
void f_10a05520(void) {
  FTRACE(0x10a05520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05520 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05521 mov ebp, esp */
  EBP = (ESP);
L_10a05523:;
  /* 10a05523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05526 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05529 jae 0x10a05543 */
  if (!C.cf) goto L_10a05543;
  /* 10a0552b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0552e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05531 je 0x10a05538 */
  if (C.zf) goto L_10a05538;
  /* 10a05533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05536 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10a05538u);
L_10a05538:;
  /* 10a05538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0553b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0553e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a05541 jmp 0x10a05523 */
  goto L_10a05523;
L_10a05543:;
  /* 10a05543 pop ebp */
  EBP = (pop32());
  /* 10a05544 ret  */
  ESPCHK(0x10a05520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005550 @ 0x10a05550 (130 bytes, 42 insns) */
void f_10a05550(void) {
  FTRACE(0x10a05550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05550 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05551 mov ebp, esp */
  EBP = (ESP);
  /* 10a05553 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05554 call 0x10a09510 */
  push32(0x10a05559u); f_10a09510();
  /* 10a05559 call dword ptr [0x10a342a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342a4))), 0x10a0555fu);
  /* 10a0555f mov dword ptr [0x10a2fa5c], eax */
  w32((uint32_t)(0x10a2fa5c), (EAX));
  /* 10a05564 cmp dword ptr [0x10a2fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0556b jne 0x10a05571 */
  if (!C.zf) goto L_10a05571;
  /* 10a0556d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0556f jmp 0x10a055ce */
  goto L_10a055ce;
L_10a05571:;
  /* 10a05571 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10a05573 push 0x10a2c670 */
  push32((uint32_t)(0x10a2c670u));
  /* 10a05578 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0557a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10a0557c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0557e call 0x10a06000 */
  push32(0x10a05583u); f_10a06000();
  /* 10a05583 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05586 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a05589 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0558d je 0x10a055a4 */
  if (C.zf) goto L_10a055a4;
  /* 10a0558f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05592 push eax */
  push32((uint32_t)(EAX));
  /* 10a05593 mov ecx, dword ptr [0x10a2fa5c] */
  ECX = (r32((uint32_t)(0x10a2fa5c)));
  /* 10a05599 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0559a call dword ptr [0x10a34374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34374))), 0x10a055a0u);
  /* 10a055a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a055a2 jne 0x10a055a8 */
  if (!C.zf) goto L_10a055a8;
L_10a055a4:;
  /* 10a055a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a055a6 jmp 0x10a055ce */
  goto L_10a055ce;
L_10a055a8:;
  /* 10a055a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a055ab push edx */
  push32((uint32_t)(EDX));
  /* 10a055ac call 0x10a05610 */
  push32(0x10a055b1u); f_10a05610();
  /* 10a055b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a055b4 call dword ptr [0x10a34370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34370))), 0x10a055bau);
  /* 10a055ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a055bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a055bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a055c2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10a055c9 mov eax, 1 */
  EAX = (0x1u);
L_10a055ce:;
  /* 10a055ce mov esp, ebp */
  ESP = (EBP);
  /* 10a055d0 pop ebp */
  EBP = (pop32());
  /* 10a055d1 ret  */
  ESPCHK(0x10a05550u, _esp0);
  ESP += 4; return;
}

/* FUN_100055e0 @ 0x10a055e0 (41 bytes, 11 insns) */
void f_10a055e0(void) {
  FTRACE(0x10a055e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a055e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a055e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a055e3 call 0x10a09550 */
  push32(0x10a055e8u); f_10a09550();
  /* 10a055e8 cmp dword ptr [0x10a2fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a055ef je 0x10a05607 */
  if (C.zf) goto L_10a05607;
  /* 10a055f1 mov eax, dword ptr [0x10a2fa5c] */
  EAX = (r32((uint32_t)(0x10a2fa5c)));
  /* 10a055f6 push eax */
  push32((uint32_t)(EAX));
  /* 10a055f7 call dword ptr [0x10a342a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a342a0))), 0x10a055fdu);
  /* 10a055fd mov dword ptr [0x10a2fa5c], 0xffffffff */
  w32((uint32_t)(0x10a2fa5c), (0xffffffffu));
L_10a05607:;
  /* 10a05607 pop ebp */
  EBP = (pop32());
  /* 10a05608 ret  */
  ESPCHK(0x10a055e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x10a05610 (25 bytes, 8 insns) */
void f_10a05610(void) {
  FTRACE(0x10a05610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05610 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05611 mov ebp, esp */
  EBP = (ESP);
  /* 10a05613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05616 mov dword ptr [eax + 0x50], 0x10a2fc00 */
  w32((uint32_t)(EAX + 0x50), (0x10a2fc00u));
  /* 10a0561d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05620 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10a05627 pop ebp */
  EBP = (pop32());
  /* 10a05628 ret  */
  ESPCHK(0x10a05610u, _esp0);
  ESP += 4; return;
}

/* FUN_10005630 @ 0x10a05630 (152 bytes, 48 insns) */
void f_10a05630(void) {
  FTRACE(0x10a05630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05630 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05631 mov ebp, esp */
  EBP = (ESP);
  /* 10a05633 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a05636 call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a0563cu);
  /* 10a0563c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0563f mov eax, dword ptr [0x10a2fa5c] */
  EAX = (r32((uint32_t)(0x10a2fa5c)));
  /* 10a05644 push eax */
  push32((uint32_t)(EAX));
  /* 10a05645 call dword ptr [0x10a34384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34384))), 0x10a0564bu);
  /* 10a0564b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0564e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05652 jne 0x10a056b7 */
  if (!C.zf) goto L_10a056b7;
  /* 10a05654 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10a05659 push 0x10a2c670 */
  push32((uint32_t)(0x10a2c670u));
  /* 10a0565e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a05660 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10a05662 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a05664 call 0x10a06000 */
  push32(0x10a05669u); f_10a06000();
  /* 10a05669 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0566c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0566f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05673 je 0x10a056ad */
  if (C.zf) goto L_10a056ad;
  /* 10a05675 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05678 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05679 mov edx, dword ptr [0x10a2fa5c] */
  EDX = (r32((uint32_t)(0x10a2fa5c)));
  /* 10a0567f push edx */
  push32((uint32_t)(EDX));
  /* 10a05680 call dword ptr [0x10a34374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34374))), 0x10a05686u);
  /* 10a05686 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a05688 je 0x10a056ad */
  if (C.zf) goto L_10a056ad;
  /* 10a0568a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0568d push eax */
  push32((uint32_t)(EAX));
  /* 10a0568e call 0x10a05610 */
  push32(0x10a05693u); f_10a05610();
  /* 10a05693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05696 call dword ptr [0x10a34370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34370))), 0x10a0569cu);
  /* 10a0569c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0569f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a056a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a056a4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10a056ab jmp 0x10a056b7 */
  goto L_10a056b7;
L_10a056ad:;
  /* 10a056ad push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10a056af call 0x10a04b60 */
  push32(0x10a056b4u); f_10a04b60();
  /* 10a056b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a056b7:;
  /* 10a056b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a056ba push eax */
  push32((uint32_t)(EAX));
  /* 10a056bb call dword ptr [0x10a34380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34380))), 0x10a056c1u);
  /* 10a056c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a056c4 mov esp, ebp */
  ESP = (EBP);
  /* 10a056c6 pop ebp */
  EBP = (pop32());
  /* 10a056c7 ret  */
  ESPCHK(0x10a05630u, _esp0);
  ESP += 4; return;
}

/* FUN_100056d0 @ 0x10a056d0 (263 bytes, 86 insns) */
void f_10a056d0(void) {
  FTRACE(0x10a056d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a056d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a056d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a056d3 cmp dword ptr [0x10a2fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a056da je 0x10a057d5 */
  if (C.zf) goto L_10a057d5;
  /* 10a056e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a056e4 jne 0x10a056f5 */
  if (!C.zf) goto L_10a056f5;
  /* 10a056e6 mov eax, dword ptr [0x10a2fa5c] */
  EAX = (r32((uint32_t)(0x10a2fa5c)));
  /* 10a056eb push eax */
  push32((uint32_t)(EAX));
  /* 10a056ec call dword ptr [0x10a34384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34384))), 0x10a056f2u);
  /* 10a056f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a056f5:;
  /* 10a056f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a056f9 je 0x10a057c6 */
  if (C.zf) goto L_10a057c6;
  /* 10a056ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05702 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05706 je 0x10a05719 */
  if (C.zf) goto L_10a05719;
  /* 10a05708 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0570a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0570d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10a05710 push eax */
  push32((uint32_t)(EAX));
  /* 10a05711 call 0x10a06680 */
  push32(0x10a05716u); f_10a06680();
  /* 10a05716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a05719:;
  /* 10a05719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0571c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05720 je 0x10a05733 */
  if (C.zf) goto L_10a05733;
  /* 10a05722 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a05724 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05727 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10a0572a push eax */
  push32((uint32_t)(EAX));
  /* 10a0572b call 0x10a06680 */
  push32(0x10a05730u); f_10a06680();
  /* 10a05730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a05733:;
  /* 10a05733 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05736 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0573a je 0x10a0574d */
  if (C.zf) goto L_10a0574d;
  /* 10a0573c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0573e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05741 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10a05744 push eax */
  push32((uint32_t)(EAX));
  /* 10a05745 call 0x10a06680 */
  push32(0x10a0574au); f_10a06680();
  /* 10a0574a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0574d:;
  /* 10a0574d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05750 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05754 je 0x10a05767 */
  if (C.zf) goto L_10a05767;
  /* 10a05756 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a05758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0575b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10a0575e push eax */
  push32((uint32_t)(EAX));
  /* 10a0575f call 0x10a06680 */
  push32(0x10a05764u); f_10a06680();
  /* 10a05764 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a05767:;
  /* 10a05767 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0576a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0576e je 0x10a05781 */
  if (C.zf) goto L_10a05781;
  /* 10a05770 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a05772 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05775 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10a05778 push eax */
  push32((uint32_t)(EAX));
  /* 10a05779 call 0x10a06680 */
  push32(0x10a0577eu); f_10a06680();
  /* 10a0577e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a05781:;
  /* 10a05781 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05784 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05788 je 0x10a0579b */
  if (C.zf) goto L_10a0579b;
  /* 10a0578a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0578c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0578f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10a05792 push eax */
  push32((uint32_t)(EAX));
  /* 10a05793 call 0x10a06680 */
  push32(0x10a05798u); f_10a06680();
  /* 10a05798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0579b:;
  /* 10a0579b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0579e cmp dword ptr [ecx + 0x50], 0x10a2fc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10a2fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a057a5 je 0x10a057b8 */
  if (C.zf) goto L_10a057b8;
  /* 10a057a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a057a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a057ac mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10a057af push eax */
  push32((uint32_t)(EAX));
  /* 10a057b0 call 0x10a06680 */
  push32(0x10a057b5u); f_10a06680();
  /* 10a057b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a057b8:;
  /* 10a057b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a057ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a057bd push ecx */
  push32((uint32_t)(ECX));
  /* 10a057be call 0x10a06680 */
  push32(0x10a057c3u); f_10a06680();
  /* 10a057c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a057c6:;
  /* 10a057c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a057c8 mov edx, dword ptr [0x10a2fa5c] */
  EDX = (r32((uint32_t)(0x10a2fa5c)));
  /* 10a057ce push edx */
  push32((uint32_t)(EDX));
  /* 10a057cf call dword ptr [0x10a34374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34374))), 0x10a057d5u);
L_10a057d5:;
  /* 10a057d5 pop ebp */
  EBP = (pop32());
  /* 10a057d6 ret  */
  ESPCHK(0x10a056d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057e0 @ 0x10a057e0 (11 bytes, 5 insns) */
void f_10a057e0(void) {
  FTRACE(0x10a057e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a057e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a057e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a057e3 call dword ptr [0x10a34370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34370))), 0x10a057e9u);
  /* 10a057e9 pop ebp */
  EBP = (pop32());
  /* 10a057ea ret  */
  ESPCHK(0x10a057e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057f0 @ 0x10a057f0 (11 bytes, 5 insns) */
void f_10a057f0(void) {
  FTRACE(0x10a057f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a057f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a057f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a057f3 call dword ptr [0x10a3438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3438c))), 0x10a057f9u);
  /* 10a057f9 pop ebp */
  EBP = (pop32());
  /* 10a057fa ret  */
  ESPCHK(0x10a057f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005800 @ 0x10a05800 (804 bytes, 236 insns) */
void f_10a05800(void) {
  FTRACE(0x10a05800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05800 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05801 mov ebp, esp */
  EBP = (ESP);
  /* 10a05803 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a05806 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10a0580b push 0x10a2c67c */
  push32((uint32_t)(0x10a2c67cu));
  /* 10a05810 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a05812 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10a05817 call 0x10a05bf0 */
  push32(0x10a0581cu); f_10a05bf0();
  /* 10a0581c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0581f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10a05822 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05826 jne 0x10a05832 */
  if (!C.zf) goto L_10a05832;
  /* 10a05828 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10a0582a call 0x10a04b60 */
  push32(0x10a0582fu); f_10a04b60();
  /* 10a0582f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a05832:;
  /* 10a05832 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05835 mov dword ptr [0x10a330c0], eax */
  w32((uint32_t)(0x10a330c0), (EAX));
  /* 10a0583a mov dword ptr [0x10a331fc], 0x20 */
  w32((uint32_t)(0x10a331fc), (0x20u));
  /* 10a05844 jmp 0x10a0584f */
  goto L_10a0584f;
L_10a05846:;
  /* 10a05846 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05849 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0584c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10a0584f:;
  /* 10a0584f mov edx, dword ptr [0x10a330c0] */
  EDX = (r32((uint32_t)(0x10a330c0)));
  /* 10a05855 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0585b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0585e jae 0x10a05883 */
  if (!C.cf) goto L_10a05883;
  /* 10a05860 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05863 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a05867 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a0586a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a05870 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05873 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10a05877 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a0587a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a05881 jmp 0x10a05846 */
  goto L_10a05846;
L_10a05883:;
  /* 10a05883 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10a05886 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05887 call dword ptr [0x10a34398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34398))), 0x10a0588du);
  /* 10a0588d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10a05890 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a05896 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a05898 je 0x10a05a25 */
  if (C.zf) goto L_10a05a25;
  /* 10a0589e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a058a2 je 0x10a05a25 */
  if (C.zf) goto L_10a05a25;
  /* 10a058a8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a058ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a058ad mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10a058b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a058b3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a058b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a058b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a058bc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a058bf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10a058c2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a058c9 jge 0x10a058d3 */
  if ((C.sf==C.of)) goto L_10a058d3;
  /* 10a058cb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10a058ce mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10a058d1 jmp 0x10a058da */
  goto L_10a058da;
L_10a058d3:;
  /* 10a058d3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10a058da:;
  /* 10a058da mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10a058dd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10a058e0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10a058e7 jmp 0x10a058f2 */
  goto L_10a058f2;
L_10a058e9:;
  /* 10a058e9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10a058ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a058ef mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10a058f2:;
  /* 10a058f2 mov ecx, dword ptr [0x10a331fc] */
  ECX = (r32((uint32_t)(0x10a331fc)));
  /* 10a058f8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a058fb jge 0x10a05992 */
  if ((C.sf==C.of)) goto L_10a05992;
  /* 10a05901 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10a05906 push 0x10a2c67c */
  push32((uint32_t)(0x10a2c67cu));
  /* 10a0590b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0590d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10a05912 call 0x10a05bf0 */
  push32(0x10a05917u); f_10a05bf0();
  /* 10a05917 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0591a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10a0591d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05921 jne 0x10a0592e */
  if (!C.zf) goto L_10a0592e;
  /* 10a05923 mov edx, dword ptr [0x10a331fc] */
  EDX = (r32((uint32_t)(0x10a331fc)));
  /* 10a05929 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10a0592c jmp 0x10a05992 */
  goto L_10a05992;
L_10a0592e:;
  /* 10a0592e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10a05931 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05934 mov dword ptr [eax*4 + 0x10a330c0], ecx */
  w32((uint32_t)(EAX*4 + 0x10a330c0), (ECX));
  /* 10a0593b mov edx, dword ptr [0x10a331fc] */
  EDX = (r32((uint32_t)(0x10a331fc)));
  /* 10a05941 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05944 mov dword ptr [0x10a331fc], edx */
  w32((uint32_t)(0x10a331fc), (EDX));
  /* 10a0594a jmp 0x10a05955 */
  goto L_10a05955;
L_10a0594c:;
  /* 10a0594c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a0594f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05952 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10a05955:;
  /* 10a05955 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10a05958 mov edx, dword ptr [ecx*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a330c0)));
  /* 10a0595f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05965 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05968 jae 0x10a0598d */
  if (!C.cf) goto L_10a0598d;
  /* 10a0596a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a0596d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a05971 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05974 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a0597a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a0597d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10a05981 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05984 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a0598b jmp 0x10a0594c */
  goto L_10a0594c;
L_10a0598d:;
  /* 10a0598d jmp 0x10a058e9 */
  goto L_10a058e9;
L_10a05992:;
  /* 10a05992 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10a05999 jmp 0x10a059b6 */
  goto L_10a059b6;
L_10a0599b:;
  /* 10a0599b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a0599e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a059a1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10a059a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a059a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a059aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a059ad mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a059b0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a059b3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10a059b6:;
  /* 10a059b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a059b9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a059bc jge 0x10a05a25 */
  if ((C.sf==C.of)) goto L_10a05a25;
  /* 10a059be mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a059c1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a059c4 je 0x10a05a20 */
  if (C.zf) goto L_10a05a20;
  /* 10a059c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a059c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a059cc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a059cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a059d1 je 0x10a05a20 */
  if (C.zf) goto L_10a05a20;
  /* 10a059d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a059d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a059d9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10a059dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a059de jne 0x10a059f0 */
  if (!C.zf) goto L_10a059f0;
  /* 10a059e0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a059e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a059e5 push edx */
  push32((uint32_t)(EDX));
  /* 10a059e6 call dword ptr [0x10a34394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34394))), 0x10a059ecu);
  /* 10a059ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a059ee je 0x10a05a20 */
  if (C.zf) goto L_10a05a20;
L_10a059f0:;
  /* 10a059f0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a059f3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a059f6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a059f9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a059fc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a059ff mov edx, dword ptr [eax*4 + 0x10a330c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a05a06 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05a08 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10a05a0b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05a0e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a05a11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a05a13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a05a15 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05a18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05a1b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a05a1d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10a05a20:;
  /* 10a05a20 jmp 0x10a0599b */
  goto L_10a0599b;
L_10a05a25:;
  /* 10a05a25 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10a05a2c jmp 0x10a05a37 */
  goto L_10a05a37;
L_10a05a2e:;
  /* 10a05a2e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a05a31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05a34 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10a05a37:;
  /* 10a05a37 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05a3b jge 0x10a05b14 */
  if ((C.sf==C.of)) goto L_10a05b14;
  /* 10a05a41 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a05a44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a05a47 mov edx, dword ptr [0x10a330c0] */
  EDX = (r32((uint32_t)(0x10a330c0)));
  /* 10a05a4d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05a4f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10a05a52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05a55 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05a58 jne 0x10a05b00 */
  if (!C.zf) goto L_10a05b00;
  /* 10a05a5e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05a61 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10a05a65 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05a69 jne 0x10a05a74 */
  if (!C.zf) goto L_10a05a74;
  /* 10a05a6b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10a05a72 jmp 0x10a05a84 */
  goto L_10a05a84;
L_10a05a74:;
  /* 10a05a74 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a05a77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a05a7a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a05a7c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a05a7e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05a81 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10a05a84:;
  /* 10a05a84 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10a05a87 push eax */
  push32((uint32_t)(EAX));
  /* 10a05a88 call dword ptr [0x10a34344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34344))), 0x10a05a8eu);
  /* 10a05a8e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10a05a91 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05a95 je 0x10a05aef */
  if (C.zf) goto L_10a05aef;
  /* 10a05a97 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a05a9a push ecx */
  push32((uint32_t)(ECX));
  /* 10a05a9b call dword ptr [0x10a34394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34394))), 0x10a05aa1u);
  /* 10a05aa1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10a05aa4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05aa8 je 0x10a05aef */
  if (C.zf) goto L_10a05aef;
  /* 10a05aaa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05aad mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a05ab0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a05ab2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10a05ab5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a05abb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05abe jne 0x10a05ad0 */
  if (!C.zf) goto L_10a05ad0;
  /* 10a05ac0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05ac3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a05ac6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10a05ac8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05acb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10a05ace jmp 0x10a05aed */
  goto L_10a05aed;
L_10a05ad0:;
  /* 10a05ad0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10a05ad3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a05ad9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05adc jne 0x10a05aed */
  if (!C.zf) goto L_10a05aed;
  /* 10a05ade mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05ae1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a05ae4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10a05ae7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05aea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10a05aed:;
  /* 10a05aed jmp 0x10a05afe */
  goto L_10a05afe;
L_10a05aef:;
  /* 10a05aef mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05af2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a05af5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10a05af8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05afb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10a05afe:;
  /* 10a05afe jmp 0x10a05b0f */
  goto L_10a05b0f;
L_10a05b00:;
  /* 10a05b00 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05b03 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a05b06 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10a05b09 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a05b0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10a05b0f:;
  /* 10a05b0f jmp 0x10a05a2e */
  goto L_10a05a2e;
L_10a05b14:;
  /* 10a05b14 mov eax, dword ptr [0x10a331fc] */
  EAX = (r32((uint32_t)(0x10a331fc)));
  /* 10a05b19 push eax */
  push32((uint32_t)(EAX));
  /* 10a05b1a call dword ptr [0x10a34390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34390))), 0x10a05b20u);
  /* 10a05b20 mov esp, ebp */
  ESP = (EBP);
  /* 10a05b22 pop ebp */
  EBP = (pop32());
  /* 10a05b23 ret  */
  ESPCHK(0x10a05800u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10a05b30 (155 bytes, 45 insns) */
void f_10a05b30(void) {
  FTRACE(0x10a05b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05b31 mov ebp, esp */
  EBP = (ESP);
  /* 10a05b33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a05b36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a05b3d jmp 0x10a05b48 */
  goto L_10a05b48;
L_10a05b3f:;
  /* 10a05b3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a05b42 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05b45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a05b48:;
  /* 10a05b48 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05b4c jge 0x10a05bc7 */
  if ((C.sf==C.of)) goto L_10a05bc7;
  /* 10a05b4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a05b51 cmp dword ptr [ecx*4 + 0x10a330c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10a330c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05b59 je 0x10a05bc2 */
  if (C.zf) goto L_10a05bc2;
  /* 10a05b5b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a05b5e mov eax, dword ptr [edx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a330c0)));
  /* 10a05b65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a05b68 jmp 0x10a05b73 */
  goto L_10a05b73;
L_10a05b6a:;
  /* 10a05b6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05b6d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05b70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a05b73:;
  /* 10a05b73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a05b76 mov eax, dword ptr [edx*4 + 0x10a330c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a330c0)));
  /* 10a05b7d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05b82 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05b85 jae 0x10a05b9f */
  if (!C.cf) goto L_10a05b9f;
  /* 10a05b87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05b8a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05b8e je 0x10a05b9d */
  if (C.zf) goto L_10a05b9d;
  /* 10a05b90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05b93 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05b96 push edx */
  push32((uint32_t)(EDX));
  /* 10a05b97 call dword ptr [0x10a3439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3439c))), 0x10a05b9du);
L_10a05b9d:;
  /* 10a05b9d jmp 0x10a05b6a */
  goto L_10a05b6a;
L_10a05b9f:;
  /* 10a05b9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a05ba1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a05ba4 mov ecx, dword ptr [eax*4 + 0x10a330c0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a330c0)));
  /* 10a05bab push ecx */
  push32((uint32_t)(ECX));
  /* 10a05bac call 0x10a06680 */
  push32(0x10a05bb1u); f_10a06680();
  /* 10a05bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05bb4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a05bb7 mov dword ptr [edx*4 + 0x10a330c0], 0 */
  w32((uint32_t)(EDX*4 + 0x10a330c0), (0x0u));
L_10a05bc2:;
  /* 10a05bc2 jmp 0x10a05b3f */
  goto L_10a05b3f;
L_10a05bc7:;
  /* 10a05bc7 mov esp, ebp */
  ESP = (EBP);
  /* 10a05bc9 pop ebp */
  EBP = (pop32());
  /* 10a05bca ret  */
  ESPCHK(0x10a05b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x10a05bd0 (29 bytes, 13 insns) */
void f_10a05bd0(void) {
  FTRACE(0x10a05bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a05bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05bd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a05bd9 mov eax, dword ptr [0x10a318c0] */
  EAX = (r32((uint32_t)(0x10a318c0)));
  /* 10a05bde push eax */
  push32((uint32_t)(EAX));
  /* 10a05bdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05be2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05be3 call 0x10a05c40 */
  push32(0x10a05be8u); f_10a05c40();
  /* 10a05be8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05beb pop ebp */
  EBP = (pop32());
  /* 10a05bec ret  */
  ESPCHK(0x10a05bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x10a05bf0 (35 bytes, 16 insns) */
void f_10a05bf0(void) {
  FTRACE(0x10a05bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10a05bf3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a05bf6 push eax */
  push32((uint32_t)(EAX));
  /* 10a05bf7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a05bfa push ecx */
  push32((uint32_t)(ECX));
  /* 10a05bfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a05bfe push edx */
  push32((uint32_t)(EDX));
  /* 10a05bff mov eax, dword ptr [0x10a318c0] */
  EAX = (r32((uint32_t)(0x10a318c0)));
  /* 10a05c04 push eax */
  push32((uint32_t)(EAX));
  /* 10a05c05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05c08 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05c09 call 0x10a05c40 */
  push32(0x10a05c0eu); f_10a05c40();
  /* 10a05c0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05c11 pop ebp */
  EBP = (pop32());
  /* 10a05c12 ret  */
  ESPCHK(0x10a05bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c20 @ 0x10a05c20 (27 bytes, 13 insns) */
void f_10a05c20(void) {
  FTRACE(0x10a05c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05c21 mov ebp, esp */
  EBP = (ESP);
  /* 10a05c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05c27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a05c29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a05c2c push eax */
  push32((uint32_t)(EAX));
  /* 10a05c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05c30 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05c31 call 0x10a05c40 */
  push32(0x10a05c36u); f_10a05c40();
  /* 10a05c36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05c39 pop ebp */
  EBP = (pop32());
  /* 10a05c3a ret  */
  ESPCHK(0x10a05c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c40 @ 0x10a05c40 (94 bytes, 38 insns) */
void f_10a05c40(void) {
  FTRACE(0x10a05c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05c41 mov ebp, esp */
  EBP = (ESP);
  /* 10a05c43 push ecx */
  push32((uint32_t)(ECX));
L_10a05c44:;
  /* 10a05c44 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a05c46 call 0x10a095f0 */
  push32(0x10a05c4bu); f_10a095f0();
  /* 10a05c4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05c4e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a05c51 push eax */
  push32((uint32_t)(EAX));
  /* 10a05c52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a05c55 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05c56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a05c59 push edx */
  push32((uint32_t)(EDX));
  /* 10a05c5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05c5d push eax */
  push32((uint32_t)(EAX));
  /* 10a05c5e call 0x10a05cc0 */
  push32(0x10a05c63u); f_10a05cc0();
  /* 10a05c63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05c66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a05c69 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a05c6b call 0x10a09690 */
  push32(0x10a05c70u); f_10a09690();
  /* 10a05c70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05c73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05c77 jne 0x10a05c7f */
  if (!C.zf) goto L_10a05c7f;
  /* 10a05c79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05c7d jne 0x10a05c84 */
  if (!C.zf) goto L_10a05c84;
L_10a05c7f:;
  /* 10a05c7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05c82 jmp 0x10a05c9a */
  goto L_10a05c9a;
L_10a05c84:;
  /* 10a05c84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05c87 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05c88 call 0x10a09930 */
  push32(0x10a05c8du); f_10a09930();
  /* 10a05c8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05c90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a05c92 jne 0x10a05c98 */
  if (!C.zf) goto L_10a05c98;
  /* 10a05c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a05c96 jmp 0x10a05c9a */
  goto L_10a05c9a;
L_10a05c98:;
  /* 10a05c98 jmp 0x10a05c44 */
  goto L_10a05c44;
L_10a05c9a:;
  /* 10a05c9a mov esp, ebp */
  ESP = (EBP);
  /* 10a05c9c pop ebp */
  EBP = (pop32());
  /* 10a05c9d ret  */
  ESPCHK(0x10a05c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x10a05ca0 (23 bytes, 11 insns) */
void f_10a05ca0(void) {
  FTRACE(0x10a05ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10a05ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05ca7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a05ca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05cac push eax */
  push32((uint32_t)(EAX));
  /* 10a05cad call 0x10a05cc0 */
  push32(0x10a05cb2u); f_10a05cc0();
  /* 10a05cb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05cb5 pop ebp */
  EBP = (pop32());
  /* 10a05cb6 ret  */
  ESPCHK(0x10a05ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cc0 @ 0x10a05cc0 (787 bytes, 254 insns) */
void f_10a05cc0(void) {
  FTRACE(0x10a05cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a05cc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a05cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a05cc7 push esi */
  push32((uint32_t)(ESI));
  /* 10a05cc8 push edi */
  push32((uint32_t)(EDI));
  /* 10a05cc9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a05cd0 mov eax, dword ptr [0x10a2fa84] */
  EAX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a05cd5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a05cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a05cda je 0x10a05d0c */
  if (C.zf) goto L_10a05d0c;
L_10a05cdc:;
  /* 10a05cdc call 0x10a06d90 */
  push32(0x10a05ce1u); f_10a06d90();
  /* 10a05ce1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a05ce3 jne 0x10a05d06 */
  if (!C.zf) goto L_10a05d06;
  /* 10a05ce5 push 0x10a2c770 */
  push32((uint32_t)(0x10a2c770u));
  /* 10a05cea push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05cec push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10a05cf1 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a05cf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a05cf8 call 0x10a04cb0 */
  push32(0x10a05cfdu); f_10a04cb0();
  /* 10a05cfd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05d00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05d03 jne 0x10a05d06 */
  if (!C.zf) goto L_10a05d06;
  /* 10a05d05 int3  */
  x86_unimpl("int3 @ 0x10a05d05");
L_10a05d06:;
  /* 10a05d06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a05d08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a05d0a jne 0x10a05cdc */
  if (!C.zf) goto L_10a05cdc;
L_10a05d0c:;
  /* 10a05d0c mov edx, dword ptr [0x10a2fa88] */
  EDX = (r32((uint32_t)(0x10a2fa88)));
  /* 10a05d12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a05d15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a05d18 cmp eax, dword ptr [0x10a2fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a2fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05d1e jne 0x10a05d21 */
  if (!C.zf) goto L_10a05d21;
  /* 10a05d20 int3  */
  x86_unimpl("int3 @ 0x10a05d20");
L_10a05d21:;
  /* 10a05d21 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a05d24 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05d25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a05d28 push edx */
  push32((uint32_t)(EDX));
  /* 10a05d29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a05d2c push eax */
  push32((uint32_t)(EAX));
  /* 10a05d2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a05d30 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05d31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05d34 push edx */
  push32((uint32_t)(EDX));
  /* 10a05d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a05d39 call dword ptr [0x10a2fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a2fc90))), 0x10a05d3fu);
  /* 10a05d3f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05d42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a05d44 jne 0x10a05da4 */
  if (!C.zf) goto L_10a05da4;
  /* 10a05d46 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05d4a je 0x10a05d77 */
  if (C.zf) goto L_10a05d77;
L_10a05d4c:;
  /* 10a05d4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a05d4f push eax */
  push32((uint32_t)(EAX));
  /* 10a05d50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a05d53 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05d54 push 0x10a2c72c */
  push32((uint32_t)(0x10a2c72cu));
  /* 10a05d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05d61 call 0x10a04cb0 */
  push32(0x10a05d66u); f_10a04cb0();
  /* 10a05d66 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05d69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05d6c jne 0x10a05d6f */
  if (!C.zf) goto L_10a05d6f;
  /* 10a05d6e int3  */
  x86_unimpl("int3 @ 0x10a05d6e");
L_10a05d6f:;
  /* 10a05d6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a05d71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a05d73 jne 0x10a05d4c */
  if (!C.zf) goto L_10a05d4c;
  /* 10a05d75 jmp 0x10a05d9d */
  goto L_10a05d9d;
L_10a05d77:;
  /* 10a05d77 push 0x10a2c708 */
  push32((uint32_t)(0x10a2c708u));
  /* 10a05d7c push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a05d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05d89 call 0x10a04cb0 */
  push32(0x10a05d8eu); f_10a04cb0();
  /* 10a05d8e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05d91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05d94 jne 0x10a05d97 */
  if (!C.zf) goto L_10a05d97;
  /* 10a05d96 int3  */
  x86_unimpl("int3 @ 0x10a05d96");
L_10a05d97:;
  /* 10a05d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a05d99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a05d9b jne 0x10a05d77 */
  if (!C.zf) goto L_10a05d77;
L_10a05d9d:;
  /* 10a05d9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a05d9f jmp 0x10a05fcc */
  goto L_10a05fcc;
L_10a05da4:;
  /* 10a05da4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a05da7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a05dad cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05db0 je 0x10a05dc6 */
  if (C.zf) goto L_10a05dc6;
  /* 10a05db2 mov edx, dword ptr [0x10a2fa84] */
  EDX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a05db8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a05dbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a05dbd jne 0x10a05dc6 */
  if (!C.zf) goto L_10a05dc6;
  /* 10a05dbf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10a05dc6:;
  /* 10a05dc6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05dca ja 0x10a05dd7 */
  if ((!C.cf&&!C.zf)) goto L_10a05dd7;
  /* 10a05dcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05dcf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05dd2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05dd5 jbe 0x10a05e03 */
  if ((C.cf||C.zf)) goto L_10a05e03;
L_10a05dd7:;
  /* 10a05dd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05dda push ecx */
  push32((uint32_t)(ECX));
  /* 10a05ddb push 0x10a2c6e0 */
  push32((uint32_t)(0x10a2c6e0u));
  /* 10a05de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05de6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a05de8 call 0x10a04cb0 */
  push32(0x10a05dedu); f_10a04cb0();
  /* 10a05ded add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05df0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05df3 jne 0x10a05df6 */
  if (!C.zf) goto L_10a05df6;
  /* 10a05df5 int3  */
  x86_unimpl("int3 @ 0x10a05df5");
L_10a05df6:;
  /* 10a05df6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a05df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a05dfa jne 0x10a05dd7 */
  if (!C.zf) goto L_10a05dd7;
  /* 10a05dfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a05dfe jmp 0x10a05fcc */
  goto L_10a05fcc;
L_10a05e03:;
  /* 10a05e03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a05e06 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a05e0b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05e0e je 0x10a05e50 */
  if (C.zf) goto L_10a05e50;
  /* 10a05e10 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05e14 je 0x10a05e50 */
  if (C.zf) goto L_10a05e50;
  /* 10a05e16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a05e19 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a05e1f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05e22 je 0x10a05e50 */
  if (C.zf) goto L_10a05e50;
  /* 10a05e24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05e28 je 0x10a05e50 */
  if (C.zf) goto L_10a05e50;
L_10a05e2a:;
  /* 10a05e2a push 0x10a2c6ac */
  push32((uint32_t)(0x10a2c6acu));
  /* 10a05e2f push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a05e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05e3a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a05e3c call 0x10a04cb0 */
  push32(0x10a05e41u); f_10a04cb0();
  /* 10a05e41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05e44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05e47 jne 0x10a05e4a */
  if (!C.zf) goto L_10a05e4a;
  /* 10a05e49 int3  */
  x86_unimpl("int3 @ 0x10a05e49");
L_10a05e4a:;
  /* 10a05e4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a05e4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a05e4e jne 0x10a05e2a */
  if (!C.zf) goto L_10a05e2a;
L_10a05e50:;
  /* 10a05e50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05e53 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05e56 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a05e59 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a05e5c push ecx */
  push32((uint32_t)(ECX));
  /* 10a05e5d call 0x10a09a40 */
  push32(0x10a05e62u); f_10a09a40();
  /* 10a05e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05e65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a05e68 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05e6c jne 0x10a05e75 */
  if (!C.zf) goto L_10a05e75;
  /* 10a05e6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a05e70 jmp 0x10a05fcc */
  goto L_10a05fcc;
L_10a05e75:;
  /* 10a05e75 mov edx, dword ptr [0x10a2fa88] */
  EDX = (r32((uint32_t)(0x10a2fa88)));
  /* 10a05e7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05e7e mov dword ptr [0x10a2fa88], edx */
  w32((uint32_t)(0x10a2fa88), (EDX));
  /* 10a05e84 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05e88 je 0x10a05ed3 */
  if (C.zf) goto L_10a05ed3;
  /* 10a05e8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05e8d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a05e93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05e96 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a05e9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05ea0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10a05ea7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05eaa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10a05eb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05eb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05eb7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10a05eba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05ebd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10a05ec4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05ec7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10a05ece jmp 0x10a05f73 */
  goto L_10a05f73;
L_10a05ed3:;
  /* 10a05ed3 mov edx, dword ptr [0x10a31724] */
  EDX = (r32((uint32_t)(0x10a31724)));
  /* 10a05ed9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05edc mov dword ptr [0x10a31724], edx */
  w32((uint32_t)(0x10a31724), (EDX));
  /* 10a05ee2 mov eax, dword ptr [0x10a3172c] */
  EAX = (r32((uint32_t)(0x10a3172c)));
  /* 10a05ee7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05eea mov dword ptr [0x10a3172c], eax */
  w32((uint32_t)(0x10a3172c), (EAX));
  /* 10a05eef mov ecx, dword ptr [0x10a3172c] */
  ECX = (r32((uint32_t)(0x10a3172c)));
  /* 10a05ef5 cmp ecx, dword ptr [0x10a31730] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a31730))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05efb jbe 0x10a05f09 */
  if ((C.cf||C.zf)) goto L_10a05f09;
  /* 10a05efd mov edx, dword ptr [0x10a3172c] */
  EDX = (r32((uint32_t)(0x10a3172c)));
  /* 10a05f03 mov dword ptr [0x10a31730], edx */
  w32((uint32_t)(0x10a31730), (EDX));
L_10a05f09:;
  /* 10a05f09 cmp dword ptr [0x10a31728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a05f10 je 0x10a05f1f */
  if (C.zf) goto L_10a05f1f;
  /* 10a05f12 mov eax, dword ptr [0x10a31728] */
  EAX = (r32((uint32_t)(0x10a31728)));
  /* 10a05f17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f1a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a05f1d jmp 0x10a05f28 */
  goto L_10a05f28;
L_10a05f1f:;
  /* 10a05f1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f22 mov dword ptr [0x10a31720], edx */
  w32((uint32_t)(0x10a31720), (EDX));
L_10a05f28:;
  /* 10a05f28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f2b mov ecx, dword ptr [0x10a31728] */
  ECX = (r32((uint32_t)(0x10a31728)));
  /* 10a05f31 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a05f33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f36 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10a05f3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a05f43 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10a05f46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f49 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a05f4c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10a05f4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05f55 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10a05f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a05f5e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10a05f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a05f67 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10a05f6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f6d mov dword ptr [0x10a31728], ecx */
  w32((uint32_t)(0x10a31728), (ECX));
L_10a05f73:;
  /* 10a05f73 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a05f75 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a05f77 mov dl, byte ptr [0x10a2fa90] */
  DL = (r8((uint32_t)(0x10a2fa90)));
  /* 10a05f7d push edx */
  push32((uint32_t)(EDX));
  /* 10a05f7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f81 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05f84 push eax */
  push32((uint32_t)(EAX));
  /* 10a05f85 call 0x10a09960 */
  push32(0x10a05f8au); f_10a09960();
  /* 10a05f8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05f8d push 4 */
  push32((uint32_t)(0x4u));
  /* 10a05f8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a05f91 mov cl, byte ptr [0x10a2fa90] */
  CL = (r8((uint32_t)(0x10a2fa90)));
  /* 10a05f97 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05f98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05f9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05f9e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10a05fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05fa3 call 0x10a09960 */
  push32(0x10a05fa8u); f_10a09960();
  /* 10a05fa8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05fab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05fae push edx */
  push32((uint32_t)(EDX));
  /* 10a05faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a05fb1 mov al, byte ptr [0x10a2fa92] */
  AL = (r8((uint32_t)(0x10a2fa92)));
  /* 10a05fb6 push eax */
  push32((uint32_t)(EAX));
  /* 10a05fb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05fba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05fbd push ecx */
  push32((uint32_t)(ECX));
  /* 10a05fbe call 0x10a09960 */
  push32(0x10a05fc3u); f_10a09960();
  /* 10a05fc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05fc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a05fc9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10a05fcc:;
  /* 10a05fcc pop edi */
  EDI = (pop32());
  /* 10a05fcd pop esi */
  ESI = (pop32());
  /* 10a05fce pop ebx */
  EBX = (pop32());
  /* 10a05fcf mov esp, ebp */
  ESP = (EBP);
  /* 10a05fd1 pop ebp */
  EBP = (pop32());
  /* 10a05fd2 ret  */
  ESPCHK(0x10a05cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x10a05fe0 (27 bytes, 13 insns) */
void f_10a05fe0(void) {
  FTRACE(0x10a05fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a05fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a05fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10a05fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a05fe7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a05fe9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a05fec push eax */
  push32((uint32_t)(EAX));
  /* 10a05fed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a05ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a05ff1 call 0x10a06000 */
  push32(0x10a05ff6u); f_10a06000();
  /* 10a05ff6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a05ff9 pop ebp */
  EBP = (pop32());
  /* 10a05ffa ret  */
  ESPCHK(0x10a05fe0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10a06000 (96 bytes, 37 insns) */
void f_10a06000(void) {
  FTRACE(0x10a06000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06000 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06001 mov ebp, esp */
  EBP = (ESP);
  /* 10a06003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a06006 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a06009 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0600d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a06010 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a06013 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06014 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a06017 push edx */
  push32((uint32_t)(EDX));
  /* 10a06018 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0601b push eax */
  push32((uint32_t)(EAX));
  /* 10a0601c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0601f push ecx */
  push32((uint32_t)(ECX));
  /* 10a06020 call 0x10a05bf0 */
  push32(0x10a06025u); f_10a05bf0();
  /* 10a06025 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06028 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0602b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0602f je 0x10a06059 */
  if (C.zf) goto L_10a06059;
  /* 10a06031 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06034 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a06037 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0603a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0603d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a06040:;
  /* 10a06040 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06043 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06046 jae 0x10a06059 */
  if (!C.cf) goto L_10a06059;
  /* 10a06048 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0604b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a0604e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06051 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06054 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a06057 jmp 0x10a06040 */
  goto L_10a06040;
L_10a06059:;
  /* 10a06059 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0605c mov esp, ebp */
  ESP = (EBP);
  /* 10a0605e pop ebp */
  EBP = (pop32());
  /* 10a0605f ret  */
  ESPCHK(0x10a06000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x10a06060 (27 bytes, 13 insns) */
void f_10a06060(void) {
  FTRACE(0x10a06060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06060 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06061 mov ebp, esp */
  EBP = (ESP);
  /* 10a06063 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06065 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06067 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a06069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0606c push eax */
  push32((uint32_t)(EAX));
  /* 10a0606d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06070 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06071 call 0x10a06080 */
  push32(0x10a06076u); f_10a06080();
  /* 10a06076 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06079 pop ebp */
  EBP = (pop32());
  /* 10a0607a ret  */
  ESPCHK(0x10a06060u, _esp0);
  ESP += 4; return;
}

/* FUN_10006080 @ 0x10a06080 (64 bytes, 27 insns) */
void f_10a06080(void) {
  FTRACE(0x10a06080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06080 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06081 mov ebp, esp */
  EBP = (ESP);
  /* 10a06083 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06084 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06086 call 0x10a095f0 */
  push32(0x10a0608bu); f_10a095f0();
  /* 10a0608b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0608e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a06090 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a06093 push eax */
  push32((uint32_t)(EAX));
  /* 10a06094 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a06097 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06098 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0609b push edx */
  push32((uint32_t)(EDX));
  /* 10a0609c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0609f push eax */
  push32((uint32_t)(EAX));
  /* 10a060a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a060a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a060a4 call 0x10a060c0 */
  push32(0x10a060a9u); f_10a060c0();
  /* 10a060a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a060ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a060af push 9 */
  push32((uint32_t)(0x9u));
  /* 10a060b1 call 0x10a09690 */
  push32(0x10a060b6u); f_10a09690();
  /* 10a060b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a060b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a060bc mov esp, ebp */
  ESP = (EBP);
  /* 10a060be pop ebp */
  EBP = (pop32());
  /* 10a060bf ret  */
  ESPCHK(0x10a06080u, _esp0);
  ESP += 4; return;
}

/* FUN_100060c0 @ 0x10a060c0 (1297 bytes, 431 insns) */
void f_10a060c0(void) {
  FTRACE(0x10a060c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a060c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a060c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a060c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a060c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a060c7 push esi */
  push32((uint32_t)(ESI));
  /* 10a060c8 push edi */
  push32((uint32_t)(EDI));
  /* 10a060c9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10a060d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a060d4 jne 0x10a060f3 */
  if (!C.zf) goto L_10a060f3;
  /* 10a060d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a060d9 push eax */
  push32((uint32_t)(EAX));
  /* 10a060da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a060dd push ecx */
  push32((uint32_t)(ECX));
  /* 10a060de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a060e1 push edx */
  push32((uint32_t)(EDX));
  /* 10a060e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a060e5 push eax */
  push32((uint32_t)(EAX));
  /* 10a060e6 call 0x10a05bf0 */
  push32(0x10a060ebu); f_10a05bf0();
  /* 10a060eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a060ee jmp 0x10a065ca */
  goto L_10a065ca;
L_10a060f3:;
  /* 10a060f3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a060f7 je 0x10a06116 */
  if (C.zf) goto L_10a06116;
  /* 10a060f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a060fd jne 0x10a06116 */
  if (!C.zf) goto L_10a06116;
  /* 10a060ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a06102 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06103 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06106 push edx */
  push32((uint32_t)(EDX));
  /* 10a06107 call 0x10a06680 */
  push32(0x10a0610cu); f_10a06680();
  /* 10a0610c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0610f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06111 jmp 0x10a065ca */
  goto L_10a065ca;
L_10a06116:;
  /* 10a06116 mov eax, dword ptr [0x10a2fa84] */
  EAX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a0611b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0611e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06120 je 0x10a06152 */
  if (C.zf) goto L_10a06152;
L_10a06122:;
  /* 10a06122 call 0x10a06d90 */
  push32(0x10a06127u); f_10a06d90();
  /* 10a06127 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06129 jne 0x10a0614c */
  if (!C.zf) goto L_10a0614c;
  /* 10a0612b push 0x10a2c770 */
  push32((uint32_t)(0x10a2c770u));
  /* 10a06130 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06132 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10a06137 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a0613c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0613e call 0x10a04cb0 */
  push32(0x10a06143u); f_10a04cb0();
  /* 10a06143 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06146 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06149 jne 0x10a0614c */
  if (!C.zf) goto L_10a0614c;
  /* 10a0614b int3  */
  x86_unimpl("int3 @ 0x10a0614b");
L_10a0614c:;
  /* 10a0614c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0614e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a06150 jne 0x10a06122 */
  if (!C.zf) goto L_10a06122;
L_10a06152:;
  /* 10a06152 mov edx, dword ptr [0x10a2fa88] */
  EDX = (r32((uint32_t)(0x10a2fa88)));
  /* 10a06158 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a0615b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0615e cmp eax, dword ptr [0x10a2fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a2fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06164 jne 0x10a06167 */
  if (!C.zf) goto L_10a06167;
  /* 10a06166 int3  */
  x86_unimpl("int3 @ 0x10a06166");
L_10a06167:;
  /* 10a06167 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0616a push ecx */
  push32((uint32_t)(ECX));
  /* 10a0616b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0616e push edx */
  push32((uint32_t)(EDX));
  /* 10a0616f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a06172 push eax */
  push32((uint32_t)(EAX));
  /* 10a06173 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a06176 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06177 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0617a push edx */
  push32((uint32_t)(EDX));
  /* 10a0617b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0617e push eax */
  push32((uint32_t)(EAX));
  /* 10a0617f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a06181 call dword ptr [0x10a2fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a2fc90))), 0x10a06187u);
  /* 10a06187 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0618a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0618c jne 0x10a061ec */
  if (!C.zf) goto L_10a061ec;
  /* 10a0618e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06192 je 0x10a061bf */
  if (C.zf) goto L_10a061bf;
L_10a06194:;
  /* 10a06194 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a06197 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06198 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0619b push edx */
  push32((uint32_t)(EDX));
  /* 10a0619c push 0x10a2c8ec */
  push32((uint32_t)(0x10a2c8ecu));
  /* 10a061a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061a9 call 0x10a04cb0 */
  push32(0x10a061aeu); f_10a04cb0();
  /* 10a061ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a061b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a061b4 jne 0x10a061b7 */
  if (!C.zf) goto L_10a061b7;
  /* 10a061b6 int3  */
  x86_unimpl("int3 @ 0x10a061b6");
L_10a061b7:;
  /* 10a061b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a061b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a061bb jne 0x10a06194 */
  if (!C.zf) goto L_10a06194;
  /* 10a061bd jmp 0x10a061e5 */
  goto L_10a061e5;
L_10a061bf:;
  /* 10a061bf push 0x10a2c8c8 */
  push32((uint32_t)(0x10a2c8c8u));
  /* 10a061c4 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a061c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061d1 call 0x10a04cb0 */
  push32(0x10a061d6u); f_10a04cb0();
  /* 10a061d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a061d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a061dc jne 0x10a061df */
  if (!C.zf) goto L_10a061df;
  /* 10a061de int3  */
  x86_unimpl("int3 @ 0x10a061de");
L_10a061df:;
  /* 10a061df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a061e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a061e3 jne 0x10a061bf */
  if (!C.zf) goto L_10a061bf;
L_10a061e5:;
  /* 10a061e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a061e7 jmp 0x10a065ca */
  goto L_10a065ca;
L_10a061ec:;
  /* 10a061ec cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a061f0 jbe 0x10a0621e */
  if ((C.cf||C.zf)) goto L_10a0621e;
L_10a061f2:;
  /* 10a061f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a061f5 push edx */
  push32((uint32_t)(EDX));
  /* 10a061f6 push 0x10a2c898 */
  push32((uint32_t)(0x10a2c898u));
  /* 10a061fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a061ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06201 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a06203 call 0x10a04cb0 */
  push32(0x10a06208u); f_10a04cb0();
  /* 10a06208 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0620b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0620e jne 0x10a06211 */
  if (!C.zf) goto L_10a06211;
  /* 10a06210 int3  */
  x86_unimpl("int3 @ 0x10a06210");
L_10a06211:;
  /* 10a06211 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06213 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06215 jne 0x10a061f2 */
  if (!C.zf) goto L_10a061f2;
  /* 10a06217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06219 jmp 0x10a065ca */
  goto L_10a065ca;
L_10a0621e:;
  /* 10a0621e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06222 je 0x10a06266 */
  if (C.zf) goto L_10a06266;
  /* 10a06224 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a06227 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0622d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06230 je 0x10a06266 */
  if (C.zf) goto L_10a06266;
  /* 10a06232 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a06235 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0623b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0623e je 0x10a06266 */
  if (C.zf) goto L_10a06266;
L_10a06240:;
  /* 10a06240 push 0x10a2c6ac */
  push32((uint32_t)(0x10a2c6acu));
  /* 10a06245 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a0624a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0624c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0624e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06250 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a06252 call 0x10a04cb0 */
  push32(0x10a06257u); f_10a04cb0();
  /* 10a06257 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0625a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0625d jne 0x10a06260 */
  if (!C.zf) goto L_10a06260;
  /* 10a0625f int3  */
  x86_unimpl("int3 @ 0x10a0625f");
L_10a06260:;
  /* 10a06260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06264 jne 0x10a06240 */
  if (!C.zf) goto L_10a06240;
L_10a06266:;
  /* 10a06266 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06269 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0626a call 0x10a071f0 */
  push32(0x10a0626fu); f_10a071f0();
  /* 10a0626f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06274 jne 0x10a06297 */
  if (!C.zf) goto L_10a06297;
  /* 10a06276 push 0x10a2c874 */
  push32((uint32_t)(0x10a2c874u));
  /* 10a0627b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0627d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10a06282 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06287 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a06289 call 0x10a04cb0 */
  push32(0x10a0628eu); f_10a04cb0();
  /* 10a0628e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06291 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06294 jne 0x10a06297 */
  if (!C.zf) goto L_10a06297;
  /* 10a06296 int3  */
  x86_unimpl("int3 @ 0x10a06296");
L_10a06297:;
  /* 10a06297 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a06299 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0629b jne 0x10a06266 */
  if (!C.zf) goto L_10a06266;
  /* 10a0629d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a062a0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a062a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a062a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a062a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a062ad jne 0x10a062b6 */
  if (!C.zf) goto L_10a062b6;
  /* 10a062af mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10a062b6:;
  /* 10a062b6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a062ba je 0x10a062fa */
  if (C.zf) goto L_10a062fa;
L_10a062bc:;
  /* 10a062bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a062bf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a062c6 jne 0x10a062d1 */
  if (!C.zf) goto L_10a062d1;
  /* 10a062c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a062cb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a062cf je 0x10a062f2 */
  if (C.zf) goto L_10a062f2;
L_10a062d1:;
  /* 10a062d1 push 0x10a2c82c */
  push32((uint32_t)(0x10a2c82cu));
  /* 10a062d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a062d8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10a062dd push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a062e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a062e4 call 0x10a04cb0 */
  push32(0x10a062e9u); f_10a04cb0();
  /* 10a062e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a062ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a062ef jne 0x10a062f2 */
  if (!C.zf) goto L_10a062f2;
  /* 10a062f1 int3  */
  x86_unimpl("int3 @ 0x10a062f1");
L_10a062f2:;
  /* 10a062f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a062f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a062f6 jne 0x10a062bc */
  if (!C.zf) goto L_10a062bc;
  /* 10a062f8 jmp 0x10a0635e */
  goto L_10a0635e;
L_10a062fa:;
  /* 10a062fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a062fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a06300 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a06305 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06308 jne 0x10a0631f */
  if (!C.zf) goto L_10a0631f;
  /* 10a0630a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0630d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a06313 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06316 jne 0x10a0631f */
  if (!C.zf) goto L_10a0631f;
  /* 10a06318 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10a0631f:;
  /* 10a0631f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06322 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a06325 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0632a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0632d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a06333 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06335 je 0x10a06358 */
  if (C.zf) goto L_10a06358;
  /* 10a06337 push 0x10a2c7f0 */
  push32((uint32_t)(0x10a2c7f0u));
  /* 10a0633c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0633e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10a06343 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06348 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0634a call 0x10a04cb0 */
  push32(0x10a0634fu); f_10a04cb0();
  /* 10a0634f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06352 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06355 jne 0x10a06358 */
  if (!C.zf) goto L_10a06358;
  /* 10a06357 int3  */
  x86_unimpl("int3 @ 0x10a06357");
L_10a06358:;
  /* 10a06358 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0635a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0635c jne 0x10a0631f */
  if (!C.zf) goto L_10a0631f;
L_10a0635e:;
  /* 10a0635e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06362 je 0x10a06389 */
  if (C.zf) goto L_10a06389;
  /* 10a06364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a06367 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0636a push eax */
  push32((uint32_t)(EAX));
  /* 10a0636b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0636e push ecx */
  push32((uint32_t)(ECX));
  /* 10a0636f call 0x10a09b70 */
  push32(0x10a06374u); f_10a09b70();
  /* 10a06374 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06377 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a0637a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0637e jne 0x10a06387 */
  if (!C.zf) goto L_10a06387;
  /* 10a06380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06382 jmp 0x10a065ca */
  goto L_10a065ca;
L_10a06387:;
  /* 10a06387 jmp 0x10a063ac */
  goto L_10a063ac;
L_10a06389:;
  /* 10a06389 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0638c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0638f push edx */
  push32((uint32_t)(EDX));
  /* 10a06390 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06393 push eax */
  push32((uint32_t)(EAX));
  /* 10a06394 call 0x10a09ac0 */
  push32(0x10a06399u); f_10a09ac0();
  /* 10a06399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0639c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a0639f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a063a3 jne 0x10a063ac */
  if (!C.zf) goto L_10a063ac;
  /* 10a063a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a063a7 jmp 0x10a065ca */
  goto L_10a065ca;
L_10a063ac:;
  /* 10a063ac mov ecx, dword ptr [0x10a2fa88] */
  ECX = (r32((uint32_t)(0x10a2fa88)));
  /* 10a063b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a063b5 mov dword ptr [0x10a2fa88], ecx */
  w32((uint32_t)(0x10a2fa88), (ECX));
  /* 10a063bb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a063bf jne 0x10a06417 */
  if (!C.zf) goto L_10a06417;
  /* 10a063c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a063c4 mov eax, dword ptr [0x10a31724] */
  EAX = (r32((uint32_t)(0x10a31724)));
  /* 10a063c9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a063cc mov dword ptr [0x10a31724], eax */
  w32((uint32_t)(0x10a31724), (EAX));
  /* 10a063d1 mov ecx, dword ptr [0x10a31724] */
  ECX = (r32((uint32_t)(0x10a31724)));
  /* 10a063d7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a063da mov dword ptr [0x10a31724], ecx */
  w32((uint32_t)(0x10a31724), (ECX));
  /* 10a063e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a063e3 mov eax, dword ptr [0x10a3172c] */
  EAX = (r32((uint32_t)(0x10a3172c)));
  /* 10a063e8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a063eb mov dword ptr [0x10a3172c], eax */
  w32((uint32_t)(0x10a3172c), (EAX));
  /* 10a063f0 mov ecx, dword ptr [0x10a3172c] */
  ECX = (r32((uint32_t)(0x10a3172c)));
  /* 10a063f6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a063f9 mov dword ptr [0x10a3172c], ecx */
  w32((uint32_t)(0x10a3172c), (ECX));
  /* 10a063ff mov edx, dword ptr [0x10a3172c] */
  EDX = (r32((uint32_t)(0x10a3172c)));
  /* 10a06405 cmp edx, dword ptr [0x10a31730] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a31730))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0640b jbe 0x10a06417 */
  if ((C.cf||C.zf)) goto L_10a06417;
  /* 10a0640d mov eax, dword ptr [0x10a3172c] */
  EAX = (r32((uint32_t)(0x10a3172c)));
  /* 10a06412 mov dword ptr [0x10a31730], eax */
  w32((uint32_t)(0x10a31730), (EAX));
L_10a06417:;
  /* 10a06417 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0641a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0641d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a06420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a06426 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06429 jbe 0x10a0644f */
  if ((C.cf||C.zf)) goto L_10a0644f;
  /* 10a0642b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0642e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a06431 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a06434 push edx */
  push32((uint32_t)(EDX));
  /* 10a06435 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06437 mov al, byte ptr [0x10a2fa92] */
  AL = (r8((uint32_t)(0x10a2fa92)));
  /* 10a0643c push eax */
  push32((uint32_t)(EAX));
  /* 10a0643d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06440 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06443 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06446 push edx */
  push32((uint32_t)(EDX));
  /* 10a06447 call 0x10a09960 */
  push32(0x10a0644cu); f_10a09960();
  /* 10a0644c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0644f:;
  /* 10a0644f push 4 */
  push32((uint32_t)(0x4u));
  /* 10a06451 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06453 mov al, byte ptr [0x10a2fa90] */
  AL = (r8((uint32_t)(0x10a2fa90)));
  /* 10a06458 push eax */
  push32((uint32_t)(EAX));
  /* 10a06459 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0645c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0645f push ecx */
  push32((uint32_t)(ECX));
  /* 10a06460 call 0x10a09960 */
  push32(0x10a06465u); f_10a09960();
  /* 10a06465 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06468 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0646c jne 0x10a06489 */
  if (!C.zf) goto L_10a06489;
  /* 10a0646e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06471 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a06474 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a06477 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0647a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0647d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10a06480 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06483 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a06486 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10a06489:;
  /* 10a06489 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0648c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0648f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10a06492:;
  /* 10a06492 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06496 jne 0x10a064c7 */
  if (!C.zf) goto L_10a064c7;
  /* 10a06498 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0649c jne 0x10a064a6 */
  if (!C.zf) goto L_10a064a6;
  /* 10a0649e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a064a1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a064a4 je 0x10a064c7 */
  if (C.zf) goto L_10a064c7;
L_10a064a6:;
  /* 10a064a6 push 0x10a2c7bc */
  push32((uint32_t)(0x10a2c7bcu));
  /* 10a064ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10a064ad push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10a064b2 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a064b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a064b9 call 0x10a04cb0 */
  push32(0x10a064beu); f_10a04cb0();
  /* 10a064be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a064c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a064c4 jne 0x10a064c7 */
  if (!C.zf) goto L_10a064c7;
  /* 10a064c6 int3  */
  x86_unimpl("int3 @ 0x10a064c6");
L_10a064c7:;
  /* 10a064c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a064c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a064cb jne 0x10a06492 */
  if (!C.zf) goto L_10a06492;
  /* 10a064cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a064d0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a064d3 je 0x10a064db */
  if (C.zf) goto L_10a064db;
  /* 10a064d5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a064d9 je 0x10a064e3 */
  if (C.zf) goto L_10a064e3;
L_10a064db:;
  /* 10a064db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a064de jmp 0x10a065ca */
  goto L_10a065ca;
L_10a064e3:;
  /* 10a064e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a064e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a064e9 je 0x10a064fb */
  if (C.zf) goto L_10a064fb;
  /* 10a064eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a064ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a064f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a064f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a064f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a064f9 jmp 0x10a06537 */
  goto L_10a06537;
L_10a064fb:;
  /* 10a064fb mov eax, dword ptr [0x10a31720] */
  EAX = (r32((uint32_t)(0x10a31720)));
  /* 10a06500 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06503 je 0x10a06526 */
  if (C.zf) goto L_10a06526;
  /* 10a06505 push 0x10a2c7a0 */
  push32((uint32_t)(0x10a2c7a0u));
  /* 10a0650a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0650c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10a06511 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06516 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a06518 call 0x10a04cb0 */
  push32(0x10a0651du); f_10a04cb0();
  /* 10a0651d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06520 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06523 jne 0x10a06526 */
  if (!C.zf) goto L_10a06526;
  /* 10a06525 int3  */
  x86_unimpl("int3 @ 0x10a06525");
L_10a06526:;
  /* 10a06526 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06528 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0652a jne 0x10a064fb */
  if (!C.zf) goto L_10a064fb;
  /* 10a0652c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0652f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a06532 mov dword ptr [0x10a31720], eax */
  w32((uint32_t)(0x10a31720), (EAX));
L_10a06537:;
  /* 10a06537 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0653a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0653e je 0x10a0654f */
  if (C.zf) goto L_10a0654f;
  /* 10a06540 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06543 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a06546 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06549 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0654b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a0654d jmp 0x10a0658a */
  goto L_10a0658a;
L_10a0654f:;
  /* 10a0654f mov eax, dword ptr [0x10a31728] */
  EAX = (r32((uint32_t)(0x10a31728)));
  /* 10a06554 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06557 je 0x10a0657a */
  if (C.zf) goto L_10a0657a;
  /* 10a06559 push 0x10a2c784 */
  push32((uint32_t)(0x10a2c784u));
  /* 10a0655e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06560 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10a06565 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a0656a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0656c call 0x10a04cb0 */
  push32(0x10a06571u); f_10a04cb0();
  /* 10a06571 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06574 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06577 jne 0x10a0657a */
  if (!C.zf) goto L_10a0657a;
  /* 10a06579 int3  */
  x86_unimpl("int3 @ 0x10a06579");
L_10a0657a:;
  /* 10a0657a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0657c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0657e jne 0x10a0654f */
  if (!C.zf) goto L_10a0654f;
  /* 10a06580 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06583 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a06585 mov dword ptr [0x10a31728], eax */
  w32((uint32_t)(0x10a31728), (EAX));
L_10a0658a:;
  /* 10a0658a cmp dword ptr [0x10a31728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06591 je 0x10a065a1 */
  if (C.zf) goto L_10a065a1;
  /* 10a06593 mov ecx, dword ptr [0x10a31728] */
  ECX = (r32((uint32_t)(0x10a31728)));
  /* 10a06599 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0659c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a0659f jmp 0x10a065a9 */
  goto L_10a065a9;
L_10a065a1:;
  /* 10a065a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a065a4 mov dword ptr [0x10a31720], eax */
  w32((uint32_t)(0x10a31720), (EAX));
L_10a065a9:;
  /* 10a065a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a065ac mov edx, dword ptr [0x10a31728] */
  EDX = (r32((uint32_t)(0x10a31728)));
  /* 10a065b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a065b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a065b7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a065be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a065c1 mov dword ptr [0x10a31728], ecx */
  w32((uint32_t)(0x10a31728), (ECX));
  /* 10a065c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a065ca:;
  /* 10a065ca pop edi */
  EDI = (pop32());
  /* 10a065cb pop esi */
  ESI = (pop32());
  /* 10a065cc pop ebx */
  EBX = (pop32());
  /* 10a065cd mov esp, ebp */
  ESP = (EBP);
  /* 10a065cf pop ebp */
  EBP = (pop32());
  /* 10a065d0 ret  */
  ESPCHK(0x10a060c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x10a065e0 (27 bytes, 13 insns) */
void f_10a065e0(void) {
  FTRACE(0x10a065e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a065e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a065e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a065e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a065e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a065e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a065e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a065ec push eax */
  push32((uint32_t)(EAX));
  /* 10a065ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a065f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a065f1 call 0x10a06600 */
  push32(0x10a065f6u); f_10a06600();
  /* 10a065f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a065f9 pop ebp */
  EBP = (pop32());
  /* 10a065fa ret  */
  ESPCHK(0x10a065e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x10a06600 (64 bytes, 27 insns) */
void f_10a06600(void) {
  FTRACE(0x10a06600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06600 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06601 mov ebp, esp */
  EBP = (ESP);
  /* 10a06603 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06604 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06606 call 0x10a095f0 */
  push32(0x10a0660bu); f_10a095f0();
  /* 10a0660b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0660e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06610 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a06613 push eax */
  push32((uint32_t)(EAX));
  /* 10a06614 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a06617 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06618 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0661b push edx */
  push32((uint32_t)(EDX));
  /* 10a0661c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0661f push eax */
  push32((uint32_t)(EAX));
  /* 10a06620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06623 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06624 call 0x10a060c0 */
  push32(0x10a06629u); f_10a060c0();
  /* 10a06629 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0662c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0662f push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06631 call 0x10a09690 */
  push32(0x10a06636u); f_10a09690();
  /* 10a06636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0663c mov esp, ebp */
  ESP = (EBP);
  /* 10a0663e pop ebp */
  EBP = (pop32());
  /* 10a0663f ret  */
  ESPCHK(0x10a06600u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x10a06640 (19 bytes, 9 insns) */
void f_10a06640(void) {
  FTRACE(0x10a06640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06640 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06641 mov ebp, esp */
  EBP = (ESP);
  /* 10a06643 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a06645 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06648 push eax */
  push32((uint32_t)(EAX));
  /* 10a06649 call 0x10a06680 */
  push32(0x10a0664eu); f_10a06680();
  /* 10a0664e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06651 pop ebp */
  EBP = (pop32());
  /* 10a06652 ret  */
  ESPCHK(0x10a06640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006660 @ 0x10a06660 (19 bytes, 9 insns) */
void f_10a06660(void) {
  FTRACE(0x10a06660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06660 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06661 mov ebp, esp */
  EBP = (ESP);
  /* 10a06663 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a06665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06668 push eax */
  push32((uint32_t)(EAX));
  /* 10a06669 call 0x10a066b0 */
  push32(0x10a0666eu); f_10a066b0();
  /* 10a0666e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06671 pop ebp */
  EBP = (pop32());
  /* 10a06672 ret  */
  ESPCHK(0x10a06660u, _esp0);
  ESP += 4; return;
}

/* FUN_10006680 @ 0x10a06680 (41 bytes, 16 insns) */
void f_10a06680(void) {
  FTRACE(0x10a06680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06680 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06681 mov ebp, esp */
  EBP = (ESP);
  /* 10a06683 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06685 call 0x10a095f0 */
  push32(0x10a0668au); f_10a095f0();
  /* 10a0668a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0668d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a06690 push eax */
  push32((uint32_t)(EAX));
  /* 10a06691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06694 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06695 call 0x10a066b0 */
  push32(0x10a0669au); f_10a066b0();
  /* 10a0669a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0669d push 9 */
  push32((uint32_t)(0x9u));
  /* 10a0669f call 0x10a09690 */
  push32(0x10a066a4u); f_10a09690();
  /* 10a066a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a066a7 pop ebp */
  EBP = (pop32());
  /* 10a066a8 ret  */
  ESPCHK(0x10a06680u, _esp0);
  ESP += 4; return;
}

/* FUN_100066b0 @ 0x10a066b0 (1004 bytes, 342 insns) */
void f_10a066b0(void) {
  FTRACE(0x10a066b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a066b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a066b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a066b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a066b4 push ebx */
  push32((uint32_t)(EBX));
  /* 10a066b5 push esi */
  push32((uint32_t)(ESI));
  /* 10a066b6 push edi */
  push32((uint32_t)(EDI));
  /* 10a066b7 mov eax, dword ptr [0x10a2fa84] */
  EAX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a066bc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a066bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a066c1 je 0x10a066f3 */
  if (C.zf) goto L_10a066f3;
L_10a066c3:;
  /* 10a066c3 call 0x10a06d90 */
  push32(0x10a066c8u); f_10a06d90();
  /* 10a066c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a066ca jne 0x10a066ed */
  if (!C.zf) goto L_10a066ed;
  /* 10a066cc push 0x10a2c770 */
  push32((uint32_t)(0x10a2c770u));
  /* 10a066d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a066d3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10a066d8 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a066dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a066df call 0x10a04cb0 */
  push32(0x10a066e4u); f_10a04cb0();
  /* 10a066e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a066e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a066ea jne 0x10a066ed */
  if (!C.zf) goto L_10a066ed;
  /* 10a066ec int3  */
  x86_unimpl("int3 @ 0x10a066ec");
L_10a066ed:;
  /* 10a066ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a066ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a066f1 jne 0x10a066c3 */
  if (!C.zf) goto L_10a066c3;
L_10a066f3:;
  /* 10a066f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a066f7 jne 0x10a066fe */
  if (!C.zf) goto L_10a066fe;
  /* 10a066f9 jmp 0x10a06a95 */
  goto L_10a06a95;
L_10a066fe:;
  /* 10a066fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06700 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06702 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06704 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a06707 push edx */
  push32((uint32_t)(EDX));
  /* 10a06708 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0670a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0670d push eax */
  push32((uint32_t)(EAX));
  /* 10a0670e push 3 */
  push32((uint32_t)(0x3u));
  /* 10a06710 call dword ptr [0x10a2fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a2fc90))), 0x10a06716u);
  /* 10a06716 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0671b jne 0x10a06748 */
  if (!C.zf) goto L_10a06748;
L_10a0671d:;
  /* 10a0671d push 0x10a2ca34 */
  push32((uint32_t)(0x10a2ca34u));
  /* 10a06722 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a06727 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06729 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0672b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0672d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0672f call 0x10a04cb0 */
  push32(0x10a06734u); f_10a04cb0();
  /* 10a06734 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06737 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0673a jne 0x10a0673d */
  if (!C.zf) goto L_10a0673d;
  /* 10a0673c int3  */
  x86_unimpl("int3 @ 0x10a0673c");
L_10a0673d:;
  /* 10a0673d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0673f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a06741 jne 0x10a0671d */
  if (!C.zf) goto L_10a0671d;
  /* 10a06743 jmp 0x10a06a95 */
  goto L_10a06a95;
L_10a06748:;
  /* 10a06748 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0674b push edx */
  push32((uint32_t)(EDX));
  /* 10a0674c call 0x10a071f0 */
  push32(0x10a06751u); f_10a071f0();
  /* 10a06751 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06754 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06756 jne 0x10a06779 */
  if (!C.zf) goto L_10a06779;
  /* 10a06758 push 0x10a2c874 */
  push32((uint32_t)(0x10a2c874u));
  /* 10a0675d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0675f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10a06764 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06769 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0676b call 0x10a04cb0 */
  push32(0x10a06770u); f_10a04cb0();
  /* 10a06770 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06773 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06776 jne 0x10a06779 */
  if (!C.zf) goto L_10a06779;
  /* 10a06778 int3  */
  x86_unimpl("int3 @ 0x10a06778");
L_10a06779:;
  /* 10a06779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0677b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0677d jne 0x10a06748 */
  if (!C.zf) goto L_10a06748;
  /* 10a0677f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06782 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a06785 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a06788:;
  /* 10a06788 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0678b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a0678e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a06793 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06796 je 0x10a067db */
  if (C.zf) goto L_10a067db;
  /* 10a06798 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0679b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0679f je 0x10a067db */
  if (C.zf) goto L_10a067db;
  /* 10a067a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a067a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a067a7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a067ac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a067af je 0x10a067db */
  if (C.zf) goto L_10a067db;
  /* 10a067b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a067b4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a067b8 je 0x10a067db */
  if (C.zf) goto L_10a067db;
  /* 10a067ba push 0x10a2ca0c */
  push32((uint32_t)(0x10a2ca0cu));
  /* 10a067bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a067c1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10a067c6 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a067cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a067cd call 0x10a04cb0 */
  push32(0x10a067d2u); f_10a04cb0();
  /* 10a067d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a067d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a067d8 jne 0x10a067db */
  if (!C.zf) goto L_10a067db;
  /* 10a067da int3  */
  x86_unimpl("int3 @ 0x10a067da");
L_10a067db:;
  /* 10a067db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a067dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a067df jne 0x10a06788 */
  if (!C.zf) goto L_10a06788;
  /* 10a067e1 mov eax, dword ptr [0x10a2fa84] */
  EAX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a067e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a067e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a067eb jne 0x10a068b6 */
  if (!C.zf) goto L_10a068b6;
  /* 10a067f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a067f3 mov cl, byte ptr [0x10a2fa90] */
  CL = (r8((uint32_t)(0x10a2fa90)));
  /* 10a067f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a067fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a067fd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06800 push edx */
  push32((uint32_t)(EDX));
  /* 10a06801 call 0x10a06d00 */
  push32(0x10a06806u); f_10a06d00();
  /* 10a06806 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0680b jne 0x10a06850 */
  if (!C.zf) goto L_10a06850;
L_10a0680d:;
  /* 10a0680d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06810 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06813 push eax */
  push32((uint32_t)(EAX));
  /* 10a06814 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06817 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a0681a push edx */
  push32((uint32_t)(EDX));
  /* 10a0681b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0681e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a06821 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a06827 mov edx, dword ptr [ecx*4 + 0x10a2fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a2fa94)));
  /* 10a0682e push edx */
  push32((uint32_t)(EDX));
  /* 10a0682f push 0x10a2c9e0 */
  push32((uint32_t)(0x10a2c9e0u));
  /* 10a06834 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06836 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06838 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0683a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0683c call 0x10a04cb0 */
  push32(0x10a06841u); f_10a04cb0();
  /* 10a06841 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06844 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06847 jne 0x10a0684a */
  if (!C.zf) goto L_10a0684a;
  /* 10a06849 int3  */
  x86_unimpl("int3 @ 0x10a06849");
L_10a0684a:;
  /* 10a0684a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0684c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0684e jne 0x10a0680d */
  if (!C.zf) goto L_10a0680d;
L_10a06850:;
  /* 10a06850 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a06852 mov cl, byte ptr [0x10a2fa90] */
  CL = (r8((uint32_t)(0x10a2fa90)));
  /* 10a06858 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06859 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0685c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a0685f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06862 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10a06866 push edx */
  push32((uint32_t)(EDX));
  /* 10a06867 call 0x10a06d00 */
  push32(0x10a0686cu); f_10a06d00();
  /* 10a0686c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0686f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06871 jne 0x10a068b6 */
  if (!C.zf) goto L_10a068b6;
L_10a06873:;
  /* 10a06873 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06876 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06879 push eax */
  push32((uint32_t)(EAX));
  /* 10a0687a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0687d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a06880 push edx */
  push32((uint32_t)(EDX));
  /* 10a06881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06884 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a06887 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0688d mov edx, dword ptr [ecx*4 + 0x10a2fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a2fa94)));
  /* 10a06894 push edx */
  push32((uint32_t)(EDX));
  /* 10a06895 push 0x10a2c9b4 */
  push32((uint32_t)(0x10a2c9b4u));
  /* 10a0689a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0689c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0689e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a068a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a068a2 call 0x10a04cb0 */
  push32(0x10a068a7u); f_10a04cb0();
  /* 10a068a7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a068aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a068ad jne 0x10a068b0 */
  if (!C.zf) goto L_10a068b0;
  /* 10a068af int3  */
  x86_unimpl("int3 @ 0x10a068af");
L_10a068b0:;
  /* 10a068b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a068b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a068b4 jne 0x10a06873 */
  if (!C.zf) goto L_10a06873;
L_10a068b6:;
  /* 10a068b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a068b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a068bd jne 0x10a0692b */
  if (!C.zf) goto L_10a0692b;
L_10a068bf:;
  /* 10a068bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a068c2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a068c9 jne 0x10a068d4 */
  if (!C.zf) goto L_10a068d4;
  /* 10a068cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a068ce cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a068d2 je 0x10a068f5 */
  if (C.zf) goto L_10a068f5;
L_10a068d4:;
  /* 10a068d4 push 0x10a2c974 */
  push32((uint32_t)(0x10a2c974u));
  /* 10a068d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a068db push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10a068e0 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a068e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a068e7 call 0x10a04cb0 */
  push32(0x10a068ecu); f_10a04cb0();
  /* 10a068ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a068ef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a068f2 jne 0x10a068f5 */
  if (!C.zf) goto L_10a068f5;
  /* 10a068f4 int3  */
  x86_unimpl("int3 @ 0x10a068f4");
L_10a068f5:;
  /* 10a068f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a068f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a068f9 jne 0x10a068bf */
  if (!C.zf) goto L_10a068bf;
  /* 10a068fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a068fe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a06901 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06904 push eax */
  push32((uint32_t)(EAX));
  /* 10a06905 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06907 mov cl, byte ptr [0x10a2fa91] */
  CL = (r8((uint32_t)(0x10a2fa91)));
  /* 10a0690d push ecx */
  push32((uint32_t)(ECX));
  /* 10a0690e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06911 push edx */
  push32((uint32_t)(EDX));
  /* 10a06912 call 0x10a09960 */
  push32(0x10a06917u); f_10a09960();
  /* 10a06917 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0691a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0691d push eax */
  push32((uint32_t)(EAX));
  /* 10a0691e call 0x10a09d60 */
  push32(0x10a06923u); f_10a09d60();
  /* 10a06923 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06926 jmp 0x10a06a95 */
  goto L_10a06a95;
L_10a0692b:;
  /* 10a0692b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0692e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06932 jne 0x10a06941 */
  if (!C.zf) goto L_10a06941;
  /* 10a06934 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06938 jne 0x10a06941 */
  if (!C.zf) goto L_10a06941;
  /* 10a0693a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10a06941:;
  /* 10a06941 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06944 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a06947 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0694a je 0x10a0696d */
  if (C.zf) goto L_10a0696d;
  /* 10a0694c push 0x10a2c954 */
  push32((uint32_t)(0x10a2c954u));
  /* 10a06951 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06953 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10a06958 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a0695d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0695f call 0x10a04cb0 */
  push32(0x10a06964u); f_10a04cb0();
  /* 10a06964 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06967 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0696a jne 0x10a0696d */
  if (!C.zf) goto L_10a0696d;
  /* 10a0696c int3  */
  x86_unimpl("int3 @ 0x10a0696c");
L_10a0696d:;
  /* 10a0696d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0696f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a06971 jne 0x10a06941 */
  if (!C.zf) goto L_10a06941;
  /* 10a06973 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06976 mov eax, dword ptr [0x10a3172c] */
  EAX = (r32((uint32_t)(0x10a3172c)));
  /* 10a0697b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0697e mov dword ptr [0x10a3172c], eax */
  w32((uint32_t)(0x10a3172c), (EAX));
  /* 10a06983 mov ecx, dword ptr [0x10a2fa84] */
  ECX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a06989 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0698c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0698e jne 0x10a06a6c */
  if (!C.zf) goto L_10a06a6c;
  /* 10a06994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06997 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0699a je 0x10a069ac */
  if (C.zf) goto L_10a069ac;
  /* 10a0699c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0699f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a069a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a069a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a069a7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a069aa jmp 0x10a069ea */
  goto L_10a069ea;
L_10a069ac:;
  /* 10a069ac mov ecx, dword ptr [0x10a31720] */
  ECX = (r32((uint32_t)(0x10a31720)));
  /* 10a069b2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a069b5 je 0x10a069d8 */
  if (C.zf) goto L_10a069d8;
  /* 10a069b7 push 0x10a2c93c */
  push32((uint32_t)(0x10a2c93cu));
  /* 10a069bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a069be push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10a069c3 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a069c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a069ca call 0x10a04cb0 */
  push32(0x10a069cfu); f_10a04cb0();
  /* 10a069cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a069d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a069d5 jne 0x10a069d8 */
  if (!C.zf) goto L_10a069d8;
  /* 10a069d7 int3  */
  x86_unimpl("int3 @ 0x10a069d7");
L_10a069d8:;
  /* 10a069d8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a069da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a069dc jne 0x10a069ac */
  if (!C.zf) goto L_10a069ac;
  /* 10a069de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a069e1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a069e4 mov dword ptr [0x10a31720], ecx */
  w32((uint32_t)(0x10a31720), (ECX));
L_10a069ea:;
  /* 10a069ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a069ed cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a069f1 je 0x10a06a02 */
  if (C.zf) goto L_10a06a02;
  /* 10a069f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a069f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a069f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a069fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a069fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a06a00 jmp 0x10a06a3f */
  goto L_10a06a3f;
L_10a06a02:;
  /* 10a06a02 mov ecx, dword ptr [0x10a31728] */
  ECX = (r32((uint32_t)(0x10a31728)));
  /* 10a06a08 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06a0b je 0x10a06a2e */
  if (C.zf) goto L_10a06a2e;
  /* 10a06a0d push 0x10a2c924 */
  push32((uint32_t)(0x10a2c924u));
  /* 10a06a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06a14 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10a06a19 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06a1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a06a20 call 0x10a04cb0 */
  push32(0x10a06a25u); f_10a04cb0();
  /* 10a06a25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06a28 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06a2b jne 0x10a06a2e */
  if (!C.zf) goto L_10a06a2e;
  /* 10a06a2d int3  */
  x86_unimpl("int3 @ 0x10a06a2d");
L_10a06a2e:;
  /* 10a06a2e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a06a30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a06a32 jne 0x10a06a02 */
  if (!C.zf) goto L_10a06a02;
  /* 10a06a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06a37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a06a39 mov dword ptr [0x10a31728], ecx */
  w32((uint32_t)(0x10a31728), (ECX));
L_10a06a3f:;
  /* 10a06a3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06a42 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a06a45 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06a48 push eax */
  push32((uint32_t)(EAX));
  /* 10a06a49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06a4b mov cl, byte ptr [0x10a2fa91] */
  CL = (r8((uint32_t)(0x10a2fa91)));
  /* 10a06a51 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06a52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06a55 push edx */
  push32((uint32_t)(EDX));
  /* 10a06a56 call 0x10a09960 */
  push32(0x10a06a5bu); f_10a09960();
  /* 10a06a5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06a5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06a61 push eax */
  push32((uint32_t)(EAX));
  /* 10a06a62 call 0x10a09d60 */
  push32(0x10a06a67u); f_10a09d60();
  /* 10a06a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06a6a jmp 0x10a06a95 */
  goto L_10a06a95;
L_10a06a6c:;
  /* 10a06a6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06a6f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10a06a76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06a79 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a06a7c push eax */
  push32((uint32_t)(EAX));
  /* 10a06a7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06a7f mov cl, byte ptr [0x10a2fa91] */
  CL = (r8((uint32_t)(0x10a2fa91)));
  /* 10a06a85 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06a86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06a89 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06a8c push edx */
  push32((uint32_t)(EDX));
  /* 10a06a8d call 0x10a09960 */
  push32(0x10a06a92u); f_10a09960();
  /* 10a06a92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a06a95:;
  /* 10a06a95 pop edi */
  EDI = (pop32());
  /* 10a06a96 pop esi */
  ESI = (pop32());
  /* 10a06a97 pop ebx */
  EBX = (pop32());
  /* 10a06a98 mov esp, ebp */
  ESP = (EBP);
  /* 10a06a9a pop ebp */
  EBP = (pop32());
  /* 10a06a9b ret  */
  ESPCHK(0x10a066b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006aa0 @ 0x10a06aa0 (19 bytes, 9 insns) */
void f_10a06aa0(void) {
  FTRACE(0x10a06aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10a06aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a06aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10a06aa9 call 0x10a06ac0 */
  push32(0x10a06aaeu); f_10a06ac0();
  /* 10a06aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06ab1 pop ebp */
  EBP = (pop32());
  /* 10a06ab2 ret  */
  ESPCHK(0x10a06aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x10a06ac0 (342 bytes, 119 insns) */
void f_10a06ac0(void) {
  FTRACE(0x10a06ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10a06ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a06ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a06ac7 push esi */
  push32((uint32_t)(ESI));
  /* 10a06ac8 push edi */
  push32((uint32_t)(EDI));
  /* 10a06ac9 mov eax, dword ptr [0x10a2fa84] */
  EAX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a06ace and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a06ad1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06ad3 je 0x10a06b05 */
  if (C.zf) goto L_10a06b05;
L_10a06ad5:;
  /* 10a06ad5 call 0x10a06d90 */
  push32(0x10a06adau); f_10a06d90();
  /* 10a06ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06adc jne 0x10a06aff */
  if (!C.zf) goto L_10a06aff;
  /* 10a06ade push 0x10a2c770 */
  push32((uint32_t)(0x10a2c770u));
  /* 10a06ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06ae5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10a06aea push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06aef push 2 */
  push32((uint32_t)(0x2u));
  /* 10a06af1 call 0x10a04cb0 */
  push32(0x10a06af6u); f_10a04cb0();
  /* 10a06af6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06af9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06afc jne 0x10a06aff */
  if (!C.zf) goto L_10a06aff;
  /* 10a06afe int3  */
  x86_unimpl("int3 @ 0x10a06afe");
L_10a06aff:;
  /* 10a06aff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06b01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a06b03 jne 0x10a06ad5 */
  if (!C.zf) goto L_10a06ad5;
L_10a06b05:;
  /* 10a06b05 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06b07 call 0x10a095f0 */
  push32(0x10a06b0cu); f_10a095f0();
  /* 10a06b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a06b0f:;
  /* 10a06b0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06b12 push edx */
  push32((uint32_t)(EDX));
  /* 10a06b13 call 0x10a071f0 */
  push32(0x10a06b18u); f_10a071f0();
  /* 10a06b18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06b1d jne 0x10a06b40 */
  if (!C.zf) goto L_10a06b40;
  /* 10a06b1f push 0x10a2c874 */
  push32((uint32_t)(0x10a2c874u));
  /* 10a06b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06b26 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10a06b2b push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06b30 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a06b32 call 0x10a04cb0 */
  push32(0x10a06b37u); f_10a04cb0();
  /* 10a06b37 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06b3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06b3d jne 0x10a06b40 */
  if (!C.zf) goto L_10a06b40;
  /* 10a06b3f int3  */
  x86_unimpl("int3 @ 0x10a06b3f");
L_10a06b40:;
  /* 10a06b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06b44 jne 0x10a06b0f */
  if (!C.zf) goto L_10a06b0f;
  /* 10a06b46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06b49 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a06b4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a06b4f:;
  /* 10a06b4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06b52 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a06b55 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a06b5a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06b5d je 0x10a06ba2 */
  if (C.zf) goto L_10a06ba2;
  /* 10a06b5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06b62 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06b66 je 0x10a06ba2 */
  if (C.zf) goto L_10a06ba2;
  /* 10a06b68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06b6b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a06b6e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a06b73 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06b76 je 0x10a06ba2 */
  if (C.zf) goto L_10a06ba2;
  /* 10a06b78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06b7b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06b7f je 0x10a06ba2 */
  if (C.zf) goto L_10a06ba2;
  /* 10a06b81 push 0x10a2ca0c */
  push32((uint32_t)(0x10a2ca0cu));
  /* 10a06b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06b88 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10a06b8d push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06b92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a06b94 call 0x10a04cb0 */
  push32(0x10a06b99u); f_10a04cb0();
  /* 10a06b99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06b9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06b9f jne 0x10a06ba2 */
  if (!C.zf) goto L_10a06ba2;
  /* 10a06ba1 int3  */
  x86_unimpl("int3 @ 0x10a06ba1");
L_10a06ba2:;
  /* 10a06ba2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a06ba4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a06ba6 jne 0x10a06b4f */
  if (!C.zf) goto L_10a06b4f;
  /* 10a06ba8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06bab cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06baf jne 0x10a06bbe */
  if (!C.zf) goto L_10a06bbe;
  /* 10a06bb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06bb5 jne 0x10a06bbe */
  if (!C.zf) goto L_10a06bbe;
  /* 10a06bb7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10a06bbe:;
  /* 10a06bbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06bc1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06bc5 je 0x10a06bf9 */
  if (C.zf) goto L_10a06bf9;
L_10a06bc7:;
  /* 10a06bc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06bca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a06bcd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06bd0 je 0x10a06bf3 */
  if (C.zf) goto L_10a06bf3;
  /* 10a06bd2 push 0x10a2c954 */
  push32((uint32_t)(0x10a2c954u));
  /* 10a06bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06bd9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10a06bde push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06be3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a06be5 call 0x10a04cb0 */
  push32(0x10a06beau); f_10a04cb0();
  /* 10a06bea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06bed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06bf0 jne 0x10a06bf3 */
  if (!C.zf) goto L_10a06bf3;
  /* 10a06bf2 int3  */
  x86_unimpl("int3 @ 0x10a06bf2");
L_10a06bf3:;
  /* 10a06bf3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06bf5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a06bf7 jne 0x10a06bc7 */
  if (!C.zf) goto L_10a06bc7;
L_10a06bf9:;
  /* 10a06bf9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06bfc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a06bff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a06c02 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06c04 call 0x10a09690 */
  push32(0x10a06c09u); f_10a09690();
  /* 10a06c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06c0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06c0f pop edi */
  EDI = (pop32());
  /* 10a06c10 pop esi */
  ESI = (pop32());
  /* 10a06c11 pop ebx */
  EBX = (pop32());
  /* 10a06c12 mov esp, ebp */
  ESP = (EBP);
  /* 10a06c14 pop ebp */
  EBP = (pop32());
  /* 10a06c15 ret  */
  ESPCHK(0x10a06ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c20 @ 0x10a06c20 (28 bytes, 11 insns) */
void f_10a06c20(void) {
  FTRACE(0x10a06c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06c21 mov ebp, esp */
  EBP = (ESP);
  /* 10a06c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06c24 mov eax, dword ptr [0x10a2fa8c] */
  EAX = (r32((uint32_t)(0x10a2fa8c)));
  /* 10a06c29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a06c2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06c2f mov dword ptr [0x10a2fa8c], ecx */
  w32((uint32_t)(0x10a2fa8c), (ECX));
  /* 10a06c35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06c38 mov esp, ebp */
  ESP = (EBP);
  /* 10a06c3a pop ebp */
  EBP = (pop32());
  /* 10a06c3b ret  */
  ESPCHK(0x10a06c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c40 @ 0x10a06c40 (157 bytes, 59 insns) */
void f_10a06c40(void) {
  FTRACE(0x10a06c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06c41 mov ebp, esp */
  EBP = (ESP);
  /* 10a06c43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06c44 push ebx */
  push32((uint32_t)(EBX));
  /* 10a06c45 push esi */
  push32((uint32_t)(ESI));
  /* 10a06c46 push edi */
  push32((uint32_t)(EDI));
  /* 10a06c47 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06c49 call 0x10a095f0 */
  push32(0x10a06c4eu); f_10a095f0();
  /* 10a06c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06c51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06c54 push eax */
  push32((uint32_t)(EAX));
  /* 10a06c55 call 0x10a071f0 */
  push32(0x10a06c5au); f_10a071f0();
  /* 10a06c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06c5f je 0x10a06ccc */
  if (C.zf) goto L_10a06ccc;
  /* 10a06c61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06c64 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a06c67 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a06c6a:;
  /* 10a06c6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06c6d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a06c70 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a06c75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06c78 je 0x10a06cbd */
  if (C.zf) goto L_10a06cbd;
  /* 10a06c7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06c7d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06c81 je 0x10a06cbd */
  if (C.zf) goto L_10a06cbd;
  /* 10a06c83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06c86 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a06c89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a06c8e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06c91 je 0x10a06cbd */
  if (C.zf) goto L_10a06cbd;
  /* 10a06c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06c96 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06c9a je 0x10a06cbd */
  if (C.zf) goto L_10a06cbd;
  /* 10a06c9c push 0x10a2ca0c */
  push32((uint32_t)(0x10a2ca0cu));
  /* 10a06ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06ca3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10a06ca8 push 0x10a2c764 */
  push32((uint32_t)(0x10a2c764u));
  /* 10a06cad push 2 */
  push32((uint32_t)(0x2u));
  /* 10a06caf call 0x10a04cb0 */
  push32(0x10a06cb4u); f_10a04cb0();
  /* 10a06cb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06cb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06cba jne 0x10a06cbd */
  if (!C.zf) goto L_10a06cbd;
  /* 10a06cbc int3  */
  x86_unimpl("int3 @ 0x10a06cbc");
L_10a06cbd:;
  /* 10a06cbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a06cbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a06cc1 jne 0x10a06c6a */
  if (!C.zf) goto L_10a06c6a;
  /* 10a06cc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06cc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a06cc9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10a06ccc:;
  /* 10a06ccc push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06cce call 0x10a09690 */
  push32(0x10a06cd3u); f_10a09690();
  /* 10a06cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06cd6 pop edi */
  EDI = (pop32());
  /* 10a06cd7 pop esi */
  ESI = (pop32());
  /* 10a06cd8 pop ebx */
  EBX = (pop32());
  /* 10a06cd9 mov esp, ebp */
  ESP = (EBP);
  /* 10a06cdb pop ebp */
  EBP = (pop32());
  /* 10a06cdc ret  */
  ESPCHK(0x10a06c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x10a06ce0 (28 bytes, 11 insns) */
void f_10a06ce0(void) {
  FTRACE(0x10a06ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10a06ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06ce4 mov eax, dword ptr [0x10a2fc90] */
  EAX = (r32((uint32_t)(0x10a2fc90)));
  /* 10a06ce9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a06cec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06cef mov dword ptr [0x10a2fc90], ecx */
  w32((uint32_t)(0x10a2fc90), (ECX));
  /* 10a06cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06cf8 mov esp, ebp */
  ESP = (EBP);
  /* 10a06cfa pop ebp */
  EBP = (pop32());
  /* 10a06cfb ret  */
  ESPCHK(0x10a06ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d00 @ 0x10a06d00 (136 bytes, 55 insns) */
void f_10a06d00(void) {
  FTRACE(0x10a06d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06d01 mov ebp, esp */
  EBP = (ESP);
  /* 10a06d03 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06d04 push ebx */
  push32((uint32_t)(EBX));
  /* 10a06d05 push esi */
  push32((uint32_t)(ESI));
  /* 10a06d06 push edi */
  push32((uint32_t)(EDI));
  /* 10a06d07 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10a06d0e:;
  /* 10a06d0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a06d11 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a06d14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a06d17 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a06d1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06d1c je 0x10a06d7e */
  if (C.zf) goto L_10a06d7e;
  /* 10a06d1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06d21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06d23 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a06d25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a06d28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a06d2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06d31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06d34 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a06d37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06d39 je 0x10a06d7c */
  if (C.zf) goto L_10a06d7c;
L_10a06d3b:;
  /* 10a06d3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a06d3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a06d43 push eax */
  push32((uint32_t)(EAX));
  /* 10a06d44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06d47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a06d49 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10a06d4c push edx */
  push32((uint32_t)(EDX));
  /* 10a06d4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a06d50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a06d53 push eax */
  push32((uint32_t)(EAX));
  /* 10a06d54 push 0x10a2ca50 */
  push32((uint32_t)(0x10a2ca50u));
  /* 10a06d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06d61 call 0x10a04cb0 */
  push32(0x10a06d66u); f_10a04cb0();
  /* 10a06d66 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06d69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06d6c jne 0x10a06d6f */
  if (!C.zf) goto L_10a06d6f;
  /* 10a06d6e int3  */
  x86_unimpl("int3 @ 0x10a06d6e");
L_10a06d6f:;
  /* 10a06d6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06d71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a06d73 jne 0x10a06d3b */
  if (!C.zf) goto L_10a06d3b;
  /* 10a06d75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a06d7c:;
  /* 10a06d7c jmp 0x10a06d0e */
  goto L_10a06d0e;
L_10a06d7e:;
  /* 10a06d7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a06d81 pop edi */
  EDI = (pop32());
  /* 10a06d82 pop esi */
  ESI = (pop32());
  /* 10a06d83 pop ebx */
  EBX = (pop32());
  /* 10a06d84 mov esp, ebp */
  ESP = (EBP);
  /* 10a06d86 pop ebp */
  EBP = (pop32());
  /* 10a06d87 ret  */
  ESPCHK(0x10a06d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d90 @ 0x10a06d90 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10a06d90(void) {
  FTRACE(0x10a06d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a06d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a06d91 mov ebp, esp */
  EBP = (ESP);
  /* 10a06d93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a06d96 push ebx */
  push32((uint32_t)(EBX));
  /* 10a06d97 push esi */
  push32((uint32_t)(ESI));
  /* 10a06d98 push edi */
  push32((uint32_t)(EDI));
  /* 10a06d99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a06da0 mov eax, dword ptr [0x10a2fa84] */
  EAX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a06da5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a06da8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06daa jne 0x10a06db6 */
  if (!C.zf) goto L_10a06db6;
  /* 10a06dac mov eax, 1 */
  EAX = (0x1u);
  /* 10a06db1 jmp 0x10a070e8 */
  goto L_10a070e8;
L_10a06db6:;
  /* 10a06db6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06db8 call 0x10a095f0 */
  push32(0x10a06dbdu); f_10a095f0();
  /* 10a06dbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06dc0 call 0x10a09dd0 */
  push32(0x10a06dc5u); f_10a09dd0();
  /* 10a06dc5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a06dc8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06dcc je 0x10a06ed9 */
  if (C.zf) goto L_10a06ed9;
  /* 10a06dd2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06dd6 je 0x10a06ed9 */
  if (C.zf) goto L_10a06ed9;
  /* 10a06ddc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a06ddf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a06de2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a06de5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06de8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a06deb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06def ja 0x10a06ea2 */
  if ((!C.cf&&!C.zf)) goto L_10a06ea2;
  /* 10a06df5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a06df8 jmp dword ptr [eax*4 + 0x10a070ef] */
  switch (EAX) {
    case 0: goto L_10a06e7a;
    case 1: goto L_10a06e52;
    case 2: goto L_10a06e2a;
    case 3: goto L_10a06dff;
    default: x86_unimpl("switch@0x10a06df8 out of table"); return;
  }
L_10a06dff:;
  /* 10a06dff push 0x10a2cba4 */
  push32((uint32_t)(0x10a2cba4u));
  /* 10a06e04 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a06e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e11 call 0x10a04cb0 */
  push32(0x10a06e16u); f_10a04cb0();
  /* 10a06e16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06e19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06e1c jne 0x10a06e1f */
  if (!C.zf) goto L_10a06e1f;
  /* 10a06e1e int3  */
  x86_unimpl("int3 @ 0x10a06e1e");
L_10a06e1f:;
  /* 10a06e1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06e21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a06e23 jne 0x10a06dff */
  if (!C.zf) goto L_10a06dff;
  /* 10a06e25 jmp 0x10a06ec8 */
  goto L_10a06ec8;
L_10a06e2a:;
  /* 10a06e2a push 0x10a2cb80 */
  push32((uint32_t)(0x10a2cb80u));
  /* 10a06e2f push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a06e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e3c call 0x10a04cb0 */
  push32(0x10a06e41u); f_10a04cb0();
  /* 10a06e41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06e44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06e47 jne 0x10a06e4a */
  if (!C.zf) goto L_10a06e4a;
  /* 10a06e49 int3  */
  x86_unimpl("int3 @ 0x10a06e49");
L_10a06e4a:;
  /* 10a06e4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a06e4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a06e4e jne 0x10a06e2a */
  if (!C.zf) goto L_10a06e2a;
  /* 10a06e50 jmp 0x10a06ec8 */
  goto L_10a06ec8;
L_10a06e52:;
  /* 10a06e52 push 0x10a2cb5c */
  push32((uint32_t)(0x10a2cb5cu));
  /* 10a06e57 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a06e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e64 call 0x10a04cb0 */
  push32(0x10a06e69u); f_10a04cb0();
  /* 10a06e69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06e6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06e6f jne 0x10a06e72 */
  if (!C.zf) goto L_10a06e72;
  /* 10a06e71 int3  */
  x86_unimpl("int3 @ 0x10a06e71");
L_10a06e72:;
  /* 10a06e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06e76 jne 0x10a06e52 */
  if (!C.zf) goto L_10a06e52;
  /* 10a06e78 jmp 0x10a06ec8 */
  goto L_10a06ec8;
L_10a06e7a:;
  /* 10a06e7a push 0x10a2cb38 */
  push32((uint32_t)(0x10a2cb38u));
  /* 10a06e7f push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a06e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06e8c call 0x10a04cb0 */
  push32(0x10a06e91u); f_10a04cb0();
  /* 10a06e91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06e94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06e97 jne 0x10a06e9a */
  if (!C.zf) goto L_10a06e9a;
  /* 10a06e99 int3  */
  x86_unimpl("int3 @ 0x10a06e99");
L_10a06e9a:;
  /* 10a06e9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06e9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a06e9e jne 0x10a06e7a */
  if (!C.zf) goto L_10a06e7a;
  /* 10a06ea0 jmp 0x10a06ec8 */
  goto L_10a06ec8;
L_10a06ea2:;
  /* 10a06ea2 push 0x10a2cb0c */
  push32((uint32_t)(0x10a2cb0cu));
  /* 10a06ea7 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a06eac push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06eae push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06eb4 call 0x10a04cb0 */
  push32(0x10a06eb9u); f_10a04cb0();
  /* 10a06eb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06ebc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06ebf jne 0x10a06ec2 */
  if (!C.zf) goto L_10a06ec2;
  /* 10a06ec1 int3  */
  x86_unimpl("int3 @ 0x10a06ec1");
L_10a06ec2:;
  /* 10a06ec2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a06ec4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a06ec6 jne 0x10a06ea2 */
  if (!C.zf) goto L_10a06ea2;
L_10a06ec8:;
  /* 10a06ec8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a06eca call 0x10a09690 */
  push32(0x10a06ecfu); f_10a09690();
  /* 10a06ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06ed2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06ed4 jmp 0x10a070e8 */
  goto L_10a070e8;
L_10a06ed9:;
  /* 10a06ed9 mov eax, dword ptr [0x10a31728] */
  EAX = (r32((uint32_t)(0x10a31728)));
  /* 10a06ede mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a06ee1 jmp 0x10a06eeb */
  goto L_10a06eeb;
L_10a06ee3:;
  /* 10a06ee3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06ee6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a06ee8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a06eeb:;
  /* 10a06eeb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06eef je 0x10a070db */
  if (C.zf) goto L_10a070db;
  /* 10a06ef5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a06efc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06eff mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a06f02 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a06f08 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06f0b je 0x10a06f30 */
  if (C.zf) goto L_10a06f30;
  /* 10a06f0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06f10 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06f14 je 0x10a06f30 */
  if (C.zf) goto L_10a06f30;
  /* 10a06f16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06f19 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a06f1c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a06f22 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06f25 je 0x10a06f30 */
  if (C.zf) goto L_10a06f30;
  /* 10a06f27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06f2a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06f2e jne 0x10a06f48 */
  if (!C.zf) goto L_10a06f48;
L_10a06f30:;
  /* 10a06f30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06f33 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a06f36 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a06f3c mov edx, dword ptr [ecx*4 + 0x10a2fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a2fa94)));
  /* 10a06f43 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a06f46 jmp 0x10a06f4f */
  goto L_10a06f4f;
L_10a06f48:;
  /* 10a06f48 mov dword ptr [ebp - 0x14], 0x10a2cb04 */
  w32((uint32_t)(EBP + -0x14), (0x10a2cb04u));
L_10a06f4f:;
  /* 10a06f4f push 4 */
  push32((uint32_t)(0x4u));
  /* 10a06f51 mov al, byte ptr [0x10a2fa90] */
  AL = (r8((uint32_t)(0x10a2fa90)));
  /* 10a06f56 push eax */
  push32((uint32_t)(EAX));
  /* 10a06f57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06f5a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06f5d push ecx */
  push32((uint32_t)(ECX));
  /* 10a06f5e call 0x10a06d00 */
  push32(0x10a06f63u); f_10a06d00();
  /* 10a06f63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06f66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06f68 jne 0x10a06fa4 */
  if (!C.zf) goto L_10a06fa4;
L_10a06f6a:;
  /* 10a06f6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06f6d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06f70 push edx */
  push32((uint32_t)(EDX));
  /* 10a06f71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06f74 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a06f77 push ecx */
  push32((uint32_t)(ECX));
  /* 10a06f78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a06f7b push edx */
  push32((uint32_t)(EDX));
  /* 10a06f7c push 0x10a2c9e0 */
  push32((uint32_t)(0x10a2c9e0u));
  /* 10a06f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06f89 call 0x10a04cb0 */
  push32(0x10a06f8eu); f_10a04cb0();
  /* 10a06f8e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06f91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06f94 jne 0x10a06f97 */
  if (!C.zf) goto L_10a06f97;
  /* 10a06f96 int3  */
  x86_unimpl("int3 @ 0x10a06f96");
L_10a06f97:;
  /* 10a06f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a06f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06f9b jne 0x10a06f6a */
  if (!C.zf) goto L_10a06f6a;
  /* 10a06f9d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a06fa4:;
  /* 10a06fa4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a06fa6 mov cl, byte ptr [0x10a2fa90] */
  CL = (r8((uint32_t)(0x10a2fa90)));
  /* 10a06fac push ecx */
  push32((uint32_t)(ECX));
  /* 10a06fad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06fb0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a06fb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06fb6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10a06fba push edx */
  push32((uint32_t)(EDX));
  /* 10a06fbb call 0x10a06d00 */
  push32(0x10a06fc0u); f_10a06d00();
  /* 10a06fc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a06fc5 jne 0x10a07001 */
  if (!C.zf) goto L_10a07001;
L_10a06fc7:;
  /* 10a06fc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06fca add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06fcd push eax */
  push32((uint32_t)(EAX));
  /* 10a06fce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a06fd1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a06fd4 push edx */
  push32((uint32_t)(EDX));
  /* 10a06fd5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a06fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10a06fd9 push 0x10a2c9b4 */
  push32((uint32_t)(0x10a2c9b4u));
  /* 10a06fde push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a06fe6 call 0x10a04cb0 */
  push32(0x10a06febu); f_10a04cb0();
  /* 10a06feb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a06fee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a06ff1 jne 0x10a06ff4 */
  if (!C.zf) goto L_10a06ff4;
  /* 10a06ff3 int3  */
  x86_unimpl("int3 @ 0x10a06ff3");
L_10a06ff4:;
  /* 10a06ff4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a06ff6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a06ff8 jne 0x10a06fc7 */
  if (!C.zf) goto L_10a06fc7;
  /* 10a06ffa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a07001:;
  /* 10a07001 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07004 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07008 jne 0x10a0705a */
  if (!C.zf) goto L_10a0705a;
  /* 10a0700a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0700d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a07010 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07011 mov dl, byte ptr [0x10a2fa91] */
  DL = (r8((uint32_t)(0x10a2fa91)));
  /* 10a07017 push edx */
  push32((uint32_t)(EDX));
  /* 10a07018 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0701b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0701e push eax */
  push32((uint32_t)(EAX));
  /* 10a0701f call 0x10a06d00 */
  push32(0x10a07024u); f_10a06d00();
  /* 10a07024 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07027 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07029 jne 0x10a0705a */
  if (!C.zf) goto L_10a0705a;
L_10a0702b:;
  /* 10a0702b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0702e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07031 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07032 push 0x10a2cad8 */
  push32((uint32_t)(0x10a2cad8u));
  /* 10a07037 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07039 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0703b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0703d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0703f call 0x10a04cb0 */
  push32(0x10a07044u); f_10a04cb0();
  /* 10a07044 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07047 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0704a jne 0x10a0704d */
  if (!C.zf) goto L_10a0704d;
  /* 10a0704c int3  */
  x86_unimpl("int3 @ 0x10a0704c");
L_10a0704d:;
  /* 10a0704d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0704f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a07051 jne 0x10a0702b */
  if (!C.zf) goto L_10a0702b;
  /* 10a07053 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a0705a:;
  /* 10a0705a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0705e jne 0x10a070d6 */
  if (!C.zf) goto L_10a070d6;
  /* 10a07060 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07063 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07067 je 0x10a0709c */
  if (C.zf) goto L_10a0709c;
L_10a07069:;
  /* 10a07069 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0706c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a0706f push edx */
  push32((uint32_t)(EDX));
  /* 10a07070 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07073 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a07076 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07077 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0707a push edx */
  push32((uint32_t)(EDX));
  /* 10a0707b push 0x10a2cab8 */
  push32((uint32_t)(0x10a2cab8u));
  /* 10a07080 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07082 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07084 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07086 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07088 call 0x10a04cb0 */
  push32(0x10a0708du); f_10a04cb0();
  /* 10a0708d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07090 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07093 jne 0x10a07096 */
  if (!C.zf) goto L_10a07096;
  /* 10a07095 int3  */
  x86_unimpl("int3 @ 0x10a07095");
L_10a07096:;
  /* 10a07096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a07098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0709a jne 0x10a07069 */
  if (!C.zf) goto L_10a07069;
L_10a0709c:;
  /* 10a0709c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0709f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a070a2 push edx */
  push32((uint32_t)(EDX));
  /* 10a070a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a070a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a070a9 push eax */
  push32((uint32_t)(EAX));
  /* 10a070aa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a070ad push ecx */
  push32((uint32_t)(ECX));
  /* 10a070ae push 0x10a2ca8c */
  push32((uint32_t)(0x10a2ca8cu));
  /* 10a070b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a070b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a070b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a070b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a070bb call 0x10a04cb0 */
  push32(0x10a070c0u); f_10a04cb0();
  /* 10a070c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a070c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a070c6 jne 0x10a070c9 */
  if (!C.zf) goto L_10a070c9;
  /* 10a070c8 int3  */
  x86_unimpl("int3 @ 0x10a070c8");
L_10a070c9:;
  /* 10a070c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a070cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a070cd jne 0x10a0709c */
  if (!C.zf) goto L_10a0709c;
  /* 10a070cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a070d6:;
  /* 10a070d6 jmp 0x10a06ee3 */
  goto L_10a06ee3;
L_10a070db:;
  /* 10a070db push 9 */
  push32((uint32_t)(0x9u));
  /* 10a070dd call 0x10a09690 */
  push32(0x10a070e2u); f_10a09690();
  /* 10a070e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a070e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a070e8:;
  /* 10a070e8 pop edi */
  EDI = (pop32());
  /* 10a070e9 pop esi */
  ESI = (pop32());
  /* 10a070ea pop ebx */
  EBX = (pop32());
  /* 10a070eb mov esp, ebp */
  ESP = (EBP);
  /* 10a070ed pop ebp */
  EBP = (pop32());
  /* 10a070ee ret  */
  ESPCHK(0x10a06d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007100 @ 0x10a07100 (34 bytes, 13 insns) */
void f_10a07100(void) {
  FTRACE(0x10a07100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07100 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07101 mov ebp, esp */
  EBP = (ESP);
  /* 10a07103 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07104 mov eax, dword ptr [0x10a2fa84] */
  EAX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a07109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0710c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07110 je 0x10a0711b */
  if (C.zf) goto L_10a0711b;
  /* 10a07112 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07115 mov dword ptr [0x10a2fa84], ecx */
  w32((uint32_t)(0x10a2fa84), (ECX));
L_10a0711b:;
  /* 10a0711b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0711e mov esp, ebp */
  ESP = (EBP);
  /* 10a07120 pop ebp */
  EBP = (pop32());
  /* 10a07121 ret  */
  ESPCHK(0x10a07100u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x10a07130 (103 bytes, 38 insns) */
void f_10a07130(void) {
  FTRACE(0x10a07130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07130 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07131 mov ebp, esp */
  EBP = (ESP);
  /* 10a07133 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07134 mov eax, dword ptr [0x10a2fa84] */
  EAX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a07139 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a0713c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0713e jne 0x10a07142 */
  if (!C.zf) goto L_10a07142;
  /* 10a07140 jmp 0x10a07193 */
  goto L_10a07193;
L_10a07142:;
  /* 10a07142 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a07144 call 0x10a095f0 */
  push32(0x10a07149u); f_10a095f0();
  /* 10a07149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0714c mov ecx, dword ptr [0x10a31728] */
  ECX = (r32((uint32_t)(0x10a31728)));
  /* 10a07152 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a07155 jmp 0x10a0715f */
  goto L_10a0715f;
L_10a07157:;
  /* 10a07157 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0715a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0715c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a0715f:;
  /* 10a0715f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07163 je 0x10a07189 */
  if (C.zf) goto L_10a07189;
  /* 10a07165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07168 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a0716b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a07171 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07174 jne 0x10a07187 */
  if (!C.zf) goto L_10a07187;
  /* 10a07176 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a07179 push eax */
  push32((uint32_t)(EAX));
  /* 10a0717a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0717d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07180 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07181 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10a07184u);
  /* 10a07184 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a07187:;
  /* 10a07187 jmp 0x10a07157 */
  goto L_10a07157;
L_10a07189:;
  /* 10a07189 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a0718b call 0x10a09690 */
  push32(0x10a07190u); f_10a09690();
  /* 10a07190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a07193:;
  /* 10a07193 mov esp, ebp */
  ESP = (EBP);
  /* 10a07195 pop ebp */
  EBP = (pop32());
  /* 10a07196 ret  */
  ESPCHK(0x10a07130u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10a071a0 (75 bytes, 28 insns) */
void f_10a071a0(void) {
  FTRACE(0x10a071a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a071a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a071a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a071a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a071a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a071a8 je 0x10a071dd */
  if (C.zf) goto L_10a071dd;
  /* 10a071aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a071ad push eax */
  push32((uint32_t)(EAX));
  /* 10a071ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a071b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a071b2 call dword ptr [0x10a343a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343a4))), 0x10a071b8u);
  /* 10a071b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a071ba jne 0x10a071dd */
  if (!C.zf) goto L_10a071dd;
  /* 10a071bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a071c0 je 0x10a071d4 */
  if (C.zf) goto L_10a071d4;
  /* 10a071c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a071c5 push edx */
  push32((uint32_t)(EDX));
  /* 10a071c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a071c9 push eax */
  push32((uint32_t)(EAX));
  /* 10a071ca call dword ptr [0x10a3437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3437c))), 0x10a071d0u);
  /* 10a071d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a071d2 jne 0x10a071dd */
  if (!C.zf) goto L_10a071dd;
L_10a071d4:;
  /* 10a071d4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a071db jmp 0x10a071e4 */
  goto L_10a071e4;
L_10a071dd:;
  /* 10a071dd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a071e4:;
  /* 10a071e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a071e7 mov esp, ebp */
  ESP = (EBP);
  /* 10a071e9 pop ebp */
  EBP = (pop32());
  /* 10a071ea ret  */
  ESPCHK(0x10a071a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x10a071f0 (134 bytes, 50 insns) */
void f_10a071f0(void) {
  FTRACE(0x10a071f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a071f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a071f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a071f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a071f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a071f8 jne 0x10a071fe */
  if (!C.zf) goto L_10a071fe;
  /* 10a071fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a071fc jmp 0x10a07272 */
  goto L_10a07272;
L_10a071fe:;
  /* 10a071fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10a07200 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a07202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07205 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07208 push eax */
  push32((uint32_t)(EAX));
  /* 10a07209 call 0x10a071a0 */
  push32(0x10a0720eu); f_10a071a0();
  /* 10a0720e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07213 jne 0x10a07219 */
  if (!C.zf) goto L_10a07219;
  /* 10a07215 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a07217 jmp 0x10a07272 */
  goto L_10a07272;
L_10a07219:;
  /* 10a07219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0721c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0721f push ecx */
  push32((uint32_t)(ECX));
  /* 10a07220 call 0x10a09ef0 */
  push32(0x10a07225u); f_10a09ef0();
  /* 10a07225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07228 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0722b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0722f je 0x10a07246 */
  if (C.zf) goto L_10a07246;
  /* 10a07231 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07234 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07237 push edx */
  push32((uint32_t)(EDX));
  /* 10a07238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0723b push eax */
  push32((uint32_t)(EAX));
  /* 10a0723c call 0x10a09f50 */
  push32(0x10a07241u); f_10a09f50();
  /* 10a07241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07244 jmp 0x10a07272 */
  goto L_10a07272;
L_10a07246:;
  /* 10a07246 mov ecx, dword ptr [0x10a316dc] */
  ECX = (r32((uint32_t)(0x10a316dc)));
  /* 10a0724c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a07252 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a07254 je 0x10a0725d */
  if (C.zf) goto L_10a0725d;
  /* 10a07256 mov eax, 1 */
  EAX = (0x1u);
  /* 10a0725b jmp 0x10a07272 */
  goto L_10a07272;
L_10a0725d:;
  /* 10a0725d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07260 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07263 push edx */
  push32((uint32_t)(EDX));
  /* 10a07264 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07266 mov eax, dword ptr [0x10a3308c] */
  EAX = (r32((uint32_t)(0x10a3308c)));
  /* 10a0726b push eax */
  push32((uint32_t)(EAX));
  /* 10a0726c call dword ptr [0x10a343a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343a8))), 0x10a07272u);
L_10a07272:;
  /* 10a07272 mov esp, ebp */
  ESP = (EBP);
  /* 10a07274 pop ebp */
  EBP = (pop32());
  /* 10a07275 ret  */
  ESPCHK(0x10a071f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007280 @ 0x10a07280 (227 bytes, 80 insns) */
void f_10a07280(void) {
  FTRACE(0x10a07280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07280 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07281 mov ebp, esp */
  EBP = (ESP);
  /* 10a07283 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07287 push eax */
  push32((uint32_t)(EAX));
  /* 10a07288 call 0x10a071f0 */
  push32(0x10a0728du); f_10a071f0();
  /* 10a0728d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07290 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07292 jne 0x10a0729b */
  if (!C.zf) goto L_10a0729b;
  /* 10a07294 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a07296 jmp 0x10a0735f */
  goto L_10a0735f;
L_10a0729b:;
  /* 10a0729b push 9 */
  push32((uint32_t)(0x9u));
  /* 10a0729d call 0x10a095f0 */
  push32(0x10a072a2u); f_10a095f0();
  /* 10a072a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a072a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a072a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a072ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a072ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a072b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a072b4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a072b9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a072bc je 0x10a072e0 */
  if (C.zf) goto L_10a072e0;
  /* 10a072be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a072c1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a072c5 je 0x10a072e0 */
  if (C.zf) goto L_10a072e0;
  /* 10a072c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a072ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a072cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a072d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a072d5 je 0x10a072e0 */
  if (C.zf) goto L_10a072e0;
  /* 10a072d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a072da cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a072de jne 0x10a07353 */
  if (!C.zf) goto L_10a07353;
L_10a072e0:;
  /* 10a072e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a072e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a072e5 push edx */
  push32((uint32_t)(EDX));
  /* 10a072e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a072e9 push eax */
  push32((uint32_t)(EAX));
  /* 10a072ea call 0x10a071a0 */
  push32(0x10a072efu); f_10a071a0();
  /* 10a072ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a072f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a072f4 je 0x10a07353 */
  if (C.zf) goto L_10a07353;
  /* 10a072f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a072f9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a072fc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a072ff jne 0x10a07353 */
  if (!C.zf) goto L_10a07353;
  /* 10a07301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07304 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a07307 cmp ecx, dword ptr [0x10a2fa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a2fa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0730d jg 0x10a07353 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a07353;
  /* 10a0730f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07313 je 0x10a07320 */
  if (C.zf) goto L_10a07320;
  /* 10a07315 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0731b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a0731e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a07320:;
  /* 10a07320 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07324 je 0x10a07331 */
  if (C.zf) goto L_10a07331;
  /* 10a07326 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a07329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0732c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a0732f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a07331:;
  /* 10a07331 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07335 je 0x10a07342 */
  if (C.zf) goto L_10a07342;
  /* 10a07337 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0733a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0733d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a07340 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a07342:;
  /* 10a07342 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a07344 call 0x10a09690 */
  push32(0x10a07349u); f_10a09690();
  /* 10a07349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0734c mov eax, 1 */
  EAX = (0x1u);
  /* 10a07351 jmp 0x10a0735f */
  goto L_10a0735f;
L_10a07353:;
  /* 10a07353 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a07355 call 0x10a09690 */
  push32(0x10a0735au); f_10a09690();
  /* 10a0735a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0735d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a0735f:;
  /* 10a0735f mov esp, ebp */
  ESP = (EBP);
  /* 10a07361 pop ebp */
  EBP = (pop32());
  /* 10a07362 ret  */
  ESPCHK(0x10a07280u, _esp0);
  ESP += 4; return;
}

/* FUN_10007370 @ 0x10a07370 (28 bytes, 11 insns) */
void f_10a07370(void) {
  FTRACE(0x10a07370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07370 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07371 mov ebp, esp */
  EBP = (ESP);
  /* 10a07373 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07374 mov eax, dword ptr [0x10a33098] */
  EAX = (r32((uint32_t)(0x10a33098)));
  /* 10a07379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0737c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0737f mov dword ptr [0x10a33098], ecx */
  w32((uint32_t)(0x10a33098), (ECX));
  /* 10a07385 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07388 mov esp, ebp */
  ESP = (EBP);
  /* 10a0738a pop ebp */
  EBP = (pop32());
  /* 10a0738b ret  */
  ESPCHK(0x10a07370u, _esp0);
  ESP += 4; return;
}

/* FUN_10007390 @ 0x10a07390 (362 bytes, 116 insns) */
void f_10a07390(void) {
  FTRACE(0x10a07390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07390 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07391 mov ebp, esp */
  EBP = (ESP);
  /* 10a07393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07396 push ebx */
  push32((uint32_t)(EBX));
  /* 10a07397 push esi */
  push32((uint32_t)(ESI));
  /* 10a07398 push edi */
  push32((uint32_t)(EDI));
  /* 10a07399 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0739d jne 0x10a073ca */
  if (!C.zf) goto L_10a073ca;
L_10a0739f:;
  /* 10a0739f push 0x10a2cbec */
  push32((uint32_t)(0x10a2cbecu));
  /* 10a073a4 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a073a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a073ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10a073ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10a073af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a073b1 call 0x10a04cb0 */
  push32(0x10a073b6u); f_10a04cb0();
  /* 10a073b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a073b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a073bc jne 0x10a073bf */
  if (!C.zf) goto L_10a073bf;
  /* 10a073be int3  */
  x86_unimpl("int3 @ 0x10a073be");
L_10a073bf:;
  /* 10a073bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a073c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a073c3 jne 0x10a0739f */
  if (!C.zf) goto L_10a0739f;
  /* 10a073c5 jmp 0x10a074f3 */
  goto L_10a074f3;
L_10a073ca:;
  /* 10a073ca push 9 */
  push32((uint32_t)(0x9u));
  /* 10a073cc call 0x10a095f0 */
  push32(0x10a073d1u); f_10a095f0();
  /* 10a073d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a073d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a073d7 mov edx, dword ptr [0x10a31728] */
  EDX = (r32((uint32_t)(0x10a31728)));
  /* 10a073dd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a073df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a073e6 jmp 0x10a073f1 */
  goto L_10a073f1;
L_10a073e8:;
  /* 10a073e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a073eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a073ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a073f1:;
  /* 10a073f1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a073f5 jge 0x10a07415 */
  if ((C.sf==C.of)) goto L_10a07415;
  /* 10a073f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a073fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a073fd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10a07405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07408 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0740b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10a07413 jmp 0x10a073e8 */
  goto L_10a073e8;
L_10a07415:;
  /* 10a07415 mov edx, dword ptr [0x10a31728] */
  EDX = (r32((uint32_t)(0x10a31728)));
  /* 10a0741b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a0741e jmp 0x10a07428 */
  goto L_10a07428;
L_10a07420:;
  /* 10a07420 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07423 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a07425 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a07428:;
  /* 10a07428 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0742c je 0x10a074d1 */
  if (C.zf) goto L_10a074d1;
  /* 10a07432 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07435 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a07438 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0743d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0743f jl 0x10a074a7 */
  if ((C.sf!=C.of)) goto L_10a074a7;
  /* 10a07441 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07444 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a07447 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0744d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07450 jge 0x10a074a7 */
  if ((C.sf==C.of)) goto L_10a074a7;
  /* 10a07452 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07455 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a07458 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a0745e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07461 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10a07465 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07468 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0746b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a0746e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a07474 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07477 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10a0747b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0747e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a07481 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a07486 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07489 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10a0748d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07490 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07493 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07496 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a07499 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0749e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a074a1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10a074a5 jmp 0x10a074cc */
  goto L_10a074cc;
L_10a074a7:;
  /* 10a074a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a074aa push edx */
  push32((uint32_t)(EDX));
  /* 10a074ab push 0x10a2cbc8 */
  push32((uint32_t)(0x10a2cbc8u));
  /* 10a074b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a074b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a074b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a074b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a074b8 call 0x10a04cb0 */
  push32(0x10a074bdu); f_10a04cb0();
  /* 10a074bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a074c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a074c3 jne 0x10a074c6 */
  if (!C.zf) goto L_10a074c6;
  /* 10a074c5 int3  */
  x86_unimpl("int3 @ 0x10a074c5");
L_10a074c6:;
  /* 10a074c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a074c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a074ca jne 0x10a074a7 */
  if (!C.zf) goto L_10a074a7;
L_10a074cc:;
  /* 10a074cc jmp 0x10a07420 */
  goto L_10a07420;
L_10a074d1:;
  /* 10a074d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a074d4 mov edx, dword ptr [0x10a31730] */
  EDX = (r32((uint32_t)(0x10a31730)));
  /* 10a074da mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10a074dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a074e0 mov ecx, dword ptr [0x10a31724] */
  ECX = (r32((uint32_t)(0x10a31724)));
  /* 10a074e6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10a074e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a074eb call 0x10a09690 */
  push32(0x10a074f0u); f_10a09690();
  /* 10a074f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a074f3:;
  /* 10a074f3 pop edi */
  EDI = (pop32());
  /* 10a074f4 pop esi */
  ESI = (pop32());
  /* 10a074f5 pop ebx */
  EBX = (pop32());
  /* 10a074f6 mov esp, ebp */
  ESP = (EBP);
  /* 10a074f8 pop ebp */
  EBP = (pop32());
  /* 10a074f9 ret  */
  ESPCHK(0x10a07390u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x10a07500 (291 bytes, 95 insns) */
void f_10a07500(void) {
  FTRACE(0x10a07500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07500 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07501 mov ebp, esp */
  EBP = (ESP);
  /* 10a07503 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07506 push ebx */
  push32((uint32_t)(EBX));
  /* 10a07507 push esi */
  push32((uint32_t)(ESI));
  /* 10a07508 push edi */
  push32((uint32_t)(EDI));
  /* 10a07509 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a07510 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07514 je 0x10a07522 */
  if (C.zf) goto L_10a07522;
  /* 10a07516 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0751a je 0x10a07522 */
  if (C.zf) goto L_10a07522;
  /* 10a0751c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07520 jne 0x10a07550 */
  if (!C.zf) goto L_10a07550;
L_10a07522:;
  /* 10a07522 push 0x10a2cc14 */
  push32((uint32_t)(0x10a2cc14u));
  /* 10a07527 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a0752c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0752e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07530 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07532 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07534 call 0x10a04cb0 */
  push32(0x10a07539u); f_10a04cb0();
  /* 10a07539 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0753c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0753f jne 0x10a07542 */
  if (!C.zf) goto L_10a07542;
  /* 10a07541 int3  */
  x86_unimpl("int3 @ 0x10a07541");
L_10a07542:;
  /* 10a07542 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a07544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07546 jne 0x10a07522 */
  if (!C.zf) goto L_10a07522;
  /* 10a07548 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0754b jmp 0x10a0761c */
  goto L_10a0761c;
L_10a07550:;
  /* 10a07550 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a07557 jmp 0x10a07562 */
  goto L_10a07562;
L_10a07559:;
  /* 10a07559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0755c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0755f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a07562:;
  /* 10a07562 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07566 jge 0x10a075ec */
  if ((C.sf==C.of)) goto L_10a075ec;
  /* 10a0756c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0756f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07572 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07575 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a07578 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10a0757c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07580 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07586 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10a0758a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0758d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07590 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07593 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a07596 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10a0759a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0759e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a075a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a075a4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10a075a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a075ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a075ae cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a075b3 jne 0x10a075c2 */
  if (!C.zf) goto L_10a075c2;
  /* 10a075b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a075b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a075bb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a075c0 je 0x10a075e7 */
  if (C.zf) goto L_10a075e7;
L_10a075c2:;
  /* 10a075c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a075c6 je 0x10a075e7 */
  if (C.zf) goto L_10a075e7;
  /* 10a075c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a075cc jne 0x10a075e0 */
  if (!C.zf) goto L_10a075e0;
  /* 10a075ce cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a075d2 jne 0x10a075e7 */
  if (!C.zf) goto L_10a075e7;
  /* 10a075d4 mov eax, dword ptr [0x10a2fa84] */
  EAX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a075d9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10a075dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a075de je 0x10a075e7 */
  if (C.zf) goto L_10a075e7;
L_10a075e0:;
  /* 10a075e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10a075e7:;
  /* 10a075e7 jmp 0x10a07559 */
  goto L_10a07559;
L_10a075ec:;
  /* 10a075ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a075ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a075f2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10a075f5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a075f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a075fb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10a075fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07601 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a07604 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10a07607 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0760a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0760d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10a07610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07613 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a07619 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a0761c:;
  /* 10a0761c pop edi */
  EDI = (pop32());
  /* 10a0761d pop esi */
  ESI = (pop32());
  /* 10a0761e pop ebx */
  EBX = (pop32());
  /* 10a0761f mov esp, ebp */
  ESP = (EBP);
  /* 10a07621 pop ebp */
  EBP = (pop32());
  /* 10a07622 ret  */
  ESPCHK(0x10a07500u, _esp0);
  ESP += 4; return;
}

/* FUN_10007630 @ 0x10a07630 (697 bytes, 253 insns) */
void f_10a07630(void) {
  FTRACE(0x10a07630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07630 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07631 mov ebp, esp */
  EBP = (ESP);
  /* 10a07633 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07636 push ebx */
  push32((uint32_t)(EBX));
  /* 10a07637 push esi */
  push32((uint32_t)(ESI));
  /* 10a07638 push edi */
  push32((uint32_t)(EDI));
  /* 10a07639 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a07640 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a07642 call 0x10a095f0 */
  push32(0x10a07647u); f_10a095f0();
  /* 10a07647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0764a:;
  /* 10a0764a push 0x10a2cd0c */
  push32((uint32_t)(0x10a2cd0cu));
  /* 10a0764f push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a07654 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07656 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07658 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0765a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0765c call 0x10a04cb0 */
  push32(0x10a07661u); f_10a04cb0();
  /* 10a07661 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07664 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07667 jne 0x10a0766a */
  if (!C.zf) goto L_10a0766a;
  /* 10a07669 int3  */
  x86_unimpl("int3 @ 0x10a07669");
L_10a0766a:;
  /* 10a0766a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0766c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0766e jne 0x10a0764a */
  if (!C.zf) goto L_10a0764a;
  /* 10a07670 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07674 je 0x10a0767e */
  if (C.zf) goto L_10a0767e;
  /* 10a07676 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07679 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0767b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a0767e:;
  /* 10a0767e mov eax, dword ptr [0x10a31728] */
  EAX = (r32((uint32_t)(0x10a31728)));
  /* 10a07683 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a07686 jmp 0x10a07690 */
  goto L_10a07690;
L_10a07688:;
  /* 10a07688 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0768b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0768d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a07690:;
  /* 10a07690 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07694 je 0x10a078b2 */
  if (C.zf) goto L_10a078b2;
  /* 10a0769a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0769d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a076a0 je 0x10a078b2 */
  if (C.zf) goto L_10a078b2;
  /* 10a076a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a076a9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a076ac and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a076b2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a076b5 je 0x10a076e4 */
  if (C.zf) goto L_10a076e4;
  /* 10a076b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a076ba mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a076bd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a076c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a076c5 je 0x10a076e4 */
  if (C.zf) goto L_10a076e4;
  /* 10a076c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a076ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a076cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a076d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a076d5 jne 0x10a076e9 */
  if (!C.zf) goto L_10a076e9;
  /* 10a076d7 mov ecx, dword ptr [0x10a2fa84] */
  ECX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a076dd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10a076e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a076e2 jne 0x10a076e9 */
  if (!C.zf) goto L_10a076e9;
L_10a076e4:;
  /* 10a076e4 jmp 0x10a078ad */
  goto L_10a078ad;
L_10a076e9:;
  /* 10a076e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a076ec cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a076f0 je 0x10a07762 */
  if (C.zf) goto L_10a07762;
  /* 10a076f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a076f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a076f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a076f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a076fc push ecx */
  push32((uint32_t)(ECX));
  /* 10a076fd call 0x10a071a0 */
  push32(0x10a07702u); f_10a071a0();
  /* 10a07702 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07707 jne 0x10a07733 */
  if (!C.zf) goto L_10a07733;
L_10a07709:;
  /* 10a07709 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0770c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a0770f push eax */
  push32((uint32_t)(EAX));
  /* 10a07710 push 0x10a2ccf8 */
  push32((uint32_t)(0x10a2ccf8u));
  /* 10a07715 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07719 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0771b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0771d call 0x10a04cb0 */
  push32(0x10a07722u); f_10a04cb0();
  /* 10a07722 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07725 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07728 jne 0x10a0772b */
  if (!C.zf) goto L_10a0772b;
  /* 10a0772a int3  */
  x86_unimpl("int3 @ 0x10a0772a");
L_10a0772b:;
  /* 10a0772b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0772d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a0772f jne 0x10a07709 */
  if (!C.zf) goto L_10a07709;
  /* 10a07731 jmp 0x10a07762 */
  goto L_10a07762;
L_10a07733:;
  /* 10a07733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07736 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a07739 push eax */
  push32((uint32_t)(EAX));
  /* 10a0773a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0773d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a07740 push edx */
  push32((uint32_t)(EDX));
  /* 10a07741 push 0x10a2ccec */
  push32((uint32_t)(0x10a2ccecu));
  /* 10a07746 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07748 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0774a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0774c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0774e call 0x10a04cb0 */
  push32(0x10a07753u); f_10a04cb0();
  /* 10a07753 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07756 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07759 jne 0x10a0775c */
  if (!C.zf) goto L_10a0775c;
  /* 10a0775b int3  */
  x86_unimpl("int3 @ 0x10a0775b");
L_10a0775c:;
  /* 10a0775c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0775e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07760 jne 0x10a07733 */
  if (!C.zf) goto L_10a07733;
L_10a07762:;
  /* 10a07762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07765 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a07768 push edx */
  push32((uint32_t)(EDX));
  /* 10a07769 push 0x10a2cce4 */
  push32((uint32_t)(0x10a2cce4u));
  /* 10a0776e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07770 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07772 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07774 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07776 call 0x10a04cb0 */
  push32(0x10a0777bu); f_10a04cb0();
  /* 10a0777b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0777e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07781 jne 0x10a07784 */
  if (!C.zf) goto L_10a07784;
  /* 10a07783 int3  */
  x86_unimpl("int3 @ 0x10a07783");
L_10a07784:;
  /* 10a07784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a07786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07788 jne 0x10a07762 */
  if (!C.zf) goto L_10a07762;
  /* 10a0778a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0778d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a07790 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a07796 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07799 jne 0x10a0780c */
  if (!C.zf) goto L_10a0780c;
L_10a0779b:;
  /* 10a0779b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0779e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a077a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a077a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a077a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a077a8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a077ab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a077b0 push eax */
  push32((uint32_t)(EAX));
  /* 10a077b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a077b4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a077b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a077b8 push 0x10a2ccb0 */
  push32((uint32_t)(0x10a2ccb0u));
  /* 10a077bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a077bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a077c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a077c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a077c5 call 0x10a04cb0 */
  push32(0x10a077cau); f_10a04cb0();
  /* 10a077ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a077cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a077d0 jne 0x10a077d3 */
  if (!C.zf) goto L_10a077d3;
  /* 10a077d2 int3  */
  x86_unimpl("int3 @ 0x10a077d2");
L_10a077d3:;
  /* 10a077d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a077d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a077d7 jne 0x10a0779b */
  if (!C.zf) goto L_10a0779b;
  /* 10a077d9 cmp dword ptr [0x10a33098], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33098))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a077e0 je 0x10a077fb */
  if (C.zf) goto L_10a077fb;
  /* 10a077e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a077e5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a077e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a077e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a077ec add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a077ef push edx */
  push32((uint32_t)(EDX));
  /* 10a077f0 call dword ptr [0x10a33098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a33098))), 0x10a077f6u);
  /* 10a077f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a077f9 jmp 0x10a07807 */
  goto L_10a07807;
L_10a077fb:;
  /* 10a077fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a077fe push eax */
  push32((uint32_t)(EAX));
  /* 10a077ff call 0x10a078f0 */
  push32(0x10a07804u); f_10a078f0();
  /* 10a07804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a07807:;
  /* 10a07807 jmp 0x10a078ad */
  goto L_10a078ad;
L_10a0780c:;
  /* 10a0780c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0780f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07813 jne 0x10a07852 */
  if (!C.zf) goto L_10a07852;
L_10a07815:;
  /* 10a07815 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07818 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a0781b push eax */
  push32((uint32_t)(EAX));
  /* 10a0781c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0781f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07822 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07823 push 0x10a2cc88 */
  push32((uint32_t)(0x10a2cc88u));
  /* 10a07828 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0782a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0782c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0782e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07830 call 0x10a04cb0 */
  push32(0x10a07835u); f_10a04cb0();
  /* 10a07835 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07838 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0783b jne 0x10a0783e */
  if (!C.zf) goto L_10a0783e;
  /* 10a0783d int3  */
  x86_unimpl("int3 @ 0x10a0783d");
L_10a0783e:;
  /* 10a0783e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a07840 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a07842 jne 0x10a07815 */
  if (!C.zf) goto L_10a07815;
  /* 10a07844 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07847 push eax */
  push32((uint32_t)(EAX));
  /* 10a07848 call 0x10a078f0 */
  push32(0x10a0784du); f_10a078f0();
  /* 10a0784d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07850 jmp 0x10a078ad */
  goto L_10a078ad;
L_10a07852:;
  /* 10a07852 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07855 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a07858 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0785e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07861 jne 0x10a078ad */
  if (!C.zf) goto L_10a078ad;
L_10a07863:;
  /* 10a07863 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07866 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a07869 push ecx */
  push32((uint32_t)(ECX));
  /* 10a0786a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0786d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a07870 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a07873 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a07878 push eax */
  push32((uint32_t)(EAX));
  /* 10a07879 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0787c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0787f push ecx */
  push32((uint32_t)(ECX));
  /* 10a07880 push 0x10a2cc54 */
  push32((uint32_t)(0x10a2cc54u));
  /* 10a07885 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07887 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07889 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0788b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0788d call 0x10a04cb0 */
  push32(0x10a07892u); f_10a04cb0();
  /* 10a07892 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07895 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07898 jne 0x10a0789b */
  if (!C.zf) goto L_10a0789b;
  /* 10a0789a int3  */
  x86_unimpl("int3 @ 0x10a0789a");
L_10a0789b:;
  /* 10a0789b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0789d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0789f jne 0x10a07863 */
  if (!C.zf) goto L_10a07863;
  /* 10a078a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a078a4 push eax */
  push32((uint32_t)(EAX));
  /* 10a078a5 call 0x10a078f0 */
  push32(0x10a078aau); f_10a078f0();
  /* 10a078aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a078ad:;
  /* 10a078ad jmp 0x10a07688 */
  goto L_10a07688;
L_10a078b2:;
  /* 10a078b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a078b4 call 0x10a09690 */
  push32(0x10a078b9u); f_10a09690();
  /* 10a078b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a078bc:;
  /* 10a078bc push 0x10a2cc3c */
  push32((uint32_t)(0x10a2cc3cu));
  /* 10a078c1 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a078c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a078c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a078ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10a078cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a078ce call 0x10a04cb0 */
  push32(0x10a078d3u); f_10a04cb0();
  /* 10a078d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a078d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a078d9 jne 0x10a078dc */
  if (!C.zf) goto L_10a078dc;
  /* 10a078db int3  */
  x86_unimpl("int3 @ 0x10a078db");
L_10a078dc:;
  /* 10a078dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a078de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a078e0 jne 0x10a078bc */
  if (!C.zf) goto L_10a078bc;
  /* 10a078e2 pop edi */
  EDI = (pop32());
  /* 10a078e3 pop esi */
  ESI = (pop32());
  /* 10a078e4 pop ebx */
  EBX = (pop32());
  /* 10a078e5 mov esp, ebp */
  ESP = (EBP);
  /* 10a078e7 pop ebp */
  EBP = (pop32());
  /* 10a078e8 ret  */
  ESPCHK(0x10a07630u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x10a078f0 (276 bytes, 89 insns) */
void f_10a078f0(void) {
  FTRACE(0x10a078f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a078f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a078f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a078f3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a078f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a078f7 push esi */
  push32((uint32_t)(ESI));
  /* 10a078f8 push edi */
  push32((uint32_t)(EDI));
  /* 10a078f9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10a07900 jmp 0x10a0790b */
  goto L_10a0790b;
L_10a07902:;
  /* 10a07902 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a07905 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07908 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10a0790b:;
  /* 10a0790b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0790e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07912 jge 0x10a0791f */
  if ((C.sf==C.of)) goto L_10a0791f;
  /* 10a07914 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07917 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a0791a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10a0791d jmp 0x10a07926 */
  goto L_10a07926;
L_10a0791f:;
  /* 10a0791f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10a07926:;
  /* 10a07926 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a07929 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0792c jge 0x10a079cc */
  if ((C.sf==C.of)) goto L_10a079cc;
  /* 10a07932 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07935 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07938 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10a0793b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10a0793e cmp dword ptr [0x10a2fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a2fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07945 jle 0x10a07963 */
  if ((C.zf||C.sf!=C.of)) goto L_10a07963;
  /* 10a07947 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10a0794c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a0794f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a07955 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07956 call 0x10a0bc00 */
  push32(0x10a0795bu); f_10a0bc00();
  /* 10a0795b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0795e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10a07961 jmp 0x10a07980 */
  goto L_10a07980;
L_10a07963:;
  /* 10a07963 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a07966 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0796c mov eax, dword ptr [0x10a2fc98] */
  EAX = (r32((uint32_t)(0x10a2fc98)));
  /* 10a07971 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a07973 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a07977 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0797d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10a07980:;
  /* 10a07980 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07984 je 0x10a07994 */
  if (C.zf) goto L_10a07994;
  /* 10a07986 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a07989 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a0798f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10a07992 jmp 0x10a0799b */
  goto L_10a0799b;
L_10a07994:;
  /* 10a07994 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10a0799b:;
  /* 10a0799b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a0799e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10a079a1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10a079a5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a079a8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a079ae push edx */
  push32((uint32_t)(EDX));
  /* 10a079af push 0x10a2cd30 */
  push32((uint32_t)(0x10a2cd30u));
  /* 10a079b4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a079b7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a079ba lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10a079be push ecx */
  push32((uint32_t)(ECX));
  /* 10a079bf call 0x10a0bb00 */
  push32(0x10a079c4u); f_10a0bb00();
  /* 10a079c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a079c7 jmp 0x10a07902 */
  goto L_10a07902;
L_10a079cc:;
  /* 10a079cc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a079cf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10a079d4:;
  /* 10a079d4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10a079d7 push eax */
  push32((uint32_t)(EAX));
  /* 10a079d8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10a079db push ecx */
  push32((uint32_t)(ECX));
  /* 10a079dc push 0x10a2cd20 */
  push32((uint32_t)(0x10a2cd20u));
  /* 10a079e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a079e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a079e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a079e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a079e9 call 0x10a04cb0 */
  push32(0x10a079eeu); f_10a04cb0();
  /* 10a079ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a079f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a079f4 jne 0x10a079f7 */
  if (!C.zf) goto L_10a079f7;
  /* 10a079f6 int3  */
  x86_unimpl("int3 @ 0x10a079f6");
L_10a079f7:;
  /* 10a079f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a079f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a079fb jne 0x10a079d4 */
  if (!C.zf) goto L_10a079d4;
  /* 10a079fd pop edi */
  EDI = (pop32());
  /* 10a079fe pop esi */
  ESI = (pop32());
  /* 10a079ff pop ebx */
  EBX = (pop32());
  /* 10a07a00 mov esp, ebp */
  ESP = (EBP);
  /* 10a07a02 pop ebp */
  EBP = (pop32());
  /* 10a07a03 ret  */
  ESPCHK(0x10a078f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a10 @ 0x10a07a10 (116 bytes, 46 insns) */
void f_10a07a10(void) {
  FTRACE(0x10a07a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07a11 mov ebp, esp */
  EBP = (ESP);
  /* 10a07a13 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07a16 push ebx */
  push32((uint32_t)(EBX));
  /* 10a07a17 push esi */
  push32((uint32_t)(ESI));
  /* 10a07a18 push edi */
  push32((uint32_t)(EDI));
  /* 10a07a19 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10a07a1c push eax */
  push32((uint32_t)(EAX));
  /* 10a07a1d call 0x10a07390 */
  push32(0x10a07a22u); f_10a07390();
  /* 10a07a22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07a25 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07a29 jne 0x10a07a44 */
  if (!C.zf) goto L_10a07a44;
  /* 10a07a2b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07a2f jne 0x10a07a44 */
  if (!C.zf) goto L_10a07a44;
  /* 10a07a31 mov ecx, dword ptr [0x10a2fa84] */
  ECX = (r32((uint32_t)(0x10a2fa84)));
  /* 10a07a37 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10a07a3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a07a3c je 0x10a07a7b */
  if (C.zf) goto L_10a07a7b;
  /* 10a07a3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07a42 je 0x10a07a7b */
  if (C.zf) goto L_10a07a7b;
L_10a07a44:;
  /* 10a07a44 push 0x10a2cd38 */
  push32((uint32_t)(0x10a2cd38u));
  /* 10a07a49 push 0x10a2c704 */
  push32((uint32_t)(0x10a2c704u));
  /* 10a07a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07a56 call 0x10a04cb0 */
  push32(0x10a07a5bu); f_10a04cb0();
  /* 10a07a5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07a5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07a61 jne 0x10a07a64 */
  if (!C.zf) goto L_10a07a64;
  /* 10a07a63 int3  */
  x86_unimpl("int3 @ 0x10a07a63");
L_10a07a64:;
  /* 10a07a64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a07a66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a07a68 jne 0x10a07a44 */
  if (!C.zf) goto L_10a07a44;
  /* 10a07a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07a6c call 0x10a07630 */
  push32(0x10a07a71u); f_10a07630();
  /* 10a07a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07a74 mov eax, 1 */
  EAX = (0x1u);
  /* 10a07a79 jmp 0x10a07a7d */
  goto L_10a07a7d;
L_10a07a7b:;
  /* 10a07a7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a07a7d:;
  /* 10a07a7d pop edi */
  EDI = (pop32());
  /* 10a07a7e pop esi */
  ESI = (pop32());
  /* 10a07a7f pop ebx */
  EBX = (pop32());
  /* 10a07a80 mov esp, ebp */
  ESP = (EBP);
  /* 10a07a82 pop ebp */
  EBP = (pop32());
  /* 10a07a83 ret  */
  ESPCHK(0x10a07a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a90 @ 0x10a07a90 (197 bytes, 79 insns) */
void f_10a07a90(void) {
  FTRACE(0x10a07a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07a91 mov ebp, esp */
  EBP = (ESP);
  /* 10a07a93 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07a94 push ebx */
  push32((uint32_t)(EBX));
  /* 10a07a95 push esi */
  push32((uint32_t)(ESI));
  /* 10a07a96 push edi */
  push32((uint32_t)(EDI));
  /* 10a07a97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07a9b jne 0x10a07aa2 */
  if (!C.zf) goto L_10a07aa2;
  /* 10a07a9d jmp 0x10a07b4e */
  goto L_10a07b4e;
L_10a07aa2:;
  /* 10a07aa2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a07aa9 jmp 0x10a07ab4 */
  goto L_10a07ab4;
L_10a07aab:;
  /* 10a07aab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07aae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07ab1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a07ab4:;
  /* 10a07ab4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07ab8 jge 0x10a07afe */
  if ((C.sf==C.of)) goto L_10a07afe;
L_10a07aba:;
  /* 10a07aba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07abd mov edx, dword ptr [ecx*4 + 0x10a2fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a2fa94)));
  /* 10a07ac4 push edx */
  push32((uint32_t)(EDX));
  /* 10a07ac5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07ac8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07acb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10a07acf push edx */
  push32((uint32_t)(EDX));
  /* 10a07ad0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07ad3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07ad6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10a07ada push edx */
  push32((uint32_t)(EDX));
  /* 10a07adb push 0x10a2cd94 */
  push32((uint32_t)(0x10a2cd94u));
  /* 10a07ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07ae8 call 0x10a04cb0 */
  push32(0x10a07aedu); f_10a04cb0();
  /* 10a07aed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07af0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07af3 jne 0x10a07af6 */
  if (!C.zf) goto L_10a07af6;
  /* 10a07af5 int3  */
  x86_unimpl("int3 @ 0x10a07af5");
L_10a07af6:;
  /* 10a07af6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a07af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07afa jne 0x10a07aba */
  if (!C.zf) goto L_10a07aba;
  /* 10a07afc jmp 0x10a07aab */
  goto L_10a07aab;
L_10a07afe:;
  /* 10a07afe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07b01 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10a07b04 push edx */
  push32((uint32_t)(EDX));
  /* 10a07b05 push 0x10a2cd70 */
  push32((uint32_t)(0x10a2cd70u));
  /* 10a07b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07b12 call 0x10a04cb0 */
  push32(0x10a07b17u); f_10a04cb0();
  /* 10a07b17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07b1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07b1d jne 0x10a07b20 */
  if (!C.zf) goto L_10a07b20;
  /* 10a07b1f int3  */
  x86_unimpl("int3 @ 0x10a07b1f");
L_10a07b20:;
  /* 10a07b20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a07b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07b24 jne 0x10a07afe */
  if (!C.zf) goto L_10a07afe;
L_10a07b26:;
  /* 10a07b26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07b29 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10a07b2c push edx */
  push32((uint32_t)(EDX));
  /* 10a07b2d push 0x10a2cd50 */
  push32((uint32_t)(0x10a2cd50u));
  /* 10a07b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07b3a call 0x10a04cb0 */
  push32(0x10a07b3fu); f_10a04cb0();
  /* 10a07b3f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07b42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07b45 jne 0x10a07b48 */
  if (!C.zf) goto L_10a07b48;
  /* 10a07b47 int3  */
  x86_unimpl("int3 @ 0x10a07b47");
L_10a07b48:;
  /* 10a07b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a07b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07b4c jne 0x10a07b26 */
  if (!C.zf) goto L_10a07b26;
L_10a07b4e:;
  /* 10a07b4e pop edi */
  EDI = (pop32());
  /* 10a07b4f pop esi */
  ESI = (pop32());
  /* 10a07b50 pop ebx */
  EBX = (pop32());
  /* 10a07b51 mov esp, ebp */
  ESP = (EBP);
  /* 10a07b53 pop ebp */
  EBP = (pop32());
  /* 10a07b54 ret  */
  ESPCHK(0x10a07a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b60 @ 0x10a07b60 (329 bytes, 102 insns) */
void f_10a07b60(void) {
  FTRACE(0x10a07b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07b61 mov ebp, esp */
  EBP = (ESP);
  /* 10a07b63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07b66 cmp dword ptr [0x10a33210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07b6d jne 0x10a07b74 */
  if (!C.zf) goto L_10a07b74;
  /* 10a07b6f call 0x10a0c4a0 */
  push32(0x10a07b74u); f_10a0c4a0();
L_10a07b74:;
  /* 10a07b74 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a07b7b mov eax, dword ptr [0x10a316c4] */
  EAX = (r32((uint32_t)(0x10a316c4)));
  /* 10a07b80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a07b83:;
  /* 10a07b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07b86 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a07b89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a07b8b je 0x10a07bb9 */
  if (C.zf) goto L_10a07bb9;
  /* 10a07b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07b90 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a07b93 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07b96 je 0x10a07ba1 */
  if (C.zf) goto L_10a07ba1;
  /* 10a07b98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07b9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07b9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a07ba1:;
  /* 10a07ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07ba4 push eax */
  push32((uint32_t)(EAX));
  /* 10a07ba5 call 0x10a08a20 */
  push32(0x10a07baau); f_10a08a20();
  /* 10a07baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07bad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07bb0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a07bb4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a07bb7 jmp 0x10a07b83 */
  goto L_10a07b83;
L_10a07bb9:;
  /* 10a07bb9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10a07bbb push 0x10a2cdb4 */
  push32((uint32_t)(0x10a2cdb4u));
  /* 10a07bc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a07bc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07bc5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10a07bcc push ecx */
  push32((uint32_t)(ECX));
  /* 10a07bcd call 0x10a05bf0 */
  push32(0x10a07bd2u); f_10a05bf0();
  /* 10a07bd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07bd5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a07bd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07bdb mov dword ptr [0x10a316f8], edx */
  w32((uint32_t)(0x10a316f8), (EDX));
  /* 10a07be1 cmp dword ptr [0x10a316f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07be8 jne 0x10a07bf4 */
  if (!C.zf) goto L_10a07bf4;
  /* 10a07bea push 9 */
  push32((uint32_t)(0x9u));
  /* 10a07bec call 0x10a04b60 */
  push32(0x10a07bf1u); f_10a04b60();
  /* 10a07bf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a07bf4:;
  /* 10a07bf4 mov eax, dword ptr [0x10a316c4] */
  EAX = (r32((uint32_t)(0x10a316c4)));
  /* 10a07bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a07bfc jmp 0x10a07c07 */
  goto L_10a07c07;
L_10a07bfe:;
  /* 10a07bfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07c01 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07c04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a07c07:;
  /* 10a07c07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07c0a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a07c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07c0f je 0x10a07c77 */
  if (C.zf) goto L_10a07c77;
  /* 10a07c11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07c14 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07c15 call 0x10a08a20 */
  push32(0x10a07c1au); f_10a08a20();
  /* 10a07c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07c1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07c20 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a07c23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07c26 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a07c29 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07c2c je 0x10a07c75 */
  if (C.zf) goto L_10a07c75;
  /* 10a07c2e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10a07c30 push 0x10a2cdb4 */
  push32((uint32_t)(0x10a2cdb4u));
  /* 10a07c35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a07c37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a07c3a push ecx */
  push32((uint32_t)(ECX));
  /* 10a07c3b call 0x10a05bf0 */
  push32(0x10a07c40u); f_10a05bf0();
  /* 10a07c40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07c43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07c46 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a07c48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07c4b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07c4e jne 0x10a07c5a */
  if (!C.zf) goto L_10a07c5a;
  /* 10a07c50 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a07c52 call 0x10a04b60 */
  push32(0x10a07c57u); f_10a04b60();
  /* 10a07c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a07c5a:;
  /* 10a07c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07c5d push ecx */
  push32((uint32_t)(ECX));
  /* 10a07c5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07c61 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a07c63 push eax */
  push32((uint32_t)(EAX));
  /* 10a07c64 call 0x10a08ba0 */
  push32(0x10a07c69u); f_10a08ba0();
  /* 10a07c69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07c6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07c6f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07c72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a07c75:;
  /* 10a07c75 jmp 0x10a07bfe */
  goto L_10a07bfe;
L_10a07c77:;
  /* 10a07c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a07c79 mov edx, dword ptr [0x10a316c4] */
  EDX = (r32((uint32_t)(0x10a316c4)));
  /* 10a07c7f push edx */
  push32((uint32_t)(EDX));
  /* 10a07c80 call 0x10a06680 */
  push32(0x10a07c85u); f_10a06680();
  /* 10a07c85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07c88 mov dword ptr [0x10a316c4], 0 */
  w32((uint32_t)(0x10a316c4), (0x0u));
  /* 10a07c92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07c95 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a07c9b mov dword ptr [0x10a33200], 1 */
  w32((uint32_t)(0x10a33200), (0x1u));
  /* 10a07ca5 mov esp, ebp */
  ESP = (EBP);
  /* 10a07ca7 pop ebp */
  EBP = (pop32());
  /* 10a07ca8 ret  */
  ESPCHK(0x10a07b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x10a07cb0 (216 bytes, 69 insns) */
void f_10a07cb0(void) {
  FTRACE(0x10a07cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a07cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07cb6 cmp dword ptr [0x10a33210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a33210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07cbd jne 0x10a07cc4 */
  if (!C.zf) goto L_10a07cc4;
  /* 10a07cbf call 0x10a0c4a0 */
  push32(0x10a07cc4u); f_10a0c4a0();
L_10a07cc4:;
  /* 10a07cc4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10a07cc9 push 0x10a31734 */
  push32((uint32_t)(0x10a31734u));
  /* 10a07cce push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07cd0 call dword ptr [0x10a34360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34360))), 0x10a07cd6u);
  /* 10a07cd6 mov dword ptr [0x10a31708], 0x10a31734 */
  w32((uint32_t)(0x10a31708), (0x10a31734u));
  /* 10a07ce0 mov eax, dword ptr [0x10a3322c] */
  EAX = (r32((uint32_t)(0x10a3322c)));
  /* 10a07ce5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a07ce8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a07cea jne 0x10a07cf7 */
  if (!C.zf) goto L_10a07cf7;
  /* 10a07cec mov edx, dword ptr [0x10a31708] */
  EDX = (r32((uint32_t)(0x10a31708)));
  /* 10a07cf2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a07cf5 jmp 0x10a07cff */
  goto L_10a07cff;
L_10a07cf7:;
  /* 10a07cf7 mov eax, dword ptr [0x10a3322c] */
  EAX = (r32((uint32_t)(0x10a3322c)));
  /* 10a07cfc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10a07cff:;
  /* 10a07cff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a07d02 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a07d05 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10a07d08 push edx */
  push32((uint32_t)(EDX));
  /* 10a07d09 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10a07d0c push eax */
  push32((uint32_t)(EAX));
  /* 10a07d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a07d11 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a07d14 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07d15 call 0x10a07d90 */
  push32(0x10a07d1au); f_10a07d90();
  /* 10a07d1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07d1d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10a07d22 push 0x10a2cdc0 */
  push32((uint32_t)(0x10a2cdc0u));
  /* 10a07d27 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a07d29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07d2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07d2f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10a07d32 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07d33 call 0x10a05bf0 */
  push32(0x10a07d38u); f_10a05bf0();
  /* 10a07d38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07d3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a07d3e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07d42 jne 0x10a07d4e */
  if (!C.zf) goto L_10a07d4e;
  /* 10a07d44 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a07d46 call 0x10a04b60 */
  push32(0x10a07d4bu); f_10a04b60();
  /* 10a07d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a07d4e:;
  /* 10a07d4e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10a07d51 push edx */
  push32((uint32_t)(EDX));
  /* 10a07d52 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10a07d55 push eax */
  push32((uint32_t)(EAX));
  /* 10a07d56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07d59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07d5c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10a07d5f push eax */
  push32((uint32_t)(EAX));
  /* 10a07d60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10a07d64 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a07d67 push edx */
  push32((uint32_t)(EDX));
  /* 10a07d68 call 0x10a07d90 */
  push32(0x10a07d6du); f_10a07d90();
  /* 10a07d6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07d70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07d73 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07d76 mov dword ptr [0x10a316ec], eax */
  w32((uint32_t)(0x10a316ec), (EAX));
  /* 10a07d7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a07d7e mov dword ptr [0x10a316f0], ecx */
  w32((uint32_t)(0x10a316f0), (ECX));
  /* 10a07d84 mov esp, ebp */
  ESP = (EBP);
  /* 10a07d86 pop ebp */
  EBP = (pop32());
  /* 10a07d87 ret  */
  ESPCHK(0x10a07cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d90 @ 0x10a07d90 (1060 bytes, 360 insns) */
void f_10a07d90(void) {
  FTRACE(0x10a07d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a07d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a07d91 mov ebp, esp */
  EBP = (ESP);
  /* 10a07d93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07d96 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07d99 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a07d9f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a07da2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10a07da8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a07dab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a07dae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07db2 je 0x10a07dc5 */
  if (C.zf) goto L_10a07dc5;
  /* 10a07db4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a07db7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07dba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a07dbc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a07dbf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07dc2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10a07dc5:;
  /* 10a07dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07dc8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a07dcb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07dce jne 0x10a07e9d */
  if (!C.zf) goto L_10a07e9d;
L_10a07dd4:;
  /* 10a07dd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07dd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07dda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a07ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07de0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a07de3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07de6 je 0x10a07e62 */
  if (C.zf) goto L_10a07e62;
  /* 10a07de8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07deb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a07dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07df0 je 0x10a07e62 */
  if (C.zf) goto L_10a07e62;
  /* 10a07df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07df5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a07df7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a07df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a07dfb mov al, byte ptr [edx + 0x10a32f61] */
  AL = (r8((uint32_t)(EDX + 0x10a32f61)));
  /* 10a07e01 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a07e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07e06 je 0x10a07e37 */
  if (C.zf) goto L_10a07e37;
  /* 10a07e08 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07e0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a07e0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07e10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07e13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a07e15 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07e19 je 0x10a07e37 */
  if (C.zf) goto L_10a07e37;
  /* 10a07e1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07e1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07e21 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a07e23 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a07e25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07e28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07e2b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a07e2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07e31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07e34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a07e37:;
  /* 10a07e37 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07e3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a07e3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07e3f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07e42 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a07e44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07e48 je 0x10a07e5d */
  if (C.zf) goto L_10a07e5d;
  /* 10a07e4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07e50 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a07e52 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a07e54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07e57 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07e5a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a07e5d:;
  /* 10a07e5d jmp 0x10a07dd4 */
  goto L_10a07dd4;
L_10a07e62:;
  /* 10a07e62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07e65 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a07e67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07e6a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07e6d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a07e6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07e73 je 0x10a07e84 */
  if (C.zf) goto L_10a07e84;
  /* 10a07e75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07e78 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a07e7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07e7e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07e81 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10a07e84:;
  /* 10a07e84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07e87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a07e8a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07e8d jne 0x10a07e98 */
  if (!C.zf) goto L_10a07e98;
  /* 10a07e8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07e92 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07e95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a07e98:;
  /* 10a07e98 jmp 0x10a07f6c */
  goto L_10a07f6c;
L_10a07e9d:;
  /* 10a07e9d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07ea0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a07ea2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07ea5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07ea8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a07eaa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07eae je 0x10a07ec3 */
  if (C.zf) goto L_10a07ec3;
  /* 10a07eb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07eb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07eb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a07eb8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a07eba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07ebd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07ec0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a07ec3:;
  /* 10a07ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07ec6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a07ec8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10a07ecb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07ece add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07ed1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a07ed4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07ed7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a07edd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a07edf mov dl, byte ptr [ecx + 0x10a32f61] */
  DL = (r8((uint32_t)(ECX + 0x10a32f61)));
  /* 10a07ee5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a07ee8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a07eea je 0x10a07f1b */
  if (C.zf) goto L_10a07f1b;
  /* 10a07eec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07eef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a07ef1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07ef4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a07ef7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a07ef9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07efd je 0x10a07f12 */
  if (C.zf) goto L_10a07f12;
  /* 10a07eff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07f02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07f05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a07f07 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a07f09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07f0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07f0f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a07f12:;
  /* 10a07f12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07f15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07f18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a07f1b:;
  /* 10a07f1b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07f1e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a07f24 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07f27 je 0x10a07f47 */
  if (C.zf) goto L_10a07f47;
  /* 10a07f29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07f2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a07f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07f33 je 0x10a07f47 */
  if (C.zf) goto L_10a07f47;
  /* 10a07f35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07f38 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a07f3e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07f41 jne 0x10a07e9d */
  if (!C.zf) goto L_10a07e9d;
L_10a07f47:;
  /* 10a07f47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a07f4a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a07f50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a07f52 jne 0x10a07f5f */
  if (!C.zf) goto L_10a07f5f;
  /* 10a07f54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07f57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a07f5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a07f5d jmp 0x10a07f6c */
  goto L_10a07f6c;
L_10a07f5f:;
  /* 10a07f5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07f63 je 0x10a07f6c */
  if (C.zf) goto L_10a07f6c;
  /* 10a07f65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07f68 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10a07f6c:;
  /* 10a07f6c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10a07f73:;
  /* 10a07f73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07f76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a07f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a07f7b je 0x10a07f9e */
  if (C.zf) goto L_10a07f9e;
L_10a07f7d:;
  /* 10a07f7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07f80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a07f83 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07f86 je 0x10a07f93 */
  if (C.zf) goto L_10a07f93;
  /* 10a07f88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07f8b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a07f8e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07f91 jne 0x10a07f9e */
  if (!C.zf) goto L_10a07f9e;
L_10a07f93:;
  /* 10a07f93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07f96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07f99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a07f9c jmp 0x10a07f7d */
  goto L_10a07f7d;
L_10a07f9e:;
  /* 10a07f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07fa1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a07fa4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a07fa6 jne 0x10a07fad */
  if (!C.zf) goto L_10a07fad;
  /* 10a07fa8 jmp 0x10a0818b */
  goto L_10a0818b;
L_10a07fad:;
  /* 10a07fad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07fb1 je 0x10a07fc4 */
  if (C.zf) goto L_10a07fc4;
  /* 10a07fb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a07fb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a07fb9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a07fbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a07fbe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07fc1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a07fc4:;
  /* 10a07fc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a07fc7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a07fc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07fcc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a07fcf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10a07fd1:;
  /* 10a07fd1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a07fd8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a07fdf:;
  /* 10a07fdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07fe2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a07fe5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a07fe8 jne 0x10a07ffe */
  if (!C.zf) goto L_10a07ffe;
  /* 10a07fea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a07fed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07ff0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a07ff3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a07ff6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a07ff9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a07ffc jmp 0x10a07fdf */
  goto L_10a07fdf;
L_10a07ffe:;
  /* 10a07ffe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08001 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a08004 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08007 jne 0x10a0805a */
  if (!C.zf) goto L_10a0805a;
  /* 10a08009 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0800c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0800e mov ecx, 2 */
  ECX = (0x2u);
  /* 10a08013 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a08015 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a08017 jne 0x10a08052 */
  if (!C.zf) goto L_10a08052;
  /* 10a08019 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0801d je 0x10a0803f */
  if (C.zf) goto L_10a0803f;
  /* 10a0801f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08022 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a08026 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08029 jne 0x10a08036 */
  if (!C.zf) goto L_10a08036;
  /* 10a0802b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0802e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08031 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a08034 jmp 0x10a0803d */
  goto L_10a0803d;
L_10a08036:;
  /* 10a08036 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a0803d:;
  /* 10a0803d jmp 0x10a08046 */
  goto L_10a08046;
L_10a0803f:;
  /* 10a0803f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a08046:;
  /* 10a08046 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a08048 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0804c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10a0804f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a08052:;
  /* 10a08052 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a08055 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a08057 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a0805a:;
  /* 10a0805a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0805d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a08060 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08063 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a08066 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a08068 je 0x10a0808e */
  if (C.zf) goto L_10a0808e;
  /* 10a0806a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0806e je 0x10a0807f */
  if (C.zf) goto L_10a0807f;
  /* 10a08070 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08073 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10a08076 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08079 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0807c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10a0807f:;
  /* 10a0807f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a08082 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a08084 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08087 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0808a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a0808c jmp 0x10a0805a */
  goto L_10a0805a;
L_10a0808e:;
  /* 10a0808e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08091 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a08094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a08096 je 0x10a080b4 */
  if (C.zf) goto L_10a080b4;
  /* 10a08098 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0809c jne 0x10a080b9 */
  if (!C.zf) goto L_10a080b9;
  /* 10a0809e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a080a1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a080a4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a080a7 je 0x10a080b4 */
  if (C.zf) goto L_10a080b4;
  /* 10a080a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a080ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a080af cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a080b2 jne 0x10a080b9 */
  if (!C.zf) goto L_10a080b9;
L_10a080b4:;
  /* 10a080b4 jmp 0x10a08164 */
  goto L_10a08164;
L_10a080b9:;
  /* 10a080b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a080bd je 0x10a08156 */
  if (C.zf) goto L_10a08156;
  /* 10a080c3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a080c7 je 0x10a0811d */
  if (C.zf) goto L_10a0811d;
  /* 10a080c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a080cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a080ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a080d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a080d2 mov cl, byte ptr [eax + 0x10a32f61] */
  CL = (r8((uint32_t)(EAX + 0x10a32f61)));
  /* 10a080d8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a080db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a080dd je 0x10a08108 */
  if (C.zf) goto L_10a08108;
  /* 10a080df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a080e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a080e5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a080e7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a080e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a080ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a080ef mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10a080f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a080f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a080f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a080fb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a080fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a08100 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08103 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a08106 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a08108:;
  /* 10a08108 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0810b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0810e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a08110 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a08112 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08115 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08118 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a0811b jmp 0x10a08149 */
  goto L_10a08149;
L_10a0811d:;
  /* 10a0811d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08120 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a08122 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a08124 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a08126 mov cl, byte ptr [eax + 0x10a32f61] */
  CL = (r8((uint32_t)(EAX + 0x10a32f61)));
  /* 10a0812c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0812f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a08131 je 0x10a08149 */
  if (C.zf) goto L_10a08149;
  /* 10a08133 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08136 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08139 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0813c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0813f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a08141 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08144 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a08147 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a08149:;
  /* 10a08149 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0814c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0814e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08151 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a08154 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a08156:;
  /* 10a08156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08159 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0815c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0815f jmp 0x10a07fd1 */
  goto L_10a07fd1;
L_10a08164:;
  /* 10a08164 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08168 je 0x10a08179 */
  if (C.zf) goto L_10a08179;
  /* 10a0816a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0816d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a08170 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08173 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08176 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10a08179:;
  /* 10a08179 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a0817c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a0817e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08181 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a08184 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a08186 jmp 0x10a07f73 */
  goto L_10a07f73;
L_10a0818b:;
  /* 10a0818b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0818f je 0x10a081a3 */
  if (C.zf) goto L_10a081a3;
  /* 10a08191 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08194 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a0819a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0819d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a081a0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a081a3:;
  /* 10a081a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a081a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a081a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a081ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a081ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a081b0 mov esp, ebp */
  ESP = (EBP);
  /* 10a081b2 pop ebp */
  EBP = (pop32());
  /* 10a081b3 ret  */
  ESPCHK(0x10a07d90u, _esp0);
  ESP += 4; return;
}

/* FUN_100081c0 @ 0x10a081c0 (537 bytes, 173 insns) */
void f_10a081c0(void) {
  FTRACE(0x10a081c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a081c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a081c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a081c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a081c6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10a081cd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10a081d4 cmp dword ptr [0x10a31838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a081db jne 0x10a0821a */
  if (!C.zf) goto L_10a0821a;
  /* 10a081dd call dword ptr [0x10a343b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b8))), 0x10a081e3u);
  /* 10a081e3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a081e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a081ea je 0x10a081f8 */
  if (C.zf) goto L_10a081f8;
  /* 10a081ec mov dword ptr [0x10a31838], 1 */
  w32((uint32_t)(0x10a31838), (0x1u));
  /* 10a081f6 jmp 0x10a0821a */
  goto L_10a0821a;
L_10a081f8:;
  /* 10a081f8 call dword ptr [0x10a343b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b4))), 0x10a081feu);
  /* 10a081fe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a08201 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08205 je 0x10a08213 */
  if (C.zf) goto L_10a08213;
  /* 10a08207 mov dword ptr [0x10a31838], 2 */
  w32((uint32_t)(0x10a31838), (0x2u));
  /* 10a08211 jmp 0x10a0821a */
  goto L_10a0821a;
L_10a08213:;
  /* 10a08213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a08215 jmp 0x10a083d5 */
  goto L_10a083d5;
L_10a0821a:;
  /* 10a0821a cmp dword ptr [0x10a31838], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a31838))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08221 jne 0x10a0831e */
  if (!C.zf) goto L_10a0831e;
  /* 10a08227 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0822b jne 0x10a08243 */
  if (!C.zf) goto L_10a08243;
  /* 10a0822d call dword ptr [0x10a343b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b8))), 0x10a08233u);
  /* 10a08233 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a08236 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0823a jne 0x10a08243 */
  if (!C.zf) goto L_10a08243;
  /* 10a0823c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0823e jmp 0x10a083d5 */
  goto L_10a083d5;
L_10a08243:;
  /* 10a08243 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a08246 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a08249:;
  /* 10a08249 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0824c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a0824e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10a08251 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a08253 je 0x10a08275 */
  if (C.zf) goto L_10a08275;
  /* 10a08255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08258 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0825b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0825e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08261 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a08263 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10a08266 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a08268 jne 0x10a08273 */
  if (!C.zf) goto L_10a08273;
  /* 10a0826a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0826d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08270 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a08273:;
  /* 10a08273 jmp 0x10a08249 */
  goto L_10a08249;
L_10a08275:;
  /* 10a08275 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08278 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0827b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a0827d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08280 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a08283 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08285 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08287 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08289 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0828b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0828e push edx */
  push32((uint32_t)(EDX));
  /* 10a0828f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a08292 push eax */
  push32((uint32_t)(EAX));
  /* 10a08293 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08295 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08297 call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a0829du);
  /* 10a0829d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a082a0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a082a4 je 0x10a082c4 */
  if (C.zf) goto L_10a082c4;
  /* 10a082a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10a082a8 push 0x10a2cdcc */
  push32((uint32_t)(0x10a2cdccu));
  /* 10a082ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10a082af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a082b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a082b3 call 0x10a05bf0 */
  push32(0x10a082b8u); f_10a05bf0();
  /* 10a082b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a082bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a082be cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a082c2 jne 0x10a082d5 */
  if (!C.zf) goto L_10a082d5;
L_10a082c4:;
  /* 10a082c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a082c7 push edx */
  push32((uint32_t)(EDX));
  /* 10a082c8 call dword ptr [0x10a343a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343a0))), 0x10a082ceu);
  /* 10a082ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a082d0 jmp 0x10a083d5 */
  goto L_10a083d5;
L_10a082d5:;
  /* 10a082d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a082d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a082d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a082dc push eax */
  push32((uint32_t)(EAX));
  /* 10a082dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a082e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a082e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a082e4 push edx */
  push32((uint32_t)(EDX));
  /* 10a082e5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a082e8 push eax */
  push32((uint32_t)(EAX));
  /* 10a082e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a082eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a082ed call dword ptr [0x10a343b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b0))), 0x10a082f3u);
  /* 10a082f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a082f5 jne 0x10a0830c */
  if (!C.zf) goto L_10a0830c;
  /* 10a082f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a082f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a082fc push ecx */
  push32((uint32_t)(ECX));
  /* 10a082fd call 0x10a06680 */
  push32(0x10a08302u); f_10a06680();
  /* 10a08302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08305 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10a0830c:;
  /* 10a0830c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0830f push edx */
  push32((uint32_t)(EDX));
  /* 10a08310 call dword ptr [0x10a343a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343a0))), 0x10a08316u);
  /* 10a08316 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a08319 jmp 0x10a083d5 */
  goto L_10a083d5;
L_10a0831e:;
  /* 10a0831e cmp dword ptr [0x10a31838], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a31838))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08325 jne 0x10a083d3 */
  if (!C.zf) goto L_10a083d3;
  /* 10a0832b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0832f jne 0x10a08347 */
  if (!C.zf) goto L_10a08347;
  /* 10a08331 call dword ptr [0x10a343b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343b4))), 0x10a08337u);
  /* 10a08337 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a0833a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0833e jne 0x10a08347 */
  if (!C.zf) goto L_10a08347;
  /* 10a08340 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a08342 jmp 0x10a083d5 */
  goto L_10a083d5;
L_10a08347:;
  /* 10a08347 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a0834a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a0834d:;
  /* 10a0834d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a08350 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a08353 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a08355 je 0x10a08375 */
  if (C.zf) goto L_10a08375;
  /* 10a08357 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0835a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0835d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a08360 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a08363 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a08366 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a08368 jne 0x10a08373 */
  if (!C.zf) goto L_10a08373;
  /* 10a0836a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0836d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08370 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a08373:;
  /* 10a08373 jmp 0x10a0834d */
  goto L_10a0834d;
L_10a08375:;
  /* 10a08375 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a08378 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0837b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0837e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a08381 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10a08386 push 0x10a2cdcc */
  push32((uint32_t)(0x10a2cdccu));
  /* 10a0838b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0838d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a08390 push edx */
  push32((uint32_t)(EDX));
  /* 10a08391 call 0x10a05bf0 */
  push32(0x10a08396u); f_10a05bf0();
  /* 10a08396 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08399 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a0839c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a083a0 jne 0x10a083b0 */
  if (!C.zf) goto L_10a083b0;
  /* 10a083a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a083a5 push eax */
  push32((uint32_t)(EAX));
  /* 10a083a6 call dword ptr [0x10a343ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343ac))), 0x10a083acu);
  /* 10a083ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a083ae jmp 0x10a083d5 */
  goto L_10a083d5;
L_10a083b0:;
  /* 10a083b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a083b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a083b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a083b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a083b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a083bb push eax */
  push32((uint32_t)(EAX));
  /* 10a083bc call 0x10a0c4d0 */
  push32(0x10a083c1u); f_10a0c4d0();
  /* 10a083c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a083c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a083c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a083c8 call dword ptr [0x10a343ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343ac))), 0x10a083ceu);
  /* 10a083ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a083d1 jmp 0x10a083d5 */
  goto L_10a083d5;
L_10a083d3:;
  /* 10a083d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a083d5:;
  /* 10a083d5 mov esp, ebp */
  ESP = (EBP);
  /* 10a083d7 pop ebp */
  EBP = (pop32());
  /* 10a083d8 ret  */
  ESPCHK(0x10a081c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083e0 @ 0x10a083e0 (77 bytes, 25 insns) */
void f_10a083e0(void) {
  FTRACE(0x10a083e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a083e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a083e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a083e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a083e5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a083ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a083ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a083f0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10a083f3 push eax */
  push32((uint32_t)(EAX));
  /* 10a083f4 call dword ptr [0x10a34378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34378))), 0x10a083fau);
  /* 10a083fa mov dword ptr [0x10a3308c], eax */
  w32((uint32_t)(0x10a3308c), (EAX));
  /* 10a083ff cmp dword ptr [0x10a3308c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3308c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08406 jne 0x10a0840c */
  if (!C.zf) goto L_10a0840c;
  /* 10a08408 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0840a jmp 0x10a0842b */
  goto L_10a0842b;
L_10a0840c:;
  /* 10a0840c call 0x10a09e90 */
  push32(0x10a08411u); f_10a09e90();
  /* 10a08411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a08413 jne 0x10a08426 */
  if (!C.zf) goto L_10a08426;
  /* 10a08415 mov ecx, dword ptr [0x10a3308c] */
  ECX = (r32((uint32_t)(0x10a3308c)));
  /* 10a0841b push ecx */
  push32((uint32_t)(ECX));
  /* 10a0841c call dword ptr [0x10a343bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343bc))), 0x10a08422u);
  /* 10a08422 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a08424 jmp 0x10a0842b */
  goto L_10a0842b;
L_10a08426:;
  /* 10a08426 mov eax, 1 */
  EAX = (0x1u);
L_10a0842b:;
  /* 10a0842b pop ebp */
  EBP = (pop32());
  /* 10a0842c ret  */
  ESPCHK(0x10a083e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x10a08430 (156 bytes, 48 insns) */
void f_10a08430(void) {
  FTRACE(0x10a08430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08430 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08431 mov ebp, esp */
  EBP = (ESP);
  /* 10a08433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08436 mov eax, dword ptr [0x10a33088] */
  EAX = (r32((uint32_t)(0x10a33088)));
  /* 10a0843b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a0843e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a08445 jmp 0x10a08450 */
  goto L_10a08450;
L_10a08447:;
  /* 10a08447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0844a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0844d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a08450:;
  /* 10a08450 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08453 cmp edx, dword ptr [0x10a33084] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a33084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08459 jge 0x10a084a6 */
  if ((C.sf==C.of)) goto L_10a084a6;
  /* 10a0845b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10a08460 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10a08465 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08468 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a0846b push ecx */
  push32((uint32_t)(ECX));
  /* 10a0846c call dword ptr [0x10a34330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34330))), 0x10a08472u);
  /* 10a08472 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a08477 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08479 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0847c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a0847f push eax */
  push32((uint32_t)(EAX));
  /* 10a08480 call dword ptr [0x10a34330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34330))), 0x10a08486u);
  /* 10a08486 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08489 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a0848c push edx */
  push32((uint32_t)(EDX));
  /* 10a0848d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a0848f mov eax, dword ptr [0x10a3308c] */
  EAX = (r32((uint32_t)(0x10a3308c)));
  /* 10a08494 push eax */
  push32((uint32_t)(EAX));
  /* 10a08495 call dword ptr [0x10a34334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34334))), 0x10a0849bu);
  /* 10a0849b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0849e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a084a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a084a4 jmp 0x10a08447 */
  goto L_10a08447;
L_10a084a6:;
  /* 10a084a6 mov edx, dword ptr [0x10a33088] */
  EDX = (r32((uint32_t)(0x10a33088)));
  /* 10a084ac push edx */
  push32((uint32_t)(EDX));
  /* 10a084ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10a084af mov eax, dword ptr [0x10a3308c] */
  EAX = (r32((uint32_t)(0x10a3308c)));
  /* 10a084b4 push eax */
  push32((uint32_t)(EAX));
  /* 10a084b5 call dword ptr [0x10a34334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34334))), 0x10a084bbu);
  /* 10a084bb mov ecx, dword ptr [0x10a3308c] */
  ECX = (r32((uint32_t)(0x10a3308c)));
  /* 10a084c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a084c2 call dword ptr [0x10a343bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a343bc))), 0x10a084c8u);
  /* 10a084c8 mov esp, ebp */
  ESP = (EBP);
  /* 10a084ca pop ebp */
  EBP = (pop32());
  /* 10a084cb ret  */
  ESPCHK(0x10a08430u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10a084d0 (73 bytes, 19 insns) */
void f_10a084d0(void) {
  FTRACE(0x10a084d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a084d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a084d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a084d3 cmp dword ptr [0x10a316cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a316cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a084da je 0x10a084ee */
  if (C.zf) goto L_10a084ee;
  /* 10a084dc cmp dword ptr [0x10a316cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a084e3 jne 0x10a08517 */
  if (!C.zf) goto L_10a08517;
  /* 10a084e5 cmp dword ptr [0x10a316d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a316d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a084ec jne 0x10a08517 */
  if (!C.zf) goto L_10a08517;
L_10a084ee:;
  /* 10a084ee push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10a084f3 call 0x10a08520 */
  push32(0x10a084f8u); f_10a08520();
  /* 10a084f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a084fb cmp dword ptr [0x10a3183c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3183c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08502 je 0x10a0850a */
  if (C.zf) goto L_10a0850a;
  /* 10a08504 call dword ptr [0x10a3183c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3183c))), 0x10a0850au);
L_10a0850a:;
  /* 10a0850a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10a0850f call 0x10a08520 */
  push32(0x10a08514u); f_10a08520();
  /* 10a08514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a08517:;
  /* 10a08517 pop ebp */
  EBP = (pop32());
  /* 10a08518 ret  */
  ESPCHK(0x10a084d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x10a08520 (447 bytes, 131 insns) */
void f_10a08520(void) {
  FTRACE(0x10a08520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08520 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08521 mov ebp, esp */
  EBP = (ESP);
  /* 10a08523 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08529 push ebx */
  push32((uint32_t)(EBX));
  /* 10a0852a push esi */
  push32((uint32_t)(ESI));
  /* 10a0852b push edi */
  push32((uint32_t)(EDI));
  /* 10a0852c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a08533 jmp 0x10a0853e */
  goto L_10a0853e;
L_10a08535:;
  /* 10a08535 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08538 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0853b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a0853e:;
  /* 10a0853e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08542 jae 0x10a08557 */
  if (!C.cf) goto L_10a08557;
  /* 10a08544 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0854a cmp edx, dword ptr [ecx*8 + 0x10a2fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10a2fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08551 jne 0x10a08555 */
  if (!C.zf) goto L_10a08555;
  /* 10a08553 jmp 0x10a08557 */
  goto L_10a08557;
L_10a08555:;
  /* 10a08555 jmp 0x10a08535 */
  goto L_10a08535;
L_10a08557:;
  /* 10a08557 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0855a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0855d cmp ecx, dword ptr [eax*8 + 0x10a2fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10a2fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08564 jne 0x10a086d8 */
  if (!C.zf) goto L_10a086d8;
  /* 10a0856a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08571 je 0x10a08594 */
  if (C.zf) goto L_10a08594;
  /* 10a08573 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08576 mov eax, dword ptr [edx*8 + 0x10a2fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10a2fab4)));
  /* 10a0857d push eax */
  push32((uint32_t)(EAX));
  /* 10a0857e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08580 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08582 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08584 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a08586 call 0x10a04cb0 */
  push32(0x10a0858bu); f_10a04cb0();
  /* 10a0858b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0858e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08591 jne 0x10a08594 */
  if (!C.zf) goto L_10a08594;
  /* 10a08593 int3  */
  x86_unimpl("int3 @ 0x10a08593");
L_10a08594:;
  /* 10a08594 cmp dword ptr [0x10a316cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a316cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0859b je 0x10a085af */
  if (C.zf) goto L_10a085af;
  /* 10a0859d cmp dword ptr [0x10a316cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a316cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a085a4 jne 0x10a085e8 */
  if (!C.zf) goto L_10a085e8;
  /* 10a085a6 cmp dword ptr [0x10a316d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a316d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a085ad jne 0x10a085e8 */
  if (!C.zf) goto L_10a085e8;
L_10a085af:;
  /* 10a085af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a085b1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10a085b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a085b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a085b8 mov eax, dword ptr [edx*8 + 0x10a2fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10a2fab4)));
  /* 10a085bf push eax */
  push32((uint32_t)(EAX));
  /* 10a085c0 call 0x10a08a20 */
  push32(0x10a085c5u); f_10a08a20();
  /* 10a085c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a085c8 push eax */
  push32((uint32_t)(EAX));
  /* 10a085c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a085cc mov edx, dword ptr [ecx*8 + 0x10a2fab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10a2fab4)));
  /* 10a085d3 push edx */
  push32((uint32_t)(EDX));
  /* 10a085d4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a085d6 call dword ptr [0x10a34344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34344))), 0x10a085dcu);
  /* 10a085dc push eax */
  push32((uint32_t)(EAX));
  /* 10a085dd call dword ptr [0x10a34348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34348))), 0x10a085e3u);
  /* 10a085e3 jmp 0x10a086d8 */
  goto L_10a086d8;
L_10a085e8:;
  /* 10a085e8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a085ef je 0x10a086d8 */
  if (C.zf) goto L_10a086d8;
  /* 10a085f5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10a085fa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10a08600 push eax */
  push32((uint32_t)(EAX));
  /* 10a08601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08603 call dword ptr [0x10a34360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34360))), 0x10a08609u);
  /* 10a08609 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0860b jne 0x10a08621 */
  if (!C.zf) goto L_10a08621;
  /* 10a0860d push 0x10a2c634 */
  push32((uint32_t)(0x10a2c634u));
  /* 10a08612 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10a08618 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08619 call 0x10a08ba0 */
  push32(0x10a0861eu); f_10a08ba0();
  /* 10a0861e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a08621:;
  /* 10a08621 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10a08627 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a0862a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0862d push eax */
  push32((uint32_t)(EAX));
  /* 10a0862e call 0x10a08a20 */
  push32(0x10a08633u); f_10a08a20();
  /* 10a08633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08636 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08639 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0863c jbe 0x10a0866a */
  if ((C.cf||C.zf)) goto L_10a0866a;
  /* 10a0863e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10a08644 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08645 call 0x10a08a20 */
  push32(0x10a0864au); f_10a08a20();
  /* 10a0864a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0864d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a08650 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10a08654 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a08657 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a08659 push 0x10a2c630 */
  push32((uint32_t)(0x10a2c630u));
  /* 10a0865e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a08661 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08662 call 0x10a09410 */
  push32(0x10a08667u); f_10a09410();
  /* 10a08667 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0866a:;
  /* 10a0866a push 0x10a2d088 */
  push32((uint32_t)(0x10a2d088u));
  /* 10a0866f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10a08675 push edx */
  push32((uint32_t)(EDX));
  /* 10a08676 call 0x10a08ba0 */
  push32(0x10a0867bu); f_10a08ba0();
  /* 10a0867b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0867e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a08681 push eax */
  push32((uint32_t)(EAX));
  /* 10a08682 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10a08688 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08689 call 0x10a08bb0 */
  push32(0x10a0868eu); f_10a08bb0();
  /* 10a0868e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08691 push 0x10a2c5a8 */
  push32((uint32_t)(0x10a2c5a8u));
  /* 10a08696 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10a0869c push edx */
  push32((uint32_t)(EDX));
  /* 10a0869d call 0x10a08bb0 */
  push32(0x10a086a2u); f_10a08bb0();
  /* 10a086a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a086a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a086a8 mov ecx, dword ptr [eax*8 + 0x10a2fab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10a2fab4)));
  /* 10a086af push ecx */
  push32((uint32_t)(ECX));
  /* 10a086b0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10a086b6 push edx */
  push32((uint32_t)(EDX));
  /* 10a086b7 call 0x10a08bb0 */
  push32(0x10a086bcu); f_10a08bb0();
  /* 10a086bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a086bf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10a086c4 push 0x10a2d060 */
  push32((uint32_t)(0x10a2d060u));
  /* 10a086c9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10a086cf push eax */
  push32((uint32_t)(EAX));
  /* 10a086d0 call 0x10a09350 */
  push32(0x10a086d5u); f_10a09350();
  /* 10a086d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a086d8:;
  /* 10a086d8 pop edi */
  EDI = (pop32());
  /* 10a086d9 pop esi */
  ESI = (pop32());
  /* 10a086da pop ebx */
  EBX = (pop32());
  /* 10a086db mov esp, ebp */
  ESP = (EBP);
  /* 10a086dd pop ebp */
  EBP = (pop32());
  /* 10a086de ret  */
  ESPCHK(0x10a08520u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10a086e0 (80 bytes, 27 insns) */
void f_10a086e0(void) {
  FTRACE(0x10a086e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a086e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a086e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a086e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a086e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a086eb jmp 0x10a086f6 */
  goto L_10a086f6;
L_10a086ed:;
  /* 10a086ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a086f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a086f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a086f6:;
  /* 10a086f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a086fa jae 0x10a0870f */
  if (!C.cf) goto L_10a0870f;
  /* 10a086fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a086ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08702 cmp edx, dword ptr [ecx*8 + 0x10a2fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10a2fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08709 jne 0x10a0870d */
  if (!C.zf) goto L_10a0870d;
  /* 10a0870b jmp 0x10a0870f */
  goto L_10a0870f;
L_10a0870d:;
  /* 10a0870d jmp 0x10a086ed */
  goto L_10a086ed;
L_10a0870f:;
  /* 10a0870f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08712 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08715 cmp ecx, dword ptr [eax*8 + 0x10a2fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10a2fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0871c jne 0x10a0872a */
  if (!C.zf) goto L_10a0872a;
  /* 10a0871e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08721 mov eax, dword ptr [edx*8 + 0x10a2fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10a2fab4)));
  /* 10a08728 jmp 0x10a0872c */
  goto L_10a0872c;
L_10a0872a:;
  /* 10a0872a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a0872c:;
  /* 10a0872c mov esp, ebp */
  ESP = (EBP);
  /* 10a0872e pop ebp */
  EBP = (pop32());
  /* 10a0872f ret  */
  ESPCHK(0x10a086e0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10a08730 (66 bytes, 28 insns) */
void f_10a08730(void) {
  FTRACE(0x10a08730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08730 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08731 mov ebp, esp */
  EBP = (ESP);
  /* 10a08733 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08737 jne 0x10a08757 */
  if (!C.zf) goto L_10a08757;
  /* 10a08739 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0873d jge 0x10a08757 */
  if ((C.sf==C.of)) goto L_10a08757;
  /* 10a0873f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a08741 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08744 push eax */
  push32((uint32_t)(EAX));
  /* 10a08745 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08748 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08749 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0874c push edx */
  push32((uint32_t)(EDX));
  /* 10a0874d call 0x10a08780 */
  push32(0x10a08752u); f_10a08780();
  /* 10a08752 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08755 jmp 0x10a0876d */
  goto L_10a0876d;
L_10a08757:;
  /* 10a08757 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08759 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a0875c push eax */
  push32((uint32_t)(EAX));
  /* 10a0875d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08760 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08761 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08764 push edx */
  push32((uint32_t)(EDX));
  /* 10a08765 call 0x10a08780 */
  push32(0x10a0876au); f_10a08780();
  /* 10a0876a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0876d:;
  /* 10a0876d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08770 pop ebp */
  EBP = (pop32());
  /* 10a08771 ret  */
  ESPCHK(0x10a08730u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10a08780 (194 bytes, 71 insns) */
void f_10a08780(void) {
  FTRACE(0x10a08780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08780 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08781 mov ebp, esp */
  EBP = (ESP);
  /* 10a08783 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08786 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0878c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08790 je 0x10a087a9 */
  if (C.zf) goto L_10a087a9;
  /* 10a08792 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08795 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10a08798 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0879b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0879e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a087a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a087a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a087a6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a087a9:;
  /* 10a087a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a087ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a087af:;
  /* 10a087af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a087b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a087b4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a087b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a087ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a087bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a087bf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a087c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a087c5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a087c9 jbe 0x10a087e1 */
  if ((C.cf||C.zf)) goto L_10a087e1;
  /* 10a087cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a087ce add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a087d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a087d4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a087d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a087d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a087dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a087df jmp 0x10a087f5 */
  goto L_10a087f5;
L_10a087e1:;
  /* 10a087e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a087e4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a087e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a087ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a087ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a087ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a087f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a087f5:;
  /* 10a087f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a087f9 ja 0x10a087af */
  if ((!C.cf&&!C.zf)) goto L_10a087af;
  /* 10a087fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a087fe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a08801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08804 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08807 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a0880a:;
  /* 10a0880a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0880d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a0880f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10a08812 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08815 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08818 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a0881a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a0881c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0881f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10a08822 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a08824 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08827 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a0882a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a0882d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08830 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08833 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a08836 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08839 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0883c jb 0x10a0880a */
  if (C.cf) goto L_10a0880a;
  /* 10a0883e mov esp, ebp */
  ESP = (EBP);
  /* 10a08840 pop ebp */
  EBP = (pop32());
  /* 10a08841 ret  */
  ESPCHK(0x10a08780u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10a08850 (63 bytes, 24 insns) */
void f_10a08850(void) {
  FTRACE(0x10a08850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08850 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08851 mov ebp, esp */
  EBP = (ESP);
  /* 10a08853 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08854 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08858 jne 0x10a08869 */
  if (!C.zf) goto L_10a08869;
  /* 10a0885a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0885e jge 0x10a08869 */
  if ((C.sf==C.of)) goto L_10a08869;
  /* 10a08860 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a08867 jmp 0x10a08870 */
  goto L_10a08870;
L_10a08869:;
  /* 10a08869 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a08870:;
  /* 10a08870 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08873 push eax */
  push32((uint32_t)(EAX));
  /* 10a08874 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08877 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08878 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0887b push edx */
  push32((uint32_t)(EDX));
  /* 10a0887c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0887f push eax */
  push32((uint32_t)(EAX));
  /* 10a08880 call 0x10a08780 */
  push32(0x10a08885u); f_10a08780();
  /* 10a08885 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08888 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0888b mov esp, ebp */
  ESP = (EBP);
  /* 10a0888d pop ebp */
  EBP = (pop32());
  /* 10a0888e ret  */
  ESPCHK(0x10a08850u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10a08890 (30 bytes, 14 insns) */
void f_10a08890(void) {
  FTRACE(0x10a08890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08890 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08891 mov ebp, esp */
  EBP = (ESP);
  /* 10a08893 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08895 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08898 push eax */
  push32((uint32_t)(EAX));
  /* 10a08899 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0889c push ecx */
  push32((uint32_t)(ECX));
  /* 10a0889d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a088a0 push edx */
  push32((uint32_t)(EDX));
  /* 10a088a1 call 0x10a08780 */
  push32(0x10a088a6u); f_10a08780();
  /* 10a088a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a088a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a088ac pop ebp */
  EBP = (pop32());
  /* 10a088ad ret  */
  ESPCHK(0x10a08890u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10a088b0 (72 bytes, 28 insns) */
void f_10a088b0(void) {
  FTRACE(0x10a088b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a088b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a088b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a088b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a088b4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a088b8 jne 0x10a088d1 */
  if (!C.zf) goto L_10a088d1;
  /* 10a088ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a088be jg 0x10a088d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a088d1;
  /* 10a088c0 jl 0x10a088c8 */
  if ((C.sf!=C.of)) goto L_10a088c8;
  /* 10a088c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a088c6 jae 0x10a088d1 */
  if (!C.cf) goto L_10a088d1;
L_10a088c8:;
  /* 10a088c8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a088cf jmp 0x10a088d8 */
  goto L_10a088d8;
L_10a088d1:;
  /* 10a088d1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a088d8:;
  /* 10a088d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a088db push eax */
  push32((uint32_t)(EAX));
  /* 10a088dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a088df push ecx */
  push32((uint32_t)(ECX));
  /* 10a088e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a088e3 push edx */
  push32((uint32_t)(EDX));
  /* 10a088e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a088e7 push eax */
  push32((uint32_t)(EAX));
  /* 10a088e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a088eb push ecx */
  push32((uint32_t)(ECX));
  /* 10a088ec call 0x10a08900 */
  push32(0x10a088f1u); f_10a08900();
  /* 10a088f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a088f4 mov esp, ebp */
  ESP = (EBP);
  /* 10a088f6 pop ebp */
  EBP = (pop32());
  /* 10a088f7 ret  */
  ESPCHK(0x10a088b0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10a08900 (242 bytes, 91 insns) */
void f_10a08900(void) {
  FTRACE(0x10a08900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08900 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08901 mov ebp, esp */
  EBP = (ESP);
  /* 10a08903 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08906 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0890c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08910 je 0x10a08934 */
  if (C.zf) goto L_10a08934;
  /* 10a08912 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08915 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10a08918 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0891b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0891e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a08921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08924 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a08926 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08929 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0892c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0892e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a08931 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a08934:;
  /* 10a08934 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08937 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a0893a:;
  /* 10a0893a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a0893d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a0893f push ecx */
  push32((uint32_t)(ECX));
  /* 10a08940 push eax */
  push32((uint32_t)(EAX));
  /* 10a08941 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08944 push edx */
  push32((uint32_t)(EDX));
  /* 10a08945 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08948 push eax */
  push32((uint32_t)(EAX));
  /* 10a08949 call 0x10a0c880 */
  push32(0x10a0894eu); f_10a0c880();
  /* 10a0894e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a08951 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a08954 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a08956 push edx */
  push32((uint32_t)(EDX));
  /* 10a08957 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08958 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0895b push eax */
  push32((uint32_t)(EAX));
  /* 10a0895c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0895f push ecx */
  push32((uint32_t)(ECX));
  /* 10a08960 call 0x10a0c810 */
  push32(0x10a08965u); f_10a0c810();
  /* 10a08965 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a08968 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10a0896b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0896f jbe 0x10a08987 */
  if ((C.cf||C.zf)) goto L_10a08987;
  /* 10a08971 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a08974 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0897a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a0897c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0897f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08982 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a08985 jmp 0x10a0899b */
  goto L_10a0899b;
L_10a08987:;
  /* 10a08987 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0898a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0898d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08990 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a08992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08995 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08998 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a0899b:;
  /* 10a0899b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0899f ja 0x10a0893a */
  if ((!C.cf&&!C.zf)) goto L_10a0893a;
  /* 10a089a1 jb 0x10a089a9 */
  if (C.cf) goto L_10a089a9;
  /* 10a089a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a089a7 ja 0x10a0893a */
  if ((!C.cf&&!C.zf)) goto L_10a0893a;
L_10a089a9:;
  /* 10a089a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a089ac mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a089af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a089b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a089b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a089b8:;
  /* 10a089b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a089bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a089bd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10a089c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a089c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a089c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a089c8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a089ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a089cd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10a089d0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a089d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a089d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a089d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a089db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a089de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a089e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a089e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a089e7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a089ea jb 0x10a089b8 */
  if (C.cf) goto L_10a089b8;
  /* 10a089ec mov esp, ebp */
  ESP = (EBP);
  /* 10a089ee pop ebp */
  EBP = (pop32());
  /* 10a089ef ret 0x14 */
  ESPCHK(0x10a08900u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10a08a00 (31 bytes, 15 insns) */
void f_10a08a00(void) {
  FTRACE(0x10a08a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08a01 mov ebp, esp */
  EBP = (ESP);
  /* 10a08a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08a05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a08a08 push eax */
  push32((uint32_t)(EAX));
  /* 10a08a09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08a0c push ecx */
  push32((uint32_t)(ECX));
  /* 10a08a0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08a10 push edx */
  push32((uint32_t)(EDX));
  /* 10a08a11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08a14 push eax */
  push32((uint32_t)(EAX));
  /* 10a08a15 call 0x10a08900 */
  push32(0x10a08a1au); f_10a08900();
  /* 10a08a1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08a1d pop ebp */
  EBP = (pop32());
  /* 10a08a1e ret  */
  ESPCHK(0x10a08a00u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10a08a20 (123 bytes, 44 insns) */
void f_10a08a20(void) {
  FTRACE(0x10a08a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08a20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a08a24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a08a2a je 0x10a08a40 */
  if (C.zf) goto L_10a08a40;
L_10a08a2c:;
  /* 10a08a2c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10a08a2e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a08a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a08a31 je 0x10a08a73 */
  if (C.zf) goto L_10a08a73;
  /* 10a08a33 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a08a39 jne 0x10a08a2c */
  if (!C.zf) goto L_10a08a2c;
  /* 10a08a3b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10a08a40:;
  /* 10a08a40 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a08a42 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a08a47 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08a49 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a08a4c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a08a4e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08a51 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a08a56 je 0x10a08a40 */
  if (C.zf) goto L_10a08a40;
  /* 10a08a58 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a08a5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a08a5d je 0x10a08a91 */
  if (C.zf) goto L_10a08a91;
  /* 10a08a5f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a08a61 je 0x10a08a87 */
  if (C.zf) goto L_10a08a87;
  /* 10a08a63 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a08a68 je 0x10a08a7d */
  if (C.zf) goto L_10a08a7d;
  /* 10a08a6a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a08a6f je 0x10a08a73 */
  if (C.zf) goto L_10a08a73;
  /* 10a08a71 jmp 0x10a08a40 */
  goto L_10a08a40;
L_10a08a73:;
  /* 10a08a73 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10a08a76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a08a7a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08a7c ret  */
  ESPCHK(0x10a08a20u, _esp0);
  ESP += 4; return;
L_10a08a7d:;
  /* 10a08a7d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10a08a80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a08a84 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08a86 ret  */
  ESPCHK(0x10a08a20u, _esp0);
  ESP += 4; return;
L_10a08a87:;
  /* 10a08a87 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10a08a8a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a08a8e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08a90 ret  */
  ESPCHK(0x10a08a20u, _esp0);
  ESP += 4; return;
L_10a08a91:;
  /* 10a08a91 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10a08a94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a08a98 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08a9a ret  */
  ESPCHK(0x10a08a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008aa0 @ 0x10a08aa0 (249 bytes, 93 insns) */
void f_10a08aa0(void) {
  FTRACE(0x10a08aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10a08aa3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a08aa7 push esi */
  push32((uint32_t)(ESI));
  /* 10a08aa8 push edi */
  push32((uint32_t)(EDI));
  /* 10a08aa9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10a08aac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a08aaf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10a08ab2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10a08ab5:;
  /* 10a08ab5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08ab9 jne 0x10a08ad9 */
  if (!C.zf) goto L_10a08ad9;
  /* 10a08abb push 0x10a2d0c0 */
  push32((uint32_t)(0x10a2d0c0u));
  /* 10a08ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08ac2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10a08ac4 push 0x10a2d0b4 */
  push32((uint32_t)(0x10a2d0b4u));
  /* 10a08ac9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a08acb call 0x10a04cb0 */
  push32(0x10a08ad0u); f_10a04cb0();
  /* 10a08ad0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08ad3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08ad6 jne 0x10a08ad9 */
  if (!C.zf) goto L_10a08ad9;
  /* 10a08ad8 int3  */
  x86_unimpl("int3 @ 0x10a08ad8");
L_10a08ad9:;
  /* 10a08ad9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a08adb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a08add jne 0x10a08ab5 */
  if (!C.zf) goto L_10a08ab5;
L_10a08adf:;
  /* 10a08adf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08ae3 jne 0x10a08b03 */
  if (!C.zf) goto L_10a08b03;
  /* 10a08ae5 push 0x10a2d0a4 */
  push32((uint32_t)(0x10a2d0a4u));
  /* 10a08aea push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08aec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10a08aee push 0x10a2d0b4 */
  push32((uint32_t)(0x10a2d0b4u));
  /* 10a08af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a08af5 call 0x10a04cb0 */
  push32(0x10a08afau); f_10a04cb0();
  /* 10a08afa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08afd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08b00 jne 0x10a08b03 */
  if (!C.zf) goto L_10a08b03;
  /* 10a08b02 int3  */
  x86_unimpl("int3 @ 0x10a08b02");
L_10a08b03:;
  /* 10a08b03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a08b05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a08b07 jne 0x10a08adf */
  if (!C.zf) goto L_10a08adf;
  /* 10a08b09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10a08b13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08b19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a08b1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08b22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a08b24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08b2a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a08b2d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a08b30 push edx */
  push32((uint32_t)(EDX));
  /* 10a08b31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08b34 push eax */
  push32((uint32_t)(EAX));
  /* 10a08b35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b38 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08b39 call 0x10a0cb80 */
  push32(0x10a08b3eu); f_10a0cb80();
  /* 10a08b3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08b41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a08b44 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b47 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a08b4a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08b4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a08b53 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b56 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08b5a jl 0x10a08b7e */
  if ((C.sf!=C.of)) goto L_10a08b7e;
  /* 10a08b5c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a08b61 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a08b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a08b66 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a08b6c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10a08b6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b72 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a08b74 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08b77 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b7a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a08b7c jmp 0x10a08b8f */
  goto L_10a08b8f;
L_10a08b7e:;
  /* 10a08b7e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08b81 push eax */
  push32((uint32_t)(EAX));
  /* 10a08b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08b84 call 0x10a0c900 */
  push32(0x10a08b89u); f_10a0c900();
  /* 10a08b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08b8c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10a08b8f:;
  /* 10a08b8f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a08b92 pop edi */
  EDI = (pop32());
  /* 10a08b93 pop esi */
  ESI = (pop32());
  /* 10a08b94 pop ebx */
  EBX = (pop32());
  /* 10a08b95 mov esp, ebp */
  ESP = (EBP);
  /* 10a08b97 pop ebp */
  EBP = (pop32());
  /* 10a08b98 ret  */
  ESPCHK(0x10a08aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ba0 @ 0x10a08ba0 (7 bytes, 3 insns) */
void f_10a08ba0(void) {
  FTRACE(0x10a08ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08ba0 push edi */
  push32((uint32_t)(EDI));
  /* 10a08ba1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10a08ba5 jmp 0x10a08c11 */
  jmp_ind(0x10a08c11u); return;
}

/* FUN_10008bb0 @ 0x10a08bb0 (224 bytes, 84 insns) */
void f_10a08bb0(void) {
  FTRACE(0x10a08bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08bb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a08bb4 push edi */
  push32((uint32_t)(EDI));
  /* 10a08bb5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a08bbb je 0x10a08bcc */
  if (C.zf) goto L_10a08bcc;
L_10a08bbd:;
  /* 10a08bbd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10a08bbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a08bc0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a08bc2 je 0x10a08bff */
  if (C.zf) goto L_10a08bff;
  /* 10a08bc4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a08bca jne 0x10a08bbd */
  if (!C.zf) goto L_10a08bbd;
L_10a08bcc:;
  /* 10a08bcc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a08bce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a08bd3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08bd5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a08bd8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a08bda add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08bdd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a08be2 je 0x10a08bcc */
  if (C.zf) goto L_10a08bcc;
  /* 10a08be4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a08be7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a08be9 je 0x10a08c0e */
  if (C.zf) goto L_10a08c0e;
  /* 10a08beb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a08bed je 0x10a08c09 */
  if (C.zf) goto L_10a08c09;
  /* 10a08bef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a08bf4 je 0x10a08c04 */
  if (C.zf) goto L_10a08c04;
  /* 10a08bf6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a08bfb je 0x10a08bff */
  if (C.zf) goto L_10a08bff;
  /* 10a08bfd jmp 0x10a08bcc */
  goto L_10a08bcc;
L_10a08bff:;
  /* 10a08bff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10a08c02 jmp 0x10a08c11 */
  goto L_10a08c11;
L_10a08c04:;
  /* 10a08c04 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10a08c07 jmp 0x10a08c11 */
  goto L_10a08c11;
L_10a08c09:;
  /* 10a08c09 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10a08c0c jmp 0x10a08c11 */
  goto L_10a08c11;
L_10a08c0e:;
  /* 10a08c0e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10a08c11:;
  /* 10a08c11 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a08c15 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a08c1b je 0x10a08c36 */
  if (C.zf) goto L_10a08c36;
L_10a08c1d:;
  /* 10a08c1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a08c1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a08c20 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10a08c22 je 0x10a08c88 */
  if (C.zf) goto L_10a08c88;
  /* 10a08c24 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10a08c26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a08c27 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a08c2d jne 0x10a08c1d */
  if (!C.zf) goto L_10a08c1d;
  /* 10a08c2f jmp 0x10a08c36 */
  goto L_10a08c36;
L_10a08c31:;
  /* 10a08c31 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a08c33 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a08c36:;
  /* 10a08c36 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a08c3b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a08c3d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08c3f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a08c42 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a08c44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a08c46 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08c49 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a08c4e je 0x10a08c31 */
  if (C.zf) goto L_10a08c31;
  /* 10a08c50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10a08c52 je 0x10a08c88 */
  if (C.zf) goto L_10a08c88;
  /* 10a08c54 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10a08c56 je 0x10a08c7f */
  if (C.zf) goto L_10a08c7f;
  /* 10a08c58 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a08c5e je 0x10a08c72 */
  if (C.zf) goto L_10a08c72;
  /* 10a08c60 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a08c66 je 0x10a08c6a */
  if (C.zf) goto L_10a08c6a;
  /* 10a08c68 jmp 0x10a08c31 */
  goto L_10a08c31;
L_10a08c6a:;
  /* 10a08c6a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a08c6c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a08c70 pop edi */
  EDI = (pop32());
  /* 10a08c71 ret  */
  ESPCHK(0x10a08bb0u, _esp0);
  ESP += 4; return;
L_10a08c72:;
  /* 10a08c72 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10a08c75 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a08c79 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10a08c7d pop edi */
  EDI = (pop32());
  /* 10a08c7e ret  */
  ESPCHK(0x10a08bb0u, _esp0);
  ESP += 4; return;
L_10a08c7f:;
  /* 10a08c7f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10a08c82 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a08c86 pop edi */
  EDI = (pop32());
  /* 10a08c87 ret  */
  ESPCHK(0x10a08bb0u, _esp0);
  ESP += 4; return;
L_10a08c88:;
  /* 10a08c88 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10a08c8a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a08c8e pop edi */
  EDI = (pop32());
  /* 10a08c8f ret  */
  ESPCHK(0x10a08bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c90 @ 0x10a08c90 (243 bytes, 91 insns) */
void f_10a08c90(void) {
  FTRACE(0x10a08c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08c91 mov ebp, esp */
  EBP = (ESP);
  /* 10a08c93 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08c96 push ebx */
  push32((uint32_t)(EBX));
  /* 10a08c97 push esi */
  push32((uint32_t)(ESI));
  /* 10a08c98 push edi */
  push32((uint32_t)(EDI));
  /* 10a08c99 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10a08c9c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a08c9f:;
  /* 10a08c9f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08ca3 jne 0x10a08cc3 */
  if (!C.zf) goto L_10a08cc3;
  /* 10a08ca5 push 0x10a2d0c0 */
  push32((uint32_t)(0x10a2d0c0u));
  /* 10a08caa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08cac push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a08cae push 0x10a2d0d0 */
  push32((uint32_t)(0x10a2d0d0u));
  /* 10a08cb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a08cb5 call 0x10a04cb0 */
  push32(0x10a08cbau); f_10a04cb0();
  /* 10a08cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08cbd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08cc0 jne 0x10a08cc3 */
  if (!C.zf) goto L_10a08cc3;
  /* 10a08cc2 int3  */
  x86_unimpl("int3 @ 0x10a08cc2");
L_10a08cc3:;
  /* 10a08cc3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a08cc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a08cc7 jne 0x10a08c9f */
  if (!C.zf) goto L_10a08c9f;
L_10a08cc9:;
  /* 10a08cc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08ccd jne 0x10a08ced */
  if (!C.zf) goto L_10a08ced;
  /* 10a08ccf push 0x10a2d0a4 */
  push32((uint32_t)(0x10a2d0a4u));
  /* 10a08cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08cd6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10a08cd8 push 0x10a2d0d0 */
  push32((uint32_t)(0x10a2d0d0u));
  /* 10a08cdd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a08cdf call 0x10a04cb0 */
  push32(0x10a08ce4u); f_10a04cb0();
  /* 10a08ce4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08ce7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08cea jne 0x10a08ced */
  if (!C.zf) goto L_10a08ced;
  /* 10a08cec int3  */
  x86_unimpl("int3 @ 0x10a08cec");
L_10a08ced:;
  /* 10a08ced xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a08cef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a08cf1 jne 0x10a08cc9 */
  if (!C.zf) goto L_10a08cc9;
  /* 10a08cf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08cf6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10a08cfd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08d03 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a08d06 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08d0c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a08d0e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08d14 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a08d17 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a08d1a push ecx */
  push32((uint32_t)(ECX));
  /* 10a08d1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a08d1e push edx */
  push32((uint32_t)(EDX));
  /* 10a08d1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d22 push eax */
  push32((uint32_t)(EAX));
  /* 10a08d23 call 0x10a0cb80 */
  push32(0x10a08d28u); f_10a0cb80();
  /* 10a08d28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08d2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a08d2e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a08d34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08d37 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a08d3d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d40 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08d44 jl 0x10a08d68 */
  if ((C.sf!=C.of)) goto L_10a08d68;
  /* 10a08d46 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a08d4b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a08d4e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a08d50 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a08d56 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a08d59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d5c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a08d5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08d61 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d64 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a08d66 jmp 0x10a08d79 */
  goto L_10a08d79;
L_10a08d68:;
  /* 10a08d68 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a08d6b push edx */
  push32((uint32_t)(EDX));
  /* 10a08d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a08d6e call 0x10a0c900 */
  push32(0x10a08d73u); f_10a0c900();
  /* 10a08d73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08d76 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10a08d79:;
  /* 10a08d79 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a08d7c pop edi */
  EDI = (pop32());
  /* 10a08d7d pop esi */
  ESI = (pop32());
  /* 10a08d7e pop ebx */
  EBX = (pop32());
  /* 10a08d7f mov esp, ebp */
  ESP = (EBP);
  /* 10a08d81 pop ebp */
  EBP = (pop32());
  /* 10a08d82 ret  */
  ESPCHK(0x10a08c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d90 @ 0x10a08d90 (47 bytes, 17 insns) */
void f_10a08d90(void) {
  FTRACE(0x10a08d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08d90 push ecx */
  push32((uint32_t)(ECX));
  /* 10a08d91 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08d96 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10a08d9a jb 0x10a08db0 */
  if (C.cf) goto L_10a08db0;
L_10a08d9c:;
  /* 10a08d9c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08da2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08da7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10a08da9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08dae jae 0x10a08d9c */
  if (!C.cf) goto L_10a08d9c;
L_10a08db0:;
  /* 10a08db0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08db2 mov eax, esp */
  EAX = (ESP);
  /* 10a08db4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10a08db6 mov esp, ecx */
  ESP = (ECX);
  /* 10a08db8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a08dba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a08dbd push eax */
  push32((uint32_t)(EAX));
  /* 10a08dbe ret  */
  ESPCHK(0x10a08d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dc0 @ 0x10a08dc0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10a08dc0(void) {
  FTRACE(0x10a08dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a08dc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08dc6 push esi */
  push32((uint32_t)(ESI));
  /* 10a08dc7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08dcb je 0x10a08dd3 */
  if (C.zf) goto L_10a08dd3;
  /* 10a08dcd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08dd1 jne 0x10a08dd8 */
  if (!C.zf) goto L_10a08dd8;
L_10a08dd3:;
  /* 10a08dd3 jmp 0x10a08fa8 */
  goto L_10a08fa8;
L_10a08dd8:;
  /* 10a08dd8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08ddc je 0x10a08df4 */
  if (C.zf) goto L_10a08df4;
  /* 10a08dde cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08de2 je 0x10a08df4 */
  if (C.zf) goto L_10a08df4;
  /* 10a08de4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08de8 je 0x10a08df4 */
  if (C.zf) goto L_10a08df4;
  /* 10a08dea cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08dee jne 0x10a08ed1 */
  if (!C.zf) goto L_10a08ed1;
L_10a08df4:;
  /* 10a08df4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a08df6 call 0x10a095f0 */
  push32(0x10a08dfbu); f_10a095f0();
  /* 10a08dfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08dfe cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08e02 je 0x10a08e0a */
  if (C.zf) goto L_10a08e0a;
  /* 10a08e04 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08e08 jne 0x10a08e4f */
  if (!C.zf) goto L_10a08e4f;
L_10a08e0a:;
  /* 10a08e0a cmp dword ptr [0x10a31850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08e11 jne 0x10a08e4f */
  if (!C.zf) goto L_10a08e4f;
  /* 10a08e13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a08e15 push 0x10a08ff0 */
  push32((uint32_t)(0x10a08ff0u));
  /* 10a08e1a call dword ptr [0x10a3432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3432c))), 0x10a08e20u);
  /* 10a08e20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08e23 jne 0x10a08e31 */
  if (!C.zf) goto L_10a08e31;
  /* 10a08e25 mov dword ptr [0x10a31850], 1 */
  w32((uint32_t)(0x10a31850), (0x1u));
  /* 10a08e2f jmp 0x10a08e4f */
  goto L_10a08e4f;
L_10a08e31:;
  /* 10a08e31 call dword ptr [0x10a34388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34388))), 0x10a08e37u);
  /* 10a08e37 mov esi, eax */
  ESI = (EAX);
  /* 10a08e39 call 0x10a0dad0 */
  push32(0x10a08e3eu); f_10a0dad0();
  /* 10a08e3e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10a08e40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a08e42 call 0x10a09690 */
  push32(0x10a08e47u); f_10a09690();
  /* 10a08e47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08e4a jmp 0x10a08fa8 */
  goto L_10a08fa8;
L_10a08e4f:;
  /* 10a08e4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08e52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a08e55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a08e58 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08e5b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a08e5e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08e62 ja 0x10a08ec2 */
  if ((!C.cf&&!C.zf)) goto L_10a08ec2;
  /* 10a08e64 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a08e67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a08e69 mov dl, byte ptr [eax + 0x10a08fcf] */
  DL = (r8((uint32_t)(EAX + 0x10a08fcf)));
  /* 10a08e6f jmp dword ptr [edx*4 + 0x10a08fbb] */
  switch (EDX) {
    case 0: goto L_10a08e76;
    case 1: goto L_10a08eb0;
    case 2: goto L_10a08e8a;
    case 3: goto L_10a08e9d;
    case 4: goto L_10a08ec2;
    default: x86_unimpl("switch@0x10a08e6f out of table"); return;
  }
L_10a08e76:;
  /* 10a08e76 mov ecx, dword ptr [0x10a31840] */
  ECX = (r32((uint32_t)(0x10a31840)));
  /* 10a08e7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a08e7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08e82 mov dword ptr [0x10a31840], edx */
  w32((uint32_t)(0x10a31840), (EDX));
  /* 10a08e88 jmp 0x10a08ec2 */
  goto L_10a08ec2;
L_10a08e8a:;
  /* 10a08e8a mov eax, dword ptr [0x10a31844] */
  EAX = (r32((uint32_t)(0x10a31844)));
  /* 10a08e8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a08e92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08e95 mov dword ptr [0x10a31844], ecx */
  w32((uint32_t)(0x10a31844), (ECX));
  /* 10a08e9b jmp 0x10a08ec2 */
  goto L_10a08ec2;
L_10a08e9d:;
  /* 10a08e9d mov edx, dword ptr [0x10a31848] */
  EDX = (r32((uint32_t)(0x10a31848)));
  /* 10a08ea3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a08ea6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08ea9 mov dword ptr [0x10a31848], eax */
  w32((uint32_t)(0x10a31848), (EAX));
  /* 10a08eae jmp 0x10a08ec2 */
  goto L_10a08ec2;
L_10a08eb0:;
  /* 10a08eb0 mov ecx, dword ptr [0x10a3184c] */
  ECX = (r32((uint32_t)(0x10a3184c)));
  /* 10a08eb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a08eb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08ebc mov dword ptr [0x10a3184c], edx */
  w32((uint32_t)(0x10a3184c), (EDX));
L_10a08ec2:;
  /* 10a08ec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a08ec4 call 0x10a09690 */
  push32(0x10a08ec9u); f_10a09690();
  /* 10a08ec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08ecc jmp 0x10a08fa3 */
  goto L_10a08fa3;
L_10a08ed1:;
  /* 10a08ed1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08ed5 je 0x10a08ee8 */
  if (C.zf) goto L_10a08ee8;
  /* 10a08ed7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08edb je 0x10a08ee8 */
  if (C.zf) goto L_10a08ee8;
  /* 10a08edd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08ee1 je 0x10a08ee8 */
  if (C.zf) goto L_10a08ee8;
  /* 10a08ee3 jmp 0x10a08fa8 */
  goto L_10a08fa8;
L_10a08ee8:;
  /* 10a08ee8 call 0x10a05630 */
  push32(0x10a08eedu); f_10a05630();
  /* 10a08eed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a08ef0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08ef3 cmp dword ptr [eax + 0x50], 0x10a2fc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10a2fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08efa jne 0x10a08f45 */
  if (!C.zf) goto L_10a08f45;
  /* 10a08efc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10a08f01 push 0x10a2d0dc */
  push32((uint32_t)(0x10a2d0dcu));
  /* 10a08f06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a08f08 mov ecx, dword ptr [0x10a2fc80] */
  ECX = (r32((uint32_t)(0x10a2fc80)));
  /* 10a08f0e push ecx */
  push32((uint32_t)(ECX));
  /* 10a08f0f call 0x10a05bf0 */
  push32(0x10a08f14u); f_10a05bf0();
  /* 10a08f14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08f17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08f1a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10a08f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08f20 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08f24 je 0x10a08f43 */
  if (C.zf) goto L_10a08f43;
  /* 10a08f26 mov ecx, dword ptr [0x10a2fc80] */
  ECX = (r32((uint32_t)(0x10a2fc80)));
  /* 10a08f2c push ecx */
  push32((uint32_t)(ECX));
  /* 10a08f2d push 0x10a2fc00 */
  push32((uint32_t)(0x10a2fc00u));
  /* 10a08f32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08f35 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10a08f38 push eax */
  push32((uint32_t)(EAX));
  /* 10a08f39 call 0x10a0c4d0 */
  push32(0x10a08f3eu); f_10a0c4d0();
  /* 10a08f3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08f41 jmp 0x10a08f45 */
  goto L_10a08f45;
L_10a08f43:;
  /* 10a08f43 jmp 0x10a08fa8 */
  goto L_10a08fa8;
L_10a08f45:;
  /* 10a08f45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08f48 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a08f4b push edx */
  push32((uint32_t)(EDX));
  /* 10a08f4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a08f4f push eax */
  push32((uint32_t)(EAX));
  /* 10a08f50 call 0x10a092d0 */
  push32(0x10a08f55u); f_10a092d0();
  /* 10a08f55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08f58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a08f5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08f5f jne 0x10a08f63 */
  if (!C.zf) goto L_10a08f63;
  /* 10a08f61 jmp 0x10a08fa8 */
  goto L_10a08fa8;
L_10a08f63:;
  /* 10a08f63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08f66 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a08f69 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a08f6c:;
  /* 10a08f6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08f6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a08f72 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08f75 jne 0x10a08fa3 */
  if (!C.zf) goto L_10a08fa3;
  /* 10a08f77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08f7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a08f7d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a08f80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a08f83 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08f86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a08f89 mov edx, dword ptr [0x10a2fc84] */
  EDX = (r32((uint32_t)(0x10a2fc84)));
  /* 10a08f8f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a08f92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a08f95 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10a08f98 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a08f9a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a08f9d jb 0x10a08fa1 */
  if (C.cf) goto L_10a08fa1;
  /* 10a08f9f jmp 0x10a08fa3 */
  goto L_10a08fa3;
L_10a08fa1:;
  /* 10a08fa1 jmp 0x10a08f6c */
  goto L_10a08f6c;
L_10a08fa3:;
  /* 10a08fa3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a08fa6 jmp 0x10a08fb6 */
  goto L_10a08fb6;
L_10a08fa8:;
  /* 10a08fa8 call 0x10a0dac0 */
  push32(0x10a08fadu); f_10a0dac0();
  /* 10a08fad mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10a08fb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a08fb6:;
  /* 10a08fb6 pop esi */
  ESI = (pop32());
  /* 10a08fb7 mov esp, ebp */
  ESP = (EBP);
  /* 10a08fb9 pop ebp */
  EBP = (pop32());
  /* 10a08fba ret  */
  ESPCHK(0x10a08dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ff0 @ 0x10a08ff0 (146 bytes, 45 insns) */
void f_10a08ff0(void) {
  FTRACE(0x10a08ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a08ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a08ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10a08ff3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a08ff6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a08ff8 call 0x10a095f0 */
  push32(0x10a08ffdu); f_10a095f0();
  /* 10a08ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09000 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09004 jne 0x10a0901e */
  if (!C.zf) goto L_10a0901e;
  /* 10a09006 mov dword ptr [ebp - 8], 0x10a31840 */
  w32((uint32_t)(EBP + -0x8), (0x10a31840u));
  /* 10a0900d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09010 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a09012 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a09015 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a0901c jmp 0x10a09034 */
  goto L_10a09034;
L_10a0901e:;
  /* 10a0901e mov dword ptr [ebp - 8], 0x10a31844 */
  w32((uint32_t)(EBP + -0x8), (0x10a31844u));
  /* 10a09025 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09028 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a0902a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a0902d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10a09034:;
  /* 10a09034 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09038 jne 0x10a09048 */
  if (!C.zf) goto L_10a09048;
  /* 10a0903a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0903c call 0x10a09690 */
  push32(0x10a09041u); f_10a09690();
  /* 10a09041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a09046 jmp 0x10a0907c */
  goto L_10a0907c;
L_10a09048:;
  /* 10a09048 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0904c je 0x10a0906d */
  if (C.zf) goto L_10a0906d;
  /* 10a0904e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09051 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10a09057 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a09059 call 0x10a09690 */
  push32(0x10a0905eu); f_10a09690();
  /* 10a0905e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09064 push edx */
  push32((uint32_t)(EDX));
  /* 10a09065 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10a09068u);
  /* 10a09068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0906b jmp 0x10a09077 */
  goto L_10a09077;
L_10a0906d:;
  /* 10a0906d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0906f call 0x10a09690 */
  push32(0x10a09074u); f_10a09690();
  /* 10a09074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a09077:;
  /* 10a09077 mov eax, 1 */
  EAX = (0x1u);
L_10a0907c:;
  /* 10a0907c mov esp, ebp */
  ESP = (EBP);
  /* 10a0907e pop ebp */
  EBP = (pop32());
  /* 10a0907f ret 4 */
  ESPCHK(0x10a08ff0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009090 @ 0x10a09090 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10a09090(void) {
  FTRACE(0x10a09090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09090 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09091 mov ebp, esp */
  EBP = (ESP);
  /* 10a09093 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09096 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a0909d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a090a0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a090a3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a090a6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a090a9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a090ac cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a090b0 ja 0x10a0915e */
  if ((!C.cf&&!C.zf)) goto L_10a0915e;
  /* 10a090b6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a090b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a090bb mov dl, byte ptr [eax + 0x10a092b2] */
  DL = (r8((uint32_t)(EAX + 0x10a092b2)));
  /* 10a090c1 jmp dword ptr [edx*4 + 0x10a0929a] */
  switch (EDX) {
    case 0: goto L_10a090c8;
    case 1: goto L_10a09133;
    case 2: goto L_10a09119;
    case 3: goto L_10a090e5;
    case 4: goto L_10a090ff;
    case 5: goto L_10a0915e;
    default: x86_unimpl("switch@0x10a090c1 out of table"); return;
  }
L_10a090c8:;
  /* 10a090c8 mov dword ptr [ebp - 0x18], 0x10a31840 */
  w32((uint32_t)(EBP + -0x18), (0x10a31840u));
  /* 10a090cf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a090d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a090d4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a090d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a090da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a090dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a090e0 jmp 0x10a09166 */
  goto L_10a09166;
L_10a090e5:;
  /* 10a090e5 mov dword ptr [ebp - 0x18], 0x10a31844 */
  w32((uint32_t)(EBP + -0x18), (0x10a31844u));
  /* 10a090ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a090ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a090f1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a090f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a090f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a090fa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a090fd jmp 0x10a09166 */
  goto L_10a09166;
L_10a090ff:;
  /* 10a090ff mov dword ptr [ebp - 0x18], 0x10a31848 */
  w32((uint32_t)(EBP + -0x18), (0x10a31848u));
  /* 10a09106 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a09109 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0910b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a0910e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a09111 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09114 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a09117 jmp 0x10a09166 */
  goto L_10a09166;
L_10a09119:;
  /* 10a09119 mov dword ptr [ebp - 0x18], 0x10a3184c */
  w32((uint32_t)(EBP + -0x18), (0x10a3184cu));
  /* 10a09120 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a09123 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a09125 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a09128 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a0912b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0912e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a09131 jmp 0x10a09166 */
  goto L_10a09166;
L_10a09133:;
  /* 10a09133 call 0x10a05630 */
  push32(0x10a09138u); f_10a05630();
  /* 10a09138 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0913b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0913e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a09141 push edx */
  push32((uint32_t)(EDX));
  /* 10a09142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09145 push eax */
  push32((uint32_t)(EAX));
  /* 10a09146 call 0x10a092d0 */
  push32(0x10a0914bu); f_10a092d0();
  /* 10a0914b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0914e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09151 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a09154 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a09157 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a09159 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a0915c jmp 0x10a09166 */
  goto L_10a09166;
L_10a0915e:;
  /* 10a0915e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a09161 jmp 0x10a09296 */
  goto L_10a09296;
L_10a09166:;
  /* 10a09166 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0916a je 0x10a09176 */
  if (C.zf) goto L_10a09176;
  /* 10a0916c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a0916e call 0x10a095f0 */
  push32(0x10a09173u); f_10a095f0();
  /* 10a09173 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a09176:;
  /* 10a09176 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0917a jne 0x10a09193 */
  if (!C.zf) goto L_10a09193;
  /* 10a0917c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09180 je 0x10a0918c */
  if (C.zf) goto L_10a0918c;
  /* 10a09182 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a09184 call 0x10a09690 */
  push32(0x10a09189u); f_10a09690();
  /* 10a09189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0918c:;
  /* 10a0918c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0918e jmp 0x10a09296 */
  goto L_10a09296;
L_10a09193:;
  /* 10a09193 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09197 jne 0x10a091b0 */
  if (!C.zf) goto L_10a091b0;
  /* 10a09199 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0919d je 0x10a091a9 */
  if (C.zf) goto L_10a091a9;
  /* 10a0919f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a091a1 call 0x10a09690 */
  push32(0x10a091a6u); f_10a09690();
  /* 10a091a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a091a9:;
  /* 10a091a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a091ab call 0x10a053b0 */
  push32(0x10a091b0u); f_10a053b0();
L_10a091b0:;
  /* 10a091b0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a091b4 je 0x10a091c2 */
  if (C.zf) goto L_10a091c2;
  /* 10a091b6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a091ba je 0x10a091c2 */
  if (C.zf) goto L_10a091c2;
  /* 10a091bc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a091c0 jne 0x10a091ee */
  if (!C.zf) goto L_10a091ee;
L_10a091c2:;
  /* 10a091c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a091c5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10a091c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a091cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a091ce mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10a091d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a091d9 jne 0x10a091ee */
  if (!C.zf) goto L_10a091ee;
  /* 10a091db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a091de mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10a091e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a091e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a091e7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10a091ee:;
  /* 10a091ee cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a091f2 jne 0x10a09230 */
  if (!C.zf) goto L_10a09230;
  /* 10a091f4 mov eax, dword ptr [0x10a2fc78] */
  EAX = (r32((uint32_t)(0x10a2fc78)));
  /* 10a091f9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a091fc jmp 0x10a09207 */
  goto L_10a09207;
L_10a091fe:;
  /* 10a091fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a09201 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09204 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a09207:;
  /* 10a09207 mov edx, dword ptr [0x10a2fc78] */
  EDX = (r32((uint32_t)(0x10a2fc78)));
  /* 10a0920d add edx, dword ptr [0x10a2fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a2fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09213 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09216 jge 0x10a0922e */
  if ((C.sf==C.of)) goto L_10a0922e;
  /* 10a09218 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0921b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0921e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09221 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a09224 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10a0922c jmp 0x10a091fe */
  goto L_10a091fe;
L_10a0922e:;
  /* 10a0922e jmp 0x10a09239 */
  goto L_10a09239;
L_10a09230:;
  /* 10a09230 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a09233 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a09239:;
  /* 10a09239 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0923d je 0x10a09249 */
  if (C.zf) goto L_10a09249;
  /* 10a0923f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a09241 call 0x10a09690 */
  push32(0x10a09246u); f_10a09690();
  /* 10a09246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a09249:;
  /* 10a09249 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0924d jne 0x10a09260 */
  if (!C.zf) goto L_10a09260;
  /* 10a0924f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09252 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10a09255 push edx */
  push32((uint32_t)(EDX));
  /* 10a09256 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a09258 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10a0925bu);
  /* 10a0925b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0925e jmp 0x10a0926a */
  goto L_10a0926a;
L_10a09260:;
  /* 10a09260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09263 push eax */
  push32((uint32_t)(EAX));
  /* 10a09264 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10a09267u);
  /* 10a09267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0926a:;
  /* 10a0926a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0926e je 0x10a0927c */
  if (C.zf) goto L_10a0927c;
  /* 10a09270 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09274 je 0x10a0927c */
  if (C.zf) goto L_10a0927c;
  /* 10a09276 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0927a jne 0x10a09294 */
  if (!C.zf) goto L_10a09294;
L_10a0927c:;
  /* 10a0927c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0927f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a09282 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10a09285 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09289 jne 0x10a09294 */
  if (!C.zf) goto L_10a09294;
  /* 10a0928b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0928e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09291 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10a09294:;
  /* 10a09294 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a09296:;
  /* 10a09296 mov esp, ebp */
  ESP = (EBP);
  /* 10a09298 pop ebp */
  EBP = (pop32());
  /* 10a09299 ret  */
  ESPCHK(0x10a09090u, _esp0);
  ESP += 4; return;
}

/* FUN_100092d0 @ 0x10a092d0 (91 bytes, 35 insns) */
void f_10a092d0(void) {
  FTRACE(0x10a092d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a092d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a092d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a092d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a092d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a092d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a092da:;
  /* 10a092da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a092dd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a092e0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a092e3 je 0x10a09303 */
  if (C.zf) goto L_10a09303;
  /* 10a092e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a092e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a092eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a092ee mov ecx, dword ptr [0x10a2fc84] */
  ECX = (r32((uint32_t)(0x10a2fc84)));
  /* 10a092f4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a092f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a092fa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a092fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a092ff jae 0x10a09303 */
  if (!C.cf) goto L_10a09303;
  /* 10a09301 jmp 0x10a092da */
  goto L_10a092da;
L_10a09303:;
  /* 10a09303 mov eax, dword ptr [0x10a2fc84] */
  EAX = (r32((uint32_t)(0x10a2fc84)));
  /* 10a09308 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a0930b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a0930e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09310 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09313 jae 0x10a09325 */
  if (!C.cf) goto L_10a09325;
  /* 10a09315 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09318 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a0931b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0931e jne 0x10a09325 */
  if (!C.zf) goto L_10a09325;
  /* 10a09320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09323 jmp 0x10a09327 */
  goto L_10a09327;
L_10a09325:;
  /* 10a09325 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a09327:;
  /* 10a09327 mov esp, ebp */
  ESP = (EBP);
  /* 10a09329 pop ebp */
  EBP = (pop32());
  /* 10a0932a ret  */
  ESPCHK(0x10a092d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009330 @ 0x10a09330 (13 bytes, 6 insns) */
void f_10a09330(void) {
  FTRACE(0x10a09330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09330 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09331 mov ebp, esp */
  EBP = (ESP);
  /* 10a09333 call 0x10a05630 */
  push32(0x10a09338u); f_10a05630();
  /* 10a09338 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0933b pop ebp */
  EBP = (pop32());
  /* 10a0933c ret  */
  ESPCHK(0x10a09330u, _esp0);
  ESP += 4; return;
}

/* FUN_10009340 @ 0x10a09340 (13 bytes, 6 insns) */
void f_10a09340(void) {
  FTRACE(0x10a09340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09340 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09341 mov ebp, esp */
  EBP = (ESP);
  /* 10a09343 call 0x10a05630 */
  push32(0x10a09348u); f_10a05630();
  /* 10a09348 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0934b pop ebp */
  EBP = (pop32());
  /* 10a0934c ret  */
  ESPCHK(0x10a09340u, _esp0);
  ESP += 4; return;
}

/* FUN_10009350 @ 0x10a09350 (187 bytes, 54 insns) */
void f_10a09350(void) {
  FTRACE(0x10a09350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09350 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09351 mov ebp, esp */
  EBP = (ESP);
  /* 10a09353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09356 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0935d cmp dword ptr [0x10a31854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09364 jne 0x10a093c3 */
  if (!C.zf) goto L_10a093c3;
  /* 10a09366 push 0x10a2c508 */
  push32((uint32_t)(0x10a2c508u));
  /* 10a0936b call dword ptr [0x10a34358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34358))), 0x10a09371u);
  /* 10a09371 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a09374 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09378 je 0x10a09397 */
  if (C.zf) goto L_10a09397;
  /* 10a0937a push 0x10a2d10c */
  push32((uint32_t)(0x10a2d10cu));
  /* 10a0937f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09382 push eax */
  push32((uint32_t)(EAX));
  /* 10a09383 call dword ptr [0x10a34354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34354))), 0x10a09389u);
  /* 10a09389 mov dword ptr [0x10a31854], eax */
  w32((uint32_t)(0x10a31854), (EAX));
  /* 10a0938e cmp dword ptr [0x10a31854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09395 jne 0x10a0939b */
  if (!C.zf) goto L_10a0939b;
L_10a09397:;
  /* 10a09397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a09399 jmp 0x10a09407 */
  goto L_10a09407;
L_10a0939b:;
  /* 10a0939b push 0x10a2d0fc */
  push32((uint32_t)(0x10a2d0fcu));
  /* 10a093a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a093a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a093a4 call dword ptr [0x10a34354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34354))), 0x10a093aau);
  /* 10a093aa mov dword ptr [0x10a31858], eax */
  w32((uint32_t)(0x10a31858), (EAX));
  /* 10a093af push 0x10a2d0e8 */
  push32((uint32_t)(0x10a2d0e8u));
  /* 10a093b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a093b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a093b8 call dword ptr [0x10a34354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34354))), 0x10a093beu);
  /* 10a093be mov dword ptr [0x10a3185c], eax */
  w32((uint32_t)(0x10a3185c), (EAX));
L_10a093c3:;
  /* 10a093c3 cmp dword ptr [0x10a31858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a31858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a093ca je 0x10a093d5 */
  if (C.zf) goto L_10a093d5;
  /* 10a093cc call dword ptr [0x10a31858] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31858))), 0x10a093d2u);
  /* 10a093d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a093d5:;
  /* 10a093d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a093d9 je 0x10a093f1 */
  if (C.zf) goto L_10a093f1;
  /* 10a093db cmp dword ptr [0x10a3185c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a3185c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a093e2 je 0x10a093f1 */
  if (C.zf) goto L_10a093f1;
  /* 10a093e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a093e7 push eax */
  push32((uint32_t)(EAX));
  /* 10a093e8 call dword ptr [0x10a3185c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3185c))), 0x10a093eeu);
  /* 10a093ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a093f1:;
  /* 10a093f1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a093f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a093f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a093f8 push edx */
  push32((uint32_t)(EDX));
  /* 10a093f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a093fc push eax */
  push32((uint32_t)(EAX));
  /* 10a093fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09400 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09401 call dword ptr [0x10a31854] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a31854))), 0x10a09407u);
L_10a09407:;
  /* 10a09407 mov esp, ebp */
  ESP = (EBP);
  /* 10a09409 pop ebp */
  EBP = (pop32());
  /* 10a0940a ret  */
  ESPCHK(0x10a09350u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10a09410 (254 bytes, 109 insns) */
void f_10a09410(void) {
  FTRACE(0x10a09410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09410 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a09414 push edi */
  push32((uint32_t)(EDI));
  /* 10a09415 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a09417 je 0x10a09493 */
  if (C.zf) goto L_10a09493;
  /* 10a09419 push esi */
  push32((uint32_t)(ESI));
  /* 10a0941a push ebx */
  push32((uint32_t)(EBX));
  /* 10a0941b mov ebx, ecx */
  EBX = (ECX);
  /* 10a0941d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10a09421 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10a09427 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10a0942b jne 0x10a09434 */
  if (!C.zf) goto L_10a09434;
  /* 10a0942d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a09430 jne 0x10a094a1 */
  if (!C.zf) goto L_10a094a1;
  /* 10a09432 jmp 0x10a09455 */
  goto L_10a09455;
L_10a09434:;
  /* 10a09434 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a09436 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a09437 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a09439 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a0943a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a0943b je 0x10a09462 */
  if (C.zf) goto L_10a09462;
  /* 10a0943d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a0943f je 0x10a0946a */
  if (C.zf) goto L_10a0946a;
  /* 10a09441 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10a09447 jne 0x10a09434 */
  if (!C.zf) goto L_10a09434;
  /* 10a09449 mov ebx, ecx */
  EBX = (ECX);
  /* 10a0944b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0944e jne 0x10a094a1 */
  if (!C.zf) goto L_10a094a1;
L_10a09450:;
  /* 10a09450 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10a09453 je 0x10a09462 */
  if (C.zf) goto L_10a09462;
L_10a09455:;
  /* 10a09455 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a09457 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a09458 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0945a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a0945b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a0945d je 0x10a0948e */
  if (C.zf) goto L_10a0948e;
  /* 10a0945f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10a09460 jne 0x10a09455 */
  if (!C.zf) goto L_10a09455;
L_10a09462:;
  /* 10a09462 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a09466 pop ebx */
  EBX = (pop32());
  /* 10a09467 pop esi */
  ESI = (pop32());
  /* 10a09468 pop edi */
  EDI = (pop32());
  /* 10a09469 ret  */
  ESPCHK(0x10a09410u, _esp0);
  ESP += 4; return;
L_10a0946a:;
  /* 10a0946a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a09470 je 0x10a09484 */
  if (C.zf) goto L_10a09484;
L_10a09472:;
  /* 10a09472 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a09474 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a09475 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a09476 je 0x10a09506 */
  if (C.zf) goto L_10a09506;
  /* 10a0947c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a09482 jne 0x10a09472 */
  if (!C.zf) goto L_10a09472;
L_10a09484:;
  /* 10a09484 mov ebx, ecx */
  EBX = (ECX);
  /* 10a09486 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a09489 jne 0x10a094f7 */
  if (!C.zf) goto L_10a094f7;
L_10a0948b:;
  /* 10a0948b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a0948d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10a0948e:;
  /* 10a0948e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10a0948f jne 0x10a0948b */
  if (!C.zf) goto L_10a0948b;
  /* 10a09491 pop ebx */
  EBX = (pop32());
  /* 10a09492 pop esi */
  ESI = (pop32());
L_10a09493:;
  /* 10a09493 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a09497 pop edi */
  EDI = (pop32());
  /* 10a09498 ret  */
  ESPCHK(0x10a09410u, _esp0);
  ESP += 4; return;
L_10a09499:;
  /* 10a09499 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a0949b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0949e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a0949f je 0x10a09450 */
  if (C.zf) goto L_10a09450;
L_10a094a1:;
  /* 10a094a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a094a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10a094a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a094aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a094ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a094af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10a094b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a094b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a094b9 je 0x10a09499 */
  if (C.zf) goto L_10a09499;
  /* 10a094bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10a094bd je 0x10a094eb */
  if (C.zf) goto L_10a094eb;
  /* 10a094bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10a094c1 je 0x10a094e1 */
  if (C.zf) goto L_10a094e1;
  /* 10a094c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a094c9 je 0x10a094d7 */
  if (C.zf) goto L_10a094d7;
  /* 10a094cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a094d1 jne 0x10a09499 */
  if (!C.zf) goto L_10a09499;
  /* 10a094d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a094d5 jmp 0x10a094ef */
  goto L_10a094ef;
L_10a094d7:;
  /* 10a094d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a094dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a094df jmp 0x10a094ef */
  goto L_10a094ef;
L_10a094e1:;
  /* 10a094e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a094e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a094e9 jmp 0x10a094ef */
  goto L_10a094ef;
L_10a094eb:;
  /* 10a094eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a094ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10a094ef:;
  /* 10a094ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a094f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a094f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a094f5 je 0x10a09501 */
  if (C.zf) goto L_10a09501;
L_10a094f7:;
  /* 10a094f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a094f9:;
  /* 10a094f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10a094fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a094fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a094ff jne 0x10a094f9 */
  if (!C.zf) goto L_10a094f9;
L_10a09501:;
  /* 10a09501 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10a09504 jne 0x10a0948b */
  if (!C.zf) goto L_10a0948b;
L_10a09506:;
  /* 10a09506 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a0950a pop ebx */
  EBX = (pop32());
  /* 10a0950b pop esi */
  ESI = (pop32());
  /* 10a0950c pop edi */
  EDI = (pop32());
  /* 10a0950d ret  */
  ESPCHK(0x10a09410u, _esp0);
  ESP += 4; return;
}

/* FUN_10009510 @ 0x10a09510 (55 bytes, 16 insns) */
void f_10a09510(void) {
  FTRACE(0x10a09510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09510 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09511 mov ebp, esp */
  EBP = (ESP);
  /* 10a09513 mov eax, dword ptr [0x10a2fb84] */
  EAX = (r32((uint32_t)(0x10a2fb84)));
  /* 10a09518 push eax */
  push32((uint32_t)(EAX));
  /* 10a09519 call dword ptr [0x10a34328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34328))), 0x10a0951fu);
  /* 10a0951f mov ecx, dword ptr [0x10a2fb74] */
  ECX = (r32((uint32_t)(0x10a2fb74)));
  /* 10a09525 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09526 call dword ptr [0x10a34328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34328))), 0x10a0952cu);
  /* 10a0952c mov edx, dword ptr [0x10a2fb64] */
  EDX = (r32((uint32_t)(0x10a2fb64)));
  /* 10a09532 push edx */
  push32((uint32_t)(EDX));
  /* 10a09533 call dword ptr [0x10a34328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34328))), 0x10a09539u);
  /* 10a09539 mov eax, dword ptr [0x10a2fb44] */
  EAX = (r32((uint32_t)(0x10a2fb44)));
  /* 10a0953e push eax */
  push32((uint32_t)(EAX));
  /* 10a0953f call dword ptr [0x10a34328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34328))), 0x10a09545u);
  /* 10a09545 pop ebp */
  EBP = (pop32());
  /* 10a09546 ret  */
  ESPCHK(0x10a09510u, _esp0);
  ESP += 4; return;
}

/* FUN_10009550 @ 0x10a09550 (159 bytes, 47 insns) */
void f_10a09550(void) {
  FTRACE(0x10a09550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09550 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09551 mov ebp, esp */
  EBP = (ESP);
  /* 10a09553 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09554 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a0955b jmp 0x10a09566 */
  goto L_10a09566;
L_10a0955d:;
  /* 10a0955d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09560 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09563 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a09566:;
  /* 10a09566 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0956a jge 0x10a095b9 */
  if ((C.sf==C.of)) goto L_10a095b9;
  /* 10a0956c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0956f cmp dword ptr [ecx*4 + 0x10a2fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10a2fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09577 je 0x10a095b7 */
  if (C.zf) goto L_10a095b7;
  /* 10a09579 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0957d je 0x10a095b7 */
  if (C.zf) goto L_10a095b7;
  /* 10a0957f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09583 je 0x10a095b7 */
  if (C.zf) goto L_10a095b7;
  /* 10a09585 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09589 je 0x10a095b7 */
  if (C.zf) goto L_10a095b7;
  /* 10a0958b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0958f je 0x10a095b7 */
  if (C.zf) goto L_10a095b7;
  /* 10a09591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09594 mov eax, dword ptr [edx*4 + 0x10a2fb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a2fb40)));
  /* 10a0959b push eax */
  push32((uint32_t)(EAX));
  /* 10a0959c call dword ptr [0x10a3439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3439c))), 0x10a095a2u);
  /* 10a095a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a095a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a095a7 mov edx, dword ptr [ecx*4 + 0x10a2fb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a2fb40)));
  /* 10a095ae push edx */
  push32((uint32_t)(EDX));
  /* 10a095af call 0x10a06680 */
  push32(0x10a095b4u); f_10a06680();
  /* 10a095b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a095b7:;
  /* 10a095b7 jmp 0x10a0955d */
  goto L_10a0955d;
L_10a095b9:;
  /* 10a095b9 mov eax, dword ptr [0x10a2fb64] */
  EAX = (r32((uint32_t)(0x10a2fb64)));
  /* 10a095be push eax */
  push32((uint32_t)(EAX));
  /* 10a095bf call dword ptr [0x10a3439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3439c))), 0x10a095c5u);
  /* 10a095c5 mov ecx, dword ptr [0x10a2fb74] */
  ECX = (r32((uint32_t)(0x10a2fb74)));
  /* 10a095cb push ecx */
  push32((uint32_t)(ECX));
  /* 10a095cc call dword ptr [0x10a3439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3439c))), 0x10a095d2u);
  /* 10a095d2 mov edx, dword ptr [0x10a2fb84] */
  EDX = (r32((uint32_t)(0x10a2fb84)));
  /* 10a095d8 push edx */
  push32((uint32_t)(EDX));
  /* 10a095d9 call dword ptr [0x10a3439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3439c))), 0x10a095dfu);
  /* 10a095df mov eax, dword ptr [0x10a2fb44] */
  EAX = (r32((uint32_t)(0x10a2fb44)));
  /* 10a095e4 push eax */
  push32((uint32_t)(EAX));
  /* 10a095e5 call dword ptr [0x10a3439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3439c))), 0x10a095ebu);
  /* 10a095eb mov esp, ebp */
  ESP = (EBP);
  /* 10a095ed pop ebp */
  EBP = (pop32());
  /* 10a095ee ret  */
  ESPCHK(0x10a09550u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f0 @ 0x10a095f0 (151 bytes, 46 insns) */
void f_10a095f0(void) {
  FTRACE(0x10a095f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a095f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a095f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a095f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a095f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a095f7 cmp dword ptr [eax*4 + 0x10a2fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10a2fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a095ff jne 0x10a09672 */
  if (!C.zf) goto L_10a09672;
  /* 10a09601 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10a09606 push 0x10a2d118 */
  push32((uint32_t)(0x10a2d118u));
  /* 10a0960b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0960d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10a0960f call 0x10a05bf0 */
  push32(0x10a09614u); f_10a05bf0();
  /* 10a09614 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09617 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0961a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0961e jne 0x10a0962a */
  if (!C.zf) goto L_10a0962a;
  /* 10a09620 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a09622 call 0x10a04b60 */
  push32(0x10a09627u); f_10a04b60();
  /* 10a09627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0962a:;
  /* 10a0962a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a0962c call 0x10a095f0 */
  push32(0x10a09631u); f_10a095f0();
  /* 10a09631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09634 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09637 cmp dword ptr [ecx*4 + 0x10a2fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10a2fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0963f jne 0x10a0965a */
  if (!C.zf) goto L_10a0965a;
  /* 10a09641 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09644 push edx */
  push32((uint32_t)(EDX));
  /* 10a09645 call dword ptr [0x10a34328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34328))), 0x10a0964bu);
  /* 10a0964b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a0964e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09651 mov dword ptr [eax*4 + 0x10a2fb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10a2fb40), (ECX));
  /* 10a09658 jmp 0x10a09668 */
  goto L_10a09668;
L_10a0965a:;
  /* 10a0965a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a0965c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0965f push edx */
  push32((uint32_t)(EDX));
  /* 10a09660 call 0x10a06680 */
  push32(0x10a09665u); f_10a06680();
  /* 10a09665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a09668:;
  /* 10a09668 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a0966a call 0x10a09690 */
  push32(0x10a0966fu); f_10a09690();
  /* 10a0966f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a09672:;
  /* 10a09672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09675 mov ecx, dword ptr [eax*4 + 0x10a2fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a2fb40)));
  /* 10a0967c push ecx */
  push32((uint32_t)(ECX));
  /* 10a0967d call dword ptr [0x10a34324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34324))), 0x10a09683u);
  /* 10a09683 mov esp, ebp */
  ESP = (EBP);
  /* 10a09685 pop ebp */
  EBP = (pop32());
  /* 10a09686 ret  */
  ESPCHK(0x10a095f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009690 @ 0x10a09690 (22 bytes, 8 insns) */
void f_10a09690(void) {
  FTRACE(0x10a09690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09690 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09691 mov ebp, esp */
  EBP = (ESP);
  /* 10a09693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09696 mov ecx, dword ptr [eax*4 + 0x10a2fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a2fb40)));
  /* 10a0969d push ecx */
  push32((uint32_t)(ECX));
  /* 10a0969e call dword ptr [0x10a34320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34320))), 0x10a096a4u);
  /* 10a096a4 pop ebp */
  EBP = (pop32());
  /* 10a096a5 ret  */
  ESPCHK(0x10a09690u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x10a096b0 (26 bytes, 10 insns) */
void f_10a096b0(void) {
  FTRACE(0x10a096b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a096b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a096b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a096b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a096b6 push eax */
  push32((uint32_t)(EAX));
  /* 10a096b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a096b9 call dword ptr [0x10a3431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a3431c))), 0x10a096bfu);
  /* 10a096bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10a096c4 call dword ptr [0x10a34364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34364))), 0x10a096cau);
  /* 10a096ca pop ebp */
  EBP = (pop32());
  /* 10a096cb ret  */
  ESPCHK(0x10a096b0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10a096d0 (446 bytes, 130 insns) */
void f_10a096d0(void) {
  FTRACE(0x10a096d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a096d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a096d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a096d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a096d6 call 0x10a05630 */
  push32(0x10a096dbu); f_10a05630();
  /* 10a096db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a096de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a096e1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10a096e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a096e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a096e8 push edx */
  push32((uint32_t)(EDX));
  /* 10a096e9 call 0x10a09890 */
  push32(0x10a096eeu); f_10a09890();
  /* 10a096ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a096f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a096f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a096f8 je 0x10a09703 */
  if (C.zf) goto L_10a09703;
  /* 10a096fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a096fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09701 jne 0x10a09712 */
  if (!C.zf) goto L_10a09712;
L_10a09703:;
  /* 10a09703 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09706 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09707 call dword ptr [0x10a34318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34318))), 0x10a0970du);
  /* 10a0970d jmp 0x10a0988a */
  goto L_10a0988a;
L_10a09712:;
  /* 10a09712 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a09715 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09719 jne 0x10a0972f */
  if (!C.zf) goto L_10a0972f;
  /* 10a0971b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0971e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a09725 mov eax, 1 */
  EAX = (0x1u);
  /* 10a0972a jmp 0x10a0988a */
  goto L_10a0988a;
L_10a0972f:;
  /* 10a0972f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a09732 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09736 jne 0x10a09740 */
  if (!C.zf) goto L_10a09740;
  /* 10a09738 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a0973b jmp 0x10a0988a */
  goto L_10a0988a;
L_10a09740:;
  /* 10a09740 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a09743 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a09746 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a09749 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0974c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10a0974f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a09752 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09755 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09758 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10a0975b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0975e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09762 jne 0x10a09867 */
  if (!C.zf) goto L_10a09867;
  /* 10a09768 mov eax, dword ptr [0x10a2fc78] */
  EAX = (r32((uint32_t)(0x10a2fc78)));
  /* 10a0976d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a09770 jmp 0x10a0977b */
  goto L_10a0977b;
L_10a09772:;
  /* 10a09772 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a09775 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09778 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a0977b:;
  /* 10a0977b mov edx, dword ptr [0x10a2fc78] */
  EDX = (r32((uint32_t)(0x10a2fc78)));
  /* 10a09781 add edx, dword ptr [0x10a2fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a2fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09787 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0978a jge 0x10a097a2 */
  if ((C.sf==C.of)) goto L_10a097a2;
  /* 10a0978c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a0978f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a09792 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09795 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a09798 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10a097a0 jmp 0x10a09772 */
  goto L_10a09772;
L_10a097a2:;
  /* 10a097a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a097a5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10a097a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a097ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a097ae cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a097b4 jne 0x10a097c5 */
  if (!C.zf) goto L_10a097c5;
  /* 10a097b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a097b9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10a097c0 jmp 0x10a0984d */
  goto L_10a0984d;
L_10a097c5:;
  /* 10a097c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a097c8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a097ce jne 0x10a097dc */
  if (!C.zf) goto L_10a097dc;
  /* 10a097d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a097d3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10a097da jmp 0x10a0984d */
  goto L_10a0984d;
L_10a097dc:;
  /* 10a097dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a097df cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a097e5 jne 0x10a097f3 */
  if (!C.zf) goto L_10a097f3;
  /* 10a097e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a097ea mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10a097f1 jmp 0x10a0984d */
  goto L_10a0984d;
L_10a097f3:;
  /* 10a097f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a097f6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a097fc jne 0x10a0980a */
  if (!C.zf) goto L_10a0980a;
  /* 10a097fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09801 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10a09808 jmp 0x10a0984d */
  goto L_10a0984d;
L_10a0980a:;
  /* 10a0980a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0980d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09813 jne 0x10a09821 */
  if (!C.zf) goto L_10a09821;
  /* 10a09815 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09818 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10a0981f jmp 0x10a0984d */
  goto L_10a0984d;
L_10a09821:;
  /* 10a09821 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a09824 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a0982a jne 0x10a09838 */
  if (!C.zf) goto L_10a09838;
  /* 10a0982c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0982f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10a09836 jmp 0x10a0984d */
  goto L_10a0984d;
L_10a09838:;
  /* 10a09838 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0983b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09841 jne 0x10a0984d */
  if (!C.zf) goto L_10a0984d;
  /* 10a09843 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09846 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10a0984d:;
  /* 10a0984d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09850 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10a09853 push edx */
  push32((uint32_t)(EDX));
  /* 10a09854 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a09856 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10a09859u);
  /* 10a09859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0985c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a0985f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a09862 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10a09865 jmp 0x10a0987e */
  goto L_10a0987e;
L_10a09867:;
  /* 10a09867 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a0986a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10a09871 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a09874 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a09877 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09878 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10a0987bu);
  /* 10a0987b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a0987e:;
  /* 10a0987e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09881 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a09884 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10a09887 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a0988a:;
  /* 10a0988a mov esp, ebp */
  ESP = (EBP);
  /* 10a0988c pop ebp */
  EBP = (pop32());
  /* 10a0988d ret  */
  ESPCHK(0x10a096d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009890 @ 0x10a09890 (89 bytes, 35 insns) */
void f_10a09890(void) {
  FTRACE(0x10a09890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09890 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09891 mov ebp, esp */
  EBP = (ESP);
  /* 10a09893 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09894 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09897 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a0989a:;
  /* 10a0989a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0989d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a0989f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a098a2 je 0x10a098c2 */
  if (C.zf) goto L_10a098c2;
  /* 10a098a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a098a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a098aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a098ad mov ecx, dword ptr [0x10a2fc84] */
  ECX = (r32((uint32_t)(0x10a2fc84)));
  /* 10a098b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a098b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a098b9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a098bb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a098be jae 0x10a098c2 */
  if (!C.cf) goto L_10a098c2;
  /* 10a098c0 jmp 0x10a0989a */
  goto L_10a0989a;
L_10a098c2:;
  /* 10a098c2 mov eax, dword ptr [0x10a2fc84] */
  EAX = (r32((uint32_t)(0x10a2fc84)));
  /* 10a098c7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a098ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a098cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a098cf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a098d2 jae 0x10a098de */
  if (!C.cf) goto L_10a098de;
  /* 10a098d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a098d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a098d9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a098dc je 0x10a098e2 */
  if (C.zf) goto L_10a098e2;
L_10a098de:;
  /* 10a098de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a098e0 jmp 0x10a098e5 */
  goto L_10a098e5;
L_10a098e2:;
  /* 10a098e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a098e5:;
  /* 10a098e5 mov esp, ebp */
  ESP = (EBP);
  /* 10a098e7 pop ebp */
  EBP = (pop32());
  /* 10a098e8 ret  */
  ESPCHK(0x10a09890u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10a098f0 (48 bytes, 17 insns) */
void f_10a098f0(void) {
  FTRACE(0x10a098f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a098f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a098f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a098f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a098f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a098f6 call 0x10a095f0 */
  push32(0x10a098fbu); f_10a095f0();
  /* 10a098fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a098fe mov eax, dword ptr [0x10a318c4] */
  EAX = (r32((uint32_t)(0x10a318c4)));
  /* 10a09903 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a09906 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09909 mov dword ptr [0x10a318c4], ecx */
  w32((uint32_t)(0x10a318c4), (ECX));
  /* 10a0990f push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09911 call 0x10a09690 */
  push32(0x10a09916u); f_10a09690();
  /* 10a09916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09919 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a0991c mov esp, ebp */
  ESP = (EBP);
  /* 10a0991e pop ebp */
  EBP = (pop32());
  /* 10a0991f ret  */
  ESPCHK(0x10a098f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009920 @ 0x10a09920 (10 bytes, 5 insns) */
void f_10a09920(void) {
  FTRACE(0x10a09920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09920 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09921 mov ebp, esp */
  EBP = (ESP);
  /* 10a09923 mov eax, dword ptr [0x10a318c4] */
  EAX = (r32((uint32_t)(0x10a318c4)));
  /* 10a09928 pop ebp */
  EBP = (pop32());
  /* 10a09929 ret  */
  ESPCHK(0x10a09920u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10a09930 (45 bytes, 19 insns) */
void f_10a09930(void) {
  FTRACE(0x10a09930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09930 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09931 mov ebp, esp */
  EBP = (ESP);
  /* 10a09933 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09934 mov eax, dword ptr [0x10a318c4] */
  EAX = (r32((uint32_t)(0x10a318c4)));
  /* 10a09939 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a0993c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09940 je 0x10a09950 */
  if (C.zf) goto L_10a09950;
  /* 10a09942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09945 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09946 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10a09949u);
  /* 10a09949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a0994c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a0994e jne 0x10a09954 */
  if (!C.zf) goto L_10a09954;
L_10a09950:;
  /* 10a09950 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a09952 jmp 0x10a09959 */
  goto L_10a09959;
L_10a09954:;
  /* 10a09954 mov eax, 1 */
  EAX = (0x1u);
L_10a09959:;
  /* 10a09959 mov esp, ebp */
  ESP = (EBP);
  /* 10a0995b pop ebp */
  EBP = (pop32());
  /* 10a0995c ret  */
  ESPCHK(0x10a09930u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10a09960 (88 bytes, 40 insns) */
void f_10a09960(void) {
  FTRACE(0x10a09960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09960 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a09964 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a09968 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a0996a je 0x10a099b3 */
  if (C.zf) goto L_10a099b3;
  /* 10a0996c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a0996e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10a09972 push edi */
  push32((uint32_t)(EDI));
  /* 10a09973 mov edi, ecx */
  EDI = (ECX);
  /* 10a09975 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09978 jb 0x10a099a7 */
  if (C.cf) goto L_10a099a7;
  /* 10a0997a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a0997c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10a0997f je 0x10a09989 */
  if (C.zf) goto L_10a09989;
  /* 10a09981 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10a09983:;
  /* 10a09983 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a09985 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a09986 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a09987 jne 0x10a09983 */
  if (!C.zf) goto L_10a09983;
L_10a09989:;
  /* 10a09989 mov ecx, eax */
  ECX = (EAX);
  /* 10a0998b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10a0998e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09990 mov ecx, eax */
  ECX = (EAX);
  /* 10a09992 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a09995 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09997 mov ecx, edx */
  ECX = (EDX);
  /* 10a09999 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a0999c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a0999f je 0x10a099a7 */
  if (C.zf) goto L_10a099a7;
  /* 10a099a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a099a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a099a5 je 0x10a099ad */
  if (C.zf) goto L_10a099ad;
L_10a099a7:;
  /* 10a099a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a099a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a099aa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10a099ab jne 0x10a099a7 */
  if (!C.zf) goto L_10a099a7;
L_10a099ad:;
  /* 10a099ad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a099b1 pop edi */
  EDI = (pop32());
  /* 10a099b2 ret  */
  ESPCHK(0x10a09960u, _esp0);
  ESP += 4; return;
L_10a099b3:;
  /* 10a099b3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a099b7 ret  */
  ESPCHK(0x10a09960u, _esp0);
  ESP += 4; return;
}

/* FUN_100099c0 @ 0x10a099c0 (23 bytes, 10 insns) */
void f_10a099c0(void) {
  FTRACE(0x10a099c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a099c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a099c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a099c3 mov eax, dword ptr [0x10a318c0] */
  EAX = (r32((uint32_t)(0x10a318c0)));
  /* 10a099c8 push eax */
  push32((uint32_t)(EAX));
  /* 10a099c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a099cc push ecx */
  push32((uint32_t)(ECX));
  /* 10a099cd call 0x10a099e0 */
  push32(0x10a099d2u); f_10a099e0();
  /* 10a099d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a099d5 pop ebp */
  EBP = (pop32());
  /* 10a099d6 ret  */
  ESPCHK(0x10a099c0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10a099e0 (87 bytes, 34 insns) */
void f_10a099e0(void) {
  FTRACE(0x10a099e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a099e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a099e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a099e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a099e4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a099e8 jbe 0x10a099ee */
  if ((C.cf||C.zf)) goto L_10a099ee;
  /* 10a099ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a099ec jmp 0x10a09a33 */
  goto L_10a09a33;
L_10a099ee:;
  /* 10a099ee cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a099f2 ja 0x10a09a05 */
  if ((!C.cf&&!C.zf)) goto L_10a09a05;
  /* 10a099f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a099f7 push eax */
  push32((uint32_t)(EAX));
  /* 10a099f8 call 0x10a09a40 */
  push32(0x10a099fdu); f_10a09a40();
  /* 10a099fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09a00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a09a03 jmp 0x10a09a0c */
  goto L_10a09a0c;
L_10a09a05:;
  /* 10a09a05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a09a0c:;
  /* 10a09a0c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09a10 jne 0x10a09a18 */
  if (!C.zf) goto L_10a09a18;
  /* 10a09a12 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09a16 jne 0x10a09a1d */
  if (!C.zf) goto L_10a09a1d;
L_10a09a18:;
  /* 10a09a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09a1b jmp 0x10a09a33 */
  goto L_10a09a33;
L_10a09a1d:;
  /* 10a09a1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09a20 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09a21 call 0x10a09930 */
  push32(0x10a09a26u); f_10a09930();
  /* 10a09a26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a09a2b jne 0x10a09a31 */
  if (!C.zf) goto L_10a09a31;
  /* 10a09a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a09a2f jmp 0x10a09a33 */
  goto L_10a09a33;
L_10a09a31:;
  /* 10a09a31 jmp 0x10a099ee */
  goto L_10a099ee;
L_10a09a33:;
  /* 10a09a33 mov esp, ebp */
  ESP = (EBP);
  /* 10a09a35 pop ebp */
  EBP = (pop32());
  /* 10a09a36 ret  */
  ESPCHK(0x10a099e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a40 @ 0x10a09a40 (109 bytes, 37 insns) */
void f_10a09a40(void) {
  FTRACE(0x10a09a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09a41 mov ebp, esp */
  EBP = (ESP);
  /* 10a09a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09a47 cmp eax, dword ptr [0x10a2fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a2fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09a4d ja 0x10a09a7d */
  if ((!C.cf&&!C.zf)) goto L_10a09a7d;
  /* 10a09a4f push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09a51 call 0x10a095f0 */
  push32(0x10a09a56u); f_10a095f0();
  /* 10a09a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09a59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09a5c push ecx */
  push32((uint32_t)(ECX));
  /* 10a09a5d call 0x10a0a580 */
  push32(0x10a09a62u); f_10a0a580();
  /* 10a09a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09a65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a09a68 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09a6a call 0x10a09690 */
  push32(0x10a09a6fu); f_10a09690();
  /* 10a09a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09a72 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09a76 je 0x10a09a7d */
  if (C.zf) goto L_10a09a7d;
  /* 10a09a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09a7b jmp 0x10a09aa9 */
  goto L_10a09aa9;
L_10a09a7d:;
  /* 10a09a7d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09a81 jne 0x10a09a8a */
  if (!C.zf) goto L_10a09a8a;
  /* 10a09a83 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10a09a8a:;
  /* 10a09a8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09a8d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09a90 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10a09a93 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a09a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09a99 push eax */
  push32((uint32_t)(EAX));
  /* 10a09a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a09a9c mov ecx, dword ptr [0x10a3308c] */
  ECX = (r32((uint32_t)(0x10a3308c)));
  /* 10a09aa2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09aa3 call dword ptr [0x10a34314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34314))), 0x10a09aa9u);
L_10a09aa9:;
  /* 10a09aa9 mov esp, ebp */
  ESP = (EBP);
  /* 10a09aab pop ebp */
  EBP = (pop32());
  /* 10a09aac ret  */
  ESPCHK(0x10a09a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ab0 @ 0x10a09ab0 (10 bytes, 5 insns) */
void f_10a09ab0(void) {
  FTRACE(0x10a09ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10a09ab3 mov eax, 1 */
  EAX = (0x1u);
  /* 10a09ab8 pop ebp */
  EBP = (pop32());
  /* 10a09ab9 ret  */
  ESPCHK(0x10a09ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ac0 @ 0x10a09ac0 (173 bytes, 59 insns) */
void f_10a09ac0(void) {
  FTRACE(0x10a09ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10a09ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09ac6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09aca jbe 0x10a09ad3 */
  if ((C.cf||C.zf)) goto L_10a09ad3;
  /* 10a09acc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a09ace jmp 0x10a09b69 */
  goto L_10a09b69;
L_10a09ad3:;
  /* 10a09ad3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09ad5 call 0x10a095f0 */
  push32(0x10a09adau); f_10a095f0();
  /* 10a09ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09add mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09ae0 push eax */
  push32((uint32_t)(EAX));
  /* 10a09ae1 call 0x10a09ef0 */
  push32(0x10a09ae6u); f_10a09ef0();
  /* 10a09ae6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09ae9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a09aec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09af0 je 0x10a09b31 */
  if (C.zf) goto L_10a09b31;
  /* 10a09af2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a09af9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09afc cmp ecx, dword ptr [0x10a2fc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a2fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09b02 ja 0x10a09b22 */
  if ((!C.cf&&!C.zf)) goto L_10a09b22;
  /* 10a09b04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09b07 push edx */
  push32((uint32_t)(EDX));
  /* 10a09b08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09b0b push eax */
  push32((uint32_t)(EAX));
  /* 10a09b0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09b0f push ecx */
  push32((uint32_t)(ECX));
  /* 10a09b10 call 0x10a0adc0 */
  push32(0x10a09b15u); f_10a0adc0();
  /* 10a09b15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a09b1a je 0x10a09b22 */
  if (C.zf) goto L_10a09b22;
  /* 10a09b1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09b1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a09b22:;
  /* 10a09b22 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09b24 call 0x10a09690 */
  push32(0x10a09b29u); f_10a09690();
  /* 10a09b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09b2f jmp 0x10a09b69 */
  goto L_10a09b69;
L_10a09b31:;
  /* 10a09b31 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09b33 call 0x10a09690 */
  push32(0x10a09b38u); f_10a09690();
  /* 10a09b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09b3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09b3f jne 0x10a09b48 */
  if (!C.zf) goto L_10a09b48;
  /* 10a09b41 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10a09b48:;
  /* 10a09b48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09b4b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09b4e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10a09b50 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a09b53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09b56 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09b57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09b5a push edx */
  push32((uint32_t)(EDX));
  /* 10a09b5b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10a09b5d mov eax, dword ptr [0x10a3308c] */
  EAX = (r32((uint32_t)(0x10a3308c)));
  /* 10a09b62 push eax */
  push32((uint32_t)(EAX));
  /* 10a09b63 call dword ptr [0x10a34310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34310))), 0x10a09b69u);
L_10a09b69:;
  /* 10a09b69 mov esp, ebp */
  ESP = (EBP);
  /* 10a09b6b pop ebp */
  EBP = (pop32());
  /* 10a09b6c ret  */
  ESPCHK(0x10a09ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b70 @ 0x10a09b70 (490 bytes, 165 insns) */
void f_10a09b70(void) {
  FTRACE(0x10a09b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09b71 mov ebp, esp */
  EBP = (ESP);
  /* 10a09b73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09b76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09b7a jne 0x10a09b8d */
  if (!C.zf) goto L_10a09b8d;
  /* 10a09b7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09b7f push eax */
  push32((uint32_t)(EAX));
  /* 10a09b80 call 0x10a099c0 */
  push32(0x10a09b85u); f_10a099c0();
  /* 10a09b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09b88 jmp 0x10a09d56 */
  goto L_10a09d56;
L_10a09b8d:;
  /* 10a09b8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09b91 jne 0x10a09ba6 */
  if (!C.zf) goto L_10a09ba6;
  /* 10a09b93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09b96 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09b97 call 0x10a09d60 */
  push32(0x10a09b9cu); f_10a09d60();
  /* 10a09b9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a09ba1 jmp 0x10a09d56 */
  goto L_10a09d56;
L_10a09ba6:;
  /* 10a09ba6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a09bad cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09bb1 ja 0x10a09d29 */
  if ((!C.cf&&!C.zf)) goto L_10a09d29;
  /* 10a09bb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09bb9 call 0x10a095f0 */
  push32(0x10a09bbeu); f_10a095f0();
  /* 10a09bbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09bc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09bc4 push edx */
  push32((uint32_t)(EDX));
  /* 10a09bc5 call 0x10a09ef0 */
  push32(0x10a09bcau); f_10a09ef0();
  /* 10a09bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09bcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a09bd0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09bd4 je 0x10a09cec */
  if (C.zf) goto L_10a09cec;
  /* 10a09bda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09bdd cmp eax, dword ptr [0x10a2fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a2fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09be3 ja 0x10a09c60 */
  if ((!C.cf&&!C.zf)) goto L_10a09c60;
  /* 10a09be5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09be8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09be9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09bec push edx */
  push32((uint32_t)(EDX));
  /* 10a09bed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a09bf0 push eax */
  push32((uint32_t)(EAX));
  /* 10a09bf1 call 0x10a0adc0 */
  push32(0x10a09bf6u); f_10a0adc0();
  /* 10a09bf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a09bfb je 0x10a09c05 */
  if (C.zf) goto L_10a09c05;
  /* 10a09bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09c00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a09c03 jmp 0x10a09c60 */
  goto L_10a09c60;
L_10a09c05:;
  /* 10a09c05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09c08 push edx */
  push32((uint32_t)(EDX));
  /* 10a09c09 call 0x10a0a580 */
  push32(0x10a09c0eu); f_10a0a580();
  /* 10a09c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09c11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a09c14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09c18 je 0x10a09c60 */
  if (C.zf) goto L_10a09c60;
  /* 10a09c1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09c1d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10a09c20 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09c23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a09c26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09c29 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09c2c jae 0x10a09c36 */
  if (!C.cf) goto L_10a09c36;
  /* 10a09c2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09c31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a09c34 jmp 0x10a09c3c */
  goto L_10a09c3c;
L_10a09c36:;
  /* 10a09c36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09c39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a09c3c:;
  /* 10a09c3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a09c3f push edx */
  push32((uint32_t)(EDX));
  /* 10a09c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09c43 push eax */
  push32((uint32_t)(EAX));
  /* 10a09c44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09c47 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09c48 call 0x10a0c4d0 */
  push32(0x10a09c4du); f_10a0c4d0();
  /* 10a09c4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09c50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09c53 push edx */
  push32((uint32_t)(EDX));
  /* 10a09c54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a09c57 push eax */
  push32((uint32_t)(EAX));
  /* 10a09c58 call 0x10a09fb0 */
  push32(0x10a09c5du); f_10a09fb0();
  /* 10a09c5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a09c60:;
  /* 10a09c60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09c64 jne 0x10a09ce0 */
  if (!C.zf) goto L_10a09ce0;
  /* 10a09c66 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09c6a jne 0x10a09c73 */
  if (!C.zf) goto L_10a09c73;
  /* 10a09c6c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10a09c73:;
  /* 10a09c73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09c76 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09c79 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10a09c7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a09c7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09c82 push edx */
  push32((uint32_t)(EDX));
  /* 10a09c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a09c85 mov eax, dword ptr [0x10a3308c] */
  EAX = (r32((uint32_t)(0x10a3308c)));
  /* 10a09c8a push eax */
  push32((uint32_t)(EAX));
  /* 10a09c8b call dword ptr [0x10a34314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34314))), 0x10a09c91u);
  /* 10a09c91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a09c94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09c98 je 0x10a09ce0 */
  if (C.zf) goto L_10a09ce0;
  /* 10a09c9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09c9d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a09ca0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a09ca3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a09ca6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09ca9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09cac jae 0x10a09cb6 */
  if (!C.cf) goto L_10a09cb6;
  /* 10a09cae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09cb1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a09cb4 jmp 0x10a09cbc */
  goto L_10a09cbc;
L_10a09cb6:;
  /* 10a09cb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09cb9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a09cbc:;
  /* 10a09cbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a09cbf push eax */
  push32((uint32_t)(EAX));
  /* 10a09cc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09cc4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09cc7 push edx */
  push32((uint32_t)(EDX));
  /* 10a09cc8 call 0x10a0c4d0 */
  push32(0x10a09ccdu); f_10a0c4d0();
  /* 10a09ccd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09cd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09cd3 push eax */
  push32((uint32_t)(EAX));
  /* 10a09cd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a09cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09cd8 call 0x10a09fb0 */
  push32(0x10a09cddu); f_10a09fb0();
  /* 10a09cdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a09ce0:;
  /* 10a09ce0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09ce2 call 0x10a09690 */
  push32(0x10a09ce7u); f_10a09690();
  /* 10a09ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09cea jmp 0x10a09d29 */
  goto L_10a09d29;
L_10a09cec:;
  /* 10a09cec push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09cee call 0x10a09690 */
  push32(0x10a09cf3u); f_10a09690();
  /* 10a09cf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09cf6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09cfa jne 0x10a09d03 */
  if (!C.zf) goto L_10a09d03;
  /* 10a09cfc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10a09d03:;
  /* 10a09d03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09d06 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09d09 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10a09d0c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10a09d0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09d12 push eax */
  push32((uint32_t)(EAX));
  /* 10a09d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09d16 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a09d19 mov edx, dword ptr [0x10a3308c] */
  EDX = (r32((uint32_t)(0x10a3308c)));
  /* 10a09d1f push edx */
  push32((uint32_t)(EDX));
  /* 10a09d20 call dword ptr [0x10a34310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34310))), 0x10a09d26u);
  /* 10a09d26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a09d29:;
  /* 10a09d29 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09d2d jne 0x10a09d38 */
  if (!C.zf) goto L_10a09d38;
  /* 10a09d2f cmp dword ptr [0x10a318c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a318c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09d36 jne 0x10a09d3d */
  if (!C.zf) goto L_10a09d3d;
L_10a09d38:;
  /* 10a09d38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a09d3b jmp 0x10a09d56 */
  goto L_10a09d56;
L_10a09d3d:;
  /* 10a09d3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a09d40 push eax */
  push32((uint32_t)(EAX));
  /* 10a09d41 call 0x10a09930 */
  push32(0x10a09d46u); f_10a09930();
  /* 10a09d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a09d4b jne 0x10a09d51 */
  if (!C.zf) goto L_10a09d51;
  /* 10a09d4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a09d4f jmp 0x10a09d56 */
  goto L_10a09d56;
L_10a09d51:;
  /* 10a09d51 jmp 0x10a09ba6 */
  goto L_10a09ba6;
L_10a09d56:;
  /* 10a09d56 mov esp, ebp */
  ESP = (EBP);
  /* 10a09d58 pop ebp */
  EBP = (pop32());
  /* 10a09d59 ret  */
  ESPCHK(0x10a09b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d60 @ 0x10a09d60 (104 bytes, 38 insns) */
void f_10a09d60(void) {
  FTRACE(0x10a09d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a09d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a09d61 mov ebp, esp */
  EBP = (ESP);
  /* 10a09d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10a09d64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09d68 jne 0x10a09d6c */
  if (!C.zf) goto L_10a09d6c;
  /* 10a09d6a jmp 0x10a09dc4 */
  goto L_10a09dc4;
L_10a09d6c:;
  /* 10a09d6c push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09d6e call 0x10a095f0 */
  push32(0x10a09d73u); f_10a095f0();
  /* 10a09d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09d76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09d79 push eax */
  push32((uint32_t)(EAX));
  /* 10a09d7a call 0x10a09ef0 */
  push32(0x10a09d7fu); f_10a09ef0();
  /* 10a09d7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09d82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a09d85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a09d89 je 0x10a09da7 */
  if (C.zf) goto L_10a09da7;
  /* 10a09d8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09d8e push ecx */
  push32((uint32_t)(ECX));
  /* 10a09d8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a09d92 push edx */
  push32((uint32_t)(EDX));
  /* 10a09d93 call 0x10a09fb0 */
  push32(0x10a09d98u); f_10a09fb0();
  /* 10a09d98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09d9b push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09d9d call 0x10a09690 */
  push32(0x10a09da2u); f_10a09690();
  /* 10a09da2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09da5 jmp 0x10a09dc4 */
  goto L_10a09dc4;
L_10a09da7:;
  /* 10a09da7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a09da9 call 0x10a09690 */
  push32(0x10a09daeu); f_10a09690();
  /* 10a09dae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a09db1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a09db4 push eax */
  push32((uint32_t)(EAX));
  /* 10a09db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a09db7 mov ecx, dword ptr [0x10a3308c] */
  ECX = (r32((uint32_t)(0x10a3308c)));
  /* 10a09dbd push ecx */
  push32((uint32_t)(ECX));
  /* 10a09dbe call dword ptr [0x10a34334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a34334))), 0x10a09dc4u);
L_10a09dc4:;
  /* 10a09dc4 mov esp, ebp */
  ESP = (EBP);
  /* 10a09dc6 pop ebp */
  EBP = (pop32());
  /* 10a09dc7 ret  */
  ESPCHK(0x10a09d60u, _esp0);
  ESP += 4; return;
}

