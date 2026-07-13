#include "recomp.h"

/* OnInit @ 0x12721005 (5 bytes, 1 insns) */
void f_12721005(void) {
  FTRACE(0x12721005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12721005 jmp 0x12721090 */
  f_12721090(); return;
}

/* thunk_FUN_10001030 @ 0x1272100a (5 bytes, 1 insns) */
void f_1272100a(void) {
  FTRACE(0x1272100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272100a jmp 0x12721030 */
  f_12721030(); return;
}

/* ProcessScenary @ 0x1272100f (5 bytes, 1 insns) */
void f_1272100f(void) {
  FTRACE(0x1272100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1272100f jmp 0x12721a60 */
  f_12721a60(); return;
}

/* FUN_10001030 @ 0x12721030 (67 bytes, 26 insns) */
void f_12721030(void) {
  FTRACE(0x12721030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12721030 push ebp */
  push32((uint32_t)(EBP));
  /* 12721031 mov ebp, esp */
  EBP = (ESP);
  /* 12721033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12721036 push ebx */
  push32((uint32_t)(EBX));
  /* 12721037 push esi */
  push32((uint32_t)(ESI));
  /* 12721038 push edi */
  push32((uint32_t)(EDI));
  /* 12721039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1272103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12721041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12721046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12721048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721052 je 0x12721056 */
  if (C.zf) goto L_12721056;
  /* 12721054 jmp 0x1272105b */
  goto L_1272105b;
L_12721056:;
  /* 12721056 call 0x12721005 */
  push32(0x1272105bu); f_12721005();
L_1272105b:;
  /* 1272105b mov eax, 1 */
  EAX = (0x1u);
  /* 12721060 pop edi */
  EDI = (pop32());
  /* 12721061 pop esi */
  ESI = (pop32());
  /* 12721062 pop ebx */
  EBX = (pop32());
  /* 12721063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721068 call 0x127241a0 */
  push32(0x1272106du); f_127241a0();
  /* 1272106d mov esp, ebp */
  ESP = (EBP);
  /* 1272106f pop ebp */
  EBP = (pop32());
  /* 12721070 ret 0xc */
  ESPCHK(0x12721030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12721090 (2005 bytes, 516 insns) */
void f_12721090(void) {
  FTRACE(0x12721090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12721090 push ebp */
  push32((uint32_t)(EBP));
  /* 12721091 mov ebp, esp */
  EBP = (ESP);
  /* 12721093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12721096 push ebx */
  push32((uint32_t)(EBX));
  /* 12721097 push esi */
  push32((uint32_t)(ESI));
  /* 12721098 push edi */
  push32((uint32_t)(EDI));
  /* 12721099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1272109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 127210a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 127210a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127210a8 mov esi, esp */
  ESI = (ESP);
  /* 127210aa push 0x1274c314 */
  push32((uint32_t)(0x1274c314u));
  /* 127210af push 0x12751400 */
  push32((uint32_t)(0x12751400u));
  /* 127210b4 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x127210bau);
  /* 127210ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127210bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127210bf call 0x127241a0 */
  push32(0x127210c4u); f_127241a0();
  /* 127210c4 mov esi, esp */
  ESI = (ESP);
  /* 127210c6 push 0x1274c308 */
  push32((uint32_t)(0x1274c308u));
  /* 127210cb push 0x12751410 */
  push32((uint32_t)(0x12751410u));
  /* 127210d0 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x127210d6u);
  /* 127210d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127210d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127210db call 0x127241a0 */
  push32(0x127210e0u); f_127241a0();
  /* 127210e0 mov esi, esp */
  ESI = (ESP);
  /* 127210e2 push 0x1274c2fc */
  push32((uint32_t)(0x1274c2fcu));
  /* 127210e7 push 0x12751408 */
  push32((uint32_t)(0x12751408u));
  /* 127210ec call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x127210f2u);
  /* 127210f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127210f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127210f7 call 0x127241a0 */
  push32(0x127210fcu); f_127241a0();
  /* 127210fc mov esi, esp */
  ESI = (ESP);
  /* 127210fe push 0x1274c2f0 */
  push32((uint32_t)(0x1274c2f0u));
  /* 12721103 push 0x12751420 */
  push32((uint32_t)(0x12751420u));
  /* 12721108 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x1272110eu);
  /* 1272110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721113 call 0x127241a0 */
  push32(0x12721118u); f_127241a0();
  /* 12721118 mov esi, esp */
  ESI = (ESP);
  /* 1272111a push 0x1274c2e4 */
  push32((uint32_t)(0x1274c2e4u));
  /* 1272111f push 0x12751418 */
  push32((uint32_t)(0x12751418u));
  /* 12721124 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x1272112au);
  /* 1272112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272112f call 0x127241a0 */
  push32(0x12721134u); f_127241a0();
  /* 12721134 mov esi, esp */
  ESI = (ESP);
  /* 12721136 push 0x1274c2dc */
  push32((uint32_t)(0x1274c2dcu));
  /* 1272113b push 0x12751430 */
  push32((uint32_t)(0x12751430u));
  /* 12721140 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x12721146u);
  /* 12721146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272114b call 0x127241a0 */
  push32(0x12721150u); f_127241a0();
  /* 12721150 mov esi, esp */
  ESI = (ESP);
  /* 12721152 push 0x1274c2d4 */
  push32((uint32_t)(0x1274c2d4u));
  /* 12721157 push 0x12751428 */
  push32((uint32_t)(0x12751428u));
  /* 1272115c call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x12721162u);
  /* 12721162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721167 call 0x127241a0 */
  push32(0x1272116cu); f_127241a0();
  /* 1272116c mov esi, esp */
  ESI = (ESP);
  /* 1272116e push 0x1274c2c4 */
  push32((uint32_t)(0x1274c2c4u));
  /* 12721173 push 0x12751440 */
  push32((uint32_t)(0x12751440u));
  /* 12721178 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x1272117eu);
  /* 1272117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721183 call 0x127241a0 */
  push32(0x12721188u); f_127241a0();
  /* 12721188 mov esi, esp */
  ESI = (ESP);
  /* 1272118a push 0x1274c2b4 */
  push32((uint32_t)(0x1274c2b4u));
  /* 1272118f push 0x12751438 */
  push32((uint32_t)(0x12751438u));
  /* 12721194 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x1272119au);
  /* 1272119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272119f call 0x127241a0 */
  push32(0x127211a4u); f_127241a0();
  /* 127211a4 mov esi, esp */
  ESI = (ESP);
  /* 127211a6 push 0x1274c2a8 */
  push32((uint32_t)(0x1274c2a8u));
  /* 127211ab push 0x12751550 */
  push32((uint32_t)(0x12751550u));
  /* 127211b0 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x127211b6u);
  /* 127211b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127211b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127211bb call 0x127241a0 */
  push32(0x127211c0u); f_127241a0();
  /* 127211c0 mov esi, esp */
  ESI = (ESP);
  /* 127211c2 push 0x1274c29c */
  push32((uint32_t)(0x1274c29cu));
  /* 127211c7 push 0x127515b0 */
  push32((uint32_t)(0x127515b0u));
  /* 127211cc call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x127211d2u);
  /* 127211d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127211d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127211d7 call 0x127241a0 */
  push32(0x127211dcu); f_127241a0();
  /* 127211dc mov esi, esp */
  ESI = (ESP);
  /* 127211de push 0x1274c294 */
  push32((uint32_t)(0x1274c294u));
  /* 127211e3 push 0x127515b8 */
  push32((uint32_t)(0x127515b8u));
  /* 127211e8 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x127211eeu);
  /* 127211ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127211f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127211f3 call 0x127241a0 */
  push32(0x127211f8u); f_127241a0();
  /* 127211f8 mov esi, esp */
  ESI = (ESP);
  /* 127211fa push 0x1274c28c */
  push32((uint32_t)(0x1274c28cu));
  /* 127211ff push 0x12751598 */
  push32((uint32_t)(0x12751598u));
  /* 12721204 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x1272120au);
  /* 1272120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272120f call 0x127241a0 */
  push32(0x12721214u); f_127241a0();
  /* 12721214 mov esi, esp */
  ESI = (ESP);
  /* 12721216 push 0x1274c284 */
  push32((uint32_t)(0x1274c284u));
  /* 1272121b push 0x127515a8 */
  push32((uint32_t)(0x127515a8u));
  /* 12721220 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x12721226u);
  /* 12721226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272122b call 0x127241a0 */
  push32(0x12721230u); f_127241a0();
  /* 12721230 mov esi, esp */
  ESI = (ESP);
  /* 12721232 push 0x1274c27c */
  push32((uint32_t)(0x1274c27cu));
  /* 12721237 push 0x12751580 */
  push32((uint32_t)(0x12751580u));
  /* 1272123c call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x12721242u);
  /* 12721242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721247 call 0x127241a0 */
  push32(0x1272124cu); f_127241a0();
  /* 1272124c mov esi, esp */
  ESI = (ESP);
  /* 1272124e push 0x1274c274 */
  push32((uint32_t)(0x1274c274u));
  /* 12721253 push 0x12751590 */
  push32((uint32_t)(0x12751590u));
  /* 12721258 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x1272125eu);
  /* 1272125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721263 call 0x127241a0 */
  push32(0x12721268u); f_127241a0();
  /* 12721268 mov esi, esp */
  ESI = (ESP);
  /* 1272126a push 0x1274c26c */
  push32((uint32_t)(0x1274c26cu));
  /* 1272126f push 0x12751560 */
  push32((uint32_t)(0x12751560u));
  /* 12721274 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x1272127au);
  /* 1272127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272127f call 0x127241a0 */
  push32(0x12721284u); f_127241a0();
  /* 12721284 mov esi, esp */
  ESI = (ESP);
  /* 12721286 push 0x1274c25c */
  push32((uint32_t)(0x1274c25cu));
  /* 1272128b push 0x12751570 */
  push32((uint32_t)(0x12751570u));
  /* 12721290 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x12721296u);
  /* 12721296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272129b call 0x127241a0 */
  push32(0x127212a0u); f_127241a0();
  /* 127212a0 mov esi, esp */
  ESI = (ESP);
  /* 127212a2 push 0x1274c24c */
  push32((uint32_t)(0x1274c24cu));
  /* 127212a7 push 0x127515e0 */
  push32((uint32_t)(0x127515e0u));
  /* 127212ac call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x127212b2u);
  /* 127212b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127212b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127212b7 call 0x127241a0 */
  push32(0x127212bcu); f_127241a0();
  /* 127212bc mov esi, esp */
  ESI = (ESP);
  /* 127212be push 0x1274c240 */
  push32((uint32_t)(0x1274c240u));
  /* 127212c3 push 0x127515a0 */
  push32((uint32_t)(0x127515a0u));
  /* 127212c8 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x127212ceu);
  /* 127212ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127212d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127212d3 call 0x127241a0 */
  push32(0x127212d8u); f_127241a0();
  /* 127212d8 mov esi, esp */
  ESI = (ESP);
  /* 127212da push 0x1274c234 */
  push32((uint32_t)(0x1274c234u));
  /* 127212df push 0x12751578 */
  push32((uint32_t)(0x12751578u));
  /* 127212e4 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x127212eau);
  /* 127212ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127212ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127212ef call 0x127241a0 */
  push32(0x127212f4u); f_127241a0();
  /* 127212f4 mov esi, esp */
  ESI = (ESP);
  /* 127212f6 push 0x1274c22c */
  push32((uint32_t)(0x1274c22cu));
  /* 127212fb push 0x12751588 */
  push32((uint32_t)(0x12751588u));
  /* 12721300 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x12721306u);
  /* 12721306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272130b call 0x127241a0 */
  push32(0x12721310u); f_127241a0();
  /* 12721310 mov esi, esp */
  ESI = (ESP);
  /* 12721312 push 0x1274c224 */
  push32((uint32_t)(0x1274c224u));
  /* 12721317 push 0x12751558 */
  push32((uint32_t)(0x12751558u));
  /* 1272131c call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x12721322u);
  /* 12721322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721327 call 0x127241a0 */
  push32(0x1272132cu); f_127241a0();
  /* 1272132c mov esi, esp */
  ESI = (ESP);
  /* 1272132e push 0x1274c21c */
  push32((uint32_t)(0x1274c21cu));
  /* 12721333 push 0x127515d8 */
  push32((uint32_t)(0x127515d8u));
  /* 12721338 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x1272133eu);
  /* 1272133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721343 call 0x127241a0 */
  push32(0x12721348u); f_127241a0();
  /* 12721348 mov esi, esp */
  ESI = (ESP);
  /* 1272134a push 0x1274c214 */
  push32((uint32_t)(0x1274c214u));
  /* 1272134f push 0x127515e8 */
  push32((uint32_t)(0x127515e8u));
  /* 12721354 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x1272135au);
  /* 1272135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272135f call 0x127241a0 */
  push32(0x12721364u); f_127241a0();
  /* 12721364 mov esi, esp */
  ESI = (ESP);
  /* 12721366 push 0x1274c208 */
  push32((uint32_t)(0x1274c208u));
  /* 1272136b push 0x127515c8 */
  push32((uint32_t)(0x127515c8u));
  /* 12721370 call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x12721376u);
  /* 12721376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272137b call 0x127241a0 */
  push32(0x12721380u); f_127241a0();
  /* 12721380 mov esi, esp */
  ESI = (ESP);
  /* 12721382 push 0x1274c200 */
  push32((uint32_t)(0x1274c200u));
  /* 12721387 push 0x127515c0 */
  push32((uint32_t)(0x127515c0u));
  /* 1272138c call dword ptr [0x127544b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b4))), 0x12721392u);
  /* 12721392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721397 call 0x127241a0 */
  push32(0x1272139cu); f_127241a0();
  /* 1272139c mov esi, esp */
  ESI = (ESP);
  /* 1272139e push 0x1274c1f4 */
  push32((uint32_t)(0x1274c1f4u));
  /* 127213a3 push 0x127514e8 */
  push32((uint32_t)(0x127514e8u));
  /* 127213a8 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127213aeu);
  /* 127213ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127213b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127213b3 call 0x127241a0 */
  push32(0x127213b8u); f_127241a0();
  /* 127213b8 mov esi, esp */
  ESI = (ESP);
  /* 127213ba push 0x1274c1e8 */
  push32((uint32_t)(0x1274c1e8u));
  /* 127213bf push 0x127514f0 */
  push32((uint32_t)(0x127514f0u));
  /* 127213c4 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127213cau);
  /* 127213ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127213cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127213cf call 0x127241a0 */
  push32(0x127213d4u); f_127241a0();
  /* 127213d4 mov esi, esp */
  ESI = (ESP);
  /* 127213d6 push 0x1274c1e0 */
  push32((uint32_t)(0x1274c1e0u));
  /* 127213db push 0x127514f8 */
  push32((uint32_t)(0x127514f8u));
  /* 127213e0 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127213e6u);
  /* 127213e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127213e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127213eb call 0x127241a0 */
  push32(0x127213f0u); f_127241a0();
  /* 127213f0 mov esi, esp */
  ESI = (ESP);
  /* 127213f2 push 0x1274c1d8 */
  push32((uint32_t)(0x1274c1d8u));
  /* 127213f7 push 0x12751500 */
  push32((uint32_t)(0x12751500u));
  /* 127213fc call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x12721402u);
  /* 12721402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721407 call 0x127241a0 */
  push32(0x1272140cu); f_127241a0();
  /* 1272140c mov esi, esp */
  ESI = (ESP);
  /* 1272140e push 0x1274c1cc */
  push32((uint32_t)(0x1274c1ccu));
  /* 12721413 push 0x12751508 */
  push32((uint32_t)(0x12751508u));
  /* 12721418 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x1272141eu);
  /* 1272141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721423 call 0x127241a0 */
  push32(0x12721428u); f_127241a0();
  /* 12721428 mov esi, esp */
  ESI = (ESP);
  /* 1272142a push 0x1274c1c4 */
  push32((uint32_t)(0x1274c1c4u));
  /* 1272142f push 0x12751510 */
  push32((uint32_t)(0x12751510u));
  /* 12721434 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x1272143au);
  /* 1272143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272143f call 0x127241a0 */
  push32(0x12721444u); f_127241a0();
  /* 12721444 mov esi, esp */
  ESI = (ESP);
  /* 12721446 push 0x1274c1b8 */
  push32((uint32_t)(0x1274c1b8u));
  /* 1272144b push 0x12751518 */
  push32((uint32_t)(0x12751518u));
  /* 12721450 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x12721456u);
  /* 12721456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272145b call 0x127241a0 */
  push32(0x12721460u); f_127241a0();
  /* 12721460 mov esi, esp */
  ESI = (ESP);
  /* 12721462 push 0x1274c1ac */
  push32((uint32_t)(0x1274c1acu));
  /* 12721467 push 0x12751520 */
  push32((uint32_t)(0x12751520u));
  /* 1272146c call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x12721472u);
  /* 12721472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721477 call 0x127241a0 */
  push32(0x1272147cu); f_127241a0();
  /* 1272147c mov esi, esp */
  ESI = (ESP);
  /* 1272147e push 0x1274c1a0 */
  push32((uint32_t)(0x1274c1a0u));
  /* 12721483 push 0x12751528 */
  push32((uint32_t)(0x12751528u));
  /* 12721488 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x1272148eu);
  /* 1272148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721493 call 0x127241a0 */
  push32(0x12721498u); f_127241a0();
  /* 12721498 mov esi, esp */
  ESI = (ESP);
  /* 1272149a push 0x1274c198 */
  push32((uint32_t)(0x1274c198u));
  /* 1272149f push 0x12751490 */
  push32((uint32_t)(0x12751490u));
  /* 127214a4 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127214aau);
  /* 127214aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127214ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127214af call 0x127241a0 */
  push32(0x127214b4u); f_127241a0();
  /* 127214b4 mov esi, esp */
  ESI = (ESP);
  /* 127214b6 push 0x1274c194 */
  push32((uint32_t)(0x1274c194u));
  /* 127214bb push 0x12751488 */
  push32((uint32_t)(0x12751488u));
  /* 127214c0 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127214c6u);
  /* 127214c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127214c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127214cb call 0x127241a0 */
  push32(0x127214d0u); f_127241a0();
  /* 127214d0 mov esi, esp */
  ESI = (ESP);
  /* 127214d2 push 0x1274c18c */
  push32((uint32_t)(0x1274c18cu));
  /* 127214d7 push 0x127514a0 */
  push32((uint32_t)(0x127514a0u));
  /* 127214dc call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127214e2u);
  /* 127214e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127214e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127214e7 call 0x127241a0 */
  push32(0x127214ecu); f_127241a0();
  /* 127214ec mov esi, esp */
  ESI = (ESP);
  /* 127214ee push 0x1274c184 */
  push32((uint32_t)(0x1274c184u));
  /* 127214f3 push 0x12751498 */
  push32((uint32_t)(0x12751498u));
  /* 127214f8 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127214feu);
  /* 127214fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721503 call 0x127241a0 */
  push32(0x12721508u); f_127241a0();
  /* 12721508 mov esi, esp */
  ESI = (ESP);
  /* 1272150a push 0x1274c178 */
  push32((uint32_t)(0x1274c178u));
  /* 1272150f push 0x127514c0 */
  push32((uint32_t)(0x127514c0u));
  /* 12721514 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x1272151au);
  /* 1272151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272151f call 0x127241a0 */
  push32(0x12721524u); f_127241a0();
  /* 12721524 mov esi, esp */
  ESI = (ESP);
  /* 12721526 push 0x1274c170 */
  push32((uint32_t)(0x1274c170u));
  /* 1272152b push 0x127514b0 */
  push32((uint32_t)(0x127514b0u));
  /* 12721530 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x12721536u);
  /* 12721536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272153b call 0x127241a0 */
  push32(0x12721540u); f_127241a0();
  /* 12721540 mov esi, esp */
  ESI = (ESP);
  /* 12721542 push 0x1274c168 */
  push32((uint32_t)(0x1274c168u));
  /* 12721547 push 0x127514d0 */
  push32((uint32_t)(0x127514d0u));
  /* 1272154c call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x12721552u);
  /* 12721552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721557 call 0x127241a0 */
  push32(0x1272155cu); f_127241a0();
  /* 1272155c mov esi, esp */
  ESI = (ESP);
  /* 1272155e push 0x1274c160 */
  push32((uint32_t)(0x1274c160u));
  /* 12721563 push 0x127514c8 */
  push32((uint32_t)(0x127514c8u));
  /* 12721568 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x1272156eu);
  /* 1272156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721573 call 0x127241a0 */
  push32(0x12721578u); f_127241a0();
  /* 12721578 mov esi, esp */
  ESI = (ESP);
  /* 1272157a push 0x1274c158 */
  push32((uint32_t)(0x1274c158u));
  /* 1272157f push 0x127514e0 */
  push32((uint32_t)(0x127514e0u));
  /* 12721584 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x1272158au);
  /* 1272158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272158f call 0x127241a0 */
  push32(0x12721594u); f_127241a0();
  /* 12721594 mov esi, esp */
  ESI = (ESP);
  /* 12721596 push 0x1274c150 */
  push32((uint32_t)(0x1274c150u));
  /* 1272159b push 0x127514d8 */
  push32((uint32_t)(0x127514d8u));
  /* 127215a0 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127215a6u);
  /* 127215a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127215a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127215ab call 0x127241a0 */
  push32(0x127215b0u); f_127241a0();
  /* 127215b0 mov esi, esp */
  ESI = (ESP);
  /* 127215b2 push 0x1274c148 */
  push32((uint32_t)(0x1274c148u));
  /* 127215b7 push 0x127514b8 */
  push32((uint32_t)(0x127514b8u));
  /* 127215bc call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127215c2u);
  /* 127215c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127215c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127215c7 call 0x127241a0 */
  push32(0x127215ccu); f_127241a0();
  /* 127215cc mov esi, esp */
  ESI = (ESP);
  /* 127215ce push 0x1274c13c */
  push32((uint32_t)(0x1274c13cu));
  /* 127215d3 push 0x127514a8 */
  push32((uint32_t)(0x127514a8u));
  /* 127215d8 call dword ptr [0x127544b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b8))), 0x127215deu);
  /* 127215de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127215e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127215e3 call 0x127241a0 */
  push32(0x127215e8u); f_127241a0();
  /* 127215e8 mov esi, esp */
  ESI = (ESP);
  /* 127215ea push 0xff */
  push32((uint32_t)(0xffu));
  /* 127215ef push 2 */
  push32((uint32_t)(0x2u));
  /* 127215f1 call dword ptr [0x127544bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544bc))), 0x127215f7u);
  /* 127215f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127215fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127215fc call 0x127241a0 */
  push32(0x12721601u); f_127241a0();
  /* 12721601 mov esi, esp */
  ESI = (ESP);
  /* 12721603 push 0xff */
  push32((uint32_t)(0xffu));
  /* 12721608 push 4 */
  push32((uint32_t)(0x4u));
  /* 1272160a call dword ptr [0x127544bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544bc))), 0x12721610u);
  /* 12721610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721615 call 0x127241a0 */
  push32(0x1272161au); f_127241a0();
  /* 1272161a mov esi, esp */
  ESI = (ESP);
  /* 1272161c push 0x22 */
  push32((uint32_t)(0x22u));
  /* 1272161e push 1 */
  push32((uint32_t)(0x1u));
  /* 12721620 call dword ptr [0x127544bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544bc))), 0x12721626u);
  /* 12721626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272162b call 0x127241a0 */
  push32(0x12721630u); f_127241a0();
  /* 12721630 mov esi, esp */
  ESI = (ESP);
  /* 12721632 push 0x1274c134 */
  push32((uint32_t)(0x1274c134u));
  /* 12721637 push 1 */
  push32((uint32_t)(0x1u));
  /* 12721639 call dword ptr [0x127544c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c0))), 0x1272163fu);
  /* 1272163f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721642 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721644 call 0x127241a0 */
  push32(0x12721649u); f_127241a0();
  /* 12721649 mov esi, esp */
  ESI = (ESP);
  /* 1272164b push 0x1274c12c */
  push32((uint32_t)(0x1274c12cu));
  /* 12721650 push 2 */
  push32((uint32_t)(0x2u));
  /* 12721652 call dword ptr [0x127544c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c0))), 0x12721658u);
  /* 12721658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272165b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272165d call 0x127241a0 */
  push32(0x12721662u); f_127241a0();
  /* 12721662 mov esi, esp */
  ESI = (ESP);
  /* 12721664 push 0x1274c124 */
  push32((uint32_t)(0x1274c124u));
  /* 12721669 push 4 */
  push32((uint32_t)(0x4u));
  /* 1272166b call dword ptr [0x127544c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c0))), 0x12721671u);
  /* 12721671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721674 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721676 call 0x127241a0 */
  push32(0x1272167bu); f_127241a0();
  /* 1272167b mov esi, esp */
  ESI = (ESP);
  /* 1272167d push 0x1274c118 */
  push32((uint32_t)(0x1274c118u));
  /* 12721682 push 5 */
  push32((uint32_t)(0x5u));
  /* 12721684 call dword ptr [0x127544c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c0))), 0x1272168au);
  /* 1272168a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272168d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272168f call 0x127241a0 */
  push32(0x12721694u); f_127241a0();
  /* 12721694 mov esi, esp */
  ESI = (ESP);
  /* 12721696 push 0x1274c110 */
  push32((uint32_t)(0x1274c110u));
  /* 1272169b push 0x12751480 */
  push32((uint32_t)(0x12751480u));
  /* 127216a0 call dword ptr [0x127544c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c4))), 0x127216a6u);
  /* 127216a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127216a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127216ab call 0x127241a0 */
  push32(0x127216b0u); f_127241a0();
  /* 127216b0 mov esi, esp */
  ESI = (ESP);
  /* 127216b2 push 0x1274c100 */
  push32((uint32_t)(0x1274c100u));
  /* 127216b7 push 0x127513e0 */
  push32((uint32_t)(0x127513e0u));
  /* 127216bc call dword ptr [0x127544c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c8))), 0x127216c2u);
  /* 127216c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127216c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127216c7 call 0x127241a0 */
  push32(0x127216ccu); f_127241a0();
  /* 127216cc mov esi, esp */
  ESI = (ESP);
  /* 127216ce push 0x1274c0f0 */
  push32((uint32_t)(0x1274c0f0u));
  /* 127216d3 push 0x12751538 */
  push32((uint32_t)(0x12751538u));
  /* 127216d8 call dword ptr [0x127544c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c8))), 0x127216deu);
  /* 127216de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127216e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127216e3 call 0x127241a0 */
  push32(0x127216e8u); f_127241a0();
  /* 127216e8 mov esi, esp */
  ESI = (ESP);
  /* 127216ea push 0x1274c0e4 */
  push32((uint32_t)(0x1274c0e4u));
  /* 127216ef push 0x127513f8 */
  push32((uint32_t)(0x127513f8u));
  /* 127216f4 call dword ptr [0x127544cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544cc))), 0x127216fau);
  /* 127216fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127216fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127216ff call 0x127241a0 */
  push32(0x12721704u); f_127241a0();
  /* 12721704 mov esi, esp */
  ESI = (ESP);
  /* 12721706 push 0x1274c0d8 */
  push32((uint32_t)(0x1274c0d8u));
  /* 1272170b push 0x12751540 */
  push32((uint32_t)(0x12751540u));
  /* 12721710 call dword ptr [0x127544cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544cc))), 0x12721716u);
  /* 12721716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721719 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272171b call 0x127241a0 */
  push32(0x12721720u); f_127241a0();
  /* 12721720 mov esi, esp */
  ESI = (ESP);
  /* 12721722 push 0x1274c0cc */
  push32((uint32_t)(0x1274c0ccu));
  /* 12721727 push 0x12751460 */
  push32((uint32_t)(0x12751460u));
  /* 1272172c call dword ptr [0x127544cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544cc))), 0x12721732u);
  /* 12721732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721735 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721737 call 0x127241a0 */
  push32(0x1272173cu); f_127241a0();
  /* 1272173c mov esi, esp */
  ESI = (ESP);
  /* 1272173e push 0x1274c0b4 */
  push32((uint32_t)(0x1274c0b4u));
  /* 12721743 push 0x12751468 */
  push32((uint32_t)(0x12751468u));
  /* 12721748 call dword ptr [0x127544cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544cc))), 0x1272174eu);
  /* 1272174e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721751 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721753 call 0x127241a0 */
  push32(0x12721758u); f_127241a0();
  /* 12721758 mov esi, esp */
  ESI = (ESP);
  /* 1272175a push 0x1274c0a8 */
  push32((uint32_t)(0x1274c0a8u));
  /* 1272175f push 0x12751470 */
  push32((uint32_t)(0x12751470u));
  /* 12721764 call dword ptr [0x127544cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544cc))), 0x1272176au);
  /* 1272176a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272176d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272176f call 0x127241a0 */
  push32(0x12721774u); f_127241a0();
  /* 12721774 mov esi, esp */
  ESI = (ESP);
  /* 12721776 push 0x1274c09c */
  push32((uint32_t)(0x1274c09cu));
  /* 1272177b push 0x127513f0 */
  push32((uint32_t)(0x127513f0u));
  /* 12721780 call dword ptr [0x127544cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544cc))), 0x12721786u);
  /* 12721786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721789 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272178b call 0x127241a0 */
  push32(0x12721790u); f_127241a0();
  /* 12721790 mov esi, esp */
  ESI = (ESP);
  /* 12721792 push 0x1274c090 */
  push32((uint32_t)(0x1274c090u));
  /* 12721797 push 0x12751448 */
  push32((uint32_t)(0x12751448u));
  /* 1272179c call dword ptr [0x127544c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c8))), 0x127217a2u);
  /* 127217a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127217a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127217a7 call 0x127241a0 */
  push32(0x127217acu); f_127241a0();
  /* 127217ac mov esi, esp */
  ESI = (ESP);
  /* 127217ae push 0x1274c080 */
  push32((uint32_t)(0x1274c080u));
  /* 127217b3 push 0x12751450 */
  push32((uint32_t)(0x12751450u));
  /* 127217b8 call dword ptr [0x127544c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c8))), 0x127217beu);
  /* 127217be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127217c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127217c3 call 0x127241a0 */
  push32(0x127217c8u); f_127241a0();
  /* 127217c8 mov esi, esp */
  ESI = (ESP);
  /* 127217ca push 0x1274c070 */
  push32((uint32_t)(0x1274c070u));
  /* 127217cf push 0x12751458 */
  push32((uint32_t)(0x12751458u));
  /* 127217d4 call dword ptr [0x127544c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c8))), 0x127217dau);
  /* 127217da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127217dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127217df call 0x127241a0 */
  push32(0x127217e4u); f_127241a0();
  /* 127217e4 mov esi, esp */
  ESI = (ESP);
  /* 127217e6 push 0x1274c058 */
  push32((uint32_t)(0x1274c058u));
  /* 127217eb push 0x12751478 */
  push32((uint32_t)(0x12751478u));
  /* 127217f0 call dword ptr [0x127544c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c8))), 0x127217f6u);
  /* 127217f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127217f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127217fb call 0x127241a0 */
  push32(0x12721800u); f_127241a0();
  /* 12721800 mov esi, esp */
  ESI = (ESP);
  /* 12721802 push 0x1274c044 */
  push32((uint32_t)(0x1274c044u));
  /* 12721807 push 0x12751548 */
  push32((uint32_t)(0x12751548u));
  /* 1272180c call dword ptr [0x127544c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c8))), 0x12721812u);
  /* 12721812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721815 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721817 call 0x127241a0 */
  push32(0x1272181cu); f_127241a0();
  /* 1272181c mov esi, esp */
  ESI = (ESP);
  /* 1272181e push 0x1274c030 */
  push32((uint32_t)(0x1274c030u));
  /* 12721823 push 0x12751530 */
  push32((uint32_t)(0x12751530u));
  /* 12721828 call dword ptr [0x127544c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c8))), 0x1272182eu);
  /* 1272182e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721833 call 0x127241a0 */
  push32(0x12721838u); f_127241a0();
  /* 12721838 mov esi, esp */
  ESI = (ESP);
  /* 1272183a push 0x1274c01c */
  push32((uint32_t)(0x1274c01cu));
  /* 1272183f push 0x127513e8 */
  push32((uint32_t)(0x127513e8u));
  /* 12721844 call dword ptr [0x127544c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544c8))), 0x1272184au);
  /* 1272184a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272184d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272184f call 0x127241a0 */
  push32(0x12721854u); f_127241a0();
  /* 12721854 pop edi */
  EDI = (pop32());
  /* 12721855 pop esi */
  ESI = (pop32());
  /* 12721856 pop ebx */
  EBX = (pop32());
  /* 12721857 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272185a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272185c call 0x127241a0 */
  push32(0x12721861u); f_127241a0();
  /* 12721861 mov esp, ebp */
  ESP = (EBP);
  /* 12721863 pop ebp */
  EBP = (pop32());
  /* 12721864 ret  */
  ESPCHK(0x12721090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a60 @ 0x12721a60 (7842 bytes, 2290 insns) */
void f_12721a60(void) {
  FTRACE(0x12721a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12721a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12721a61 mov ebp, esp */
  EBP = (ESP);
  /* 12721a63 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12721a66 push ebx */
  push32((uint32_t)(EBX));
  /* 12721a67 push esi */
  push32((uint32_t)(ESI));
  /* 12721a68 push edi */
  push32((uint32_t)(EDI));
  /* 12721a69 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12721a6c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12721a71 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12721a76 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12721a78 mov esi, esp */
  ESI = (ESP);
  /* 12721a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 12721a7c call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12721a82u);
  /* 12721a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721a85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721a87 call 0x127241a0 */
  push32(0x12721a8cu); f_127241a0();
  /* 12721a8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12721a91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12721a93 je 0x12721e6d */
  if (C.zf) goto L_12721e6d;
  /* 12721a99 mov esi, esp */
  ESI = (ESP);
  /* 12721a9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12721a9d push 1 */
  push32((uint32_t)(0x1u));
  /* 12721a9f call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12721aa5u);
  /* 12721aa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721aaa call 0x127241a0 */
  push32(0x12721aafu); f_127241a0();
  /* 12721aaf mov esi, esp */
  ESI = (ESP);
  /* 12721ab1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12721ab6 push 3 */
  push32((uint32_t)(0x3u));
  /* 12721ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721aba call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721ac0u);
  /* 12721ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721ac3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721ac5 call 0x127241a0 */
  push32(0x12721acau); f_127241a0();
  /* 12721aca mov esi, esp */
  ESI = (ESP);
  /* 12721acc push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12721ad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12721ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721ad5 call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721adbu);
  /* 12721adb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721ade cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721ae0 call 0x127241a0 */
  push32(0x12721ae5u); f_127241a0();
  /* 12721ae5 mov esi, esp */
  ESI = (ESP);
  /* 12721ae7 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 12721aec push 0 */
  push32((uint32_t)(0x0u));
  /* 12721aee push 0 */
  push32((uint32_t)(0x0u));
  /* 12721af0 call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721af6u);
  /* 12721af6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721af9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721afb call 0x127241a0 */
  push32(0x12721b00u); f_127241a0();
  /* 12721b00 mov esi, esp */
  ESI = (ESP);
  /* 12721b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721b04 push 2 */
  push32((uint32_t)(0x2u));
  /* 12721b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721b08 call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721b0eu);
  /* 12721b0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721b11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721b13 call 0x127241a0 */
  push32(0x12721b18u); f_127241a0();
  /* 12721b18 mov esi, esp */
  ESI = (ESP);
  /* 12721b1a push 0x3e80 */
  push32((uint32_t)(0x3e80u));
  /* 12721b1f push 5 */
  push32((uint32_t)(0x5u));
  /* 12721b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721b23 call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721b29u);
  /* 12721b29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721b2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721b2e call 0x127241a0 */
  push32(0x12721b33u); f_127241a0();
  /* 12721b33 mov esi, esp */
  ESI = (ESP);
  /* 12721b35 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 12721b3a push 4 */
  push32((uint32_t)(0x4u));
  /* 12721b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12721b3e call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721b44u);
  /* 12721b44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721b47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721b49 call 0x127241a0 */
  push32(0x12721b4eu); f_127241a0();
  /* 12721b4e mov esi, esp */
  ESI = (ESP);
  /* 12721b50 push 0x4876df70 */
  push32((uint32_t)(0x4876df70u));
  /* 12721b55 push 3 */
  push32((uint32_t)(0x3u));
  /* 12721b57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12721b59 call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721b5fu);
  /* 12721b5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721b62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721b64 call 0x127241a0 */
  push32(0x12721b69u); f_127241a0();
  /* 12721b69 mov esi, esp */
  ESI = (ESP);
  /* 12721b6b push 0x4876df70 */
  push32((uint32_t)(0x4876df70u));
  /* 12721b70 push 5 */
  push32((uint32_t)(0x5u));
  /* 12721b72 push 1 */
  push32((uint32_t)(0x1u));
  /* 12721b74 call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721b7au);
  /* 12721b7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721b7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721b7f call 0x127241a0 */
  push32(0x12721b84u); f_127241a0();
  /* 12721b84 mov esi, esp */
  ESI = (ESP);
  /* 12721b86 push 0x4876df70 */
  push32((uint32_t)(0x4876df70u));
  /* 12721b8b push 4 */
  push32((uint32_t)(0x4u));
  /* 12721b8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12721b8f call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721b95u);
  /* 12721b95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721b98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721b9a call 0x127241a0 */
  push32(0x12721b9fu); f_127241a0();
  /* 12721b9f mov esi, esp */
  ESI = (ESP);
  /* 12721ba1 push 0x4876df70 */
  push32((uint32_t)(0x4876df70u));
  /* 12721ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12721ba8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12721baa call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721bb0u);
  /* 12721bb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721bb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721bb5 call 0x127241a0 */
  push32(0x12721bbau); f_127241a0();
  /* 12721bba mov esi, esp */
  ESI = (ESP);
  /* 12721bbc push 0x4876df70 */
  push32((uint32_t)(0x4876df70u));
  /* 12721bc1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12721bc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 12721bc5 call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721bcbu);
  /* 12721bcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721bce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721bd0 call 0x127241a0 */
  push32(0x12721bd5u); f_127241a0();
  /* 12721bd5 mov esi, esp */
  ESI = (ESP);
  /* 12721bd7 push 0x4876df70 */
  push32((uint32_t)(0x4876df70u));
  /* 12721bdc push 5 */
  push32((uint32_t)(0x5u));
  /* 12721bde push 5 */
  push32((uint32_t)(0x5u));
  /* 12721be0 call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721be6u);
  /* 12721be6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721be9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721beb call 0x127241a0 */
  push32(0x12721bf0u); f_127241a0();
  /* 12721bf0 mov esi, esp */
  ESI = (ESP);
  /* 12721bf2 push 0x4876df70 */
  push32((uint32_t)(0x4876df70u));
  /* 12721bf7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12721bf9 push 5 */
  push32((uint32_t)(0x5u));
  /* 12721bfb call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721c01u);
  /* 12721c01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721c04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721c06 call 0x127241a0 */
  push32(0x12721c0bu); f_127241a0();
  /* 12721c0b mov esi, esp */
  ESI = (ESP);
  /* 12721c0d push 0x4876df70 */
  push32((uint32_t)(0x4876df70u));
  /* 12721c12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12721c14 push 5 */
  push32((uint32_t)(0x5u));
  /* 12721c16 call dword ptr [0x12754438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754438))), 0x12721c1cu);
  /* 12721c1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721c1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721c21 call 0x127241a0 */
  push32(0x12721c26u); f_127241a0();
  /* 12721c26 mov esi, esp */
  ESI = (ESP);
  /* 12721c28 push 0x1274c4a8 */
  push32((uint32_t)(0x1274c4a8u));
  /* 12721c2d call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12721c33u);
  /* 12721c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721c36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721c38 call 0x127241a0 */
  push32(0x12721c3du); f_127241a0();
  /* 12721c3d mov esi, esp */
  ESI = (ESP);
  /* 12721c3f push 0x1274c4a0 */
  push32((uint32_t)(0x1274c4a0u));
  /* 12721c44 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12721c4au);
  /* 12721c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721c4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721c4f call 0x127241a0 */
  push32(0x12721c54u); f_127241a0();
  /* 12721c54 mov esi, esp */
  ESI = (ESP);
  /* 12721c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721c58 push 0x12751570 */
  push32((uint32_t)(0x12751570u));
  /* 12721c5d call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12721c63u);
  /* 12721c63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721c66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721c68 call 0x127241a0 */
  push32(0x12721c6du); f_127241a0();
  /* 12721c6d mov esi, esp */
  ESI = (ESP);
  /* 12721c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12721c71 push 0x127514a0 */
  push32((uint32_t)(0x127514a0u));
  /* 12721c76 push 1 */
  push32((uint32_t)(0x1u));
  /* 12721c78 call dword ptr [0x12754444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754444))), 0x12721c7eu);
  /* 12721c7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721c81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721c83 call 0x127241a0 */
  push32(0x12721c88u); f_127241a0();
  /* 12721c88 mov esi, esp */
  ESI = (ESP);
  /* 12721c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12721c8c push 0x127515e0 */
  push32((uint32_t)(0x127515e0u));
  /* 12721c91 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12721c97u);
  /* 12721c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721c9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721c9c call 0x127241a0 */
  push32(0x12721ca1u); f_127241a0();
  /* 12721ca1 mov esi, esp */
  ESI = (ESP);
  /* 12721ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721ca5 push 0x12751498 */
  push32((uint32_t)(0x12751498u));
  /* 12721caa push 1 */
  push32((uint32_t)(0x1u));
  /* 12721cac call dword ptr [0x12754444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754444))), 0x12721cb2u);
  /* 12721cb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721cb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721cb7 call 0x127241a0 */
  push32(0x12721cbcu); f_127241a0();
  /* 12721cbc mov esi, esp */
  ESI = (ESP);
  /* 12721cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12721cc0 push 0x127515e8 */
  push32((uint32_t)(0x127515e8u));
  /* 12721cc5 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12721ccbu);
  /* 12721ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721cce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721cd0 call 0x127241a0 */
  push32(0x12721cd5u); f_127241a0();
  /* 12721cd5 mov esi, esp */
  ESI = (ESP);
  /* 12721cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721cd9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12721cdb push 0x127514b0 */
  push32((uint32_t)(0x127514b0u));
  /* 12721ce0 push 5 */
  push32((uint32_t)(0x5u));
  /* 12721ce2 call dword ptr [0x12754448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754448))), 0x12721ce8u);
  /* 12721ce8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721ceb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721ced call 0x127241a0 */
  push32(0x12721cf2u); f_127241a0();
  /* 12721cf2 mov esi, esp */
  ESI = (ESP);
  /* 12721cf4 push 0x1274c0e4 */
  push32((uint32_t)(0x1274c0e4u));
  /* 12721cf9 push 0x1274c314 */
  push32((uint32_t)(0x1274c314u));
  /* 12721cfe call dword ptr [0x1275444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275444c))), 0x12721d04u);
  /* 12721d04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721d07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721d09 call 0x127241a0 */
  push32(0x12721d0eu); f_127241a0();
  /* 12721d0e mov esi, esp */
  ESI = (ESP);
  /* 12721d10 push 0x1274c0d8 */
  push32((uint32_t)(0x1274c0d8u));
  /* 12721d15 push 0x1274c314 */
  push32((uint32_t)(0x1274c314u));
  /* 12721d1a call dword ptr [0x1275444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275444c))), 0x12721d20u);
  /* 12721d20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721d23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721d25 call 0x127241a0 */
  push32(0x12721d2au); f_127241a0();
  /* 12721d2a mov esi, esp */
  ESI = (ESP);
  /* 12721d2c push 0x1274c0cc */
  push32((uint32_t)(0x1274c0ccu));
  /* 12721d31 push 0x1274c314 */
  push32((uint32_t)(0x1274c314u));
  /* 12721d36 call dword ptr [0x1275444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275444c))), 0x12721d3cu);
  /* 12721d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721d3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721d41 call 0x127241a0 */
  push32(0x12721d46u); f_127241a0();
  /* 12721d46 mov esi, esp */
  ESI = (ESP);
  /* 12721d48 push 0x1274c0b4 */
  push32((uint32_t)(0x1274c0b4u));
  /* 12721d4d push 0x1274c314 */
  push32((uint32_t)(0x1274c314u));
  /* 12721d52 call dword ptr [0x1275444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275444c))), 0x12721d58u);
  /* 12721d58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721d5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721d5d call 0x127241a0 */
  push32(0x12721d62u); f_127241a0();
  /* 12721d62 mov esi, esp */
  ESI = (ESP);
  /* 12721d64 push 0x1274c0a8 */
  push32((uint32_t)(0x1274c0a8u));
  /* 12721d69 push 0x1274c314 */
  push32((uint32_t)(0x1274c314u));
  /* 12721d6e call dword ptr [0x1275444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275444c))), 0x12721d74u);
  /* 12721d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721d77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721d79 call 0x127241a0 */
  push32(0x12721d7eu); f_127241a0();
  /* 12721d7e mov esi, esp */
  ESI = (ESP);
  /* 12721d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721d82 push 0x12751448 */
  push32((uint32_t)(0x12751448u));
  /* 12721d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721d89 call dword ptr [0x12754450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754450))), 0x12721d8fu);
  /* 12721d8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721d92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721d94 call 0x127241a0 */
  push32(0x12721d99u); f_127241a0();
  /* 12721d99 mov esi, esp */
  ESI = (ESP);
  /* 12721d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12721d9d push 0x12751450 */
  push32((uint32_t)(0x12751450u));
  /* 12721da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721da4 call dword ptr [0x12754450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754450))), 0x12721daau);
  /* 12721daa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721dad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721daf call 0x127241a0 */
  push32(0x12721db4u); f_127241a0();
  /* 12721db4 mov esi, esp */
  ESI = (ESP);
  /* 12721db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721db8 push 0x12751458 */
  push32((uint32_t)(0x12751458u));
  /* 12721dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12721dbf call dword ptr [0x12754450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754450))), 0x12721dc5u);
  /* 12721dc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721dc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721dca call 0x127241a0 */
  push32(0x12721dcfu); f_127241a0();
  /* 12721dcf mov esi, esp */
  ESI = (ESP);
  /* 12721dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721dd3 push 0x12751478 */
  push32((uint32_t)(0x12751478u));
  /* 12721dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721dda call dword ptr [0x12754450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754450))), 0x12721de0u);
  /* 12721de0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721de3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721de5 call 0x127241a0 */
  push32(0x12721deau); f_127241a0();
  /* 12721dea mov esi, esp */
  ESI = (ESP);
  /* 12721dec push 0 */
  push32((uint32_t)(0x0u));
  /* 12721dee push 0x12751548 */
  push32((uint32_t)(0x12751548u));
  /* 12721df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721df5 call dword ptr [0x12754450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754450))), 0x12721dfbu);
  /* 12721dfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721dfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721e00 call 0x127241a0 */
  push32(0x12721e05u); f_127241a0();
  /* 12721e05 mov esi, esp */
  ESI = (ESP);
  /* 12721e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721e09 push 0x12751530 */
  push32((uint32_t)(0x12751530u));
  /* 12721e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12721e10 call dword ptr [0x12754450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754450))), 0x12721e16u);
  /* 12721e16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721e19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721e1b call 0x127241a0 */
  push32(0x12721e20u); f_127241a0();
  /* 12721e20 mov esi, esp */
  ESI = (ESP);
  /* 12721e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721e24 push 0x127513e8 */
  push32((uint32_t)(0x127513e8u));
  /* 12721e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721e2b call dword ptr [0x12754450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754450))), 0x12721e31u);
  /* 12721e31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721e34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721e36 call 0x127241a0 */
  push32(0x12721e3bu); f_127241a0();
  /* 12721e3b mov esi, esp */
  ESI = (ESP);
  /* 12721e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12721e3f push 0x12751418 */
  push32((uint32_t)(0x12751418u));
  /* 12721e44 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12721e4au);
  /* 12721e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721e4f call 0x127241a0 */
  push32(0x12721e54u); f_127241a0();
  /* 12721e54 mov esi, esp */
  ESI = (ESP);
  /* 12721e56 push 0x12751420 */
  push32((uint32_t)(0x12751420u));
  /* 12721e5b push 1 */
  push32((uint32_t)(0x1u));
  /* 12721e5d call dword ptr [0x12754454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754454))), 0x12721e63u);
  /* 12721e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721e68 call 0x127241a0 */
  push32(0x12721e6du); f_127241a0();
L_12721e6d:;
  /* 12721e6d mov esi, esp */
  ESI = (ESP);
  /* 12721e6f push 2 */
  push32((uint32_t)(0x2u));
  /* 12721e71 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12721e77u);
  /* 12721e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721e7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721e7c call 0x127241a0 */
  push32(0x12721e81u); f_127241a0();
  /* 12721e81 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12721e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12721e88 je 0x12721ee1 */
  if (C.zf) goto L_12721ee1;
  /* 12721e8a mov esi, esp */
  ESI = (ESP);
  /* 12721e8c push 0x12751400 */
  push32((uint32_t)(0x12751400u));
  /* 12721e91 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12721e97u);
  /* 12721e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721e9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721e9c call 0x127241a0 */
  push32(0x12721ea1u); f_127241a0();
  /* 12721ea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12721ea3 jne 0x12721ee1 */
  if (!C.zf) goto L_12721ee1;
  /* 12721ea5 mov esi, esp */
  ESI = (ESP);
  /* 12721ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721ea9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12721eab call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12721eb1u);
  /* 12721eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721eb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721eb6 call 0x127241a0 */
  push32(0x12721ebbu); f_127241a0();
  /* 12721ebb mov esi, esp */
  ESI = (ESP);
  /* 12721ebd push 0x1274c494 */
  push32((uint32_t)(0x1274c494u));
  /* 12721ec2 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12721ec8u);
  /* 12721ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721ecd call 0x127241a0 */
  push32(0x12721ed2u); f_127241a0();
  /* 12721ed2 mov esi, esp */
  ESI = (ESP);
  /* 12721ed4 call dword ptr [0x1275445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275445c))), 0x12721edau);
  /* 12721eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721edc call 0x127241a0 */
  push32(0x12721ee1u); f_127241a0();
L_12721ee1:;
  /* 12721ee1 mov esi, esp */
  ESI = (ESP);
  /* 12721ee3 push 3 */
  push32((uint32_t)(0x3u));
  /* 12721ee5 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12721eebu);
  /* 12721eeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721eee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721ef0 call 0x127241a0 */
  push32(0x12721ef5u); f_127241a0();
  /* 12721ef5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12721efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12721efc je 0x12721f55 */
  if (C.zf) goto L_12721f55;
  /* 12721efe mov esi, esp */
  ESI = (ESP);
  /* 12721f00 push 0x12751410 */
  push32((uint32_t)(0x12751410u));
  /* 12721f05 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12721f0bu);
  /* 12721f0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721f0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721f10 call 0x127241a0 */
  push32(0x12721f15u); f_127241a0();
  /* 12721f15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12721f17 jne 0x12721f55 */
  if (!C.zf) goto L_12721f55;
  /* 12721f19 mov esi, esp */
  ESI = (ESP);
  /* 12721f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12721f1d push 3 */
  push32((uint32_t)(0x3u));
  /* 12721f1f call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12721f25u);
  /* 12721f25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721f28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721f2a call 0x127241a0 */
  push32(0x12721f2fu); f_127241a0();
  /* 12721f2f mov esi, esp */
  ESI = (ESP);
  /* 12721f31 push 0x1274c488 */
  push32((uint32_t)(0x1274c488u));
  /* 12721f36 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12721f3cu);
  /* 12721f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721f3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721f41 call 0x127241a0 */
  push32(0x12721f46u); f_127241a0();
  /* 12721f46 mov esi, esp */
  ESI = (ESP);
  /* 12721f48 call dword ptr [0x1275445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275445c))), 0x12721f4eu);
  /* 12721f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721f50 call 0x127241a0 */
  push32(0x12721f55u); f_127241a0();
L_12721f55:;
  /* 12721f55 mov esi, esp */
  ESI = (ESP);
  /* 12721f57 push 4 */
  push32((uint32_t)(0x4u));
  /* 12721f59 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12721f5fu);
  /* 12721f5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721f64 call 0x127241a0 */
  push32(0x12721f69u); f_127241a0();
  /* 12721f69 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12721f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12721f70 je 0x12721fc9 */
  if (C.zf) goto L_12721fc9;
  /* 12721f72 mov esi, esp */
  ESI = (ESP);
  /* 12721f74 push 0x12751408 */
  push32((uint32_t)(0x12751408u));
  /* 12721f79 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12721f7fu);
  /* 12721f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721f82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721f84 call 0x127241a0 */
  push32(0x12721f89u); f_127241a0();
  /* 12721f89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12721f8b jne 0x12721fc9 */
  if (!C.zf) goto L_12721fc9;
  /* 12721f8d mov esi, esp */
  ESI = (ESP);
  /* 12721f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12721f91 push 4 */
  push32((uint32_t)(0x4u));
  /* 12721f93 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12721f99u);
  /* 12721f99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721f9e call 0x127241a0 */
  push32(0x12721fa3u); f_127241a0();
  /* 12721fa3 mov esi, esp */
  ESI = (ESP);
  /* 12721fa5 push 0x1274c47c */
  push32((uint32_t)(0x1274c47cu));
  /* 12721faa call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12721fb0u);
  /* 12721fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721fb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721fb5 call 0x127241a0 */
  push32(0x12721fbau); f_127241a0();
  /* 12721fba mov esi, esp */
  ESI = (ESP);
  /* 12721fbc call dword ptr [0x1275445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275445c))), 0x12721fc2u);
  /* 12721fc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721fc4 call 0x127241a0 */
  push32(0x12721fc9u); f_127241a0();
L_12721fc9:;
  /* 12721fc9 mov esi, esp */
  ESI = (ESP);
  /* 12721fcb push 5 */
  push32((uint32_t)(0x5u));
  /* 12721fcd call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12721fd3u);
  /* 12721fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721fd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721fd8 call 0x127241a0 */
  push32(0x12721fddu); f_127241a0();
  /* 12721fdd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12721fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12721fe4 je 0x12722030 */
  if (C.zf) goto L_12722030;
  /* 12721fe6 mov esi, esp */
  ESI = (ESP);
  /* 12721fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12721fea push 0x12751428 */
  push32((uint32_t)(0x12751428u));
  /* 12721fef call dword ptr [0x12754460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754460))), 0x12721ff5u);
  /* 12721ff5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12721ff8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12721ffa call 0x127241a0 */
  push32(0x12721fffu); f_127241a0();
  /* 12721fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722001 jle 0x12722030 */
  if ((C.zf||C.sf!=C.of)) goto L_12722030;
  /* 12722003 mov esi, esp */
  ESI = (ESP);
  /* 12722005 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722007 push 5 */
  push32((uint32_t)(0x5u));
  /* 12722009 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x1272200fu);
  /* 1272200f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722012 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722014 call 0x127241a0 */
  push32(0x12722019u); f_127241a0();
  /* 12722019 mov esi, esp */
  ESI = (ESP);
  /* 1272201b push 0x1274c474 */
  push32((uint32_t)(0x1274c474u));
  /* 12722020 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722026u);
  /* 12722026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722029 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272202b call 0x127241a0 */
  push32(0x12722030u); f_127241a0();
L_12722030:;
  /* 12722030 mov esi, esp */
  ESI = (ESP);
  /* 12722032 push 6 */
  push32((uint32_t)(0x6u));
  /* 12722034 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272203au);
  /* 1272203a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272203d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272203f call 0x127241a0 */
  push32(0x12722044u); f_127241a0();
  /* 12722044 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272204b je 0x12722095 */
  if (C.zf) goto L_12722095;
  /* 1272204d mov esi, esp */
  ESI = (ESP);
  /* 1272204f push 0x12751440 */
  push32((uint32_t)(0x12751440u));
  /* 12722054 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x1272205au);
  /* 1272205a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272205d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272205f call 0x127241a0 */
  push32(0x12722064u); f_127241a0();
  /* 12722064 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722066 jne 0x12722095 */
  if (!C.zf) goto L_12722095;
  /* 12722068 mov esi, esp */
  ESI = (ESP);
  /* 1272206a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272206c push 6 */
  push32((uint32_t)(0x6u));
  /* 1272206e call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722074u);
  /* 12722074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722077 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722079 call 0x127241a0 */
  push32(0x1272207eu); f_127241a0();
  /* 1272207e mov esi, esp */
  ESI = (ESP);
  /* 12722080 push 0x1274c46c */
  push32((uint32_t)(0x1274c46cu));
  /* 12722085 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x1272208bu);
  /* 1272208b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272208e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722090 call 0x127241a0 */
  push32(0x12722095u); f_127241a0();
L_12722095:;
  /* 12722095 mov esi, esp */
  ESI = (ESP);
  /* 12722097 push 7 */
  push32((uint32_t)(0x7u));
  /* 12722099 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272209fu);
  /* 1272209f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127220a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127220a4 call 0x127241a0 */
  push32(0x127220a9u); f_127241a0();
  /* 127220a9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127220ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127220b0 je 0x12722172 */
  if (C.zf) goto L_12722172;
  /* 127220b6 mov esi, esp */
  ESI = (ESP);
  /* 127220b8 push 6 */
  push32((uint32_t)(0x6u));
  /* 127220ba call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127220c0u);
  /* 127220c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127220c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127220c5 call 0x127241a0 */
  push32(0x127220cau); f_127241a0();
  /* 127220ca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127220cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127220d1 jne 0x12722172 */
  if (!C.zf) goto L_12722172;
  /* 127220d7 mov esi, esp */
  ESI = (ESP);
  /* 127220d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127220db push 0x12751520 */
  push32((uint32_t)(0x12751520u));
  /* 127220e0 call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x127220e6u);
  /* 127220e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127220e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127220eb call 0x127241a0 */
  push32(0x127220f0u); f_127241a0();
  /* 127220f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127220f2 jle 0x12722172 */
  if ((C.zf||C.sf!=C.of)) goto L_12722172;
  /* 127220f4 mov esi, esp */
  ESI = (ESP);
  /* 127220f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127220f8 push 7 */
  push32((uint32_t)(0x7u));
  /* 127220fa call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722100u);
  /* 12722100 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722103 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722105 call 0x127241a0 */
  push32(0x1272210au); f_127241a0();
  /* 1272210a mov esi, esp */
  ESI = (ESP);
  /* 1272210c push 0x1274c464 */
  push32((uint32_t)(0x1274c464u));
  /* 12722111 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722117u);
  /* 12722117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272211a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272211c call 0x127241a0 */
  push32(0x12722121u); f_127241a0();
  /* 12722121 mov esi, esp */
  ESI = (ESP);
  /* 12722123 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12722128 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272212a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272212c call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722132u);
  /* 12722132 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722135 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722137 call 0x127241a0 */
  push32(0x1272213cu); f_127241a0();
  /* 1272213c mov esi, esp */
  ESI = (ESP);
  /* 1272213e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12722143 push 4 */
  push32((uint32_t)(0x4u));
  /* 12722145 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722147 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x1272214du);
  /* 1272214d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722152 call 0x127241a0 */
  push32(0x12722157u); f_127241a0();
  /* 12722157 mov esi, esp */
  ESI = (ESP);
  /* 12722159 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1272215e push 5 */
  push32((uint32_t)(0x5u));
  /* 12722160 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722162 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722168u);
  /* 12722168 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272216b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272216d call 0x127241a0 */
  push32(0x12722172u); f_127241a0();
L_12722172:;
  /* 12722172 mov esi, esp */
  ESI = (ESP);
  /* 12722174 push 8 */
  push32((uint32_t)(0x8u));
  /* 12722176 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272217cu);
  /* 1272217c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272217f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722181 call 0x127241a0 */
  push32(0x12722186u); f_127241a0();
  /* 12722186 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272218d je 0x127221f8 */
  if (C.zf) goto L_127221f8;
  /* 1272218f mov esi, esp */
  ESI = (ESP);
  /* 12722191 push 5 */
  push32((uint32_t)(0x5u));
  /* 12722193 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722199u);
  /* 12722199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272219c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272219e call 0x127241a0 */
  push32(0x127221a3u); f_127241a0();
  /* 127221a3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127221a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127221aa jne 0x127221f8 */
  if (!C.zf) goto L_127221f8;
  /* 127221ac mov esi, esp */
  ESI = (ESP);
  /* 127221ae push 0 */
  push32((uint32_t)(0x0u));
  /* 127221b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 127221b2 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127221b8u);
  /* 127221b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127221bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127221bd call 0x127241a0 */
  push32(0x127221c2u); f_127241a0();
  /* 127221c2 mov esi, esp */
  ESI = (ESP);
  /* 127221c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127221c6 push 0x12751550 */
  push32((uint32_t)(0x12751550u));
  /* 127221cb call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x127221d1u);
  /* 127221d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127221d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127221d6 call 0x127241a0 */
  push32(0x127221dbu); f_127241a0();
  /* 127221db mov esi, esp */
  ESI = (ESP);
  /* 127221dd push 0 */
  push32((uint32_t)(0x0u));
  /* 127221df push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127221e1 push 0x127514e8 */
  push32((uint32_t)(0x127514e8u));
  /* 127221e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 127221e8 call dword ptr [0x1275446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275446c))), 0x127221eeu);
  /* 127221ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127221f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127221f3 call 0x127241a0 */
  push32(0x127221f8u); f_127241a0();
L_127221f8:;
  /* 127221f8 mov esi, esp */
  ESI = (ESP);
  /* 127221fa push 9 */
  push32((uint32_t)(0x9u));
  /* 127221fc call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722202u);
  /* 12722202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722205 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722207 call 0x127241a0 */
  push32(0x1272220cu); f_127241a0();
  /* 1272220c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722213 je 0x127222b2 */
  if (C.zf) goto L_127222b2;
  /* 12722219 mov esi, esp */
  ESI = (ESP);
  /* 1272221b push 0x12751550 */
  push32((uint32_t)(0x12751550u));
  /* 12722220 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12722226u);
  /* 12722226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272222b call 0x127241a0 */
  push32(0x12722230u); f_127241a0();
  /* 12722230 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722232 jne 0x127222b2 */
  if (!C.zf) goto L_127222b2;
  /* 12722234 mov esi, esp */
  ESI = (ESP);
  /* 12722236 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722238 push 9 */
  push32((uint32_t)(0x9u));
  /* 1272223a call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722240u);
  /* 12722240 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722243 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722245 call 0x127241a0 */
  push32(0x1272224au); f_127241a0();
  /* 1272224a mov esi, esp */
  ESI = (ESP);
  /* 1272224c push 0x1274c45c */
  push32((uint32_t)(0x1274c45cu));
  /* 12722251 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722257u);
  /* 12722257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272225a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272225c call 0x127241a0 */
  push32(0x12722261u); f_127241a0();
  /* 12722261 mov esi, esp */
  ESI = (ESP);
  /* 12722263 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12722268 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272226a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272226c call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722272u);
  /* 12722272 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722277 call 0x127241a0 */
  push32(0x1272227cu); f_127241a0();
  /* 1272227c mov esi, esp */
  ESI = (ESP);
  /* 1272227e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 12722283 push 4 */
  push32((uint32_t)(0x4u));
  /* 12722285 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722287 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x1272228du);
  /* 1272228d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722292 call 0x127241a0 */
  push32(0x12722297u); f_127241a0();
  /* 12722297 mov esi, esp */
  ESI = (ESP);
  /* 12722299 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1272229e push 5 */
  push32((uint32_t)(0x5u));
  /* 127222a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127222a2 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x127222a8u);
  /* 127222a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127222ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127222ad call 0x127241a0 */
  push32(0x127222b2u); f_127241a0();
L_127222b2:;
  /* 127222b2 mov esi, esp */
  ESI = (ESP);
  /* 127222b4 push 0xa */
  push32((uint32_t)(0xau));
  /* 127222b6 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127222bcu);
  /* 127222bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127222bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127222c1 call 0x127241a0 */
  push32(0x127222c6u); f_127241a0();
  /* 127222c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127222cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127222cd je 0x12722338 */
  if (C.zf) goto L_12722338;
  /* 127222cf mov esi, esp */
  ESI = (ESP);
  /* 127222d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 127222d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127222d5 call dword ptr [0x12754470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754470))), 0x127222dbu);
  /* 127222db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127222de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127222e0 call 0x127241a0 */
  push32(0x127222e5u); f_127241a0();
  /* 127222e5 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127222ea jle 0x12722338 */
  if ((C.zf||C.sf!=C.of)) goto L_12722338;
  /* 127222ec mov esi, esp */
  ESI = (ESP);
  /* 127222ee push 0 */
  push32((uint32_t)(0x0u));
  /* 127222f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 127222f2 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127222f8u);
  /* 127222f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127222fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127222fd call 0x127241a0 */
  push32(0x12722302u); f_127241a0();
  /* 12722302 mov esi, esp */
  ESI = (ESP);
  /* 12722304 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722306 push 0x127515b0 */
  push32((uint32_t)(0x127515b0u));
  /* 1272230b call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12722311u);
  /* 12722311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722314 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722316 call 0x127241a0 */
  push32(0x1272231bu); f_127241a0();
  /* 1272231b mov esi, esp */
  ESI = (ESP);
  /* 1272231d push 0 */
  push32((uint32_t)(0x0u));
  /* 1272231f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12722321 push 0x127514e8 */
  push32((uint32_t)(0x127514e8u));
  /* 12722326 push 5 */
  push32((uint32_t)(0x5u));
  /* 12722328 call dword ptr [0x1275446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275446c))), 0x1272232eu);
  /* 1272232e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722331 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722333 call 0x127241a0 */
  push32(0x12722338u); f_127241a0();
L_12722338:;
  /* 12722338 mov esi, esp */
  ESI = (ESP);
  /* 1272233a push 0xb */
  push32((uint32_t)(0xbu));
  /* 1272233c call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722342u);
  /* 12722342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722345 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722347 call 0x127241a0 */
  push32(0x1272234cu); f_127241a0();
  /* 1272234c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722353 je 0x127223f2 */
  if (C.zf) goto L_127223f2;
  /* 12722359 mov esi, esp */
  ESI = (ESP);
  /* 1272235b push 0x127515b0 */
  push32((uint32_t)(0x127515b0u));
  /* 12722360 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12722366u);
  /* 12722366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722369 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272236b call 0x127241a0 */
  push32(0x12722370u); f_127241a0();
  /* 12722370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722372 jne 0x127223f2 */
  if (!C.zf) goto L_127223f2;
  /* 12722374 mov esi, esp */
  ESI = (ESP);
  /* 12722376 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722378 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1272237a call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722380u);
  /* 12722380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722383 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722385 call 0x127241a0 */
  push32(0x1272238au); f_127241a0();
  /* 1272238a mov esi, esp */
  ESI = (ESP);
  /* 1272238c push 0x1274c454 */
  push32((uint32_t)(0x1274c454u));
  /* 12722391 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722397u);
  /* 12722397 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272239a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272239c call 0x127241a0 */
  push32(0x127223a1u); f_127241a0();
  /* 127223a1 mov esi, esp */
  ESI = (ESP);
  /* 127223a3 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 127223a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 127223aa push 0 */
  push32((uint32_t)(0x0u));
  /* 127223ac call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x127223b2u);
  /* 127223b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127223b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127223b7 call 0x127241a0 */
  push32(0x127223bcu); f_127241a0();
  /* 127223bc mov esi, esp */
  ESI = (ESP);
  /* 127223be push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 127223c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 127223c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127223c7 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x127223cdu);
  /* 127223cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127223d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127223d2 call 0x127241a0 */
  push32(0x127223d7u); f_127241a0();
  /* 127223d7 mov esi, esp */
  ESI = (ESP);
  /* 127223d9 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 127223de push 5 */
  push32((uint32_t)(0x5u));
  /* 127223e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127223e2 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x127223e8u);
  /* 127223e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127223eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127223ed call 0x127241a0 */
  push32(0x127223f2u); f_127241a0();
L_127223f2:;
  /* 127223f2 mov esi, esp */
  ESI = (ESP);
  /* 127223f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 127223f6 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127223fcu);
  /* 127223fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127223ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722401 call 0x127241a0 */
  push32(0x12722406u); f_127241a0();
  /* 12722406 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272240b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272240d je 0x12722509 */
  if (C.zf) goto L_12722509;
  /* 12722413 mov esi, esp */
  ESI = (ESP);
  /* 12722415 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722417 push 0x127514f0 */
  push32((uint32_t)(0x127514f0u));
  /* 1272241c call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x12722422u);
  /* 12722422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722425 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722427 call 0x127241a0 */
  push32(0x1272242cu); f_127241a0();
  /* 1272242c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272242e jle 0x12722509 */
  if ((C.zf||C.sf!=C.of)) goto L_12722509;
  /* 12722434 mov esi, esp */
  ESI = (ESP);
  /* 12722436 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722438 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1272243a call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722440u);
  /* 12722440 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722443 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722445 call 0x127241a0 */
  push32(0x1272244au); f_127241a0();
  /* 1272244a mov esi, esp */
  ESI = (ESP);
  /* 1272244c push 0x1274c44c */
  push32((uint32_t)(0x1274c44cu));
  /* 12722451 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722457u);
  /* 12722457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272245a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272245c call 0x127241a0 */
  push32(0x12722461u); f_127241a0();
  /* 12722461 mov esi, esp */
  ESI = (ESP);
  /* 12722463 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12722468 push 1 */
  push32((uint32_t)(0x1u));
  /* 1272246a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272246c call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722472u);
  /* 12722472 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722477 call 0x127241a0 */
  push32(0x1272247cu); f_127241a0();
  /* 1272247c mov esi, esp */
  ESI = (ESP);
  /* 1272247e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12722483 push 4 */
  push32((uint32_t)(0x4u));
  /* 12722485 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722487 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x1272248du);
  /* 1272248d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722492 call 0x127241a0 */
  push32(0x12722497u); f_127241a0();
  /* 12722497 mov esi, esp */
  ESI = (ESP);
  /* 12722499 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1272249e push 5 */
  push32((uint32_t)(0x5u));
  /* 127224a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127224a2 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x127224a8u);
  /* 127224a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127224ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127224ad call 0x127241a0 */
  push32(0x127224b2u); f_127241a0();
  /* 127224b2 mov esi, esp */
  ESI = (ESP);
  /* 127224b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127224b6 push 0x12751560 */
  push32((uint32_t)(0x12751560u));
  /* 127224bb call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x127224c1u);
  /* 127224c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127224c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127224c6 call 0x127241a0 */
  push32(0x127224cbu); f_127241a0();
  /* 127224cb mov esi, esp */
  ESI = (ESP);
  /* 127224cd push 2 */
  push32((uint32_t)(0x2u));
  /* 127224cf call dword ptr [0x12754474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754474))), 0x127224d5u);
  /* 127224d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127224d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127224da call 0x127241a0 */
  push32(0x127224dfu); f_127241a0();
  /* 127224df mov esi, esp */
  ESI = (ESP);
  /* 127224e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127224e3 push 0x127514f0 */
  push32((uint32_t)(0x127514f0u));
  /* 127224e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127224ea push 0x127513e0 */
  push32((uint32_t)(0x127513e0u));
  /* 127224ef push 0x12751480 */
  push32((uint32_t)(0x12751480u));
  /* 127224f4 push 0x12751568 */
  push32((uint32_t)(0x12751568u));
  /* 127224f9 call dword ptr [0x12754478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754478))), 0x127224ffu);
  /* 127224ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722502 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722504 call 0x127241a0 */
  push32(0x12722509u); f_127241a0();
L_12722509:;
  /* 12722509 mov esi, esp */
  ESI = (ESP);
  /* 1272250b push 0xd */
  push32((uint32_t)(0xdu));
  /* 1272250d call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722513u);
  /* 12722513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722516 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722518 call 0x127241a0 */
  push32(0x1272251du); f_127241a0();
  /* 1272251d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722524 je 0x127225c5 */
  if (C.zf) goto L_127225c5;
  /* 1272252a mov esi, esp */
  ESI = (ESP);
  /* 1272252c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272252e push 0x12751500 */
  push32((uint32_t)(0x12751500u));
  /* 12722533 call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x12722539u);
  /* 12722539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272253c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272253e call 0x127241a0 */
  push32(0x12722543u); f_127241a0();
  /* 12722543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722545 jle 0x127225c5 */
  if ((C.zf||C.sf!=C.of)) goto L_127225c5;
  /* 12722547 mov esi, esp */
  ESI = (ESP);
  /* 12722549 push 0x12751588 */
  push32((uint32_t)(0x12751588u));
  /* 1272254e call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12722554u);
  /* 12722554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722557 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722559 call 0x127241a0 */
  push32(0x1272255eu); f_127241a0();
  /* 1272255e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722560 jle 0x127225c5 */
  if ((C.zf||C.sf!=C.of)) goto L_127225c5;
  /* 12722562 mov esi, esp */
  ESI = (ESP);
  /* 12722564 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722566 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12722568 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x1272256eu);
  /* 1272256e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722573 call 0x127241a0 */
  push32(0x12722578u); f_127241a0();
  /* 12722578 mov esi, esp */
  ESI = (ESP);
  /* 1272257a push 0x1274c444 */
  push32((uint32_t)(0x1274c444u));
  /* 1272257f call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722585u);
  /* 12722585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722588 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272258a call 0x127241a0 */
  push32(0x1272258fu); f_127241a0();
  /* 1272258f mov esi, esp */
  ESI = (ESP);
  /* 12722591 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722593 push 0x12751588 */
  push32((uint32_t)(0x12751588u));
  /* 12722598 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x1272259eu);
  /* 1272259e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127225a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127225a3 call 0x127241a0 */
  push32(0x127225a8u); f_127241a0();
  /* 127225a8 mov esi, esp */
  ESI = (ESP);
  /* 127225aa push 0 */
  push32((uint32_t)(0x0u));
  /* 127225ac push 0 */
  push32((uint32_t)(0x0u));
  /* 127225ae push 0x12751500 */
  push32((uint32_t)(0x12751500u));
  /* 127225b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 127225b5 call dword ptr [0x1275446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275446c))), 0x127225bbu);
  /* 127225bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127225be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127225c0 call 0x127241a0 */
  push32(0x127225c5u); f_127241a0();
L_127225c5:;
  /* 127225c5 mov esi, esp */
  ESI = (ESP);
  /* 127225c7 push 0xe */
  push32((uint32_t)(0xeu));
  /* 127225c9 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127225cfu);
  /* 127225cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127225d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127225d4 call 0x127241a0 */
  push32(0x127225d9u); f_127241a0();
  /* 127225d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127225de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127225e0 je 0x1272267f */
  if (C.zf) goto L_1272267f;
  /* 127225e6 mov esi, esp */
  ESI = (ESP);
  /* 127225e8 push 0x12751588 */
  push32((uint32_t)(0x12751588u));
  /* 127225ed call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x127225f3u);
  /* 127225f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127225f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127225f8 call 0x127241a0 */
  push32(0x127225fdu); f_127241a0();
  /* 127225fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127225ff jne 0x1272267f */
  if (!C.zf) goto L_1272267f;
  /* 12722601 mov esi, esp */
  ESI = (ESP);
  /* 12722603 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722605 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12722607 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x1272260du);
  /* 1272260d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722610 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722612 call 0x127241a0 */
  push32(0x12722617u); f_127241a0();
  /* 12722617 mov esi, esp */
  ESI = (ESP);
  /* 12722619 push 0x1274c43c */
  push32((uint32_t)(0x1274c43cu));
  /* 1272261e call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722624u);
  /* 12722624 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722627 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722629 call 0x127241a0 */
  push32(0x1272262eu); f_127241a0();
  /* 1272262e mov esi, esp */
  ESI = (ESP);
  /* 12722630 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12722635 push 1 */
  push32((uint32_t)(0x1u));
  /* 12722637 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722639 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x1272263fu);
  /* 1272263f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722642 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722644 call 0x127241a0 */
  push32(0x12722649u); f_127241a0();
  /* 12722649 mov esi, esp */
  ESI = (ESP);
  /* 1272264b push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 12722650 push 4 */
  push32((uint32_t)(0x4u));
  /* 12722652 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722654 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x1272265au);
  /* 1272265a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272265d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272265f call 0x127241a0 */
  push32(0x12722664u); f_127241a0();
  /* 12722664 mov esi, esp */
  ESI = (ESP);
  /* 12722666 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1272266b push 5 */
  push32((uint32_t)(0x5u));
  /* 1272266d push 0 */
  push32((uint32_t)(0x0u));
  /* 1272266f call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722675u);
  /* 12722675 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722678 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272267a call 0x127241a0 */
  push32(0x1272267fu); f_127241a0();
L_1272267f:;
  /* 1272267f mov esi, esp */
  ESI = (ESP);
  /* 12722681 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12722683 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722689u);
  /* 12722689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272268c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272268e call 0x127241a0 */
  push32(0x12722693u); f_127241a0();
  /* 12722693 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272269a je 0x1272273b */
  if (C.zf) goto L_1272273b;
  /* 127226a0 mov esi, esp */
  ESI = (ESP);
  /* 127226a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127226a4 push 0x12751510 */
  push32((uint32_t)(0x12751510u));
  /* 127226a9 call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x127226afu);
  /* 127226af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127226b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127226b4 call 0x127241a0 */
  push32(0x127226b9u); f_127241a0();
  /* 127226b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127226bb jle 0x1272273b */
  if ((C.zf||C.sf!=C.of)) goto L_1272273b;
  /* 127226bd mov esi, esp */
  ESI = (ESP);
  /* 127226bf push 0x12751598 */
  push32((uint32_t)(0x12751598u));
  /* 127226c4 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x127226cau);
  /* 127226ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127226cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127226cf call 0x127241a0 */
  push32(0x127226d4u); f_127241a0();
  /* 127226d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127226d6 jle 0x1272273b */
  if ((C.zf||C.sf!=C.of)) goto L_1272273b;
  /* 127226d8 mov esi, esp */
  ESI = (ESP);
  /* 127226da push 0 */
  push32((uint32_t)(0x0u));
  /* 127226dc push 0xf */
  push32((uint32_t)(0xfu));
  /* 127226de call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127226e4u);
  /* 127226e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127226e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127226e9 call 0x127241a0 */
  push32(0x127226eeu); f_127241a0();
  /* 127226ee mov esi, esp */
  ESI = (ESP);
  /* 127226f0 push 0x1274c430 */
  push32((uint32_t)(0x1274c430u));
  /* 127226f5 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x127226fbu);
  /* 127226fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127226fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722700 call 0x127241a0 */
  push32(0x12722705u); f_127241a0();
  /* 12722705 mov esi, esp */
  ESI = (ESP);
  /* 12722707 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722709 push 0x12751598 */
  push32((uint32_t)(0x12751598u));
  /* 1272270e call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12722714u);
  /* 12722714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722719 call 0x127241a0 */
  push32(0x1272271eu); f_127241a0();
  /* 1272271e mov esi, esp */
  ESI = (ESP);
  /* 12722720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722722 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12722724 push 0x127514e8 */
  push32((uint32_t)(0x127514e8u));
  /* 12722729 push 5 */
  push32((uint32_t)(0x5u));
  /* 1272272b call dword ptr [0x1275446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275446c))), 0x12722731u);
  /* 12722731 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722734 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722736 call 0x127241a0 */
  push32(0x1272273bu); f_127241a0();
L_1272273b:;
  /* 1272273b mov esi, esp */
  ESI = (ESP);
  /* 1272273d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1272273f call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722745u);
  /* 12722745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272274a call 0x127241a0 */
  push32(0x1272274fu); f_127241a0();
  /* 1272274f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722754 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722756 je 0x127227f5 */
  if (C.zf) goto L_127227f5;
  /* 1272275c mov esi, esp */
  ESI = (ESP);
  /* 1272275e push 0x12751598 */
  push32((uint32_t)(0x12751598u));
  /* 12722763 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12722769u);
  /* 12722769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272276c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272276e call 0x127241a0 */
  push32(0x12722773u); f_127241a0();
  /* 12722773 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722775 jne 0x127227f5 */
  if (!C.zf) goto L_127227f5;
  /* 12722777 mov esi, esp */
  ESI = (ESP);
  /* 12722779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272277b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1272277d call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722783u);
  /* 12722783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722788 call 0x127241a0 */
  push32(0x1272278du); f_127241a0();
  /* 1272278d mov esi, esp */
  ESI = (ESP);
  /* 1272278f push 0x1274c424 */
  push32((uint32_t)(0x1274c424u));
  /* 12722794 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x1272279au);
  /* 1272279a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272279d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272279f call 0x127241a0 */
  push32(0x127227a4u); f_127241a0();
  /* 127227a4 mov esi, esp */
  ESI = (ESP);
  /* 127227a6 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 127227ab push 1 */
  push32((uint32_t)(0x1u));
  /* 127227ad push 0 */
  push32((uint32_t)(0x0u));
  /* 127227af call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x127227b5u);
  /* 127227b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127227b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127227ba call 0x127241a0 */
  push32(0x127227bfu); f_127241a0();
  /* 127227bf mov esi, esp */
  ESI = (ESP);
  /* 127227c1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 127227c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 127227c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127227ca call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x127227d0u);
  /* 127227d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127227d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127227d5 call 0x127241a0 */
  push32(0x127227dau); f_127241a0();
  /* 127227da mov esi, esp */
  ESI = (ESP);
  /* 127227dc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 127227e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 127227e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127227e5 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x127227ebu);
  /* 127227eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127227ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127227f0 call 0x127241a0 */
  push32(0x127227f5u); f_127241a0();
L_127227f5:;
  /* 127227f5 mov esi, esp */
  ESI = (ESP);
  /* 127227f7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127227f9 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127227ffu);
  /* 127227ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722804 call 0x127241a0 */
  push32(0x12722809u); f_127241a0();
  /* 12722809 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272280e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722810 je 0x12722899 */
  if (C.zf) goto L_12722899;
  /* 12722816 mov esi, esp */
  ESI = (ESP);
  /* 12722818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272281a push 0x127514f8 */
  push32((uint32_t)(0x127514f8u));
  /* 1272281f call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x12722825u);
  /* 12722825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272282a call 0x127241a0 */
  push32(0x1272282fu); f_127241a0();
  /* 1272282f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722831 jle 0x12722899 */
  if ((C.zf||C.sf!=C.of)) goto L_12722899;
  /* 12722833 mov esi, esp */
  ESI = (ESP);
  /* 12722835 push 0x127515a0 */
  push32((uint32_t)(0x127515a0u));
  /* 1272283a call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12722840u);
  /* 12722840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722845 call 0x127241a0 */
  push32(0x1272284au); f_127241a0();
  /* 1272284a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272284c jle 0x12722899 */
  if ((C.zf||C.sf!=C.of)) goto L_12722899;
  /* 1272284e mov esi, esp */
  ESI = (ESP);
  /* 12722850 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722852 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12722854 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x1272285au);
  /* 1272285a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272285d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272285f call 0x127241a0 */
  push32(0x12722864u); f_127241a0();
  /* 12722864 mov esi, esp */
  ESI = (ESP);
  /* 12722866 push 0x1274c418 */
  push32((uint32_t)(0x1274c418u));
  /* 1272286b call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722871u);
  /* 12722871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722874 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722876 call 0x127241a0 */
  push32(0x1272287bu); f_127241a0();
  /* 1272287b mov esi, esp */
  ESI = (ESP);
  /* 1272287d push 0 */
  push32((uint32_t)(0x0u));
  /* 1272287f push 0x127514f8 */
  push32((uint32_t)(0x127514f8u));
  /* 12722884 push 0x127515a0 */
  push32((uint32_t)(0x127515a0u));
  /* 12722889 call dword ptr [0x1275447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275447c))), 0x1272288fu);
  /* 1272288f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722892 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722894 call 0x127241a0 */
  push32(0x12722899u); f_127241a0();
L_12722899:;
  /* 12722899 mov esi, esp */
  ESI = (ESP);
  /* 1272289b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1272289d call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127228a3u);
  /* 127228a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127228a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127228a8 call 0x127241a0 */
  push32(0x127228adu); f_127241a0();
  /* 127228ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127228b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127228b4 je 0x127228fe */
  if (C.zf) goto L_127228fe;
  /* 127228b6 mov esi, esp */
  ESI = (ESP);
  /* 127228b8 push 0x127515d8 */
  push32((uint32_t)(0x127515d8u));
  /* 127228bd call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x127228c3u);
  /* 127228c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127228c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127228c8 call 0x127241a0 */
  push32(0x127228cdu); f_127241a0();
  /* 127228cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127228cf jne 0x127228fe */
  if (!C.zf) goto L_127228fe;
  /* 127228d1 mov esi, esp */
  ESI = (ESP);
  /* 127228d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127228d5 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 127228d7 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127228ddu);
  /* 127228dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127228e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127228e2 call 0x127241a0 */
  push32(0x127228e7u); f_127241a0();
  /* 127228e7 mov esi, esp */
  ESI = (ESP);
  /* 127228e9 push 0x1274c40c */
  push32((uint32_t)(0x1274c40cu));
  /* 127228ee call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x127228f4u);
  /* 127228f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127228f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127228f9 call 0x127241a0 */
  push32(0x127228feu); f_127241a0();
L_127228fe:;
  /* 127228fe mov esi, esp */
  ESI = (ESP);
  /* 12722900 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12722902 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722908u);
  /* 12722908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272290b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272290d call 0x127241a0 */
  push32(0x12722912u); f_127241a0();
  /* 12722912 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722919 je 0x127229b8 */
  if (C.zf) goto L_127229b8;
  /* 1272291f mov esi, esp */
  ESI = (ESP);
  /* 12722921 push 0x127515a0 */
  push32((uint32_t)(0x127515a0u));
  /* 12722926 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x1272292cu);
  /* 1272292c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272292f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722931 call 0x127241a0 */
  push32(0x12722936u); f_127241a0();
  /* 12722936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722938 jne 0x127229b8 */
  if (!C.zf) goto L_127229b8;
  /* 1272293a mov esi, esp */
  ESI = (ESP);
  /* 1272293c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272293e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12722940 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722946u);
  /* 12722946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722949 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272294b call 0x127241a0 */
  push32(0x12722950u); f_127241a0();
  /* 12722950 mov esi, esp */
  ESI = (ESP);
  /* 12722952 push 0x1274c400 */
  push32((uint32_t)(0x1274c400u));
  /* 12722957 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x1272295du);
  /* 1272295d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722960 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722962 call 0x127241a0 */
  push32(0x12722967u); f_127241a0();
  /* 12722967 mov esi, esp */
  ESI = (ESP);
  /* 12722969 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 1272296e push 1 */
  push32((uint32_t)(0x1u));
  /* 12722970 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722972 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722978u);
  /* 12722978 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272297b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272297d call 0x127241a0 */
  push32(0x12722982u); f_127241a0();
  /* 12722982 mov esi, esp */
  ESI = (ESP);
  /* 12722984 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12722989 push 4 */
  push32((uint32_t)(0x4u));
  /* 1272298b push 0 */
  push32((uint32_t)(0x0u));
  /* 1272298d call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722993u);
  /* 12722993 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722996 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722998 call 0x127241a0 */
  push32(0x1272299du); f_127241a0();
  /* 1272299d mov esi, esp */
  ESI = (ESP);
  /* 1272299f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 127229a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 127229a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127229a8 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x127229aeu);
  /* 127229ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127229b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127229b3 call 0x127241a0 */
  push32(0x127229b8u); f_127241a0();
L_127229b8:;
  /* 127229b8 mov esi, esp */
  ESI = (ESP);
  /* 127229ba push 0x14 */
  push32((uint32_t)(0x14u));
  /* 127229bc call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127229c2u);
  /* 127229c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127229c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127229c7 call 0x127241a0 */
  push32(0x127229ccu); f_127241a0();
  /* 127229cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127229d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127229d3 je 0x12722a6b */
  if (C.zf) goto L_12722a6b;
  /* 127229d9 mov esi, esp */
  ESI = (ESP);
  /* 127229db push 0x12 */
  push32((uint32_t)(0x12u));
  /* 127229dd call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127229e3u);
  /* 127229e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127229e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127229e8 call 0x127241a0 */
  push32(0x127229edu); f_127241a0();
  /* 127229ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127229f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127229f4 jne 0x12722a6b */
  if (!C.zf) goto L_12722a6b;
  /* 127229f6 mov esi, esp */
  ESI = (ESP);
  /* 127229f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127229fa push 0x14 */
  push32((uint32_t)(0x14u));
  /* 127229fc call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722a02u);
  /* 12722a02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722a05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722a07 call 0x127241a0 */
  push32(0x12722a0cu); f_127241a0();
  /* 12722a0c mov esi, esp */
  ESI = (ESP);
  /* 12722a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12722a10 push 0x127515c8 */
  push32((uint32_t)(0x127515c8u));
  /* 12722a15 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12722a1bu);
  /* 12722a1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722a1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722a20 call 0x127241a0 */
  push32(0x12722a25u); f_127241a0();
  /* 12722a25 mov esi, esp */
  ESI = (ESP);
  /* 12722a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12722a29 push 0x127515e8 */
  push32((uint32_t)(0x127515e8u));
  /* 12722a2e call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12722a34u);
  /* 12722a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722a37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722a39 call 0x127241a0 */
  push32(0x12722a3eu); f_127241a0();
  /* 12722a3e mov esi, esp */
  ESI = (ESP);
  /* 12722a40 push 5 */
  push32((uint32_t)(0x5u));
  /* 12722a42 call dword ptr [0x12754480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754480))), 0x12722a48u);
  /* 12722a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722a4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722a4d call 0x127241a0 */
  push32(0x12722a52u); f_127241a0();
  /* 12722a52 mov esi, esp */
  ESI = (ESP);
  /* 12722a54 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12722a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722a5b call dword ptr [0x12754484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754484))), 0x12722a61u);
  /* 12722a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722a64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722a66 call 0x127241a0 */
  push32(0x12722a6bu); f_127241a0();
L_12722a6b:;
  /* 12722a6b mov esi, esp */
  ESI = (ESP);
  /* 12722a6d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12722a6f call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722a75u);
  /* 12722a75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722a7a call 0x127241a0 */
  push32(0x12722a7fu); f_127241a0();
  /* 12722a7f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722a84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722a86 je 0x12722af1 */
  if (C.zf) goto L_12722af1;
  /* 12722a88 mov esi, esp */
  ESI = (ESP);
  /* 12722a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12722a8c call dword ptr [0x12754488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754488))), 0x12722a92u);
  /* 12722a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722a95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722a97 call 0x127241a0 */
  push32(0x12722a9cu); f_127241a0();
  /* 12722a9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722aa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722aa3 je 0x12722af1 */
  if (C.zf) goto L_12722af1;
  /* 12722aa5 mov esi, esp */
  ESI = (ESP);
  /* 12722aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722aa9 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12722aab call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722ab1u);
  /* 12722ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722ab4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722ab6 call 0x127241a0 */
  push32(0x12722abbu); f_127241a0();
  /* 12722abb mov esi, esp */
  ESI = (ESP);
  /* 12722abd push 0 */
  push32((uint32_t)(0x0u));
  /* 12722abf push 0x127515e8 */
  push32((uint32_t)(0x127515e8u));
  /* 12722ac4 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12722acau);
  /* 12722aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722acd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722acf call 0x127241a0 */
  push32(0x12722ad4u); f_127241a0();
  /* 12722ad4 mov esi, esp */
  ESI = (ESP);
  /* 12722ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722ad8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12722ada push 0x127514d0 */
  push32((uint32_t)(0x127514d0u));
  /* 12722adf push 5 */
  push32((uint32_t)(0x5u));
  /* 12722ae1 call dword ptr [0x12754448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754448))), 0x12722ae7u);
  /* 12722ae7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722aea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722aec call 0x127241a0 */
  push32(0x12722af1u); f_127241a0();
L_12722af1:;
  /* 12722af1 mov esi, esp */
  ESI = (ESP);
  /* 12722af3 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12722af5 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722afbu);
  /* 12722afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722afe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722b00 call 0x127241a0 */
  push32(0x12722b05u); f_127241a0();
  /* 12722b05 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722b0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722b0c je 0x12722bab */
  if (C.zf) goto L_12722bab;
  /* 12722b12 mov esi, esp */
  ESI = (ESP);
  /* 12722b14 push 0x127515e8 */
  push32((uint32_t)(0x127515e8u));
  /* 12722b19 push 0x127514d0 */
  push32((uint32_t)(0x127514d0u));
  /* 12722b1e call dword ptr [0x1275448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275448c))), 0x12722b24u);
  /* 12722b24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722b27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722b29 call 0x127241a0 */
  push32(0x12722b2eu); f_127241a0();
  /* 12722b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722b30 jle 0x12722bab */
  if ((C.zf||C.sf!=C.of)) goto L_12722bab;
  /* 12722b32 mov esi, esp */
  ESI = (ESP);
  /* 12722b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722b36 push 0x127515e8 */
  push32((uint32_t)(0x127515e8u));
  /* 12722b3b call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12722b41u);
  /* 12722b41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722b44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722b46 call 0x127241a0 */
  push32(0x12722b4bu); f_127241a0();
  /* 12722b4b mov esi, esp */
  ESI = (ESP);
  /* 12722b4d push 5 */
  push32((uint32_t)(0x5u));
  /* 12722b4f call dword ptr [0x12754490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754490))), 0x12722b55u);
  /* 12722b55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722b58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722b5a call 0x127241a0 */
  push32(0x12722b5fu); f_127241a0();
  /* 12722b5f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722b66 je 0x12722bab */
  if (C.zf) goto L_12722bab;
  /* 12722b68 mov esi, esp */
  ESI = (ESP);
  /* 12722b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12722b6c push 0x127515e8 */
  push32((uint32_t)(0x127515e8u));
  /* 12722b71 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12722b77u);
  /* 12722b77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722b7c call 0x127241a0 */
  push32(0x12722b81u); f_127241a0();
  /* 12722b81 mov esi, esp */
  ESI = (ESP);
  /* 12722b83 push 5 */
  push32((uint32_t)(0x5u));
  /* 12722b85 call dword ptr [0x12754494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754494))), 0x12722b8bu);
  /* 12722b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722b90 call 0x127241a0 */
  push32(0x12722b95u); f_127241a0();
  /* 12722b95 mov esi, esp */
  ESI = (ESP);
  /* 12722b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722b99 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12722b9b call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722ba1u);
  /* 12722ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722ba4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722ba6 call 0x127241a0 */
  push32(0x12722babu); f_127241a0();
L_12722bab:;
  /* 12722bab mov esi, esp */
  ESI = (ESP);
  /* 12722bad push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12722baf call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722bb5u);
  /* 12722bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722bb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722bba call 0x127241a0 */
  push32(0x12722bbfu); f_127241a0();
  /* 12722bbf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722bc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722bc6 je 0x12722c14 */
  if (C.zf) goto L_12722c14;
  /* 12722bc8 mov esi, esp */
  ESI = (ESP);
  /* 12722bca push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12722bcc call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722bd2u);
  /* 12722bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722bd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722bd7 call 0x127241a0 */
  push32(0x12722bdcu); f_127241a0();
  /* 12722bdc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722be3 jne 0x12722c14 */
  if (!C.zf) goto L_12722c14;
  /* 12722be5 mov esi, esp */
  ESI = (ESP);
  /* 12722be7 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12722bec push 1 */
  push32((uint32_t)(0x1u));
  /* 12722bee call dword ptr [0x12754484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754484))), 0x12722bf4u);
  /* 12722bf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722bf9 call 0x127241a0 */
  push32(0x12722bfeu); f_127241a0();
  /* 12722bfe mov esi, esp */
  ESI = (ESP);
  /* 12722c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722c02 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12722c04 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722c0au);
  /* 12722c0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722c0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722c0f call 0x127241a0 */
  push32(0x12722c14u); f_127241a0();
L_12722c14:;
  /* 12722c14 mov esi, esp */
  ESI = (ESP);
  /* 12722c16 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12722c18 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722c1eu);
  /* 12722c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722c21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722c23 call 0x127241a0 */
  push32(0x12722c28u); f_127241a0();
  /* 12722c28 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722c2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722c2f je 0x12722c9a */
  if (C.zf) goto L_12722c9a;
  /* 12722c31 mov esi, esp */
  ESI = (ESP);
  /* 12722c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12722c35 call dword ptr [0x12754488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754488))), 0x12722c3bu);
  /* 12722c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722c3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722c40 call 0x127241a0 */
  push32(0x12722c45u); f_127241a0();
  /* 12722c45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722c4c je 0x12722c9a */
  if (C.zf) goto L_12722c9a;
  /* 12722c4e mov esi, esp */
  ESI = (ESP);
  /* 12722c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722c52 push 0x127515c8 */
  push32((uint32_t)(0x127515c8u));
  /* 12722c57 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12722c5du);
  /* 12722c5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722c62 call 0x127241a0 */
  push32(0x12722c67u); f_127241a0();
  /* 12722c67 mov esi, esp */
  ESI = (ESP);
  /* 12722c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722c6b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12722c6d push 0x127514c8 */
  push32((uint32_t)(0x127514c8u));
  /* 12722c72 push 5 */
  push32((uint32_t)(0x5u));
  /* 12722c74 call dword ptr [0x1275446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275446c))), 0x12722c7au);
  /* 12722c7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722c7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722c7f call 0x127241a0 */
  push32(0x12722c84u); f_127241a0();
  /* 12722c84 mov esi, esp */
  ESI = (ESP);
  /* 12722c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722c88 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12722c8a call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722c90u);
  /* 12722c90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722c93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722c95 call 0x127241a0 */
  push32(0x12722c9au); f_127241a0();
L_12722c9a:;
  /* 12722c9a mov esi, esp */
  ESI = (ESP);
  /* 12722c9c push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12722c9e call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722ca4u);
  /* 12722ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722ca7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722ca9 call 0x127241a0 */
  push32(0x12722caeu); f_127241a0();
  /* 12722cae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722cb5 je 0x12722d30 */
  if (C.zf) goto L_12722d30;
  /* 12722cb7 mov esi, esp */
  ESI = (ESP);
  /* 12722cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722cbb push 0x12751518 */
  push32((uint32_t)(0x12751518u));
  /* 12722cc0 call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x12722cc6u);
  /* 12722cc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722cc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722ccb call 0x127241a0 */
  push32(0x12722cd0u); f_127241a0();
  /* 12722cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722cd2 jle 0x12722d30 */
  if ((C.zf||C.sf!=C.of)) goto L_12722d30;
  /* 12722cd4 mov esi, esp */
  ESI = (ESP);
  /* 12722cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722cd8 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12722cda call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722ce0u);
  /* 12722ce0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722ce5 call 0x127241a0 */
  push32(0x12722ceau); f_127241a0();
  /* 12722cea mov esi, esp */
  ESI = (ESP);
  /* 12722cec push 0x1274c3f4 */
  push32((uint32_t)(0x1274c3f4u));
  /* 12722cf1 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722cf7u);
  /* 12722cf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722cfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722cfc call 0x127241a0 */
  push32(0x12722d01u); f_127241a0();
  /* 12722d01 mov esi, esp */
  ESI = (ESP);
  /* 12722d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722d05 push 0x12751558 */
  push32((uint32_t)(0x12751558u));
  /* 12722d0a call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12722d10u);
  /* 12722d10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722d13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722d15 call 0x127241a0 */
  push32(0x12722d1au); f_127241a0();
  /* 12722d1a mov esi, esp */
  ESI = (ESP);
  /* 12722d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12722d1e push 4 */
  push32((uint32_t)(0x4u));
  /* 12722d20 call dword ptr [0x12754498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754498))), 0x12722d26u);
  /* 12722d26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722d29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722d2b call 0x127241a0 */
  push32(0x12722d30u); f_127241a0();
L_12722d30:;
  /* 12722d30 mov esi, esp */
  ESI = (ESP);
  /* 12722d32 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12722d34 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722d3au);
  /* 12722d3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722d3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722d3f call 0x127241a0 */
  push32(0x12722d44u); f_127241a0();
  /* 12722d44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722d4b je 0x12722d97 */
  if (C.zf) goto L_12722d97;
  /* 12722d4d mov esi, esp */
  ESI = (ESP);
  /* 12722d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12722d51 push 0x12751490 */
  push32((uint32_t)(0x12751490u));
  /* 12722d56 call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x12722d5cu);
  /* 12722d5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722d5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722d61 call 0x127241a0 */
  push32(0x12722d66u); f_127241a0();
  /* 12722d66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722d68 jle 0x12722d97 */
  if ((C.zf||C.sf!=C.of)) goto L_12722d97;
  /* 12722d6a mov esi, esp */
  ESI = (ESP);
  /* 12722d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12722d6e push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12722d70 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722d76u);
  /* 12722d76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722d79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722d7b call 0x127241a0 */
  push32(0x12722d80u); f_127241a0();
  /* 12722d80 mov esi, esp */
  ESI = (ESP);
  /* 12722d82 push 0x1274c3e8 */
  push32((uint32_t)(0x1274c3e8u));
  /* 12722d87 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722d8du);
  /* 12722d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722d90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722d92 call 0x127241a0 */
  push32(0x12722d97u); f_127241a0();
L_12722d97:;
  /* 12722d97 mov esi, esp */
  ESI = (ESP);
  /* 12722d99 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12722d9b call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722da1u);
  /* 12722da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722da6 call 0x127241a0 */
  push32(0x12722dabu); f_127241a0();
  /* 12722dab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722db0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722db2 je 0x12722e6e */
  if (C.zf) goto L_12722e6e;
  /* 12722db8 mov esi, esp */
  ESI = (ESP);
  /* 12722dba push 0x12751438 */
  push32((uint32_t)(0x12751438u));
  /* 12722dbf call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12722dc5u);
  /* 12722dc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722dc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722dca call 0x127241a0 */
  push32(0x12722dcfu); f_127241a0();
  /* 12722dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722dd1 jne 0x12722e6e */
  if (!C.zf) goto L_12722e6e;
  /* 12722dd7 mov esi, esp */
  ESI = (ESP);
  /* 12722dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722ddb push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12722ddd call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722de3u);
  /* 12722de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722de6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722de8 call 0x127241a0 */
  push32(0x12722dedu); f_127241a0();
  /* 12722ded mov esi, esp */
  ESI = (ESP);
  /* 12722def push 0x1274c3dc */
  push32((uint32_t)(0x1274c3dcu));
  /* 12722df4 call dword ptr [0x1275449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275449c))), 0x12722dfau);
  /* 12722dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722dfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722dff call 0x127241a0 */
  push32(0x12722e04u); f_127241a0();
  /* 12722e04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722e0b je 0x12722e3c */
  if (C.zf) goto L_12722e3c;
  /* 12722e0d mov esi, esp */
  ESI = (ESP);
  /* 12722e0f push 0x1274c3d0 */
  push32((uint32_t)(0x1274c3d0u));
  /* 12722e14 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722e1au);
  /* 12722e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722e1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722e1f call 0x127241a0 */
  push32(0x12722e24u); f_127241a0();
  /* 12722e24 mov esi, esp */
  ESI = (ESP);
  /* 12722e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722e28 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 12722e2a call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722e30u);
  /* 12722e30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722e33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722e35 call 0x127241a0 */
  push32(0x12722e3au); f_127241a0();
  /* 12722e3a jmp 0x12722e6e */
  goto L_12722e6e;
L_12722e3c:;
  /* 12722e3c mov esi, esp */
  ESI = (ESP);
  /* 12722e3e push 0x1274c3c4 */
  push32((uint32_t)(0x1274c3c4u));
  /* 12722e43 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722e49u);
  /* 12722e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722e4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722e4e call 0x127241a0 */
  push32(0x12722e53u); f_127241a0();
  /* 12722e53 mov esi, esp */
  ESI = (ESP);
  /* 12722e55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12722e5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12722e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12722e5e call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722e64u);
  /* 12722e64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722e67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722e69 call 0x127241a0 */
  push32(0x12722e6eu); f_127241a0();
L_12722e6e:;
  /* 12722e6e mov esi, esp */
  ESI = (ESP);
  /* 12722e70 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 12722e72 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722e78u);
  /* 12722e78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722e7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722e7d call 0x127241a0 */
  push32(0x12722e82u); f_127241a0();
  /* 12722e82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722e87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722e89 je 0x12722f6b */
  if (C.zf) goto L_12722f6b;
  /* 12722e8f mov esi, esp */
  ESI = (ESP);
  /* 12722e91 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 12722e93 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722e99u);
  /* 12722e99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722e9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722e9e call 0x127241a0 */
  push32(0x12722ea3u); f_127241a0();
  /* 12722ea3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722eaa jne 0x12722f6b */
  if (!C.zf) goto L_12722f6b;
  /* 12722eb0 mov esi, esp */
  ESI = (ESP);
  /* 12722eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722eb4 push 0x12751528 */
  push32((uint32_t)(0x12751528u));
  /* 12722eb9 call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x12722ebfu);
  /* 12722ebf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722ec2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722ec4 call 0x127241a0 */
  push32(0x12722ec9u); f_127241a0();
  /* 12722ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722ecb jle 0x12722f6b */
  if ((C.zf||C.sf!=C.of)) goto L_12722f6b;
  /* 12722ed1 mov esi, esp */
  ESI = (ESP);
  /* 12722ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722ed5 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 12722ed7 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722eddu);
  /* 12722edd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722ee0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722ee2 call 0x127241a0 */
  push32(0x12722ee7u); f_127241a0();
  /* 12722ee7 mov esi, esp */
  ESI = (ESP);
  /* 12722ee9 push 0x1274c3b8 */
  push32((uint32_t)(0x1274c3b8u));
  /* 12722eee call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722ef4u);
  /* 12722ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722ef7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722ef9 call 0x127241a0 */
  push32(0x12722efeu); f_127241a0();
  /* 12722efe mov esi, esp */
  ESI = (ESP);
  /* 12722f00 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12722f05 push 1 */
  push32((uint32_t)(0x1u));
  /* 12722f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722f09 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722f0fu);
  /* 12722f0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722f12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722f14 call 0x127241a0 */
  push32(0x12722f19u); f_127241a0();
  /* 12722f19 mov esi, esp */
  ESI = (ESP);
  /* 12722f1b push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 12722f20 push 4 */
  push32((uint32_t)(0x4u));
  /* 12722f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722f24 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722f2au);
  /* 12722f2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722f2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722f2f call 0x127241a0 */
  push32(0x12722f34u); f_127241a0();
  /* 12722f34 mov esi, esp */
  ESI = (ESP);
  /* 12722f36 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12722f3b push 5 */
  push32((uint32_t)(0x5u));
  /* 12722f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12722f3f call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722f45u);
  /* 12722f45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722f48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722f4a call 0x127241a0 */
  push32(0x12722f4fu); f_127241a0();
  /* 12722f4f mov esi, esp */
  ESI = (ESP);
  /* 12722f51 push 0x1274c09c */
  push32((uint32_t)(0x1274c09cu));
  /* 12722f56 push 0x1274c314 */
  push32((uint32_t)(0x1274c314u));
  /* 12722f5b call dword ptr [0x1275444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275444c))), 0x12722f61u);
  /* 12722f61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722f64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722f66 call 0x127241a0 */
  push32(0x12722f6bu); f_127241a0();
L_12722f6b:;
  /* 12722f6b mov esi, esp */
  ESI = (ESP);
  /* 12722f6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12722f6f call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12722f75u);
  /* 12722f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722f78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722f7a call 0x127241a0 */
  push32(0x12722f7fu); f_127241a0();
  /* 12722f7f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12722f84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722f86 je 0x12723022 */
  if (C.zf) goto L_12723022;
  /* 12722f8c mov esi, esp */
  ESI = (ESP);
  /* 12722f8e push 0x12751580 */
  push32((uint32_t)(0x12751580u));
  /* 12722f93 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12722f99u);
  /* 12722f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722f9e call 0x127241a0 */
  push32(0x12722fa3u); f_127241a0();
  /* 12722fa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12722fa5 jne 0x12723022 */
  if (!C.zf) goto L_12723022;
  /* 12722fa7 mov esi, esp */
  ESI = (ESP);
  /* 12722fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722fab push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12722fad call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12722fb3u);
  /* 12722fb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722fb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722fb8 call 0x127241a0 */
  push32(0x12722fbdu); f_127241a0();
  /* 12722fbd mov esi, esp */
  ESI = (ESP);
  /* 12722fbf push 0x1274c3ac */
  push32((uint32_t)(0x1274c3acu));
  /* 12722fc4 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12722fcau);
  /* 12722fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722fcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722fcf call 0x127241a0 */
  push32(0x12722fd4u); f_127241a0();
  /* 12722fd4 mov esi, esp */
  ESI = (ESP);
  /* 12722fd6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12722fd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12722fda push 0 */
  push32((uint32_t)(0x0u));
  /* 12722fdc call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722fe2u);
  /* 12722fe2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12722fe5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12722fe7 call 0x127241a0 */
  push32(0x12722fecu); f_127241a0();
  /* 12722fec mov esi, esp */
  ESI = (ESP);
  /* 12722fee push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12722ff3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12722ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12722ff7 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12722ffdu);
  /* 12722ffd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723000 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723002 call 0x127241a0 */
  push32(0x12723007u); f_127241a0();
  /* 12723007 mov esi, esp */
  ESI = (ESP);
  /* 12723009 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1272300e push 5 */
  push32((uint32_t)(0x5u));
  /* 12723010 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723012 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12723018u);
  /* 12723018 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272301b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272301d call 0x127241a0 */
  push32(0x12723022u); f_127241a0();
L_12723022:;
  /* 12723022 mov esi, esp */
  ESI = (ESP);
  /* 12723024 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12723026 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272302cu);
  /* 1272302c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272302f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723031 call 0x127241a0 */
  push32(0x12723036u); f_127241a0();
  /* 12723036 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272303b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272303d je 0x127230d9 */
  if (C.zf) goto L_127230d9;
  /* 12723043 mov esi, esp */
  ESI = (ESP);
  /* 12723045 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12723047 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272304du);
  /* 1272304d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723050 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723052 call 0x127241a0 */
  push32(0x12723057u); f_127241a0();
  /* 12723057 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272305c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272305e jne 0x127230d9 */
  if (!C.zf) goto L_127230d9;
  /* 12723060 mov esi, esp */
  ESI = (ESP);
  /* 12723062 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723064 push 0x12751488 */
  push32((uint32_t)(0x12751488u));
  /* 12723069 call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x1272306fu);
  /* 1272306f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723072 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723074 call 0x127241a0 */
  push32(0x12723079u); f_127241a0();
  /* 12723079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272307b jle 0x127230d9 */
  if ((C.zf||C.sf!=C.of)) goto L_127230d9;
  /* 1272307d mov esi, esp */
  ESI = (ESP);
  /* 1272307f push 0 */
  push32((uint32_t)(0x0u));
  /* 12723081 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12723083 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12723089u);
  /* 12723089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272308c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272308e call 0x127241a0 */
  push32(0x12723093u); f_127241a0();
  /* 12723093 mov esi, esp */
  ESI = (ESP);
  /* 12723095 push 0x1274c3a0 */
  push32((uint32_t)(0x1274c3a0u));
  /* 1272309a call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x127230a0u);
  /* 127230a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127230a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127230a5 call 0x127241a0 */
  push32(0x127230aau); f_127241a0();
  /* 127230aa mov esi, esp */
  ESI = (ESP);
  /* 127230ac push 0 */
  push32((uint32_t)(0x0u));
  /* 127230ae push 0x12751590 */
  push32((uint32_t)(0x12751590u));
  /* 127230b3 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x127230b9u);
  /* 127230b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127230bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127230be call 0x127241a0 */
  push32(0x127230c3u); f_127241a0();
  /* 127230c3 mov esi, esp */
  ESI = (ESP);
  /* 127230c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127230c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127230c9 call dword ptr [0x12754498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754498))), 0x127230cfu);
  /* 127230cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127230d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127230d4 call 0x127241a0 */
  push32(0x127230d9u); f_127241a0();
L_127230d9:;
  /* 127230d9 mov esi, esp */
  ESI = (ESP);
  /* 127230db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127230dd call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127230e3u);
  /* 127230e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127230e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127230e8 call 0x127241a0 */
  push32(0x127230edu); f_127241a0();
  /* 127230ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127230f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127230f4 je 0x12723140 */
  if (C.zf) goto L_12723140;
  /* 127230f6 mov esi, esp */
  ESI = (ESP);
  /* 127230f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127230fa push 0x127514e0 */
  push32((uint32_t)(0x127514e0u));
  /* 127230ff call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x12723105u);
  /* 12723105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723108 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272310a call 0x127241a0 */
  push32(0x1272310fu); f_127241a0();
  /* 1272310f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12723111 jle 0x12723140 */
  if ((C.zf||C.sf!=C.of)) goto L_12723140;
  /* 12723113 mov esi, esp */
  ESI = (ESP);
  /* 12723115 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723117 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12723119 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x1272311fu);
  /* 1272311f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723122 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723124 call 0x127241a0 */
  push32(0x12723129u); f_127241a0();
  /* 12723129 mov esi, esp */
  ESI = (ESP);
  /* 1272312b push 0x1274c394 */
  push32((uint32_t)(0x1274c394u));
  /* 12723130 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12723136u);
  /* 12723136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723139 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272313b call 0x127241a0 */
  push32(0x12723140u); f_127241a0();
L_12723140:;
  /* 12723140 mov esi, esp */
  ESI = (ESP);
  /* 12723142 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 12723144 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272314au);
  /* 1272314a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272314d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272314f call 0x127241a0 */
  push32(0x12723154u); f_127241a0();
  /* 12723154 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12723159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272315b je 0x127231f1 */
  if (C.zf) goto L_127231f1;
  /* 12723161 mov esi, esp */
  ESI = (ESP);
  /* 12723163 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723165 push 0x127514d8 */
  push32((uint32_t)(0x127514d8u));
  /* 1272316a call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x12723170u);
  /* 12723170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723173 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723175 call 0x127241a0 */
  push32(0x1272317au); f_127241a0();
  /* 1272317a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272317c jle 0x127231f1 */
  if ((C.zf||C.sf!=C.of)) goto L_127231f1;
  /* 1272317e mov esi, esp */
  ESI = (ESP);
  /* 12723180 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723182 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 12723184 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x1272318au);
  /* 1272318a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272318d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272318f call 0x127241a0 */
  push32(0x12723194u); f_127241a0();
  /* 12723194 mov esi, esp */
  ESI = (ESP);
  /* 12723196 push 0x1274c388 */
  push32((uint32_t)(0x1274c388u));
  /* 1272319b call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x127231a1u);
  /* 127231a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127231a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127231a6 call 0x127241a0 */
  push32(0x127231abu); f_127241a0();
  /* 127231ab mov esi, esp */
  ESI = (ESP);
  /* 127231ad push 0x1274c37c */
  push32((uint32_t)(0x1274c37cu));
  /* 127231b2 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x127231b8u);
  /* 127231b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127231bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127231bd call 0x127241a0 */
  push32(0x127231c2u); f_127241a0();
  /* 127231c2 mov esi, esp */
  ESI = (ESP);
  /* 127231c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127231c6 push 0x127515a8 */
  push32((uint32_t)(0x127515a8u));
  /* 127231cb call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x127231d1u);
  /* 127231d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127231d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127231d6 call 0x127241a0 */
  push32(0x127231dbu); f_127241a0();
  /* 127231db mov esi, esp */
  ESI = (ESP);
  /* 127231dd push 0 */
  push32((uint32_t)(0x0u));
  /* 127231df push 4 */
  push32((uint32_t)(0x4u));
  /* 127231e1 call dword ptr [0x12754498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754498))), 0x127231e7u);
  /* 127231e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127231ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127231ec call 0x127241a0 */
  push32(0x127231f1u); f_127241a0();
L_127231f1:;
  /* 127231f1 mov esi, esp */
  ESI = (ESP);
  /* 127231f3 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 127231f5 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127231fbu);
  /* 127231fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127231fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723200 call 0x127241a0 */
  push32(0x12723205u); f_127241a0();
  /* 12723205 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272320a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272320c je 0x1272326e */
  if (C.zf) goto L_1272326e;
  /* 1272320e mov esi, esp */
  ESI = (ESP);
  /* 12723210 push 3 */
  push32((uint32_t)(0x3u));
  /* 12723212 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723214 call dword ptr [0x12754470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754470))), 0x1272321au);
  /* 1272321a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272321d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272321f call 0x127241a0 */
  push32(0x12723224u); f_127241a0();
  /* 12723224 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723229 jl 0x1272326e */
  if ((C.sf!=C.of)) goto L_1272326e;
  /* 1272322b mov esi, esp */
  ESI = (ESP);
  /* 1272322d push 0 */
  push32((uint32_t)(0x0u));
  /* 1272322f push 0x22 */
  push32((uint32_t)(0x22u));
  /* 12723231 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12723237u);
  /* 12723237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272323a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272323c call 0x127241a0 */
  push32(0x12723241u); f_127241a0();
  /* 12723241 mov esi, esp */
  ESI = (ESP);
  /* 12723243 push 0x1274c370 */
  push32((uint32_t)(0x1274c370u));
  /* 12723248 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x1272324eu);
  /* 1272324e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723251 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723253 call 0x127241a0 */
  push32(0x12723258u); f_127241a0();
  /* 12723258 mov esi, esp */
  ESI = (ESP);
  /* 1272325a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272325c push 4 */
  push32((uint32_t)(0x4u));
  /* 1272325e call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12723264u);
  /* 12723264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723267 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723269 call 0x127241a0 */
  push32(0x1272326eu); f_127241a0();
L_1272326e:;
  /* 1272326e mov esi, esp */
  ESI = (ESP);
  /* 12723270 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12723272 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12723278u);
  /* 12723278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272327b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272327d call 0x127241a0 */
  push32(0x12723282u); f_127241a0();
  /* 12723282 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12723287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12723289 je 0x12723380 */
  if (C.zf) goto L_12723380;
  /* 1272328f mov esi, esp */
  ESI = (ESP);
  /* 12723291 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 12723293 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12723299u);
  /* 12723299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272329c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272329e call 0x127241a0 */
  push32(0x127232a3u); f_127241a0();
  /* 127232a3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127232a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127232aa jne 0x12723380 */
  if (!C.zf) goto L_12723380;
  /* 127232b0 mov esi, esp */
  ESI = (ESP);
  /* 127232b2 push 0x12751410 */
  push32((uint32_t)(0x12751410u));
  /* 127232b7 push 0x127514e8 */
  push32((uint32_t)(0x127514e8u));
  /* 127232bc call dword ptr [0x1275448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275448c))), 0x127232c2u);
  /* 127232c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127232c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127232c7 call 0x127241a0 */
  push32(0x127232ccu); f_127241a0();
  /* 127232cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127232cf jne 0x12723380 */
  if (!C.zf) goto L_12723380;
  /* 127232d5 mov esi, esp */
  ESI = (ESP);
  /* 127232d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127232d9 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 127232db call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127232e1u);
  /* 127232e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127232e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127232e6 call 0x127241a0 */
  push32(0x127232ebu); f_127241a0();
  /* 127232eb mov esi, esp */
  ESI = (ESP);
  /* 127232ed push 0 */
  push32((uint32_t)(0x0u));
  /* 127232ef push 0x12751410 */
  push32((uint32_t)(0x12751410u));
  /* 127232f4 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x127232fau);
  /* 127232fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127232fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127232ff call 0x127241a0 */
  push32(0x12723304u); f_127241a0();
  /* 12723304 mov esi, esp */
  ESI = (ESP);
  /* 12723306 push 4 */
  push32((uint32_t)(0x4u));
  /* 12723308 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272330a call dword ptr [0x12754498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754498))), 0x12723310u);
  /* 12723310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723315 call 0x127241a0 */
  push32(0x1272331au); f_127241a0();
  /* 1272331a mov esi, esp */
  ESI = (ESP);
  /* 1272331c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272331e push 0x12751410 */
  push32((uint32_t)(0x12751410u));
  /* 12723323 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12723329u);
  /* 12723329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272332c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272332e call 0x127241a0 */
  push32(0x12723333u); f_127241a0();
  /* 12723333 mov esi, esp */
  ESI = (ESP);
  /* 12723335 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723337 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12723339 push 0x127514e8 */
  push32((uint32_t)(0x127514e8u));
  /* 1272333e push 4 */
  push32((uint32_t)(0x4u));
  /* 12723340 call dword ptr [0x12754448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754448))), 0x12723346u);
  /* 12723346 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723349 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272334b call 0x127241a0 */
  push32(0x12723350u); f_127241a0();
  /* 12723350 mov esi, esp */
  ESI = (ESP);
  /* 12723352 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12723357 push 2 */
  push32((uint32_t)(0x2u));
  /* 12723359 call dword ptr [0x12754484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754484))), 0x1272335fu);
  /* 1272335f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723362 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723364 call 0x127241a0 */
  push32(0x12723369u); f_127241a0();
  /* 12723369 mov esi, esp */
  ESI = (ESP);
  /* 1272336b push 0x1274c364 */
  push32((uint32_t)(0x1274c364u));
  /* 12723370 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12723376u);
  /* 12723376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272337b call 0x127241a0 */
  push32(0x12723380u); f_127241a0();
L_12723380:;
  /* 12723380 mov esi, esp */
  ESI = (ESP);
  /* 12723382 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12723384 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272338au);
  /* 1272338a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272338d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272338f call 0x127241a0 */
  push32(0x12723394u); f_127241a0();
  /* 12723394 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12723399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272339b je 0x12723435 */
  if (C.zf) goto L_12723435;
  /* 127233a1 mov esi, esp */
  ESI = (ESP);
  /* 127233a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127233a5 call dword ptr [0x127544a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544a0))), 0x127233abu);
  /* 127233ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127233ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127233b0 call 0x127241a0 */
  push32(0x127233b5u); f_127241a0();
  /* 127233b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127233ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127233bc je 0x12723435 */
  if (C.zf) goto L_12723435;
  /* 127233be mov esi, esp */
  ESI = (ESP);
  /* 127233c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127233c2 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 127233c4 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127233cau);
  /* 127233ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127233cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127233cf call 0x127241a0 */
  push32(0x127233d4u); f_127241a0();
  /* 127233d4 mov esi, esp */
  ESI = (ESP);
  /* 127233d6 push 0x1274c358 */
  push32((uint32_t)(0x1274c358u));
  /* 127233db call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x127233e1u);
  /* 127233e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127233e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127233e6 call 0x127241a0 */
  push32(0x127233ebu); f_127241a0();
  /* 127233eb mov esi, esp */
  ESI = (ESP);
  /* 127233ed push 0 */
  push32((uint32_t)(0x0u));
  /* 127233ef push 0x12751410 */
  push32((uint32_t)(0x12751410u));
  /* 127233f4 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x127233fau);
  /* 127233fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127233fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127233ff call 0x127241a0 */
  push32(0x12723404u); f_127241a0();
  /* 12723404 mov esi, esp */
  ESI = (ESP);
  /* 12723406 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723408 push 4 */
  push32((uint32_t)(0x4u));
  /* 1272340a call dword ptr [0x12754498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754498))), 0x12723410u);
  /* 12723410 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723413 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723415 call 0x127241a0 */
  push32(0x1272341au); f_127241a0();
  /* 1272341a mov esi, esp */
  ESI = (ESP);
  /* 1272341c push 1 */
  push32((uint32_t)(0x1u));
  /* 1272341e push 2 */
  push32((uint32_t)(0x2u));
  /* 12723420 push 0x127514c0 */
  push32((uint32_t)(0x127514c0u));
  /* 12723425 call dword ptr [0x127544a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544a4))), 0x1272342bu);
  /* 1272342b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272342e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723430 call 0x127241a0 */
  push32(0x12723435u); f_127241a0();
L_12723435:;
  /* 12723435 mov esi, esp */
  ESI = (ESP);
  /* 12723437 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 12723439 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272343fu);
  /* 1272343f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723442 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723444 call 0x127241a0 */
  push32(0x12723449u); f_127241a0();
  /* 12723449 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272344e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12723450 je 0x127234f1 */
  if (C.zf) goto L_127234f1;
  /* 12723456 mov esi, esp */
  ESI = (ESP);
  /* 12723458 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 1272345a call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12723460u);
  /* 12723460 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723463 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723465 call 0x127241a0 */
  push32(0x1272346au); f_127241a0();
  /* 1272346a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272346f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12723471 jne 0x127234f1 */
  if (!C.zf) goto L_127234f1;
  /* 12723473 mov esi, esp */
  ESI = (ESP);
  /* 12723475 push 0x12751410 */
  push32((uint32_t)(0x12751410u));
  /* 1272347a push 0x127514c0 */
  push32((uint32_t)(0x127514c0u));
  /* 1272347f call dword ptr [0x1275448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275448c))), 0x12723485u);
  /* 12723485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272348a call 0x127241a0 */
  push32(0x1272348fu); f_127241a0();
  /* 1272348f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723492 jne 0x127234f1 */
  if (!C.zf) goto L_127234f1;
  /* 12723494 mov esi, esp */
  ESI = (ESP);
  /* 12723496 push 0x12751400 */
  push32((uint32_t)(0x12751400u));
  /* 1272349b push 0x127514c0 */
  push32((uint32_t)(0x127514c0u));
  /* 127234a0 call dword ptr [0x1275448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275448c))), 0x127234a6u);
  /* 127234a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127234a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127234ab call 0x127241a0 */
  push32(0x127234b0u); f_127241a0();
  /* 127234b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127234b3 jne 0x127234f1 */
  if (!C.zf) goto L_127234f1;
  /* 127234b5 mov esi, esp */
  ESI = (ESP);
  /* 127234b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127234b9 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 127234bb call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127234c1u);
  /* 127234c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127234c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127234c6 call 0x127241a0 */
  push32(0x127234cbu); f_127241a0();
  /* 127234cb mov esi, esp */
  ESI = (ESP);
  /* 127234cd push 0x1274c34c */
  push32((uint32_t)(0x1274c34cu));
  /* 127234d2 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x127234d8u);
  /* 127234d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127234db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127234dd call 0x127241a0 */
  push32(0x127234e2u); f_127241a0();
  /* 127234e2 mov esi, esp */
  ESI = (ESP);
  /* 127234e4 call dword ptr [0x127544a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544a8))), 0x127234eau);
  /* 127234ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127234ec call 0x127241a0 */
  push32(0x127234f1u); f_127241a0();
L_127234f1:;
  /* 127234f1 mov esi, esp */
  ESI = (ESP);
  /* 127234f3 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 127234f5 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127234fbu);
  /* 127234fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127234fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723500 call 0x127241a0 */
  push32(0x12723505u); f_127241a0();
  /* 12723505 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272350a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272350c je 0x12723630 */
  if (C.zf) goto L_12723630;
  /* 12723512 mov esi, esp */
  ESI = (ESP);
  /* 12723514 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12723516 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272351cu);
  /* 1272351c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272351f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723521 call 0x127241a0 */
  push32(0x12723526u); f_127241a0();
  /* 12723526 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272352b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272352d jne 0x12723630 */
  if (!C.zf) goto L_12723630;
  /* 12723533 mov esi, esp */
  ESI = (ESP);
  /* 12723535 push 0x12751410 */
  push32((uint32_t)(0x12751410u));
  /* 1272353a push 0x127514a8 */
  push32((uint32_t)(0x127514a8u));
  /* 1272353f call dword ptr [0x1275448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275448c))), 0x12723545u);
  /* 12723545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272354a call 0x127241a0 */
  push32(0x1272354fu); f_127241a0();
  /* 1272354f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723552 jne 0x12723630 */
  if (!C.zf) goto L_12723630;
  /* 12723558 mov esi, esp */
  ESI = (ESP);
  /* 1272355a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272355c push 0x26 */
  push32((uint32_t)(0x26u));
  /* 1272355e call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12723564u);
  /* 12723564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723567 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723569 call 0x127241a0 */
  push32(0x1272356eu); f_127241a0();
  /* 1272356e mov esi, esp */
  ESI = (ESP);
  /* 12723570 push 0x1274c340 */
  push32((uint32_t)(0x1274c340u));
  /* 12723575 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x1272357bu);
  /* 1272357b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272357e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723580 call 0x127241a0 */
  push32(0x12723585u); f_127241a0();
  /* 12723585 mov esi, esp */
  ESI = (ESP);
  /* 12723587 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12723589 push 0x127514b8 */
  push32((uint32_t)(0x127514b8u));
  /* 1272358e push 1 */
  push32((uint32_t)(0x1u));
  /* 12723590 push 0x12751538 */
  push32((uint32_t)(0x12751538u));
  /* 12723595 push 0x12751480 */
  push32((uint32_t)(0x12751480u));
  /* 1272359a push 0x127515d0 */
  push32((uint32_t)(0x127515d0u));
  /* 1272359f call dword ptr [0x12754478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754478))), 0x127235a5u);
  /* 127235a5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127235a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127235aa call 0x127241a0 */
  push32(0x127235afu); f_127241a0();
  /* 127235af mov esi, esp */
  ESI = (ESP);
  /* 127235b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127235b3 push 0x127515d0 */
  push32((uint32_t)(0x127515d0u));
  /* 127235b8 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x127235beu);
  /* 127235be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127235c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127235c3 call 0x127241a0 */
  push32(0x127235c8u); f_127241a0();
  /* 127235c8 mov esi, esp */
  ESI = (ESP);
  /* 127235ca push 0 */
  push32((uint32_t)(0x0u));
  /* 127235cc push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127235ce push 0x127514c0 */
  push32((uint32_t)(0x127514c0u));
  /* 127235d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127235d5 call dword ptr [0x1275446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275446c))), 0x127235dbu);
  /* 127235db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127235de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127235e0 call 0x127241a0 */
  push32(0x127235e5u); f_127241a0();
  /* 127235e5 mov esi, esp */
  ESI = (ESP);
  /* 127235e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127235e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 127235eb push 0x127514b8 */
  push32((uint32_t)(0x127514b8u));
  /* 127235f0 call dword ptr [0x127544a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544a4))), 0x127235f6u);
  /* 127235f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127235f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127235fb call 0x127241a0 */
  push32(0x12723600u); f_127241a0();
  /* 12723600 mov esi, esp */
  ESI = (ESP);
  /* 12723602 push 0x127514b8 */
  push32((uint32_t)(0x127514b8u));
  /* 12723607 call dword ptr [0x127544ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544ac))), 0x1272360du);
  /* 1272360d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723610 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723612 call 0x127241a0 */
  push32(0x12723617u); f_127241a0();
  /* 12723617 mov esi, esp */
  ESI = (ESP);
  /* 12723619 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 1272361e push 5 */
  push32((uint32_t)(0x5u));
  /* 12723620 call dword ptr [0x12754484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754484))), 0x12723626u);
  /* 12723626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272362b call 0x127241a0 */
  push32(0x12723630u); f_127241a0();
L_12723630:;
  /* 12723630 mov esi, esp */
  ESI = (ESP);
  /* 12723632 push 5 */
  push32((uint32_t)(0x5u));
  /* 12723634 call dword ptr [0x127544a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544a0))), 0x1272363au);
  /* 1272363a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272363d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272363f call 0x127241a0 */
  push32(0x12723644u); f_127241a0();
  /* 12723644 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12723649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272364b je 0x12723661 */
  if (C.zf) goto L_12723661;
  /* 1272364d mov esi, esp */
  ESI = (ESP);
  /* 1272364f push 0 */
  push32((uint32_t)(0x0u));
  /* 12723651 call dword ptr [0x127544b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127544b0))), 0x12723657u);
  /* 12723657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272365a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272365c call 0x127241a0 */
  push32(0x12723661u); f_127241a0();
L_12723661:;
  /* 12723661 mov esi, esp */
  ESI = (ESP);
  /* 12723663 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 12723665 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x1272366bu);
  /* 1272366b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272366e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723670 call 0x127241a0 */
  push32(0x12723675u); f_127241a0();
  /* 12723675 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272367a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272367c je 0x127236f6 */
  if (C.zf) goto L_127236f6;
  /* 1272367e mov esi, esp */
  ESI = (ESP);
  /* 12723680 push 0x127515c0 */
  push32((uint32_t)(0x127515c0u));
  /* 12723685 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x1272368bu);
  /* 1272368b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272368e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723690 call 0x127241a0 */
  push32(0x12723695u); f_127241a0();
  /* 12723695 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723698 jg 0x127236f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_127236f6;
  /* 1272369a mov esi, esp */
  ESI = (ESP);
  /* 1272369c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272369e push 0x27 */
  push32((uint32_t)(0x27u));
  /* 127236a0 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127236a6u);
  /* 127236a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127236a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127236ab call 0x127241a0 */
  push32(0x127236b0u); f_127241a0();
  /* 127236b0 mov esi, esp */
  ESI = (ESP);
  /* 127236b2 push 0x1274c334 */
  push32((uint32_t)(0x1274c334u));
  /* 127236b7 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x127236bdu);
  /* 127236bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127236c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127236c2 call 0x127241a0 */
  push32(0x127236c7u); f_127241a0();
  /* 127236c7 mov esi, esp */
  ESI = (ESP);
  /* 127236c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127236cb push 0x12751430 */
  push32((uint32_t)(0x12751430u));
  /* 127236d0 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x127236d6u);
  /* 127236d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127236d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127236db call 0x127241a0 */
  push32(0x127236e0u); f_127241a0();
  /* 127236e0 mov esi, esp */
  ESI = (ESP);
  /* 127236e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127236e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127236e6 call dword ptr [0x12754498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754498))), 0x127236ecu);
  /* 127236ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127236ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127236f1 call 0x127241a0 */
  push32(0x127236f6u); f_127241a0();
L_127236f6:;
  /* 127236f6 mov esi, esp */
  ESI = (ESP);
  /* 127236f8 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 127236fa call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12723700u);
  /* 12723700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723705 call 0x127241a0 */
  push32(0x1272370au); f_127241a0();
  /* 1272370a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272370f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12723711 je 0x12723797 */
  if (C.zf) goto L_12723797;
  /* 12723717 mov esi, esp */
  ESI = (ESP);
  /* 12723719 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272371b push 0x12751508 */
  push32((uint32_t)(0x12751508u));
  /* 12723720 call dword ptr [0x12754464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754464))), 0x12723726u);
  /* 12723726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723729 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272372b call 0x127241a0 */
  push32(0x12723730u); f_127241a0();
  /* 12723730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12723732 jle 0x12723797 */
  if ((C.zf||C.sf!=C.of)) goto L_12723797;
  /* 12723734 mov esi, esp */
  ESI = (ESP);
  /* 12723736 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723738 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1272373a call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x12723740u);
  /* 12723740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723745 call 0x127241a0 */
  push32(0x1272374au); f_127241a0();
  /* 1272374a mov esi, esp */
  ESI = (ESP);
  /* 1272374c push 0x1274c328 */
  push32((uint32_t)(0x1274c328u));
  /* 12723751 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x12723757u);
  /* 12723757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272375a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272375c call 0x127241a0 */
  push32(0x12723761u); f_127241a0();
  /* 12723761 mov esi, esp */
  ESI = (ESP);
  /* 12723763 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723765 push 0x127515b8 */
  push32((uint32_t)(0x127515b8u));
  /* 1272376a call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x12723770u);
  /* 12723770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723775 call 0x127241a0 */
  push32(0x1272377au); f_127241a0();
  /* 1272377a mov esi, esp */
  ESI = (ESP);
  /* 1272377c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272377e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12723780 push 0x12751508 */
  push32((uint32_t)(0x12751508u));
  /* 12723785 push 5 */
  push32((uint32_t)(0x5u));
  /* 12723787 call dword ptr [0x1275446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275446c))), 0x1272378du);
  /* 1272378d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723792 call 0x127241a0 */
  push32(0x12723797u); f_127241a0();
L_12723797:;
  /* 12723797 mov esi, esp */
  ESI = (ESP);
  /* 12723799 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1272379b call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x127237a1u);
  /* 127237a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127237a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127237a6 call 0x127241a0 */
  push32(0x127237abu); f_127241a0();
  /* 127237ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127237b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127237b2 je 0x1272384e */
  if (C.zf) goto L_1272384e;
  /* 127237b8 mov esi, esp */
  ESI = (ESP);
  /* 127237ba push 0x127515b8 */
  push32((uint32_t)(0x127515b8u));
  /* 127237bf call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x127237c5u);
  /* 127237c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127237c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127237ca call 0x127241a0 */
  push32(0x127237cfu); f_127241a0();
  /* 127237cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127237d1 jne 0x1272384e */
  if (!C.zf) goto L_1272384e;
  /* 127237d3 mov esi, esp */
  ESI = (ESP);
  /* 127237d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127237d7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 127237d9 call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127237dfu);
  /* 127237df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127237e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127237e4 call 0x127241a0 */
  push32(0x127237e9u); f_127241a0();
  /* 127237e9 mov esi, esp */
  ESI = (ESP);
  /* 127237eb push 0x1274c31c */
  push32((uint32_t)(0x1274c31cu));
  /* 127237f0 call dword ptr [0x1275443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275443c))), 0x127237f6u);
  /* 127237f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127237f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127237fb call 0x127241a0 */
  push32(0x12723800u); f_127241a0();
  /* 12723800 mov esi, esp */
  ESI = (ESP);
  /* 12723802 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12723804 push 1 */
  push32((uint32_t)(0x1u));
  /* 12723806 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723808 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x1272380eu);
  /* 1272380e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723813 call 0x127241a0 */
  push32(0x12723818u); f_127241a0();
  /* 12723818 mov esi, esp */
  ESI = (ESP);
  /* 1272381a push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 1272381f push 4 */
  push32((uint32_t)(0x4u));
  /* 12723821 push 0 */
  push32((uint32_t)(0x0u));
  /* 12723823 call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12723829u);
  /* 12723829 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272382c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272382e call 0x127241a0 */
  push32(0x12723833u); f_127241a0();
  /* 12723833 mov esi, esp */
  ESI = (ESP);
  /* 12723835 push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 1272383a push 5 */
  push32((uint32_t)(0x5u));
  /* 1272383c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272383e call dword ptr [0x12754468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754468))), 0x12723844u);
  /* 12723844 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12723847 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723849 call 0x127241a0 */
  push32(0x1272384eu); f_127241a0();
L_1272384e:;
  /* 1272384e mov esi, esp */
  ESI = (ESP);
  /* 12723850 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12723852 call dword ptr [0x12754430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754430))), 0x12723858u);
  /* 12723858 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272385b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272385d call 0x127241a0 */
  push32(0x12723862u); f_127241a0();
  /* 12723862 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12723867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12723869 je 0x127238f1 */
  if (C.zf) goto L_127238f1;
  /* 1272386f mov esi, esp */
  ESI = (ESP);
  /* 12723871 push 0x12751570 */
  push32((uint32_t)(0x12751570u));
  /* 12723876 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x1272387cu);
  /* 1272387c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272387f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12723881 call 0x127241a0 */
  push32(0x12723886u); f_127241a0();
  /* 12723886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12723888 jne 0x127238f1 */
  if (!C.zf) goto L_127238f1;
  /* 1272388a mov esi, esp */
  ESI = (ESP);
  /* 1272388c push 0x127515e0 */
  push32((uint32_t)(0x127515e0u));
  /* 12723891 call dword ptr [0x12754458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754458))), 0x12723897u);
  /* 12723897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272389a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272389c call 0x127241a0 */
  push32(0x127238a1u); f_127241a0();
  /* 127238a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127238a3 jne 0x127238f1 */
  if (!C.zf) goto L_127238f1;
  /* 127238a5 mov esi, esp */
  ESI = (ESP);
  /* 127238a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127238a9 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 127238ab call dword ptr [0x12754434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754434))), 0x127238b1u);
  /* 127238b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127238b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127238b6 call 0x127241a0 */
  push32(0x127238bbu); f_127241a0();
  /* 127238bb mov esi, esp */
  ESI = (ESP);
  /* 127238bd push 0 */
  push32((uint32_t)(0x0u));
  /* 127238bf push 0x12751578 */
  push32((uint32_t)(0x12751578u));
  /* 127238c4 call dword ptr [0x12754440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754440))), 0x127238cau);
  /* 127238ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127238cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127238cf call 0x127241a0 */
  push32(0x127238d4u); f_127241a0();
  /* 127238d4 mov esi, esp */
  ESI = (ESP);
  /* 127238d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127238d8 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 127238da push 0x127514a8 */
  push32((uint32_t)(0x127514a8u));
  /* 127238df push 1 */
  push32((uint32_t)(0x1u));
  /* 127238e1 call dword ptr [0x1275446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275446c))), 0x127238e7u);
  /* 127238e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127238ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127238ec call 0x127241a0 */
  push32(0x127238f1u); f_127241a0();
L_127238f1:;
  /* 127238f1 pop edi */
  EDI = (pop32());
  /* 127238f2 pop esi */
  ESI = (pop32());
  /* 127238f3 pop ebx */
  EBX = (pop32());
  /* 127238f4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127238f7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127238f9 call 0x127241a0 */
  push32(0x127238feu); f_127241a0();
  /* 127238fe mov esp, ebp */
  ESP = (EBP);
  /* 12723900 pop ebp */
  EBP = (pop32());
  /* 12723901 ret  */
  ESPCHK(0x12721a60u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x127241a0 (56 bytes, 28 insns) */
void f_127241a0(void) {
  FTRACE(0x127241a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127241a0 jne 0x127241a3 */
  if (!C.zf) goto L_127241a3;
  /* 127241a2 ret  */
  ESPCHK(0x127241a0u, _esp0);
  ESP += 4; return;
L_127241a3:;
  /* 127241a3 push ebp */
  push32((uint32_t)(EBP));
  /* 127241a4 mov ebp, esp */
  EBP = (ESP);
  /* 127241a6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127241a9 push eax */
  push32((uint32_t)(EAX));
  /* 127241aa push edx */
  push32((uint32_t)(EDX));
  /* 127241ab push ebx */
  push32((uint32_t)(EBX));
  /* 127241ac push esi */
  push32((uint32_t)(ESI));
  /* 127241ad push edi */
  push32((uint32_t)(EDI));
  /* 127241ae push 0x1274c4c4 */
  push32((uint32_t)(0x1274c4c4u));
  /* 127241b3 push 0x1274c4c0 */
  push32((uint32_t)(0x1274c4c0u));
  /* 127241b8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 127241ba push 0x1274c4b0 */
  push32((uint32_t)(0x1274c4b0u));
  /* 127241bf push 1 */
  push32((uint32_t)(0x1u));
  /* 127241c1 call 0x12724570 */
  push32(0x127241c6u); f_12724570();
  /* 127241c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127241c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127241cc jne 0x127241cf */
  if (!C.zf) goto L_127241cf;
  /* 127241ce int3  */
  x86_unimpl("int3 @ 0x127241ce");
L_127241cf:;
  /* 127241cf pop edi */
  EDI = (pop32());
  /* 127241d0 pop esi */
  ESI = (pop32());
  /* 127241d1 pop ebx */
  EBX = (pop32());
  /* 127241d2 pop edx */
  EDX = (pop32());
  /* 127241d3 pop eax */
  EAX = (pop32());
  /* 127241d4 mov esp, ebp */
  ESP = (EBP);
  /* 127241d6 pop ebp */
  EBP = (pop32());
  /* 127241d7 ret  */
  ESPCHK(0x127241a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041e0 @ 0x127241e0 (313 bytes, 78 insns) */
void f_127241e0(void) {
  FTRACE(0x127241e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127241e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127241e1 mov ebp, esp */
  EBP = (ESP);
  /* 127241e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127241e7 jne 0x127242a7 */
  if (!C.zf) goto L_127242a7;
  /* 127241ed call dword ptr [0x12754354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754354))), 0x127241f3u);
  /* 127241f3 mov dword ptr [0x1275167c], eax */
  w32((uint32_t)(0x1275167c), (EAX));
  /* 127241f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 127241fa call 0x12727ca0 */
  push32(0x127241ffu); f_12727ca0();
  /* 127241ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12724204 jne 0x1272420d */
  if (!C.zf) goto L_1272420d;
  /* 12724206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12724208 jmp 0x12724315 */
  goto L_12724315;
L_1272420d:;
  /* 1272420d mov eax, dword ptr [0x1275167c] */
  EAX = (r32((uint32_t)(0x1275167c)));
  /* 12724212 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12724215 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272421a mov dword ptr [0x12751688], eax */
  w32((uint32_t)(0x12751688), (EAX));
  /* 1272421f mov ecx, dword ptr [0x1275167c] */
  ECX = (r32((uint32_t)(0x1275167c)));
  /* 12724225 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272422b mov dword ptr [0x12751684], ecx */
  w32((uint32_t)(0x12751684), (ECX));
  /* 12724231 mov edx, dword ptr [0x12751684] */
  EDX = (r32((uint32_t)(0x12751684)));
  /* 12724237 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1272423a add edx, dword ptr [0x12751688] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12751688))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12724240 mov dword ptr [0x12751680], edx */
  w32((uint32_t)(0x12751680), (EDX));
  /* 12724246 mov eax, dword ptr [0x1275167c] */
  EAX = (r32((uint32_t)(0x1275167c)));
  /* 1272424b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1272424e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12724253 mov dword ptr [0x1275167c], eax */
  w32((uint32_t)(0x1275167c), (EAX));
  /* 12724258 call 0x12724e10 */
  push32(0x1272425du); f_12724e10();
  /* 1272425d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272425f jne 0x1272426d */
  if (!C.zf) goto L_1272426d;
  /* 12724261 call 0x12727cf0 */
  push32(0x12724266u); f_12727cf0();
  /* 12724266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12724268 jmp 0x12724315 */
  goto L_12724315;
L_1272426d:;
  /* 1272426d call dword ptr [0x12754350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754350))), 0x12724273u);
  /* 12724273 mov dword ptr [0x127531cc], eax */
  w32((uint32_t)(0x127531cc), (EAX));
  /* 12724278 call 0x12727a80 */
  push32(0x1272427du); f_12727a80();
  /* 1272427d mov dword ptr [0x12751664], eax */
  w32((uint32_t)(0x12751664), (EAX));
  /* 12724282 call 0x127250c0 */
  push32(0x12724287u); f_127250c0();
  /* 12724287 call 0x12727570 */
  push32(0x1272428cu); f_12727570();
  /* 1272428c call 0x12727420 */
  push32(0x12724291u); f_12727420();
  /* 12724291 call 0x12724c10 */
  push32(0x12724296u); f_12724c10();
  /* 12724296 mov ecx, dword ptr [0x12751660] */
  ECX = (r32((uint32_t)(0x12751660)));
  /* 1272429c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272429f mov dword ptr [0x12751660], ecx */
  w32((uint32_t)(0x12751660), (ECX));
  /* 127242a5 jmp 0x12724310 */
  goto L_12724310;
L_127242a7:;
  /* 127242a7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127242ab jne 0x12724300 */
  if (!C.zf) goto L_12724300;
  /* 127242ad cmp dword ptr [0x12751660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127242b4 jle 0x127242fa */
  if ((C.zf||C.sf!=C.of)) goto L_127242fa;
  /* 127242b6 mov edx, dword ptr [0x12751660] */
  EDX = (r32((uint32_t)(0x12751660)));
  /* 127242bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127242bf mov dword ptr [0x12751660], edx */
  w32((uint32_t)(0x12751660), (EDX));
  /* 127242c5 cmp dword ptr [0x127516b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127516b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127242cc jne 0x127242d3 */
  if (!C.zf) goto L_127242d3;
  /* 127242ce call 0x12724c90 */
  push32(0x127242d3u); f_12724c90();
L_127242d3:;
  /* 127242d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127242d5 call 0x127269c0 */
  push32(0x127242dau); f_127269c0();
  /* 127242da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127242dd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 127242e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127242e2 je 0x127242e9 */
  if (C.zf) goto L_127242e9;
  /* 127242e4 call 0x127272d0 */
  push32(0x127242e9u); f_127272d0();
L_127242e9:;
  /* 127242e9 call 0x127253f0 */
  push32(0x127242eeu); f_127253f0();
  /* 127242ee call 0x12724ea0 */
  push32(0x127242f3u); f_12724ea0();
  /* 127242f3 call 0x12727cf0 */
  push32(0x127242f8u); f_12727cf0();
  /* 127242f8 jmp 0x127242fe */
  goto L_127242fe;
L_127242fa:;
  /* 127242fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127242fc jmp 0x12724315 */
  goto L_12724315;
L_127242fe:;
  /* 127242fe jmp 0x12724310 */
  goto L_12724310;
L_12724300:;
  /* 12724300 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724304 jne 0x12724310 */
  if (!C.zf) goto L_12724310;
  /* 12724306 push 0 */
  push32((uint32_t)(0x0u));
  /* 12724308 call 0x12724f90 */
  push32(0x1272430du); f_12724f90();
  /* 1272430d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12724310:;
  /* 12724310 mov eax, 1 */
  EAX = (0x1u);
L_12724315:;
  /* 12724315 pop ebp */
  EBP = (pop32());
  /* 12724316 ret 0xc */
  ESPCHK(0x127241e0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12724320 (243 bytes, 86 insns) */
void f_12724320(void) {
  FTRACE(0x12724320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724320 push ebp */
  push32((uint32_t)(EBP));
  /* 12724321 mov ebp, esp */
  EBP = (ESP);
  /* 12724323 push ecx */
  push32((uint32_t)(ECX));
  /* 12724324 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1272432b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272432f jne 0x12724341 */
  if (!C.zf) goto L_12724341;
  /* 12724331 cmp dword ptr [0x12751660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724338 jne 0x12724341 */
  if (!C.zf) goto L_12724341;
  /* 1272433a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272433c jmp 0x1272440d */
  goto L_1272440d;
L_12724341:;
  /* 12724341 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724345 je 0x1272434d */
  if (C.zf) goto L_1272434d;
  /* 12724347 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272434b jne 0x1272438f */
  if (!C.zf) goto L_1272438f;
L_1272434d:;
  /* 1272434d cmp dword ptr [0x127531dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127531dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724354 je 0x1272436b */
  if (C.zf) goto L_1272436b;
  /* 12724356 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12724359 push eax */
  push32((uint32_t)(EAX));
  /* 1272435a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272435d push ecx */
  push32((uint32_t)(ECX));
  /* 1272435e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724361 push edx */
  push32((uint32_t)(EDX));
  /* 12724362 call dword ptr [0x127531dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127531dc))), 0x12724368u);
  /* 12724368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272436b:;
  /* 1272436b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272436f je 0x12724385 */
  if (C.zf) goto L_12724385;
  /* 12724371 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12724374 push eax */
  push32((uint32_t)(EAX));
  /* 12724375 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12724378 push ecx */
  push32((uint32_t)(ECX));
  /* 12724379 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272437c push edx */
  push32((uint32_t)(EDX));
  /* 1272437d call 0x127241e0 */
  push32(0x12724382u); f_127241e0();
  /* 12724382 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12724385:;
  /* 12724385 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724389 jne 0x1272438f */
  if (!C.zf) goto L_1272438f;
  /* 1272438b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272438d jmp 0x1272440d */
  goto L_1272440d;
L_1272438f:;
  /* 1272438f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12724392 push eax */
  push32((uint32_t)(EAX));
  /* 12724393 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12724396 push ecx */
  push32((uint32_t)(ECX));
  /* 12724397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272439a push edx */
  push32((uint32_t)(EDX));
  /* 1272439b call 0x1272100a */
  push32(0x127243a0u); f_1272100a();
  /* 127243a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127243a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127243a7 jne 0x127243be */
  if (!C.zf) goto L_127243be;
  /* 127243a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127243ad jne 0x127243be */
  if (!C.zf) goto L_127243be;
  /* 127243af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127243b2 push eax */
  push32((uint32_t)(EAX));
  /* 127243b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127243b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127243b8 push ecx */
  push32((uint32_t)(ECX));
  /* 127243b9 call 0x127241e0 */
  push32(0x127243beu); f_127241e0();
L_127243be:;
  /* 127243be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127243c2 je 0x127243ca */
  if (C.zf) goto L_127243ca;
  /* 127243c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127243c8 jne 0x1272440a */
  if (!C.zf) goto L_1272440a;
L_127243ca:;
  /* 127243ca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127243cd push edx */
  push32((uint32_t)(EDX));
  /* 127243ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127243d1 push eax */
  push32((uint32_t)(EAX));
  /* 127243d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127243d5 push ecx */
  push32((uint32_t)(ECX));
  /* 127243d6 call 0x127241e0 */
  push32(0x127243dbu); f_127241e0();
  /* 127243db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127243dd jne 0x127243e6 */
  if (!C.zf) goto L_127243e6;
  /* 127243df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127243e6:;
  /* 127243e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127243ea je 0x1272440a */
  if (C.zf) goto L_1272440a;
  /* 127243ec cmp dword ptr [0x127531dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127531dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127243f3 je 0x1272440a */
  if (C.zf) goto L_1272440a;
  /* 127243f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127243f8 push edx */
  push32((uint32_t)(EDX));
  /* 127243f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127243fc push eax */
  push32((uint32_t)(EAX));
  /* 127243fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724400 push ecx */
  push32((uint32_t)(ECX));
  /* 12724401 call dword ptr [0x127531dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127531dc))), 0x12724407u);
  /* 12724407 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272440a:;
  /* 1272440a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1272440d:;
  /* 1272440d mov esp, ebp */
  ESP = (EBP);
  /* 1272440f pop ebp */
  EBP = (pop32());
  /* 12724410 ret 0xc */
  ESPCHK(0x12724320u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12724420 (58 bytes, 18 insns) */
void f_12724420(void) {
  FTRACE(0x12724420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724420 push ebp */
  push32((uint32_t)(EBP));
  /* 12724421 mov ebp, esp */
  EBP = (ESP);
  /* 12724423 cmp dword ptr [0x1275166c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1275166c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272442a je 0x1272443e */
  if (C.zf) goto L_1272443e;
  /* 1272442c cmp dword ptr [0x1275166c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1275166c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724433 jne 0x12724443 */
  if (!C.zf) goto L_12724443;
  /* 12724435 cmp dword ptr [0x12751670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12751670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272443c jne 0x12724443 */
  if (!C.zf) goto L_12724443;
L_1272443e:;
  /* 1272443e call 0x12727d90 */
  push32(0x12724443u); f_12727d90();
L_12724443:;
  /* 12724443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724446 push eax */
  push32((uint32_t)(EAX));
  /* 12724447 call 0x12727de0 */
  push32(0x1272444cu); f_12727de0();
  /* 1272444c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272444f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12724454 call dword ptr [0x1274fa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1274fa30))), 0x1272445au);
  /* 1272445a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272445d pop ebp */
  EBP = (pop32());
  /* 1272445e ret  */
  ESPCHK(0x12724420u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x12724460 (11 bytes, 5 insns) */
void f_12724460(void) {
  FTRACE(0x12724460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724460 push ebp */
  push32((uint32_t)(EBP));
  /* 12724461 mov ebp, esp */
  EBP = (ESP);
  /* 12724463 call dword ptr [0x12754358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754358))), 0x12724469u);
  /* 12724469 pop ebp */
  EBP = (pop32());
  /* 1272446a ret  */
  ESPCHK(0x12724460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004470 @ 0x12724470 (87 bytes, 30 insns) */
void f_12724470(void) {
  FTRACE(0x12724470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724470 push ebp */
  push32((uint32_t)(EBP));
  /* 12724471 mov ebp, esp */
  EBP = (ESP);
  /* 12724473 push ecx */
  push32((uint32_t)(ECX));
  /* 12724474 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724478 jl 0x12724480 */
  if ((C.sf!=C.of)) goto L_12724480;
  /* 1272447a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272447e jl 0x12724485 */
  if ((C.sf!=C.of)) goto L_12724485;
L_12724480:;
  /* 12724480 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12724483 jmp 0x127244c3 */
  goto L_127244c3;
L_12724485:;
  /* 12724485 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724489 jne 0x12724497 */
  if (!C.zf) goto L_12724497;
  /* 1272448b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272448e mov eax, dword ptr [eax*4 + 0x1274fa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1274fa38)));
  /* 12724495 jmp 0x127244c3 */
  goto L_127244c3;
L_12724497:;
  /* 12724497 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272449a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1272449d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272449f je 0x127244a6 */
  if (C.zf) goto L_127244a6;
  /* 127244a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127244a4 jmp 0x127244c3 */
  goto L_127244c3;
L_127244a6:;
  /* 127244a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127244a9 mov eax, dword ptr [edx*4 + 0x1274fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1274fa38)));
  /* 127244b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127244b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127244b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127244b9 mov dword ptr [ecx*4 + 0x1274fa38], edx */
  w32((uint32_t)(ECX*4 + 0x1274fa38), (EDX));
  /* 127244c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127244c3:;
  /* 127244c3 mov esp, ebp */
  ESP = (EBP);
  /* 127244c5 pop ebp */
  EBP = (pop32());
  /* 127244c6 ret  */
  ESPCHK(0x12724470u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x127244d0 (126 bytes, 38 insns) */
void f_127244d0(void) {
  FTRACE(0x127244d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127244d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127244d1 mov ebp, esp */
  EBP = (ESP);
  /* 127244d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127244d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127244d8 jl 0x127244e0 */
  if ((C.sf!=C.of)) goto L_127244e0;
  /* 127244da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127244de jl 0x127244e7 */
  if ((C.sf!=C.of)) goto L_127244e7;
L_127244e0:;
  /* 127244e0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 127244e5 jmp 0x1272454a */
  goto L_1272454a;
L_127244e7:;
  /* 127244e7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127244eb jne 0x127244f9 */
  if (!C.zf) goto L_127244f9;
  /* 127244ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127244f0 mov eax, dword ptr [eax*4 + 0x1274fa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1274fa44)));
  /* 127244f7 jmp 0x1272454a */
  goto L_1272454a;
L_127244f9:;
  /* 127244f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127244fc mov edx, dword ptr [ecx*4 + 0x1274fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1274fa44)));
  /* 12724503 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12724506 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272450a jne 0x12724520 */
  if (!C.zf) goto L_12724520;
  /* 1272450c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1272450e call dword ptr [0x1275435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275435c))), 0x12724514u);
  /* 12724514 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724517 mov dword ptr [ecx*4 + 0x1274fa44], eax */
  w32((uint32_t)(ECX*4 + 0x1274fa44), (EAX));
  /* 1272451e jmp 0x12724547 */
  goto L_12724547;
L_12724520:;
  /* 12724520 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724524 jne 0x1272453a */
  if (!C.zf) goto L_1272453a;
  /* 12724526 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12724528 call dword ptr [0x1275435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275435c))), 0x1272452eu);
  /* 1272452e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724531 mov dword ptr [edx*4 + 0x1274fa44], eax */
  w32((uint32_t)(EDX*4 + 0x1274fa44), (EAX));
  /* 12724538 jmp 0x12724547 */
  goto L_12724547;
L_1272453a:;
  /* 1272453a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272453d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12724540 mov dword ptr [eax*4 + 0x1274fa44], ecx */
  w32((uint32_t)(EAX*4 + 0x1274fa44), (ECX));
L_12724547:;
  /* 12724547 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1272454a:;
  /* 1272454a mov esp, ebp */
  ESP = (EBP);
  /* 1272454c pop ebp */
  EBP = (pop32());
  /* 1272454d ret  */
  ESPCHK(0x127244d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004550 @ 0x12724550 (28 bytes, 11 insns) */
void f_12724550(void) {
  FTRACE(0x12724550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724550 push ebp */
  push32((uint32_t)(EBP));
  /* 12724551 mov ebp, esp */
  EBP = (ESP);
  /* 12724553 push ecx */
  push32((uint32_t)(ECX));
  /* 12724554 mov eax, dword ptr [0x127531c0] */
  EAX = (r32((uint32_t)(0x127531c0)));
  /* 12724559 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272455c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272455f mov dword ptr [0x127531c0], ecx */
  w32((uint32_t)(0x127531c0), (ECX));
  /* 12724565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724568 mov esp, ebp */
  ESP = (EBP);
  /* 1272456a pop ebp */
  EBP = (pop32());
  /* 1272456b ret  */
  ESPCHK(0x12724550u, _esp0);
  ESP += 4; return;
}

/* FUN_10004570 @ 0x12724570 (912 bytes, 248 insns) */
void f_12724570(void) {
  FTRACE(0x12724570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724570 push ebp */
  push32((uint32_t)(EBP));
  /* 12724571 mov ebp, esp */
  EBP = (ESP);
  /* 12724573 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12724578 call 0x12728650 */
  push32(0x1272457du); f_12728650();
  /* 1272457d push edi */
  push32((uint32_t)(EDI));
  /* 1272457e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12724585 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1272458a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272458c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12724592 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12724594 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12724596 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12724597 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1272459e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 127245a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127245a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 127245ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127245ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 127245af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 127245b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 127245b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 127245bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127245be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 127245c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127245c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 127245c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 127245c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 127245cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 127245d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127245d6 jl 0x127245de */
  if ((C.sf!=C.of)) goto L_127245de;
  /* 127245d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127245dc jl 0x127245e6 */
  if ((C.sf!=C.of)) goto L_127245e6;
L_127245de:;
  /* 127245de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127245e1 jmp 0x127248fb */
  goto L_127248fb;
L_127245e6:;
  /* 127245e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127245ea jne 0x12724690 */
  if (!C.zf) goto L_12724690;
  /* 127245f0 push 0x1274fa34 */
  push32((uint32_t)(0x1274fa34u));
  /* 127245f5 call dword ptr [0x12754374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754374))), 0x127245fbu);
  /* 127245fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127245fd jle 0x12724690 */
  if ((C.zf||C.sf!=C.of)) goto L_12724690;
  /* 12724603 cmp dword ptr [0x12751674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272460a jne 0x1272464e */
  if (!C.zf) goto L_1272464e;
  /* 1272460c push 0x1274c66c */
  push32((uint32_t)(0x1274c66cu));
  /* 12724611 call dword ptr [0x12754370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754370))), 0x12724617u);
  /* 12724617 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1272461d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724624 je 0x12724646 */
  if (C.zf) goto L_12724646;
  /* 12724626 push 0x1274c660 */
  push32((uint32_t)(0x1274c660u));
  /* 1272462b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12724631 push ecx */
  push32((uint32_t)(ECX));
  /* 12724632 call dword ptr [0x1275436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275436c))), 0x12724638u);
  /* 12724638 mov dword ptr [0x12751674], eax */
  w32((uint32_t)(0x12751674), (EAX));
  /* 1272463d cmp dword ptr [0x12751674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724644 jne 0x1272464e */
  if (!C.zf) goto L_1272464e;
L_12724646:;
  /* 12724646 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12724649 jmp 0x127248fb */
  goto L_127248fb;
L_1272464e:;
  /* 1272464e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12724651 push edx */
  push32((uint32_t)(EDX));
  /* 12724652 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12724655 push eax */
  push32((uint32_t)(EAX));
  /* 12724656 push 0x1274c62c */
  push32((uint32_t)(0x1274c62cu));
  /* 1272465b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12724661 push ecx */
  push32((uint32_t)(ECX));
  /* 12724662 call dword ptr [0x12751674] */
  call_ind((uint32_t)(r32((uint32_t)(0x12751674))), 0x12724668u);
  /* 12724668 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272466b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12724671 push edx */
  push32((uint32_t)(EDX));
  /* 12724672 call dword ptr [0x12754368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754368))), 0x12724678u);
  /* 12724678 push 0x1274fa34 */
  push32((uint32_t)(0x1274fa34u));
  /* 1272467d call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x12724683u);
  /* 12724683 call 0x12724460 */
  push32(0x12724688u); f_12724460();
  /* 12724688 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272468b jmp 0x127248fb */
  goto L_127248fb;
L_12724690:;
  /* 12724690 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724694 je 0x127246cd */
  if (C.zf) goto L_127246cd;
  /* 12724696 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1272469c push eax */
  push32((uint32_t)(EAX));
  /* 1272469d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127246a0 push ecx */
  push32((uint32_t)(ECX));
  /* 127246a1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 127246a6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 127246ac push edx */
  push32((uint32_t)(EDX));
  /* 127246ad call 0x12728550 */
  push32(0x127246b2u); f_12728550();
  /* 127246b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127246b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127246b7 jge 0x127246cd */
  if ((C.sf==C.of)) goto L_127246cd;
  /* 127246b9 push 0x1274c600 */
  push32((uint32_t)(0x1274c600u));
  /* 127246be lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 127246c4 push eax */
  push32((uint32_t)(EAX));
  /* 127246c5 call 0x12728460 */
  push32(0x127246cau); f_12728460();
  /* 127246ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127246cd:;
  /* 127246cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127246d1 jne 0x12724705 */
  if (!C.zf) goto L_12724705;
  /* 127246d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127246d7 je 0x127246e5 */
  if (C.zf) goto L_127246e5;
  /* 127246d9 mov dword ptr [ebp - 0x3028], 0x1274c5ec */
  w32((uint32_t)(EBP + -0x3028), (0x1274c5ecu));
  /* 127246e3 jmp 0x127246ef */
  goto L_127246ef;
L_127246e5:;
  /* 127246e5 mov dword ptr [ebp - 0x3028], 0x1274c5d8 */
  w32((uint32_t)(EBP + -0x3028), (0x1274c5d8u));
L_127246ef:;
  /* 127246ef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 127246f5 push ecx */
  push32((uint32_t)(ECX));
  /* 127246f6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 127246fc push edx */
  push32((uint32_t)(EDX));
  /* 127246fd call 0x12728460 */
  push32(0x12724702u); f_12728460();
  /* 12724702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12724705:;
  /* 12724705 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1272470b push eax */
  push32((uint32_t)(EAX));
  /* 1272470c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12724712 push ecx */
  push32((uint32_t)(ECX));
  /* 12724713 call 0x12728470 */
  push32(0x12724718u); f_12728470();
  /* 12724718 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272471b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272471f jne 0x1272475a */
  if (!C.zf) goto L_1272475a;
  /* 12724721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724724 mov eax, dword ptr [edx*4 + 0x1274fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1274fa38)));
  /* 1272472b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1272472e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12724730 je 0x12724746 */
  if (C.zf) goto L_12724746;
  /* 12724732 push 0x1274c5d4 */
  push32((uint32_t)(0x1274c5d4u));
  /* 12724737 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1272473d push ecx */
  push32((uint32_t)(ECX));
  /* 1272473e call 0x12728470 */
  push32(0x12724743u); f_12728470();
  /* 12724743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12724746:;
  /* 12724746 push 0x1274c5d0 */
  push32((uint32_t)(0x1274c5d0u));
  /* 1272474b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12724751 push edx */
  push32((uint32_t)(EDX));
  /* 12724752 call 0x12728470 */
  push32(0x12724757u); f_12728470();
  /* 12724757 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272475a:;
  /* 1272475a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272475e je 0x127247a2 */
  if (C.zf) goto L_127247a2;
  /* 12724760 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12724766 push eax */
  push32((uint32_t)(EAX));
  /* 12724767 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272476a push ecx */
  push32((uint32_t)(ECX));
  /* 1272476b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272476e push edx */
  push32((uint32_t)(EDX));
  /* 1272476f push 0x1274c5c4 */
  push32((uint32_t)(0x1274c5c4u));
  /* 12724774 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12724779 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1272477f push eax */
  push32((uint32_t)(EAX));
  /* 12724780 call 0x12728360 */
  push32(0x12724785u); f_12728360();
  /* 12724785 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272478a jge 0x127247a0 */
  if ((C.sf==C.of)) goto L_127247a0;
  /* 1272478c push 0x1274c600 */
  push32((uint32_t)(0x1274c600u));
  /* 12724791 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12724797 push ecx */
  push32((uint32_t)(ECX));
  /* 12724798 call 0x12728460 */
  push32(0x1272479du); f_12728460();
  /* 1272479d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127247a0:;
  /* 127247a0 jmp 0x127247b8 */
  goto L_127247b8;
L_127247a2:;
  /* 127247a2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 127247a8 push edx */
  push32((uint32_t)(EDX));
  /* 127247a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 127247af push eax */
  push32((uint32_t)(EAX));
  /* 127247b0 call 0x12728460 */
  push32(0x127247b5u); f_12728460();
  /* 127247b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127247b8:;
  /* 127247b8 cmp dword ptr [0x127531c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127531c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127247bf je 0x127247fc */
  if (C.zf) goto L_127247fc;
  /* 127247c1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 127247c7 push ecx */
  push32((uint32_t)(ECX));
  /* 127247c8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 127247ce push edx */
  push32((uint32_t)(EDX));
  /* 127247cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127247d2 push eax */
  push32((uint32_t)(EAX));
  /* 127247d3 call dword ptr [0x127531c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127531c0))), 0x127247d9u);
  /* 127247d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127247dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127247de je 0x127247fc */
  if (C.zf) goto L_127247fc;
  /* 127247e0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127247e4 jne 0x127247f1 */
  if (!C.zf) goto L_127247f1;
  /* 127247e6 push 0x1274fa34 */
  push32((uint32_t)(0x1274fa34u));
  /* 127247eb call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x127247f1u);
L_127247f1:;
  /* 127247f1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 127247f7 jmp 0x127248fb */
  goto L_127248fb;
L_127247fc:;
  /* 127247fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127247ff mov edx, dword ptr [ecx*4 + 0x1274fa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1274fa38)));
  /* 12724806 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12724809 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272480b je 0x1272484b */
  if (C.zf) goto L_1272484b;
  /* 1272480d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724810 cmp dword ptr [eax*4 + 0x1274fa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1274fa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724818 je 0x1272484b */
  if (C.zf) goto L_1272484b;
  /* 1272481a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272481c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12724822 push ecx */
  push32((uint32_t)(ECX));
  /* 12724823 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12724829 push edx */
  push32((uint32_t)(EDX));
  /* 1272482a call 0x127282e0 */
  push32(0x1272482fu); f_127282e0();
  /* 1272482f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724832 push eax */
  push32((uint32_t)(EAX));
  /* 12724833 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12724839 push eax */
  push32((uint32_t)(EAX));
  /* 1272483a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272483d mov edx, dword ptr [ecx*4 + 0x1274fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1274fa44)));
  /* 12724844 push edx */
  push32((uint32_t)(EDX));
  /* 12724845 call dword ptr [0x12754360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754360))), 0x1272484bu);
L_1272484b:;
  /* 1272484b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272484e mov ecx, dword ptr [eax*4 + 0x1274fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1274fa38)));
  /* 12724855 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12724858 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272485a je 0x12724869 */
  if (C.zf) goto L_12724869;
  /* 1272485c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12724862 push edx */
  push32((uint32_t)(EDX));
  /* 12724863 call dword ptr [0x12754368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754368))), 0x12724869u);
L_12724869:;
  /* 12724869 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272486c mov ecx, dword ptr [eax*4 + 0x1274fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1274fa38)));
  /* 12724873 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12724876 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12724878 je 0x127248e8 */
  if (C.zf) goto L_127248e8;
  /* 1272487a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272487e je 0x1272489d */
  if (C.zf) goto L_1272489d;
  /* 12724880 push 0xa */
  push32((uint32_t)(0xau));
  /* 12724882 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12724888 push edx */
  push32((uint32_t)(EDX));
  /* 12724889 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272488c push eax */
  push32((uint32_t)(EAX));
  /* 1272488d call 0x12727ff0 */
  push32(0x12724892u); f_12727ff0();
  /* 12724892 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724895 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1272489b jmp 0x127248a7 */
  goto L_127248a7;
L_1272489d:;
  /* 1272489d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_127248a7:;
  /* 127248a7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 127248ad push ecx */
  push32((uint32_t)(ECX));
  /* 127248ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127248b1 push edx */
  push32((uint32_t)(EDX));
  /* 127248b2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 127248b8 push eax */
  push32((uint32_t)(EAX));
  /* 127248b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127248bc push ecx */
  push32((uint32_t)(ECX));
  /* 127248bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127248c0 push edx */
  push32((uint32_t)(EDX));
  /* 127248c1 call 0x12724900 */
  push32(0x127248c6u); f_12724900();
  /* 127248c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127248c9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 127248cf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127248d3 jne 0x127248e0 */
  if (!C.zf) goto L_127248e0;
  /* 127248d5 push 0x1274fa34 */
  push32((uint32_t)(0x1274fa34u));
  /* 127248da call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x127248e0u);
L_127248e0:;
  /* 127248e0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 127248e6 jmp 0x127248fb */
  goto L_127248fb;
L_127248e8:;
  /* 127248e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127248ec jne 0x127248f9 */
  if (!C.zf) goto L_127248f9;
  /* 127248ee push 0x1274fa34 */
  push32((uint32_t)(0x1274fa34u));
  /* 127248f3 call dword ptr [0x12754364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754364))), 0x127248f9u);
L_127248f9:;
  /* 127248f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127248fb:;
  /* 127248fb pop edi */
  EDI = (pop32());
  /* 127248fc mov esp, ebp */
  ESP = (EBP);
  /* 127248fe pop ebp */
  EBP = (pop32());
  /* 127248ff ret  */
  ESPCHK(0x12724570u, _esp0);
  ESP += 4; return;
}

/* FUN_10004900 @ 0x12724900 (780 bytes, 197 insns) */
void f_12724900(void) {
  FTRACE(0x12724900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724900 push ebp */
  push32((uint32_t)(EBP));
  /* 12724901 mov ebp, esp */
  EBP = (ESP);
  /* 12724903 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12724908 call 0x12728650 */
  push32(0x1272490du); f_12728650();
L_1272490d:;
  /* 1272490d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724911 jne 0x12724938 */
  if (!C.zf) goto L_12724938;
  /* 12724913 push 0x1274c7bc */
  push32((uint32_t)(0x1274c7bcu));
  /* 12724918 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272491a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1272491f push 0x1274c7b0 */
  push32((uint32_t)(0x1274c7b0u));
  /* 12724924 push 2 */
  push32((uint32_t)(0x2u));
  /* 12724926 call 0x12724570 */
  push32(0x1272492bu); f_12724570();
  /* 1272492b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272492e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724931 jne 0x12724938 */
  if (!C.zf) goto L_12724938;
  /* 12724933 call 0x12724460 */
  push32(0x12724938u); f_12724460();
L_12724938:;
  /* 12724938 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272493a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272493c jne 0x1272490d */
  if (!C.zf) goto L_1272490d;
  /* 1272493e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12724943 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12724949 push ecx */
  push32((uint32_t)(ECX));
  /* 1272494a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272494c call dword ptr [0x12754378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754378))), 0x12724952u);
  /* 12724952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12724954 jne 0x1272496a */
  if (!C.zf) goto L_1272496a;
  /* 12724956 push 0x1274c798 */
  push32((uint32_t)(0x1274c798u));
  /* 1272495b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12724961 push edx */
  push32((uint32_t)(EDX));
  /* 12724962 call 0x12728460 */
  push32(0x12724967u); f_12728460();
  /* 12724967 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272496a:;
  /* 1272496a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12724970 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12724973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724976 push ecx */
  push32((uint32_t)(ECX));
  /* 12724977 call 0x127282e0 */
  push32(0x1272497cu); f_127282e0();
  /* 1272497c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272497f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724982 jbe 0x127249ad */
  if ((C.cf||C.zf)) goto L_127249ad;
  /* 12724984 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724987 push edx */
  push32((uint32_t)(EDX));
  /* 12724988 call 0x127282e0 */
  push32(0x1272498du); f_127282e0();
  /* 1272498d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724990 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724993 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12724997 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272499a push 3 */
  push32((uint32_t)(0x3u));
  /* 1272499c push 0x1274c794 */
  push32((uint32_t)(0x1274c794u));
  /* 127249a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127249a4 push eax */
  push32((uint32_t)(EAX));
  /* 127249a5 call 0x12728cd0 */
  push32(0x127249aau); f_12728cd0();
  /* 127249aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127249ad:;
  /* 127249ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127249b0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 127249b6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127249bd je 0x12724a08 */
  if (C.zf) goto L_12724a08;
  /* 127249bf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 127249c5 push edx */
  push32((uint32_t)(EDX));
  /* 127249c6 call 0x127282e0 */
  push32(0x127249cbu); f_127282e0();
  /* 127249cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127249ce cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127249d1 jbe 0x12724a08 */
  if ((C.cf||C.zf)) goto L_12724a08;
  /* 127249d3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 127249d9 push eax */
  push32((uint32_t)(EAX));
  /* 127249da call 0x127282e0 */
  push32(0x127249dfu); f_127282e0();
  /* 127249df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127249e2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 127249e8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 127249ec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 127249f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 127249f4 push 0x1274c794 */
  push32((uint32_t)(0x1274c794u));
  /* 127249f9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 127249ff push eax */
  push32((uint32_t)(EAX));
  /* 12724a00 call 0x12728cd0 */
  push32(0x12724a05u); f_12728cd0();
  /* 12724a05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12724a08:;
  /* 12724a08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724a0c jne 0x12724a1a */
  if (!C.zf) goto L_12724a1a;
  /* 12724a0e mov dword ptr [ebp - 0x1114], 0x1274c720 */
  w32((uint32_t)(EBP + -0x1114), (0x1274c720u));
  /* 12724a18 jmp 0x12724a24 */
  goto L_12724a24;
L_12724a1a:;
  /* 12724a1a mov dword ptr [ebp - 0x1114], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x1114), (0x1274c4c0u));
L_12724a24:;
  /* 12724a24 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12724a27 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12724a2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12724a2c je 0x12724a39 */
  if (C.zf) goto L_12724a39;
  /* 12724a2e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12724a31 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12724a37 jmp 0x12724a43 */
  goto L_12724a43;
L_12724a39:;
  /* 12724a39 mov dword ptr [ebp - 0x1118], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x1118), (0x1274c4c0u));
L_12724a43:;
  /* 12724a43 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12724a46 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12724a49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12724a4b je 0x12724a5f */
  if (C.zf) goto L_12724a5f;
  /* 12724a4d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724a51 jne 0x12724a5f */
  if (!C.zf) goto L_12724a5f;
  /* 12724a53 mov dword ptr [ebp - 0x111c], 0x1274c710 */
  w32((uint32_t)(EBP + -0x111c), (0x1274c710u));
  /* 12724a5d jmp 0x12724a69 */
  goto L_12724a69;
L_12724a5f:;
  /* 12724a5f mov dword ptr [ebp - 0x111c], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x111c), (0x1274c4c0u));
L_12724a69:;
  /* 12724a69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12724a6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12724a6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12724a71 je 0x12724a7f */
  if (C.zf) goto L_12724a7f;
  /* 12724a73 mov dword ptr [ebp - 0x1120], 0x1274c70c */
  w32((uint32_t)(EBP + -0x1120), (0x1274c70cu));
  /* 12724a7d jmp 0x12724a89 */
  goto L_12724a89;
L_12724a7f:;
  /* 12724a7f mov dword ptr [ebp - 0x1120], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x1120), (0x1274c4c0u));
L_12724a89:;
  /* 12724a89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724a8d je 0x12724a9a */
  if (C.zf) goto L_12724a9a;
  /* 12724a8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12724a92 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12724a98 jmp 0x12724aa4 */
  goto L_12724aa4;
L_12724a9a:;
  /* 12724a9a mov dword ptr [ebp - 0x1124], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x1124), (0x1274c4c0u));
L_12724aa4:;
  /* 12724aa4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724aa8 je 0x12724ab6 */
  if (C.zf) goto L_12724ab6;
  /* 12724aaa mov dword ptr [ebp - 0x1128], 0x1274c704 */
  w32((uint32_t)(EBP + -0x1128), (0x1274c704u));
  /* 12724ab4 jmp 0x12724ac0 */
  goto L_12724ac0;
L_12724ab6:;
  /* 12724ab6 mov dword ptr [ebp - 0x1128], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x1128), (0x1274c4c0u));
L_12724ac0:;
  /* 12724ac0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724ac4 je 0x12724ad1 */
  if (C.zf) goto L_12724ad1;
  /* 12724ac6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12724ac9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12724acf jmp 0x12724adb */
  goto L_12724adb;
L_12724ad1:;
  /* 12724ad1 mov dword ptr [ebp - 0x112c], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x112c), (0x1274c4c0u));
L_12724adb:;
  /* 12724adb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724adf je 0x12724aed */
  if (C.zf) goto L_12724aed;
  /* 12724ae1 mov dword ptr [ebp - 0x1130], 0x1274c6fc */
  w32((uint32_t)(EBP + -0x1130), (0x1274c6fcu));
  /* 12724aeb jmp 0x12724af7 */
  goto L_12724af7;
L_12724aed:;
  /* 12724aed mov dword ptr [ebp - 0x1130], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x1130), (0x1274c4c0u));
L_12724af7:;
  /* 12724af7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724afe je 0x12724b0e */
  if (C.zf) goto L_12724b0e;
  /* 12724b00 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12724b06 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12724b0c jmp 0x12724b18 */
  goto L_12724b18;
L_12724b0e:;
  /* 12724b0e mov dword ptr [ebp - 0x1134], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x1134), (0x1274c4c0u));
L_12724b18:;
  /* 12724b18 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724b1f je 0x12724b2d */
  if (C.zf) goto L_12724b2d;
  /* 12724b21 mov dword ptr [ebp - 0x1138], 0x1274c6f0 */
  w32((uint32_t)(EBP + -0x1138), (0x1274c6f0u));
  /* 12724b2b jmp 0x12724b37 */
  goto L_12724b37;
L_12724b2d:;
  /* 12724b2d mov dword ptr [ebp - 0x1138], 0x1274c4c0 */
  w32((uint32_t)(EBP + -0x1138), (0x1274c4c0u));
L_12724b37:;
  /* 12724b37 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12724b3d push edx */
  push32((uint32_t)(EDX));
  /* 12724b3e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12724b44 push eax */
  push32((uint32_t)(EAX));
  /* 12724b45 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12724b4b push ecx */
  push32((uint32_t)(ECX));
  /* 12724b4c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12724b52 push edx */
  push32((uint32_t)(EDX));
  /* 12724b53 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12724b59 push eax */
  push32((uint32_t)(EAX));
  /* 12724b5a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12724b60 push ecx */
  push32((uint32_t)(ECX));
  /* 12724b61 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12724b67 push edx */
  push32((uint32_t)(EDX));
  /* 12724b68 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12724b6e push eax */
  push32((uint32_t)(EAX));
  /* 12724b6f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12724b75 push ecx */
  push32((uint32_t)(ECX));
  /* 12724b76 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12724b7c push edx */
  push32((uint32_t)(EDX));
  /* 12724b7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724b80 push eax */
  push32((uint32_t)(EAX));
  /* 12724b81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724b84 mov edx, dword ptr [ecx*4 + 0x1274fa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1274fa50)));
  /* 12724b8b push edx */
  push32((uint32_t)(EDX));
  /* 12724b8c push 0x1274c69c */
  push32((uint32_t)(0x1274c69cu));
  /* 12724b91 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12724b96 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12724b9c push eax */
  push32((uint32_t)(EAX));
  /* 12724b9d call 0x12728360 */
  push32(0x12724ba2u); f_12728360();
  /* 12724ba2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12724ba7 jge 0x12724bbd */
  if ((C.sf==C.of)) goto L_12724bbd;
  /* 12724ba9 push 0x1274c600 */
  push32((uint32_t)(0x1274c600u));
  /* 12724bae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12724bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12724bb5 call 0x12728460 */
  push32(0x12724bbau); f_12728460();
  /* 12724bba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12724bbd:;
  /* 12724bbd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12724bc2 push 0x1274c678 */
  push32((uint32_t)(0x1274c678u));
  /* 12724bc7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12724bcd push edx */
  push32((uint32_t)(EDX));
  /* 12724bce call 0x12728c10 */
  push32(0x12724bd3u); f_12728c10();
  /* 12724bd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724bd6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12724bdc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724be3 jne 0x12724bf6 */
  if (!C.zf) goto L_12724bf6;
  /* 12724be5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12724be7 call 0x12728950 */
  push32(0x12724becu); f_12728950();
  /* 12724bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724bef push 3 */
  push32((uint32_t)(0x3u));
  /* 12724bf1 call 0x12724c70 */
  push32(0x12724bf6u); f_12724c70();
L_12724bf6:;
  /* 12724bf6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724bfd jne 0x12724c06 */
  if (!C.zf) goto L_12724c06;
  /* 12724bff mov eax, 1 */
  EAX = (0x1u);
  /* 12724c04 jmp 0x12724c08 */
  goto L_12724c08;
L_12724c06:;
  /* 12724c06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12724c08:;
  /* 12724c08 mov esp, ebp */
  ESP = (EBP);
  /* 12724c0a pop ebp */
  EBP = (pop32());
  /* 12724c0b ret  */
  ESPCHK(0x12724900u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x12724c10 (56 bytes, 15 insns) */
void f_12724c10(void) {
  FTRACE(0x12724c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12724c11 mov ebp, esp */
  EBP = (ESP);
  /* 12724c13 cmp dword ptr [0x127531bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127531bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724c1a je 0x12724c22 */
  if (C.zf) goto L_12724c22;
  /* 12724c1c call dword ptr [0x127531bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127531bc))), 0x12724c22u);
L_12724c22:;
  /* 12724c22 push 0x1274f418 */
  push32((uint32_t)(0x1274f418u));
  /* 12724c27 push 0x1274f208 */
  push32((uint32_t)(0x1274f208u));
  /* 12724c2c call 0x12724de0 */
  push32(0x12724c31u); f_12724de0();
  /* 12724c31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724c34 push 0x1274f104 */
  push32((uint32_t)(0x1274f104u));
  /* 12724c39 push 0x1274f000 */
  push32((uint32_t)(0x1274f000u));
  /* 12724c3e call 0x12724de0 */
  push32(0x12724c43u); f_12724de0();
  /* 12724c43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724c46 pop ebp */
  EBP = (pop32());
  /* 12724c47 ret  */
  ESPCHK(0x12724c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c50 @ 0x12724c50 (21 bytes, 10 insns) */
void f_12724c50(void) {
  FTRACE(0x12724c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12724c51 mov ebp, esp */
  EBP = (ESP);
  /* 12724c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12724c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12724c57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724c5a push eax */
  push32((uint32_t)(EAX));
  /* 12724c5b call 0x12724cd0 */
  push32(0x12724c60u); f_12724cd0();
  /* 12724c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724c63 pop ebp */
  EBP = (pop32());
  /* 12724c64 ret  */
  ESPCHK(0x12724c50u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12724c70 (21 bytes, 10 insns) */
void f_12724c70(void) {
  FTRACE(0x12724c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12724c71 mov ebp, esp */
  EBP = (ESP);
  /* 12724c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12724c75 push 1 */
  push32((uint32_t)(0x1u));
  /* 12724c77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724c7a push eax */
  push32((uint32_t)(EAX));
  /* 12724c7b call 0x12724cd0 */
  push32(0x12724c80u); f_12724cd0();
  /* 12724c80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724c83 pop ebp */
  EBP = (pop32());
  /* 12724c84 ret  */
  ESPCHK(0x12724c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c90 @ 0x12724c90 (19 bytes, 9 insns) */
void f_12724c90(void) {
  FTRACE(0x12724c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12724c91 mov ebp, esp */
  EBP = (ESP);
  /* 12724c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12724c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12724c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12724c99 call 0x12724cd0 */
  push32(0x12724c9eu); f_12724cd0();
  /* 12724c9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724ca1 pop ebp */
  EBP = (pop32());
  /* 12724ca2 ret  */
  ESPCHK(0x12724c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cb0 @ 0x12724cb0 (19 bytes, 9 insns) */
void f_12724cb0(void) {
  FTRACE(0x12724cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12724cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12724cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12724cb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12724cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12724cb9 call 0x12724cd0 */
  push32(0x12724cbeu); f_12724cd0();
  /* 12724cbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724cc1 pop ebp */
  EBP = (pop32());
  /* 12724cc2 ret  */
  ESPCHK(0x12724cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cd0 @ 0x12724cd0 (227 bytes, 61 insns) */
void f_12724cd0(void) {
  FTRACE(0x12724cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12724cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12724cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12724cd4 call 0x12724dc0 */
  push32(0x12724cd9u); f_12724dc0();
  /* 12724cd9 cmp dword ptr [0x127516b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127516b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724ce0 jne 0x12724cf3 */
  if (!C.zf) goto L_12724cf3;
  /* 12724ce2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724ce5 push eax */
  push32((uint32_t)(EAX));
  /* 12724ce6 call dword ptr [0x12754384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754384))), 0x12724cecu);
  /* 12724cec push eax */
  push32((uint32_t)(EAX));
  /* 12724ced call dword ptr [0x12754380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754380))), 0x12724cf3u);
L_12724cf3:;
  /* 12724cf3 mov dword ptr [0x127516b4], 1 */
  w32((uint32_t)(0x127516b4), (0x1u));
  /* 12724cfd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12724d00 mov byte ptr [0x127516b0], cl */
  w8((uint32_t)(0x127516b0), (CL));
  /* 12724d06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724d0a jne 0x12724d53 */
  if (!C.zf) goto L_12724d53;
  /* 12724d0c cmp dword ptr [0x127531b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127531b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724d13 je 0x12724d41 */
  if (C.zf) goto L_12724d41;
  /* 12724d15 mov edx, dword ptr [0x127531b4] */
  EDX = (r32((uint32_t)(0x127531b4)));
  /* 12724d1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12724d1e:;
  /* 12724d1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724d21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12724d24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12724d27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724d2a cmp ecx, dword ptr [0x127531b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127531b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724d30 jb 0x12724d41 */
  if (C.cf) goto L_12724d41;
  /* 12724d32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724d35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724d38 je 0x12724d3f */
  if (C.zf) goto L_12724d3f;
  /* 12724d3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724d3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12724d3fu);
L_12724d3f:;
  /* 12724d3f jmp 0x12724d1e */
  goto L_12724d1e;
L_12724d41:;
  /* 12724d41 push 0x1274f724 */
  push32((uint32_t)(0x1274f724u));
  /* 12724d46 push 0x1274f51c */
  push32((uint32_t)(0x1274f51cu));
  /* 12724d4b call 0x12724de0 */
  push32(0x12724d50u); f_12724de0();
  /* 12724d50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12724d53:;
  /* 12724d53 push 0x1274f92c */
  push32((uint32_t)(0x1274f92cu));
  /* 12724d58 push 0x1274f828 */
  push32((uint32_t)(0x1274f828u));
  /* 12724d5d call 0x12724de0 */
  push32(0x12724d62u); f_12724de0();
  /* 12724d62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724d65 cmp dword ptr [0x127516bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127516bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724d6c jne 0x12724d8e */
  if (!C.zf) goto L_12724d8e;
  /* 12724d6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12724d70 call 0x127269c0 */
  push32(0x12724d75u); f_127269c0();
  /* 12724d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724d78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12724d7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12724d7d je 0x12724d8e */
  if (C.zf) goto L_12724d8e;
  /* 12724d7f mov dword ptr [0x127516bc], 1 */
  w32((uint32_t)(0x127516bc), (0x1u));
  /* 12724d89 call 0x127272d0 */
  push32(0x12724d8eu); f_127272d0();
L_12724d8e:;
  /* 12724d8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724d92 je 0x12724d9b */
  if (C.zf) goto L_12724d9b;
  /* 12724d94 call 0x12724dd0 */
  push32(0x12724d99u); f_12724dd0();
  /* 12724d99 jmp 0x12724daf */
  goto L_12724daf;
L_12724d9b:;
  /* 12724d9b mov dword ptr [0x127516b8], 1 */
  w32((uint32_t)(0x127516b8), (0x1u));
  /* 12724da5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724da8 push ecx */
  push32((uint32_t)(ECX));
  /* 12724da9 call dword ptr [0x1275437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275437c))), 0x12724dafu);
L_12724daf:;
  /* 12724daf mov esp, ebp */
  ESP = (EBP);
  /* 12724db1 pop ebp */
  EBP = (pop32());
  /* 12724db2 ret  */
  ESPCHK(0x12724cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dc0 @ 0x12724dc0 (15 bytes, 7 insns) */
void f_12724dc0(void) {
  FTRACE(0x12724dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12724dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12724dc3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12724dc5 call 0x12728eb0 */
  push32(0x12724dcau); f_12728eb0();
  /* 12724dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724dcd pop ebp */
  EBP = (pop32());
  /* 12724dce ret  */
  ESPCHK(0x12724dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dd0 @ 0x12724dd0 (15 bytes, 7 insns) */
void f_12724dd0(void) {
  FTRACE(0x12724dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12724dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12724dd3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12724dd5 call 0x12728f50 */
  push32(0x12724ddau); f_12728f50();
  /* 12724dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724ddd pop ebp */
  EBP = (pop32());
  /* 12724dde ret  */
  ESPCHK(0x12724dd0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12724de0 (37 bytes, 16 insns) */
void f_12724de0(void) {
  FTRACE(0x12724de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12724de1 mov ebp, esp */
  EBP = (ESP);
L_12724de3:;
  /* 12724de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724de6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724de9 jae 0x12724e03 */
  if (!C.cf) goto L_12724e03;
  /* 12724deb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724dee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724df1 je 0x12724df8 */
  if (C.zf) goto L_12724df8;
  /* 12724df3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724df6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12724df8u);
L_12724df8:;
  /* 12724df8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724dfb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12724dfe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12724e01 jmp 0x12724de3 */
  goto L_12724de3;
L_12724e03:;
  /* 12724e03 pop ebp */
  EBP = (pop32());
  /* 12724e04 ret  */
  ESPCHK(0x12724de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e10 @ 0x12724e10 (130 bytes, 42 insns) */
void f_12724e10(void) {
  FTRACE(0x12724e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12724e11 mov ebp, esp */
  EBP = (ESP);
  /* 12724e13 push ecx */
  push32((uint32_t)(ECX));
  /* 12724e14 call 0x12728dd0 */
  push32(0x12724e19u); f_12728dd0();
  /* 12724e19 call dword ptr [0x127542ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127542ac))), 0x12724e1fu);
  /* 12724e1f mov dword ptr [0x1274fa5c], eax */
  w32((uint32_t)(0x1274fa5c), (EAX));
  /* 12724e24 cmp dword ptr [0x1274fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724e2b jne 0x12724e31 */
  if (!C.zf) goto L_12724e31;
  /* 12724e2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12724e2f jmp 0x12724e8e */
  goto L_12724e8e;
L_12724e31:;
  /* 12724e31 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12724e33 push 0x1274c7d4 */
  push32((uint32_t)(0x1274c7d4u));
  /* 12724e38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12724e3a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12724e3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12724e3e call 0x127258c0 */
  push32(0x12724e43u); f_127258c0();
  /* 12724e43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724e46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12724e49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724e4d je 0x12724e64 */
  if (C.zf) goto L_12724e64;
  /* 12724e4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724e52 push eax */
  push32((uint32_t)(EAX));
  /* 12724e53 mov ecx, dword ptr [0x1274fa5c] */
  ECX = (r32((uint32_t)(0x1274fa5c)));
  /* 12724e59 push ecx */
  push32((uint32_t)(ECX));
  /* 12724e5a call dword ptr [0x1275438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275438c))), 0x12724e60u);
  /* 12724e60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12724e62 jne 0x12724e68 */
  if (!C.zf) goto L_12724e68;
L_12724e64:;
  /* 12724e64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12724e66 jmp 0x12724e8e */
  goto L_12724e8e;
L_12724e68:;
  /* 12724e68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724e6b push edx */
  push32((uint32_t)(EDX));
  /* 12724e6c call 0x12724ed0 */
  push32(0x12724e71u); f_12724ed0();
  /* 12724e71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724e74 call dword ptr [0x12754388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754388))), 0x12724e7au);
  /* 12724e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724e7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12724e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724e82 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12724e89 mov eax, 1 */
  EAX = (0x1u);
L_12724e8e:;
  /* 12724e8e mov esp, ebp */
  ESP = (EBP);
  /* 12724e90 pop ebp */
  EBP = (pop32());
  /* 12724e91 ret  */
  ESPCHK(0x12724e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ea0 @ 0x12724ea0 (41 bytes, 11 insns) */
void f_12724ea0(void) {
  FTRACE(0x12724ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12724ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12724ea3 call 0x12728e10 */
  push32(0x12724ea8u); f_12728e10();
  /* 12724ea8 cmp dword ptr [0x1274fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724eaf je 0x12724ec7 */
  if (C.zf) goto L_12724ec7;
  /* 12724eb1 mov eax, dword ptr [0x1274fa5c] */
  EAX = (r32((uint32_t)(0x1274fa5c)));
  /* 12724eb6 push eax */
  push32((uint32_t)(EAX));
  /* 12724eb7 call dword ptr [0x12754390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754390))), 0x12724ebdu);
  /* 12724ebd mov dword ptr [0x1274fa5c], 0xffffffff */
  w32((uint32_t)(0x1274fa5c), (0xffffffffu));
L_12724ec7:;
  /* 12724ec7 pop ebp */
  EBP = (pop32());
  /* 12724ec8 ret  */
  ESPCHK(0x12724ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ed0 @ 0x12724ed0 (25 bytes, 8 insns) */
void f_12724ed0(void) {
  FTRACE(0x12724ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12724ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12724ed3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724ed6 mov dword ptr [eax + 0x50], 0x1274fc00 */
  w32((uint32_t)(EAX + 0x50), (0x1274fc00u));
  /* 12724edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724ee0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12724ee7 pop ebp */
  EBP = (pop32());
  /* 12724ee8 ret  */
  ESPCHK(0x12724ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef0 @ 0x12724ef0 (152 bytes, 48 insns) */
void f_12724ef0(void) {
  FTRACE(0x12724ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12724ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12724ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12724ef6 call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x12724efcu);
  /* 12724efc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12724eff mov eax, dword ptr [0x1274fa5c] */
  EAX = (r32((uint32_t)(0x1274fa5c)));
  /* 12724f04 push eax */
  push32((uint32_t)(EAX));
  /* 12724f05 call dword ptr [0x12754398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754398))), 0x12724f0bu);
  /* 12724f0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12724f0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724f12 jne 0x12724f77 */
  if (!C.zf) goto L_12724f77;
  /* 12724f14 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12724f19 push 0x1274c7d4 */
  push32((uint32_t)(0x1274c7d4u));
  /* 12724f1e push 2 */
  push32((uint32_t)(0x2u));
  /* 12724f20 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12724f22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12724f24 call 0x127258c0 */
  push32(0x12724f29u); f_127258c0();
  /* 12724f29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724f2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12724f2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724f33 je 0x12724f6d */
  if (C.zf) goto L_12724f6d;
  /* 12724f35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724f38 push ecx */
  push32((uint32_t)(ECX));
  /* 12724f39 mov edx, dword ptr [0x1274fa5c] */
  EDX = (r32((uint32_t)(0x1274fa5c)));
  /* 12724f3f push edx */
  push32((uint32_t)(EDX));
  /* 12724f40 call dword ptr [0x1275438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275438c))), 0x12724f46u);
  /* 12724f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12724f48 je 0x12724f6d */
  if (C.zf) goto L_12724f6d;
  /* 12724f4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724f4d push eax */
  push32((uint32_t)(EAX));
  /* 12724f4e call 0x12724ed0 */
  push32(0x12724f53u); f_12724ed0();
  /* 12724f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12724f56 call dword ptr [0x12754388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754388))), 0x12724f5cu);
  /* 12724f5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724f5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12724f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724f64 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12724f6b jmp 0x12724f77 */
  goto L_12724f77;
L_12724f6d:;
  /* 12724f6d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12724f6f call 0x12724420 */
  push32(0x12724f74u); f_12724420();
  /* 12724f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12724f77:;
  /* 12724f77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12724f7a push eax */
  push32((uint32_t)(EAX));
  /* 12724f7b call dword ptr [0x12754394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754394))), 0x12724f81u);
  /* 12724f81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12724f84 mov esp, ebp */
  ESP = (EBP);
  /* 12724f86 pop ebp */
  EBP = (pop32());
  /* 12724f87 ret  */
  ESPCHK(0x12724ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f90 @ 0x12724f90 (263 bytes, 86 insns) */
void f_12724f90(void) {
  FTRACE(0x12724f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12724f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12724f91 mov ebp, esp */
  EBP = (ESP);
  /* 12724f93 cmp dword ptr [0x1274fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724f9a je 0x12725095 */
  if (C.zf) goto L_12725095;
  /* 12724fa0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724fa4 jne 0x12724fb5 */
  if (!C.zf) goto L_12724fb5;
  /* 12724fa6 mov eax, dword ptr [0x1274fa5c] */
  EAX = (r32((uint32_t)(0x1274fa5c)));
  /* 12724fab push eax */
  push32((uint32_t)(EAX));
  /* 12724fac call dword ptr [0x12754398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754398))), 0x12724fb2u);
  /* 12724fb2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12724fb5:;
  /* 12724fb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724fb9 je 0x12725086 */
  if (C.zf) goto L_12725086;
  /* 12724fbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724fc2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724fc6 je 0x12724fd9 */
  if (C.zf) goto L_12724fd9;
  /* 12724fc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12724fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724fcd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12724fd0 push eax */
  push32((uint32_t)(EAX));
  /* 12724fd1 call 0x12725f40 */
  push32(0x12724fd6u); f_12725f40();
  /* 12724fd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12724fd9:;
  /* 12724fd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724fdc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724fe0 je 0x12724ff3 */
  if (C.zf) goto L_12724ff3;
  /* 12724fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12724fe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724fe7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12724fea push eax */
  push32((uint32_t)(EAX));
  /* 12724feb call 0x12725f40 */
  push32(0x12724ff0u); f_12725f40();
  /* 12724ff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12724ff3:;
  /* 12724ff3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12724ff6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12724ffa je 0x1272500d */
  if (C.zf) goto L_1272500d;
  /* 12724ffc push 2 */
  push32((uint32_t)(0x2u));
  /* 12724ffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725001 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12725004 push eax */
  push32((uint32_t)(EAX));
  /* 12725005 call 0x12725f40 */
  push32(0x1272500au); f_12725f40();
  /* 1272500a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272500d:;
  /* 1272500d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725010 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725014 je 0x12725027 */
  if (C.zf) goto L_12725027;
  /* 12725016 push 2 */
  push32((uint32_t)(0x2u));
  /* 12725018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272501b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1272501e push eax */
  push32((uint32_t)(EAX));
  /* 1272501f call 0x12725f40 */
  push32(0x12725024u); f_12725f40();
  /* 12725024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12725027:;
  /* 12725027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272502a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272502e je 0x12725041 */
  if (C.zf) goto L_12725041;
  /* 12725030 push 2 */
  push32((uint32_t)(0x2u));
  /* 12725032 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725035 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12725038 push eax */
  push32((uint32_t)(EAX));
  /* 12725039 call 0x12725f40 */
  push32(0x1272503eu); f_12725f40();
  /* 1272503e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12725041:;
  /* 12725041 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725044 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725048 je 0x1272505b */
  if (C.zf) goto L_1272505b;
  /* 1272504a push 2 */
  push32((uint32_t)(0x2u));
  /* 1272504c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272504f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12725052 push eax */
  push32((uint32_t)(EAX));
  /* 12725053 call 0x12725f40 */
  push32(0x12725058u); f_12725f40();
  /* 12725058 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272505b:;
  /* 1272505b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272505e cmp dword ptr [ecx + 0x50], 0x1274fc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1274fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725065 je 0x12725078 */
  if (C.zf) goto L_12725078;
  /* 12725067 push 2 */
  push32((uint32_t)(0x2u));
  /* 12725069 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272506c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1272506f push eax */
  push32((uint32_t)(EAX));
  /* 12725070 call 0x12725f40 */
  push32(0x12725075u); f_12725f40();
  /* 12725075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12725078:;
  /* 12725078 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272507a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272507d push ecx */
  push32((uint32_t)(ECX));
  /* 1272507e call 0x12725f40 */
  push32(0x12725083u); f_12725f40();
  /* 12725083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12725086:;
  /* 12725086 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725088 mov edx, dword ptr [0x1274fa5c] */
  EDX = (r32((uint32_t)(0x1274fa5c)));
  /* 1272508e push edx */
  push32((uint32_t)(EDX));
  /* 1272508f call dword ptr [0x1275438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275438c))), 0x12725095u);
L_12725095:;
  /* 12725095 pop ebp */
  EBP = (pop32());
  /* 12725096 ret  */
  ESPCHK(0x12724f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100050a0 @ 0x127250a0 (11 bytes, 5 insns) */
void f_127250a0(void) {
  FTRACE(0x127250a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127250a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127250a1 mov ebp, esp */
  EBP = (ESP);
  /* 127250a3 call dword ptr [0x12754388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754388))), 0x127250a9u);
  /* 127250a9 pop ebp */
  EBP = (pop32());
  /* 127250aa ret  */
  ESPCHK(0x127250a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050b0 @ 0x127250b0 (11 bytes, 5 insns) */
void f_127250b0(void) {
  FTRACE(0x127250b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127250b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127250b1 mov ebp, esp */
  EBP = (ESP);
  /* 127250b3 call dword ptr [0x127543a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543a0))), 0x127250b9u);
  /* 127250b9 pop ebp */
  EBP = (pop32());
  /* 127250ba ret  */
  ESPCHK(0x127250b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050c0 @ 0x127250c0 (804 bytes, 236 insns) */
void f_127250c0(void) {
  FTRACE(0x127250c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127250c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127250c1 mov ebp, esp */
  EBP = (ESP);
  /* 127250c3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127250c6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 127250cb push 0x1274c7e0 */
  push32((uint32_t)(0x1274c7e0u));
  /* 127250d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127250d2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 127250d7 call 0x127254b0 */
  push32(0x127250dcu); f_127254b0();
  /* 127250dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127250df mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 127250e2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127250e6 jne 0x127250f2 */
  if (!C.zf) goto L_127250f2;
  /* 127250e8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 127250ea call 0x12724420 */
  push32(0x127250efu); f_12724420();
  /* 127250ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127250f2:;
  /* 127250f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127250f5 mov dword ptr [0x12753060], eax */
  w32((uint32_t)(0x12753060), (EAX));
  /* 127250fa mov dword ptr [0x1275319c], 0x20 */
  w32((uint32_t)(0x1275319c), (0x20u));
  /* 12725104 jmp 0x1272510f */
  goto L_1272510f;
L_12725106:;
  /* 12725106 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12725109 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272510c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1272510f:;
  /* 1272510f mov edx, dword ptr [0x12753060] */
  EDX = (r32((uint32_t)(0x12753060)));
  /* 12725115 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272511b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272511e jae 0x12725143 */
  if (!C.cf) goto L_12725143;
  /* 12725120 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12725123 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12725127 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1272512a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12725130 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12725133 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12725137 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1272513a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12725141 jmp 0x12725106 */
  goto L_12725106;
L_12725143:;
  /* 12725143 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12725146 push ecx */
  push32((uint32_t)(ECX));
  /* 12725147 call dword ptr [0x127543ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543ac))), 0x1272514du);
  /* 1272514d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12725150 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12725156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12725158 je 0x127252e5 */
  if (C.zf) goto L_127252e5;
  /* 1272515e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725162 je 0x127252e5 */
  if (C.zf) goto L_127252e5;
  /* 12725168 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272516b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272516d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12725170 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12725173 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725176 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12725179 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272517c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272517f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12725182 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725189 jge 0x12725193 */
  if ((C.sf==C.of)) goto L_12725193;
  /* 1272518b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1272518e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12725191 jmp 0x1272519a */
  goto L_1272519a;
L_12725193:;
  /* 12725193 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1272519a:;
  /* 1272519a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1272519d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 127251a0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 127251a7 jmp 0x127251b2 */
  goto L_127251b2;
L_127251a9:;
  /* 127251a9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 127251ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127251af mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_127251b2:;
  /* 127251b2 mov ecx, dword ptr [0x1275319c] */
  ECX = (r32((uint32_t)(0x1275319c)));
  /* 127251b8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127251bb jge 0x12725252 */
  if ((C.sf==C.of)) goto L_12725252;
  /* 127251c1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 127251c6 push 0x1274c7e0 */
  push32((uint32_t)(0x1274c7e0u));
  /* 127251cb push 2 */
  push32((uint32_t)(0x2u));
  /* 127251cd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 127251d2 call 0x127254b0 */
  push32(0x127251d7u); f_127254b0();
  /* 127251d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127251da mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 127251dd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127251e1 jne 0x127251ee */
  if (!C.zf) goto L_127251ee;
  /* 127251e3 mov edx, dword ptr [0x1275319c] */
  EDX = (r32((uint32_t)(0x1275319c)));
  /* 127251e9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 127251ec jmp 0x12725252 */
  goto L_12725252;
L_127251ee:;
  /* 127251ee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 127251f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 127251f4 mov dword ptr [eax*4 + 0x12753060], ecx */
  w32((uint32_t)(EAX*4 + 0x12753060), (ECX));
  /* 127251fb mov edx, dword ptr [0x1275319c] */
  EDX = (r32((uint32_t)(0x1275319c)));
  /* 12725201 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725204 mov dword ptr [0x1275319c], edx */
  w32((uint32_t)(0x1275319c), (EDX));
  /* 1272520a jmp 0x12725215 */
  goto L_12725215;
L_1272520c:;
  /* 1272520c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1272520f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725212 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12725215:;
  /* 12725215 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12725218 mov edx, dword ptr [ecx*4 + 0x12753060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12753060)));
  /* 1272521f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725225 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725228 jae 0x1272524d */
  if (!C.cf) goto L_1272524d;
  /* 1272522a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1272522d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12725231 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12725234 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1272523a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1272523d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12725241 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12725244 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1272524b jmp 0x1272520c */
  goto L_1272520c;
L_1272524d:;
  /* 1272524d jmp 0x127251a9 */
  goto L_127251a9;
L_12725252:;
  /* 12725252 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12725259 jmp 0x12725276 */
  goto L_12725276;
L_1272525b:;
  /* 1272525b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1272525e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725261 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12725264 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725267 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272526a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272526d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12725270 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725273 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12725276:;
  /* 12725276 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12725279 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272527c jge 0x127252e5 */
  if ((C.sf==C.of)) goto L_127252e5;
  /* 1272527e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12725281 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725284 je 0x127252e0 */
  if (C.zf) goto L_127252e0;
  /* 12725286 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725289 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272528c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1272528f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12725291 je 0x127252e0 */
  if (C.zf) goto L_127252e0;
  /* 12725293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725296 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12725299 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1272529c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272529e jne 0x127252b0 */
  if (!C.zf) goto L_127252b0;
  /* 127252a0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 127252a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127252a5 push edx */
  push32((uint32_t)(EDX));
  /* 127252a6 call dword ptr [0x127543a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543a8))), 0x127252acu);
  /* 127252ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127252ae je 0x127252e0 */
  if (C.zf) goto L_127252e0;
L_127252b0:;
  /* 127252b0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 127252b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127252b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 127252b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127252bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127252bf mov edx, dword ptr [eax*4 + 0x12753060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 127252c6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127252c8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 127252cb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127252ce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 127252d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127252d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127252d5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127252d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127252db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127252dd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_127252e0:;
  /* 127252e0 jmp 0x1272525b */
  goto L_1272525b;
L_127252e5:;
  /* 127252e5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 127252ec jmp 0x127252f7 */
  goto L_127252f7;
L_127252ee:;
  /* 127252ee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 127252f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127252f4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_127252f7:;
  /* 127252f7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127252fb jge 0x127253d4 */
  if ((C.sf==C.of)) goto L_127253d4;
  /* 12725301 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12725304 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12725307 mov edx, dword ptr [0x12753060] */
  EDX = (r32((uint32_t)(0x12753060)));
  /* 1272530d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272530f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12725312 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12725315 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725318 jne 0x127253c0 */
  if (!C.zf) goto L_127253c0;
  /* 1272531e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12725321 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12725325 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725329 jne 0x12725334 */
  if (!C.zf) goto L_12725334;
  /* 1272532b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12725332 jmp 0x12725344 */
  goto L_12725344;
L_12725334:;
  /* 12725334 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12725337 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272533a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272533c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272533e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725341 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12725344:;
  /* 12725344 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12725347 push eax */
  push32((uint32_t)(EAX));
  /* 12725348 call dword ptr [0x1275435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275435c))), 0x1272534eu);
  /* 1272534e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12725351 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725355 je 0x127253af */
  if (C.zf) goto L_127253af;
  /* 12725357 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1272535a push ecx */
  push32((uint32_t)(ECX));
  /* 1272535b call dword ptr [0x127543a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543a8))), 0x12725361u);
  /* 12725361 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12725364 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725368 je 0x127253af */
  if (C.zf) goto L_127253af;
  /* 1272536a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1272536d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12725370 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12725372 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12725375 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272537b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272537e jne 0x12725390 */
  if (!C.zf) goto L_12725390;
  /* 12725380 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12725383 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12725386 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12725388 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1272538b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1272538e jmp 0x127253ad */
  goto L_127253ad;
L_12725390:;
  /* 12725390 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12725393 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12725399 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272539c jne 0x127253ad */
  if (!C.zf) goto L_127253ad;
  /* 1272539e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127253a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127253a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 127253a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127253aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_127253ad:;
  /* 127253ad jmp 0x127253be */
  goto L_127253be;
L_127253af:;
  /* 127253af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127253b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127253b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 127253b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127253bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_127253be:;
  /* 127253be jmp 0x127253cf */
  goto L_127253cf;
L_127253c0:;
  /* 127253c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 127253c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127253c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 127253c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 127253cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_127253cf:;
  /* 127253cf jmp 0x127252ee */
  goto L_127252ee;
L_127253d4:;
  /* 127253d4 mov eax, dword ptr [0x1275319c] */
  EAX = (r32((uint32_t)(0x1275319c)));
  /* 127253d9 push eax */
  push32((uint32_t)(EAX));
  /* 127253da call dword ptr [0x127543a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543a4))), 0x127253e0u);
  /* 127253e0 mov esp, ebp */
  ESP = (EBP);
  /* 127253e2 pop ebp */
  EBP = (pop32());
  /* 127253e3 ret  */
  ESPCHK(0x127250c0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x127253f0 (155 bytes, 45 insns) */
void f_127253f0(void) {
  FTRACE(0x127253f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127253f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127253f1 mov ebp, esp */
  EBP = (ESP);
  /* 127253f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127253f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127253fd jmp 0x12725408 */
  goto L_12725408;
L_127253ff:;
  /* 127253ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725402 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725405 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12725408:;
  /* 12725408 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272540c jge 0x12725487 */
  if ((C.sf==C.of)) goto L_12725487;
  /* 1272540e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725411 cmp dword ptr [ecx*4 + 0x12753060], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12753060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725419 je 0x12725482 */
  if (C.zf) goto L_12725482;
  /* 1272541b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272541e mov eax, dword ptr [edx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12753060)));
  /* 12725425 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12725428 jmp 0x12725433 */
  goto L_12725433;
L_1272542a:;
  /* 1272542a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272542d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725430 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12725433:;
  /* 12725433 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725436 mov eax, dword ptr [edx*4 + 0x12753060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12753060)));
  /* 1272543d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725442 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725445 jae 0x1272545f */
  if (!C.cf) goto L_1272545f;
  /* 12725447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272544a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272544e je 0x1272545d */
  if (C.zf) goto L_1272545d;
  /* 12725450 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725453 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725456 push edx */
  push32((uint32_t)(EDX));
  /* 12725457 call dword ptr [0x127543b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b0))), 0x1272545du);
L_1272545d:;
  /* 1272545d jmp 0x1272542a */
  goto L_1272542a;
L_1272545f:;
  /* 1272545f push 2 */
  push32((uint32_t)(0x2u));
  /* 12725461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725464 mov ecx, dword ptr [eax*4 + 0x12753060] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12753060)));
  /* 1272546b push ecx */
  push32((uint32_t)(ECX));
  /* 1272546c call 0x12725f40 */
  push32(0x12725471u); f_12725f40();
  /* 12725471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725474 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725477 mov dword ptr [edx*4 + 0x12753060], 0 */
  w32((uint32_t)(EDX*4 + 0x12753060), (0x0u));
L_12725482:;
  /* 12725482 jmp 0x127253ff */
  goto L_127253ff;
L_12725487:;
  /* 12725487 mov esp, ebp */
  ESP = (EBP);
  /* 12725489 pop ebp */
  EBP = (pop32());
  /* 1272548a ret  */
  ESPCHK(0x127253f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005490 @ 0x12725490 (29 bytes, 13 insns) */
void f_12725490(void) {
  FTRACE(0x12725490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725490 push ebp */
  push32((uint32_t)(EBP));
  /* 12725491 mov ebp, esp */
  EBP = (ESP);
  /* 12725493 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725495 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725497 push 1 */
  push32((uint32_t)(0x1u));
  /* 12725499 mov eax, dword ptr [0x12751860] */
  EAX = (r32((uint32_t)(0x12751860)));
  /* 1272549e push eax */
  push32((uint32_t)(EAX));
  /* 1272549f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127254a2 push ecx */
  push32((uint32_t)(ECX));
  /* 127254a3 call 0x12725500 */
  push32(0x127254a8u); f_12725500();
  /* 127254a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127254ab pop ebp */
  EBP = (pop32());
  /* 127254ac ret  */
  ESPCHK(0x12725490u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b0 @ 0x127254b0 (35 bytes, 16 insns) */
void f_127254b0(void) {
  FTRACE(0x127254b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127254b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127254b1 mov ebp, esp */
  EBP = (ESP);
  /* 127254b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127254b6 push eax */
  push32((uint32_t)(EAX));
  /* 127254b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127254ba push ecx */
  push32((uint32_t)(ECX));
  /* 127254bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127254be push edx */
  push32((uint32_t)(EDX));
  /* 127254bf mov eax, dword ptr [0x12751860] */
  EAX = (r32((uint32_t)(0x12751860)));
  /* 127254c4 push eax */
  push32((uint32_t)(EAX));
  /* 127254c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127254c8 push ecx */
  push32((uint32_t)(ECX));
  /* 127254c9 call 0x12725500 */
  push32(0x127254ceu); f_12725500();
  /* 127254ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127254d1 pop ebp */
  EBP = (pop32());
  /* 127254d2 ret  */
  ESPCHK(0x127254b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x127254e0 (27 bytes, 13 insns) */
void f_127254e0(void) {
  FTRACE(0x127254e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127254e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127254e1 mov ebp, esp */
  EBP = (ESP);
  /* 127254e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127254e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127254e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127254e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127254ec push eax */
  push32((uint32_t)(EAX));
  /* 127254ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127254f0 push ecx */
  push32((uint32_t)(ECX));
  /* 127254f1 call 0x12725500 */
  push32(0x127254f6u); f_12725500();
  /* 127254f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127254f9 pop ebp */
  EBP = (pop32());
  /* 127254fa ret  */
  ESPCHK(0x127254e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005500 @ 0x12725500 (94 bytes, 38 insns) */
void f_12725500(void) {
  FTRACE(0x12725500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725500 push ebp */
  push32((uint32_t)(EBP));
  /* 12725501 mov ebp, esp */
  EBP = (ESP);
  /* 12725503 push ecx */
  push32((uint32_t)(ECX));
L_12725504:;
  /* 12725504 push 9 */
  push32((uint32_t)(0x9u));
  /* 12725506 call 0x12728eb0 */
  push32(0x1272550bu); f_12728eb0();
  /* 1272550b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272550e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12725511 push eax */
  push32((uint32_t)(EAX));
  /* 12725512 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12725515 push ecx */
  push32((uint32_t)(ECX));
  /* 12725516 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12725519 push edx */
  push32((uint32_t)(EDX));
  /* 1272551a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272551d push eax */
  push32((uint32_t)(EAX));
  /* 1272551e call 0x12725580 */
  push32(0x12725523u); f_12725580();
  /* 12725523 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725526 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12725529 push 9 */
  push32((uint32_t)(0x9u));
  /* 1272552b call 0x12728f50 */
  push32(0x12725530u); f_12728f50();
  /* 12725530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725533 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725537 jne 0x1272553f */
  if (!C.zf) goto L_1272553f;
  /* 12725539 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272553d jne 0x12725544 */
  if (!C.zf) goto L_12725544;
L_1272553f:;
  /* 1272553f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725542 jmp 0x1272555a */
  goto L_1272555a;
L_12725544:;
  /* 12725544 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725547 push ecx */
  push32((uint32_t)(ECX));
  /* 12725548 call 0x127291f0 */
  push32(0x1272554du); f_127291f0();
  /* 1272554d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725552 jne 0x12725558 */
  if (!C.zf) goto L_12725558;
  /* 12725554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725556 jmp 0x1272555a */
  goto L_1272555a;
L_12725558:;
  /* 12725558 jmp 0x12725504 */
  goto L_12725504;
L_1272555a:;
  /* 1272555a mov esp, ebp */
  ESP = (EBP);
  /* 1272555c pop ebp */
  EBP = (pop32());
  /* 1272555d ret  */
  ESPCHK(0x12725500u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x12725560 (23 bytes, 11 insns) */
void f_12725560(void) {
  FTRACE(0x12725560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725560 push ebp */
  push32((uint32_t)(EBP));
  /* 12725561 mov ebp, esp */
  EBP = (ESP);
  /* 12725563 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725565 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725567 push 1 */
  push32((uint32_t)(0x1u));
  /* 12725569 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272556c push eax */
  push32((uint32_t)(EAX));
  /* 1272556d call 0x12725580 */
  push32(0x12725572u); f_12725580();
  /* 12725572 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725575 pop ebp */
  EBP = (pop32());
  /* 12725576 ret  */
  ESPCHK(0x12725560u, _esp0);
  ESP += 4; return;
}

/* FUN_10005580 @ 0x12725580 (787 bytes, 254 insns) */
void f_12725580(void) {
  FTRACE(0x12725580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725580 push ebp */
  push32((uint32_t)(EBP));
  /* 12725581 mov ebp, esp */
  EBP = (ESP);
  /* 12725583 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12725586 push ebx */
  push32((uint32_t)(EBX));
  /* 12725587 push esi */
  push32((uint32_t)(ESI));
  /* 12725588 push edi */
  push32((uint32_t)(EDI));
  /* 12725589 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12725590 mov eax, dword ptr [0x1274fa84] */
  EAX = (r32((uint32_t)(0x1274fa84)));
  /* 12725595 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12725598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272559a je 0x127255cc */
  if (C.zf) goto L_127255cc;
L_1272559c:;
  /* 1272559c call 0x12726650 */
  push32(0x127255a1u); f_12726650();
  /* 127255a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127255a3 jne 0x127255c6 */
  if (!C.zf) goto L_127255c6;
  /* 127255a5 push 0x1274c8d4 */
  push32((uint32_t)(0x1274c8d4u));
  /* 127255aa push 0 */
  push32((uint32_t)(0x0u));
  /* 127255ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 127255b1 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 127255b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127255b8 call 0x12724570 */
  push32(0x127255bdu); f_12724570();
  /* 127255bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127255c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127255c3 jne 0x127255c6 */
  if (!C.zf) goto L_127255c6;
  /* 127255c5 int3  */
  x86_unimpl("int3 @ 0x127255c5");
L_127255c6:;
  /* 127255c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127255c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127255ca jne 0x1272559c */
  if (!C.zf) goto L_1272559c;
L_127255cc:;
  /* 127255cc mov edx, dword ptr [0x1274fa88] */
  EDX = (r32((uint32_t)(0x1274fa88)));
  /* 127255d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127255d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127255d8 cmp eax, dword ptr [0x1274fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1274fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127255de jne 0x127255e1 */
  if (!C.zf) goto L_127255e1;
  /* 127255e0 int3  */
  x86_unimpl("int3 @ 0x127255e0");
L_127255e1:;
  /* 127255e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127255e4 push ecx */
  push32((uint32_t)(ECX));
  /* 127255e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127255e8 push edx */
  push32((uint32_t)(EDX));
  /* 127255e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127255ec push eax */
  push32((uint32_t)(EAX));
  /* 127255ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127255f0 push ecx */
  push32((uint32_t)(ECX));
  /* 127255f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127255f4 push edx */
  push32((uint32_t)(EDX));
  /* 127255f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127255f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127255f9 call dword ptr [0x1274fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1274fc90))), 0x127255ffu);
  /* 127255ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725604 jne 0x12725664 */
  if (!C.zf) goto L_12725664;
  /* 12725606 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272560a je 0x12725637 */
  if (C.zf) goto L_12725637;
L_1272560c:;
  /* 1272560c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272560f push eax */
  push32((uint32_t)(EAX));
  /* 12725610 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12725613 push ecx */
  push32((uint32_t)(ECX));
  /* 12725614 push 0x1274c890 */
  push32((uint32_t)(0x1274c890u));
  /* 12725619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272561b push 0 */
  push32((uint32_t)(0x0u));
  /* 1272561d push 0 */
  push32((uint32_t)(0x0u));
  /* 1272561f push 0 */
  push32((uint32_t)(0x0u));
  /* 12725621 call 0x12724570 */
  push32(0x12725626u); f_12724570();
  /* 12725626 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725629 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272562c jne 0x1272562f */
  if (!C.zf) goto L_1272562f;
  /* 1272562e int3  */
  x86_unimpl("int3 @ 0x1272562e");
L_1272562f:;
  /* 1272562f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12725631 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12725633 jne 0x1272560c */
  if (!C.zf) goto L_1272560c;
  /* 12725635 jmp 0x1272565d */
  goto L_1272565d;
L_12725637:;
  /* 12725637 push 0x1274c86c */
  push32((uint32_t)(0x1274c86cu));
  /* 1272563c push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 12725641 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725643 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725645 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725647 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725649 call 0x12724570 */
  push32(0x1272564eu); f_12724570();
  /* 1272564e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725651 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725654 jne 0x12725657 */
  if (!C.zf) goto L_12725657;
  /* 12725656 int3  */
  x86_unimpl("int3 @ 0x12725656");
L_12725657:;
  /* 12725657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272565b jne 0x12725637 */
  if (!C.zf) goto L_12725637;
L_1272565d:;
  /* 1272565d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272565f jmp 0x1272588c */
  goto L_1272588c;
L_12725664:;
  /* 12725664 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725667 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272566d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725670 je 0x12725686 */
  if (C.zf) goto L_12725686;
  /* 12725672 mov edx, dword ptr [0x1274fa84] */
  EDX = (r32((uint32_t)(0x1274fa84)));
  /* 12725678 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1272567b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272567d jne 0x12725686 */
  if (!C.zf) goto L_12725686;
  /* 1272567f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12725686:;
  /* 12725686 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272568a ja 0x12725697 */
  if ((!C.cf&&!C.zf)) goto L_12725697;
  /* 1272568c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272568f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725692 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725695 jbe 0x127256c3 */
  if ((C.cf||C.zf)) goto L_127256c3;
L_12725697:;
  /* 12725697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272569a push ecx */
  push32((uint32_t)(ECX));
  /* 1272569b push 0x1274c844 */
  push32((uint32_t)(0x1274c844u));
  /* 127256a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127256a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127256a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127256a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 127256a8 call 0x12724570 */
  push32(0x127256adu); f_12724570();
  /* 127256ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127256b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127256b3 jne 0x127256b6 */
  if (!C.zf) goto L_127256b6;
  /* 127256b5 int3  */
  x86_unimpl("int3 @ 0x127256b5");
L_127256b6:;
  /* 127256b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127256b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127256ba jne 0x12725697 */
  if (!C.zf) goto L_12725697;
  /* 127256bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127256be jmp 0x1272588c */
  goto L_1272588c;
L_127256c3:;
  /* 127256c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127256c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127256cb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127256ce je 0x12725710 */
  if (C.zf) goto L_12725710;
  /* 127256d0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127256d4 je 0x12725710 */
  if (C.zf) goto L_12725710;
  /* 127256d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127256d9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127256df cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127256e2 je 0x12725710 */
  if (C.zf) goto L_12725710;
  /* 127256e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127256e8 je 0x12725710 */
  if (C.zf) goto L_12725710;
L_127256ea:;
  /* 127256ea push 0x1274c810 */
  push32((uint32_t)(0x1274c810u));
  /* 127256ef push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 127256f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127256f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127256f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127256fa push 1 */
  push32((uint32_t)(0x1u));
  /* 127256fc call 0x12724570 */
  push32(0x12725701u); f_12724570();
  /* 12725701 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725704 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725707 jne 0x1272570a */
  if (!C.zf) goto L_1272570a;
  /* 12725709 int3  */
  x86_unimpl("int3 @ 0x12725709");
L_1272570a:;
  /* 1272570a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272570c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272570e jne 0x127256ea */
  if (!C.zf) goto L_127256ea;
L_12725710:;
  /* 12725710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725713 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725716 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12725719 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272571c push ecx */
  push32((uint32_t)(ECX));
  /* 1272571d call 0x12729300 */
  push32(0x12725722u); f_12729300();
  /* 12725722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725725 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12725728 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272572c jne 0x12725735 */
  if (!C.zf) goto L_12725735;
  /* 1272572e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725730 jmp 0x1272588c */
  goto L_1272588c;
L_12725735:;
  /* 12725735 mov edx, dword ptr [0x1274fa88] */
  EDX = (r32((uint32_t)(0x1274fa88)));
  /* 1272573b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272573e mov dword ptr [0x1274fa88], edx */
  w32((uint32_t)(0x1274fa88), (EDX));
  /* 12725744 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725748 je 0x12725793 */
  if (C.zf) goto L_12725793;
  /* 1272574a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272574d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12725753 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725756 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1272575d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725760 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12725767 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272576a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12725771 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725777 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1272577a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272577d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12725784 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725787 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1272578e jmp 0x12725833 */
  goto L_12725833;
L_12725793:;
  /* 12725793 mov edx, dword ptr [0x127516c4] */
  EDX = (r32((uint32_t)(0x127516c4)));
  /* 12725799 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272579c mov dword ptr [0x127516c4], edx */
  w32((uint32_t)(0x127516c4), (EDX));
  /* 127257a2 mov eax, dword ptr [0x127516cc] */
  EAX = (r32((uint32_t)(0x127516cc)));
  /* 127257a7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127257aa mov dword ptr [0x127516cc], eax */
  w32((uint32_t)(0x127516cc), (EAX));
  /* 127257af mov ecx, dword ptr [0x127516cc] */
  ECX = (r32((uint32_t)(0x127516cc)));
  /* 127257b5 cmp ecx, dword ptr [0x127516d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127516d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127257bb jbe 0x127257c9 */
  if ((C.cf||C.zf)) goto L_127257c9;
  /* 127257bd mov edx, dword ptr [0x127516cc] */
  EDX = (r32((uint32_t)(0x127516cc)));
  /* 127257c3 mov dword ptr [0x127516d0], edx */
  w32((uint32_t)(0x127516d0), (EDX));
L_127257c9:;
  /* 127257c9 cmp dword ptr [0x127516c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127516c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127257d0 je 0x127257df */
  if (C.zf) goto L_127257df;
  /* 127257d2 mov eax, dword ptr [0x127516c8] */
  EAX = (r32((uint32_t)(0x127516c8)));
  /* 127257d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127257da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 127257dd jmp 0x127257e8 */
  goto L_127257e8;
L_127257df:;
  /* 127257df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127257e2 mov dword ptr [0x127516c0], edx */
  w32((uint32_t)(0x127516c0), (EDX));
L_127257e8:;
  /* 127257e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127257eb mov ecx, dword ptr [0x127516c8] */
  ECX = (r32((uint32_t)(0x127516c8)));
  /* 127257f1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127257f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127257f6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 127257fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725800 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12725803 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12725806 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725809 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272580c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1272580f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725812 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725815 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12725818 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272581b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272581e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12725821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725824 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725827 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1272582a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272582d mov dword ptr [0x127516c8], ecx */
  w32((uint32_t)(0x127516c8), (ECX));
L_12725833:;
  /* 12725833 push 4 */
  push32((uint32_t)(0x4u));
  /* 12725835 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12725837 mov dl, byte ptr [0x1274fa90] */
  DL = (r8((uint32_t)(0x1274fa90)));
  /* 1272583d push edx */
  push32((uint32_t)(EDX));
  /* 1272583e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725841 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725844 push eax */
  push32((uint32_t)(EAX));
  /* 12725845 call 0x12729220 */
  push32(0x1272584au); f_12729220();
  /* 1272584a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272584d push 4 */
  push32((uint32_t)(0x4u));
  /* 1272584f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12725851 mov cl, byte ptr [0x1274fa90] */
  CL = (r8((uint32_t)(0x1274fa90)));
  /* 12725857 push ecx */
  push32((uint32_t)(ECX));
  /* 12725858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272585b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272585e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12725862 push ecx */
  push32((uint32_t)(ECX));
  /* 12725863 call 0x12729220 */
  push32(0x12725868u); f_12729220();
  /* 12725868 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272586b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272586e push edx */
  push32((uint32_t)(EDX));
  /* 1272586f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725871 mov al, byte ptr [0x1274fa92] */
  AL = (r8((uint32_t)(0x1274fa92)));
  /* 12725876 push eax */
  push32((uint32_t)(EAX));
  /* 12725877 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272587a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272587d push ecx */
  push32((uint32_t)(ECX));
  /* 1272587e call 0x12729220 */
  push32(0x12725883u); f_12729220();
  /* 12725883 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725886 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725889 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1272588c:;
  /* 1272588c pop edi */
  EDI = (pop32());
  /* 1272588d pop esi */
  ESI = (pop32());
  /* 1272588e pop ebx */
  EBX = (pop32());
  /* 1272588f mov esp, ebp */
  ESP = (EBP);
  /* 12725891 pop ebp */
  EBP = (pop32());
  /* 12725892 ret  */
  ESPCHK(0x12725580u, _esp0);
  ESP += 4; return;
}

/* FUN_100058a0 @ 0x127258a0 (27 bytes, 13 insns) */
void f_127258a0(void) {
  FTRACE(0x127258a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127258a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127258a1 mov ebp, esp */
  EBP = (ESP);
  /* 127258a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127258a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127258a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127258a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127258ac push eax */
  push32((uint32_t)(EAX));
  /* 127258ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127258b0 push ecx */
  push32((uint32_t)(ECX));
  /* 127258b1 call 0x127258c0 */
  push32(0x127258b6u); f_127258c0();
  /* 127258b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127258b9 pop ebp */
  EBP = (pop32());
  /* 127258ba ret  */
  ESPCHK(0x127258a0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x127258c0 (96 bytes, 37 insns) */
void f_127258c0(void) {
  FTRACE(0x127258c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127258c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127258c1 mov ebp, esp */
  EBP = (ESP);
  /* 127258c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127258c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127258c9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127258cd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 127258d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127258d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127258d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127258d7 push edx */
  push32((uint32_t)(EDX));
  /* 127258d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127258db push eax */
  push32((uint32_t)(EAX));
  /* 127258dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127258df push ecx */
  push32((uint32_t)(ECX));
  /* 127258e0 call 0x127254b0 */
  push32(0x127258e5u); f_127254b0();
  /* 127258e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127258e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127258eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127258ef je 0x12725919 */
  if (C.zf) goto L_12725919;
  /* 127258f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127258f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127258f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127258fa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127258fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12725900:;
  /* 12725900 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725903 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725906 jae 0x12725919 */
  if (!C.cf) goto L_12725919;
  /* 12725908 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272590b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1272590e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725911 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725914 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12725917 jmp 0x12725900 */
  goto L_12725900;
L_12725919:;
  /* 12725919 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272591c mov esp, ebp */
  ESP = (EBP);
  /* 1272591e pop ebp */
  EBP = (pop32());
  /* 1272591f ret  */
  ESPCHK(0x127258c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x12725920 (27 bytes, 13 insns) */
void f_12725920(void) {
  FTRACE(0x12725920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725920 push ebp */
  push32((uint32_t)(EBP));
  /* 12725921 mov ebp, esp */
  EBP = (ESP);
  /* 12725923 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725925 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725927 push 1 */
  push32((uint32_t)(0x1u));
  /* 12725929 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272592c push eax */
  push32((uint32_t)(EAX));
  /* 1272592d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725930 push ecx */
  push32((uint32_t)(ECX));
  /* 12725931 call 0x12725940 */
  push32(0x12725936u); f_12725940();
  /* 12725936 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725939 pop ebp */
  EBP = (pop32());
  /* 1272593a ret  */
  ESPCHK(0x12725920u, _esp0);
  ESP += 4; return;
}

/* FUN_10005940 @ 0x12725940 (64 bytes, 27 insns) */
void f_12725940(void) {
  FTRACE(0x12725940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725940 push ebp */
  push32((uint32_t)(EBP));
  /* 12725941 mov ebp, esp */
  EBP = (ESP);
  /* 12725943 push ecx */
  push32((uint32_t)(ECX));
  /* 12725944 push 9 */
  push32((uint32_t)(0x9u));
  /* 12725946 call 0x12728eb0 */
  push32(0x1272594bu); f_12728eb0();
  /* 1272594b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272594e push 1 */
  push32((uint32_t)(0x1u));
  /* 12725950 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12725953 push eax */
  push32((uint32_t)(EAX));
  /* 12725954 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12725957 push ecx */
  push32((uint32_t)(ECX));
  /* 12725958 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272595b push edx */
  push32((uint32_t)(EDX));
  /* 1272595c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272595f push eax */
  push32((uint32_t)(EAX));
  /* 12725960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725963 push ecx */
  push32((uint32_t)(ECX));
  /* 12725964 call 0x12725980 */
  push32(0x12725969u); f_12725980();
  /* 12725969 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272596c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272596f push 9 */
  push32((uint32_t)(0x9u));
  /* 12725971 call 0x12728f50 */
  push32(0x12725976u); f_12728f50();
  /* 12725976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272597c mov esp, ebp */
  ESP = (EBP);
  /* 1272597e pop ebp */
  EBP = (pop32());
  /* 1272597f ret  */
  ESPCHK(0x12725940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005980 @ 0x12725980 (1297 bytes, 431 insns) */
void f_12725980(void) {
  FTRACE(0x12725980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725980 push ebp */
  push32((uint32_t)(EBP));
  /* 12725981 mov ebp, esp */
  EBP = (ESP);
  /* 12725983 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12725986 push ebx */
  push32((uint32_t)(EBX));
  /* 12725987 push esi */
  push32((uint32_t)(ESI));
  /* 12725988 push edi */
  push32((uint32_t)(EDI));
  /* 12725989 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12725990 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725994 jne 0x127259b3 */
  if (!C.zf) goto L_127259b3;
  /* 12725996 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12725999 push eax */
  push32((uint32_t)(EAX));
  /* 1272599a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272599d push ecx */
  push32((uint32_t)(ECX));
  /* 1272599e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127259a1 push edx */
  push32((uint32_t)(EDX));
  /* 127259a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127259a5 push eax */
  push32((uint32_t)(EAX));
  /* 127259a6 call 0x127254b0 */
  push32(0x127259abu); f_127254b0();
  /* 127259ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127259ae jmp 0x12725e8a */
  goto L_12725e8a;
L_127259b3:;
  /* 127259b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127259b7 je 0x127259d6 */
  if (C.zf) goto L_127259d6;
  /* 127259b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127259bd jne 0x127259d6 */
  if (!C.zf) goto L_127259d6;
  /* 127259bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127259c2 push ecx */
  push32((uint32_t)(ECX));
  /* 127259c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127259c6 push edx */
  push32((uint32_t)(EDX));
  /* 127259c7 call 0x12725f40 */
  push32(0x127259ccu); f_12725f40();
  /* 127259cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127259cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127259d1 jmp 0x12725e8a */
  goto L_12725e8a;
L_127259d6:;
  /* 127259d6 mov eax, dword ptr [0x1274fa84] */
  EAX = (r32((uint32_t)(0x1274fa84)));
  /* 127259db and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127259de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127259e0 je 0x12725a12 */
  if (C.zf) goto L_12725a12;
L_127259e2:;
  /* 127259e2 call 0x12726650 */
  push32(0x127259e7u); f_12726650();
  /* 127259e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127259e9 jne 0x12725a0c */
  if (!C.zf) goto L_12725a0c;
  /* 127259eb push 0x1274c8d4 */
  push32((uint32_t)(0x1274c8d4u));
  /* 127259f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127259f2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 127259f7 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 127259fc push 2 */
  push32((uint32_t)(0x2u));
  /* 127259fe call 0x12724570 */
  push32(0x12725a03u); f_12724570();
  /* 12725a03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725a06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725a09 jne 0x12725a0c */
  if (!C.zf) goto L_12725a0c;
  /* 12725a0b int3  */
  x86_unimpl("int3 @ 0x12725a0b");
L_12725a0c:;
  /* 12725a0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12725a0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12725a10 jne 0x127259e2 */
  if (!C.zf) goto L_127259e2;
L_12725a12:;
  /* 12725a12 mov edx, dword ptr [0x1274fa88] */
  EDX = (r32((uint32_t)(0x1274fa88)));
  /* 12725a18 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12725a1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12725a1e cmp eax, dword ptr [0x1274fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1274fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725a24 jne 0x12725a27 */
  if (!C.zf) goto L_12725a27;
  /* 12725a26 int3  */
  x86_unimpl("int3 @ 0x12725a26");
L_12725a27:;
  /* 12725a27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12725a2a push ecx */
  push32((uint32_t)(ECX));
  /* 12725a2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12725a2e push edx */
  push32((uint32_t)(EDX));
  /* 12725a2f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12725a32 push eax */
  push32((uint32_t)(EAX));
  /* 12725a33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12725a36 push ecx */
  push32((uint32_t)(ECX));
  /* 12725a37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725a3a push edx */
  push32((uint32_t)(EDX));
  /* 12725a3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725a3e push eax */
  push32((uint32_t)(EAX));
  /* 12725a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12725a41 call dword ptr [0x1274fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1274fc90))), 0x12725a47u);
  /* 12725a47 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725a4c jne 0x12725aac */
  if (!C.zf) goto L_12725aac;
  /* 12725a4e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725a52 je 0x12725a7f */
  if (C.zf) goto L_12725a7f;
L_12725a54:;
  /* 12725a54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12725a57 push ecx */
  push32((uint32_t)(ECX));
  /* 12725a58 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12725a5b push edx */
  push32((uint32_t)(EDX));
  /* 12725a5c push 0x1274ca50 */
  push32((uint32_t)(0x1274ca50u));
  /* 12725a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725a69 call 0x12724570 */
  push32(0x12725a6eu); f_12724570();
  /* 12725a6e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725a71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725a74 jne 0x12725a77 */
  if (!C.zf) goto L_12725a77;
  /* 12725a76 int3  */
  x86_unimpl("int3 @ 0x12725a76");
L_12725a77:;
  /* 12725a77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725a79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725a7b jne 0x12725a54 */
  if (!C.zf) goto L_12725a54;
  /* 12725a7d jmp 0x12725aa5 */
  goto L_12725aa5;
L_12725a7f:;
  /* 12725a7f push 0x1274ca2c */
  push32((uint32_t)(0x1274ca2cu));
  /* 12725a84 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 12725a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12725a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12725a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12725a91 call 0x12724570 */
  push32(0x12725a96u); f_12724570();
  /* 12725a96 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725a99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725a9c jne 0x12725a9f */
  if (!C.zf) goto L_12725a9f;
  /* 12725a9e int3  */
  x86_unimpl("int3 @ 0x12725a9e");
L_12725a9f:;
  /* 12725a9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12725aa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12725aa3 jne 0x12725a7f */
  if (!C.zf) goto L_12725a7f;
L_12725aa5:;
  /* 12725aa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725aa7 jmp 0x12725e8a */
  goto L_12725e8a;
L_12725aac:;
  /* 12725aac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725ab0 jbe 0x12725ade */
  if ((C.cf||C.zf)) goto L_12725ade;
L_12725ab2:;
  /* 12725ab2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725ab5 push edx */
  push32((uint32_t)(EDX));
  /* 12725ab6 push 0x1274c9fc */
  push32((uint32_t)(0x1274c9fcu));
  /* 12725abb push 0 */
  push32((uint32_t)(0x0u));
  /* 12725abd push 0 */
  push32((uint32_t)(0x0u));
  /* 12725abf push 0 */
  push32((uint32_t)(0x0u));
  /* 12725ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12725ac3 call 0x12724570 */
  push32(0x12725ac8u); f_12724570();
  /* 12725ac8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725acb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725ace jne 0x12725ad1 */
  if (!C.zf) goto L_12725ad1;
  /* 12725ad0 int3  */
  x86_unimpl("int3 @ 0x12725ad0");
L_12725ad1:;
  /* 12725ad1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725ad3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725ad5 jne 0x12725ab2 */
  if (!C.zf) goto L_12725ab2;
  /* 12725ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725ad9 jmp 0x12725e8a */
  goto L_12725e8a;
L_12725ade:;
  /* 12725ade cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725ae2 je 0x12725b26 */
  if (C.zf) goto L_12725b26;
  /* 12725ae4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12725ae7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12725aed cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725af0 je 0x12725b26 */
  if (C.zf) goto L_12725b26;
  /* 12725af2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12725af5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12725afb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725afe je 0x12725b26 */
  if (C.zf) goto L_12725b26;
L_12725b00:;
  /* 12725b00 push 0x1274c810 */
  push32((uint32_t)(0x1274c810u));
  /* 12725b05 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 12725b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12725b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12725b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12725b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12725b12 call 0x12724570 */
  push32(0x12725b17u); f_12724570();
  /* 12725b17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725b1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725b1d jne 0x12725b20 */
  if (!C.zf) goto L_12725b20;
  /* 12725b1f int3  */
  x86_unimpl("int3 @ 0x12725b1f");
L_12725b20:;
  /* 12725b20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725b24 jne 0x12725b00 */
  if (!C.zf) goto L_12725b00;
L_12725b26:;
  /* 12725b26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725b29 push ecx */
  push32((uint32_t)(ECX));
  /* 12725b2a call 0x12726ab0 */
  push32(0x12725b2fu); f_12726ab0();
  /* 12725b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725b34 jne 0x12725b57 */
  if (!C.zf) goto L_12725b57;
  /* 12725b36 push 0x1274c9d8 */
  push32((uint32_t)(0x1274c9d8u));
  /* 12725b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12725b3d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12725b42 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12725b47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12725b49 call 0x12724570 */
  push32(0x12725b4eu); f_12724570();
  /* 12725b4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725b51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725b54 jne 0x12725b57 */
  if (!C.zf) goto L_12725b57;
  /* 12725b56 int3  */
  x86_unimpl("int3 @ 0x12725b56");
L_12725b57:;
  /* 12725b57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12725b59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12725b5b jne 0x12725b26 */
  if (!C.zf) goto L_12725b26;
  /* 12725b5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725b60 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12725b63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12725b66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725b69 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725b6d jne 0x12725b76 */
  if (!C.zf) goto L_12725b76;
  /* 12725b6f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12725b76:;
  /* 12725b76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725b7a je 0x12725bba */
  if (C.zf) goto L_12725bba;
L_12725b7c:;
  /* 12725b7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725b7f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725b86 jne 0x12725b91 */
  if (!C.zf) goto L_12725b91;
  /* 12725b88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725b8b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725b8f je 0x12725bb2 */
  if (C.zf) goto L_12725bb2;
L_12725b91:;
  /* 12725b91 push 0x1274c990 */
  push32((uint32_t)(0x1274c990u));
  /* 12725b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725b98 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12725b9d push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12725ba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12725ba4 call 0x12724570 */
  push32(0x12725ba9u); f_12724570();
  /* 12725ba9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725bac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725baf jne 0x12725bb2 */
  if (!C.zf) goto L_12725bb2;
  /* 12725bb1 int3  */
  x86_unimpl("int3 @ 0x12725bb1");
L_12725bb2:;
  /* 12725bb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12725bb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12725bb6 jne 0x12725b7c */
  if (!C.zf) goto L_12725b7c;
  /* 12725bb8 jmp 0x12725c1e */
  goto L_12725c1e;
L_12725bba:;
  /* 12725bba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725bbd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12725bc0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12725bc5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725bc8 jne 0x12725bdf */
  if (!C.zf) goto L_12725bdf;
  /* 12725bca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12725bcd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12725bd3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725bd6 jne 0x12725bdf */
  if (!C.zf) goto L_12725bdf;
  /* 12725bd8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12725bdf:;
  /* 12725bdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725be2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12725be5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12725bea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12725bed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12725bf3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725bf5 je 0x12725c18 */
  if (C.zf) goto L_12725c18;
  /* 12725bf7 push 0x1274c954 */
  push32((uint32_t)(0x1274c954u));
  /* 12725bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12725bfe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12725c03 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12725c08 push 2 */
  push32((uint32_t)(0x2u));
  /* 12725c0a call 0x12724570 */
  push32(0x12725c0fu); f_12724570();
  /* 12725c0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725c12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725c15 jne 0x12725c18 */
  if (!C.zf) goto L_12725c18;
  /* 12725c17 int3  */
  x86_unimpl("int3 @ 0x12725c17");
L_12725c18:;
  /* 12725c18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12725c1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12725c1c jne 0x12725bdf */
  if (!C.zf) goto L_12725bdf;
L_12725c1e:;
  /* 12725c1e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725c22 je 0x12725c49 */
  if (C.zf) goto L_12725c49;
  /* 12725c24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725c27 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725c2a push eax */
  push32((uint32_t)(EAX));
  /* 12725c2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725c2e push ecx */
  push32((uint32_t)(ECX));
  /* 12725c2f call 0x12729430 */
  push32(0x12725c34u); f_12729430();
  /* 12725c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725c37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12725c3a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725c3e jne 0x12725c47 */
  if (!C.zf) goto L_12725c47;
  /* 12725c40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725c42 jmp 0x12725e8a */
  goto L_12725e8a;
L_12725c47:;
  /* 12725c47 jmp 0x12725c6c */
  goto L_12725c6c;
L_12725c49:;
  /* 12725c49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725c4c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725c4f push edx */
  push32((uint32_t)(EDX));
  /* 12725c50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12725c53 push eax */
  push32((uint32_t)(EAX));
  /* 12725c54 call 0x12729380 */
  push32(0x12725c59u); f_12729380();
  /* 12725c59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725c5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12725c5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725c63 jne 0x12725c6c */
  if (!C.zf) goto L_12725c6c;
  /* 12725c65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725c67 jmp 0x12725e8a */
  goto L_12725e8a;
L_12725c6c:;
  /* 12725c6c mov ecx, dword ptr [0x1274fa88] */
  ECX = (r32((uint32_t)(0x1274fa88)));
  /* 12725c72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725c75 mov dword ptr [0x1274fa88], ecx */
  w32((uint32_t)(0x1274fa88), (ECX));
  /* 12725c7b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725c7f jne 0x12725cd7 */
  if (!C.zf) goto L_12725cd7;
  /* 12725c81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725c84 mov eax, dword ptr [0x127516c4] */
  EAX = (r32((uint32_t)(0x127516c4)));
  /* 12725c89 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12725c8c mov dword ptr [0x127516c4], eax */
  w32((uint32_t)(0x127516c4), (EAX));
  /* 12725c91 mov ecx, dword ptr [0x127516c4] */
  ECX = (r32((uint32_t)(0x127516c4)));
  /* 12725c97 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725c9a mov dword ptr [0x127516c4], ecx */
  w32((uint32_t)(0x127516c4), (ECX));
  /* 12725ca0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725ca3 mov eax, dword ptr [0x127516cc] */
  EAX = (r32((uint32_t)(0x127516cc)));
  /* 12725ca8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12725cab mov dword ptr [0x127516cc], eax */
  w32((uint32_t)(0x127516cc), (EAX));
  /* 12725cb0 mov ecx, dword ptr [0x127516cc] */
  ECX = (r32((uint32_t)(0x127516cc)));
  /* 12725cb6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725cb9 mov dword ptr [0x127516cc], ecx */
  w32((uint32_t)(0x127516cc), (ECX));
  /* 12725cbf mov edx, dword ptr [0x127516cc] */
  EDX = (r32((uint32_t)(0x127516cc)));
  /* 12725cc5 cmp edx, dword ptr [0x127516d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127516d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725ccb jbe 0x12725cd7 */
  if ((C.cf||C.zf)) goto L_12725cd7;
  /* 12725ccd mov eax, dword ptr [0x127516cc] */
  EAX = (r32((uint32_t)(0x127516cc)));
  /* 12725cd2 mov dword ptr [0x127516d0], eax */
  w32((uint32_t)(0x127516d0), (EAX));
L_12725cd7:;
  /* 12725cd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725cda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725cdd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12725ce0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725ce3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725ce6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725ce9 jbe 0x12725d0f */
  if ((C.cf||C.zf)) goto L_12725d0f;
  /* 12725ceb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725cee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725cf1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12725cf4 push edx */
  push32((uint32_t)(EDX));
  /* 12725cf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725cf7 mov al, byte ptr [0x1274fa92] */
  AL = (r8((uint32_t)(0x1274fa92)));
  /* 12725cfc push eax */
  push32((uint32_t)(EAX));
  /* 12725cfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725d00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725d03 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725d06 push edx */
  push32((uint32_t)(EDX));
  /* 12725d07 call 0x12729220 */
  push32(0x12725d0cu); f_12729220();
  /* 12725d0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12725d0f:;
  /* 12725d0f push 4 */
  push32((uint32_t)(0x4u));
  /* 12725d11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12725d13 mov al, byte ptr [0x1274fa90] */
  AL = (r8((uint32_t)(0x1274fa90)));
  /* 12725d18 push eax */
  push32((uint32_t)(EAX));
  /* 12725d19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725d1c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12725d1f push ecx */
  push32((uint32_t)(ECX));
  /* 12725d20 call 0x12729220 */
  push32(0x12725d25u); f_12729220();
  /* 12725d25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725d28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725d2c jne 0x12725d49 */
  if (!C.zf) goto L_12725d49;
  /* 12725d2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725d31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12725d34 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12725d37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725d3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12725d3d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12725d40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725d43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12725d46 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12725d49:;
  /* 12725d49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725d4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725d4f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12725d52:;
  /* 12725d52 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725d56 jne 0x12725d87 */
  if (!C.zf) goto L_12725d87;
  /* 12725d58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725d5c jne 0x12725d66 */
  if (!C.zf) goto L_12725d66;
  /* 12725d5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725d61 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725d64 je 0x12725d87 */
  if (C.zf) goto L_12725d87;
L_12725d66:;
  /* 12725d66 push 0x1274c920 */
  push32((uint32_t)(0x1274c920u));
  /* 12725d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12725d6d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12725d72 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12725d77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12725d79 call 0x12724570 */
  push32(0x12725d7eu); f_12724570();
  /* 12725d7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725d81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725d84 jne 0x12725d87 */
  if (!C.zf) goto L_12725d87;
  /* 12725d86 int3  */
  x86_unimpl("int3 @ 0x12725d86");
L_12725d87:;
  /* 12725d87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12725d89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12725d8b jne 0x12725d52 */
  if (!C.zf) goto L_12725d52;
  /* 12725d8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725d90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725d93 je 0x12725d9b */
  if (C.zf) goto L_12725d9b;
  /* 12725d95 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725d99 je 0x12725da3 */
  if (C.zf) goto L_12725da3;
L_12725d9b:;
  /* 12725d9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725d9e jmp 0x12725e8a */
  goto L_12725e8a;
L_12725da3:;
  /* 12725da3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725da6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725da9 je 0x12725dbb */
  if (C.zf) goto L_12725dbb;
  /* 12725dab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725dae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12725db0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725db3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12725db6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12725db9 jmp 0x12725df7 */
  goto L_12725df7;
L_12725dbb:;
  /* 12725dbb mov eax, dword ptr [0x127516c0] */
  EAX = (r32((uint32_t)(0x127516c0)));
  /* 12725dc0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725dc3 je 0x12725de6 */
  if (C.zf) goto L_12725de6;
  /* 12725dc5 push 0x1274c904 */
  push32((uint32_t)(0x1274c904u));
  /* 12725dca push 0 */
  push32((uint32_t)(0x0u));
  /* 12725dcc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12725dd1 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12725dd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12725dd8 call 0x12724570 */
  push32(0x12725dddu); f_12724570();
  /* 12725ddd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725de0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725de3 jne 0x12725de6 */
  if (!C.zf) goto L_12725de6;
  /* 12725de5 int3  */
  x86_unimpl("int3 @ 0x12725de5");
L_12725de6:;
  /* 12725de6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12725de8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12725dea jne 0x12725dbb */
  if (!C.zf) goto L_12725dbb;
  /* 12725dec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725def mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12725df2 mov dword ptr [0x127516c0], eax */
  w32((uint32_t)(0x127516c0), (EAX));
L_12725df7:;
  /* 12725df7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725dfa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725dfe je 0x12725e0f */
  if (C.zf) goto L_12725e0f;
  /* 12725e00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725e03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12725e06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725e09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12725e0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12725e0d jmp 0x12725e4a */
  goto L_12725e4a;
L_12725e0f:;
  /* 12725e0f mov eax, dword ptr [0x127516c8] */
  EAX = (r32((uint32_t)(0x127516c8)));
  /* 12725e14 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725e17 je 0x12725e3a */
  if (C.zf) goto L_12725e3a;
  /* 12725e19 push 0x1274c8e8 */
  push32((uint32_t)(0x1274c8e8u));
  /* 12725e1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12725e20 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12725e25 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12725e2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12725e2c call 0x12724570 */
  push32(0x12725e31u); f_12724570();
  /* 12725e31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725e34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725e37 jne 0x12725e3a */
  if (!C.zf) goto L_12725e3a;
  /* 12725e39 int3  */
  x86_unimpl("int3 @ 0x12725e39");
L_12725e3a:;
  /* 12725e3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12725e3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12725e3e jne 0x12725e0f */
  if (!C.zf) goto L_12725e0f;
  /* 12725e40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725e43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12725e45 mov dword ptr [0x127516c8], eax */
  w32((uint32_t)(0x127516c8), (EAX));
L_12725e4a:;
  /* 12725e4a cmp dword ptr [0x127516c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127516c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725e51 je 0x12725e61 */
  if (C.zf) goto L_12725e61;
  /* 12725e53 mov ecx, dword ptr [0x127516c8] */
  ECX = (r32((uint32_t)(0x127516c8)));
  /* 12725e59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725e5c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12725e5f jmp 0x12725e69 */
  goto L_12725e69;
L_12725e61:;
  /* 12725e61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725e64 mov dword ptr [0x127516c0], eax */
  w32((uint32_t)(0x127516c0), (EAX));
L_12725e69:;
  /* 12725e69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725e6c mov edx, dword ptr [0x127516c8] */
  EDX = (r32((uint32_t)(0x127516c8)));
  /* 12725e72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12725e74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725e77 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12725e7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12725e81 mov dword ptr [0x127516c8], ecx */
  w32((uint32_t)(0x127516c8), (ECX));
  /* 12725e87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12725e8a:;
  /* 12725e8a pop edi */
  EDI = (pop32());
  /* 12725e8b pop esi */
  ESI = (pop32());
  /* 12725e8c pop ebx */
  EBX = (pop32());
  /* 12725e8d mov esp, ebp */
  ESP = (EBP);
  /* 12725e8f pop ebp */
  EBP = (pop32());
  /* 12725e90 ret  */
  ESPCHK(0x12725980u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ea0 @ 0x12725ea0 (27 bytes, 13 insns) */
void f_12725ea0(void) {
  FTRACE(0x12725ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12725ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12725ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725ea7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12725ea9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725eac push eax */
  push32((uint32_t)(EAX));
  /* 12725ead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12725eb1 call 0x12725ec0 */
  push32(0x12725eb6u); f_12725ec0();
  /* 12725eb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725eb9 pop ebp */
  EBP = (pop32());
  /* 12725eba ret  */
  ESPCHK(0x12725ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x12725ec0 (64 bytes, 27 insns) */
void f_12725ec0(void) {
  FTRACE(0x12725ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12725ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12725ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12725ec4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12725ec6 call 0x12728eb0 */
  push32(0x12725ecbu); f_12728eb0();
  /* 12725ecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725ece push 0 */
  push32((uint32_t)(0x0u));
  /* 12725ed0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12725ed3 push eax */
  push32((uint32_t)(EAX));
  /* 12725ed4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12725ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 12725ed8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12725edb push edx */
  push32((uint32_t)(EDX));
  /* 12725edc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725edf push eax */
  push32((uint32_t)(EAX));
  /* 12725ee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12725ee4 call 0x12725980 */
  push32(0x12725ee9u); f_12725980();
  /* 12725ee9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725eec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12725eef push 9 */
  push32((uint32_t)(0x9u));
  /* 12725ef1 call 0x12728f50 */
  push32(0x12725ef6u); f_12728f50();
  /* 12725ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725ef9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12725efc mov esp, ebp */
  ESP = (EBP);
  /* 12725efe pop ebp */
  EBP = (pop32());
  /* 12725eff ret  */
  ESPCHK(0x12725ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f00 @ 0x12725f00 (19 bytes, 9 insns) */
void f_12725f00(void) {
  FTRACE(0x12725f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12725f01 mov ebp, esp */
  EBP = (ESP);
  /* 12725f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12725f05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725f08 push eax */
  push32((uint32_t)(EAX));
  /* 12725f09 call 0x12725f40 */
  push32(0x12725f0eu); f_12725f40();
  /* 12725f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725f11 pop ebp */
  EBP = (pop32());
  /* 12725f12 ret  */
  ESPCHK(0x12725f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x12725f20 (19 bytes, 9 insns) */
void f_12725f20(void) {
  FTRACE(0x12725f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12725f21 mov ebp, esp */
  EBP = (ESP);
  /* 12725f23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12725f25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725f28 push eax */
  push32((uint32_t)(EAX));
  /* 12725f29 call 0x12725f70 */
  push32(0x12725f2eu); f_12725f70();
  /* 12725f2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725f31 pop ebp */
  EBP = (pop32());
  /* 12725f32 ret  */
  ESPCHK(0x12725f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f40 @ 0x12725f40 (41 bytes, 16 insns) */
void f_12725f40(void) {
  FTRACE(0x12725f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12725f41 mov ebp, esp */
  EBP = (ESP);
  /* 12725f43 push 9 */
  push32((uint32_t)(0x9u));
  /* 12725f45 call 0x12728eb0 */
  push32(0x12725f4au); f_12728eb0();
  /* 12725f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725f4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725f50 push eax */
  push32((uint32_t)(EAX));
  /* 12725f51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725f54 push ecx */
  push32((uint32_t)(ECX));
  /* 12725f55 call 0x12725f70 */
  push32(0x12725f5au); f_12725f70();
  /* 12725f5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725f5d push 9 */
  push32((uint32_t)(0x9u));
  /* 12725f5f call 0x12728f50 */
  push32(0x12725f64u); f_12728f50();
  /* 12725f64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725f67 pop ebp */
  EBP = (pop32());
  /* 12725f68 ret  */
  ESPCHK(0x12725f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f70 @ 0x12725f70 (1004 bytes, 342 insns) */
void f_12725f70(void) {
  FTRACE(0x12725f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12725f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12725f71 mov ebp, esp */
  EBP = (ESP);
  /* 12725f73 push ecx */
  push32((uint32_t)(ECX));
  /* 12725f74 push ebx */
  push32((uint32_t)(EBX));
  /* 12725f75 push esi */
  push32((uint32_t)(ESI));
  /* 12725f76 push edi */
  push32((uint32_t)(EDI));
  /* 12725f77 mov eax, dword ptr [0x1274fa84] */
  EAX = (r32((uint32_t)(0x1274fa84)));
  /* 12725f7c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12725f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725f81 je 0x12725fb3 */
  if (C.zf) goto L_12725fb3;
L_12725f83:;
  /* 12725f83 call 0x12726650 */
  push32(0x12725f88u); f_12726650();
  /* 12725f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725f8a jne 0x12725fad */
  if (!C.zf) goto L_12725fad;
  /* 12725f8c push 0x1274c8d4 */
  push32((uint32_t)(0x1274c8d4u));
  /* 12725f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725f93 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12725f98 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12725f9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12725f9f call 0x12724570 */
  push32(0x12725fa4u); f_12724570();
  /* 12725fa4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725fa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725faa jne 0x12725fad */
  if (!C.zf) goto L_12725fad;
  /* 12725fac int3  */
  x86_unimpl("int3 @ 0x12725fac");
L_12725fad:;
  /* 12725fad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12725faf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12725fb1 jne 0x12725f83 */
  if (!C.zf) goto L_12725f83;
L_12725fb3:;
  /* 12725fb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725fb7 jne 0x12725fbe */
  if (!C.zf) goto L_12725fbe;
  /* 12725fb9 jmp 0x12726355 */
  goto L_12726355;
L_12725fbe:;
  /* 12725fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12725fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725fc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12725fc7 push edx */
  push32((uint32_t)(EDX));
  /* 12725fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725fca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12725fcd push eax */
  push32((uint32_t)(EAX));
  /* 12725fce push 3 */
  push32((uint32_t)(0x3u));
  /* 12725fd0 call dword ptr [0x1274fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1274fc90))), 0x12725fd6u);
  /* 12725fd6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12725fdb jne 0x12726008 */
  if (!C.zf) goto L_12726008;
L_12725fdd:;
  /* 12725fdd push 0x1274cb98 */
  push32((uint32_t)(0x1274cb98u));
  /* 12725fe2 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 12725fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12725feb push 0 */
  push32((uint32_t)(0x0u));
  /* 12725fed push 0 */
  push32((uint32_t)(0x0u));
  /* 12725fef call 0x12724570 */
  push32(0x12725ff4u); f_12724570();
  /* 12725ff4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12725ff7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12725ffa jne 0x12725ffd */
  if (!C.zf) goto L_12725ffd;
  /* 12725ffc int3  */
  x86_unimpl("int3 @ 0x12725ffc");
L_12725ffd:;
  /* 12725ffd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12725fff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12726001 jne 0x12725fdd */
  if (!C.zf) goto L_12725fdd;
  /* 12726003 jmp 0x12726355 */
  goto L_12726355;
L_12726008:;
  /* 12726008 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272600b push edx */
  push32((uint32_t)(EDX));
  /* 1272600c call 0x12726ab0 */
  push32(0x12726011u); f_12726ab0();
  /* 12726011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726016 jne 0x12726039 */
  if (!C.zf) goto L_12726039;
  /* 12726018 push 0x1274c9d8 */
  push32((uint32_t)(0x1274c9d8u));
  /* 1272601d push 0 */
  push32((uint32_t)(0x0u));
  /* 1272601f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12726024 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12726029 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272602b call 0x12724570 */
  push32(0x12726030u); f_12724570();
  /* 12726030 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726033 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726036 jne 0x12726039 */
  if (!C.zf) goto L_12726039;
  /* 12726038 int3  */
  x86_unimpl("int3 @ 0x12726038");
L_12726039:;
  /* 12726039 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272603b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272603d jne 0x12726008 */
  if (!C.zf) goto L_12726008;
  /* 1272603f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726042 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726045 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12726048:;
  /* 12726048 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272604b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1272604e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726053 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726056 je 0x1272609b */
  if (C.zf) goto L_1272609b;
  /* 12726058 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272605b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272605f je 0x1272609b */
  if (C.zf) goto L_1272609b;
  /* 12726061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726064 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726067 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272606c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272606f je 0x1272609b */
  if (C.zf) goto L_1272609b;
  /* 12726071 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726074 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726078 je 0x1272609b */
  if (C.zf) goto L_1272609b;
  /* 1272607a push 0x1274cb70 */
  push32((uint32_t)(0x1274cb70u));
  /* 1272607f push 0 */
  push32((uint32_t)(0x0u));
  /* 12726081 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12726086 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 1272608b push 2 */
  push32((uint32_t)(0x2u));
  /* 1272608d call 0x12724570 */
  push32(0x12726092u); f_12724570();
  /* 12726092 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726095 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726098 jne 0x1272609b */
  if (!C.zf) goto L_1272609b;
  /* 1272609a int3  */
  x86_unimpl("int3 @ 0x1272609a");
L_1272609b:;
  /* 1272609b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272609d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272609f jne 0x12726048 */
  if (!C.zf) goto L_12726048;
  /* 127260a1 mov eax, dword ptr [0x1274fa84] */
  EAX = (r32((uint32_t)(0x1274fa84)));
  /* 127260a6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127260a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127260ab jne 0x12726176 */
  if (!C.zf) goto L_12726176;
  /* 127260b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 127260b3 mov cl, byte ptr [0x1274fa90] */
  CL = (r8((uint32_t)(0x1274fa90)));
  /* 127260b9 push ecx */
  push32((uint32_t)(ECX));
  /* 127260ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127260bd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127260c0 push edx */
  push32((uint32_t)(EDX));
  /* 127260c1 call 0x127265c0 */
  push32(0x127260c6u); f_127265c0();
  /* 127260c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127260c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127260cb jne 0x12726110 */
  if (!C.zf) goto L_12726110;
L_127260cd:;
  /* 127260cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127260d0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127260d3 push eax */
  push32((uint32_t)(EAX));
  /* 127260d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127260d7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127260da push edx */
  push32((uint32_t)(EDX));
  /* 127260db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127260de mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127260e1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127260e7 mov edx, dword ptr [ecx*4 + 0x1274fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1274fa94)));
  /* 127260ee push edx */
  push32((uint32_t)(EDX));
  /* 127260ef push 0x1274cb44 */
  push32((uint32_t)(0x1274cb44u));
  /* 127260f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127260f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127260f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127260fa push 1 */
  push32((uint32_t)(0x1u));
  /* 127260fc call 0x12724570 */
  push32(0x12726101u); f_12724570();
  /* 12726101 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726104 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726107 jne 0x1272610a */
  if (!C.zf) goto L_1272610a;
  /* 12726109 int3  */
  x86_unimpl("int3 @ 0x12726109");
L_1272610a:;
  /* 1272610a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272610c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272610e jne 0x127260cd */
  if (!C.zf) goto L_127260cd;
L_12726110:;
  /* 12726110 push 4 */
  push32((uint32_t)(0x4u));
  /* 12726112 mov cl, byte ptr [0x1274fa90] */
  CL = (r8((uint32_t)(0x1274fa90)));
  /* 12726118 push ecx */
  push32((uint32_t)(ECX));
  /* 12726119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272611c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1272611f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726122 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12726126 push edx */
  push32((uint32_t)(EDX));
  /* 12726127 call 0x127265c0 */
  push32(0x1272612cu); f_127265c0();
  /* 1272612c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272612f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726131 jne 0x12726176 */
  if (!C.zf) goto L_12726176;
L_12726133:;
  /* 12726133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726136 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12726139 push eax */
  push32((uint32_t)(EAX));
  /* 1272613a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272613d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12726140 push edx */
  push32((uint32_t)(EDX));
  /* 12726141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726144 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12726147 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272614d mov edx, dword ptr [ecx*4 + 0x1274fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1274fa94)));
  /* 12726154 push edx */
  push32((uint32_t)(EDX));
  /* 12726155 push 0x1274cb18 */
  push32((uint32_t)(0x1274cb18u));
  /* 1272615a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272615c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272615e push 0 */
  push32((uint32_t)(0x0u));
  /* 12726160 push 1 */
  push32((uint32_t)(0x1u));
  /* 12726162 call 0x12724570 */
  push32(0x12726167u); f_12724570();
  /* 12726167 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272616a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272616d jne 0x12726170 */
  if (!C.zf) goto L_12726170;
  /* 1272616f int3  */
  x86_unimpl("int3 @ 0x1272616f");
L_12726170:;
  /* 12726170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726174 jne 0x12726133 */
  if (!C.zf) goto L_12726133;
L_12726176:;
  /* 12726176 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726179 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272617d jne 0x127261eb */
  if (!C.zf) goto L_127261eb;
L_1272617f:;
  /* 1272617f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726182 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726189 jne 0x12726194 */
  if (!C.zf) goto L_12726194;
  /* 1272618b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272618e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726192 je 0x127261b5 */
  if (C.zf) goto L_127261b5;
L_12726194:;
  /* 12726194 push 0x1274cad8 */
  push32((uint32_t)(0x1274cad8u));
  /* 12726199 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272619b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 127261a0 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 127261a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127261a7 call 0x12724570 */
  push32(0x127261acu); f_12724570();
  /* 127261ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127261af cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127261b2 jne 0x127261b5 */
  if (!C.zf) goto L_127261b5;
  /* 127261b4 int3  */
  x86_unimpl("int3 @ 0x127261b4");
L_127261b5:;
  /* 127261b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127261b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127261b9 jne 0x1272617f */
  if (!C.zf) goto L_1272617f;
  /* 127261bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127261be mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127261c1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127261c4 push eax */
  push32((uint32_t)(EAX));
  /* 127261c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127261c7 mov cl, byte ptr [0x1274fa91] */
  CL = (r8((uint32_t)(0x1274fa91)));
  /* 127261cd push ecx */
  push32((uint32_t)(ECX));
  /* 127261ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127261d1 push edx */
  push32((uint32_t)(EDX));
  /* 127261d2 call 0x12729220 */
  push32(0x127261d7u); f_12729220();
  /* 127261d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127261da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127261dd push eax */
  push32((uint32_t)(EAX));
  /* 127261de call 0x12729620 */
  push32(0x127261e3u); f_12729620();
  /* 127261e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127261e6 jmp 0x12726355 */
  goto L_12726355;
L_127261eb:;
  /* 127261eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127261ee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127261f2 jne 0x12726201 */
  if (!C.zf) goto L_12726201;
  /* 127261f4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127261f8 jne 0x12726201 */
  if (!C.zf) goto L_12726201;
  /* 127261fa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12726201:;
  /* 12726201 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726204 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726207 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272620a je 0x1272622d */
  if (C.zf) goto L_1272622d;
  /* 1272620c push 0x1274cab8 */
  push32((uint32_t)(0x1274cab8u));
  /* 12726211 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726213 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12726218 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 1272621d push 2 */
  push32((uint32_t)(0x2u));
  /* 1272621f call 0x12724570 */
  push32(0x12726224u); f_12724570();
  /* 12726224 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726227 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272622a jne 0x1272622d */
  if (!C.zf) goto L_1272622d;
  /* 1272622c int3  */
  x86_unimpl("int3 @ 0x1272622c");
L_1272622d:;
  /* 1272622d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272622f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12726231 jne 0x12726201 */
  if (!C.zf) goto L_12726201;
  /* 12726233 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726236 mov eax, dword ptr [0x127516cc] */
  EAX = (r32((uint32_t)(0x127516cc)));
  /* 1272623b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272623e mov dword ptr [0x127516cc], eax */
  w32((uint32_t)(0x127516cc), (EAX));
  /* 12726243 mov ecx, dword ptr [0x1274fa84] */
  ECX = (r32((uint32_t)(0x1274fa84)));
  /* 12726249 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1272624c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272624e jne 0x1272632c */
  if (!C.zf) goto L_1272632c;
  /* 12726254 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726257 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272625a je 0x1272626c */
  if (C.zf) goto L_1272626c;
  /* 1272625c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272625f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12726261 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726264 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12726267 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1272626a jmp 0x127262aa */
  goto L_127262aa;
L_1272626c:;
  /* 1272626c mov ecx, dword ptr [0x127516c0] */
  ECX = (r32((uint32_t)(0x127516c0)));
  /* 12726272 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726275 je 0x12726298 */
  if (C.zf) goto L_12726298;
  /* 12726277 push 0x1274caa0 */
  push32((uint32_t)(0x1274caa0u));
  /* 1272627c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272627e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12726283 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12726288 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272628a call 0x12724570 */
  push32(0x1272628fu); f_12724570();
  /* 1272628f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726292 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726295 jne 0x12726298 */
  if (!C.zf) goto L_12726298;
  /* 12726297 int3  */
  x86_unimpl("int3 @ 0x12726297");
L_12726298:;
  /* 12726298 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272629a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272629c jne 0x1272626c */
  if (!C.zf) goto L_1272626c;
  /* 1272629e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127262a1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127262a4 mov dword ptr [0x127516c0], ecx */
  w32((uint32_t)(0x127516c0), (ECX));
L_127262aa:;
  /* 127262aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127262ad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127262b1 je 0x127262c2 */
  if (C.zf) goto L_127262c2;
  /* 127262b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127262b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127262b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127262bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127262be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127262c0 jmp 0x127262ff */
  goto L_127262ff;
L_127262c2:;
  /* 127262c2 mov ecx, dword ptr [0x127516c8] */
  ECX = (r32((uint32_t)(0x127516c8)));
  /* 127262c8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127262cb je 0x127262ee */
  if (C.zf) goto L_127262ee;
  /* 127262cd push 0x1274ca88 */
  push32((uint32_t)(0x1274ca88u));
  /* 127262d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127262d4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 127262d9 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 127262de push 2 */
  push32((uint32_t)(0x2u));
  /* 127262e0 call 0x12724570 */
  push32(0x127262e5u); f_12724570();
  /* 127262e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127262e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127262eb jne 0x127262ee */
  if (!C.zf) goto L_127262ee;
  /* 127262ed int3  */
  x86_unimpl("int3 @ 0x127262ed");
L_127262ee:;
  /* 127262ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127262f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127262f2 jne 0x127262c2 */
  if (!C.zf) goto L_127262c2;
  /* 127262f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127262f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127262f9 mov dword ptr [0x127516c8], ecx */
  w32((uint32_t)(0x127516c8), (ECX));
L_127262ff:;
  /* 127262ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726302 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12726305 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12726308 push eax */
  push32((uint32_t)(EAX));
  /* 12726309 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272630b mov cl, byte ptr [0x1274fa91] */
  CL = (r8((uint32_t)(0x1274fa91)));
  /* 12726311 push ecx */
  push32((uint32_t)(ECX));
  /* 12726312 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726315 push edx */
  push32((uint32_t)(EDX));
  /* 12726316 call 0x12729220 */
  push32(0x1272631bu); f_12729220();
  /* 1272631b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272631e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726321 push eax */
  push32((uint32_t)(EAX));
  /* 12726322 call 0x12729620 */
  push32(0x12726327u); f_12729620();
  /* 12726327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272632a jmp 0x12726355 */
  goto L_12726355;
L_1272632c:;
  /* 1272632c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272632f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12726336 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726339 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1272633c push eax */
  push32((uint32_t)(EAX));
  /* 1272633d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272633f mov cl, byte ptr [0x1274fa91] */
  CL = (r8((uint32_t)(0x1274fa91)));
  /* 12726345 push ecx */
  push32((uint32_t)(ECX));
  /* 12726346 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726349 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272634c push edx */
  push32((uint32_t)(EDX));
  /* 1272634d call 0x12729220 */
  push32(0x12726352u); f_12729220();
  /* 12726352 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12726355:;
  /* 12726355 pop edi */
  EDI = (pop32());
  /* 12726356 pop esi */
  ESI = (pop32());
  /* 12726357 pop ebx */
  EBX = (pop32());
  /* 12726358 mov esp, ebp */
  ESP = (EBP);
  /* 1272635a pop ebp */
  EBP = (pop32());
  /* 1272635b ret  */
  ESPCHK(0x12725f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006360 @ 0x12726360 (19 bytes, 9 insns) */
void f_12726360(void) {
  FTRACE(0x12726360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726360 push ebp */
  push32((uint32_t)(EBP));
  /* 12726361 mov ebp, esp */
  EBP = (ESP);
  /* 12726363 push 1 */
  push32((uint32_t)(0x1u));
  /* 12726365 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726368 push eax */
  push32((uint32_t)(EAX));
  /* 12726369 call 0x12726380 */
  push32(0x1272636eu); f_12726380();
  /* 1272636e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726371 pop ebp */
  EBP = (pop32());
  /* 12726372 ret  */
  ESPCHK(0x12726360u, _esp0);
  ESP += 4; return;
}

/* FUN_10006380 @ 0x12726380 (342 bytes, 119 insns) */
void f_12726380(void) {
  FTRACE(0x12726380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726380 push ebp */
  push32((uint32_t)(EBP));
  /* 12726381 mov ebp, esp */
  EBP = (ESP);
  /* 12726383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726386 push ebx */
  push32((uint32_t)(EBX));
  /* 12726387 push esi */
  push32((uint32_t)(ESI));
  /* 12726388 push edi */
  push32((uint32_t)(EDI));
  /* 12726389 mov eax, dword ptr [0x1274fa84] */
  EAX = (r32((uint32_t)(0x1274fa84)));
  /* 1272638e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12726391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726393 je 0x127263c5 */
  if (C.zf) goto L_127263c5;
L_12726395:;
  /* 12726395 call 0x12726650 */
  push32(0x1272639au); f_12726650();
  /* 1272639a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272639c jne 0x127263bf */
  if (!C.zf) goto L_127263bf;
  /* 1272639e push 0x1274c8d4 */
  push32((uint32_t)(0x1274c8d4u));
  /* 127263a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127263a5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 127263aa push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 127263af push 2 */
  push32((uint32_t)(0x2u));
  /* 127263b1 call 0x12724570 */
  push32(0x127263b6u); f_12724570();
  /* 127263b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127263b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127263bc jne 0x127263bf */
  if (!C.zf) goto L_127263bf;
  /* 127263be int3  */
  x86_unimpl("int3 @ 0x127263be");
L_127263bf:;
  /* 127263bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127263c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127263c3 jne 0x12726395 */
  if (!C.zf) goto L_12726395;
L_127263c5:;
  /* 127263c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 127263c7 call 0x12728eb0 */
  push32(0x127263ccu); f_12728eb0();
  /* 127263cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127263cf:;
  /* 127263cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127263d2 push edx */
  push32((uint32_t)(EDX));
  /* 127263d3 call 0x12726ab0 */
  push32(0x127263d8u); f_12726ab0();
  /* 127263d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127263db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127263dd jne 0x12726400 */
  if (!C.zf) goto L_12726400;
  /* 127263df push 0x1274c9d8 */
  push32((uint32_t)(0x1274c9d8u));
  /* 127263e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127263e6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 127263eb push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 127263f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127263f2 call 0x12724570 */
  push32(0x127263f7u); f_12724570();
  /* 127263f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127263fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127263fd jne 0x12726400 */
  if (!C.zf) goto L_12726400;
  /* 127263ff int3  */
  x86_unimpl("int3 @ 0x127263ff");
L_12726400:;
  /* 12726400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726404 jne 0x127263cf */
  if (!C.zf) goto L_127263cf;
  /* 12726406 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726409 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272640c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1272640f:;
  /* 1272640f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726412 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726415 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272641a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272641d je 0x12726462 */
  if (C.zf) goto L_12726462;
  /* 1272641f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726422 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726426 je 0x12726462 */
  if (C.zf) goto L_12726462;
  /* 12726428 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272642b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1272642e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726433 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726436 je 0x12726462 */
  if (C.zf) goto L_12726462;
  /* 12726438 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272643b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272643f je 0x12726462 */
  if (C.zf) goto L_12726462;
  /* 12726441 push 0x1274cb70 */
  push32((uint32_t)(0x1274cb70u));
  /* 12726446 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726448 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1272644d push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 12726452 push 2 */
  push32((uint32_t)(0x2u));
  /* 12726454 call 0x12724570 */
  push32(0x12726459u); f_12724570();
  /* 12726459 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272645c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272645f jne 0x12726462 */
  if (!C.zf) goto L_12726462;
  /* 12726461 int3  */
  x86_unimpl("int3 @ 0x12726461");
L_12726462:;
  /* 12726462 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12726464 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12726466 jne 0x1272640f */
  if (!C.zf) goto L_1272640f;
  /* 12726468 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272646b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272646f jne 0x1272647e */
  if (!C.zf) goto L_1272647e;
  /* 12726471 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726475 jne 0x1272647e */
  if (!C.zf) goto L_1272647e;
  /* 12726477 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1272647e:;
  /* 1272647e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726481 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726485 je 0x127264b9 */
  if (C.zf) goto L_127264b9;
L_12726487:;
  /* 12726487 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272648a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1272648d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726490 je 0x127264b3 */
  if (C.zf) goto L_127264b3;
  /* 12726492 push 0x1274cab8 */
  push32((uint32_t)(0x1274cab8u));
  /* 12726497 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726499 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1272649e push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 127264a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127264a5 call 0x12724570 */
  push32(0x127264aau); f_12724570();
  /* 127264aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127264ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127264b0 jne 0x127264b3 */
  if (!C.zf) goto L_127264b3;
  /* 127264b2 int3  */
  x86_unimpl("int3 @ 0x127264b2");
L_127264b3:;
  /* 127264b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127264b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127264b7 jne 0x12726487 */
  if (!C.zf) goto L_12726487;
L_127264b9:;
  /* 127264b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127264bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127264bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127264c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 127264c4 call 0x12728f50 */
  push32(0x127264c9u); f_12728f50();
  /* 127264c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127264cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127264cf pop edi */
  EDI = (pop32());
  /* 127264d0 pop esi */
  ESI = (pop32());
  /* 127264d1 pop ebx */
  EBX = (pop32());
  /* 127264d2 mov esp, ebp */
  ESP = (EBP);
  /* 127264d4 pop ebp */
  EBP = (pop32());
  /* 127264d5 ret  */
  ESPCHK(0x12726380u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e0 @ 0x127264e0 (28 bytes, 11 insns) */
void f_127264e0(void) {
  FTRACE(0x127264e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127264e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127264e1 mov ebp, esp */
  EBP = (ESP);
  /* 127264e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127264e4 mov eax, dword ptr [0x1274fa8c] */
  EAX = (r32((uint32_t)(0x1274fa8c)));
  /* 127264e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127264ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127264ef mov dword ptr [0x1274fa8c], ecx */
  w32((uint32_t)(0x1274fa8c), (ECX));
  /* 127264f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127264f8 mov esp, ebp */
  ESP = (EBP);
  /* 127264fa pop ebp */
  EBP = (pop32());
  /* 127264fb ret  */
  ESPCHK(0x127264e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x12726500 (157 bytes, 59 insns) */
void f_12726500(void) {
  FTRACE(0x12726500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726500 push ebp */
  push32((uint32_t)(EBP));
  /* 12726501 mov ebp, esp */
  EBP = (ESP);
  /* 12726503 push ecx */
  push32((uint32_t)(ECX));
  /* 12726504 push ebx */
  push32((uint32_t)(EBX));
  /* 12726505 push esi */
  push32((uint32_t)(ESI));
  /* 12726506 push edi */
  push32((uint32_t)(EDI));
  /* 12726507 push 9 */
  push32((uint32_t)(0x9u));
  /* 12726509 call 0x12728eb0 */
  push32(0x1272650eu); f_12728eb0();
  /* 1272650e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726511 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726514 push eax */
  push32((uint32_t)(EAX));
  /* 12726515 call 0x12726ab0 */
  push32(0x1272651au); f_12726ab0();
  /* 1272651a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272651d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272651f je 0x1272658c */
  if (C.zf) goto L_1272658c;
  /* 12726521 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726524 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726527 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1272652a:;
  /* 1272652a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272652d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726530 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726535 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726538 je 0x1272657d */
  if (C.zf) goto L_1272657d;
  /* 1272653a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272653d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726541 je 0x1272657d */
  if (C.zf) goto L_1272657d;
  /* 12726543 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726546 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726549 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272654e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726551 je 0x1272657d */
  if (C.zf) goto L_1272657d;
  /* 12726553 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726556 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272655a je 0x1272657d */
  if (C.zf) goto L_1272657d;
  /* 1272655c push 0x1274cb70 */
  push32((uint32_t)(0x1274cb70u));
  /* 12726561 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726563 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12726568 push 0x1274c8c8 */
  push32((uint32_t)(0x1274c8c8u));
  /* 1272656d push 2 */
  push32((uint32_t)(0x2u));
  /* 1272656f call 0x12724570 */
  push32(0x12726574u); f_12724570();
  /* 12726574 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726577 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272657a jne 0x1272657d */
  if (!C.zf) goto L_1272657d;
  /* 1272657c int3  */
  x86_unimpl("int3 @ 0x1272657c");
L_1272657d:;
  /* 1272657d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272657f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12726581 jne 0x1272652a */
  if (!C.zf) goto L_1272652a;
  /* 12726583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726586 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12726589 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1272658c:;
  /* 1272658c push 9 */
  push32((uint32_t)(0x9u));
  /* 1272658e call 0x12728f50 */
  push32(0x12726593u); f_12728f50();
  /* 12726593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726596 pop edi */
  EDI = (pop32());
  /* 12726597 pop esi */
  ESI = (pop32());
  /* 12726598 pop ebx */
  EBX = (pop32());
  /* 12726599 mov esp, ebp */
  ESP = (EBP);
  /* 1272659b pop ebp */
  EBP = (pop32());
  /* 1272659c ret  */
  ESPCHK(0x12726500u, _esp0);
  ESP += 4; return;
}

/* FUN_100065a0 @ 0x127265a0 (28 bytes, 11 insns) */
void f_127265a0(void) {
  FTRACE(0x127265a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127265a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127265a1 mov ebp, esp */
  EBP = (ESP);
  /* 127265a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127265a4 mov eax, dword ptr [0x1274fc90] */
  EAX = (r32((uint32_t)(0x1274fc90)));
  /* 127265a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127265ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127265af mov dword ptr [0x1274fc90], ecx */
  w32((uint32_t)(0x1274fc90), (ECX));
  /* 127265b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127265b8 mov esp, ebp */
  ESP = (EBP);
  /* 127265ba pop ebp */
  EBP = (pop32());
  /* 127265bb ret  */
  ESPCHK(0x127265a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100065c0 @ 0x127265c0 (136 bytes, 55 insns) */
void f_127265c0(void) {
  FTRACE(0x127265c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127265c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127265c1 mov ebp, esp */
  EBP = (ESP);
  /* 127265c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127265c4 push ebx */
  push32((uint32_t)(EBX));
  /* 127265c5 push esi */
  push32((uint32_t)(ESI));
  /* 127265c6 push edi */
  push32((uint32_t)(EDI));
  /* 127265c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_127265ce:;
  /* 127265ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127265d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127265d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127265d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127265da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127265dc je 0x1272663e */
  if (C.zf) goto L_1272663e;
  /* 127265de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127265e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127265e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127265e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127265e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127265ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127265f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127265f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127265f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127265f9 je 0x1272663c */
  if (C.zf) goto L_1272663c;
L_127265fb:;
  /* 127265fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127265fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726603 push eax */
  push32((uint32_t)(EAX));
  /* 12726604 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726607 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12726609 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1272660c push edx */
  push32((uint32_t)(EDX));
  /* 1272660d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726610 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726613 push eax */
  push32((uint32_t)(EAX));
  /* 12726614 push 0x1274cbb4 */
  push32((uint32_t)(0x1274cbb4u));
  /* 12726619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272661b push 0 */
  push32((uint32_t)(0x0u));
  /* 1272661d push 0 */
  push32((uint32_t)(0x0u));
  /* 1272661f push 0 */
  push32((uint32_t)(0x0u));
  /* 12726621 call 0x12724570 */
  push32(0x12726626u); f_12724570();
  /* 12726626 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726629 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272662c jne 0x1272662f */
  if (!C.zf) goto L_1272662f;
  /* 1272662e int3  */
  x86_unimpl("int3 @ 0x1272662e");
L_1272662f:;
  /* 1272662f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12726631 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12726633 jne 0x127265fb */
  if (!C.zf) goto L_127265fb;
  /* 12726635 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1272663c:;
  /* 1272663c jmp 0x127265ce */
  goto L_127265ce;
L_1272663e:;
  /* 1272663e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726641 pop edi */
  EDI = (pop32());
  /* 12726642 pop esi */
  ESI = (pop32());
  /* 12726643 pop ebx */
  EBX = (pop32());
  /* 12726644 mov esp, ebp */
  ESP = (EBP);
  /* 12726646 pop ebp */
  EBP = (pop32());
  /* 12726647 ret  */
  ESPCHK(0x127265c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006650 @ 0x12726650 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12726650(void) {
  FTRACE(0x12726650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726650 push ebp */
  push32((uint32_t)(EBP));
  /* 12726651 mov ebp, esp */
  EBP = (ESP);
  /* 12726653 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726656 push ebx */
  push32((uint32_t)(EBX));
  /* 12726657 push esi */
  push32((uint32_t)(ESI));
  /* 12726658 push edi */
  push32((uint32_t)(EDI));
  /* 12726659 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12726660 mov eax, dword ptr [0x1274fa84] */
  EAX = (r32((uint32_t)(0x1274fa84)));
  /* 12726665 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12726668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272666a jne 0x12726676 */
  if (!C.zf) goto L_12726676;
  /* 1272666c mov eax, 1 */
  EAX = (0x1u);
  /* 12726671 jmp 0x127269a8 */
  goto L_127269a8;
L_12726676:;
  /* 12726676 push 9 */
  push32((uint32_t)(0x9u));
  /* 12726678 call 0x12728eb0 */
  push32(0x1272667du); f_12728eb0();
  /* 1272667d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726680 call 0x12729690 */
  push32(0x12726685u); f_12729690();
  /* 12726685 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12726688 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272668c je 0x12726799 */
  if (C.zf) goto L_12726799;
  /* 12726692 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726696 je 0x12726799 */
  if (C.zf) goto L_12726799;
  /* 1272669c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272669f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127266a2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127266a5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127266a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127266ab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127266af ja 0x12726762 */
  if ((!C.cf&&!C.zf)) goto L_12726762;
  /* 127266b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127266b8 jmp dword ptr [eax*4 + 0x127269af] */
  switch (EAX) {
    case 0: goto L_1272673a;
    case 1: goto L_12726712;
    case 2: goto L_127266ea;
    case 3: goto L_127266bf;
    default: x86_unimpl("switch@0x127266b8 out of table"); return;
  }
L_127266bf:;
  /* 127266bf push 0x1274cd08 */
  push32((uint32_t)(0x1274cd08u));
  /* 127266c4 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 127266c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127266cb push 0 */
  push32((uint32_t)(0x0u));
  /* 127266cd push 0 */
  push32((uint32_t)(0x0u));
  /* 127266cf push 0 */
  push32((uint32_t)(0x0u));
  /* 127266d1 call 0x12724570 */
  push32(0x127266d6u); f_12724570();
  /* 127266d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127266d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127266dc jne 0x127266df */
  if (!C.zf) goto L_127266df;
  /* 127266de int3  */
  x86_unimpl("int3 @ 0x127266de");
L_127266df:;
  /* 127266df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127266e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127266e3 jne 0x127266bf */
  if (!C.zf) goto L_127266bf;
  /* 127266e5 jmp 0x12726788 */
  goto L_12726788;
L_127266ea:;
  /* 127266ea push 0x1274cce4 */
  push32((uint32_t)(0x1274cce4u));
  /* 127266ef push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 127266f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127266f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127266f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127266fa push 0 */
  push32((uint32_t)(0x0u));
  /* 127266fc call 0x12724570 */
  push32(0x12726701u); f_12724570();
  /* 12726701 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726704 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726707 jne 0x1272670a */
  if (!C.zf) goto L_1272670a;
  /* 12726709 int3  */
  x86_unimpl("int3 @ 0x12726709");
L_1272670a:;
  /* 1272670a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272670c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272670e jne 0x127266ea */
  if (!C.zf) goto L_127266ea;
  /* 12726710 jmp 0x12726788 */
  goto L_12726788;
L_12726712:;
  /* 12726712 push 0x1274ccc0 */
  push32((uint32_t)(0x1274ccc0u));
  /* 12726717 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 1272671c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272671e push 0 */
  push32((uint32_t)(0x0u));
  /* 12726720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726722 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726724 call 0x12724570 */
  push32(0x12726729u); f_12724570();
  /* 12726729 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272672c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272672f jne 0x12726732 */
  if (!C.zf) goto L_12726732;
  /* 12726731 int3  */
  x86_unimpl("int3 @ 0x12726731");
L_12726732:;
  /* 12726732 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726736 jne 0x12726712 */
  if (!C.zf) goto L_12726712;
  /* 12726738 jmp 0x12726788 */
  goto L_12726788;
L_1272673a:;
  /* 1272673a push 0x1274cc9c */
  push32((uint32_t)(0x1274cc9cu));
  /* 1272673f push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 12726744 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726746 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726748 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272674a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272674c call 0x12724570 */
  push32(0x12726751u); f_12724570();
  /* 12726751 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726754 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726757 jne 0x1272675a */
  if (!C.zf) goto L_1272675a;
  /* 12726759 int3  */
  x86_unimpl("int3 @ 0x12726759");
L_1272675a:;
  /* 1272675a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272675c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272675e jne 0x1272673a */
  if (!C.zf) goto L_1272673a;
  /* 12726760 jmp 0x12726788 */
  goto L_12726788;
L_12726762:;
  /* 12726762 push 0x1274cc70 */
  push32((uint32_t)(0x1274cc70u));
  /* 12726767 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 1272676c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272676e push 0 */
  push32((uint32_t)(0x0u));
  /* 12726770 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726772 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726774 call 0x12724570 */
  push32(0x12726779u); f_12724570();
  /* 12726779 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272677c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272677f jne 0x12726782 */
  if (!C.zf) goto L_12726782;
  /* 12726781 int3  */
  x86_unimpl("int3 @ 0x12726781");
L_12726782:;
  /* 12726782 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12726784 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12726786 jne 0x12726762 */
  if (!C.zf) goto L_12726762;
L_12726788:;
  /* 12726788 push 9 */
  push32((uint32_t)(0x9u));
  /* 1272678a call 0x12728f50 */
  push32(0x1272678fu); f_12728f50();
  /* 1272678f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726794 jmp 0x127269a8 */
  goto L_127269a8;
L_12726799:;
  /* 12726799 mov eax, dword ptr [0x127516c8] */
  EAX = (r32((uint32_t)(0x127516c8)));
  /* 1272679e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127267a1 jmp 0x127267ab */
  goto L_127267ab;
L_127267a3:;
  /* 127267a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127267a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127267a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127267ab:;
  /* 127267ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127267af je 0x1272699b */
  if (C.zf) goto L_1272699b;
  /* 127267b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 127267bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127267bf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127267c2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127267c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127267cb je 0x127267f0 */
  if (C.zf) goto L_127267f0;
  /* 127267cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127267d0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127267d4 je 0x127267f0 */
  if (C.zf) goto L_127267f0;
  /* 127267d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127267d9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127267dc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127267e2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127267e5 je 0x127267f0 */
  if (C.zf) goto L_127267f0;
  /* 127267e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127267ea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127267ee jne 0x12726808 */
  if (!C.zf) goto L_12726808;
L_127267f0:;
  /* 127267f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127267f3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127267f6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127267fc mov edx, dword ptr [ecx*4 + 0x1274fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1274fa94)));
  /* 12726803 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12726806 jmp 0x1272680f */
  goto L_1272680f;
L_12726808:;
  /* 12726808 mov dword ptr [ebp - 0x14], 0x1274cc68 */
  w32((uint32_t)(EBP + -0x14), (0x1274cc68u));
L_1272680f:;
  /* 1272680f push 4 */
  push32((uint32_t)(0x4u));
  /* 12726811 mov al, byte ptr [0x1274fa90] */
  AL = (r8((uint32_t)(0x1274fa90)));
  /* 12726816 push eax */
  push32((uint32_t)(EAX));
  /* 12726817 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272681a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272681d push ecx */
  push32((uint32_t)(ECX));
  /* 1272681e call 0x127265c0 */
  push32(0x12726823u); f_127265c0();
  /* 12726823 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726826 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726828 jne 0x12726864 */
  if (!C.zf) goto L_12726864;
L_1272682a:;
  /* 1272682a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272682d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12726830 push edx */
  push32((uint32_t)(EDX));
  /* 12726831 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726834 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12726837 push ecx */
  push32((uint32_t)(ECX));
  /* 12726838 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272683b push edx */
  push32((uint32_t)(EDX));
  /* 1272683c push 0x1274cb44 */
  push32((uint32_t)(0x1274cb44u));
  /* 12726841 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726843 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726845 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726847 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726849 call 0x12724570 */
  push32(0x1272684eu); f_12724570();
  /* 1272684e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726851 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726854 jne 0x12726857 */
  if (!C.zf) goto L_12726857;
  /* 12726856 int3  */
  x86_unimpl("int3 @ 0x12726856");
L_12726857:;
  /* 12726857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272685b jne 0x1272682a */
  if (!C.zf) goto L_1272682a;
  /* 1272685d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12726864:;
  /* 12726864 push 4 */
  push32((uint32_t)(0x4u));
  /* 12726866 mov cl, byte ptr [0x1274fa90] */
  CL = (r8((uint32_t)(0x1274fa90)));
  /* 1272686c push ecx */
  push32((uint32_t)(ECX));
  /* 1272686d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726870 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12726873 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726876 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1272687a push edx */
  push32((uint32_t)(EDX));
  /* 1272687b call 0x127265c0 */
  push32(0x12726880u); f_127265c0();
  /* 12726880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726883 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726885 jne 0x127268c1 */
  if (!C.zf) goto L_127268c1;
L_12726887:;
  /* 12726887 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272688a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272688d push eax */
  push32((uint32_t)(EAX));
  /* 1272688e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726891 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12726894 push edx */
  push32((uint32_t)(EDX));
  /* 12726895 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12726898 push eax */
  push32((uint32_t)(EAX));
  /* 12726899 push 0x1274cb18 */
  push32((uint32_t)(0x1274cb18u));
  /* 1272689e push 0 */
  push32((uint32_t)(0x0u));
  /* 127268a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127268a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127268a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127268a6 call 0x12724570 */
  push32(0x127268abu); f_12724570();
  /* 127268ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127268ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127268b1 jne 0x127268b4 */
  if (!C.zf) goto L_127268b4;
  /* 127268b3 int3  */
  x86_unimpl("int3 @ 0x127268b3");
L_127268b4:;
  /* 127268b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127268b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127268b8 jne 0x12726887 */
  if (!C.zf) goto L_12726887;
  /* 127268ba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_127268c1:;
  /* 127268c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127268c4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127268c8 jne 0x1272691a */
  if (!C.zf) goto L_1272691a;
  /* 127268ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127268cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127268d0 push ecx */
  push32((uint32_t)(ECX));
  /* 127268d1 mov dl, byte ptr [0x1274fa91] */
  DL = (r8((uint32_t)(0x1274fa91)));
  /* 127268d7 push edx */
  push32((uint32_t)(EDX));
  /* 127268d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127268db add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127268de push eax */
  push32((uint32_t)(EAX));
  /* 127268df call 0x127265c0 */
  push32(0x127268e4u); f_127265c0();
  /* 127268e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127268e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127268e9 jne 0x1272691a */
  if (!C.zf) goto L_1272691a;
L_127268eb:;
  /* 127268eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127268ee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127268f1 push ecx */
  push32((uint32_t)(ECX));
  /* 127268f2 push 0x1274cc3c */
  push32((uint32_t)(0x1274cc3cu));
  /* 127268f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127268f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127268fb push 0 */
  push32((uint32_t)(0x0u));
  /* 127268fd push 0 */
  push32((uint32_t)(0x0u));
  /* 127268ff call 0x12724570 */
  push32(0x12726904u); f_12724570();
  /* 12726904 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726907 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272690a jne 0x1272690d */
  if (!C.zf) goto L_1272690d;
  /* 1272690c int3  */
  x86_unimpl("int3 @ 0x1272690c");
L_1272690d:;
  /* 1272690d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272690f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12726911 jne 0x127268eb */
  if (!C.zf) goto L_127268eb;
  /* 12726913 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1272691a:;
  /* 1272691a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272691e jne 0x12726996 */
  if (!C.zf) goto L_12726996;
  /* 12726920 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726923 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726927 je 0x1272695c */
  if (C.zf) goto L_1272695c;
L_12726929:;
  /* 12726929 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272692c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1272692f push edx */
  push32((uint32_t)(EDX));
  /* 12726930 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726933 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12726936 push ecx */
  push32((uint32_t)(ECX));
  /* 12726937 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272693a push edx */
  push32((uint32_t)(EDX));
  /* 1272693b push 0x1274cc1c */
  push32((uint32_t)(0x1274cc1cu));
  /* 12726940 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726942 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726944 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726946 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726948 call 0x12724570 */
  push32(0x1272694du); f_12724570();
  /* 1272694d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726950 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726953 jne 0x12726956 */
  if (!C.zf) goto L_12726956;
  /* 12726955 int3  */
  x86_unimpl("int3 @ 0x12726955");
L_12726956:;
  /* 12726956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272695a jne 0x12726929 */
  if (!C.zf) goto L_12726929;
L_1272695c:;
  /* 1272695c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272695f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12726962 push edx */
  push32((uint32_t)(EDX));
  /* 12726963 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726966 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12726969 push eax */
  push32((uint32_t)(EAX));
  /* 1272696a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272696d push ecx */
  push32((uint32_t)(ECX));
  /* 1272696e push 0x1274cbf0 */
  push32((uint32_t)(0x1274cbf0u));
  /* 12726973 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726975 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726977 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726979 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272697b call 0x12724570 */
  push32(0x12726980u); f_12724570();
  /* 12726980 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726983 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726986 jne 0x12726989 */
  if (!C.zf) goto L_12726989;
  /* 12726988 int3  */
  x86_unimpl("int3 @ 0x12726988");
L_12726989:;
  /* 12726989 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272698b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272698d jne 0x1272695c */
  if (!C.zf) goto L_1272695c;
  /* 1272698f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12726996:;
  /* 12726996 jmp 0x127267a3 */
  goto L_127267a3;
L_1272699b:;
  /* 1272699b push 9 */
  push32((uint32_t)(0x9u));
  /* 1272699d call 0x12728f50 */
  push32(0x127269a2u); f_12728f50();
  /* 127269a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127269a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127269a8:;
  /* 127269a8 pop edi */
  EDI = (pop32());
  /* 127269a9 pop esi */
  ESI = (pop32());
  /* 127269aa pop ebx */
  EBX = (pop32());
  /* 127269ab mov esp, ebp */
  ESP = (EBP);
  /* 127269ad pop ebp */
  EBP = (pop32());
  /* 127269ae ret  */
  ESPCHK(0x12726650u, _esp0);
  ESP += 4; return;
}

/* FUN_100069c0 @ 0x127269c0 (34 bytes, 13 insns) */
void f_127269c0(void) {
  FTRACE(0x127269c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127269c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127269c1 mov ebp, esp */
  EBP = (ESP);
  /* 127269c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127269c4 mov eax, dword ptr [0x1274fa84] */
  EAX = (r32((uint32_t)(0x1274fa84)));
  /* 127269c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127269cc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127269d0 je 0x127269db */
  if (C.zf) goto L_127269db;
  /* 127269d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127269d5 mov dword ptr [0x1274fa84], ecx */
  w32((uint32_t)(0x1274fa84), (ECX));
L_127269db:;
  /* 127269db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127269de mov esp, ebp */
  ESP = (EBP);
  /* 127269e0 pop ebp */
  EBP = (pop32());
  /* 127269e1 ret  */
  ESPCHK(0x127269c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x127269f0 (103 bytes, 38 insns) */
void f_127269f0(void) {
  FTRACE(0x127269f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127269f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127269f1 mov ebp, esp */
  EBP = (ESP);
  /* 127269f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127269f4 mov eax, dword ptr [0x1274fa84] */
  EAX = (r32((uint32_t)(0x1274fa84)));
  /* 127269f9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 127269fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127269fe jne 0x12726a02 */
  if (!C.zf) goto L_12726a02;
  /* 12726a00 jmp 0x12726a53 */
  goto L_12726a53;
L_12726a02:;
  /* 12726a02 push 9 */
  push32((uint32_t)(0x9u));
  /* 12726a04 call 0x12728eb0 */
  push32(0x12726a09u); f_12728eb0();
  /* 12726a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726a0c mov ecx, dword ptr [0x127516c8] */
  ECX = (r32((uint32_t)(0x127516c8)));
  /* 12726a12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12726a15 jmp 0x12726a1f */
  goto L_12726a1f;
L_12726a17:;
  /* 12726a17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726a1a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12726a1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12726a1f:;
  /* 12726a1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726a23 je 0x12726a49 */
  if (C.zf) goto L_12726a49;
  /* 12726a25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726a28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12726a2b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12726a31 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726a34 jne 0x12726a47 */
  if (!C.zf) goto L_12726a47;
  /* 12726a36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12726a39 push eax */
  push32((uint32_t)(EAX));
  /* 12726a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726a3d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12726a40 push ecx */
  push32((uint32_t)(ECX));
  /* 12726a41 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12726a44u);
  /* 12726a44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12726a47:;
  /* 12726a47 jmp 0x12726a17 */
  goto L_12726a17;
L_12726a49:;
  /* 12726a49 push 9 */
  push32((uint32_t)(0x9u));
  /* 12726a4b call 0x12728f50 */
  push32(0x12726a50u); f_12728f50();
  /* 12726a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12726a53:;
  /* 12726a53 mov esp, ebp */
  ESP = (EBP);
  /* 12726a55 pop ebp */
  EBP = (pop32());
  /* 12726a56 ret  */
  ESPCHK(0x127269f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12726a60 (75 bytes, 28 insns) */
void f_12726a60(void) {
  FTRACE(0x12726a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12726a61 mov ebp, esp */
  EBP = (ESP);
  /* 12726a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12726a64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726a68 je 0x12726a9d */
  if (C.zf) goto L_12726a9d;
  /* 12726a6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12726a6d push eax */
  push32((uint32_t)(EAX));
  /* 12726a6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726a71 push ecx */
  push32((uint32_t)(ECX));
  /* 12726a72 call dword ptr [0x127543b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b8))), 0x12726a78u);
  /* 12726a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726a7a jne 0x12726a9d */
  if (!C.zf) goto L_12726a9d;
  /* 12726a7c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726a80 je 0x12726a94 */
  if (C.zf) goto L_12726a94;
  /* 12726a82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12726a85 push edx */
  push32((uint32_t)(EDX));
  /* 12726a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726a89 push eax */
  push32((uint32_t)(EAX));
  /* 12726a8a call dword ptr [0x127543b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b4))), 0x12726a90u);
  /* 12726a90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726a92 jne 0x12726a9d */
  if (!C.zf) goto L_12726a9d;
L_12726a94:;
  /* 12726a94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12726a9b jmp 0x12726aa4 */
  goto L_12726aa4;
L_12726a9d:;
  /* 12726a9d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12726aa4:;
  /* 12726aa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726aa7 mov esp, ebp */
  ESP = (EBP);
  /* 12726aa9 pop ebp */
  EBP = (pop32());
  /* 12726aaa ret  */
  ESPCHK(0x12726a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ab0 @ 0x12726ab0 (134 bytes, 50 insns) */
void f_12726ab0(void) {
  FTRACE(0x12726ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12726ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12726ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 12726ab4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726ab8 jne 0x12726abe */
  if (!C.zf) goto L_12726abe;
  /* 12726aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726abc jmp 0x12726b32 */
  goto L_12726b32;
L_12726abe:;
  /* 12726abe push 1 */
  push32((uint32_t)(0x1u));
  /* 12726ac0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12726ac2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726ac5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726ac8 push eax */
  push32((uint32_t)(EAX));
  /* 12726ac9 call 0x12726a60 */
  push32(0x12726aceu); f_12726a60();
  /* 12726ace add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726ad1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726ad3 jne 0x12726ad9 */
  if (!C.zf) goto L_12726ad9;
  /* 12726ad5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726ad7 jmp 0x12726b32 */
  goto L_12726b32;
L_12726ad9:;
  /* 12726ad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726adc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726adf push ecx */
  push32((uint32_t)(ECX));
  /* 12726ae0 call 0x127297b0 */
  push32(0x12726ae5u); f_127297b0();
  /* 12726ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726ae8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12726aeb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726aef je 0x12726b06 */
  if (C.zf) goto L_12726b06;
  /* 12726af1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726af4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726af7 push edx */
  push32((uint32_t)(EDX));
  /* 12726af8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726afb push eax */
  push32((uint32_t)(EAX));
  /* 12726afc call 0x12729810 */
  push32(0x12726b01u); f_12729810();
  /* 12726b01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726b04 jmp 0x12726b32 */
  goto L_12726b32;
L_12726b06:;
  /* 12726b06 mov ecx, dword ptr [0x1275167c] */
  ECX = (r32((uint32_t)(0x1275167c)));
  /* 12726b0c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12726b12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12726b14 je 0x12726b1d */
  if (C.zf) goto L_12726b1d;
  /* 12726b16 mov eax, 1 */
  EAX = (0x1u);
  /* 12726b1b jmp 0x12726b32 */
  goto L_12726b32;
L_12726b1d:;
  /* 12726b1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726b20 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726b23 push edx */
  push32((uint32_t)(EDX));
  /* 12726b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726b26 mov eax, dword ptr [0x1275302c] */
  EAX = (r32((uint32_t)(0x1275302c)));
  /* 12726b2b push eax */
  push32((uint32_t)(EAX));
  /* 12726b2c call dword ptr [0x127543bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543bc))), 0x12726b32u);
L_12726b32:;
  /* 12726b32 mov esp, ebp */
  ESP = (EBP);
  /* 12726b34 pop ebp */
  EBP = (pop32());
  /* 12726b35 ret  */
  ESPCHK(0x12726ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x12726b40 (227 bytes, 80 insns) */
void f_12726b40(void) {
  FTRACE(0x12726b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12726b41 mov ebp, esp */
  EBP = (ESP);
  /* 12726b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12726b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726b47 push eax */
  push32((uint32_t)(EAX));
  /* 12726b48 call 0x12726ab0 */
  push32(0x12726b4du); f_12726ab0();
  /* 12726b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726b50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726b52 jne 0x12726b5b */
  if (!C.zf) goto L_12726b5b;
  /* 12726b54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726b56 jmp 0x12726c1f */
  goto L_12726c1f;
L_12726b5b:;
  /* 12726b5b push 9 */
  push32((uint32_t)(0x9u));
  /* 12726b5d call 0x12728eb0 */
  push32(0x12726b62u); f_12728eb0();
  /* 12726b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726b65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726b68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726b6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12726b6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726b71 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726b74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726b79 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726b7c je 0x12726ba0 */
  if (C.zf) goto L_12726ba0;
  /* 12726b7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726b81 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726b85 je 0x12726ba0 */
  if (C.zf) goto L_12726ba0;
  /* 12726b87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726b8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726b8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726b92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726b95 je 0x12726ba0 */
  if (C.zf) goto L_12726ba0;
  /* 12726b97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726b9a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726b9e jne 0x12726c13 */
  if (!C.zf) goto L_12726c13;
L_12726ba0:;
  /* 12726ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12726ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12726ba5 push edx */
  push32((uint32_t)(EDX));
  /* 12726ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726ba9 push eax */
  push32((uint32_t)(EAX));
  /* 12726baa call 0x12726a60 */
  push32(0x12726bafu); f_12726a60();
  /* 12726baf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726bb4 je 0x12726c13 */
  if (C.zf) goto L_12726c13;
  /* 12726bb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726bb9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12726bbc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726bbf jne 0x12726c13 */
  if (!C.zf) goto L_12726c13;
  /* 12726bc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726bc4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12726bc7 cmp ecx, dword ptr [0x1274fa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1274fa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726bcd jg 0x12726c13 */
  if ((!C.zf&&C.sf==C.of)) goto L_12726c13;
  /* 12726bcf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726bd3 je 0x12726be0 */
  if (C.zf) goto L_12726be0;
  /* 12726bd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12726bd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726bdb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12726bde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12726be0:;
  /* 12726be0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726be4 je 0x12726bf1 */
  if (C.zf) goto L_12726bf1;
  /* 12726be6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12726be9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726bec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12726bef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12726bf1:;
  /* 12726bf1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726bf5 je 0x12726c02 */
  if (C.zf) goto L_12726c02;
  /* 12726bf7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12726bfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726bfd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12726c00 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12726c02:;
  /* 12726c02 push 9 */
  push32((uint32_t)(0x9u));
  /* 12726c04 call 0x12728f50 */
  push32(0x12726c09u); f_12728f50();
  /* 12726c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726c0c mov eax, 1 */
  EAX = (0x1u);
  /* 12726c11 jmp 0x12726c1f */
  goto L_12726c1f;
L_12726c13:;
  /* 12726c13 push 9 */
  push32((uint32_t)(0x9u));
  /* 12726c15 call 0x12728f50 */
  push32(0x12726c1au); f_12728f50();
  /* 12726c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726c1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12726c1f:;
  /* 12726c1f mov esp, ebp */
  ESP = (EBP);
  /* 12726c21 pop ebp */
  EBP = (pop32());
  /* 12726c22 ret  */
  ESPCHK(0x12726b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c30 @ 0x12726c30 (28 bytes, 11 insns) */
void f_12726c30(void) {
  FTRACE(0x12726c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12726c31 mov ebp, esp */
  EBP = (ESP);
  /* 12726c33 push ecx */
  push32((uint32_t)(ECX));
  /* 12726c34 mov eax, dword ptr [0x12753038] */
  EAX = (r32((uint32_t)(0x12753038)));
  /* 12726c39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12726c3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726c3f mov dword ptr [0x12753038], ecx */
  w32((uint32_t)(0x12753038), (ECX));
  /* 12726c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726c48 mov esp, ebp */
  ESP = (EBP);
  /* 12726c4a pop ebp */
  EBP = (pop32());
  /* 12726c4b ret  */
  ESPCHK(0x12726c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c50 @ 0x12726c50 (362 bytes, 116 insns) */
void f_12726c50(void) {
  FTRACE(0x12726c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12726c51 mov ebp, esp */
  EBP = (ESP);
  /* 12726c53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726c56 push ebx */
  push32((uint32_t)(EBX));
  /* 12726c57 push esi */
  push32((uint32_t)(ESI));
  /* 12726c58 push edi */
  push32((uint32_t)(EDI));
  /* 12726c59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726c5d jne 0x12726c8a */
  if (!C.zf) goto L_12726c8a;
L_12726c5f:;
  /* 12726c5f push 0x1274cd50 */
  push32((uint32_t)(0x1274cd50u));
  /* 12726c64 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 12726c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12726c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12726c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12726c71 call 0x12724570 */
  push32(0x12726c76u); f_12724570();
  /* 12726c76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726c7c jne 0x12726c7f */
  if (!C.zf) goto L_12726c7f;
  /* 12726c7e int3  */
  x86_unimpl("int3 @ 0x12726c7e");
L_12726c7f:;
  /* 12726c7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726c81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726c83 jne 0x12726c5f */
  if (!C.zf) goto L_12726c5f;
  /* 12726c85 jmp 0x12726db3 */
  goto L_12726db3;
L_12726c8a:;
  /* 12726c8a push 9 */
  push32((uint32_t)(0x9u));
  /* 12726c8c call 0x12728eb0 */
  push32(0x12726c91u); f_12728eb0();
  /* 12726c91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726c94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726c97 mov edx, dword ptr [0x127516c8] */
  EDX = (r32((uint32_t)(0x127516c8)));
  /* 12726c9d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12726c9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12726ca6 jmp 0x12726cb1 */
  goto L_12726cb1;
L_12726ca8:;
  /* 12726ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726cab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12726cae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12726cb1:;
  /* 12726cb1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726cb5 jge 0x12726cd5 */
  if ((C.sf==C.of)) goto L_12726cd5;
  /* 12726cb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726cbd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12726cc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726cc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726ccb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12726cd3 jmp 0x12726ca8 */
  goto L_12726ca8;
L_12726cd5:;
  /* 12726cd5 mov edx, dword ptr [0x127516c8] */
  EDX = (r32((uint32_t)(0x127516c8)));
  /* 12726cdb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12726cde jmp 0x12726ce8 */
  goto L_12726ce8;
L_12726ce0:;
  /* 12726ce0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726ce3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12726ce5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12726ce8:;
  /* 12726ce8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726cec je 0x12726d91 */
  if (C.zf) goto L_12726d91;
  /* 12726cf2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726cf5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726cf8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726cff jl 0x12726d67 */
  if ((C.sf!=C.of)) goto L_12726d67;
  /* 12726d01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726d04 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12726d07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12726d0d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726d10 jge 0x12726d67 */
  if ((C.sf==C.of)) goto L_12726d67;
  /* 12726d12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726d15 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12726d18 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12726d1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726d21 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12726d25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12726d28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726d2b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12726d2e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12726d34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726d37 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12726d3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726d3e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726d41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726d49 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12726d4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726d50 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12726d53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726d56 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12726d59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726d5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726d61 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12726d65 jmp 0x12726d8c */
  goto L_12726d8c;
L_12726d67:;
  /* 12726d67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726d6a push edx */
  push32((uint32_t)(EDX));
  /* 12726d6b push 0x1274cd2c */
  push32((uint32_t)(0x1274cd2cu));
  /* 12726d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726d78 call 0x12724570 */
  push32(0x12726d7du); f_12724570();
  /* 12726d7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726d80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726d83 jne 0x12726d86 */
  if (!C.zf) goto L_12726d86;
  /* 12726d85 int3  */
  x86_unimpl("int3 @ 0x12726d85");
L_12726d86:;
  /* 12726d86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726d88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726d8a jne 0x12726d67 */
  if (!C.zf) goto L_12726d67;
L_12726d8c:;
  /* 12726d8c jmp 0x12726ce0 */
  goto L_12726ce0;
L_12726d91:;
  /* 12726d91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726d94 mov edx, dword ptr [0x127516d0] */
  EDX = (r32((uint32_t)(0x127516d0)));
  /* 12726d9a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12726d9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726da0 mov ecx, dword ptr [0x127516c4] */
  ECX = (r32((uint32_t)(0x127516c4)));
  /* 12726da6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12726da9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12726dab call 0x12728f50 */
  push32(0x12726db0u); f_12728f50();
  /* 12726db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12726db3:;
  /* 12726db3 pop edi */
  EDI = (pop32());
  /* 12726db4 pop esi */
  ESI = (pop32());
  /* 12726db5 pop ebx */
  EBX = (pop32());
  /* 12726db6 mov esp, ebp */
  ESP = (EBP);
  /* 12726db8 pop ebp */
  EBP = (pop32());
  /* 12726db9 ret  */
  ESPCHK(0x12726c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x12726dc0 (291 bytes, 95 insns) */
void f_12726dc0(void) {
  FTRACE(0x12726dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12726dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12726dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 12726dc7 push esi */
  push32((uint32_t)(ESI));
  /* 12726dc8 push edi */
  push32((uint32_t)(EDI));
  /* 12726dc9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12726dd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726dd4 je 0x12726de2 */
  if (C.zf) goto L_12726de2;
  /* 12726dd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726dda je 0x12726de2 */
  if (C.zf) goto L_12726de2;
  /* 12726ddc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726de0 jne 0x12726e10 */
  if (!C.zf) goto L_12726e10;
L_12726de2:;
  /* 12726de2 push 0x1274cd78 */
  push32((uint32_t)(0x1274cd78u));
  /* 12726de7 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 12726dec push 0 */
  push32((uint32_t)(0x0u));
  /* 12726dee push 0 */
  push32((uint32_t)(0x0u));
  /* 12726df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726df2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726df4 call 0x12724570 */
  push32(0x12726df9u); f_12724570();
  /* 12726df9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726dfc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726dff jne 0x12726e02 */
  if (!C.zf) goto L_12726e02;
  /* 12726e01 int3  */
  x86_unimpl("int3 @ 0x12726e01");
L_12726e02:;
  /* 12726e02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726e06 jne 0x12726de2 */
  if (!C.zf) goto L_12726de2;
  /* 12726e08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12726e0b jmp 0x12726edc */
  goto L_12726edc;
L_12726e10:;
  /* 12726e10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12726e17 jmp 0x12726e22 */
  goto L_12726e22;
L_12726e19:;
  /* 12726e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726e1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12726e1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12726e22:;
  /* 12726e22 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726e26 jge 0x12726eac */
  if ((C.sf==C.of)) goto L_12726eac;
  /* 12726e2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726e2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12726e32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726e35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12726e38 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12726e3c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726e40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726e46 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12726e4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726e4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12726e50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726e53 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12726e56 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12726e5a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726e61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726e64 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12726e68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726e6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726e6e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726e73 jne 0x12726e82 */
  if (!C.zf) goto L_12726e82;
  /* 12726e75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726e78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726e7b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726e80 je 0x12726ea7 */
  if (C.zf) goto L_12726ea7;
L_12726e82:;
  /* 12726e82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726e86 je 0x12726ea7 */
  if (C.zf) goto L_12726ea7;
  /* 12726e88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726e8c jne 0x12726ea0 */
  if (!C.zf) goto L_12726ea0;
  /* 12726e8e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726e92 jne 0x12726ea7 */
  if (!C.zf) goto L_12726ea7;
  /* 12726e94 mov eax, dword ptr [0x1274fa84] */
  EAX = (r32((uint32_t)(0x1274fa84)));
  /* 12726e99 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12726e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726e9e je 0x12726ea7 */
  if (C.zf) goto L_12726ea7;
L_12726ea0:;
  /* 12726ea0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12726ea7:;
  /* 12726ea7 jmp 0x12726e19 */
  goto L_12726e19;
L_12726eac:;
  /* 12726eac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12726eaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12726eb2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12726eb5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726eb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726ebb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12726ebe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12726ec1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12726ec4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12726ec7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726ecd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12726ed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726ed3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12726ed9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12726edc:;
  /* 12726edc pop edi */
  EDI = (pop32());
  /* 12726edd pop esi */
  ESI = (pop32());
  /* 12726ede pop ebx */
  EBX = (pop32());
  /* 12726edf mov esp, ebp */
  ESP = (EBP);
  /* 12726ee1 pop ebp */
  EBP = (pop32());
  /* 12726ee2 ret  */
  ESPCHK(0x12726dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x12726ef0 (697 bytes, 253 insns) */
void f_12726ef0(void) {
  FTRACE(0x12726ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12726ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12726ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12726ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12726ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 12726ef7 push esi */
  push32((uint32_t)(ESI));
  /* 12726ef8 push edi */
  push32((uint32_t)(EDI));
  /* 12726ef9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12726f00 push 9 */
  push32((uint32_t)(0x9u));
  /* 12726f02 call 0x12728eb0 */
  push32(0x12726f07u); f_12728eb0();
  /* 12726f07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12726f0a:;
  /* 12726f0a push 0x1274ce70 */
  push32((uint32_t)(0x1274ce70u));
  /* 12726f0f push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 12726f14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12726f1c call 0x12724570 */
  push32(0x12726f21u); f_12724570();
  /* 12726f21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726f24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726f27 jne 0x12726f2a */
  if (!C.zf) goto L_12726f2a;
  /* 12726f29 int3  */
  x86_unimpl("int3 @ 0x12726f29");
L_12726f2a:;
  /* 12726f2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12726f2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726f2e jne 0x12726f0a */
  if (!C.zf) goto L_12726f0a;
  /* 12726f30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726f34 je 0x12726f3e */
  if (C.zf) goto L_12726f3e;
  /* 12726f36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12726f39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12726f3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12726f3e:;
  /* 12726f3e mov eax, dword ptr [0x127516c8] */
  EAX = (r32((uint32_t)(0x127516c8)));
  /* 12726f43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12726f46 jmp 0x12726f50 */
  goto L_12726f50;
L_12726f48:;
  /* 12726f48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726f4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12726f4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12726f50:;
  /* 12726f50 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726f54 je 0x12727172 */
  if (C.zf) goto L_12727172;
  /* 12726f5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726f5d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726f60 je 0x12727172 */
  if (C.zf) goto L_12727172;
  /* 12726f66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726f69 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12726f6c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12726f72 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726f75 je 0x12726fa4 */
  if (C.zf) goto L_12726fa4;
  /* 12726f77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726f7a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12726f7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12726f83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12726f85 je 0x12726fa4 */
  if (C.zf) goto L_12726fa4;
  /* 12726f87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726f8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12726f8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12726f92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726f95 jne 0x12726fa9 */
  if (!C.zf) goto L_12726fa9;
  /* 12726f97 mov ecx, dword ptr [0x1274fa84] */
  ECX = (r32((uint32_t)(0x1274fa84)));
  /* 12726f9d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12726fa0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12726fa2 jne 0x12726fa9 */
  if (!C.zf) goto L_12726fa9;
L_12726fa4:;
  /* 12726fa4 jmp 0x1272716d */
  goto L_1272716d;
L_12726fa9:;
  /* 12726fa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726fac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726fb0 je 0x12727022 */
  if (C.zf) goto L_12727022;
  /* 12726fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726fb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12726fb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726fb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12726fbc push ecx */
  push32((uint32_t)(ECX));
  /* 12726fbd call 0x12726a60 */
  push32(0x12726fc2u); f_12726a60();
  /* 12726fc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726fc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12726fc7 jne 0x12726ff3 */
  if (!C.zf) goto L_12726ff3;
L_12726fc9:;
  /* 12726fc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726fcc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12726fcf push eax */
  push32((uint32_t)(EAX));
  /* 12726fd0 push 0x1274ce5c */
  push32((uint32_t)(0x1274ce5cu));
  /* 12726fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12726fdb push 0 */
  push32((uint32_t)(0x0u));
  /* 12726fdd call 0x12724570 */
  push32(0x12726fe2u); f_12724570();
  /* 12726fe2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12726fe5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12726fe8 jne 0x12726feb */
  if (!C.zf) goto L_12726feb;
  /* 12726fea int3  */
  x86_unimpl("int3 @ 0x12726fea");
L_12726feb:;
  /* 12726feb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12726fed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12726fef jne 0x12726fc9 */
  if (!C.zf) goto L_12726fc9;
  /* 12726ff1 jmp 0x12727022 */
  goto L_12727022;
L_12726ff3:;
  /* 12726ff3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726ff6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12726ff9 push eax */
  push32((uint32_t)(EAX));
  /* 12726ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12726ffd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12727000 push edx */
  push32((uint32_t)(EDX));
  /* 12727001 push 0x1274ce50 */
  push32((uint32_t)(0x1274ce50u));
  /* 12727006 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727008 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272700a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272700c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272700e call 0x12724570 */
  push32(0x12727013u); f_12724570();
  /* 12727013 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727016 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727019 jne 0x1272701c */
  if (!C.zf) goto L_1272701c;
  /* 1272701b int3  */
  x86_unimpl("int3 @ 0x1272701b");
L_1272701c:;
  /* 1272701c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272701e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12727020 jne 0x12726ff3 */
  if (!C.zf) goto L_12726ff3;
L_12727022:;
  /* 12727022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727025 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12727028 push edx */
  push32((uint32_t)(EDX));
  /* 12727029 push 0x1274ce48 */
  push32((uint32_t)(0x1274ce48u));
  /* 1272702e push 0 */
  push32((uint32_t)(0x0u));
  /* 12727030 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727032 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727034 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727036 call 0x12724570 */
  push32(0x1272703bu); f_12724570();
  /* 1272703b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272703e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727041 jne 0x12727044 */
  if (!C.zf) goto L_12727044;
  /* 12727043 int3  */
  x86_unimpl("int3 @ 0x12727043");
L_12727044:;
  /* 12727044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12727046 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12727048 jne 0x12727022 */
  if (!C.zf) goto L_12727022;
  /* 1272704a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272704d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12727050 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12727056 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727059 jne 0x127270cc */
  if (!C.zf) goto L_127270cc;
L_1272705b:;
  /* 1272705b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272705e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12727061 push ecx */
  push32((uint32_t)(ECX));
  /* 12727062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727065 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12727068 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1272706b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12727070 push eax */
  push32((uint32_t)(EAX));
  /* 12727071 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727074 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727077 push ecx */
  push32((uint32_t)(ECX));
  /* 12727078 push 0x1274ce14 */
  push32((uint32_t)(0x1274ce14u));
  /* 1272707d push 0 */
  push32((uint32_t)(0x0u));
  /* 1272707f push 0 */
  push32((uint32_t)(0x0u));
  /* 12727081 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727083 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727085 call 0x12724570 */
  push32(0x1272708au); f_12724570();
  /* 1272708a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272708d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727090 jne 0x12727093 */
  if (!C.zf) goto L_12727093;
  /* 12727092 int3  */
  x86_unimpl("int3 @ 0x12727092");
L_12727093:;
  /* 12727093 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12727095 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12727097 jne 0x1272705b */
  if (!C.zf) goto L_1272705b;
  /* 12727099 cmp dword ptr [0x12753038], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12753038))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127270a0 je 0x127270bb */
  if (C.zf) goto L_127270bb;
  /* 127270a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127270a5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127270a8 push ecx */
  push32((uint32_t)(ECX));
  /* 127270a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127270ac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127270af push edx */
  push32((uint32_t)(EDX));
  /* 127270b0 call dword ptr [0x12753038] */
  call_ind((uint32_t)(r32((uint32_t)(0x12753038))), 0x127270b6u);
  /* 127270b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127270b9 jmp 0x127270c7 */
  goto L_127270c7;
L_127270bb:;
  /* 127270bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127270be push eax */
  push32((uint32_t)(EAX));
  /* 127270bf call 0x127271b0 */
  push32(0x127270c4u); f_127271b0();
  /* 127270c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127270c7:;
  /* 127270c7 jmp 0x1272716d */
  goto L_1272716d;
L_127270cc:;
  /* 127270cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127270cf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127270d3 jne 0x12727112 */
  if (!C.zf) goto L_12727112;
L_127270d5:;
  /* 127270d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127270d8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127270db push eax */
  push32((uint32_t)(EAX));
  /* 127270dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127270df add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127270e2 push ecx */
  push32((uint32_t)(ECX));
  /* 127270e3 push 0x1274cdec */
  push32((uint32_t)(0x1274cdecu));
  /* 127270e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127270ea push 0 */
  push32((uint32_t)(0x0u));
  /* 127270ec push 0 */
  push32((uint32_t)(0x0u));
  /* 127270ee push 0 */
  push32((uint32_t)(0x0u));
  /* 127270f0 call 0x12724570 */
  push32(0x127270f5u); f_12724570();
  /* 127270f5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127270f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127270fb jne 0x127270fe */
  if (!C.zf) goto L_127270fe;
  /* 127270fd int3  */
  x86_unimpl("int3 @ 0x127270fd");
L_127270fe:;
  /* 127270fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12727100 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12727102 jne 0x127270d5 */
  if (!C.zf) goto L_127270d5;
  /* 12727104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727107 push eax */
  push32((uint32_t)(EAX));
  /* 12727108 call 0x127271b0 */
  push32(0x1272710du); f_127271b0();
  /* 1272710d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727110 jmp 0x1272716d */
  goto L_1272716d;
L_12727112:;
  /* 12727112 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727115 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12727118 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1272711e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727121 jne 0x1272716d */
  if (!C.zf) goto L_1272716d;
L_12727123:;
  /* 12727123 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727126 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12727129 push ecx */
  push32((uint32_t)(ECX));
  /* 1272712a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272712d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12727130 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12727133 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12727138 push eax */
  push32((uint32_t)(EAX));
  /* 12727139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272713c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272713f push ecx */
  push32((uint32_t)(ECX));
  /* 12727140 push 0x1274cdb8 */
  push32((uint32_t)(0x1274cdb8u));
  /* 12727145 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727147 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272714b push 0 */
  push32((uint32_t)(0x0u));
  /* 1272714d call 0x12724570 */
  push32(0x12727152u); f_12724570();
  /* 12727152 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727155 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727158 jne 0x1272715b */
  if (!C.zf) goto L_1272715b;
  /* 1272715a int3  */
  x86_unimpl("int3 @ 0x1272715a");
L_1272715b:;
  /* 1272715b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272715d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272715f jne 0x12727123 */
  if (!C.zf) goto L_12727123;
  /* 12727161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727164 push eax */
  push32((uint32_t)(EAX));
  /* 12727165 call 0x127271b0 */
  push32(0x1272716au); f_127271b0();
  /* 1272716a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272716d:;
  /* 1272716d jmp 0x12726f48 */
  goto L_12726f48;
L_12727172:;
  /* 12727172 push 9 */
  push32((uint32_t)(0x9u));
  /* 12727174 call 0x12728f50 */
  push32(0x12727179u); f_12728f50();
  /* 12727179 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272717c:;
  /* 1272717c push 0x1274cda0 */
  push32((uint32_t)(0x1274cda0u));
  /* 12727181 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 12727186 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1272718a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272718c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272718e call 0x12724570 */
  push32(0x12727193u); f_12724570();
  /* 12727193 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727196 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727199 jne 0x1272719c */
  if (!C.zf) goto L_1272719c;
  /* 1272719b int3  */
  x86_unimpl("int3 @ 0x1272719b");
L_1272719c:;
  /* 1272719c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1272719e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127271a0 jne 0x1272717c */
  if (!C.zf) goto L_1272717c;
  /* 127271a2 pop edi */
  EDI = (pop32());
  /* 127271a3 pop esi */
  ESI = (pop32());
  /* 127271a4 pop ebx */
  EBX = (pop32());
  /* 127271a5 mov esp, ebp */
  ESP = (EBP);
  /* 127271a7 pop ebp */
  EBP = (pop32());
  /* 127271a8 ret  */
  ESPCHK(0x12726ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071b0 @ 0x127271b0 (276 bytes, 89 insns) */
void f_127271b0(void) {
  FTRACE(0x127271b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127271b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127271b1 mov ebp, esp */
  EBP = (ESP);
  /* 127271b3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127271b6 push ebx */
  push32((uint32_t)(EBX));
  /* 127271b7 push esi */
  push32((uint32_t)(ESI));
  /* 127271b8 push edi */
  push32((uint32_t)(EDI));
  /* 127271b9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 127271c0 jmp 0x127271cb */
  goto L_127271cb;
L_127271c2:;
  /* 127271c2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 127271c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127271c8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_127271cb:;
  /* 127271cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127271ce cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127271d2 jge 0x127271df */
  if ((C.sf==C.of)) goto L_127271df;
  /* 127271d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127271d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127271da mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 127271dd jmp 0x127271e6 */
  goto L_127271e6;
L_127271df:;
  /* 127271df mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_127271e6:;
  /* 127271e6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 127271e9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127271ec jge 0x1272728c */
  if ((C.sf==C.of)) goto L_1272728c;
  /* 127271f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127271f5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127271f8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 127271fb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 127271fe cmp dword ptr [0x1274fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1274fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727205 jle 0x12727223 */
  if ((C.zf||C.sf!=C.of)) goto L_12727223;
  /* 12727207 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1272720c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1272720f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12727215 push ecx */
  push32((uint32_t)(ECX));
  /* 12727216 call 0x1272b4c0 */
  push32(0x1272721bu); f_1272b4c0();
  /* 1272721b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272721e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12727221 jmp 0x12727240 */
  goto L_12727240;
L_12727223:;
  /* 12727223 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12727226 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1272722c mov eax, dword ptr [0x1274fc98] */
  EAX = (r32((uint32_t)(0x1274fc98)));
  /* 12727231 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12727233 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12727237 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1272723d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12727240:;
  /* 12727240 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727244 je 0x12727254 */
  if (C.zf) goto L_12727254;
  /* 12727246 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12727249 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1272724f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12727252 jmp 0x1272725b */
  goto L_1272725b;
L_12727254:;
  /* 12727254 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1272725b:;
  /* 1272725b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1272725e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12727261 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12727265 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12727268 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1272726e push edx */
  push32((uint32_t)(EDX));
  /* 1272726f push 0x1274ce94 */
  push32((uint32_t)(0x1274ce94u));
  /* 12727274 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12727277 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272727a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1272727e push ecx */
  push32((uint32_t)(ECX));
  /* 1272727f call 0x1272b3c0 */
  push32(0x12727284u); f_1272b3c0();
  /* 12727284 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727287 jmp 0x127271c2 */
  goto L_127271c2;
L_1272728c:;
  /* 1272728c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1272728f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12727294:;
  /* 12727294 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12727297 push eax */
  push32((uint32_t)(EAX));
  /* 12727298 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1272729b push ecx */
  push32((uint32_t)(ECX));
  /* 1272729c push 0x1274ce84 */
  push32((uint32_t)(0x1274ce84u));
  /* 127272a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127272a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127272a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127272a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127272a9 call 0x12724570 */
  push32(0x127272aeu); f_12724570();
  /* 127272ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127272b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127272b4 jne 0x127272b7 */
  if (!C.zf) goto L_127272b7;
  /* 127272b6 int3  */
  x86_unimpl("int3 @ 0x127272b6");
L_127272b7:;
  /* 127272b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127272b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127272bb jne 0x12727294 */
  if (!C.zf) goto L_12727294;
  /* 127272bd pop edi */
  EDI = (pop32());
  /* 127272be pop esi */
  ESI = (pop32());
  /* 127272bf pop ebx */
  EBX = (pop32());
  /* 127272c0 mov esp, ebp */
  ESP = (EBP);
  /* 127272c2 pop ebp */
  EBP = (pop32());
  /* 127272c3 ret  */
  ESPCHK(0x127271b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x127272d0 (116 bytes, 46 insns) */
void f_127272d0(void) {
  FTRACE(0x127272d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127272d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127272d1 mov ebp, esp */
  EBP = (ESP);
  /* 127272d3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127272d6 push ebx */
  push32((uint32_t)(EBX));
  /* 127272d7 push esi */
  push32((uint32_t)(ESI));
  /* 127272d8 push edi */
  push32((uint32_t)(EDI));
  /* 127272d9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 127272dc push eax */
  push32((uint32_t)(EAX));
  /* 127272dd call 0x12726c50 */
  push32(0x127272e2u); f_12726c50();
  /* 127272e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127272e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127272e9 jne 0x12727304 */
  if (!C.zf) goto L_12727304;
  /* 127272eb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127272ef jne 0x12727304 */
  if (!C.zf) goto L_12727304;
  /* 127272f1 mov ecx, dword ptr [0x1274fa84] */
  ECX = (r32((uint32_t)(0x1274fa84)));
  /* 127272f7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 127272fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127272fc je 0x1272733b */
  if (C.zf) goto L_1272733b;
  /* 127272fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727302 je 0x1272733b */
  if (C.zf) goto L_1272733b;
L_12727304:;
  /* 12727304 push 0x1274ce9c */
  push32((uint32_t)(0x1274ce9cu));
  /* 12727309 push 0x1274c868 */
  push32((uint32_t)(0x1274c868u));
  /* 1272730e push 0 */
  push32((uint32_t)(0x0u));
  /* 12727310 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727312 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727314 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727316 call 0x12724570 */
  push32(0x1272731bu); f_12724570();
  /* 1272731b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272731e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727321 jne 0x12727324 */
  if (!C.zf) goto L_12727324;
  /* 12727323 int3  */
  x86_unimpl("int3 @ 0x12727323");
L_12727324:;
  /* 12727324 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12727326 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12727328 jne 0x12727304 */
  if (!C.zf) goto L_12727304;
  /* 1272732a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272732c call 0x12726ef0 */
  push32(0x12727331u); f_12726ef0();
  /* 12727331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727334 mov eax, 1 */
  EAX = (0x1u);
  /* 12727339 jmp 0x1272733d */
  goto L_1272733d;
L_1272733b:;
  /* 1272733b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1272733d:;
  /* 1272733d pop edi */
  EDI = (pop32());
  /* 1272733e pop esi */
  ESI = (pop32());
  /* 1272733f pop ebx */
  EBX = (pop32());
  /* 12727340 mov esp, ebp */
  ESP = (EBP);
  /* 12727342 pop ebp */
  EBP = (pop32());
  /* 12727343 ret  */
  ESPCHK(0x127272d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007350 @ 0x12727350 (197 bytes, 79 insns) */
void f_12727350(void) {
  FTRACE(0x12727350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727350 push ebp */
  push32((uint32_t)(EBP));
  /* 12727351 mov ebp, esp */
  EBP = (ESP);
  /* 12727353 push ecx */
  push32((uint32_t)(ECX));
  /* 12727354 push ebx */
  push32((uint32_t)(EBX));
  /* 12727355 push esi */
  push32((uint32_t)(ESI));
  /* 12727356 push edi */
  push32((uint32_t)(EDI));
  /* 12727357 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272735b jne 0x12727362 */
  if (!C.zf) goto L_12727362;
  /* 1272735d jmp 0x1272740e */
  goto L_1272740e;
L_12727362:;
  /* 12727362 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12727369 jmp 0x12727374 */
  goto L_12727374;
L_1272736b:;
  /* 1272736b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272736e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727371 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12727374:;
  /* 12727374 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727378 jge 0x127273be */
  if ((C.sf==C.of)) goto L_127273be;
L_1272737a:;
  /* 1272737a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272737d mov edx, dword ptr [ecx*4 + 0x1274fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1274fa94)));
  /* 12727384 push edx */
  push32((uint32_t)(EDX));
  /* 12727385 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727388 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272738b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1272738f push edx */
  push32((uint32_t)(EDX));
  /* 12727390 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727393 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12727396 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1272739a push edx */
  push32((uint32_t)(EDX));
  /* 1272739b push 0x1274cef8 */
  push32((uint32_t)(0x1274cef8u));
  /* 127273a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127273a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127273a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127273a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127273a8 call 0x12724570 */
  push32(0x127273adu); f_12724570();
  /* 127273ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127273b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127273b3 jne 0x127273b6 */
  if (!C.zf) goto L_127273b6;
  /* 127273b5 int3  */
  x86_unimpl("int3 @ 0x127273b5");
L_127273b6:;
  /* 127273b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127273b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127273ba jne 0x1272737a */
  if (!C.zf) goto L_1272737a;
  /* 127273bc jmp 0x1272736b */
  goto L_1272736b;
L_127273be:;
  /* 127273be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127273c1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 127273c4 push edx */
  push32((uint32_t)(EDX));
  /* 127273c5 push 0x1274ced4 */
  push32((uint32_t)(0x1274ced4u));
  /* 127273ca push 0 */
  push32((uint32_t)(0x0u));
  /* 127273cc push 0 */
  push32((uint32_t)(0x0u));
  /* 127273ce push 0 */
  push32((uint32_t)(0x0u));
  /* 127273d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127273d2 call 0x12724570 */
  push32(0x127273d7u); f_12724570();
  /* 127273d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127273da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127273dd jne 0x127273e0 */
  if (!C.zf) goto L_127273e0;
  /* 127273df int3  */
  x86_unimpl("int3 @ 0x127273df");
L_127273e0:;
  /* 127273e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127273e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127273e4 jne 0x127273be */
  if (!C.zf) goto L_127273be;
L_127273e6:;
  /* 127273e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127273e9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 127273ec push edx */
  push32((uint32_t)(EDX));
  /* 127273ed push 0x1274ceb4 */
  push32((uint32_t)(0x1274ceb4u));
  /* 127273f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127273f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127273f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127273f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127273fa call 0x12724570 */
  push32(0x127273ffu); f_12724570();
  /* 127273ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727402 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727405 jne 0x12727408 */
  if (!C.zf) goto L_12727408;
  /* 12727407 int3  */
  x86_unimpl("int3 @ 0x12727407");
L_12727408:;
  /* 12727408 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272740a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272740c jne 0x127273e6 */
  if (!C.zf) goto L_127273e6;
L_1272740e:;
  /* 1272740e pop edi */
  EDI = (pop32());
  /* 1272740f pop esi */
  ESI = (pop32());
  /* 12727410 pop ebx */
  EBX = (pop32());
  /* 12727411 mov esp, ebp */
  ESP = (EBP);
  /* 12727413 pop ebp */
  EBP = (pop32());
  /* 12727414 ret  */
  ESPCHK(0x12727350u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x12727420 (329 bytes, 102 insns) */
void f_12727420(void) {
  FTRACE(0x12727420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727420 push ebp */
  push32((uint32_t)(EBP));
  /* 12727421 mov ebp, esp */
  EBP = (ESP);
  /* 12727423 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727426 cmp dword ptr [0x127531b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127531b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272742d jne 0x12727434 */
  if (!C.zf) goto L_12727434;
  /* 1272742f call 0x1272bd60 */
  push32(0x12727434u); f_1272bd60();
L_12727434:;
  /* 12727434 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1272743b mov eax, dword ptr [0x12751664] */
  EAX = (r32((uint32_t)(0x12751664)));
  /* 12727440 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12727443:;
  /* 12727443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727446 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12727449 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272744b je 0x12727479 */
  if (C.zf) goto L_12727479;
  /* 1272744d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727450 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12727453 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727456 je 0x12727461 */
  if (C.zf) goto L_12727461;
  /* 12727458 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272745b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272745e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12727461:;
  /* 12727461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727464 push eax */
  push32((uint32_t)(EAX));
  /* 12727465 call 0x127282e0 */
  push32(0x1272746au); f_127282e0();
  /* 1272746a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272746d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727470 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12727474 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12727477 jmp 0x12727443 */
  goto L_12727443;
L_12727479:;
  /* 12727479 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1272747b push 0x1274cf18 */
  push32((uint32_t)(0x1274cf18u));
  /* 12727480 push 2 */
  push32((uint32_t)(0x2u));
  /* 12727482 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727485 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1272748c push ecx */
  push32((uint32_t)(ECX));
  /* 1272748d call 0x127254b0 */
  push32(0x12727492u); f_127254b0();
  /* 12727492 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727495 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12727498 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272749b mov dword ptr [0x12751698], edx */
  w32((uint32_t)(0x12751698), (EDX));
  /* 127274a1 cmp dword ptr [0x12751698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127274a8 jne 0x127274b4 */
  if (!C.zf) goto L_127274b4;
  /* 127274aa push 9 */
  push32((uint32_t)(0x9u));
  /* 127274ac call 0x12724420 */
  push32(0x127274b1u); f_12724420();
  /* 127274b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127274b4:;
  /* 127274b4 mov eax, dword ptr [0x12751664] */
  EAX = (r32((uint32_t)(0x12751664)));
  /* 127274b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127274bc jmp 0x127274c7 */
  goto L_127274c7;
L_127274be:;
  /* 127274be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127274c1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127274c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127274c7:;
  /* 127274c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127274ca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127274cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127274cf je 0x12727537 */
  if (C.zf) goto L_12727537;
  /* 127274d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127274d4 push ecx */
  push32((uint32_t)(ECX));
  /* 127274d5 call 0x127282e0 */
  push32(0x127274dau); f_127282e0();
  /* 127274da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127274dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127274e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127274e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127274e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127274e9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127274ec je 0x12727535 */
  if (C.zf) goto L_12727535;
  /* 127274ee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 127274f0 push 0x1274cf18 */
  push32((uint32_t)(0x1274cf18u));
  /* 127274f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127274f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127274fa push ecx */
  push32((uint32_t)(ECX));
  /* 127274fb call 0x127254b0 */
  push32(0x12727500u); f_127254b0();
  /* 12727500 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727503 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727506 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12727508 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272750b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272750e jne 0x1272751a */
  if (!C.zf) goto L_1272751a;
  /* 12727510 push 9 */
  push32((uint32_t)(0x9u));
  /* 12727512 call 0x12724420 */
  push32(0x12727517u); f_12724420();
  /* 12727517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272751a:;
  /* 1272751a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272751d push ecx */
  push32((uint32_t)(ECX));
  /* 1272751e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727521 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12727523 push eax */
  push32((uint32_t)(EAX));
  /* 12727524 call 0x12728460 */
  push32(0x12727529u); f_12728460();
  /* 12727529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272752c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272752f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727532 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12727535:;
  /* 12727535 jmp 0x127274be */
  goto L_127274be;
L_12727537:;
  /* 12727537 push 2 */
  push32((uint32_t)(0x2u));
  /* 12727539 mov edx, dword ptr [0x12751664] */
  EDX = (r32((uint32_t)(0x12751664)));
  /* 1272753f push edx */
  push32((uint32_t)(EDX));
  /* 12727540 call 0x12725f40 */
  push32(0x12727545u); f_12725f40();
  /* 12727545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727548 mov dword ptr [0x12751664], 0 */
  w32((uint32_t)(0x12751664), (0x0u));
  /* 12727552 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727555 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272755b mov dword ptr [0x127531a0], 1 */
  w32((uint32_t)(0x127531a0), (0x1u));
  /* 12727565 mov esp, ebp */
  ESP = (EBP);
  /* 12727567 pop ebp */
  EBP = (pop32());
  /* 12727568 ret  */
  ESPCHK(0x12727420u, _esp0);
  ESP += 4; return;
}

/* FUN_10007570 @ 0x12727570 (216 bytes, 69 insns) */
void f_12727570(void) {
  FTRACE(0x12727570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727570 push ebp */
  push32((uint32_t)(EBP));
  /* 12727571 mov ebp, esp */
  EBP = (ESP);
  /* 12727573 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727576 cmp dword ptr [0x127531b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127531b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272757d jne 0x12727584 */
  if (!C.zf) goto L_12727584;
  /* 1272757f call 0x1272bd60 */
  push32(0x12727584u); f_1272bd60();
L_12727584:;
  /* 12727584 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12727589 push 0x127516d4 */
  push32((uint32_t)(0x127516d4u));
  /* 1272758e push 0 */
  push32((uint32_t)(0x0u));
  /* 12727590 call dword ptr [0x12754378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754378))), 0x12727596u);
  /* 12727596 mov dword ptr [0x127516a8], 0x127516d4 */
  w32((uint32_t)(0x127516a8), (0x127516d4u));
  /* 127275a0 mov eax, dword ptr [0x127531cc] */
  EAX = (r32((uint32_t)(0x127531cc)));
  /* 127275a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127275a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127275aa jne 0x127275b7 */
  if (!C.zf) goto L_127275b7;
  /* 127275ac mov edx, dword ptr [0x127516a8] */
  EDX = (r32((uint32_t)(0x127516a8)));
  /* 127275b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127275b5 jmp 0x127275bf */
  goto L_127275bf;
L_127275b7:;
  /* 127275b7 mov eax, dword ptr [0x127531cc] */
  EAX = (r32((uint32_t)(0x127531cc)));
  /* 127275bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_127275bf:;
  /* 127275bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127275c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127275c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 127275c8 push edx */
  push32((uint32_t)(EDX));
  /* 127275c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 127275cc push eax */
  push32((uint32_t)(EAX));
  /* 127275cd push 0 */
  push32((uint32_t)(0x0u));
  /* 127275cf push 0 */
  push32((uint32_t)(0x0u));
  /* 127275d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127275d4 push ecx */
  push32((uint32_t)(ECX));
  /* 127275d5 call 0x12727650 */
  push32(0x127275dau); f_12727650();
  /* 127275da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127275dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 127275e2 push 0x1274cf24 */
  push32((uint32_t)(0x1274cf24u));
  /* 127275e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127275e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127275ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127275ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 127275f2 push ecx */
  push32((uint32_t)(ECX));
  /* 127275f3 call 0x127254b0 */
  push32(0x127275f8u); f_127254b0();
  /* 127275f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127275fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127275fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727602 jne 0x1272760e */
  if (!C.zf) goto L_1272760e;
  /* 12727604 push 8 */
  push32((uint32_t)(0x8u));
  /* 12727606 call 0x12724420 */
  push32(0x1272760bu); f_12724420();
  /* 1272760b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272760e:;
  /* 1272760e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12727611 push edx */
  push32((uint32_t)(EDX));
  /* 12727612 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12727615 push eax */
  push32((uint32_t)(EAX));
  /* 12727616 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727619 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272761c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1272761f push eax */
  push32((uint32_t)(EAX));
  /* 12727620 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727623 push ecx */
  push32((uint32_t)(ECX));
  /* 12727624 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12727627 push edx */
  push32((uint32_t)(EDX));
  /* 12727628 call 0x12727650 */
  push32(0x1272762du); f_12727650();
  /* 1272762d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727630 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727633 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727636 mov dword ptr [0x1275168c], eax */
  w32((uint32_t)(0x1275168c), (EAX));
  /* 1272763b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272763e mov dword ptr [0x12751690], ecx */
  w32((uint32_t)(0x12751690), (ECX));
  /* 12727644 mov esp, ebp */
  ESP = (EBP);
  /* 12727646 pop ebp */
  EBP = (pop32());
  /* 12727647 ret  */
  ESPCHK(0x12727570u, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x12727650 (1060 bytes, 360 insns) */
void f_12727650(void) {
  FTRACE(0x12727650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727650 push ebp */
  push32((uint32_t)(EBP));
  /* 12727651 mov ebp, esp */
  EBP = (ESP);
  /* 12727653 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727656 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727659 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1272765f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12727662 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12727668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272766b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272766e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727672 je 0x12727685 */
  if (C.zf) goto L_12727685;
  /* 12727674 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12727677 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272767a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1272767c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272767f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727682 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12727685:;
  /* 12727685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727688 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272768b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272768e jne 0x1272775d */
  if (!C.zf) goto L_1272775d;
L_12727694:;
  /* 12727694 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727697 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272769a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272769d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127276a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127276a3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127276a6 je 0x12727722 */
  if (C.zf) goto L_12727722;
  /* 127276a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127276ab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127276ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127276b0 je 0x12727722 */
  if (C.zf) goto L_12727722;
  /* 127276b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127276b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127276b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127276b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127276bb mov al, byte ptr [edx + 0x12752f01] */
  AL = (r8((uint32_t)(EDX + 0x12752f01)));
  /* 127276c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127276c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127276c6 je 0x127276f7 */
  if (C.zf) goto L_127276f7;
  /* 127276c8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127276cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127276cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127276d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127276d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127276d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127276d9 je 0x127276f7 */
  if (C.zf) goto L_127276f7;
  /* 127276db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127276de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127276e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127276e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127276e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127276e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127276eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127276ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127276f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127276f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127276f7:;
  /* 127276f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127276fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127276fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127276ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727702 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12727704 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727708 je 0x1272771d */
  if (C.zf) goto L_1272771d;
  /* 1272770a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272770d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727710 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12727712 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12727714 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12727717 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272771a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1272771d:;
  /* 1272771d jmp 0x12727694 */
  goto L_12727694;
L_12727722:;
  /* 12727722 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727725 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12727727 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272772a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1272772d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1272772f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727733 je 0x12727744 */
  if (C.zf) goto L_12727744;
  /* 12727735 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12727738 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1272773b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272773e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727741 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12727744:;
  /* 12727744 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727747 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272774a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272774d jne 0x12727758 */
  if (!C.zf) goto L_12727758;
  /* 1272774f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727752 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727755 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12727758:;
  /* 12727758 jmp 0x1272782c */
  goto L_1272782c;
L_1272775d:;
  /* 1272775d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727760 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12727762 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727765 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727768 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1272776a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272776e je 0x12727783 */
  if (C.zf) goto L_12727783;
  /* 12727770 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12727773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727776 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12727778 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1272777a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272777d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727780 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12727783:;
  /* 12727783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727786 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12727788 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1272778b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272778e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727791 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12727794 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727797 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1272779d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272779f mov dl, byte ptr [ecx + 0x12752f01] */
  DL = (r8((uint32_t)(ECX + 0x12752f01)));
  /* 127277a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127277a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127277aa je 0x127277db */
  if (C.zf) goto L_127277db;
  /* 127277ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127277af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127277b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127277b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127277b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127277b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127277bd je 0x127277d2 */
  if (C.zf) goto L_127277d2;
  /* 127277bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127277c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127277c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127277c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127277c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127277cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127277cf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_127277d2:;
  /* 127277d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127277d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127277d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127277db:;
  /* 127277db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127277de and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127277e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127277e7 je 0x12727807 */
  if (C.zf) goto L_12727807;
  /* 127277e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127277ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127277f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127277f3 je 0x12727807 */
  if (C.zf) goto L_12727807;
  /* 127277f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127277f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127277fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727801 jne 0x1272775d */
  if (!C.zf) goto L_1272775d;
L_12727807:;
  /* 12727807 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272780a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12727810 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12727812 jne 0x1272781f */
  if (!C.zf) goto L_1272781f;
  /* 12727814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727817 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272781a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272781d jmp 0x1272782c */
  goto L_1272782c;
L_1272781f:;
  /* 1272781f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727823 je 0x1272782c */
  if (C.zf) goto L_1272782c;
  /* 12727825 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12727828 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1272782c:;
  /* 1272782c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12727833:;
  /* 12727833 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727836 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12727839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272783b je 0x1272785e */
  if (C.zf) goto L_1272785e;
L_1272783d:;
  /* 1272783d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727840 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12727843 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727846 je 0x12727853 */
  if (C.zf) goto L_12727853;
  /* 12727848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272784b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272784e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727851 jne 0x1272785e */
  if (!C.zf) goto L_1272785e;
L_12727853:;
  /* 12727853 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727856 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727859 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272785c jmp 0x1272783d */
  goto L_1272783d;
L_1272785e:;
  /* 1272785e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727861 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12727864 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12727866 jne 0x1272786d */
  if (!C.zf) goto L_1272786d;
  /* 12727868 jmp 0x12727a4b */
  goto L_12727a4b;
L_1272786d:;
  /* 1272786d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727871 je 0x12727884 */
  if (C.zf) goto L_12727884;
  /* 12727873 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12727876 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12727879 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1272787b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272787e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727881 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12727884:;
  /* 12727884 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12727887 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12727889 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272788c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272788f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12727891:;
  /* 12727891 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12727898 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1272789f:;
  /* 1272789f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127278a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127278a5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127278a8 jne 0x127278be */
  if (!C.zf) goto L_127278be;
  /* 127278aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127278ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127278b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127278b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127278b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127278b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127278bc jmp 0x1272789f */
  goto L_1272789f;
L_127278be:;
  /* 127278be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127278c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127278c4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127278c7 jne 0x1272791a */
  if (!C.zf) goto L_1272791a;
  /* 127278c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127278cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127278ce mov ecx, 2 */
  ECX = (0x2u);
  /* 127278d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127278d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127278d7 jne 0x12727912 */
  if (!C.zf) goto L_12727912;
  /* 127278d9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127278dd je 0x127278ff */
  if (C.zf) goto L_127278ff;
  /* 127278df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127278e2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127278e6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127278e9 jne 0x127278f6 */
  if (!C.zf) goto L_127278f6;
  /* 127278eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127278ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127278f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127278f4 jmp 0x127278fd */
  goto L_127278fd;
L_127278f6:;
  /* 127278f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127278fd:;
  /* 127278fd jmp 0x12727906 */
  goto L_12727906;
L_127278ff:;
  /* 127278ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12727906:;
  /* 12727906 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12727908 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272790c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1272790f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12727912:;
  /* 12727912 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12727915 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12727917 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1272791a:;
  /* 1272791a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272791d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12727920 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727923 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12727926 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12727928 je 0x1272794e */
  if (C.zf) goto L_1272794e;
  /* 1272792a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272792e je 0x1272793f */
  if (C.zf) goto L_1272793f;
  /* 12727930 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12727933 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12727936 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12727939 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272793c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1272793f:;
  /* 1272793f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727942 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12727944 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727947 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1272794a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1272794c jmp 0x1272791a */
  goto L_1272791a;
L_1272794e:;
  /* 1272794e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727951 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12727954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12727956 je 0x12727974 */
  if (C.zf) goto L_12727974;
  /* 12727958 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272795c jne 0x12727979 */
  if (!C.zf) goto L_12727979;
  /* 1272795e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727961 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12727964 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727967 je 0x12727974 */
  if (C.zf) goto L_12727974;
  /* 12727969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272796c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1272796f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727972 jne 0x12727979 */
  if (!C.zf) goto L_12727979;
L_12727974:;
  /* 12727974 jmp 0x12727a24 */
  goto L_12727a24;
L_12727979:;
  /* 12727979 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272797d je 0x12727a16 */
  if (C.zf) goto L_12727a16;
  /* 12727983 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727987 je 0x127279dd */
  if (C.zf) goto L_127279dd;
  /* 12727989 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272798c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272798e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12727990 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12727992 mov cl, byte ptr [eax + 0x12752f01] */
  CL = (r8((uint32_t)(EAX + 0x12752f01)));
  /* 12727998 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1272799b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1272799d je 0x127279c8 */
  if (C.zf) goto L_127279c8;
  /* 1272799f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127279a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127279a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127279a7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127279a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127279ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127279af mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 127279b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127279b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127279b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127279bb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127279be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127279c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127279c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127279c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127279c8:;
  /* 127279c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127279cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127279ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127279d0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127279d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127279d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127279d8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127279db jmp 0x12727a09 */
  goto L_12727a09;
L_127279dd:;
  /* 127279dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127279e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127279e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127279e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127279e6 mov cl, byte ptr [eax + 0x12752f01] */
  CL = (r8((uint32_t)(EAX + 0x12752f01)));
  /* 127279ec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127279ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127279f1 je 0x12727a09 */
  if (C.zf) goto L_12727a09;
  /* 127279f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127279f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127279f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127279fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127279ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12727a01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727a04 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727a07 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12727a09:;
  /* 12727a09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727a0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12727a0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727a11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727a14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12727a16:;
  /* 12727a16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727a19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727a1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12727a1f jmp 0x12727891 */
  goto L_12727891;
L_12727a24:;
  /* 12727a24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727a28 je 0x12727a39 */
  if (C.zf) goto L_12727a39;
  /* 12727a2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12727a2d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12727a30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12727a33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727a36 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12727a39:;
  /* 12727a39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727a3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12727a3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727a41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12727a44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12727a46 jmp 0x12727833 */
  goto L_12727833;
L_12727a4b:;
  /* 12727a4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727a4f je 0x12727a63 */
  if (C.zf) goto L_12727a63;
  /* 12727a51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12727a54 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12727a5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12727a5d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727a60 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12727a63:;
  /* 12727a63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12727a66 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12727a68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727a6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12727a6e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12727a70 mov esp, ebp */
  ESP = (EBP);
  /* 12727a72 pop ebp */
  EBP = (pop32());
  /* 12727a73 ret  */
  ESPCHK(0x12727650u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a80 @ 0x12727a80 (537 bytes, 173 insns) */
void f_12727a80(void) {
  FTRACE(0x12727a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12727a81 mov ebp, esp */
  EBP = (ESP);
  /* 12727a83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727a86 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12727a8d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12727a94 cmp dword ptr [0x127517d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127517d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727a9b jne 0x12727ada */
  if (!C.zf) goto L_12727ada;
  /* 12727a9d call dword ptr [0x12754348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754348))), 0x12727aa3u);
  /* 12727aa3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12727aa6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727aaa je 0x12727ab8 */
  if (C.zf) goto L_12727ab8;
  /* 12727aac mov dword ptr [0x127517d8], 1 */
  w32((uint32_t)(0x127517d8), (0x1u));
  /* 12727ab6 jmp 0x12727ada */
  goto L_12727ada;
L_12727ab8:;
  /* 12727ab8 call dword ptr [0x1275434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275434c))), 0x12727abeu);
  /* 12727abe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12727ac1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727ac5 je 0x12727ad3 */
  if (C.zf) goto L_12727ad3;
  /* 12727ac7 mov dword ptr [0x127517d8], 2 */
  w32((uint32_t)(0x127517d8), (0x2u));
  /* 12727ad1 jmp 0x12727ada */
  goto L_12727ada;
L_12727ad3:;
  /* 12727ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12727ad5 jmp 0x12727c95 */
  goto L_12727c95;
L_12727ada:;
  /* 12727ada cmp dword ptr [0x127517d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127517d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727ae1 jne 0x12727bde */
  if (!C.zf) goto L_12727bde;
  /* 12727ae7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727aeb jne 0x12727b03 */
  if (!C.zf) goto L_12727b03;
  /* 12727aed call dword ptr [0x12754348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754348))), 0x12727af3u);
  /* 12727af3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12727af6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727afa jne 0x12727b03 */
  if (!C.zf) goto L_12727b03;
  /* 12727afc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12727afe jmp 0x12727c95 */
  goto L_12727c95;
L_12727b03:;
  /* 12727b03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12727b06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12727b09:;
  /* 12727b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727b0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12727b0e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12727b11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12727b13 je 0x12727b35 */
  if (C.zf) goto L_12727b35;
  /* 12727b15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727b18 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727b1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12727b1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727b21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12727b23 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12727b26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12727b28 jne 0x12727b33 */
  if (!C.zf) goto L_12727b33;
  /* 12727b2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727b2d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727b30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12727b33:;
  /* 12727b33 jmp 0x12727b09 */
  goto L_12727b09;
L_12727b35:;
  /* 12727b35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727b38 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727b3b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12727b3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727b40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12727b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727b4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727b4e push edx */
  push32((uint32_t)(EDX));
  /* 12727b4f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12727b52 push eax */
  push32((uint32_t)(EAX));
  /* 12727b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727b57 call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x12727b5du);
  /* 12727b5d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12727b60 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727b64 je 0x12727b84 */
  if (C.zf) goto L_12727b84;
  /* 12727b66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12727b68 push 0x1274cf30 */
  push32((uint32_t)(0x1274cf30u));
  /* 12727b6d push 2 */
  push32((uint32_t)(0x2u));
  /* 12727b6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12727b72 push ecx */
  push32((uint32_t)(ECX));
  /* 12727b73 call 0x127254b0 */
  push32(0x12727b78u); f_127254b0();
  /* 12727b78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727b7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12727b7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727b82 jne 0x12727b95 */
  if (!C.zf) goto L_12727b95;
L_12727b84:;
  /* 12727b84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12727b87 push edx */
  push32((uint32_t)(EDX));
  /* 12727b88 call dword ptr [0x127543c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c4))), 0x12727b8eu);
  /* 12727b8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12727b90 jmp 0x12727c95 */
  goto L_12727c95;
L_12727b95:;
  /* 12727b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727b99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12727b9c push eax */
  push32((uint32_t)(EAX));
  /* 12727b9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12727ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 12727ba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727ba4 push edx */
  push32((uint32_t)(EDX));
  /* 12727ba5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12727ba8 push eax */
  push32((uint32_t)(EAX));
  /* 12727ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727bab push 0 */
  push32((uint32_t)(0x0u));
  /* 12727bad call dword ptr [0x127543c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c8))), 0x12727bb3u);
  /* 12727bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12727bb5 jne 0x12727bcc */
  if (!C.zf) goto L_12727bcc;
  /* 12727bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12727bb9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12727bbc push ecx */
  push32((uint32_t)(ECX));
  /* 12727bbd call 0x12725f40 */
  push32(0x12727bc2u); f_12725f40();
  /* 12727bc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727bc5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12727bcc:;
  /* 12727bcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12727bcf push edx */
  push32((uint32_t)(EDX));
  /* 12727bd0 call dword ptr [0x127543c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c4))), 0x12727bd6u);
  /* 12727bd6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12727bd9 jmp 0x12727c95 */
  goto L_12727c95;
L_12727bde:;
  /* 12727bde cmp dword ptr [0x127517d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127517d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727be5 jne 0x12727c93 */
  if (!C.zf) goto L_12727c93;
  /* 12727beb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727bef jne 0x12727c07 */
  if (!C.zf) goto L_12727c07;
  /* 12727bf1 call dword ptr [0x1275434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275434c))), 0x12727bf7u);
  /* 12727bf7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12727bfa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727bfe jne 0x12727c07 */
  if (!C.zf) goto L_12727c07;
  /* 12727c00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12727c02 jmp 0x12727c95 */
  goto L_12727c95;
L_12727c07:;
  /* 12727c07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12727c0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12727c0d:;
  /* 12727c0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727c10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12727c13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12727c15 je 0x12727c35 */
  if (C.zf) goto L_12727c35;
  /* 12727c17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727c1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727c1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12727c20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727c23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12727c26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12727c28 jne 0x12727c33 */
  if (!C.zf) goto L_12727c33;
  /* 12727c2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727c2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727c30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12727c33:;
  /* 12727c33 jmp 0x12727c0d */
  goto L_12727c0d;
L_12727c35:;
  /* 12727c35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727c38 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727c3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727c3e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12727c41 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12727c46 push 0x1274cf30 */
  push32((uint32_t)(0x1274cf30u));
  /* 12727c4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12727c4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12727c50 push edx */
  push32((uint32_t)(EDX));
  /* 12727c51 call 0x127254b0 */
  push32(0x12727c56u); f_127254b0();
  /* 12727c56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727c59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12727c5c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727c60 jne 0x12727c70 */
  if (!C.zf) goto L_12727c70;
  /* 12727c62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12727c65 push eax */
  push32((uint32_t)(EAX));
  /* 12727c66 call dword ptr [0x127543c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c0))), 0x12727c6cu);
  /* 12727c6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12727c6e jmp 0x12727c95 */
  goto L_12727c95;
L_12727c70:;
  /* 12727c70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12727c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12727c74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12727c77 push edx */
  push32((uint32_t)(EDX));
  /* 12727c78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727c7b push eax */
  push32((uint32_t)(EAX));
  /* 12727c7c call 0x1272bd90 */
  push32(0x12727c81u); f_1272bd90();
  /* 12727c81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727c84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12727c87 push ecx */
  push32((uint32_t)(ECX));
  /* 12727c88 call dword ptr [0x127543c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543c0))), 0x12727c8eu);
  /* 12727c8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727c91 jmp 0x12727c95 */
  goto L_12727c95;
L_12727c93:;
  /* 12727c93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12727c95:;
  /* 12727c95 mov esp, ebp */
  ESP = (EBP);
  /* 12727c97 pop ebp */
  EBP = (pop32());
  /* 12727c98 ret  */
  ESPCHK(0x12727a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ca0 @ 0x12727ca0 (77 bytes, 25 insns) */
void f_12727ca0(void) {
  FTRACE(0x12727ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12727ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12727ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727ca5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12727caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12727cac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727cb0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12727cb3 push eax */
  push32((uint32_t)(EAX));
  /* 12727cb4 call dword ptr [0x12754340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754340))), 0x12727cbau);
  /* 12727cba mov dword ptr [0x1275302c], eax */
  w32((uint32_t)(0x1275302c), (EAX));
  /* 12727cbf cmp dword ptr [0x1275302c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1275302c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727cc6 jne 0x12727ccc */
  if (!C.zf) goto L_12727ccc;
  /* 12727cc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12727cca jmp 0x12727ceb */
  goto L_12727ceb;
L_12727ccc:;
  /* 12727ccc call 0x12729750 */
  push32(0x12727cd1u); f_12729750();
  /* 12727cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12727cd3 jne 0x12727ce6 */
  if (!C.zf) goto L_12727ce6;
  /* 12727cd5 mov ecx, dword ptr [0x1275302c] */
  ECX = (r32((uint32_t)(0x1275302c)));
  /* 12727cdb push ecx */
  push32((uint32_t)(ECX));
  /* 12727cdc call dword ptr [0x12754344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754344))), 0x12727ce2u);
  /* 12727ce2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12727ce4 jmp 0x12727ceb */
  goto L_12727ceb;
L_12727ce6:;
  /* 12727ce6 mov eax, 1 */
  EAX = (0x1u);
L_12727ceb:;
  /* 12727ceb pop ebp */
  EBP = (pop32());
  /* 12727cec ret  */
  ESPCHK(0x12727ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x12727cf0 (156 bytes, 48 insns) */
void f_12727cf0(void) {
  FTRACE(0x12727cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12727cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12727cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727cf6 mov eax, dword ptr [0x12753028] */
  EAX = (r32((uint32_t)(0x12753028)));
  /* 12727cfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12727cfe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12727d05 jmp 0x12727d10 */
  goto L_12727d10;
L_12727d07:;
  /* 12727d07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727d0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727d0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12727d10:;
  /* 12727d10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727d13 cmp edx, dword ptr [0x12753024] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12753024))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727d19 jge 0x12727d66 */
  if ((C.sf==C.of)) goto L_12727d66;
  /* 12727d1b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12727d20 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12727d25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727d28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12727d2b push ecx */
  push32((uint32_t)(ECX));
  /* 12727d2c call dword ptr [0x12754338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754338))), 0x12727d32u);
  /* 12727d32 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12727d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727d39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727d3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12727d3f push eax */
  push32((uint32_t)(EAX));
  /* 12727d40 call dword ptr [0x12754338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754338))), 0x12727d46u);
  /* 12727d46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727d49 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12727d4c push edx */
  push32((uint32_t)(EDX));
  /* 12727d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12727d4f mov eax, dword ptr [0x1275302c] */
  EAX = (r32((uint32_t)(0x1275302c)));
  /* 12727d54 push eax */
  push32((uint32_t)(EAX));
  /* 12727d55 call dword ptr [0x1275433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275433c))), 0x12727d5bu);
  /* 12727d5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727d5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727d61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12727d64 jmp 0x12727d07 */
  goto L_12727d07;
L_12727d66:;
  /* 12727d66 mov edx, dword ptr [0x12753028] */
  EDX = (r32((uint32_t)(0x12753028)));
  /* 12727d6c push edx */
  push32((uint32_t)(EDX));
  /* 12727d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12727d6f mov eax, dword ptr [0x1275302c] */
  EAX = (r32((uint32_t)(0x1275302c)));
  /* 12727d74 push eax */
  push32((uint32_t)(EAX));
  /* 12727d75 call dword ptr [0x1275433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275433c))), 0x12727d7bu);
  /* 12727d7b mov ecx, dword ptr [0x1275302c] */
  ECX = (r32((uint32_t)(0x1275302c)));
  /* 12727d81 push ecx */
  push32((uint32_t)(ECX));
  /* 12727d82 call dword ptr [0x12754344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754344))), 0x12727d88u);
  /* 12727d88 mov esp, ebp */
  ESP = (EBP);
  /* 12727d8a pop ebp */
  EBP = (pop32());
  /* 12727d8b ret  */
  ESPCHK(0x12727cf0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12727d90 (73 bytes, 19 insns) */
void f_12727d90(void) {
  FTRACE(0x12727d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12727d91 mov ebp, esp */
  EBP = (ESP);
  /* 12727d93 cmp dword ptr [0x1275166c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1275166c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727d9a je 0x12727dae */
  if (C.zf) goto L_12727dae;
  /* 12727d9c cmp dword ptr [0x1275166c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1275166c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727da3 jne 0x12727dd7 */
  if (!C.zf) goto L_12727dd7;
  /* 12727da5 cmp dword ptr [0x12751670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12751670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727dac jne 0x12727dd7 */
  if (!C.zf) goto L_12727dd7;
L_12727dae:;
  /* 12727dae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12727db3 call 0x12727de0 */
  push32(0x12727db8u); f_12727de0();
  /* 12727db8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727dbb cmp dword ptr [0x127517dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127517dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727dc2 je 0x12727dca */
  if (C.zf) goto L_12727dca;
  /* 12727dc4 call dword ptr [0x127517dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127517dc))), 0x12727dcau);
L_12727dca:;
  /* 12727dca push 0xff */
  push32((uint32_t)(0xffu));
  /* 12727dcf call 0x12727de0 */
  push32(0x12727dd4u); f_12727de0();
  /* 12727dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12727dd7:;
  /* 12727dd7 pop ebp */
  EBP = (pop32());
  /* 12727dd8 ret  */
  ESPCHK(0x12727d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007de0 @ 0x12727de0 (447 bytes, 131 insns) */
void f_12727de0(void) {
  FTRACE(0x12727de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12727de1 mov ebp, esp */
  EBP = (ESP);
  /* 12727de3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12727de9 push ebx */
  push32((uint32_t)(EBX));
  /* 12727dea push esi */
  push32((uint32_t)(ESI));
  /* 12727deb push edi */
  push32((uint32_t)(EDI));
  /* 12727dec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12727df3 jmp 0x12727dfe */
  goto L_12727dfe;
L_12727df5:;
  /* 12727df5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727df8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727dfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12727dfe:;
  /* 12727dfe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727e02 jae 0x12727e17 */
  if (!C.cf) goto L_12727e17;
  /* 12727e04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727e07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12727e0a cmp edx, dword ptr [ecx*8 + 0x1274fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1274fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727e11 jne 0x12727e15 */
  if (!C.zf) goto L_12727e15;
  /* 12727e13 jmp 0x12727e17 */
  goto L_12727e17;
L_12727e15:;
  /* 12727e15 jmp 0x12727df5 */
  goto L_12727df5;
L_12727e17:;
  /* 12727e17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727e1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12727e1d cmp ecx, dword ptr [eax*8 + 0x1274fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1274fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727e24 jne 0x12727f98 */
  if (!C.zf) goto L_12727f98;
  /* 12727e2a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727e31 je 0x12727e54 */
  if (C.zf) goto L_12727e54;
  /* 12727e33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727e36 mov eax, dword ptr [edx*8 + 0x1274fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1274fab4)));
  /* 12727e3d push eax */
  push32((uint32_t)(EAX));
  /* 12727e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12727e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12727e46 call 0x12724570 */
  push32(0x12727e4bu); f_12724570();
  /* 12727e4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727e4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727e51 jne 0x12727e54 */
  if (!C.zf) goto L_12727e54;
  /* 12727e53 int3  */
  x86_unimpl("int3 @ 0x12727e53");
L_12727e54:;
  /* 12727e54 cmp dword ptr [0x1275166c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1275166c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727e5b je 0x12727e6f */
  if (C.zf) goto L_12727e6f;
  /* 12727e5d cmp dword ptr [0x1275166c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1275166c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727e64 jne 0x12727ea8 */
  if (!C.zf) goto L_12727ea8;
  /* 12727e66 cmp dword ptr [0x12751670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12751670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727e6d jne 0x12727ea8 */
  if (!C.zf) goto L_12727ea8;
L_12727e6f:;
  /* 12727e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12727e71 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12727e74 push ecx */
  push32((uint32_t)(ECX));
  /* 12727e75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727e78 mov eax, dword ptr [edx*8 + 0x1274fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1274fab4)));
  /* 12727e7f push eax */
  push32((uint32_t)(EAX));
  /* 12727e80 call 0x127282e0 */
  push32(0x12727e85u); f_127282e0();
  /* 12727e85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727e88 push eax */
  push32((uint32_t)(EAX));
  /* 12727e89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727e8c mov edx, dword ptr [ecx*8 + 0x1274fab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1274fab4)));
  /* 12727e93 push edx */
  push32((uint32_t)(EDX));
  /* 12727e94 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12727e96 call dword ptr [0x1275435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275435c))), 0x12727e9cu);
  /* 12727e9c push eax */
  push32((uint32_t)(EAX));
  /* 12727e9d call dword ptr [0x12754360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754360))), 0x12727ea3u);
  /* 12727ea3 jmp 0x12727f98 */
  goto L_12727f98;
L_12727ea8:;
  /* 12727ea8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727eaf je 0x12727f98 */
  if (C.zf) goto L_12727f98;
  /* 12727eb5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12727eba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12727ec0 push eax */
  push32((uint32_t)(EAX));
  /* 12727ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12727ec3 call dword ptr [0x12754378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754378))), 0x12727ec9u);
  /* 12727ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12727ecb jne 0x12727ee1 */
  if (!C.zf) goto L_12727ee1;
  /* 12727ecd push 0x1274c798 */
  push32((uint32_t)(0x1274c798u));
  /* 12727ed2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12727ed8 push ecx */
  push32((uint32_t)(ECX));
  /* 12727ed9 call 0x12728460 */
  push32(0x12727edeu); f_12728460();
  /* 12727ede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12727ee1:;
  /* 12727ee1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12727ee7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12727eea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727eed push eax */
  push32((uint32_t)(EAX));
  /* 12727eee call 0x127282e0 */
  push32(0x12727ef3u); f_127282e0();
  /* 12727ef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727ef6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727ef9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727efc jbe 0x12727f2a */
  if ((C.cf||C.zf)) goto L_12727f2a;
  /* 12727efe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12727f04 push ecx */
  push32((uint32_t)(ECX));
  /* 12727f05 call 0x127282e0 */
  push32(0x12727f0au); f_127282e0();
  /* 12727f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727f0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727f10 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12727f14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12727f17 push 3 */
  push32((uint32_t)(0x3u));
  /* 12727f19 push 0x1274c794 */
  push32((uint32_t)(0x1274c794u));
  /* 12727f1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727f21 push ecx */
  push32((uint32_t)(ECX));
  /* 12727f22 call 0x12728cd0 */
  push32(0x12727f27u); f_12728cd0();
  /* 12727f27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12727f2a:;
  /* 12727f2a push 0x1274d1ec */
  push32((uint32_t)(0x1274d1ecu));
  /* 12727f2f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12727f35 push edx */
  push32((uint32_t)(EDX));
  /* 12727f36 call 0x12728460 */
  push32(0x12727f3bu); f_12728460();
  /* 12727f3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727f3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12727f41 push eax */
  push32((uint32_t)(EAX));
  /* 12727f42 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12727f48 push ecx */
  push32((uint32_t)(ECX));
  /* 12727f49 call 0x12728470 */
  push32(0x12727f4eu); f_12728470();
  /* 12727f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727f51 push 0x1274c70c */
  push32((uint32_t)(0x1274c70cu));
  /* 12727f56 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12727f5c push edx */
  push32((uint32_t)(EDX));
  /* 12727f5d call 0x12728470 */
  push32(0x12727f62u); f_12728470();
  /* 12727f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727f65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12727f68 mov ecx, dword ptr [eax*8 + 0x1274fab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1274fab4)));
  /* 12727f6f push ecx */
  push32((uint32_t)(ECX));
  /* 12727f70 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12727f76 push edx */
  push32((uint32_t)(EDX));
  /* 12727f77 call 0x12728470 */
  push32(0x12727f7cu); f_12728470();
  /* 12727f7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12727f7f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12727f84 push 0x1274d1c4 */
  push32((uint32_t)(0x1274d1c4u));
  /* 12727f89 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12727f8f push eax */
  push32((uint32_t)(EAX));
  /* 12727f90 call 0x12728c10 */
  push32(0x12727f95u); f_12728c10();
  /* 12727f95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12727f98:;
  /* 12727f98 pop edi */
  EDI = (pop32());
  /* 12727f99 pop esi */
  ESI = (pop32());
  /* 12727f9a pop ebx */
  EBX = (pop32());
  /* 12727f9b mov esp, ebp */
  ESP = (EBP);
  /* 12727f9d pop ebp */
  EBP = (pop32());
  /* 12727f9e ret  */
  ESPCHK(0x12727de0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12727fa0 (80 bytes, 27 insns) */
void f_12727fa0(void) {
  FTRACE(0x12727fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12727fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12727fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12727fa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12727fab jmp 0x12727fb6 */
  goto L_12727fb6;
L_12727fad:;
  /* 12727fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727fb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12727fb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12727fb6:;
  /* 12727fb6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727fba jae 0x12727fcf */
  if (!C.cf) goto L_12727fcf;
  /* 12727fbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727fbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12727fc2 cmp edx, dword ptr [ecx*8 + 0x1274fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1274fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727fc9 jne 0x12727fcd */
  if (!C.zf) goto L_12727fcd;
  /* 12727fcb jmp 0x12727fcf */
  goto L_12727fcf;
L_12727fcd:;
  /* 12727fcd jmp 0x12727fad */
  goto L_12727fad;
L_12727fcf:;
  /* 12727fcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727fd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12727fd5 cmp ecx, dword ptr [eax*8 + 0x1274fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1274fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727fdc jne 0x12727fea */
  if (!C.zf) goto L_12727fea;
  /* 12727fde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12727fe1 mov eax, dword ptr [edx*8 + 0x1274fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1274fab4)));
  /* 12727fe8 jmp 0x12727fec */
  goto L_12727fec;
L_12727fea:;
  /* 12727fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12727fec:;
  /* 12727fec mov esp, ebp */
  ESP = (EBP);
  /* 12727fee pop ebp */
  EBP = (pop32());
  /* 12727fef ret  */
  ESPCHK(0x12727fa0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12727ff0 (66 bytes, 28 insns) */
void f_12727ff0(void) {
  FTRACE(0x12727ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12727ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12727ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12727ff3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727ff7 jne 0x12728017 */
  if (!C.zf) goto L_12728017;
  /* 12727ff9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12727ffd jge 0x12728017 */
  if ((C.sf==C.of)) goto L_12728017;
  /* 12727fff push 1 */
  push32((uint32_t)(0x1u));
  /* 12728001 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12728004 push eax */
  push32((uint32_t)(EAX));
  /* 12728005 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728008 push ecx */
  push32((uint32_t)(ECX));
  /* 12728009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272800c push edx */
  push32((uint32_t)(EDX));
  /* 1272800d call 0x12728040 */
  push32(0x12728012u); f_12728040();
  /* 12728012 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728015 jmp 0x1272802d */
  goto L_1272802d;
L_12728017:;
  /* 12728017 push 0 */
  push32((uint32_t)(0x0u));
  /* 12728019 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1272801c push eax */
  push32((uint32_t)(EAX));
  /* 1272801d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728020 push ecx */
  push32((uint32_t)(ECX));
  /* 12728021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728024 push edx */
  push32((uint32_t)(EDX));
  /* 12728025 call 0x12728040 */
  push32(0x1272802au); f_12728040();
  /* 1272802a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272802d:;
  /* 1272802d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728030 pop ebp */
  EBP = (pop32());
  /* 12728031 ret  */
  ESPCHK(0x12727ff0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12728040 (194 bytes, 71 insns) */
void f_12728040(void) {
  FTRACE(0x12728040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728040 push ebp */
  push32((uint32_t)(EBP));
  /* 12728041 mov ebp, esp */
  EBP = (ESP);
  /* 12728043 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728046 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728049 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272804c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728050 je 0x12728069 */
  if (C.zf) goto L_12728069;
  /* 12728052 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728055 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12728058 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272805b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272805e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12728061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728064 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12728066 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12728069:;
  /* 12728069 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272806c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1272806f:;
  /* 1272806f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728072 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12728074 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12728077 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1272807a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272807d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272807f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12728082 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12728085 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728089 jbe 0x127280a1 */
  if ((C.cf||C.zf)) goto L_127280a1;
  /* 1272808b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272808e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728091 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728094 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12728096 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728099 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272809c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1272809f jmp 0x127280b5 */
  goto L_127280b5;
L_127280a1:;
  /* 127280a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127280a4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127280a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127280aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127280ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127280af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127280b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127280b5:;
  /* 127280b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127280b9 ja 0x1272806f */
  if ((!C.cf&&!C.zf)) goto L_1272806f;
  /* 127280bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127280be mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127280c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127280c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127280c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127280ca:;
  /* 127280ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127280cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127280cf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 127280d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127280d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127280d8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127280da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127280dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127280df mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 127280e2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 127280e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127280e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127280ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127280ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127280f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127280f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127280f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127280f9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127280fc jb 0x127280ca */
  if (C.cf) goto L_127280ca;
  /* 127280fe mov esp, ebp */
  ESP = (EBP);
  /* 12728100 pop ebp */
  EBP = (pop32());
  /* 12728101 ret  */
  ESPCHK(0x12728040u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12728110 (63 bytes, 24 insns) */
void f_12728110(void) {
  FTRACE(0x12728110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728110 push ebp */
  push32((uint32_t)(EBP));
  /* 12728111 mov ebp, esp */
  EBP = (ESP);
  /* 12728113 push ecx */
  push32((uint32_t)(ECX));
  /* 12728114 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728118 jne 0x12728129 */
  if (!C.zf) goto L_12728129;
  /* 1272811a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272811e jge 0x12728129 */
  if ((C.sf==C.of)) goto L_12728129;
  /* 12728120 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12728127 jmp 0x12728130 */
  goto L_12728130;
L_12728129:;
  /* 12728129 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12728130:;
  /* 12728130 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728133 push eax */
  push32((uint32_t)(EAX));
  /* 12728134 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12728137 push ecx */
  push32((uint32_t)(ECX));
  /* 12728138 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272813b push edx */
  push32((uint32_t)(EDX));
  /* 1272813c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272813f push eax */
  push32((uint32_t)(EAX));
  /* 12728140 call 0x12728040 */
  push32(0x12728145u); f_12728040();
  /* 12728145 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728148 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272814b mov esp, ebp */
  ESP = (EBP);
  /* 1272814d pop ebp */
  EBP = (pop32());
  /* 1272814e ret  */
  ESPCHK(0x12728110u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12728150 (30 bytes, 14 insns) */
void f_12728150(void) {
  FTRACE(0x12728150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728150 push ebp */
  push32((uint32_t)(EBP));
  /* 12728151 mov ebp, esp */
  EBP = (ESP);
  /* 12728153 push 0 */
  push32((uint32_t)(0x0u));
  /* 12728155 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12728158 push eax */
  push32((uint32_t)(EAX));
  /* 12728159 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272815c push ecx */
  push32((uint32_t)(ECX));
  /* 1272815d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728160 push edx */
  push32((uint32_t)(EDX));
  /* 12728161 call 0x12728040 */
  push32(0x12728166u); f_12728040();
  /* 12728166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728169 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272816c pop ebp */
  EBP = (pop32());
  /* 1272816d ret  */
  ESPCHK(0x12728150u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12728170 (72 bytes, 28 insns) */
void f_12728170(void) {
  FTRACE(0x12728170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728170 push ebp */
  push32((uint32_t)(EBP));
  /* 12728171 mov ebp, esp */
  EBP = (ESP);
  /* 12728173 push ecx */
  push32((uint32_t)(ECX));
  /* 12728174 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728178 jne 0x12728191 */
  if (!C.zf) goto L_12728191;
  /* 1272817a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272817e jg 0x12728191 */
  if ((!C.zf&&C.sf==C.of)) goto L_12728191;
  /* 12728180 jl 0x12728188 */
  if ((C.sf!=C.of)) goto L_12728188;
  /* 12728182 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728186 jae 0x12728191 */
  if (!C.cf) goto L_12728191;
L_12728188:;
  /* 12728188 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1272818f jmp 0x12728198 */
  goto L_12728198;
L_12728191:;
  /* 12728191 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12728198:;
  /* 12728198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272819b push eax */
  push32((uint32_t)(EAX));
  /* 1272819c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1272819f push ecx */
  push32((uint32_t)(ECX));
  /* 127281a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127281a3 push edx */
  push32((uint32_t)(EDX));
  /* 127281a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127281a7 push eax */
  push32((uint32_t)(EAX));
  /* 127281a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127281ab push ecx */
  push32((uint32_t)(ECX));
  /* 127281ac call 0x127281c0 */
  push32(0x127281b1u); f_127281c0();
  /* 127281b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127281b4 mov esp, ebp */
  ESP = (EBP);
  /* 127281b6 pop ebp */
  EBP = (pop32());
  /* 127281b7 ret  */
  ESPCHK(0x12728170u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x127281c0 (242 bytes, 91 insns) */
void f_127281c0(void) {
  FTRACE(0x127281c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127281c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127281c1 mov ebp, esp */
  EBP = (ESP);
  /* 127281c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127281c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127281c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127281cc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127281d0 je 0x127281f4 */
  if (C.zf) goto L_127281f4;
  /* 127281d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127281d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 127281d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127281db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127281de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127281e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127281e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127281e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127281e9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127281ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127281ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127281f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_127281f4:;
  /* 127281f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127281f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127281fa:;
  /* 127281fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127281fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127281ff push ecx */
  push32((uint32_t)(ECX));
  /* 12728200 push eax */
  push32((uint32_t)(EAX));
  /* 12728201 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728204 push edx */
  push32((uint32_t)(EDX));
  /* 12728205 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728208 push eax */
  push32((uint32_t)(EAX));
  /* 12728209 call 0x1272c140 */
  push32(0x1272820eu); f_1272c140();
  /* 1272820e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12728211 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12728214 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12728216 push edx */
  push32((uint32_t)(EDX));
  /* 12728217 push ecx */
  push32((uint32_t)(ECX));
  /* 12728218 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272821b push eax */
  push32((uint32_t)(EAX));
  /* 1272821c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272821f push ecx */
  push32((uint32_t)(ECX));
  /* 12728220 call 0x1272c0d0 */
  push32(0x12728225u); f_1272c0d0();
  /* 12728225 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12728228 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1272822b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272822f jbe 0x12728247 */
  if ((C.cf||C.zf)) goto L_12728247;
  /* 12728231 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12728234 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272823a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1272823c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272823f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728242 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12728245 jmp 0x1272825b */
  goto L_1272825b;
L_12728247:;
  /* 12728247 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272824a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272824d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728250 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12728252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728255 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728258 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1272825b:;
  /* 1272825b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272825f ja 0x127281fa */
  if ((!C.cf&&!C.zf)) goto L_127281fa;
  /* 12728261 jb 0x12728269 */
  if (C.cf) goto L_12728269;
  /* 12728263 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728267 ja 0x127281fa */
  if ((!C.cf&&!C.zf)) goto L_127281fa;
L_12728269:;
  /* 12728269 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272826c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1272826f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728272 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728275 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12728278:;
  /* 12728278 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272827b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1272827d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12728280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728283 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12728286 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12728288 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1272828a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272828d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12728290 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12728292 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728295 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728298 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1272829b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272829e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127282a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127282a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127282a7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127282aa jb 0x12728278 */
  if (C.cf) goto L_12728278;
  /* 127282ac mov esp, ebp */
  ESP = (EBP);
  /* 127282ae pop ebp */
  EBP = (pop32());
  /* 127282af ret 0x14 */
  ESPCHK(0x127281c0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x127282c0 (31 bytes, 15 insns) */
void f_127282c0(void) {
  FTRACE(0x127282c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127282c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127282c1 mov ebp, esp */
  EBP = (ESP);
  /* 127282c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127282c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127282c8 push eax */
  push32((uint32_t)(EAX));
  /* 127282c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127282cc push ecx */
  push32((uint32_t)(ECX));
  /* 127282cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127282d0 push edx */
  push32((uint32_t)(EDX));
  /* 127282d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127282d4 push eax */
  push32((uint32_t)(EAX));
  /* 127282d5 call 0x127281c0 */
  push32(0x127282dau); f_127281c0();
  /* 127282da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127282dd pop ebp */
  EBP = (pop32());
  /* 127282de ret  */
  ESPCHK(0x127282c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x127282e0 (123 bytes, 44 insns) */
void f_127282e0(void) {
  FTRACE(0x127282e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127282e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 127282e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127282ea je 0x12728300 */
  if (C.zf) goto L_12728300;
L_127282ec:;
  /* 127282ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 127282ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127282ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127282f1 je 0x12728333 */
  if (C.zf) goto L_12728333;
  /* 127282f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127282f9 jne 0x127282ec */
  if (!C.zf) goto L_127282ec;
  /* 127282fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12728300:;
  /* 12728300 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12728302 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12728307 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728309 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1272830c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272830e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728311 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12728316 je 0x12728300 */
  if (C.zf) goto L_12728300;
  /* 12728318 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1272831b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1272831d je 0x12728351 */
  if (C.zf) goto L_12728351;
  /* 1272831f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12728321 je 0x12728347 */
  if (C.zf) goto L_12728347;
  /* 12728323 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12728328 je 0x1272833d */
  if (C.zf) goto L_1272833d;
  /* 1272832a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1272832f je 0x12728333 */
  if (C.zf) goto L_12728333;
  /* 12728331 jmp 0x12728300 */
  goto L_12728300;
L_12728333:;
  /* 12728333 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12728336 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1272833a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272833c ret  */
  ESPCHK(0x127282e0u, _esp0);
  ESP += 4; return;
L_1272833d:;
  /* 1272833d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12728340 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12728344 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728346 ret  */
  ESPCHK(0x127282e0u, _esp0);
  ESP += 4; return;
L_12728347:;
  /* 12728347 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1272834a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1272834e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728350 ret  */
  ESPCHK(0x127282e0u, _esp0);
  ESP += 4; return;
L_12728351:;
  /* 12728351 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12728354 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12728358 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272835a ret  */
  ESPCHK(0x127282e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008360 @ 0x12728360 (249 bytes, 93 insns) */
void f_12728360(void) {
  FTRACE(0x12728360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728360 push ebp */
  push32((uint32_t)(EBP));
  /* 12728361 mov ebp, esp */
  EBP = (ESP);
  /* 12728363 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728366 push ebx */
  push32((uint32_t)(EBX));
  /* 12728367 push esi */
  push32((uint32_t)(ESI));
  /* 12728368 push edi */
  push32((uint32_t)(EDI));
  /* 12728369 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1272836c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1272836f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12728372 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12728375:;
  /* 12728375 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728379 jne 0x12728399 */
  if (!C.zf) goto L_12728399;
  /* 1272837b push 0x1274d224 */
  push32((uint32_t)(0x1274d224u));
  /* 12728380 push 0 */
  push32((uint32_t)(0x0u));
  /* 12728382 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12728384 push 0x1274d218 */
  push32((uint32_t)(0x1274d218u));
  /* 12728389 push 2 */
  push32((uint32_t)(0x2u));
  /* 1272838b call 0x12724570 */
  push32(0x12728390u); f_12724570();
  /* 12728390 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728393 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728396 jne 0x12728399 */
  if (!C.zf) goto L_12728399;
  /* 12728398 int3  */
  x86_unimpl("int3 @ 0x12728398");
L_12728399:;
  /* 12728399 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272839b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272839d jne 0x12728375 */
  if (!C.zf) goto L_12728375;
L_1272839f:;
  /* 1272839f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127283a3 jne 0x127283c3 */
  if (!C.zf) goto L_127283c3;
  /* 127283a5 push 0x1274d208 */
  push32((uint32_t)(0x1274d208u));
  /* 127283aa push 0 */
  push32((uint32_t)(0x0u));
  /* 127283ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 127283ae push 0x1274d218 */
  push32((uint32_t)(0x1274d218u));
  /* 127283b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127283b5 call 0x12724570 */
  push32(0x127283bau); f_12724570();
  /* 127283ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127283bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127283c0 jne 0x127283c3 */
  if (!C.zf) goto L_127283c3;
  /* 127283c2 int3  */
  x86_unimpl("int3 @ 0x127283c2");
L_127283c3:;
  /* 127283c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127283c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127283c7 jne 0x1272839f */
  if (!C.zf) goto L_1272839f;
  /* 127283c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127283cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 127283d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127283d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127283d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127283dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127283df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127283e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127283e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127283e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127283ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 127283ed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127283f0 push edx */
  push32((uint32_t)(EDX));
  /* 127283f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127283f4 push eax */
  push32((uint32_t)(EAX));
  /* 127283f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127283f8 push ecx */
  push32((uint32_t)(ECX));
  /* 127283f9 call 0x1272c440 */
  push32(0x127283feu); f_1272c440();
  /* 127283fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728401 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12728404 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12728407 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1272840a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272840d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12728410 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12728413 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12728416 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272841a jl 0x1272843e */
  if ((C.sf!=C.of)) goto L_1272843e;
  /* 1272841c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272841f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12728421 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12728424 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12728426 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1272842c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1272842f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12728432 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12728434 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728437 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272843a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1272843c jmp 0x1272844f */
  goto L_1272844f;
L_1272843e:;
  /* 1272843e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12728441 push eax */
  push32((uint32_t)(EAX));
  /* 12728442 push 0 */
  push32((uint32_t)(0x0u));
  /* 12728444 call 0x1272c1c0 */
  push32(0x12728449u); f_1272c1c0();
  /* 12728449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272844c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1272844f:;
  /* 1272844f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12728452 pop edi */
  EDI = (pop32());
  /* 12728453 pop esi */
  ESI = (pop32());
  /* 12728454 pop ebx */
  EBX = (pop32());
  /* 12728455 mov esp, ebp */
  ESP = (EBP);
  /* 12728457 pop ebp */
  EBP = (pop32());
  /* 12728458 ret  */
  ESPCHK(0x12728360u, _esp0);
  ESP += 4; return;
}

/* FUN_10008460 @ 0x12728460 (7 bytes, 3 insns) */
void f_12728460(void) {
  FTRACE(0x12728460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728460 push edi */
  push32((uint32_t)(EDI));
  /* 12728461 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12728465 jmp 0x127284d1 */
  jmp_ind(0x127284d1u); return;
}

/* FUN_10008470 @ 0x12728470 (224 bytes, 84 insns) */
void f_12728470(void) {
  FTRACE(0x12728470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728470 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12728474 push edi */
  push32((uint32_t)(EDI));
  /* 12728475 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1272847b je 0x1272848c */
  if (C.zf) goto L_1272848c;
L_1272847d:;
  /* 1272847d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1272847f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12728480 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12728482 je 0x127284bf */
  if (C.zf) goto L_127284bf;
  /* 12728484 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1272848a jne 0x1272847d */
  if (!C.zf) goto L_1272847d;
L_1272848c:;
  /* 1272848c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1272848e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12728493 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728495 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12728498 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1272849a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272849d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 127284a2 je 0x1272848c */
  if (C.zf) goto L_1272848c;
  /* 127284a4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 127284a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127284a9 je 0x127284ce */
  if (C.zf) goto L_127284ce;
  /* 127284ab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 127284ad je 0x127284c9 */
  if (C.zf) goto L_127284c9;
  /* 127284af test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 127284b4 je 0x127284c4 */
  if (C.zf) goto L_127284c4;
  /* 127284b6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 127284bb je 0x127284bf */
  if (C.zf) goto L_127284bf;
  /* 127284bd jmp 0x1272848c */
  goto L_1272848c;
L_127284bf:;
  /* 127284bf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 127284c2 jmp 0x127284d1 */
  goto L_127284d1;
L_127284c4:;
  /* 127284c4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 127284c7 jmp 0x127284d1 */
  goto L_127284d1;
L_127284c9:;
  /* 127284c9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 127284cc jmp 0x127284d1 */
  goto L_127284d1;
L_127284ce:;
  /* 127284ce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_127284d1:;
  /* 127284d1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 127284d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127284db je 0x127284f6 */
  if (C.zf) goto L_127284f6;
L_127284dd:;
  /* 127284dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127284df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127284e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 127284e2 je 0x12728548 */
  if (C.zf) goto L_12728548;
  /* 127284e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 127284e6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127284e7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 127284ed jne 0x127284dd */
  if (!C.zf) goto L_127284dd;
  /* 127284ef jmp 0x127284f6 */
  goto L_127284f6;
L_127284f1:;
  /* 127284f1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127284f3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127284f6:;
  /* 127284f6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 127284fb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 127284fd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127284ff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12728502 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12728504 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12728506 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728509 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1272850e je 0x127284f1 */
  if (C.zf) goto L_127284f1;
  /* 12728510 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12728512 je 0x12728548 */
  if (C.zf) goto L_12728548;
  /* 12728514 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12728516 je 0x1272853f */
  if (C.zf) goto L_1272853f;
  /* 12728518 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1272851e je 0x12728532 */
  if (C.zf) goto L_12728532;
  /* 12728520 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12728526 je 0x1272852a */
  if (C.zf) goto L_1272852a;
  /* 12728528 jmp 0x127284f1 */
  goto L_127284f1;
L_1272852a:;
  /* 1272852a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1272852c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12728530 pop edi */
  EDI = (pop32());
  /* 12728531 ret  */
  ESPCHK(0x12728470u, _esp0);
  ESP += 4; return;
L_12728532:;
  /* 12728532 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12728535 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12728539 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1272853d pop edi */
  EDI = (pop32());
  /* 1272853e ret  */
  ESPCHK(0x12728470u, _esp0);
  ESP += 4; return;
L_1272853f:;
  /* 1272853f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12728542 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12728546 pop edi */
  EDI = (pop32());
  /* 12728547 ret  */
  ESPCHK(0x12728470u, _esp0);
  ESP += 4; return;
L_12728548:;
  /* 12728548 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1272854a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1272854e pop edi */
  EDI = (pop32());
  /* 1272854f ret  */
  ESPCHK(0x12728470u, _esp0);
  ESP += 4; return;
}

/* FUN_10008550 @ 0x12728550 (243 bytes, 91 insns) */
void f_12728550(void) {
  FTRACE(0x12728550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728550 push ebp */
  push32((uint32_t)(EBP));
  /* 12728551 mov ebp, esp */
  EBP = (ESP);
  /* 12728553 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728556 push ebx */
  push32((uint32_t)(EBX));
  /* 12728557 push esi */
  push32((uint32_t)(ESI));
  /* 12728558 push edi */
  push32((uint32_t)(EDI));
  /* 12728559 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1272855c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1272855f:;
  /* 1272855f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728563 jne 0x12728583 */
  if (!C.zf) goto L_12728583;
  /* 12728565 push 0x1274d224 */
  push32((uint32_t)(0x1274d224u));
  /* 1272856a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272856c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1272856e push 0x1274d234 */
  push32((uint32_t)(0x1274d234u));
  /* 12728573 push 2 */
  push32((uint32_t)(0x2u));
  /* 12728575 call 0x12724570 */
  push32(0x1272857au); f_12724570();
  /* 1272857a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272857d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728580 jne 0x12728583 */
  if (!C.zf) goto L_12728583;
  /* 12728582 int3  */
  x86_unimpl("int3 @ 0x12728582");
L_12728583:;
  /* 12728583 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12728585 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12728587 jne 0x1272855f */
  if (!C.zf) goto L_1272855f;
L_12728589:;
  /* 12728589 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272858d jne 0x127285ad */
  if (!C.zf) goto L_127285ad;
  /* 1272858f push 0x1274d208 */
  push32((uint32_t)(0x1274d208u));
  /* 12728594 push 0 */
  push32((uint32_t)(0x0u));
  /* 12728596 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12728598 push 0x1274d234 */
  push32((uint32_t)(0x1274d234u));
  /* 1272859d push 2 */
  push32((uint32_t)(0x2u));
  /* 1272859f call 0x12724570 */
  push32(0x127285a4u); f_12724570();
  /* 127285a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127285a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127285aa jne 0x127285ad */
  if (!C.zf) goto L_127285ad;
  /* 127285ac int3  */
  x86_unimpl("int3 @ 0x127285ac");
L_127285ad:;
  /* 127285ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127285af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127285b1 jne 0x12728589 */
  if (!C.zf) goto L_12728589;
  /* 127285b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127285b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 127285bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127285c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127285c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127285c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127285c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127285cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127285ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127285d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127285d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 127285d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127285da push ecx */
  push32((uint32_t)(ECX));
  /* 127285db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127285de push edx */
  push32((uint32_t)(EDX));
  /* 127285df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127285e2 push eax */
  push32((uint32_t)(EAX));
  /* 127285e3 call 0x1272c440 */
  push32(0x127285e8u); f_1272c440();
  /* 127285e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127285eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127285ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127285f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127285f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127285f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127285fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127285fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12728600 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728604 jl 0x12728628 */
  if ((C.sf!=C.of)) goto L_12728628;
  /* 12728606 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12728609 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1272860b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1272860e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12728610 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12728616 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12728619 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272861c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1272861e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728621 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12728624 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12728626 jmp 0x12728639 */
  goto L_12728639;
L_12728628:;
  /* 12728628 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1272862b push edx */
  push32((uint32_t)(EDX));
  /* 1272862c push 0 */
  push32((uint32_t)(0x0u));
  /* 1272862e call 0x1272c1c0 */
  push32(0x12728633u); f_1272c1c0();
  /* 12728633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728636 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12728639:;
  /* 12728639 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1272863c pop edi */
  EDI = (pop32());
  /* 1272863d pop esi */
  ESI = (pop32());
  /* 1272863e pop ebx */
  EBX = (pop32());
  /* 1272863f mov esp, ebp */
  ESP = (EBP);
  /* 12728641 pop ebp */
  EBP = (pop32());
  /* 12728642 ret  */
  ESPCHK(0x12728550u, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x12728650 (47 bytes, 17 insns) */
void f_12728650(void) {
  FTRACE(0x12728650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728650 push ecx */
  push32((uint32_t)(ECX));
  /* 12728651 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728656 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1272865a jb 0x12728670 */
  if (C.cf) goto L_12728670;
L_1272865c:;
  /* 1272865c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728662 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728667 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12728669 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272866e jae 0x1272865c */
  if (!C.cf) goto L_1272865c;
L_12728670:;
  /* 12728670 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728672 mov eax, esp */
  EAX = (ESP);
  /* 12728674 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12728676 mov esp, ecx */
  ESP = (ECX);
  /* 12728678 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1272867a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1272867d push eax */
  push32((uint32_t)(EAX));
  /* 1272867e ret  */
  ESPCHK(0x12728650u, _esp0);
  ESP += 4; return;
}

/* FUN_10008680 @ 0x12728680 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12728680(void) {
  FTRACE(0x12728680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728680 push ebp */
  push32((uint32_t)(EBP));
  /* 12728681 mov ebp, esp */
  EBP = (ESP);
  /* 12728683 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728686 push esi */
  push32((uint32_t)(ESI));
  /* 12728687 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272868b je 0x12728693 */
  if (C.zf) goto L_12728693;
  /* 1272868d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728691 jne 0x12728698 */
  if (!C.zf) goto L_12728698;
L_12728693:;
  /* 12728693 jmp 0x12728868 */
  goto L_12728868;
L_12728698:;
  /* 12728698 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272869c je 0x127286b4 */
  if (C.zf) goto L_127286b4;
  /* 1272869e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127286a2 je 0x127286b4 */
  if (C.zf) goto L_127286b4;
  /* 127286a4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127286a8 je 0x127286b4 */
  if (C.zf) goto L_127286b4;
  /* 127286aa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127286ae jne 0x12728791 */
  if (!C.zf) goto L_12728791;
L_127286b4:;
  /* 127286b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 127286b6 call 0x12728eb0 */
  push32(0x127286bbu); f_12728eb0();
  /* 127286bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127286be cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127286c2 je 0x127286ca */
  if (C.zf) goto L_127286ca;
  /* 127286c4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127286c8 jne 0x1272870f */
  if (!C.zf) goto L_1272870f;
L_127286ca:;
  /* 127286ca cmp dword ptr [0x127517f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127517f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127286d1 jne 0x1272870f */
  if (!C.zf) goto L_1272870f;
  /* 127286d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127286d5 push 0x127288b0 */
  push32((uint32_t)(0x127288b0u));
  /* 127286da call dword ptr [0x12754334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754334))), 0x127286e0u);
  /* 127286e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127286e3 jne 0x127286f1 */
  if (!C.zf) goto L_127286f1;
  /* 127286e5 mov dword ptr [0x127517f0], 1 */
  w32((uint32_t)(0x127517f0), (0x1u));
  /* 127286ef jmp 0x1272870f */
  goto L_1272870f;
L_127286f1:;
  /* 127286f1 call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x127286f7u);
  /* 127286f7 mov esi, eax */
  ESI = (EAX);
  /* 127286f9 call 0x1272d390 */
  push32(0x127286feu); f_1272d390();
  /* 127286fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12728700 push 1 */
  push32((uint32_t)(0x1u));
  /* 12728702 call 0x12728f50 */
  push32(0x12728707u); f_12728f50();
  /* 12728707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272870a jmp 0x12728868 */
  goto L_12728868;
L_1272870f:;
  /* 1272870f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728712 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12728715 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12728718 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1272871b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1272871e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728722 ja 0x12728782 */
  if ((!C.cf&&!C.zf)) goto L_12728782;
  /* 12728724 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12728727 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12728729 mov dl, byte ptr [eax + 0x1272888f] */
  DL = (r8((uint32_t)(EAX + 0x1272888f)));
  /* 1272872f jmp dword ptr [edx*4 + 0x1272887b] */
  switch (EDX) {
    case 0: goto L_12728736;
    case 1: goto L_12728770;
    case 2: goto L_1272874a;
    case 3: goto L_1272875d;
    case 4: goto L_12728782;
    default: x86_unimpl("switch@0x1272872f out of table"); return;
  }
L_12728736:;
  /* 12728736 mov ecx, dword ptr [0x127517e0] */
  ECX = (r32((uint32_t)(0x127517e0)));
  /* 1272873c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272873f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728742 mov dword ptr [0x127517e0], edx */
  w32((uint32_t)(0x127517e0), (EDX));
  /* 12728748 jmp 0x12728782 */
  goto L_12728782;
L_1272874a:;
  /* 1272874a mov eax, dword ptr [0x127517e4] */
  EAX = (r32((uint32_t)(0x127517e4)));
  /* 1272874f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12728752 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728755 mov dword ptr [0x127517e4], ecx */
  w32((uint32_t)(0x127517e4), (ECX));
  /* 1272875b jmp 0x12728782 */
  goto L_12728782;
L_1272875d:;
  /* 1272875d mov edx, dword ptr [0x127517e8] */
  EDX = (r32((uint32_t)(0x127517e8)));
  /* 12728763 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12728766 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728769 mov dword ptr [0x127517e8], eax */
  w32((uint32_t)(0x127517e8), (EAX));
  /* 1272876e jmp 0x12728782 */
  goto L_12728782;
L_12728770:;
  /* 12728770 mov ecx, dword ptr [0x127517ec] */
  ECX = (r32((uint32_t)(0x127517ec)));
  /* 12728776 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12728779 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272877c mov dword ptr [0x127517ec], edx */
  w32((uint32_t)(0x127517ec), (EDX));
L_12728782:;
  /* 12728782 push 1 */
  push32((uint32_t)(0x1u));
  /* 12728784 call 0x12728f50 */
  push32(0x12728789u); f_12728f50();
  /* 12728789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272878c jmp 0x12728863 */
  goto L_12728863;
L_12728791:;
  /* 12728791 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728795 je 0x127287a8 */
  if (C.zf) goto L_127287a8;
  /* 12728797 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272879b je 0x127287a8 */
  if (C.zf) goto L_127287a8;
  /* 1272879d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127287a1 je 0x127287a8 */
  if (C.zf) goto L_127287a8;
  /* 127287a3 jmp 0x12728868 */
  goto L_12728868;
L_127287a8:;
  /* 127287a8 call 0x12724ef0 */
  push32(0x127287adu); f_12724ef0();
  /* 127287ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127287b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127287b3 cmp dword ptr [eax + 0x50], 0x1274fc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1274fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127287ba jne 0x12728805 */
  if (!C.zf) goto L_12728805;
  /* 127287bc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 127287c1 push 0x1274d240 */
  push32((uint32_t)(0x1274d240u));
  /* 127287c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127287c8 mov ecx, dword ptr [0x1274fc80] */
  ECX = (r32((uint32_t)(0x1274fc80)));
  /* 127287ce push ecx */
  push32((uint32_t)(ECX));
  /* 127287cf call 0x127254b0 */
  push32(0x127287d4u); f_127254b0();
  /* 127287d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127287d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127287da mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 127287dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127287e0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127287e4 je 0x12728803 */
  if (C.zf) goto L_12728803;
  /* 127287e6 mov ecx, dword ptr [0x1274fc80] */
  ECX = (r32((uint32_t)(0x1274fc80)));
  /* 127287ec push ecx */
  push32((uint32_t)(ECX));
  /* 127287ed push 0x1274fc00 */
  push32((uint32_t)(0x1274fc00u));
  /* 127287f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127287f5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 127287f8 push eax */
  push32((uint32_t)(EAX));
  /* 127287f9 call 0x1272bd90 */
  push32(0x127287feu); f_1272bd90();
  /* 127287fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728801 jmp 0x12728805 */
  goto L_12728805;
L_12728803:;
  /* 12728803 jmp 0x12728868 */
  goto L_12728868;
L_12728805:;
  /* 12728805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728808 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1272880b push edx */
  push32((uint32_t)(EDX));
  /* 1272880c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272880f push eax */
  push32((uint32_t)(EAX));
  /* 12728810 call 0x12728b90 */
  push32(0x12728815u); f_12728b90();
  /* 12728815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728818 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1272881b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272881f jne 0x12728823 */
  if (!C.zf) goto L_12728823;
  /* 12728821 jmp 0x12728868 */
  goto L_12728868;
L_12728823:;
  /* 12728823 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12728826 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12728829 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1272882c:;
  /* 1272882c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272882f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12728832 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728835 jne 0x12728863 */
  if (!C.zf) goto L_12728863;
  /* 12728837 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272883a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272883d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12728840 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12728843 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728846 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12728849 mov edx, dword ptr [0x1274fc84] */
  EDX = (r32((uint32_t)(0x1274fc84)));
  /* 1272884f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12728852 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728855 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12728858 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272885a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272885d jb 0x12728861 */
  if (C.cf) goto L_12728861;
  /* 1272885f jmp 0x12728863 */
  goto L_12728863;
L_12728861:;
  /* 12728861 jmp 0x1272882c */
  goto L_1272882c;
L_12728863:;
  /* 12728863 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12728866 jmp 0x12728876 */
  goto L_12728876;
L_12728868:;
  /* 12728868 call 0x1272d380 */
  push32(0x1272886du); f_1272d380();
  /* 1272886d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12728873 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12728876:;
  /* 12728876 pop esi */
  ESI = (pop32());
  /* 12728877 mov esp, ebp */
  ESP = (EBP);
  /* 12728879 pop ebp */
  EBP = (pop32());
  /* 1272887a ret  */
  ESPCHK(0x12728680u, _esp0);
  ESP += 4; return;
}

/* FUN_100088b0 @ 0x127288b0 (146 bytes, 45 insns) */
void f_127288b0(void) {
  FTRACE(0x127288b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127288b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127288b1 mov ebp, esp */
  EBP = (ESP);
  /* 127288b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127288b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 127288b8 call 0x12728eb0 */
  push32(0x127288bdu); f_12728eb0();
  /* 127288bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127288c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127288c4 jne 0x127288de */
  if (!C.zf) goto L_127288de;
  /* 127288c6 mov dword ptr [ebp - 8], 0x127517e0 */
  w32((uint32_t)(EBP + -0x8), (0x127517e0u));
  /* 127288cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127288d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127288d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127288d5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 127288dc jmp 0x127288f4 */
  goto L_127288f4;
L_127288de:;
  /* 127288de mov dword ptr [ebp - 8], 0x127517e4 */
  w32((uint32_t)(EBP + -0x8), (0x127517e4u));
  /* 127288e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127288e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127288ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127288ed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_127288f4:;
  /* 127288f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127288f8 jne 0x12728908 */
  if (!C.zf) goto L_12728908;
  /* 127288fa push 1 */
  push32((uint32_t)(0x1u));
  /* 127288fc call 0x12728f50 */
  push32(0x12728901u); f_12728f50();
  /* 12728901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12728906 jmp 0x1272893c */
  goto L_1272893c;
L_12728908:;
  /* 12728908 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272890c je 0x1272892d */
  if (C.zf) goto L_1272892d;
  /* 1272890e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12728911 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12728917 push 1 */
  push32((uint32_t)(0x1u));
  /* 12728919 call 0x12728f50 */
  push32(0x1272891eu); f_12728f50();
  /* 1272891e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728921 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728924 push edx */
  push32((uint32_t)(EDX));
  /* 12728925 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12728928u);
  /* 12728928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272892b jmp 0x12728937 */
  goto L_12728937;
L_1272892d:;
  /* 1272892d push 1 */
  push32((uint32_t)(0x1u));
  /* 1272892f call 0x12728f50 */
  push32(0x12728934u); f_12728f50();
  /* 12728934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728937:;
  /* 12728937 mov eax, 1 */
  EAX = (0x1u);
L_1272893c:;
  /* 1272893c mov esp, ebp */
  ESP = (EBP);
  /* 1272893e pop ebp */
  EBP = (pop32());
  /* 1272893f ret 4 */
  ESPCHK(0x127288b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008950 @ 0x12728950 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12728950(void) {
  FTRACE(0x12728950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728950 push ebp */
  push32((uint32_t)(EBP));
  /* 12728951 mov ebp, esp */
  EBP = (ESP);
  /* 12728953 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728956 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1272895d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728960 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12728963 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12728966 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728969 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1272896c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728970 ja 0x12728a1e */
  if ((!C.cf&&!C.zf)) goto L_12728a1e;
  /* 12728976 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12728979 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1272897b mov dl, byte ptr [eax + 0x12728b72] */
  DL = (r8((uint32_t)(EAX + 0x12728b72)));
  /* 12728981 jmp dword ptr [edx*4 + 0x12728b5a] */
  switch (EDX) {
    case 0: goto L_12728988;
    case 1: goto L_127289f3;
    case 2: goto L_127289d9;
    case 3: goto L_127289a5;
    case 4: goto L_127289bf;
    case 5: goto L_12728a1e;
    default: x86_unimpl("switch@0x12728981 out of table"); return;
  }
L_12728988:;
  /* 12728988 mov dword ptr [ebp - 0x18], 0x127517e0 */
  w32((uint32_t)(EBP + -0x18), (0x127517e0u));
  /* 1272898f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12728992 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12728994 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12728997 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1272899a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272899d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127289a0 jmp 0x12728a26 */
  goto L_12728a26;
L_127289a5:;
  /* 127289a5 mov dword ptr [ebp - 0x18], 0x127517e4 */
  w32((uint32_t)(EBP + -0x18), (0x127517e4u));
  /* 127289ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127289af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127289b1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127289b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127289b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127289ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127289bd jmp 0x12728a26 */
  goto L_12728a26;
L_127289bf:;
  /* 127289bf mov dword ptr [ebp - 0x18], 0x127517e8 */
  w32((uint32_t)(EBP + -0x18), (0x127517e8u));
  /* 127289c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127289c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127289cb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127289ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127289d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127289d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127289d7 jmp 0x12728a26 */
  goto L_12728a26;
L_127289d9:;
  /* 127289d9 mov dword ptr [ebp - 0x18], 0x127517ec */
  w32((uint32_t)(EBP + -0x18), (0x127517ecu));
  /* 127289e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127289e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127289e5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127289e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127289eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127289ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127289f1 jmp 0x12728a26 */
  goto L_12728a26;
L_127289f3:;
  /* 127289f3 call 0x12724ef0 */
  push32(0x127289f8u); f_12724ef0();
  /* 127289f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127289fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127289fe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12728a01 push edx */
  push32((uint32_t)(EDX));
  /* 12728a02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728a05 push eax */
  push32((uint32_t)(EAX));
  /* 12728a06 call 0x12728b90 */
  push32(0x12728a0bu); f_12728b90();
  /* 12728a0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728a0e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728a11 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12728a14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12728a17 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12728a19 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12728a1c jmp 0x12728a26 */
  goto L_12728a26;
L_12728a1e:;
  /* 12728a1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12728a21 jmp 0x12728b56 */
  goto L_12728b56;
L_12728a26:;
  /* 12728a26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728a2a je 0x12728a36 */
  if (C.zf) goto L_12728a36;
  /* 12728a2c push 1 */
  push32((uint32_t)(0x1u));
  /* 12728a2e call 0x12728eb0 */
  push32(0x12728a33u); f_12728eb0();
  /* 12728a33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728a36:;
  /* 12728a36 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728a3a jne 0x12728a53 */
  if (!C.zf) goto L_12728a53;
  /* 12728a3c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728a40 je 0x12728a4c */
  if (C.zf) goto L_12728a4c;
  /* 12728a42 push 1 */
  push32((uint32_t)(0x1u));
  /* 12728a44 call 0x12728f50 */
  push32(0x12728a49u); f_12728f50();
  /* 12728a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728a4c:;
  /* 12728a4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12728a4e jmp 0x12728b56 */
  goto L_12728b56;
L_12728a53:;
  /* 12728a53 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728a57 jne 0x12728a70 */
  if (!C.zf) goto L_12728a70;
  /* 12728a59 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728a5d je 0x12728a69 */
  if (C.zf) goto L_12728a69;
  /* 12728a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 12728a61 call 0x12728f50 */
  push32(0x12728a66u); f_12728f50();
  /* 12728a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728a69:;
  /* 12728a69 push 3 */
  push32((uint32_t)(0x3u));
  /* 12728a6b call 0x12724c70 */
  push32(0x12728a70u); f_12724c70();
L_12728a70:;
  /* 12728a70 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728a74 je 0x12728a82 */
  if (C.zf) goto L_12728a82;
  /* 12728a76 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728a7a je 0x12728a82 */
  if (C.zf) goto L_12728a82;
  /* 12728a7c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728a80 jne 0x12728aae */
  if (!C.zf) goto L_12728aae;
L_12728a82:;
  /* 12728a82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728a85 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12728a88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12728a8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728a8e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12728a95 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728a99 jne 0x12728aae */
  if (!C.zf) goto L_12728aae;
  /* 12728a9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728a9e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12728aa1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12728aa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728aa7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12728aae:;
  /* 12728aae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728ab2 jne 0x12728af0 */
  if (!C.zf) goto L_12728af0;
  /* 12728ab4 mov eax, dword ptr [0x1274fc78] */
  EAX = (r32((uint32_t)(0x1274fc78)));
  /* 12728ab9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12728abc jmp 0x12728ac7 */
  goto L_12728ac7;
L_12728abe:;
  /* 12728abe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12728ac1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728ac4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12728ac7:;
  /* 12728ac7 mov edx, dword ptr [0x1274fc78] */
  EDX = (r32((uint32_t)(0x1274fc78)));
  /* 12728acd add edx, dword ptr [0x1274fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1274fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728ad3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728ad6 jge 0x12728aee */
  if ((C.sf==C.of)) goto L_12728aee;
  /* 12728ad8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12728adb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12728ade mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728ae1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12728ae4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12728aec jmp 0x12728abe */
  goto L_12728abe;
L_12728aee:;
  /* 12728aee jmp 0x12728af9 */
  goto L_12728af9;
L_12728af0:;
  /* 12728af0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12728af3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12728af9:;
  /* 12728af9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728afd je 0x12728b09 */
  if (C.zf) goto L_12728b09;
  /* 12728aff push 1 */
  push32((uint32_t)(0x1u));
  /* 12728b01 call 0x12728f50 */
  push32(0x12728b06u); f_12728f50();
  /* 12728b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728b09:;
  /* 12728b09 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728b0d jne 0x12728b20 */
  if (!C.zf) goto L_12728b20;
  /* 12728b0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728b12 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12728b15 push edx */
  push32((uint32_t)(EDX));
  /* 12728b16 push 8 */
  push32((uint32_t)(0x8u));
  /* 12728b18 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12728b1bu);
  /* 12728b1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728b1e jmp 0x12728b2a */
  goto L_12728b2a;
L_12728b20:;
  /* 12728b20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728b23 push eax */
  push32((uint32_t)(EAX));
  /* 12728b24 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12728b27u);
  /* 12728b27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728b2a:;
  /* 12728b2a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728b2e je 0x12728b3c */
  if (C.zf) goto L_12728b3c;
  /* 12728b30 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728b34 je 0x12728b3c */
  if (C.zf) goto L_12728b3c;
  /* 12728b36 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728b3a jne 0x12728b54 */
  if (!C.zf) goto L_12728b54;
L_12728b3c:;
  /* 12728b3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728b3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12728b42 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12728b45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728b49 jne 0x12728b54 */
  if (!C.zf) goto L_12728b54;
  /* 12728b4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728b4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12728b51 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12728b54:;
  /* 12728b54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12728b56:;
  /* 12728b56 mov esp, ebp */
  ESP = (EBP);
  /* 12728b58 pop ebp */
  EBP = (pop32());
  /* 12728b59 ret  */
  ESPCHK(0x12728950u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b90 @ 0x12728b90 (91 bytes, 35 insns) */
void f_12728b90(void) {
  FTRACE(0x12728b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12728b91 mov ebp, esp */
  EBP = (ESP);
  /* 12728b93 push ecx */
  push32((uint32_t)(ECX));
  /* 12728b94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728b97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12728b9a:;
  /* 12728b9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728b9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12728ba0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728ba3 je 0x12728bc3 */
  if (C.zf) goto L_12728bc3;
  /* 12728ba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728ba8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728bab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12728bae mov ecx, dword ptr [0x1274fc84] */
  ECX = (r32((uint32_t)(0x1274fc84)));
  /* 12728bb4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12728bb7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728bba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728bbc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728bbf jae 0x12728bc3 */
  if (!C.cf) goto L_12728bc3;
  /* 12728bc1 jmp 0x12728b9a */
  goto L_12728b9a;
L_12728bc3:;
  /* 12728bc3 mov eax, dword ptr [0x1274fc84] */
  EAX = (r32((uint32_t)(0x1274fc84)));
  /* 12728bc8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12728bcb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728bce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728bd0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728bd3 jae 0x12728be5 */
  if (!C.cf) goto L_12728be5;
  /* 12728bd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728bd8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12728bdb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728bde jne 0x12728be5 */
  if (!C.zf) goto L_12728be5;
  /* 12728be0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728be3 jmp 0x12728be7 */
  goto L_12728be7;
L_12728be5:;
  /* 12728be5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12728be7:;
  /* 12728be7 mov esp, ebp */
  ESP = (EBP);
  /* 12728be9 pop ebp */
  EBP = (pop32());
  /* 12728bea ret  */
  ESPCHK(0x12728b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bf0 @ 0x12728bf0 (13 bytes, 6 insns) */
void f_12728bf0(void) {
  FTRACE(0x12728bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12728bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12728bf3 call 0x12724ef0 */
  push32(0x12728bf8u); f_12724ef0();
  /* 12728bf8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728bfb pop ebp */
  EBP = (pop32());
  /* 12728bfc ret  */
  ESPCHK(0x12728bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c00 @ 0x12728c00 (13 bytes, 6 insns) */
void f_12728c00(void) {
  FTRACE(0x12728c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12728c01 mov ebp, esp */
  EBP = (ESP);
  /* 12728c03 call 0x12724ef0 */
  push32(0x12728c08u); f_12724ef0();
  /* 12728c08 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728c0b pop ebp */
  EBP = (pop32());
  /* 12728c0c ret  */
  ESPCHK(0x12728c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c10 @ 0x12728c10 (187 bytes, 54 insns) */
void f_12728c10(void) {
  FTRACE(0x12728c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12728c11 mov ebp, esp */
  EBP = (ESP);
  /* 12728c13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728c16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12728c1d cmp dword ptr [0x127517f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127517f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728c24 jne 0x12728c83 */
  if (!C.zf) goto L_12728c83;
  /* 12728c26 push 0x1274c66c */
  push32((uint32_t)(0x1274c66cu));
  /* 12728c2b call dword ptr [0x12754370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754370))), 0x12728c31u);
  /* 12728c31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12728c34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728c38 je 0x12728c57 */
  if (C.zf) goto L_12728c57;
  /* 12728c3a push 0x1274d270 */
  push32((uint32_t)(0x1274d270u));
  /* 12728c3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12728c42 push eax */
  push32((uint32_t)(EAX));
  /* 12728c43 call dword ptr [0x1275436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275436c))), 0x12728c49u);
  /* 12728c49 mov dword ptr [0x127517f4], eax */
  w32((uint32_t)(0x127517f4), (EAX));
  /* 12728c4e cmp dword ptr [0x127517f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127517f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728c55 jne 0x12728c5b */
  if (!C.zf) goto L_12728c5b;
L_12728c57:;
  /* 12728c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12728c59 jmp 0x12728cc7 */
  goto L_12728cc7;
L_12728c5b:;
  /* 12728c5b push 0x1274d260 */
  push32((uint32_t)(0x1274d260u));
  /* 12728c60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12728c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12728c64 call dword ptr [0x1275436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275436c))), 0x12728c6au);
  /* 12728c6a mov dword ptr [0x127517f8], eax */
  w32((uint32_t)(0x127517f8), (EAX));
  /* 12728c6f push 0x1274d24c */
  push32((uint32_t)(0x1274d24cu));
  /* 12728c74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12728c77 push edx */
  push32((uint32_t)(EDX));
  /* 12728c78 call dword ptr [0x1275436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275436c))), 0x12728c7eu);
  /* 12728c7e mov dword ptr [0x127517fc], eax */
  w32((uint32_t)(0x127517fc), (EAX));
L_12728c83:;
  /* 12728c83 cmp dword ptr [0x127517f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127517f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728c8a je 0x12728c95 */
  if (C.zf) goto L_12728c95;
  /* 12728c8c call dword ptr [0x127517f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127517f8))), 0x12728c92u);
  /* 12728c92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12728c95:;
  /* 12728c95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728c99 je 0x12728cb1 */
  if (C.zf) goto L_12728cb1;
  /* 12728c9b cmp dword ptr [0x127517fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127517fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728ca2 je 0x12728cb1 */
  if (C.zf) goto L_12728cb1;
  /* 12728ca4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728ca7 push eax */
  push32((uint32_t)(EAX));
  /* 12728ca8 call dword ptr [0x127517fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127517fc))), 0x12728caeu);
  /* 12728cae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12728cb1:;
  /* 12728cb1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12728cb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12728cb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728cb8 push edx */
  push32((uint32_t)(EDX));
  /* 12728cb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728cbc push eax */
  push32((uint32_t)(EAX));
  /* 12728cbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12728cc1 call dword ptr [0x127517f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127517f4))), 0x12728cc7u);
L_12728cc7:;
  /* 12728cc7 mov esp, ebp */
  ESP = (EBP);
  /* 12728cc9 pop ebp */
  EBP = (pop32());
  /* 12728cca ret  */
  ESPCHK(0x12728c10u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12728cd0 (254 bytes, 109 insns) */
void f_12728cd0(void) {
  FTRACE(0x12728cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728cd0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12728cd4 push edi */
  push32((uint32_t)(EDI));
  /* 12728cd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12728cd7 je 0x12728d53 */
  if (C.zf) goto L_12728d53;
  /* 12728cd9 push esi */
  push32((uint32_t)(ESI));
  /* 12728cda push ebx */
  push32((uint32_t)(EBX));
  /* 12728cdb mov ebx, ecx */
  EBX = (ECX);
  /* 12728cdd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12728ce1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12728ce7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12728ceb jne 0x12728cf4 */
  if (!C.zf) goto L_12728cf4;
  /* 12728ced shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12728cf0 jne 0x12728d61 */
  if (!C.zf) goto L_12728d61;
  /* 12728cf2 jmp 0x12728d15 */
  goto L_12728d15;
L_12728cf4:;
  /* 12728cf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12728cf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12728cf7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12728cf9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12728cfa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12728cfb je 0x12728d22 */
  if (C.zf) goto L_12728d22;
  /* 12728cfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12728cff je 0x12728d2a */
  if (C.zf) goto L_12728d2a;
  /* 12728d01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12728d07 jne 0x12728cf4 */
  if (!C.zf) goto L_12728cf4;
  /* 12728d09 mov ebx, ecx */
  EBX = (ECX);
  /* 12728d0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12728d0e jne 0x12728d61 */
  if (!C.zf) goto L_12728d61;
L_12728d10:;
  /* 12728d10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12728d13 je 0x12728d22 */
  if (C.zf) goto L_12728d22;
L_12728d15:;
  /* 12728d15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12728d17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12728d18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12728d1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12728d1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12728d1d je 0x12728d4e */
  if (C.zf) goto L_12728d4e;
  /* 12728d1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12728d20 jne 0x12728d15 */
  if (!C.zf) goto L_12728d15;
L_12728d22:;
  /* 12728d22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12728d26 pop ebx */
  EBX = (pop32());
  /* 12728d27 pop esi */
  ESI = (pop32());
  /* 12728d28 pop edi */
  EDI = (pop32());
  /* 12728d29 ret  */
  ESPCHK(0x12728cd0u, _esp0);
  ESP += 4; return;
L_12728d2a:;
  /* 12728d2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12728d30 je 0x12728d44 */
  if (C.zf) goto L_12728d44;
L_12728d32:;
  /* 12728d32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12728d34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12728d35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12728d36 je 0x12728dc6 */
  if (C.zf) goto L_12728dc6;
  /* 12728d3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12728d42 jne 0x12728d32 */
  if (!C.zf) goto L_12728d32;
L_12728d44:;
  /* 12728d44 mov ebx, ecx */
  EBX = (ECX);
  /* 12728d46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12728d49 jne 0x12728db7 */
  if (!C.zf) goto L_12728db7;
L_12728d4b:;
  /* 12728d4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12728d4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12728d4e:;
  /* 12728d4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12728d4f jne 0x12728d4b */
  if (!C.zf) goto L_12728d4b;
  /* 12728d51 pop ebx */
  EBX = (pop32());
  /* 12728d52 pop esi */
  ESI = (pop32());
L_12728d53:;
  /* 12728d53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12728d57 pop edi */
  EDI = (pop32());
  /* 12728d58 ret  */
  ESPCHK(0x12728cd0u, _esp0);
  ESP += 4; return;
L_12728d59:;
  /* 12728d59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12728d5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12728d5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12728d5f je 0x12728d10 */
  if (C.zf) goto L_12728d10;
L_12728d61:;
  /* 12728d61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12728d66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12728d68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728d6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12728d6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12728d6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12728d71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12728d74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12728d79 je 0x12728d59 */
  if (C.zf) goto L_12728d59;
  /* 12728d7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12728d7d je 0x12728dab */
  if (C.zf) goto L_12728dab;
  /* 12728d7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12728d81 je 0x12728da1 */
  if (C.zf) goto L_12728da1;
  /* 12728d83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12728d89 je 0x12728d97 */
  if (C.zf) goto L_12728d97;
  /* 12728d8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12728d91 jne 0x12728d59 */
  if (!C.zf) goto L_12728d59;
  /* 12728d93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12728d95 jmp 0x12728daf */
  goto L_12728daf;
L_12728d97:;
  /* 12728d97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12728d9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12728d9f jmp 0x12728daf */
  goto L_12728daf;
L_12728da1:;
  /* 12728da1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12728da7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12728da9 jmp 0x12728daf */
  goto L_12728daf;
L_12728dab:;
  /* 12728dab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12728dad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12728daf:;
  /* 12728daf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12728db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12728db4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12728db5 je 0x12728dc1 */
  if (C.zf) goto L_12728dc1;
L_12728db7:;
  /* 12728db7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12728db9:;
  /* 12728db9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12728dbb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12728dbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12728dbf jne 0x12728db9 */
  if (!C.zf) goto L_12728db9;
L_12728dc1:;
  /* 12728dc1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12728dc4 jne 0x12728d4b */
  if (!C.zf) goto L_12728d4b;
L_12728dc6:;
  /* 12728dc6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12728dca pop ebx */
  EBX = (pop32());
  /* 12728dcb pop esi */
  ESI = (pop32());
  /* 12728dcc pop edi */
  EDI = (pop32());
  /* 12728dcd ret  */
  ESPCHK(0x12728cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dd0 @ 0x12728dd0 (55 bytes, 16 insns) */
void f_12728dd0(void) {
  FTRACE(0x12728dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12728dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12728dd3 mov eax, dword ptr [0x1274fb84] */
  EAX = (r32((uint32_t)(0x1274fb84)));
  /* 12728dd8 push eax */
  push32((uint32_t)(EAX));
  /* 12728dd9 call dword ptr [0x12754330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754330))), 0x12728ddfu);
  /* 12728ddf mov ecx, dword ptr [0x1274fb74] */
  ECX = (r32((uint32_t)(0x1274fb74)));
  /* 12728de5 push ecx */
  push32((uint32_t)(ECX));
  /* 12728de6 call dword ptr [0x12754330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754330))), 0x12728decu);
  /* 12728dec mov edx, dword ptr [0x1274fb64] */
  EDX = (r32((uint32_t)(0x1274fb64)));
  /* 12728df2 push edx */
  push32((uint32_t)(EDX));
  /* 12728df3 call dword ptr [0x12754330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754330))), 0x12728df9u);
  /* 12728df9 mov eax, dword ptr [0x1274fb44] */
  EAX = (r32((uint32_t)(0x1274fb44)));
  /* 12728dfe push eax */
  push32((uint32_t)(EAX));
  /* 12728dff call dword ptr [0x12754330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754330))), 0x12728e05u);
  /* 12728e05 pop ebp */
  EBP = (pop32());
  /* 12728e06 ret  */
  ESPCHK(0x12728dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e10 @ 0x12728e10 (159 bytes, 47 insns) */
void f_12728e10(void) {
  FTRACE(0x12728e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12728e11 mov ebp, esp */
  EBP = (ESP);
  /* 12728e13 push ecx */
  push32((uint32_t)(ECX));
  /* 12728e14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12728e1b jmp 0x12728e26 */
  goto L_12728e26;
L_12728e1d:;
  /* 12728e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728e20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12728e23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12728e26:;
  /* 12728e26 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728e2a jge 0x12728e79 */
  if ((C.sf==C.of)) goto L_12728e79;
  /* 12728e2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728e2f cmp dword ptr [ecx*4 + 0x1274fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1274fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728e37 je 0x12728e77 */
  if (C.zf) goto L_12728e77;
  /* 12728e39 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728e3d je 0x12728e77 */
  if (C.zf) goto L_12728e77;
  /* 12728e3f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728e43 je 0x12728e77 */
  if (C.zf) goto L_12728e77;
  /* 12728e45 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728e49 je 0x12728e77 */
  if (C.zf) goto L_12728e77;
  /* 12728e4b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728e4f je 0x12728e77 */
  if (C.zf) goto L_12728e77;
  /* 12728e51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728e54 mov eax, dword ptr [edx*4 + 0x1274fb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1274fb40)));
  /* 12728e5b push eax */
  push32((uint32_t)(EAX));
  /* 12728e5c call dword ptr [0x127543b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b0))), 0x12728e62u);
  /* 12728e62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12728e64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728e67 mov edx, dword ptr [ecx*4 + 0x1274fb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1274fb40)));
  /* 12728e6e push edx */
  push32((uint32_t)(EDX));
  /* 12728e6f call 0x12725f40 */
  push32(0x12728e74u); f_12725f40();
  /* 12728e74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728e77:;
  /* 12728e77 jmp 0x12728e1d */
  goto L_12728e1d;
L_12728e79:;
  /* 12728e79 mov eax, dword ptr [0x1274fb64] */
  EAX = (r32((uint32_t)(0x1274fb64)));
  /* 12728e7e push eax */
  push32((uint32_t)(EAX));
  /* 12728e7f call dword ptr [0x127543b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b0))), 0x12728e85u);
  /* 12728e85 mov ecx, dword ptr [0x1274fb74] */
  ECX = (r32((uint32_t)(0x1274fb74)));
  /* 12728e8b push ecx */
  push32((uint32_t)(ECX));
  /* 12728e8c call dword ptr [0x127543b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b0))), 0x12728e92u);
  /* 12728e92 mov edx, dword ptr [0x1274fb84] */
  EDX = (r32((uint32_t)(0x1274fb84)));
  /* 12728e98 push edx */
  push32((uint32_t)(EDX));
  /* 12728e99 call dword ptr [0x127543b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b0))), 0x12728e9fu);
  /* 12728e9f mov eax, dword ptr [0x1274fb44] */
  EAX = (r32((uint32_t)(0x1274fb44)));
  /* 12728ea4 push eax */
  push32((uint32_t)(EAX));
  /* 12728ea5 call dword ptr [0x127543b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543b0))), 0x12728eabu);
  /* 12728eab mov esp, ebp */
  ESP = (EBP);
  /* 12728ead pop ebp */
  EBP = (pop32());
  /* 12728eae ret  */
  ESPCHK(0x12728e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eb0 @ 0x12728eb0 (151 bytes, 46 insns) */
void f_12728eb0(void) {
  FTRACE(0x12728eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12728eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12728eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12728eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728eb7 cmp dword ptr [eax*4 + 0x1274fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1274fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728ebf jne 0x12728f32 */
  if (!C.zf) goto L_12728f32;
  /* 12728ec1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12728ec6 push 0x1274d27c */
  push32((uint32_t)(0x1274d27cu));
  /* 12728ecb push 2 */
  push32((uint32_t)(0x2u));
  /* 12728ecd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12728ecf call 0x127254b0 */
  push32(0x12728ed4u); f_127254b0();
  /* 12728ed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728ed7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12728eda cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728ede jne 0x12728eea */
  if (!C.zf) goto L_12728eea;
  /* 12728ee0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12728ee2 call 0x12724420 */
  push32(0x12728ee7u); f_12724420();
  /* 12728ee7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728eea:;
  /* 12728eea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12728eec call 0x12728eb0 */
  push32(0x12728ef1u); f_12728eb0();
  /* 12728ef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728ef4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728ef7 cmp dword ptr [ecx*4 + 0x1274fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1274fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728eff jne 0x12728f1a */
  if (!C.zf) goto L_12728f1a;
  /* 12728f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728f04 push edx */
  push32((uint32_t)(EDX));
  /* 12728f05 call dword ptr [0x12754330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754330))), 0x12728f0bu);
  /* 12728f0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728f0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728f11 mov dword ptr [eax*4 + 0x1274fb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1274fb40), (ECX));
  /* 12728f18 jmp 0x12728f28 */
  goto L_12728f28;
L_12728f1a:;
  /* 12728f1a push 2 */
  push32((uint32_t)(0x2u));
  /* 12728f1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12728f1f push edx */
  push32((uint32_t)(EDX));
  /* 12728f20 call 0x12725f40 */
  push32(0x12728f25u); f_12725f40();
  /* 12728f25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728f28:;
  /* 12728f28 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12728f2a call 0x12728f50 */
  push32(0x12728f2fu); f_12728f50();
  /* 12728f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12728f32:;
  /* 12728f32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728f35 mov ecx, dword ptr [eax*4 + 0x1274fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1274fb40)));
  /* 12728f3c push ecx */
  push32((uint32_t)(ECX));
  /* 12728f3d call dword ptr [0x1275432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275432c))), 0x12728f43u);
  /* 12728f43 mov esp, ebp */
  ESP = (EBP);
  /* 12728f45 pop ebp */
  EBP = (pop32());
  /* 12728f46 ret  */
  ESPCHK(0x12728eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f50 @ 0x12728f50 (22 bytes, 8 insns) */
void f_12728f50(void) {
  FTRACE(0x12728f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12728f51 mov ebp, esp */
  EBP = (ESP);
  /* 12728f53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728f56 mov ecx, dword ptr [eax*4 + 0x1274fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1274fb40)));
  /* 12728f5d push ecx */
  push32((uint32_t)(ECX));
  /* 12728f5e call dword ptr [0x12754328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754328))), 0x12728f64u);
  /* 12728f64 pop ebp */
  EBP = (pop32());
  /* 12728f65 ret  */
  ESPCHK(0x12728f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f70 @ 0x12728f70 (26 bytes, 10 insns) */
void f_12728f70(void) {
  FTRACE(0x12728f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12728f71 mov ebp, esp */
  EBP = (ESP);
  /* 12728f73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728f76 push eax */
  push32((uint32_t)(EAX));
  /* 12728f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12728f79 call dword ptr [0x12754324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754324))), 0x12728f7fu);
  /* 12728f7f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12728f84 call dword ptr [0x1275437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275437c))), 0x12728f8au);
  /* 12728f8a pop ebp */
  EBP = (pop32());
  /* 12728f8b ret  */
  ESPCHK(0x12728f70u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12728f90 (446 bytes, 130 insns) */
void f_12728f90(void) {
  FTRACE(0x12728f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12728f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12728f91 mov ebp, esp */
  EBP = (ESP);
  /* 12728f93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12728f96 call 0x12724ef0 */
  push32(0x12728f9bu); f_12724ef0();
  /* 12728f9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12728f9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12728fa1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12728fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 12728fa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12728fa8 push edx */
  push32((uint32_t)(EDX));
  /* 12728fa9 call 0x12729150 */
  push32(0x12728faeu); f_12729150();
  /* 12728fae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12728fb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12728fb4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728fb8 je 0x12728fc3 */
  if (C.zf) goto L_12728fc3;
  /* 12728fba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12728fbd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728fc1 jne 0x12728fd2 */
  if (!C.zf) goto L_12728fd2;
L_12728fc3:;
  /* 12728fc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12728fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12728fc7 call dword ptr [0x12754320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754320))), 0x12728fcdu);
  /* 12728fcd jmp 0x1272914a */
  goto L_1272914a;
L_12728fd2:;
  /* 12728fd2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12728fd5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728fd9 jne 0x12728fef */
  if (!C.zf) goto L_12728fef;
  /* 12728fdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12728fde mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12728fe5 mov eax, 1 */
  EAX = (0x1u);
  /* 12728fea jmp 0x1272914a */
  goto L_1272914a;
L_12728fef:;
  /* 12728fef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12728ff2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12728ff6 jne 0x12729000 */
  if (!C.zf) goto L_12729000;
  /* 12728ff8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12728ffb jmp 0x1272914a */
  goto L_1272914a;
L_12729000:;
  /* 12729000 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12729003 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12729006 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12729009 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272900c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1272900f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12729012 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729015 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12729018 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1272901b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272901e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729022 jne 0x12729127 */
  if (!C.zf) goto L_12729127;
  /* 12729028 mov eax, dword ptr [0x1274fc78] */
  EAX = (r32((uint32_t)(0x1274fc78)));
  /* 1272902d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12729030 jmp 0x1272903b */
  goto L_1272903b;
L_12729032:;
  /* 12729032 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12729035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729038 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1272903b:;
  /* 1272903b mov edx, dword ptr [0x1274fc78] */
  EDX = (r32((uint32_t)(0x1274fc78)));
  /* 12729041 add edx, dword ptr [0x1274fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1274fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729047 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272904a jge 0x12729062 */
  if ((C.sf==C.of)) goto L_12729062;
  /* 1272904c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272904f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12729052 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729055 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12729058 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12729060 jmp 0x12729032 */
  goto L_12729032;
L_12729062:;
  /* 12729062 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729065 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12729068 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1272906b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272906e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729074 jne 0x12729085 */
  if (!C.zf) goto L_12729085;
  /* 12729076 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729079 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12729080 jmp 0x1272910d */
  goto L_1272910d;
L_12729085:;
  /* 12729085 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12729088 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272908e jne 0x1272909c */
  if (!C.zf) goto L_1272909c;
  /* 12729090 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729093 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1272909a jmp 0x1272910d */
  goto L_1272910d;
L_1272909c:;
  /* 1272909c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272909f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127290a5 jne 0x127290b3 */
  if (!C.zf) goto L_127290b3;
  /* 127290a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127290aa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 127290b1 jmp 0x1272910d */
  goto L_1272910d;
L_127290b3:;
  /* 127290b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127290b6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127290bc jne 0x127290ca */
  if (!C.zf) goto L_127290ca;
  /* 127290be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127290c1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 127290c8 jmp 0x1272910d */
  goto L_1272910d;
L_127290ca:;
  /* 127290ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127290cd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127290d3 jne 0x127290e1 */
  if (!C.zf) goto L_127290e1;
  /* 127290d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127290d8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 127290df jmp 0x1272910d */
  goto L_1272910d;
L_127290e1:;
  /* 127290e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127290e4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127290ea jne 0x127290f8 */
  if (!C.zf) goto L_127290f8;
  /* 127290ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127290ef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 127290f6 jmp 0x1272910d */
  goto L_1272910d;
L_127290f8:;
  /* 127290f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127290fb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729101 jne 0x1272910d */
  if (!C.zf) goto L_1272910d;
  /* 12729103 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729106 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1272910d:;
  /* 1272910d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729110 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12729113 push edx */
  push32((uint32_t)(EDX));
  /* 12729114 push 8 */
  push32((uint32_t)(0x8u));
  /* 12729116 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12729119u);
  /* 12729119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272911c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1272911f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12729122 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12729125 jmp 0x1272913e */
  goto L_1272913e;
L_12729127:;
  /* 12729127 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1272912a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12729131 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12729134 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12729137 push ecx */
  push32((uint32_t)(ECX));
  /* 12729138 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1272913bu);
  /* 1272913b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1272913e:;
  /* 1272913e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729141 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12729144 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12729147 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1272914a:;
  /* 1272914a mov esp, ebp */
  ESP = (EBP);
  /* 1272914c pop ebp */
  EBP = (pop32());
  /* 1272914d ret  */
  ESPCHK(0x12728f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009150 @ 0x12729150 (89 bytes, 35 insns) */
void f_12729150(void) {
  FTRACE(0x12729150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729150 push ebp */
  push32((uint32_t)(EBP));
  /* 12729151 mov ebp, esp */
  EBP = (ESP);
  /* 12729153 push ecx */
  push32((uint32_t)(ECX));
  /* 12729154 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12729157 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1272915a:;
  /* 1272915a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272915d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1272915f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729162 je 0x12729182 */
  if (C.zf) goto L_12729182;
  /* 12729164 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729167 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272916a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1272916d mov ecx, dword ptr [0x1274fc84] */
  ECX = (r32((uint32_t)(0x1274fc84)));
  /* 12729173 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12729176 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12729179 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272917b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272917e jae 0x12729182 */
  if (!C.cf) goto L_12729182;
  /* 12729180 jmp 0x1272915a */
  goto L_1272915a;
L_12729182:;
  /* 12729182 mov eax, dword ptr [0x1274fc84] */
  EAX = (r32((uint32_t)(0x1274fc84)));
  /* 12729187 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1272918a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272918d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272918f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729192 jae 0x1272919e */
  if (!C.cf) goto L_1272919e;
  /* 12729194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729197 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12729199 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272919c je 0x127291a2 */
  if (C.zf) goto L_127291a2;
L_1272919e:;
  /* 1272919e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127291a0 jmp 0x127291a5 */
  goto L_127291a5;
L_127291a2:;
  /* 127291a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127291a5:;
  /* 127291a5 mov esp, ebp */
  ESP = (EBP);
  /* 127291a7 pop ebp */
  EBP = (pop32());
  /* 127291a8 ret  */
  ESPCHK(0x12729150u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x127291b0 (48 bytes, 17 insns) */
void f_127291b0(void) {
  FTRACE(0x127291b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127291b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127291b1 mov ebp, esp */
  EBP = (ESP);
  /* 127291b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127291b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 127291b6 call 0x12728eb0 */
  push32(0x127291bbu); f_12728eb0();
  /* 127291bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127291be mov eax, dword ptr [0x12751864] */
  EAX = (r32((uint32_t)(0x12751864)));
  /* 127291c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127291c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127291c9 mov dword ptr [0x12751864], ecx */
  w32((uint32_t)(0x12751864), (ECX));
  /* 127291cf push 9 */
  push32((uint32_t)(0x9u));
  /* 127291d1 call 0x12728f50 */
  push32(0x127291d6u); f_12728f50();
  /* 127291d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127291d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127291dc mov esp, ebp */
  ESP = (EBP);
  /* 127291de pop ebp */
  EBP = (pop32());
  /* 127291df ret  */
  ESPCHK(0x127291b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100091e0 @ 0x127291e0 (10 bytes, 5 insns) */
void f_127291e0(void) {
  FTRACE(0x127291e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127291e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127291e1 mov ebp, esp */
  EBP = (ESP);
  /* 127291e3 mov eax, dword ptr [0x12751864] */
  EAX = (r32((uint32_t)(0x12751864)));
  /* 127291e8 pop ebp */
  EBP = (pop32());
  /* 127291e9 ret  */
  ESPCHK(0x127291e0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x127291f0 (45 bytes, 19 insns) */
void f_127291f0(void) {
  FTRACE(0x127291f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127291f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127291f1 mov ebp, esp */
  EBP = (ESP);
  /* 127291f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127291f4 mov eax, dword ptr [0x12751864] */
  EAX = (r32((uint32_t)(0x12751864)));
  /* 127291f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127291fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729200 je 0x12729210 */
  if (C.zf) goto L_12729210;
  /* 12729202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729205 push ecx */
  push32((uint32_t)(ECX));
  /* 12729206 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12729209u);
  /* 12729209 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272920c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272920e jne 0x12729214 */
  if (!C.zf) goto L_12729214;
L_12729210:;
  /* 12729210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12729212 jmp 0x12729219 */
  goto L_12729219;
L_12729214:;
  /* 12729214 mov eax, 1 */
  EAX = (0x1u);
L_12729219:;
  /* 12729219 mov esp, ebp */
  ESP = (EBP);
  /* 1272921b pop ebp */
  EBP = (pop32());
  /* 1272921c ret  */
  ESPCHK(0x127291f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12729220 (88 bytes, 40 insns) */
void f_12729220(void) {
  FTRACE(0x12729220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729220 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12729224 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12729228 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1272922a je 0x12729273 */
  if (C.zf) goto L_12729273;
  /* 1272922c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272922e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12729232 push edi */
  push32((uint32_t)(EDI));
  /* 12729233 mov edi, ecx */
  EDI = (ECX);
  /* 12729235 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729238 jb 0x12729267 */
  if (C.cf) goto L_12729267;
  /* 1272923a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1272923c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1272923f je 0x12729249 */
  if (C.zf) goto L_12729249;
  /* 12729241 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12729243:;
  /* 12729243 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12729245 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12729246 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12729247 jne 0x12729243 */
  if (!C.zf) goto L_12729243;
L_12729249:;
  /* 12729249 mov ecx, eax */
  ECX = (EAX);
  /* 1272924b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1272924e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729250 mov ecx, eax */
  ECX = (EAX);
  /* 12729252 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12729255 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729257 mov ecx, edx */
  ECX = (EDX);
  /* 12729259 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1272925c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1272925f je 0x12729267 */
  if (C.zf) goto L_12729267;
  /* 12729261 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12729263 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12729265 je 0x1272926d */
  if (C.zf) goto L_1272926d;
L_12729267:;
  /* 12729267 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12729269 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1272926a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1272926b jne 0x12729267 */
  if (!C.zf) goto L_12729267;
L_1272926d:;
  /* 1272926d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12729271 pop edi */
  EDI = (pop32());
  /* 12729272 ret  */
  ESPCHK(0x12729220u, _esp0);
  ESP += 4; return;
L_12729273:;
  /* 12729273 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12729277 ret  */
  ESPCHK(0x12729220u, _esp0);
  ESP += 4; return;
}

/* FUN_10009280 @ 0x12729280 (23 bytes, 10 insns) */
void f_12729280(void) {
  FTRACE(0x12729280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729280 push ebp */
  push32((uint32_t)(EBP));
  /* 12729281 mov ebp, esp */
  EBP = (ESP);
  /* 12729283 mov eax, dword ptr [0x12751860] */
  EAX = (r32((uint32_t)(0x12751860)));
  /* 12729288 push eax */
  push32((uint32_t)(EAX));
  /* 12729289 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272928c push ecx */
  push32((uint32_t)(ECX));
  /* 1272928d call 0x127292a0 */
  push32(0x12729292u); f_127292a0();
  /* 12729292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729295 pop ebp */
  EBP = (pop32());
  /* 12729296 ret  */
  ESPCHK(0x12729280u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x127292a0 (87 bytes, 34 insns) */
void f_127292a0(void) {
  FTRACE(0x127292a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127292a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127292a1 mov ebp, esp */
  EBP = (ESP);
  /* 127292a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127292a4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127292a8 jbe 0x127292ae */
  if ((C.cf||C.zf)) goto L_127292ae;
  /* 127292aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127292ac jmp 0x127292f3 */
  goto L_127292f3;
L_127292ae:;
  /* 127292ae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127292b2 ja 0x127292c5 */
  if ((!C.cf&&!C.zf)) goto L_127292c5;
  /* 127292b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127292b7 push eax */
  push32((uint32_t)(EAX));
  /* 127292b8 call 0x12729300 */
  push32(0x127292bdu); f_12729300();
  /* 127292bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127292c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127292c3 jmp 0x127292cc */
  goto L_127292cc;
L_127292c5:;
  /* 127292c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127292cc:;
  /* 127292cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127292d0 jne 0x127292d8 */
  if (!C.zf) goto L_127292d8;
  /* 127292d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127292d6 jne 0x127292dd */
  if (!C.zf) goto L_127292dd;
L_127292d8:;
  /* 127292d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127292db jmp 0x127292f3 */
  goto L_127292f3;
L_127292dd:;
  /* 127292dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127292e0 push ecx */
  push32((uint32_t)(ECX));
  /* 127292e1 call 0x127291f0 */
  push32(0x127292e6u); f_127291f0();
  /* 127292e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127292e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127292eb jne 0x127292f1 */
  if (!C.zf) goto L_127292f1;
  /* 127292ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127292ef jmp 0x127292f3 */
  goto L_127292f3;
L_127292f1:;
  /* 127292f1 jmp 0x127292ae */
  goto L_127292ae;
L_127292f3:;
  /* 127292f3 mov esp, ebp */
  ESP = (EBP);
  /* 127292f5 pop ebp */
  EBP = (pop32());
  /* 127292f6 ret  */
  ESPCHK(0x127292a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009300 @ 0x12729300 (109 bytes, 37 insns) */
void f_12729300(void) {
  FTRACE(0x12729300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729300 push ebp */
  push32((uint32_t)(EBP));
  /* 12729301 mov ebp, esp */
  EBP = (ESP);
  /* 12729303 push ecx */
  push32((uint32_t)(ECX));
  /* 12729304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729307 cmp eax, dword ptr [0x1274fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1274fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272930d ja 0x1272933d */
  if ((!C.cf&&!C.zf)) goto L_1272933d;
  /* 1272930f push 9 */
  push32((uint32_t)(0x9u));
  /* 12729311 call 0x12728eb0 */
  push32(0x12729316u); f_12728eb0();
  /* 12729316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272931c push ecx */
  push32((uint32_t)(ECX));
  /* 1272931d call 0x12729e40 */
  push32(0x12729322u); f_12729e40();
  /* 12729322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729325 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12729328 push 9 */
  push32((uint32_t)(0x9u));
  /* 1272932a call 0x12728f50 */
  push32(0x1272932fu); f_12728f50();
  /* 1272932f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729332 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729336 je 0x1272933d */
  if (C.zf) goto L_1272933d;
  /* 12729338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1272933b jmp 0x12729369 */
  goto L_12729369;
L_1272933d:;
  /* 1272933d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729341 jne 0x1272934a */
  if (!C.zf) goto L_1272934a;
  /* 12729343 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1272934a:;
  /* 1272934a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272934d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729350 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12729353 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12729356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729359 push eax */
  push32((uint32_t)(EAX));
  /* 1272935a push 0 */
  push32((uint32_t)(0x0u));
  /* 1272935c mov ecx, dword ptr [0x1275302c] */
  ECX = (r32((uint32_t)(0x1275302c)));
  /* 12729362 push ecx */
  push32((uint32_t)(ECX));
  /* 12729363 call dword ptr [0x1275431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275431c))), 0x12729369u);
L_12729369:;
  /* 12729369 mov esp, ebp */
  ESP = (EBP);
  /* 1272936b pop ebp */
  EBP = (pop32());
  /* 1272936c ret  */
  ESPCHK(0x12729300u, _esp0);
  ESP += 4; return;
}

/* FUN_10009370 @ 0x12729370 (10 bytes, 5 insns) */
void f_12729370(void) {
  FTRACE(0x12729370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729370 push ebp */
  push32((uint32_t)(EBP));
  /* 12729371 mov ebp, esp */
  EBP = (ESP);
  /* 12729373 mov eax, 1 */
  EAX = (0x1u);
  /* 12729378 pop ebp */
  EBP = (pop32());
  /* 12729379 ret  */
  ESPCHK(0x12729370u, _esp0);
  ESP += 4; return;
}

/* FUN_10009380 @ 0x12729380 (173 bytes, 59 insns) */
void f_12729380(void) {
  FTRACE(0x12729380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729380 push ebp */
  push32((uint32_t)(EBP));
  /* 12729381 mov ebp, esp */
  EBP = (ESP);
  /* 12729383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729386 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272938a jbe 0x12729393 */
  if ((C.cf||C.zf)) goto L_12729393;
  /* 1272938c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272938e jmp 0x12729429 */
  goto L_12729429;
L_12729393:;
  /* 12729393 push 9 */
  push32((uint32_t)(0x9u));
  /* 12729395 call 0x12728eb0 */
  push32(0x1272939au); f_12728eb0();
  /* 1272939a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272939d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127293a0 push eax */
  push32((uint32_t)(EAX));
  /* 127293a1 call 0x127297b0 */
  push32(0x127293a6u); f_127297b0();
  /* 127293a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127293a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127293ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127293b0 je 0x127293f1 */
  if (C.zf) goto L_127293f1;
  /* 127293b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127293b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127293bc cmp ecx, dword ptr [0x1274fc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1274fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127293c2 ja 0x127293e2 */
  if ((!C.cf&&!C.zf)) goto L_127293e2;
  /* 127293c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127293c7 push edx */
  push32((uint32_t)(EDX));
  /* 127293c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127293cb push eax */
  push32((uint32_t)(EAX));
  /* 127293cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127293cf push ecx */
  push32((uint32_t)(ECX));
  /* 127293d0 call 0x1272a680 */
  push32(0x127293d5u); f_1272a680();
  /* 127293d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127293d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127293da je 0x127293e2 */
  if (C.zf) goto L_127293e2;
  /* 127293dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127293df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127293e2:;
  /* 127293e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 127293e4 call 0x12728f50 */
  push32(0x127293e9u); f_12728f50();
  /* 127293e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127293ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127293ef jmp 0x12729429 */
  goto L_12729429;
L_127293f1:;
  /* 127293f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 127293f3 call 0x12728f50 */
  push32(0x127293f8u); f_12728f50();
  /* 127293f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127293fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127293ff jne 0x12729408 */
  if (!C.zf) goto L_12729408;
  /* 12729401 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12729408:;
  /* 12729408 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272940b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1272940e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12729410 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12729413 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12729416 push ecx */
  push32((uint32_t)(ECX));
  /* 12729417 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272941a push edx */
  push32((uint32_t)(EDX));
  /* 1272941b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1272941d mov eax, dword ptr [0x1275302c] */
  EAX = (r32((uint32_t)(0x1275302c)));
  /* 12729422 push eax */
  push32((uint32_t)(EAX));
  /* 12729423 call dword ptr [0x12754318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754318))), 0x12729429u);
L_12729429:;
  /* 12729429 mov esp, ebp */
  ESP = (EBP);
  /* 1272942b pop ebp */
  EBP = (pop32());
  /* 1272942c ret  */
  ESPCHK(0x12729380u, _esp0);
  ESP += 4; return;
}

/* FUN_10009430 @ 0x12729430 (490 bytes, 165 insns) */
void f_12729430(void) {
  FTRACE(0x12729430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729430 push ebp */
  push32((uint32_t)(EBP));
  /* 12729431 mov ebp, esp */
  EBP = (ESP);
  /* 12729433 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729436 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272943a jne 0x1272944d */
  if (!C.zf) goto L_1272944d;
  /* 1272943c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272943f push eax */
  push32((uint32_t)(EAX));
  /* 12729440 call 0x12729280 */
  push32(0x12729445u); f_12729280();
  /* 12729445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729448 jmp 0x12729616 */
  goto L_12729616;
L_1272944d:;
  /* 1272944d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729451 jne 0x12729466 */
  if (!C.zf) goto L_12729466;
  /* 12729453 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729456 push ecx */
  push32((uint32_t)(ECX));
  /* 12729457 call 0x12729620 */
  push32(0x1272945cu); f_12729620();
  /* 1272945c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272945f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12729461 jmp 0x12729616 */
  goto L_12729616;
L_12729466:;
  /* 12729466 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1272946d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729471 ja 0x127295e9 */
  if ((!C.cf&&!C.zf)) goto L_127295e9;
  /* 12729477 push 9 */
  push32((uint32_t)(0x9u));
  /* 12729479 call 0x12728eb0 */
  push32(0x1272947eu); f_12728eb0();
  /* 1272947e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729481 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729484 push edx */
  push32((uint32_t)(EDX));
  /* 12729485 call 0x127297b0 */
  push32(0x1272948au); f_127297b0();
  /* 1272948a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272948d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12729490 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729494 je 0x127295ac */
  if (C.zf) goto L_127295ac;
  /* 1272949a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1272949d cmp eax, dword ptr [0x1274fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1274fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127294a3 ja 0x12729520 */
  if ((!C.cf&&!C.zf)) goto L_12729520;
  /* 127294a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127294a8 push ecx */
  push32((uint32_t)(ECX));
  /* 127294a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127294ac push edx */
  push32((uint32_t)(EDX));
  /* 127294ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127294b0 push eax */
  push32((uint32_t)(EAX));
  /* 127294b1 call 0x1272a680 */
  push32(0x127294b6u); f_1272a680();
  /* 127294b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127294b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127294bb je 0x127294c5 */
  if (C.zf) goto L_127294c5;
  /* 127294bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127294c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127294c3 jmp 0x12729520 */
  goto L_12729520;
L_127294c5:;
  /* 127294c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127294c8 push edx */
  push32((uint32_t)(EDX));
  /* 127294c9 call 0x12729e40 */
  push32(0x127294ceu); f_12729e40();
  /* 127294ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127294d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127294d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127294d8 je 0x12729520 */
  if (C.zf) goto L_12729520;
  /* 127294da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127294dd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 127294e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127294e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127294e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127294e9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127294ec jae 0x127294f6 */
  if (!C.cf) goto L_127294f6;
  /* 127294ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127294f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127294f4 jmp 0x127294fc */
  goto L_127294fc;
L_127294f6:;
  /* 127294f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127294f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127294fc:;
  /* 127294fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127294ff push edx */
  push32((uint32_t)(EDX));
  /* 12729500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729503 push eax */
  push32((uint32_t)(EAX));
  /* 12729504 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729507 push ecx */
  push32((uint32_t)(ECX));
  /* 12729508 call 0x1272bd90 */
  push32(0x1272950du); f_1272bd90();
  /* 1272950d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729510 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729513 push edx */
  push32((uint32_t)(EDX));
  /* 12729514 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12729517 push eax */
  push32((uint32_t)(EAX));
  /* 12729518 call 0x12729870 */
  push32(0x1272951du); f_12729870();
  /* 1272951d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12729520:;
  /* 12729520 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729524 jne 0x127295a0 */
  if (!C.zf) goto L_127295a0;
  /* 12729526 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272952a jne 0x12729533 */
  if (!C.zf) goto L_12729533;
  /* 1272952c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12729533:;
  /* 12729533 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12729536 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12729539 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1272953c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1272953f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12729542 push edx */
  push32((uint32_t)(EDX));
  /* 12729543 push 0 */
  push32((uint32_t)(0x0u));
  /* 12729545 mov eax, dword ptr [0x1275302c] */
  EAX = (r32((uint32_t)(0x1275302c)));
  /* 1272954a push eax */
  push32((uint32_t)(EAX));
  /* 1272954b call dword ptr [0x1275431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275431c))), 0x12729551u);
  /* 12729551 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12729554 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729558 je 0x127295a0 */
  if (C.zf) goto L_127295a0;
  /* 1272955a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272955d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12729560 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12729563 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12729566 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729569 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1272956c jae 0x12729576 */
  if (!C.cf) goto L_12729576;
  /* 1272956e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729571 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12729574 jmp 0x1272957c */
  goto L_1272957c;
L_12729576:;
  /* 12729576 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12729579 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1272957c:;
  /* 1272957c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1272957f push eax */
  push32((uint32_t)(EAX));
  /* 12729580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729583 push ecx */
  push32((uint32_t)(ECX));
  /* 12729584 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12729587 push edx */
  push32((uint32_t)(EDX));
  /* 12729588 call 0x1272bd90 */
  push32(0x1272958du); f_1272bd90();
  /* 1272958d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729593 push eax */
  push32((uint32_t)(EAX));
  /* 12729594 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12729597 push ecx */
  push32((uint32_t)(ECX));
  /* 12729598 call 0x12729870 */
  push32(0x1272959du); f_12729870();
  /* 1272959d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127295a0:;
  /* 127295a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 127295a2 call 0x12728f50 */
  push32(0x127295a7u); f_12728f50();
  /* 127295a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127295aa jmp 0x127295e9 */
  goto L_127295e9;
L_127295ac:;
  /* 127295ac push 9 */
  push32((uint32_t)(0x9u));
  /* 127295ae call 0x12728f50 */
  push32(0x127295b3u); f_12728f50();
  /* 127295b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127295b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127295ba jne 0x127295c3 */
  if (!C.zf) goto L_127295c3;
  /* 127295bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_127295c3:;
  /* 127295c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127295c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127295c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 127295cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 127295cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127295d2 push eax */
  push32((uint32_t)(EAX));
  /* 127295d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127295d6 push ecx */
  push32((uint32_t)(ECX));
  /* 127295d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127295d9 mov edx, dword ptr [0x1275302c] */
  EDX = (r32((uint32_t)(0x1275302c)));
  /* 127295df push edx */
  push32((uint32_t)(EDX));
  /* 127295e0 call dword ptr [0x12754318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12754318))), 0x127295e6u);
  /* 127295e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127295e9:;
  /* 127295e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127295ed jne 0x127295f8 */
  if (!C.zf) goto L_127295f8;
  /* 127295ef cmp dword ptr [0x12751860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12751860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127295f6 jne 0x127295fd */
  if (!C.zf) goto L_127295fd;
L_127295f8:;
  /* 127295f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127295fb jmp 0x12729616 */
  goto L_12729616;
L_127295fd:;
  /* 127295fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12729600 push eax */
  push32((uint32_t)(EAX));
  /* 12729601 call 0x127291f0 */
  push32(0x12729606u); f_127291f0();
  /* 12729606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729609 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1272960b jne 0x12729611 */
  if (!C.zf) goto L_12729611;
  /* 1272960d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1272960f jmp 0x12729616 */
  goto L_12729616;
L_12729611:;
  /* 12729611 jmp 0x12729466 */
  goto L_12729466;
L_12729616:;
  /* 12729616 mov esp, ebp */
  ESP = (EBP);
  /* 12729618 pop ebp */
  EBP = (pop32());
  /* 12729619 ret  */
  ESPCHK(0x12729430u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x12729620 (104 bytes, 38 insns) */
void f_12729620(void) {
  FTRACE(0x12729620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729620 push ebp */
  push32((uint32_t)(EBP));
  /* 12729621 mov ebp, esp */
  EBP = (ESP);
  /* 12729623 push ecx */
  push32((uint32_t)(ECX));
  /* 12729624 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729628 jne 0x1272962c */
  if (!C.zf) goto L_1272962c;
  /* 1272962a jmp 0x12729684 */
  goto L_12729684;
L_1272962c:;
  /* 1272962c push 9 */
  push32((uint32_t)(0x9u));
  /* 1272962e call 0x12728eb0 */
  push32(0x12729633u); f_12728eb0();
  /* 12729633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729639 push eax */
  push32((uint32_t)(EAX));
  /* 1272963a call 0x127297b0 */
  push32(0x1272963fu); f_127297b0();
  /* 1272963f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729642 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12729645 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12729649 je 0x12729667 */
  if (C.zf) goto L_12729667;
  /* 1272964b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1272964e push ecx */
  push32((uint32_t)(ECX));
  /* 1272964f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729652 push edx */
  push32((uint32_t)(EDX));
  /* 12729653 call 0x12729870 */
  push32(0x12729658u); f_12729870();
  /* 12729658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1272965b push 9 */
  push32((uint32_t)(0x9u));
  /* 1272965d call 0x12728f50 */
  push32(0x12729662u); f_12728f50();
  /* 12729662 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729665 jmp 0x12729684 */
  goto L_12729684;
L_12729667:;
  /* 12729667 push 9 */
  push32((uint32_t)(0x9u));
  /* 12729669 call 0x12728f50 */
  push32(0x1272966eu); f_12728f50();
  /* 1272966e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12729671 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12729674 push eax */
  push32((uint32_t)(EAX));
  /* 12729675 push 0 */
  push32((uint32_t)(0x0u));
  /* 12729677 mov ecx, dword ptr [0x1275302c] */
  ECX = (r32((uint32_t)(0x1275302c)));
  /* 1272967d push ecx */
  push32((uint32_t)(ECX));
  /* 1272967e call dword ptr [0x1275433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275433c))), 0x12729684u);
L_12729684:;
  /* 12729684 mov esp, ebp */
  ESP = (EBP);
  /* 12729686 pop ebp */
  EBP = (pop32());
  /* 12729687 ret  */
  ESPCHK(0x12729620u, _esp0);
  ESP += 4; return;
}

/* FUN_10009690 @ 0x12729690 (116 bytes, 34 insns) */
void f_12729690(void) {
  FTRACE(0x12729690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729690 push ebp */
  push32((uint32_t)(EBP));
  /* 12729691 mov ebp, esp */
  EBP = (ESP);
  /* 12729693 push ecx */
  push32((uint32_t)(ECX));
  /* 12729694 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1272969b push 9 */
  push32((uint32_t)(0x9u));
  /* 1272969d call 0x12728eb0 */
  push32(0x127296a2u); f_12728eb0();
  /* 127296a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127296a5 call 0x1272ada0 */
  push32(0x127296aau); f_1272ada0();
  /* 127296aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127296ac jge 0x127296b5 */
  if ((C.sf==C.of)) goto L_127296b5;
  /* 127296ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_127296b5:;
  /* 127296b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 127296b7 call 0x12728f50 */
  push32(0x127296bcu); f_12728f50();
  /* 127296bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127296bf push 0 */
  push32((uint32_t)(0x0u));
  /* 127296c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127296c3 mov eax, dword ptr [0x1275302c] */
  EAX = (r32((uint32_t)(0x1275302c)));
  /* 127296c8 push eax */
  push32((uint32_t)(EAX));
  /* 127296c9 call dword ptr [0x127543bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127543bc))), 0x127296cfu);
  /* 127296cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127296d1 jne 0x127296fd */
  if (!C.zf) goto L_127296fd;
  /* 127296d3 call dword ptr [0x1275439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1275439c))), 0x127296d9u);
  /* 127296d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127296dc jne 0x127296f6 */
  if (!C.zf) goto L_127296f6;
  /* 127296de call 0x1272d390 */
  push32(0x127296e3u); f_1272d390();
  /* 127296e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 127296e9 call 0x1272d380 */
  push32(0x127296eeu); f_1272d380();
  /* 127296ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 127296f4 jmp 0x127296fd */
  goto L_127296fd;
L_127296f6:;
  /* 127296f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_127296fd:;
  /* 127296fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12729700 mov esp, ebp */
  ESP = (EBP);
  /* 12729702 pop ebp */
  EBP = (pop32());
  /* 12729703 ret  */
  ESPCHK(0x12729690u, _esp0);
  ESP += 4; return;
}

/* FUN_10009710 @ 0x12729710 (10 bytes, 5 insns) */
void f_12729710(void) {
  FTRACE(0x12729710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12729710 push ebp */
  push32((uint32_t)(EBP));
  /* 12729711 mov ebp, esp */
  EBP = (ESP);
  /* 12729713 call 0x12729690 */
  push32(0x12729718u); f_12729690();
  /* 12729718 pop ebp */
  EBP = (pop32());
  /* 12729719 ret  */
  ESPCHK(0x12729710u, _esp0);
  ESP += 4; return;
}

