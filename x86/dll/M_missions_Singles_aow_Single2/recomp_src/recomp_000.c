#include "recomp.h"

/* thunk_FUN_100066e0 @ 0x12191005 (5 bytes, 1 insns) */
void f_12191005(void) {
  FTRACE(0x12191005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12191005 jmp 0x121966e0 */
  f_121966e0(); return;
}

/* OnInit @ 0x1219100a (5 bytes, 1 insns) */
void f_1219100a(void) {
  FTRACE(0x1219100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219100a jmp 0x12191090 */
  f_12191090(); return;
}

/* thunk_FUN_10001030 @ 0x1219100f (5 bytes, 1 insns) */
void f_1219100f(void) {
  FTRACE(0x1219100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219100f jmp 0x12191030 */
  f_12191030(); return;
}

/* ProcessScenary @ 0x12191014 (5 bytes, 1 insns) */
void f_12191014(void) {
  FTRACE(0x12191014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12191014 jmp 0x12191f90 */
  f_12191f90(); return;
}

/* FUN_10001030 @ 0x12191030 (67 bytes, 26 insns) */
void f_12191030(void) {
  FTRACE(0x12191030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12191030 push ebp */
  push32((uint32_t)(EBP));
  /* 12191031 mov ebp, esp */
  EBP = (ESP);
  /* 12191033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12191036 push ebx */
  push32((uint32_t)(EBX));
  /* 12191037 push esi */
  push32((uint32_t)(ESI));
  /* 12191038 push edi */
  push32((uint32_t)(EDI));
  /* 12191039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1219103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12191041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12191046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12191048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191052 je 0x12191056 */
  if (C.zf) goto L_12191056;
  /* 12191054 jmp 0x1219105b */
  goto L_1219105b;
L_12191056:;
  /* 12191056 call 0x1219100a */
  push32(0x1219105bu); f_1219100a();
L_1219105b:;
  /* 1219105b mov eax, 1 */
  EAX = (0x1u);
  /* 12191060 pop edi */
  EDI = (pop32());
  /* 12191061 pop esi */
  ESI = (pop32());
  /* 12191062 pop ebx */
  EBX = (pop32());
  /* 12191063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191068 call 0x12196800 */
  push32(0x1219106du); f_12196800();
  /* 1219106d mov esp, ebp */
  ESP = (EBP);
  /* 1219106f pop ebp */
  EBP = (pop32());
  /* 12191070 ret 0xc */
  ESPCHK(0x12191030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12191090 (3069 bytes, 821 insns) */
void f_12191090(void) {
  FTRACE(0x12191090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12191090 push ebp */
  push32((uint32_t)(EBP));
  /* 12191091 mov ebp, esp */
  EBP = (ESP);
  /* 12191093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12191096 push ebx */
  push32((uint32_t)(EBX));
  /* 12191097 push esi */
  push32((uint32_t)(ESI));
  /* 12191098 push edi */
  push32((uint32_t)(EDI));
  /* 12191099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1219109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 121910a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 121910a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 121910a8 mov esi, esp */
  ESI = (ESP);
  /* 121910aa push 0x121be130 */
  push32((uint32_t)(0x121be130u));
  /* 121910af push 0x121c33e0 */
  push32((uint32_t)(0x121c33e0u));
  /* 121910b4 call dword ptr [0x121c6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6474))), 0x121910bau);
  /* 121910ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121910bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121910bf call 0x12196800 */
  push32(0x121910c4u); f_12196800();
  /* 121910c4 mov esi, esp */
  ESI = (ESP);
  /* 121910c6 push 0x121be12c */
  push32((uint32_t)(0x121be12cu));
  /* 121910cb push 0x121c33f0 */
  push32((uint32_t)(0x121c33f0u));
  /* 121910d0 call dword ptr [0x121c6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6474))), 0x121910d6u);
  /* 121910d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121910d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121910db call 0x12196800 */
  push32(0x121910e0u); f_12196800();
  /* 121910e0 mov esi, esp */
  ESI = (ESP);
  /* 121910e2 push 0x121be128 */
  push32((uint32_t)(0x121be128u));
  /* 121910e7 push 0x121c33e8 */
  push32((uint32_t)(0x121c33e8u));
  /* 121910ec call dword ptr [0x121c6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6474))), 0x121910f2u);
  /* 121910f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121910f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121910f7 call 0x12196800 */
  push32(0x121910fcu); f_12196800();
  /* 121910fc mov esi, esp */
  ESI = (ESP);
  /* 121910fe push 0x121be124 */
  push32((uint32_t)(0x121be124u));
  /* 12191103 push 0x121c33f8 */
  push32((uint32_t)(0x121c33f8u));
  /* 12191108 call dword ptr [0x121c6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6474))), 0x1219110eu);
  /* 1219110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191113 call 0x12196800 */
  push32(0x12191118u); f_12196800();
  /* 12191118 mov esi, esp */
  ESI = (ESP);
  /* 1219111a push 0x121be120 */
  push32((uint32_t)(0x121be120u));
  /* 1219111f push 0x121c3400 */
  push32((uint32_t)(0x121c3400u));
  /* 12191124 call dword ptr [0x121c6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6474))), 0x1219112au);
  /* 1219112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219112f call 0x12196800 */
  push32(0x12191134u); f_12196800();
  /* 12191134 mov esi, esp */
  ESI = (ESP);
  /* 12191136 push 0x121be11c */
  push32((uint32_t)(0x121be11cu));
  /* 1219113b push 0x121c3428 */
  push32((uint32_t)(0x121c3428u));
  /* 12191140 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191146u);
  /* 12191146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219114b call 0x12196800 */
  push32(0x12191150u); f_12196800();
  /* 12191150 mov esi, esp */
  ESI = (ESP);
  /* 12191152 push 0x121be118 */
  push32((uint32_t)(0x121be118u));
  /* 12191157 push 0x121c3430 */
  push32((uint32_t)(0x121c3430u));
  /* 1219115c call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191162u);
  /* 12191162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191167 call 0x12196800 */
  push32(0x1219116cu); f_12196800();
  /* 1219116c mov esi, esp */
  ESI = (ESP);
  /* 1219116e push 0x121be114 */
  push32((uint32_t)(0x121be114u));
  /* 12191173 push 0x121c3438 */
  push32((uint32_t)(0x121c3438u));
  /* 12191178 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219117eu);
  /* 1219117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191183 call 0x12196800 */
  push32(0x12191188u); f_12196800();
  /* 12191188 mov esi, esp */
  ESI = (ESP);
  /* 1219118a push 0x121be110 */
  push32((uint32_t)(0x121be110u));
  /* 1219118f push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12191194 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219119au);
  /* 1219119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219119f call 0x12196800 */
  push32(0x121911a4u); f_12196800();
  /* 121911a4 mov esi, esp */
  ESI = (ESP);
  /* 121911a6 push 0x121be10c */
  push32((uint32_t)(0x121be10cu));
  /* 121911ab push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 121911b0 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121911b6u);
  /* 121911b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121911b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121911bb call 0x12196800 */
  push32(0x121911c0u); f_12196800();
  /* 121911c0 mov esi, esp */
  ESI = (ESP);
  /* 121911c2 push 0x121be108 */
  push32((uint32_t)(0x121be108u));
  /* 121911c7 push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 121911cc call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121911d2u);
  /* 121911d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121911d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121911d7 call 0x12196800 */
  push32(0x121911dcu); f_12196800();
  /* 121911dc mov esi, esp */
  ESI = (ESP);
  /* 121911de push 0x121be104 */
  push32((uint32_t)(0x121be104u));
  /* 121911e3 push 0x121c3458 */
  push32((uint32_t)(0x121c3458u));
  /* 121911e8 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121911eeu);
  /* 121911ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121911f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121911f3 call 0x12196800 */
  push32(0x121911f8u); f_12196800();
  /* 121911f8 mov esi, esp */
  ESI = (ESP);
  /* 121911fa push 0x121be100 */
  push32((uint32_t)(0x121be100u));
  /* 121911ff push 0x121c3460 */
  push32((uint32_t)(0x121c3460u));
  /* 12191204 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219120au);
  /* 1219120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219120f call 0x12196800 */
  push32(0x12191214u); f_12196800();
  /* 12191214 mov esi, esp */
  ESI = (ESP);
  /* 12191216 push 0x121be0fc */
  push32((uint32_t)(0x121be0fcu));
  /* 1219121b push 0x121c3468 */
  push32((uint32_t)(0x121c3468u));
  /* 12191220 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191226u);
  /* 12191226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219122b call 0x12196800 */
  push32(0x12191230u); f_12196800();
  /* 12191230 mov esi, esp */
  ESI = (ESP);
  /* 12191232 push 0x121be0f8 */
  push32((uint32_t)(0x121be0f8u));
  /* 12191237 push 0x121c3570 */
  push32((uint32_t)(0x121c3570u));
  /* 1219123c call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191242u);
  /* 12191242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191247 call 0x12196800 */
  push32(0x1219124cu); f_12196800();
  /* 1219124c mov esi, esp */
  ESI = (ESP);
  /* 1219124e push 0x121be0f4 */
  push32((uint32_t)(0x121be0f4u));
  /* 12191253 push 0x121c3578 */
  push32((uint32_t)(0x121c3578u));
  /* 12191258 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219125eu);
  /* 1219125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191263 call 0x12196800 */
  push32(0x12191268u); f_12196800();
  /* 12191268 mov esi, esp */
  ESI = (ESP);
  /* 1219126a push 0x121be0f0 */
  push32((uint32_t)(0x121be0f0u));
  /* 1219126f push 0x121c3580 */
  push32((uint32_t)(0x121c3580u));
  /* 12191274 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219127au);
  /* 1219127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219127f call 0x12196800 */
  push32(0x12191284u); f_12196800();
  /* 12191284 mov esi, esp */
  ESI = (ESP);
  /* 12191286 push 0x121be0ec */
  push32((uint32_t)(0x121be0ecu));
  /* 1219128b push 0x121c3588 */
  push32((uint32_t)(0x121c3588u));
  /* 12191290 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191296u);
  /* 12191296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219129b call 0x12196800 */
  push32(0x121912a0u); f_12196800();
  /* 121912a0 mov esi, esp */
  ESI = (ESP);
  /* 121912a2 push 0x121be0e8 */
  push32((uint32_t)(0x121be0e8u));
  /* 121912a7 push 0x121c3598 */
  push32((uint32_t)(0x121c3598u));
  /* 121912ac call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121912b2u);
  /* 121912b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121912b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121912b7 call 0x12196800 */
  push32(0x121912bcu); f_12196800();
  /* 121912bc mov esi, esp */
  ESI = (ESP);
  /* 121912be push 0x121be0e4 */
  push32((uint32_t)(0x121be0e4u));
  /* 121912c3 push 0x121c35a8 */
  push32((uint32_t)(0x121c35a8u));
  /* 121912c8 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121912ceu);
  /* 121912ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121912d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121912d3 call 0x12196800 */
  push32(0x121912d8u); f_12196800();
  /* 121912d8 mov esi, esp */
  ESI = (ESP);
  /* 121912da push 0x121be0e0 */
  push32((uint32_t)(0x121be0e0u));
  /* 121912df push 0x121c35b8 */
  push32((uint32_t)(0x121c35b8u));
  /* 121912e4 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121912eau);
  /* 121912ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121912ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121912ef call 0x12196800 */
  push32(0x121912f4u); f_12196800();
  /* 121912f4 mov esi, esp */
  ESI = (ESP);
  /* 121912f6 push 0x121be0dc */
  push32((uint32_t)(0x121be0dcu));
  /* 121912fb push 0x121c35c8 */
  push32((uint32_t)(0x121c35c8u));
  /* 12191300 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191306u);
  /* 12191306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219130b call 0x12196800 */
  push32(0x12191310u); f_12196800();
  /* 12191310 mov esi, esp */
  ESI = (ESP);
  /* 12191312 push 0x121be0d8 */
  push32((uint32_t)(0x121be0d8u));
  /* 12191317 push 0x121c35d8 */
  push32((uint32_t)(0x121c35d8u));
  /* 1219131c call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191322u);
  /* 12191322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191327 call 0x12196800 */
  push32(0x1219132cu); f_12196800();
  /* 1219132c mov esi, esp */
  ESI = (ESP);
  /* 1219132e push 0x121be0d4 */
  push32((uint32_t)(0x121be0d4u));
  /* 12191333 push 0x121c35f0 */
  push32((uint32_t)(0x121c35f0u));
  /* 12191338 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219133eu);
  /* 1219133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191343 call 0x12196800 */
  push32(0x12191348u); f_12196800();
  /* 12191348 mov esi, esp */
  ESI = (ESP);
  /* 1219134a push 0x121be0d0 */
  push32((uint32_t)(0x121be0d0u));
  /* 1219134f push 0x121c3590 */
  push32((uint32_t)(0x121c3590u));
  /* 12191354 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219135au);
  /* 1219135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219135f call 0x12196800 */
  push32(0x12191364u); f_12196800();
  /* 12191364 mov esi, esp */
  ESI = (ESP);
  /* 12191366 push 0x121be0cc */
  push32((uint32_t)(0x121be0ccu));
  /* 1219136b push 0x121c35a0 */
  push32((uint32_t)(0x121c35a0u));
  /* 12191370 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191376u);
  /* 12191376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219137b call 0x12196800 */
  push32(0x12191380u); f_12196800();
  /* 12191380 mov esi, esp */
  ESI = (ESP);
  /* 12191382 push 0x121be0c8 */
  push32((uint32_t)(0x121be0c8u));
  /* 12191387 push 0x121c35b0 */
  push32((uint32_t)(0x121c35b0u));
  /* 1219138c call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191392u);
  /* 12191392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191397 call 0x12196800 */
  push32(0x1219139cu); f_12196800();
  /* 1219139c mov esi, esp */
  ESI = (ESP);
  /* 1219139e push 0x121be0c4 */
  push32((uint32_t)(0x121be0c4u));
  /* 121913a3 push 0x121c35c0 */
  push32((uint32_t)(0x121c35c0u));
  /* 121913a8 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121913aeu);
  /* 121913ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121913b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121913b3 call 0x12196800 */
  push32(0x121913b8u); f_12196800();
  /* 121913b8 mov esi, esp */
  ESI = (ESP);
  /* 121913ba push 0x121be0c0 */
  push32((uint32_t)(0x121be0c0u));
  /* 121913bf push 0x121c35d0 */
  push32((uint32_t)(0x121c35d0u));
  /* 121913c4 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121913cau);
  /* 121913ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121913cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121913cf call 0x12196800 */
  push32(0x121913d4u); f_12196800();
  /* 121913d4 mov esi, esp */
  ESI = (ESP);
  /* 121913d6 push 0x121be0bc */
  push32((uint32_t)(0x121be0bcu));
  /* 121913db push 0x121c35e8 */
  push32((uint32_t)(0x121c35e8u));
  /* 121913e0 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121913e6u);
  /* 121913e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121913e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121913eb call 0x12196800 */
  push32(0x121913f0u); f_12196800();
  /* 121913f0 mov esi, esp */
  ESI = (ESP);
  /* 121913f2 push 0x121be0b8 */
  push32((uint32_t)(0x121be0b8u));
  /* 121913f7 push 0x121c3600 */
  push32((uint32_t)(0x121c3600u));
  /* 121913fc call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191402u);
  /* 12191402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191407 call 0x12196800 */
  push32(0x1219140cu); f_12196800();
  /* 1219140c mov esi, esp */
  ESI = (ESP);
  /* 1219140e push 0x121be0b4 */
  push32((uint32_t)(0x121be0b4u));
  /* 12191413 push 0x121c3610 */
  push32((uint32_t)(0x121c3610u));
  /* 12191418 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219141eu);
  /* 1219141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191423 call 0x12196800 */
  push32(0x12191428u); f_12196800();
  /* 12191428 mov esi, esp */
  ESI = (ESP);
  /* 1219142a push 0x121be0b0 */
  push32((uint32_t)(0x121be0b0u));
  /* 1219142f push 0x121c3620 */
  push32((uint32_t)(0x121c3620u));
  /* 12191434 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219143au);
  /* 1219143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219143f call 0x12196800 */
  push32(0x12191444u); f_12196800();
  /* 12191444 mov esi, esp */
  ESI = (ESP);
  /* 12191446 push 0x121be0ac */
  push32((uint32_t)(0x121be0acu));
  /* 1219144b push 0x121c3630 */
  push32((uint32_t)(0x121c3630u));
  /* 12191450 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191456u);
  /* 12191456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219145b call 0x12196800 */
  push32(0x12191460u); f_12196800();
  /* 12191460 mov esi, esp */
  ESI = (ESP);
  /* 12191462 push 0x121be0a8 */
  push32((uint32_t)(0x121be0a8u));
  /* 12191467 push 0x121c35e0 */
  push32((uint32_t)(0x121c35e0u));
  /* 1219146c call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x12191472u);
  /* 12191472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191477 call 0x12196800 */
  push32(0x1219147cu); f_12196800();
  /* 1219147c mov esi, esp */
  ESI = (ESP);
  /* 1219147e push 0x121be0a4 */
  push32((uint32_t)(0x121be0a4u));
  /* 12191483 push 0x121c35f8 */
  push32((uint32_t)(0x121c35f8u));
  /* 12191488 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x1219148eu);
  /* 1219148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191493 call 0x12196800 */
  push32(0x12191498u); f_12196800();
  /* 12191498 mov esi, esp */
  ESI = (ESP);
  /* 1219149a push 0x121be0a0 */
  push32((uint32_t)(0x121be0a0u));
  /* 1219149f push 0x121c3608 */
  push32((uint32_t)(0x121c3608u));
  /* 121914a4 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121914aau);
  /* 121914aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121914ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121914af call 0x12196800 */
  push32(0x121914b4u); f_12196800();
  /* 121914b4 mov esi, esp */
  ESI = (ESP);
  /* 121914b6 push 0x121be09c */
  push32((uint32_t)(0x121be09cu));
  /* 121914bb push 0x121c3618 */
  push32((uint32_t)(0x121c3618u));
  /* 121914c0 call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121914c6u);
  /* 121914c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121914c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121914cb call 0x12196800 */
  push32(0x121914d0u); f_12196800();
  /* 121914d0 mov esi, esp */
  ESI = (ESP);
  /* 121914d2 push 0x121be098 */
  push32((uint32_t)(0x121be098u));
  /* 121914d7 push 0x121c3628 */
  push32((uint32_t)(0x121c3628u));
  /* 121914dc call dword ptr [0x121c646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c646c))), 0x121914e2u);
  /* 121914e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121914e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121914e7 call 0x12196800 */
  push32(0x121914ecu); f_12196800();
  /* 121914ec mov esi, esp */
  ESI = (ESP);
  /* 121914ee push 0x121be088 */
  push32((uint32_t)(0x121be088u));
  /* 121914f3 push 0x121c3550 */
  push32((uint32_t)(0x121c3550u));
  /* 121914f8 call dword ptr [0x121c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c647c))), 0x121914feu);
  /* 121914fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191503 call 0x12196800 */
  push32(0x12191508u); f_12196800();
  /* 12191508 mov esi, esp */
  ESI = (ESP);
  /* 1219150a push 0x121be078 */
  push32((uint32_t)(0x121be078u));
  /* 1219150f push 0x121c3638 */
  push32((uint32_t)(0x121c3638u));
  /* 12191514 call dword ptr [0x121c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c647c))), 0x1219151au);
  /* 1219151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219151f call 0x12196800 */
  push32(0x12191524u); f_12196800();
  /* 12191524 mov esi, esp */
  ESI = (ESP);
  /* 12191526 push 0x121be068 */
  push32((uint32_t)(0x121be068u));
  /* 1219152b push 0x121c3558 */
  push32((uint32_t)(0x121c3558u));
  /* 12191530 call dword ptr [0x121c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c647c))), 0x12191536u);
  /* 12191536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219153b call 0x12196800 */
  push32(0x12191540u); f_12196800();
  /* 12191540 mov esi, esp */
  ESI = (ESP);
  /* 12191542 push 0x121be058 */
  push32((uint32_t)(0x121be058u));
  /* 12191547 push 0x121c3420 */
  push32((uint32_t)(0x121c3420u));
  /* 1219154c call dword ptr [0x121c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c647c))), 0x12191552u);
  /* 12191552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191557 call 0x12196800 */
  push32(0x1219155cu); f_12196800();
  /* 1219155c mov esi, esp */
  ESI = (ESP);
  /* 1219155e push 0x121be048 */
  push32((uint32_t)(0x121be048u));
  /* 12191563 push 0x121c3560 */
  push32((uint32_t)(0x121c3560u));
  /* 12191568 call dword ptr [0x121c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c647c))), 0x1219156eu);
  /* 1219156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191573 call 0x12196800 */
  push32(0x12191578u); f_12196800();
  /* 12191578 mov esi, esp */
  ESI = (ESP);
  /* 1219157a push 0x121be038 */
  push32((uint32_t)(0x121be038u));
  /* 1219157f push 0x121c3410 */
  push32((uint32_t)(0x121c3410u));
  /* 12191584 call dword ptr [0x121c647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c647c))), 0x1219158au);
  /* 1219158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219158f call 0x12196800 */
  push32(0x12191594u); f_12196800();
  /* 12191594 mov esi, esp */
  ESI = (ESP);
  /* 12191596 push 4 */
  push32((uint32_t)(0x4u));
  /* 12191598 push 0x121c3470 */
  push32((uint32_t)(0x121c3470u));
  /* 1219159d call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121915a3u);
  /* 121915a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121915a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121915a8 call 0x12196800 */
  push32(0x121915adu); f_12196800();
  /* 121915ad mov esi, esp */
  ESI = (ESP);
  /* 121915af push 4 */
  push32((uint32_t)(0x4u));
  /* 121915b1 push 0x121c3474 */
  push32((uint32_t)(0x121c3474u));
  /* 121915b6 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121915bcu);
  /* 121915bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121915bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121915c1 call 0x12196800 */
  push32(0x121915c6u); f_12196800();
  /* 121915c6 mov esi, esp */
  ESI = (ESP);
  /* 121915c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 121915ca push 0x121c3478 */
  push32((uint32_t)(0x121c3478u));
  /* 121915cf call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121915d5u);
  /* 121915d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121915d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121915da call 0x12196800 */
  push32(0x121915dfu); f_12196800();
  /* 121915df mov esi, esp */
  ESI = (ESP);
  /* 121915e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 121915e3 push 0x121c347c */
  push32((uint32_t)(0x121c347cu));
  /* 121915e8 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121915eeu);
  /* 121915ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121915f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121915f3 call 0x12196800 */
  push32(0x121915f8u); f_12196800();
  /* 121915f8 mov esi, esp */
  ESI = (ESP);
  /* 121915fa push 4 */
  push32((uint32_t)(0x4u));
  /* 121915fc push 0x121c3480 */
  push32((uint32_t)(0x121c3480u));
  /* 12191601 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191607u);
  /* 12191607 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219160a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219160c call 0x12196800 */
  push32(0x12191611u); f_12196800();
  /* 12191611 mov esi, esp */
  ESI = (ESP);
  /* 12191613 push 4 */
  push32((uint32_t)(0x4u));
  /* 12191615 push 0x121c3484 */
  push32((uint32_t)(0x121c3484u));
  /* 1219161a call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191620u);
  /* 12191620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191623 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191625 call 0x12196800 */
  push32(0x1219162au); f_12196800();
  /* 1219162a mov esi, esp */
  ESI = (ESP);
  /* 1219162c push 4 */
  push32((uint32_t)(0x4u));
  /* 1219162e push 0x121c3488 */
  push32((uint32_t)(0x121c3488u));
  /* 12191633 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191639u);
  /* 12191639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219163c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219163e call 0x12196800 */
  push32(0x12191643u); f_12196800();
  /* 12191643 mov esi, esp */
  ESI = (ESP);
  /* 12191645 push 4 */
  push32((uint32_t)(0x4u));
  /* 12191647 push 0x121c348c */
  push32((uint32_t)(0x121c348cu));
  /* 1219164c call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191652u);
  /* 12191652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191657 call 0x12196800 */
  push32(0x1219165cu); f_12196800();
  /* 1219165c mov esi, esp */
  ESI = (ESP);
  /* 1219165e push 4 */
  push32((uint32_t)(0x4u));
  /* 12191660 push 0x121c3490 */
  push32((uint32_t)(0x121c3490u));
  /* 12191665 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x1219166bu);
  /* 1219166b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219166e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191670 call 0x12196800 */
  push32(0x12191675u); f_12196800();
  /* 12191675 mov esi, esp */
  ESI = (ESP);
  /* 12191677 push 4 */
  push32((uint32_t)(0x4u));
  /* 12191679 push 0x121c3640 */
  push32((uint32_t)(0x121c3640u));
  /* 1219167e call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191684u);
  /* 12191684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191687 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191689 call 0x12196800 */
  push32(0x1219168eu); f_12196800();
  /* 1219168e mov esi, esp */
  ESI = (ESP);
  /* 12191690 push 4 */
  push32((uint32_t)(0x4u));
  /* 12191692 push 0x121c3644 */
  push32((uint32_t)(0x121c3644u));
  /* 12191697 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x1219169du);
  /* 1219169d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121916a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121916a2 call 0x12196800 */
  push32(0x121916a7u); f_12196800();
  /* 121916a7 mov esi, esp */
  ESI = (ESP);
  /* 121916a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 121916ab push 0x121c3648 */
  push32((uint32_t)(0x121c3648u));
  /* 121916b0 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121916b6u);
  /* 121916b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121916b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121916bb call 0x12196800 */
  push32(0x121916c0u); f_12196800();
  /* 121916c0 mov esi, esp */
  ESI = (ESP);
  /* 121916c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 121916c4 push 0x121c364c */
  push32((uint32_t)(0x121c364cu));
  /* 121916c9 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121916cfu);
  /* 121916cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121916d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121916d4 call 0x12196800 */
  push32(0x121916d9u); f_12196800();
  /* 121916d9 mov esi, esp */
  ESI = (ESP);
  /* 121916db push 4 */
  push32((uint32_t)(0x4u));
  /* 121916dd push 0x121c3650 */
  push32((uint32_t)(0x121c3650u));
  /* 121916e2 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121916e8u);
  /* 121916e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121916eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121916ed call 0x12196800 */
  push32(0x121916f2u); f_12196800();
  /* 121916f2 mov esi, esp */
  ESI = (ESP);
  /* 121916f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 121916f6 push 0x121c3654 */
  push32((uint32_t)(0x121c3654u));
  /* 121916fb call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191701u);
  /* 12191701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191704 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191706 call 0x12196800 */
  push32(0x1219170bu); f_12196800();
  /* 1219170b mov esi, esp */
  ESI = (ESP);
  /* 1219170d push 4 */
  push32((uint32_t)(0x4u));
  /* 1219170f push 0x121c3658 */
  push32((uint32_t)(0x121c3658u));
  /* 12191714 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x1219171au);
  /* 1219171a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219171d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219171f call 0x12196800 */
  push32(0x12191724u); f_12196800();
  /* 12191724 mov esi, esp */
  ESI = (ESP);
  /* 12191726 push 4 */
  push32((uint32_t)(0x4u));
  /* 12191728 push 0x121c365c */
  push32((uint32_t)(0x121c365cu));
  /* 1219172d call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191733u);
  /* 12191733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191738 call 0x12196800 */
  push32(0x1219173du); f_12196800();
  /* 1219173d mov esi, esp */
  ESI = (ESP);
  /* 1219173f push 8 */
  push32((uint32_t)(0x8u));
  /* 12191741 push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 12191746 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x1219174cu);
  /* 1219174c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219174f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191751 call 0x12196800 */
  push32(0x12191756u); f_12196800();
  /* 12191756 mov esi, esp */
  ESI = (ESP);
  /* 12191758 push 8 */
  push32((uint32_t)(0x8u));
  /* 1219175a push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 1219175f call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191765u);
  /* 12191765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191768 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219176a call 0x12196800 */
  push32(0x1219176fu); f_12196800();
  /* 1219176f mov esi, esp */
  ESI = (ESP);
  /* 12191771 push 8 */
  push32((uint32_t)(0x8u));
  /* 12191773 push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 12191778 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x1219177eu);
  /* 1219177e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191781 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191783 call 0x12196800 */
  push32(0x12191788u); f_12196800();
  /* 12191788 mov esi, esp */
  ESI = (ESP);
  /* 1219178a push 8 */
  push32((uint32_t)(0x8u));
  /* 1219178c push 0x121c34e0 */
  push32((uint32_t)(0x121c34e0u));
  /* 12191791 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191797u);
  /* 12191797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219179a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219179c call 0x12196800 */
  push32(0x121917a1u); f_12196800();
  /* 121917a1 mov esi, esp */
  ESI = (ESP);
  /* 121917a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 121917a5 push 0x121c34e8 */
  push32((uint32_t)(0x121c34e8u));
  /* 121917aa call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121917b0u);
  /* 121917b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121917b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121917b5 call 0x12196800 */
  push32(0x121917bau); f_12196800();
  /* 121917ba mov esi, esp */
  ESI = (ESP);
  /* 121917bc push 8 */
  push32((uint32_t)(0x8u));
  /* 121917be push 0x121c34f0 */
  push32((uint32_t)(0x121c34f0u));
  /* 121917c3 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121917c9u);
  /* 121917c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121917cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121917ce call 0x12196800 */
  push32(0x121917d3u); f_12196800();
  /* 121917d3 mov esi, esp */
  ESI = (ESP);
  /* 121917d5 push 8 */
  push32((uint32_t)(0x8u));
  /* 121917d7 push 0x121c34f8 */
  push32((uint32_t)(0x121c34f8u));
  /* 121917dc call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121917e2u);
  /* 121917e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121917e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121917e7 call 0x12196800 */
  push32(0x121917ecu); f_12196800();
  /* 121917ec mov esi, esp */
  ESI = (ESP);
  /* 121917ee push 8 */
  push32((uint32_t)(0x8u));
  /* 121917f0 push 0x121c3500 */
  push32((uint32_t)(0x121c3500u));
  /* 121917f5 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121917fbu);
  /* 121917fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121917fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191800 call 0x12196800 */
  push32(0x12191805u); f_12196800();
  /* 12191805 mov esi, esp */
  ESI = (ESP);
  /* 12191807 push 8 */
  push32((uint32_t)(0x8u));
  /* 12191809 push 0x121c3408 */
  push32((uint32_t)(0x121c3408u));
  /* 1219180e call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191814u);
  /* 12191814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191819 call 0x12196800 */
  push32(0x1219181eu); f_12196800();
  /* 1219181e mov esi, esp */
  ESI = (ESP);
  /* 12191820 push 8 */
  push32((uint32_t)(0x8u));
  /* 12191822 push 0x121c3508 */
  push32((uint32_t)(0x121c3508u));
  /* 12191827 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x1219182du);
  /* 1219182d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191830 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191832 call 0x12196800 */
  push32(0x12191837u); f_12196800();
  /* 12191837 mov esi, esp */
  ESI = (ESP);
  /* 12191839 push 8 */
  push32((uint32_t)(0x8u));
  /* 1219183b push 0x121c3510 */
  push32((uint32_t)(0x121c3510u));
  /* 12191840 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191846u);
  /* 12191846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219184b call 0x12196800 */
  push32(0x12191850u); f_12196800();
  /* 12191850 mov esi, esp */
  ESI = (ESP);
  /* 12191852 push 8 */
  push32((uint32_t)(0x8u));
  /* 12191854 push 0x121c3518 */
  push32((uint32_t)(0x121c3518u));
  /* 12191859 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x1219185fu);
  /* 1219185f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191864 call 0x12196800 */
  push32(0x12191869u); f_12196800();
  /* 12191869 mov esi, esp */
  ESI = (ESP);
  /* 1219186b push 8 */
  push32((uint32_t)(0x8u));
  /* 1219186d push 0x121c3520 */
  push32((uint32_t)(0x121c3520u));
  /* 12191872 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191878u);
  /* 12191878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219187b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219187d call 0x12196800 */
  push32(0x12191882u); f_12196800();
  /* 12191882 mov esi, esp */
  ESI = (ESP);
  /* 12191884 push 8 */
  push32((uint32_t)(0x8u));
  /* 12191886 push 0x121c3528 */
  push32((uint32_t)(0x121c3528u));
  /* 1219188b call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191891u);
  /* 12191891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191894 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191896 call 0x12196800 */
  push32(0x1219189bu); f_12196800();
  /* 1219189b mov esi, esp */
  ESI = (ESP);
  /* 1219189d push 8 */
  push32((uint32_t)(0x8u));
  /* 1219189f push 0x121c3530 */
  push32((uint32_t)(0x121c3530u));
  /* 121918a4 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121918aau);
  /* 121918aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121918ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121918af call 0x12196800 */
  push32(0x121918b4u); f_12196800();
  /* 121918b4 mov esi, esp */
  ESI = (ESP);
  /* 121918b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 121918b8 push 0x121c3538 */
  push32((uint32_t)(0x121c3538u));
  /* 121918bd call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121918c3u);
  /* 121918c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121918c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121918c8 call 0x12196800 */
  push32(0x121918cdu); f_12196800();
  /* 121918cd mov esi, esp */
  ESI = (ESP);
  /* 121918cf push 8 */
  push32((uint32_t)(0x8u));
  /* 121918d1 push 0x121c3540 */
  push32((uint32_t)(0x121c3540u));
  /* 121918d6 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121918dcu);
  /* 121918dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121918df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121918e1 call 0x12196800 */
  push32(0x121918e6u); f_12196800();
  /* 121918e6 mov esi, esp */
  ESI = (ESP);
  /* 121918e8 push 8 */
  push32((uint32_t)(0x8u));
  /* 121918ea push 0x121c3548 */
  push32((uint32_t)(0x121c3548u));
  /* 121918ef call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x121918f5u);
  /* 121918f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121918f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121918fa call 0x12196800 */
  push32(0x121918ffu); f_12196800();
  /* 121918ff mov esi, esp */
  ESI = (ESP);
  /* 12191901 push 8 */
  push32((uint32_t)(0x8u));
  /* 12191903 push 0x121c3498 */
  push32((uint32_t)(0x121c3498u));
  /* 12191908 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x1219190eu);
  /* 1219190e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191911 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191913 call 0x12196800 */
  push32(0x12191918u); f_12196800();
  /* 12191918 mov esi, esp */
  ESI = (ESP);
  /* 1219191a push 8 */
  push32((uint32_t)(0x8u));
  /* 1219191c push 0x121c34a0 */
  push32((uint32_t)(0x121c34a0u));
  /* 12191921 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191927u);
  /* 12191927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219192a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219192c call 0x12196800 */
  push32(0x12191931u); f_12196800();
  /* 12191931 mov esi, esp */
  ESI = (ESP);
  /* 12191933 push 8 */
  push32((uint32_t)(0x8u));
  /* 12191935 push 0x121c34a8 */
  push32((uint32_t)(0x121c34a8u));
  /* 1219193a call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191940u);
  /* 12191940 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191943 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191945 call 0x12196800 */
  push32(0x1219194au); f_12196800();
  /* 1219194a mov esi, esp */
  ESI = (ESP);
  /* 1219194c push 8 */
  push32((uint32_t)(0x8u));
  /* 1219194e push 0x121c34b0 */
  push32((uint32_t)(0x121c34b0u));
  /* 12191953 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191959u);
  /* 12191959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219195c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219195e call 0x12196800 */
  push32(0x12191963u); f_12196800();
  /* 12191963 mov esi, esp */
  ESI = (ESP);
  /* 12191965 push 8 */
  push32((uint32_t)(0x8u));
  /* 12191967 push 0x121c34b8 */
  push32((uint32_t)(0x121c34b8u));
  /* 1219196c call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x12191972u);
  /* 12191972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191975 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191977 call 0x12196800 */
  push32(0x1219197cu); f_12196800();
  /* 1219197c mov esi, esp */
  ESI = (ESP);
  /* 1219197e push 8 */
  push32((uint32_t)(0x8u));
  /* 12191980 push 0x121c34c0 */
  push32((uint32_t)(0x121c34c0u));
  /* 12191985 call dword ptr [0x121c6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6480))), 0x1219198bu);
  /* 1219198b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219198e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191990 call 0x12196800 */
  push32(0x12191995u); f_12196800();
  /* 12191995 mov esi, esp */
  ESI = (ESP);
  /* 12191997 push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 1219199c call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x121919a2u);
  /* 121919a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121919a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121919a7 call 0x12196800 */
  push32(0x121919acu); f_12196800();
  /* 121919ac mov esi, esp */
  ESI = (ESP);
  /* 121919ae push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 121919b3 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x121919b9u);
  /* 121919b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121919bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121919be call 0x12196800 */
  push32(0x121919c3u); f_12196800();
  /* 121919c3 mov esi, esp */
  ESI = (ESP);
  /* 121919c5 push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 121919ca call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x121919d0u);
  /* 121919d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121919d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121919d5 call 0x12196800 */
  push32(0x121919dau); f_12196800();
  /* 121919da mov esi, esp */
  ESI = (ESP);
  /* 121919dc push 0x121c34e0 */
  push32((uint32_t)(0x121c34e0u));
  /* 121919e1 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x121919e7u);
  /* 121919e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121919ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121919ec call 0x12196800 */
  push32(0x121919f1u); f_12196800();
  /* 121919f1 mov esi, esp */
  ESI = (ESP);
  /* 121919f3 push 0x121c34e8 */
  push32((uint32_t)(0x121c34e8u));
  /* 121919f8 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x121919feu);
  /* 121919fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191a01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191a03 call 0x12196800 */
  push32(0x12191a08u); f_12196800();
  /* 12191a08 mov esi, esp */
  ESI = (ESP);
  /* 12191a0a push 0x121c34f0 */
  push32((uint32_t)(0x121c34f0u));
  /* 12191a0f call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191a15u);
  /* 12191a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191a1a call 0x12196800 */
  push32(0x12191a1fu); f_12196800();
  /* 12191a1f mov esi, esp */
  ESI = (ESP);
  /* 12191a21 push 0x121c34f8 */
  push32((uint32_t)(0x121c34f8u));
  /* 12191a26 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191a2cu);
  /* 12191a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191a2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191a31 call 0x12196800 */
  push32(0x12191a36u); f_12196800();
  /* 12191a36 mov esi, esp */
  ESI = (ESP);
  /* 12191a38 push 0x121c3500 */
  push32((uint32_t)(0x121c3500u));
  /* 12191a3d call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191a43u);
  /* 12191a43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191a46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191a48 call 0x12196800 */
  push32(0x12191a4du); f_12196800();
  /* 12191a4d mov esi, esp */
  ESI = (ESP);
  /* 12191a4f push 0x121c3408 */
  push32((uint32_t)(0x121c3408u));
  /* 12191a54 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191a5au);
  /* 12191a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191a5f call 0x12196800 */
  push32(0x12191a64u); f_12196800();
  /* 12191a64 mov esi, esp */
  ESI = (ESP);
  /* 12191a66 push 0x121c3508 */
  push32((uint32_t)(0x121c3508u));
  /* 12191a6b call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191a71u);
  /* 12191a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191a74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191a76 call 0x12196800 */
  push32(0x12191a7bu); f_12196800();
  /* 12191a7b mov esi, esp */
  ESI = (ESP);
  /* 12191a7d push 0x121c3510 */
  push32((uint32_t)(0x121c3510u));
  /* 12191a82 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191a88u);
  /* 12191a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191a8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191a8d call 0x12196800 */
  push32(0x12191a92u); f_12196800();
  /* 12191a92 mov esi, esp */
  ESI = (ESP);
  /* 12191a94 push 0x121c3518 */
  push32((uint32_t)(0x121c3518u));
  /* 12191a99 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191a9fu);
  /* 12191a9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191aa4 call 0x12196800 */
  push32(0x12191aa9u); f_12196800();
  /* 12191aa9 mov esi, esp */
  ESI = (ESP);
  /* 12191aab push 0x121c3520 */
  push32((uint32_t)(0x121c3520u));
  /* 12191ab0 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191ab6u);
  /* 12191ab6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191ab9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191abb call 0x12196800 */
  push32(0x12191ac0u); f_12196800();
  /* 12191ac0 mov esi, esp */
  ESI = (ESP);
  /* 12191ac2 push 0x121c3528 */
  push32((uint32_t)(0x121c3528u));
  /* 12191ac7 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191acdu);
  /* 12191acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191ad2 call 0x12196800 */
  push32(0x12191ad7u); f_12196800();
  /* 12191ad7 mov esi, esp */
  ESI = (ESP);
  /* 12191ad9 push 0x121c3530 */
  push32((uint32_t)(0x121c3530u));
  /* 12191ade call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191ae4u);
  /* 12191ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191ae9 call 0x12196800 */
  push32(0x12191aeeu); f_12196800();
  /* 12191aee mov esi, esp */
  ESI = (ESP);
  /* 12191af0 push 0x121c3538 */
  push32((uint32_t)(0x121c3538u));
  /* 12191af5 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191afbu);
  /* 12191afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191afe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191b00 call 0x12196800 */
  push32(0x12191b05u); f_12196800();
  /* 12191b05 mov esi, esp */
  ESI = (ESP);
  /* 12191b07 push 0x121c3540 */
  push32((uint32_t)(0x121c3540u));
  /* 12191b0c call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191b12u);
  /* 12191b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191b15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191b17 call 0x12196800 */
  push32(0x12191b1cu); f_12196800();
  /* 12191b1c mov esi, esp */
  ESI = (ESP);
  /* 12191b1e push 0x121c3548 */
  push32((uint32_t)(0x121c3548u));
  /* 12191b23 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191b29u);
  /* 12191b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191b2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191b2e call 0x12196800 */
  push32(0x12191b33u); f_12196800();
  /* 12191b33 mov esi, esp */
  ESI = (ESP);
  /* 12191b35 push 0x121c3498 */
  push32((uint32_t)(0x121c3498u));
  /* 12191b3a call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191b40u);
  /* 12191b40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191b43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191b45 call 0x12196800 */
  push32(0x12191b4au); f_12196800();
  /* 12191b4a mov esi, esp */
  ESI = (ESP);
  /* 12191b4c push 0x121c34a0 */
  push32((uint32_t)(0x121c34a0u));
  /* 12191b51 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191b57u);
  /* 12191b57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191b5c call 0x12196800 */
  push32(0x12191b61u); f_12196800();
  /* 12191b61 mov esi, esp */
  ESI = (ESP);
  /* 12191b63 push 0x121c34a8 */
  push32((uint32_t)(0x121c34a8u));
  /* 12191b68 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191b6eu);
  /* 12191b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191b71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191b73 call 0x12196800 */
  push32(0x12191b78u); f_12196800();
  /* 12191b78 mov esi, esp */
  ESI = (ESP);
  /* 12191b7a push 0x121c34b0 */
  push32((uint32_t)(0x121c34b0u));
  /* 12191b7f call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191b85u);
  /* 12191b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191b8a call 0x12196800 */
  push32(0x12191b8fu); f_12196800();
  /* 12191b8f mov esi, esp */
  ESI = (ESP);
  /* 12191b91 push 0x121c34b8 */
  push32((uint32_t)(0x121c34b8u));
  /* 12191b96 call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191b9cu);
  /* 12191b9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191b9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191ba1 call 0x12196800 */
  push32(0x12191ba6u); f_12196800();
  /* 12191ba6 mov esi, esp */
  ESI = (ESP);
  /* 12191ba8 push 0x121c34c0 */
  push32((uint32_t)(0x121c34c0u));
  /* 12191bad call dword ptr [0x121c6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6478))), 0x12191bb3u);
  /* 12191bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191bb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191bb8 call 0x12196800 */
  push32(0x12191bbdu); f_12196800();
  /* 12191bbd mov esi, esp */
  ESI = (ESP);
  /* 12191bbf push 0x121be030 */
  push32((uint32_t)(0x121be030u));
  /* 12191bc4 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12191bc9 call dword ptr [0x121c6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6488))), 0x12191bcfu);
  /* 12191bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191bd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191bd4 call 0x12196800 */
  push32(0x12191bd9u); f_12196800();
  /* 12191bd9 mov esi, esp */
  ESI = (ESP);
  /* 12191bdb push 0x121be024 */
  push32((uint32_t)(0x121be024u));
  /* 12191be0 push 3 */
  push32((uint32_t)(0x3u));
  /* 12191be2 call dword ptr [0x121c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c648c))), 0x12191be8u);
  /* 12191be8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191beb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191bed call 0x12196800 */
  push32(0x12191bf2u); f_12196800();
  /* 12191bf2 mov esi, esp */
  ESI = (ESP);
  /* 12191bf4 push 0x121be024 */
  push32((uint32_t)(0x121be024u));
  /* 12191bf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12191bfb call dword ptr [0x121c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c648c))), 0x12191c01u);
  /* 12191c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191c04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191c06 call 0x12196800 */
  push32(0x12191c0bu); f_12196800();
  /* 12191c0b mov esi, esp */
  ESI = (ESP);
  /* 12191c0d push 0x121be01c */
  push32((uint32_t)(0x121be01cu));
  /* 12191c12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12191c14 call dword ptr [0x121c648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c648c))), 0x12191c1au);
  /* 12191c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191c1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191c1f call 0x12196800 */
  push32(0x12191c24u); f_12196800();
  /* 12191c24 mov esi, esp */
  ESI = (ESP);
  /* 12191c26 push 5 */
  push32((uint32_t)(0x5u));
  /* 12191c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12191c2a call dword ptr [0x121c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6484))), 0x12191c30u);
  /* 12191c30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191c33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191c35 call 0x12196800 */
  push32(0x12191c3au); f_12196800();
  /* 12191c3a mov esi, esp */
  ESI = (ESP);
  /* 12191c3c push 0xa */
  push32((uint32_t)(0xau));
  /* 12191c3e push 1 */
  push32((uint32_t)(0x1u));
  /* 12191c40 call dword ptr [0x121c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6484))), 0x12191c46u);
  /* 12191c46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191c4b call 0x12196800 */
  push32(0x12191c50u); f_12196800();
  /* 12191c50 mov esi, esp */
  ESI = (ESP);
  /* 12191c52 push 5 */
  push32((uint32_t)(0x5u));
  /* 12191c54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12191c56 call dword ptr [0x121c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6484))), 0x12191c5cu);
  /* 12191c5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191c5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191c61 call 0x12196800 */
  push32(0x12191c66u); f_12196800();
  /* 12191c66 mov esi, esp */
  ESI = (ESP);
  /* 12191c68 push 0xa */
  push32((uint32_t)(0xau));
  /* 12191c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 12191c6c call dword ptr [0x121c6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6484))), 0x12191c72u);
  /* 12191c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191c75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191c77 call 0x12196800 */
  push32(0x12191c7cu); f_12196800();
  /* 12191c7c pop edi */
  EDI = (pop32());
  /* 12191c7d pop esi */
  ESI = (pop32());
  /* 12191c7e pop ebx */
  EBX = (pop32());
  /* 12191c7f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191c82 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191c84 call 0x12196800 */
  push32(0x12191c89u); f_12196800();
  /* 12191c89 mov esp, ebp */
  ESP = (EBP);
  /* 12191c8b pop ebp */
  EBP = (pop32());
  /* 12191c8c ret  */
  ESPCHK(0x12191090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f90 @ 0x12191f90 (14604 bytes, 4151 insns) */
void f_12191f90(void) {
  FTRACE(0x12191f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12191f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12191f91 mov ebp, esp */
  EBP = (ESP);
  /* 12191f93 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12191f96 push ebx */
  push32((uint32_t)(EBX));
  /* 12191f97 push esi */
  push32((uint32_t)(ESI));
  /* 12191f98 push edi */
  push32((uint32_t)(EDI));
  /* 12191f99 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12191f9c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12191fa1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12191fa6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12191fa8 mov esi, esp */
  ESI = (ESP);
  /* 12191faa push 1 */
  push32((uint32_t)(0x1u));
  /* 12191fac call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12191fb2u);
  /* 12191fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191fb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191fb7 call 0x12196800 */
  push32(0x12191fbcu); f_12196800();
  /* 12191fbc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12191fc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12191fc3 je 0x121925fe */
  if (C.zf) goto L_121925fe;
  /* 12191fc9 mov esi, esp */
  ESI = (ESP);
  /* 12191fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12191fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 12191fcf call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12191fd5u);
  /* 12191fd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191fd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191fda call 0x12196800 */
  push32(0x12191fdfu); f_12196800();
  /* 12191fdf mov esi, esp */
  ESI = (ESP);
  /* 12191fe1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12191fe3 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12191fe9u);
  /* 12191fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12191fec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12191fee call 0x12196800 */
  push32(0x12191ff3u); f_12196800();
  /* 12191ff3 mov ecx, 3 */
  ECX = (0x3u);
  /* 12191ff8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12191ffa imul ecx, ecx, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2710u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12192000 add ecx, 0x1388 */
  { uint32_t _a=(ECX),_b=(0x1388u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12192006 mov esi, esp */
  ESI = (ESP);
  /* 12192008 push ecx */
  push32((uint32_t)(ECX));
  /* 12192009 push 3 */
  push32((uint32_t)(0x3u));
  /* 1219200b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219200d call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x12192013u);
  /* 12192013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192016 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192018 call 0x12196800 */
  push32(0x1219201du); f_12196800();
  /* 1219201d mov esi, esp */
  ESI = (ESP);
  /* 1219201f push 3 */
  push32((uint32_t)(0x3u));
  /* 12192021 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12192027u);
  /* 12192027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219202a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219202c call 0x12196800 */
  push32(0x12192031u); f_12196800();
  /* 12192031 mov edx, 3 */
  EDX = (0x3u);
  /* 12192036 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12192038 imul edx, edx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f4u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219203e add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12192044 mov esi, esp */
  ESI = (ESP);
  /* 12192046 push edx */
  push32((uint32_t)(EDX));
  /* 12192047 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192049 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219204b call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x12192051u);
  /* 12192051 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192054 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192056 call 0x12196800 */
  push32(0x1219205bu); f_12196800();
  /* 1219205b mov esi, esp */
  ESI = (ESP);
  /* 1219205d push 3 */
  push32((uint32_t)(0x3u));
  /* 1219205f call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12192065u);
  /* 12192065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219206a call 0x12196800 */
  push32(0x1219206fu); f_12196800();
  /* 1219206f mov ecx, 3 */
  ECX = (0x3u);
  /* 12192074 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12192076 imul ecx, ecx, 0x320 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x320u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219207c add ecx, 0x1388 */
  { uint32_t _a=(ECX),_b=(0x1388u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12192082 mov esi, esp */
  ESI = (ESP);
  /* 12192084 push ecx */
  push32((uint32_t)(ECX));
  /* 12192085 push 4 */
  push32((uint32_t)(0x4u));
  /* 12192087 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192089 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x1219208fu);
  /* 1219208f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192092 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192094 call 0x12196800 */
  push32(0x12192099u); f_12196800();
  /* 12192099 mov esi, esp */
  ESI = (ESP);
  /* 1219209b push 3 */
  push32((uint32_t)(0x3u));
  /* 1219209d call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121920a3u);
  /* 121920a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121920a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121920a8 call 0x12196800 */
  push32(0x121920adu); f_12196800();
  /* 121920ad mov edx, 3 */
  EDX = (0x3u);
  /* 121920b2 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121920b4 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121920ba add edx, 0x1388 */
  { uint32_t _a=(EDX),_b=(0x1388u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121920c0 mov esi, esp */
  ESI = (ESP);
  /* 121920c2 push edx */
  push32((uint32_t)(EDX));
  /* 121920c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121920c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121920c7 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x121920cdu);
  /* 121920cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121920d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121920d2 call 0x12196800 */
  push32(0x121920d7u); f_12196800();
  /* 121920d7 mov esi, esp */
  ESI = (ESP);
  /* 121920d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 121920db call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121920e1u);
  /* 121920e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121920e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121920e6 call 0x12196800 */
  push32(0x121920ebu); f_12196800();
  /* 121920eb mov ecx, 3 */
  ECX = (0x3u);
  /* 121920f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121920f2 imul ecx, ecx, 0x320 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x320u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121920f8 add ecx, 0x1388 */
  { uint32_t _a=(ECX),_b=(0x1388u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121920fe mov esi, esp */
  ESI = (ESP);
  /* 12192100 push ecx */
  push32((uint32_t)(ECX));
  /* 12192101 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192103 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192105 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x1219210bu);
  /* 1219210b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219210e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192110 call 0x12196800 */
  push32(0x12192115u); f_12196800();
  /* 12192115 mov esi, esp */
  ESI = (ESP);
  /* 12192117 push 3 */
  push32((uint32_t)(0x3u));
  /* 12192119 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x1219211fu);
  /* 1219211f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192122 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192124 call 0x12196800 */
  push32(0x12192129u); f_12196800();
  /* 12192129 mov edx, 3 */
  EDX = (0x3u);
  /* 1219212e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12192130 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12192136 add edx, 0x1388 */
  { uint32_t _a=(EDX),_b=(0x1388u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219213c mov esi, esp */
  ESI = (ESP);
  /* 1219213e push edx */
  push32((uint32_t)(EDX));
  /* 1219213f push 5 */
  push32((uint32_t)(0x5u));
  /* 12192141 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192143 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x12192149u);
  /* 12192149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219214c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219214e call 0x12196800 */
  push32(0x12192153u); f_12196800();
  /* 12192153 mov esi, esp */
  ESI = (ESP);
  /* 12192155 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 1219215a push 3 */
  push32((uint32_t)(0x3u));
  /* 1219215c push 1 */
  push32((uint32_t)(0x1u));
  /* 1219215e call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x12192164u);
  /* 12192164 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192167 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192169 call 0x12196800 */
  push32(0x1219216eu); f_12196800();
  /* 1219216e mov esi, esp */
  ESI = (ESP);
  /* 12192170 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12192175 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192177 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192179 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x1219217fu);
  /* 1219217f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192182 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192184 call 0x12196800 */
  push32(0x12192189u); f_12196800();
  /* 12192189 mov esi, esp */
  ESI = (ESP);
  /* 1219218b push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12192190 push 4 */
  push32((uint32_t)(0x4u));
  /* 12192192 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192194 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x1219219au);
  /* 1219219a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219219d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219219f call 0x12196800 */
  push32(0x121921a4u); f_12196800();
  /* 121921a4 mov esi, esp */
  ESI = (ESP);
  /* 121921a6 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 121921ab push 2 */
  push32((uint32_t)(0x2u));
  /* 121921ad push 1 */
  push32((uint32_t)(0x1u));
  /* 121921af call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x121921b5u);
  /* 121921b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121921b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121921ba call 0x12196800 */
  push32(0x121921bfu); f_12196800();
  /* 121921bf mov esi, esp */
  ESI = (ESP);
  /* 121921c1 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 121921c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121921c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 121921ca call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x121921d0u);
  /* 121921d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121921d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121921d5 call 0x12196800 */
  push32(0x121921dau); f_12196800();
  /* 121921da mov esi, esp */
  ESI = (ESP);
  /* 121921dc push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 121921e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 121921e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121921e5 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x121921ebu);
  /* 121921eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121921ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121921f0 call 0x12196800 */
  push32(0x121921f5u); f_12196800();
  /* 121921f5 mov esi, esp */
  ESI = (ESP);
  /* 121921f7 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 121921fc push 3 */
  push32((uint32_t)(0x3u));
  /* 121921fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12192200 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x12192206u);
  /* 12192206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192209 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219220b call 0x12196800 */
  push32(0x12192210u); f_12196800();
  /* 12192210 mov esi, esp */
  ESI = (ESP);
  /* 12192212 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12192217 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192219 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219221b call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x12192221u);
  /* 12192221 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192226 call 0x12196800 */
  push32(0x1219222bu); f_12196800();
  /* 1219222b mov esi, esp */
  ESI = (ESP);
  /* 1219222d push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12192232 push 4 */
  push32((uint32_t)(0x4u));
  /* 12192234 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192236 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x1219223cu);
  /* 1219223c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219223f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192241 call 0x12196800 */
  push32(0x12192246u); f_12196800();
  /* 12192246 mov esi, esp */
  ESI = (ESP);
  /* 12192248 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 1219224d push 2 */
  push32((uint32_t)(0x2u));
  /* 1219224f push 2 */
  push32((uint32_t)(0x2u));
  /* 12192251 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x12192257u);
  /* 12192257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219225a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219225c call 0x12196800 */
  push32(0x12192261u); f_12196800();
  /* 12192261 mov esi, esp */
  ESI = (ESP);
  /* 12192263 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12192268 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219226a push 2 */
  push32((uint32_t)(0x2u));
  /* 1219226c call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x12192272u);
  /* 12192272 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192277 call 0x12196800 */
  push32(0x1219227cu); f_12196800();
  /* 1219227c mov esi, esp */
  ESI = (ESP);
  /* 1219227e push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12192283 push 5 */
  push32((uint32_t)(0x5u));
  /* 12192285 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192287 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x1219228du);
  /* 1219228d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192292 call 0x12196800 */
  push32(0x12192297u); f_12196800();
  /* 12192297 mov esi, esp */
  ESI = (ESP);
  /* 12192299 push 3 */
  push32((uint32_t)(0x3u));
  /* 1219229b call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121922a1u);
  /* 121922a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121922a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121922a6 call 0x12196800 */
  push32(0x121922abu); f_12196800();
  /* 121922ab imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121922b1 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 121922b6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121922b8 mov esi, esp */
  ESI = (ESP);
  /* 121922ba push ecx */
  push32((uint32_t)(ECX));
  /* 121922bb push 3 */
  push32((uint32_t)(0x3u));
  /* 121922bd push 3 */
  push32((uint32_t)(0x3u));
  /* 121922bf call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x121922c5u);
  /* 121922c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121922c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121922ca call 0x12196800 */
  push32(0x121922cfu); f_12196800();
  /* 121922cf mov esi, esp */
  ESI = (ESP);
  /* 121922d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 121922d3 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121922d9u);
  /* 121922d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121922dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121922de call 0x12196800 */
  push32(0x121922e3u); f_12196800();
  /* 121922e3 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121922e9 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 121922ee sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121922f0 mov esi, esp */
  ESI = (ESP);
  /* 121922f2 push edx */
  push32((uint32_t)(EDX));
  /* 121922f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121922f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 121922f7 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x121922fdu);
  /* 121922fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192300 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192302 call 0x12196800 */
  push32(0x12192307u); f_12196800();
  /* 12192307 mov esi, esp */
  ESI = (ESP);
  /* 12192309 push 3 */
  push32((uint32_t)(0x3u));
  /* 1219230b call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12192311u);
  /* 12192311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192314 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192316 call 0x12196800 */
  push32(0x1219231bu); f_12196800();
  /* 1219231b imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12192321 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 12192326 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12192328 mov esi, esp */
  ESI = (ESP);
  /* 1219232a push ecx */
  push32((uint32_t)(ECX));
  /* 1219232b push 4 */
  push32((uint32_t)(0x4u));
  /* 1219232d push 3 */
  push32((uint32_t)(0x3u));
  /* 1219232f call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x12192335u);
  /* 12192335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219233a call 0x12196800 */
  push32(0x1219233fu); f_12196800();
  /* 1219233f mov esi, esp */
  ESI = (ESP);
  /* 12192341 push 3 */
  push32((uint32_t)(0x3u));
  /* 12192343 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12192349u);
  /* 12192349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219234c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219234e call 0x12196800 */
  push32(0x12192353u); f_12196800();
  /* 12192353 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12192359 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 1219235e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12192360 mov esi, esp */
  ESI = (ESP);
  /* 12192362 push edx */
  push32((uint32_t)(EDX));
  /* 12192363 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192365 push 3 */
  push32((uint32_t)(0x3u));
  /* 12192367 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x1219236du);
  /* 1219236d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192370 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192372 call 0x12196800 */
  push32(0x12192377u); f_12196800();
  /* 12192377 mov esi, esp */
  ESI = (ESP);
  /* 12192379 push 3 */
  push32((uint32_t)(0x3u));
  /* 1219237b call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12192381u);
  /* 12192381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192384 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192386 call 0x12196800 */
  push32(0x1219238bu); f_12196800();
  /* 1219238b imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12192391 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 12192396 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12192398 mov esi, esp */
  ESI = (ESP);
  /* 1219239a push ecx */
  push32((uint32_t)(ECX));
  /* 1219239b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219239d push 3 */
  push32((uint32_t)(0x3u));
  /* 1219239f call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x121923a5u);
  /* 121923a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121923a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121923aa call 0x12196800 */
  push32(0x121923afu); f_12196800();
  /* 121923af mov esi, esp */
  ESI = (ESP);
  /* 121923b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 121923b3 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121923b9u);
  /* 121923b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121923bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121923be call 0x12196800 */
  push32(0x121923c3u); f_12196800();
  /* 121923c3 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121923c9 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 121923ce sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121923d0 mov esi, esp */
  ESI = (ESP);
  /* 121923d2 push edx */
  push32((uint32_t)(EDX));
  /* 121923d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 121923d5 push 3 */
  push32((uint32_t)(0x3u));
  /* 121923d7 call dword ptr [0x121c641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c641c))), 0x121923ddu);
  /* 121923dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121923e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121923e2 call 0x12196800 */
  push32(0x121923e7u); f_12196800();
  /* 121923e7 mov esi, esp */
  ESI = (ESP);
  /* 121923e9 push 0x121be1c0 */
  push32((uint32_t)(0x121be1c0u));
  /* 121923ee push 0x121be128 */
  push32((uint32_t)(0x121be128u));
  /* 121923f3 call dword ptr [0x121c6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6420))), 0x121923f9u);
  /* 121923f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121923fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121923fe call 0x12196800 */
  push32(0x12192403u); f_12196800();
  /* 12192403 mov esi, esp */
  ESI = (ESP);
  /* 12192405 push 0x121be1b4 */
  push32((uint32_t)(0x121be1b4u));
  /* 1219240a push 0x121be128 */
  push32((uint32_t)(0x121be128u));
  /* 1219240f call dword ptr [0x121c6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6420))), 0x12192415u);
  /* 12192415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219241a call 0x12196800 */
  push32(0x1219241fu); f_12196800();
  /* 1219241f mov esi, esp */
  ESI = (ESP);
  /* 12192421 push 0x121be1a8 */
  push32((uint32_t)(0x121be1a8u));
  /* 12192426 push 0x121be128 */
  push32((uint32_t)(0x121be128u));
  /* 1219242b call dword ptr [0x121c6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6420))), 0x12192431u);
  /* 12192431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192436 call 0x12196800 */
  push32(0x1219243bu); f_12196800();
  /* 1219243b mov esi, esp */
  ESI = (ESP);
  /* 1219243d push 0x121be19c */
  push32((uint32_t)(0x121be19cu));
  /* 12192442 push 0x121be128 */
  push32((uint32_t)(0x121be128u));
  /* 12192447 call dword ptr [0x121c6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6420))), 0x1219244du);
  /* 1219244d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192450 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192452 call 0x12196800 */
  push32(0x12192457u); f_12196800();
  /* 12192457 mov esi, esp */
  ESI = (ESP);
  /* 12192459 push 0x121be190 */
  push32((uint32_t)(0x121be190u));
  /* 1219245e push 0x121be128 */
  push32((uint32_t)(0x121be128u));
  /* 12192463 call dword ptr [0x121c6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6420))), 0x12192469u);
  /* 12192469 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219246c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219246e call 0x12196800 */
  push32(0x12192473u); f_12196800();
  /* 12192473 mov esi, esp */
  ESI = (ESP);
  /* 12192475 push 0x121be184 */
  push32((uint32_t)(0x121be184u));
  /* 1219247a push 0x121be12c */
  push32((uint32_t)(0x121be12cu));
  /* 1219247f call dword ptr [0x121c6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6420))), 0x12192485u);
  /* 12192485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219248a call 0x12196800 */
  push32(0x1219248fu); f_12196800();
  /* 1219248f mov esi, esp */
  ESI = (ESP);
  /* 12192491 push 0x121be178 */
  push32((uint32_t)(0x121be178u));
  /* 12192496 push 0x121be12c */
  push32((uint32_t)(0x121be12cu));
  /* 1219249b call dword ptr [0x121c6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6420))), 0x121924a1u);
  /* 121924a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121924a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121924a6 call 0x12196800 */
  push32(0x121924abu); f_12196800();
  /* 121924ab mov esi, esp */
  ESI = (ESP);
  /* 121924ad push 0x121c3458 */
  push32((uint32_t)(0x121c3458u));
  /* 121924b2 call dword ptr [0x121c6418] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6418))), 0x121924b8u);
  /* 121924b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121924bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121924bd call 0x12196800 */
  push32(0x121924c2u); f_12196800();
  /* 121924c2 mov esi, esp */
  ESI = (ESP);
  /* 121924c4 push 0xa */
  push32((uint32_t)(0xau));
  /* 121924c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 121924c8 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x121924ceu);
  /* 121924ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121924d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121924d3 call 0x12196800 */
  push32(0x121924d8u); f_12196800();
  /* 121924d8 mov esi, esp */
  ESI = (ESP);
  /* 121924da push 0xa */
  push32((uint32_t)(0xau));
  /* 121924dc push 7 */
  push32((uint32_t)(0x7u));
  /* 121924de call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x121924e4u);
  /* 121924e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121924e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121924e9 call 0x12196800 */
  push32(0x121924eeu); f_12196800();
  /* 121924ee mov esi, esp */
  ESI = (ESP);
  /* 121924f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 121924f2 push 0xe */
  push32((uint32_t)(0xeu));
  /* 121924f4 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x121924fau);
  /* 121924fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121924fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121924ff call 0x12196800 */
  push32(0x12192504u); f_12196800();
  /* 12192504 mov esi, esp */
  ESI = (ESP);
  /* 12192506 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192508 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1219250a call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192510u);
  /* 12192510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192515 call 0x12196800 */
  push32(0x1219251au); f_12196800();
  /* 1219251a mov esi, esp */
  ESI = (ESP);
  /* 1219251c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219251e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12192520 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192526u);
  /* 12192526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192529 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219252b call 0x12196800 */
  push32(0x12192530u); f_12196800();
  /* 12192530 mov esi, esp */
  ESI = (ESP);
  /* 12192532 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192534 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12192536 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219253cu);
  /* 1219253c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219253f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192541 call 0x12196800 */
  push32(0x12192546u); f_12196800();
  /* 12192546 mov esi, esp */
  ESI = (ESP);
  /* 12192548 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219254a push 0x23 */
  push32((uint32_t)(0x23u));
  /* 1219254c call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192552u);
  /* 12192552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192557 call 0x12196800 */
  push32(0x1219255cu); f_12196800();
  /* 1219255c mov esi, esp */
  ESI = (ESP);
  /* 1219255e push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12192560 call dword ptr [0x121c642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c642c))), 0x12192566u);
  /* 12192566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192569 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219256b call 0x12196800 */
  push32(0x12192570u); f_12196800();
  /* 12192570 mov esi, esp */
  ESI = (ESP);
  /* 12192572 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12192574 call dword ptr [0x121c642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c642c))), 0x1219257au);
  /* 1219257a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219257d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219257f call 0x12196800 */
  push32(0x12192584u); f_12196800();
  /* 12192584 mov esi, esp */
  ESI = (ESP);
  /* 12192586 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192588 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1219258a call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192590u);
  /* 12192590 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192593 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192595 call 0x12196800 */
  push32(0x1219259au); f_12196800();
  /* 1219259a mov dword ptr [0x121c3470], 0 */
  w32((uint32_t)(0x121c3470), (0x0u));
  /* 121925a4 mov dword ptr [0x121c3474], 0 */
  w32((uint32_t)(0x121c3474), (0x0u));
  /* 121925ae mov dword ptr [0x121c3478], 0 */
  w32((uint32_t)(0x121c3478), (0x0u));
  /* 121925b8 mov dword ptr [0x121c347c], 0 */
  w32((uint32_t)(0x121c347c), (0x0u));
  /* 121925c2 mov dword ptr [0x121c3480], 0 */
  w32((uint32_t)(0x121c3480), (0x0u));
  /* 121925cc mov dword ptr [0x121c3484], 0 */
  w32((uint32_t)(0x121c3484), (0x0u));
  /* 121925d6 mov dword ptr [0x121c3488], 0 */
  w32((uint32_t)(0x121c3488), (0x0u));
  /* 121925e0 mov dword ptr [0x121c348c], 0 */
  w32((uint32_t)(0x121c348c), (0x0u));
  /* 121925ea mov dword ptr [0x121c3490], 0 */
  w32((uint32_t)(0x121c3490), (0x0u));
  /* 121925f4 mov dword ptr [0x121c3640], 0 */
  w32((uint32_t)(0x121c3640), (0x0u));
L_121925fe:;
  /* 121925fe mov esi, esp */
  ESI = (ESP);
  /* 12192600 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12192602 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192608u);
  /* 12192608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219260b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219260d call 0x12196800 */
  push32(0x12192612u); f_12196800();
  /* 12192612 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192619 je 0x12192697 */
  if (C.zf) goto L_12192697;
  /* 1219261b mov esi, esp */
  ESI = (ESP);
  /* 1219261d push 0xe */
  push32((uint32_t)(0xeu));
  /* 1219261f call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12192625u);
  /* 12192625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192628 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219262a call 0x12196800 */
  push32(0x1219262fu); f_12196800();
  /* 1219262f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192636 je 0x12192697 */
  if (C.zf) goto L_12192697;
  /* 12192638 mov esi, esp */
  ESI = (ESP);
  /* 1219263a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219263c push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1219263e call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192644u);
  /* 12192644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192647 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192649 call 0x12196800 */
  push32(0x1219264eu); f_12196800();
  /* 1219264e mov esi, esp */
  ESI = (ESP);
  /* 12192650 push 0x121be170 */
  push32((uint32_t)(0x121be170u));
  /* 12192655 call dword ptr [0x121c6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6434))), 0x1219265bu);
  /* 1219265b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219265e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192660 call 0x12196800 */
  push32(0x12192665u); f_12196800();
  /* 12192665 mov esi, esp */
  ESI = (ESP);
  /* 12192667 push 0x121be168 */
  push32((uint32_t)(0x121be168u));
  /* 1219266c call dword ptr [0x121c6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6434))), 0x12192672u);
  /* 12192672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192675 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192677 call 0x12196800 */
  push32(0x1219267cu); f_12196800();
  /* 1219267c mov esi, esp */
  ESI = (ESP);
  /* 1219267e push 1 */
  push32((uint32_t)(0x1u));
  /* 12192680 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192682 push 0x121c3618 */
  push32((uint32_t)(0x121c3618u));
  /* 12192687 call dword ptr [0x121c6438] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6438))), 0x1219268du);
  /* 1219268d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192690 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192692 call 0x12196800 */
  push32(0x12192697u); f_12196800();
L_12192697:;
  /* 12192697 mov esi, esp */
  ESI = (ESP);
  /* 12192699 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219269b call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121926a1u);
  /* 121926a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121926a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121926a6 call 0x12196800 */
  push32(0x121926abu); f_12196800();
  /* 121926ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121926b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121926b2 je 0x12192754 */
  if (C.zf) goto L_12192754;
  /* 121926b8 mov esi, esp */
  ESI = (ESP);
  /* 121926ba push 1 */
  push32((uint32_t)(0x1u));
  /* 121926bc call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x121926c2u);
  /* 121926c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121926c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121926c7 call 0x12196800 */
  push32(0x121926ccu); f_12196800();
  /* 121926cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121926d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121926d3 je 0x12192754 */
  if (C.zf) goto L_12192754;
  /* 121926d5 mov esi, esp */
  ESI = (ESP);
  /* 121926d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121926d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121926db call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121926e1u);
  /* 121926e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121926e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121926e6 call 0x12196800 */
  push32(0x121926ebu); f_12196800();
  /* 121926eb mov esi, esp */
  ESI = (ESP);
  /* 121926ed push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 121926f2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121926f4 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x121926fau);
  /* 121926fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121926fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121926ff call 0x12196800 */
  push32(0x12192704u); f_12196800();
  /* 12192704 mov esi, esp */
  ESI = (ESP);
  /* 12192706 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12192708 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1219270a call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12192710u);
  /* 12192710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192713 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192715 call 0x12196800 */
  push32(0x1219271au); f_12196800();
  /* 1219271a mov esi, esp */
  ESI = (ESP);
  /* 1219271c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12192721 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12192723 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12192729u);
  /* 12192729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219272c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219272e call 0x12196800 */
  push32(0x12192733u); f_12196800();
  /* 12192733 mov esi, esp */
  ESI = (ESP);
  /* 12192735 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12192737 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192739 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219273b push 2 */
  push32((uint32_t)(0x2u));
  /* 1219273d push 0x121be15c */
  push32((uint32_t)(0x121be15cu));
  /* 12192742 push 3 */
  push32((uint32_t)(0x3u));
  /* 12192744 call dword ptr [0x121c6430] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6430))), 0x1219274au);
  /* 1219274a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219274d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219274f call 0x12196800 */
  push32(0x12192754u); f_12196800();
L_12192754:;
  /* 12192754 mov esi, esp */
  ESI = (ESP);
  /* 12192756 push 3 */
  push32((uint32_t)(0x3u));
  /* 12192758 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x1219275eu);
  /* 1219275e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192763 call 0x12196800 */
  push32(0x12192768u); f_12196800();
  /* 12192768 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219276d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219276f je 0x1219280e */
  if (C.zf) goto L_1219280e;
  /* 12192775 mov esi, esp */
  ESI = (ESP);
  /* 12192777 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192779 push 3 */
  push32((uint32_t)(0x3u));
  /* 1219277b call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192781u);
  /* 12192781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192784 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192786 call 0x12196800 */
  push32(0x1219278bu); f_12196800();
  /* 1219278b mov esi, esp */
  ESI = (ESP);
  /* 1219278d push 0 */
  push32((uint32_t)(0x0u));
  /* 1219278f push 0x121c33e8 */
  push32((uint32_t)(0x121c33e8u));
  /* 12192794 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192796 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x1219279cu);
  /* 1219279c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219279f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121927a1 call 0x12196800 */
  push32(0x121927a6u); f_12196800();
  /* 121927a6 mov esi, esp */
  ESI = (ESP);
  /* 121927a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 121927aa push 0x121c33e0 */
  push32((uint32_t)(0x121c33e0u));
  /* 121927af push 2 */
  push32((uint32_t)(0x2u));
  /* 121927b1 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121927b7u);
  /* 121927b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121927ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121927bc call 0x12196800 */
  push32(0x121927c1u); f_12196800();
  /* 121927c1 mov esi, esp */
  ESI = (ESP);
  /* 121927c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121927c5 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 121927ca push 0x121c3428 */
  push32((uint32_t)(0x121c3428u));
  /* 121927cf push 2 */
  push32((uint32_t)(0x2u));
  /* 121927d1 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x121927d7u);
  /* 121927d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121927da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121927dc call 0x12196800 */
  push32(0x121927e1u); f_12196800();
  /* 121927e1 mov esi, esp */
  ESI = (ESP);
  /* 121927e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121927e5 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x121927ebu);
  /* 121927eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121927ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121927f0 call 0x12196800 */
  push32(0x121927f5u); f_12196800();
  /* 121927f5 mov esi, esp */
  ESI = (ESP);
  /* 121927f7 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 121927fc push 1 */
  push32((uint32_t)(0x1u));
  /* 121927fe call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12192804u);
  /* 12192804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192807 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192809 call 0x12196800 */
  push32(0x1219280eu); f_12196800();
L_1219280e:;
  /* 1219280e mov esi, esp */
  ESI = (ESP);
  /* 12192810 push 4 */
  push32((uint32_t)(0x4u));
  /* 12192812 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192818u);
  /* 12192818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219281b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219281d call 0x12196800 */
  push32(0x12192822u); f_12196800();
  /* 12192822 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192827 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192829 je 0x121928b1 */
  if (C.zf) goto L_121928b1;
  /* 1219282f mov esi, esp */
  ESI = (ESP);
  /* 12192831 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192833 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12192839u);
  /* 12192839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219283c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219283e call 0x12196800 */
  push32(0x12192843u); f_12196800();
  /* 12192843 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219284a je 0x121928b1 */
  if (C.zf) goto L_121928b1;
  /* 1219284c mov esi, esp */
  ESI = (ESP);
  /* 1219284e push 0 */
  push32((uint32_t)(0x0u));
  /* 12192850 push 4 */
  push32((uint32_t)(0x4u));
  /* 12192852 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192858u);
  /* 12192858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219285b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219285d call 0x12196800 */
  push32(0x12192862u); f_12196800();
  /* 12192862 mov esi, esp */
  ESI = (ESP);
  /* 12192864 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192866 push 0x121c33e8 */
  push32((uint32_t)(0x121c33e8u));
  /* 1219286b push 2 */
  push32((uint32_t)(0x2u));
  /* 1219286d call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12192873u);
  /* 12192873 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192876 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192878 call 0x12196800 */
  push32(0x1219287du); f_12196800();
  /* 1219287d mov esi, esp */
  ESI = (ESP);
  /* 1219287f push 0 */
  push32((uint32_t)(0x0u));
  /* 12192881 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12192886 push 0x121c3430 */
  push32((uint32_t)(0x121c3430u));
  /* 1219288b push 2 */
  push32((uint32_t)(0x2u));
  /* 1219288d call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12192893u);
  /* 12192893 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192898 call 0x12196800 */
  push32(0x1219289du); f_12196800();
  /* 1219289d mov esi, esp */
  ESI = (ESP);
  /* 1219289f push 2 */
  push32((uint32_t)(0x2u));
  /* 121928a1 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x121928a7u);
  /* 121928a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121928aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121928ac call 0x12196800 */
  push32(0x121928b1u); f_12196800();
L_121928b1:;
  /* 121928b1 mov esi, esp */
  ESI = (ESP);
  /* 121928b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 121928b5 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121928bbu);
  /* 121928bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121928be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121928c0 call 0x12196800 */
  push32(0x121928c5u); f_12196800();
  /* 121928c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121928ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121928cc je 0x12192954 */
  if (C.zf) goto L_12192954;
  /* 121928d2 mov esi, esp */
  ESI = (ESP);
  /* 121928d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121928d6 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x121928dcu);
  /* 121928dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121928df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121928e1 call 0x12196800 */
  push32(0x121928e6u); f_12196800();
  /* 121928e6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121928eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121928ed je 0x12192954 */
  if (C.zf) goto L_12192954;
  /* 121928ef mov esi, esp */
  ESI = (ESP);
  /* 121928f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121928f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 121928f5 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121928fbu);
  /* 121928fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121928fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192900 call 0x12196800 */
  push32(0x12192905u); f_12196800();
  /* 12192905 mov esi, esp */
  ESI = (ESP);
  /* 12192907 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192909 push 0x121c33e0 */
  push32((uint32_t)(0x121c33e0u));
  /* 1219290e push 2 */
  push32((uint32_t)(0x2u));
  /* 12192910 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12192916u);
  /* 12192916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192919 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219291b call 0x12196800 */
  push32(0x12192920u); f_12196800();
  /* 12192920 mov esi, esp */
  ESI = (ESP);
  /* 12192922 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192924 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12192929 push 0x121c3438 */
  push32((uint32_t)(0x121c3438u));
  /* 1219292e push 2 */
  push32((uint32_t)(0x2u));
  /* 12192930 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12192936u);
  /* 12192936 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219293b call 0x12196800 */
  push32(0x12192940u); f_12196800();
  /* 12192940 mov esi, esp */
  ESI = (ESP);
  /* 12192942 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192944 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x1219294au);
  /* 1219294a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219294d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219294f call 0x12196800 */
  push32(0x12192954u); f_12196800();
L_12192954:;
  /* 12192954 mov esi, esp */
  ESI = (ESP);
  /* 12192956 push 6 */
  push32((uint32_t)(0x6u));
  /* 12192958 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x1219295eu);
  /* 1219295e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192963 call 0x12196800 */
  push32(0x12192968u); f_12196800();
  /* 12192968 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219296d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219296f je 0x12192a0e */
  if (C.zf) goto L_12192a0e;
  /* 12192975 mov esi, esp */
  ESI = (ESP);
  /* 12192977 push 0x121c33f0 */
  push32((uint32_t)(0x121c33f0u));
  /* 1219297c call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12192982u);
  /* 12192982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192985 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192987 call 0x12196800 */
  push32(0x1219298cu); f_12196800();
  /* 1219298c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219298e jne 0x12192a0e */
  if (!C.zf) goto L_12192a0e;
  /* 12192990 mov esi, esp */
  ESI = (ESP);
  /* 12192992 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192994 push 6 */
  push32((uint32_t)(0x6u));
  /* 12192996 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219299cu);
  /* 1219299c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219299f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121929a1 call 0x12196800 */
  push32(0x121929a6u); f_12196800();
  /* 121929a6 mov esi, esp */
  ESI = (ESP);
  /* 121929a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121929aa push 0x121c33e8 */
  push32((uint32_t)(0x121c33e8u));
  /* 121929af push 2 */
  push32((uint32_t)(0x2u));
  /* 121929b1 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121929b7u);
  /* 121929b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121929ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121929bc call 0x12196800 */
  push32(0x121929c1u); f_12196800();
  /* 121929c1 mov esi, esp */
  ESI = (ESP);
  /* 121929c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121929c5 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 121929ca push 0x121c3430 */
  push32((uint32_t)(0x121c3430u));
  /* 121929cf push 2 */
  push32((uint32_t)(0x2u));
  /* 121929d1 call dword ptr [0x121c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6450))), 0x121929d7u);
  /* 121929d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121929da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121929dc call 0x12196800 */
  push32(0x121929e1u); f_12196800();
  /* 121929e1 mov esi, esp */
  ESI = (ESP);
  /* 121929e3 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 121929e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121929ea call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x121929f0u);
  /* 121929f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121929f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121929f5 call 0x12196800 */
  push32(0x121929fau); f_12196800();
  /* 121929fa mov esi, esp */
  ESI = (ESP);
  /* 121929fc push 2 */
  push32((uint32_t)(0x2u));
  /* 121929fe call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x12192a04u);
  /* 12192a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192a09 call 0x12196800 */
  push32(0x12192a0eu); f_12196800();
L_12192a0e:;
  /* 12192a0e mov esi, esp */
  ESI = (ESP);
  /* 12192a10 push 7 */
  push32((uint32_t)(0x7u));
  /* 12192a12 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192a18u);
  /* 12192a18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192a1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192a1d call 0x12196800 */
  push32(0x12192a22u); f_12196800();
  /* 12192a22 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192a27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192a29 je 0x12192aaf */
  if (C.zf) goto L_12192aaf;
  /* 12192a2f mov esi, esp */
  ESI = (ESP);
  /* 12192a31 push 0x121c33f8 */
  push32((uint32_t)(0x121c33f8u));
  /* 12192a36 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12192a3cu);
  /* 12192a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192a3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192a41 call 0x12196800 */
  push32(0x12192a46u); f_12196800();
  /* 12192a46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192a48 jne 0x12192aaf */
  if (!C.zf) goto L_12192aaf;
  /* 12192a4a mov esi, esp */
  ESI = (ESP);
  /* 12192a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12192a4e push 7 */
  push32((uint32_t)(0x7u));
  /* 12192a50 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192a56u);
  /* 12192a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192a59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192a5b call 0x12196800 */
  push32(0x12192a60u); f_12196800();
  /* 12192a60 mov esi, esp */
  ESI = (ESP);
  /* 12192a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192a64 push 0x121c33e0 */
  push32((uint32_t)(0x121c33e0u));
  /* 12192a69 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192a6b call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12192a71u);
  /* 12192a71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192a74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192a76 call 0x12196800 */
  push32(0x12192a7bu); f_12196800();
  /* 12192a7b mov esi, esp */
  ESI = (ESP);
  /* 12192a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12192a7f push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12192a84 push 0x121c3438 */
  push32((uint32_t)(0x121c3438u));
  /* 12192a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192a8b call dword ptr [0x121c6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6450))), 0x12192a91u);
  /* 12192a91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192a96 call 0x12196800 */
  push32(0x12192a9bu); f_12196800();
  /* 12192a9b mov esi, esp */
  ESI = (ESP);
  /* 12192a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12192a9f call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x12192aa5u);
  /* 12192aa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192aaa call 0x12196800 */
  push32(0x12192aafu); f_12196800();
L_12192aaf:;
  /* 12192aaf mov esi, esp */
  ESI = (ESP);
  /* 12192ab1 push 8 */
  push32((uint32_t)(0x8u));
  /* 12192ab3 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192ab9u);
  /* 12192ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192abc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192abe call 0x12196800 */
  push32(0x12192ac3u); f_12196800();
  /* 12192ac3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192aca je 0x12192b71 */
  if (C.zf) goto L_12192b71;
  /* 12192ad0 mov esi, esp */
  ESI = (ESP);
  /* 12192ad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192ad4 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12192adau);
  /* 12192ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192add cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192adf call 0x12196800 */
  push32(0x12192ae4u); f_12196800();
  /* 12192ae4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192aeb je 0x12192b71 */
  if (C.zf) goto L_12192b71;
  /* 12192af1 mov esi, esp */
  ESI = (ESP);
  /* 12192af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192af5 push 8 */
  push32((uint32_t)(0x8u));
  /* 12192af7 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192afdu);
  /* 12192afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192b00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192b02 call 0x12196800 */
  push32(0x12192b07u); f_12196800();
  /* 12192b07 mov esi, esp */
  ESI = (ESP);
  /* 12192b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192b0b push 0x121c33e0 */
  push32((uint32_t)(0x121c33e0u));
  /* 12192b10 push 2 */
  push32((uint32_t)(0x2u));
  /* 12192b12 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12192b18u);
  /* 12192b18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192b1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192b1d call 0x12196800 */
  push32(0x12192b22u); f_12196800();
  /* 12192b22 mov esi, esp */
  ESI = (ESP);
  /* 12192b24 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192b26 push 0x121c33e8 */
  push32((uint32_t)(0x121c33e8u));
  /* 12192b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 12192b2d call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12192b33u);
  /* 12192b33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192b36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192b38 call 0x12196800 */
  push32(0x12192b3du); f_12196800();
  /* 12192b3d mov esi, esp */
  ESI = (ESP);
  /* 12192b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12192b41 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12192b46 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12192b4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12192b4d call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12192b53u);
  /* 12192b53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192b56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192b58 call 0x12196800 */
  push32(0x12192b5du); f_12196800();
  /* 12192b5d mov esi, esp */
  ESI = (ESP);
  /* 12192b5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12192b61 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x12192b67u);
  /* 12192b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192b6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192b6c call 0x12196800 */
  push32(0x12192b71u); f_12196800();
L_12192b71:;
  /* 12192b71 mov esi, esp */
  ESI = (ESP);
  /* 12192b73 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12192b75 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192b7bu);
  /* 12192b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192b7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192b80 call 0x12196800 */
  push32(0x12192b85u); f_12196800();
  /* 12192b85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192b8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192b8c je 0x12192c63 */
  if (C.zf) goto L_12192c63;
  /* 12192b92 mov esi, esp */
  ESI = (ESP);
  /* 12192b94 push 0x121c3400 */
  push32((uint32_t)(0x121c3400u));
  /* 12192b99 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12192b9fu);
  /* 12192b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192ba2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192ba4 call 0x12196800 */
  push32(0x12192ba9u); f_12196800();
  /* 12192ba9 cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192bac jge 0x12192c63 */
  if ((C.sf==C.of)) goto L_12192c63;
  /* 12192bb2 mov esi, esp */
  ESI = (ESP);
  /* 12192bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192bb6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12192bb8 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192bbeu);
  /* 12192bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192bc3 call 0x12196800 */
  push32(0x12192bc8u); f_12196800();
  /* 12192bc8 mov esi, esp */
  ESI = (ESP);
  /* 12192bca push 0x121be154 */
  push32((uint32_t)(0x121be154u));
  /* 12192bcf call dword ptr [0x121c6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6434))), 0x12192bd5u);
  /* 12192bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192bd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192bda call 0x12196800 */
  push32(0x12192bdfu); f_12196800();
  /* 12192bdf mov esi, esp */
  ESI = (ESP);
  /* 12192be1 push 0x121be14c */
  push32((uint32_t)(0x121be14cu));
  /* 12192be6 call dword ptr [0x121c6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6434))), 0x12192becu);
  /* 12192bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192bf1 call 0x12196800 */
  push32(0x12192bf6u); f_12196800();
  /* 12192bf6 mov esi, esp */
  ESI = (ESP);
  /* 12192bf8 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12192bfa call dword ptr [0x121c642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c642c))), 0x12192c00u);
  /* 12192c00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192c03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192c05 call 0x12196800 */
  push32(0x12192c0au); f_12196800();
  /* 12192c0a mov esi, esp */
  ESI = (ESP);
  /* 12192c0c push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12192c0e call dword ptr [0x121c6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6448))), 0x12192c14u);
  /* 12192c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192c19 call 0x12196800 */
  push32(0x12192c1eu); f_12196800();
  /* 12192c1e mov esi, esp */
  ESI = (ESP);
  /* 12192c20 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12192c22 call dword ptr [0x121c6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6448))), 0x12192c28u);
  /* 12192c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192c2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192c2d call 0x12196800 */
  push32(0x12192c32u); f_12196800();
  /* 12192c32 mov esi, esp */
  ESI = (ESP);
  /* 12192c34 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192c36 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12192c38 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192c3eu);
  /* 12192c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192c41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192c43 call 0x12196800 */
  push32(0x12192c48u); f_12196800();
  /* 12192c48 mov esi, esp */
  ESI = (ESP);
  /* 12192c4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12192c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12192c4e push 0x121c3628 */
  push32((uint32_t)(0x121c3628u));
  /* 12192c53 call dword ptr [0x121c6438] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6438))), 0x12192c59u);
  /* 12192c59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192c5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192c5e call 0x12196800 */
  push32(0x12192c63u); f_12196800();
L_12192c63:;
  /* 12192c63 mov esi, esp */
  ESI = (ESP);
  /* 12192c65 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 12192c67 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192c6du);
  /* 12192c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192c70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192c72 call 0x12196800 */
  push32(0x12192c77u); f_12196800();
  /* 12192c77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192c7e je 0x12193977 */
  if (C.zf) goto L_12193977;
  /* 12192c84 mov esi, esp */
  ESI = (ESP);
  /* 12192c86 push 9 */
  push32((uint32_t)(0x9u));
  /* 12192c88 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192c8eu);
  /* 12192c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192c91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192c93 call 0x12196800 */
  push32(0x12192c98u); f_12196800();
  /* 12192c98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192c9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192c9f je 0x12192db1 */
  if (C.zf) goto L_12192db1;
  /* 12192ca5 mov esi, esp */
  ESI = (ESP);
  /* 12192ca7 push 3 */
  push32((uint32_t)(0x3u));
  /* 12192ca9 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12192cafu);
  /* 12192caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192cb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192cb4 call 0x12196800 */
  push32(0x12192cb9u); f_12196800();
  /* 12192cb9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192cbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192cc0 je 0x12192db1 */
  if (C.zf) goto L_12192db1;
  /* 12192cc6 mov esi, esp */
  ESI = (ESP);
  /* 12192cc8 push 7 */
  push32((uint32_t)(0x7u));
  /* 12192cca call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12192cd0u);
  /* 12192cd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192cd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192cd5 call 0x12196800 */
  push32(0x12192cdau); f_12196800();
  /* 12192cda and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192cdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192ce1 je 0x12192db1 */
  if (C.zf) goto L_12192db1;
  /* 12192ce7 mov esi, esp */
  ESI = (ESP);
  /* 12192ce9 push 0x121c3508 */
  push32((uint32_t)(0x121c3508u));
  /* 12192cee call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12192cf4u);
  /* 12192cf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192cf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192cf9 call 0x12196800 */
  push32(0x12192cfeu); f_12196800();
  /* 12192cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192d00 jne 0x12192db1 */
  if (!C.zf) goto L_12192db1;
  /* 12192d06 cmp dword ptr [0x121c3470], 4 */
  { uint32_t _a=(r32((uint32_t)(0x121c3470))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192d0d jge 0x12192db1 */
  if ((C.sf==C.of)) goto L_12192db1;
  /* 12192d13 mov esi, esp */
  ESI = (ESP);
  /* 12192d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192d17 push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 12192d1c push 1 */
  push32((uint32_t)(0x1u));
  /* 12192d1e push 0x121c3560 */
  push32((uint32_t)(0x121c3560u));
  /* 12192d23 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12192d28 push 0x121c3508 */
  push32((uint32_t)(0x121c3508u));
  /* 12192d2d call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12192d33u);
  /* 12192d33 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192d36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192d38 call 0x12196800 */
  push32(0x12192d3du); f_12196800();
  /* 12192d3d mov esi, esp */
  ESI = (ESP);
  /* 12192d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12192d41 push 0x121c3508 */
  push32((uint32_t)(0x121c3508u));
  /* 12192d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192d48 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12192d4eu);
  /* 12192d4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192d53 call 0x12196800 */
  push32(0x12192d58u); f_12196800();
  /* 12192d58 mov esi, esp */
  ESI = (ESP);
  /* 12192d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12192d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12192d5e push 0x121c35c8 */
  push32((uint32_t)(0x121c35c8u));
  /* 12192d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192d65 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12192d6bu);
  /* 12192d6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192d6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192d70 call 0x12196800 */
  push32(0x12192d75u); f_12196800();
  /* 12192d75 mov esi, esp */
  ESI = (ESP);
  /* 12192d77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192d79 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12192d7b call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192d81u);
  /* 12192d81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192d84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192d86 call 0x12196800 */
  push32(0x12192d8bu); f_12196800();
  /* 12192d8b mov eax, dword ptr [0x121c3470] */
  EAX = (r32((uint32_t)(0x121c3470)));
  /* 12192d90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12192d93 mov dword ptr [0x121c3470], eax */
  w32((uint32_t)(0x121c3470), (EAX));
  /* 12192d98 mov esi, esp */
  ESI = (ESP);
  /* 12192d9a push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12192d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 12192da1 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12192da7u);
  /* 12192da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192daa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192dac call 0x12196800 */
  push32(0x12192db1u); f_12196800();
L_12192db1:;
  /* 12192db1 mov esi, esp */
  ESI = (ESP);
  /* 12192db3 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12192db5 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192dbbu);
  /* 12192dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192dbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192dc0 call 0x12196800 */
  push32(0x12192dc5u); f_12196800();
  /* 12192dc5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192dcc je 0x12192e4b */
  if (C.zf) goto L_12192e4b;
  /* 12192dce push 0x121c3508 */
  push32((uint32_t)(0x121c3508u));
  /* 12192dd3 call 0x12191005 */
  push32(0x12192dd8u); f_12191005();
  /* 12192dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192ddb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192ddd jle 0x12192e4b */
  if ((C.zf||C.sf!=C.of)) goto L_12192e4b;
  /* 12192ddf mov esi, esp */
  ESI = (ESP);
  /* 12192de1 push 0x121c3508 */
  push32((uint32_t)(0x121c3508u));
  /* 12192de6 push 0x121c35c8 */
  push32((uint32_t)(0x121c35c8u));
  /* 12192deb call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12192df1u);
  /* 12192df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192df4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192df6 call 0x12196800 */
  push32(0x12192dfbu); f_12196800();
  /* 12192dfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192dfd jle 0x12192e4b */
  if ((C.zf||C.sf!=C.of)) goto L_12192e4b;
  /* 12192dff mov esi, esp */
  ESI = (ESP);
  /* 12192e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192e03 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12192e05 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192e0bu);
  /* 12192e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192e0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192e10 call 0x12196800 */
  push32(0x12192e15u); f_12196800();
  /* 12192e15 mov esi, esp */
  ESI = (ESP);
  /* 12192e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192e19 push 0x121c3508 */
  push32((uint32_t)(0x121c3508u));
  /* 12192e1e push 1 */
  push32((uint32_t)(0x1u));
  /* 12192e20 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12192e26u);
  /* 12192e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192e29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192e2b call 0x12196800 */
  push32(0x12192e30u); f_12196800();
  /* 12192e30 mov esi, esp */
  ESI = (ESP);
  /* 12192e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192e34 push 0x121c35d8 */
  push32((uint32_t)(0x121c35d8u));
  /* 12192e39 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192e3b call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12192e41u);
  /* 12192e41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192e44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192e46 call 0x12196800 */
  push32(0x12192e4bu); f_12196800();
L_12192e4b:;
  /* 12192e4b mov esi, esp */
  ESI = (ESP);
  /* 12192e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12192e4f call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12192e55u);
  /* 12192e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192e58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192e5a call 0x12196800 */
  push32(0x12192e5fu); f_12196800();
  /* 12192e5f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192e62 jle 0x12193010 */
  if ((C.zf||C.sf!=C.of)) goto L_12193010;
  /* 12192e68 mov esi, esp */
  ESI = (ESP);
  /* 12192e6a push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12192e6c call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192e72u);
  /* 12192e72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192e75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192e77 call 0x12196800 */
  push32(0x12192e7cu); f_12196800();
  /* 12192e7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192e83 je 0x12192f76 */
  if (C.zf) goto L_12192f76;
  /* 12192e89 mov esi, esp */
  ESI = (ESP);
  /* 12192e8b push 1 */
  push32((uint32_t)(0x1u));
  /* 12192e8d call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12192e93u);
  /* 12192e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192e96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192e98 call 0x12196800 */
  push32(0x12192e9du); f_12196800();
  /* 12192e9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192ea4 je 0x12192f76 */
  if (C.zf) goto L_12192f76;
  /* 12192eaa mov esi, esp */
  ESI = (ESP);
  /* 12192eac push 0x121c34b8 */
  push32((uint32_t)(0x121c34b8u));
  /* 12192eb1 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12192eb7u);
  /* 12192eb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192eba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192ebc call 0x12196800 */
  push32(0x12192ec1u); f_12196800();
  /* 12192ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192ec3 jne 0x12192f76 */
  if (!C.zf) goto L_12192f76;
  /* 12192ec9 cmp dword ptr [0x121c3474], 4 */
  { uint32_t _a=(r32((uint32_t)(0x121c3474))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192ed0 jge 0x12192f76 */
  if ((C.sf==C.of)) goto L_12192f76;
  /* 12192ed6 mov esi, esp */
  ESI = (ESP);
  /* 12192ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192eda push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 12192edf push 1 */
  push32((uint32_t)(0x1u));
  /* 12192ee1 push 0x121c3560 */
  push32((uint32_t)(0x121c3560u));
  /* 12192ee6 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12192eeb push 0x121c34b8 */
  push32((uint32_t)(0x121c34b8u));
  /* 12192ef0 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12192ef6u);
  /* 12192ef6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192ef9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192efb call 0x12196800 */
  push32(0x12192f00u); f_12196800();
  /* 12192f00 mov esi, esp */
  ESI = (ESP);
  /* 12192f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192f04 push 0x121c34b8 */
  push32((uint32_t)(0x121c34b8u));
  /* 12192f09 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192f0b call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12192f11u);
  /* 12192f11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192f14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192f16 call 0x12196800 */
  push32(0x12192f1bu); f_12196800();
  /* 12192f1b mov esi, esp */
  ESI = (ESP);
  /* 12192f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12192f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12192f21 push 0x121c35c8 */
  push32((uint32_t)(0x121c35c8u));
  /* 12192f26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192f28 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12192f2eu);
  /* 12192f2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192f31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192f33 call 0x12196800 */
  push32(0x12192f38u); f_12196800();
  /* 12192f38 mov esi, esp */
  ESI = (ESP);
  /* 12192f3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12192f3c push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12192f3e call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192f44u);
  /* 12192f44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192f47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192f49 call 0x12196800 */
  push32(0x12192f4eu); f_12196800();
  /* 12192f4e mov esi, esp */
  ESI = (ESP);
  /* 12192f50 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12192f55 push 5 */
  push32((uint32_t)(0x5u));
  /* 12192f57 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12192f5du);
  /* 12192f5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192f60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192f62 call 0x12196800 */
  push32(0x12192f67u); f_12196800();
  /* 12192f67 mov ecx, dword ptr [0x121c3474] */
  ECX = (r32((uint32_t)(0x121c3474)));
  /* 12192f6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12192f70 mov dword ptr [0x121c3474], ecx */
  w32((uint32_t)(0x121c3474), (ECX));
L_12192f76:;
  /* 12192f76 mov esi, esp */
  ESI = (ESP);
  /* 12192f78 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12192f7a call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12192f80u);
  /* 12192f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192f83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192f85 call 0x12196800 */
  push32(0x12192f8au); f_12196800();
  /* 12192f8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12192f8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192f91 je 0x12193010 */
  if (C.zf) goto L_12193010;
  /* 12192f93 push 0x121c34b8 */
  push32((uint32_t)(0x121c34b8u));
  /* 12192f98 call 0x12191005 */
  push32(0x12192f9du); f_12191005();
  /* 12192f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192fa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192fa2 jle 0x12193010 */
  if ((C.zf||C.sf!=C.of)) goto L_12193010;
  /* 12192fa4 mov esi, esp */
  ESI = (ESP);
  /* 12192fa6 push 0x121c34b8 */
  push32((uint32_t)(0x121c34b8u));
  /* 12192fab push 0x121c35c8 */
  push32((uint32_t)(0x121c35c8u));
  /* 12192fb0 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12192fb6u);
  /* 12192fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192fb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192fbb call 0x12196800 */
  push32(0x12192fc0u); f_12196800();
  /* 12192fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12192fc2 jle 0x12193010 */
  if ((C.zf||C.sf!=C.of)) goto L_12193010;
  /* 12192fc4 mov esi, esp */
  ESI = (ESP);
  /* 12192fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192fc8 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12192fca call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12192fd0u);
  /* 12192fd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192fd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192fd5 call 0x12196800 */
  push32(0x12192fdau); f_12196800();
  /* 12192fda mov esi, esp */
  ESI = (ESP);
  /* 12192fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 12192fde push 0x121c34b8 */
  push32((uint32_t)(0x121c34b8u));
  /* 12192fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12192fe5 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12192febu);
  /* 12192feb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12192fee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12192ff0 call 0x12196800 */
  push32(0x12192ff5u); f_12196800();
  /* 12192ff5 mov esi, esp */
  ESI = (ESP);
  /* 12192ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12192ff9 push 0x121c35d8 */
  push32((uint32_t)(0x121c35d8u));
  /* 12192ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 12193000 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12193006u);
  /* 12193006 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193009 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219300b call 0x12196800 */
  push32(0x12193010u); f_12196800();
L_12193010:;
  /* 12193010 mov esi, esp */
  ESI = (ESP);
  /* 12193012 push 0xa */
  push32((uint32_t)(0xau));
  /* 12193014 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x1219301au);
  /* 1219301a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219301d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219301f call 0x12196800 */
  push32(0x12193024u); f_12196800();
  /* 12193024 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219302b je 0x1219313f */
  if (C.zf) goto L_1219313f;
  /* 12193031 mov esi, esp */
  ESI = (ESP);
  /* 12193033 push 3 */
  push32((uint32_t)(0x3u));
  /* 12193035 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x1219303bu);
  /* 1219303b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219303e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193040 call 0x12196800 */
  push32(0x12193045u); f_12196800();
  /* 12193045 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219304a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219304c je 0x1219313f */
  if (C.zf) goto L_1219313f;
  /* 12193052 mov esi, esp */
  ESI = (ESP);
  /* 12193054 push 5 */
  push32((uint32_t)(0x5u));
  /* 12193056 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x1219305cu);
  /* 1219305c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219305f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193061 call 0x12196800 */
  push32(0x12193066u); f_12196800();
  /* 12193066 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219306b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219306d je 0x1219313f */
  if (C.zf) goto L_1219313f;
  /* 12193073 mov esi, esp */
  ESI = (ESP);
  /* 12193075 push 0x121c3510 */
  push32((uint32_t)(0x121c3510u));
  /* 1219307a call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12193080u);
  /* 12193080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193083 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193085 call 0x12196800 */
  push32(0x1219308au); f_12196800();
  /* 1219308a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219308c jne 0x1219313f */
  if (!C.zf) goto L_1219313f;
  /* 12193092 cmp dword ptr [0x121c3478], 5 */
  { uint32_t _a=(r32((uint32_t)(0x121c3478))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193099 jge 0x1219313f */
  if ((C.sf==C.of)) goto L_1219313f;
  /* 1219309f mov esi, esp */
  ESI = (ESP);
  /* 121930a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121930a3 push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 121930a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 121930aa push 0x121c3558 */
  push32((uint32_t)(0x121c3558u));
  /* 121930af push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 121930b4 push 0x121c3510 */
  push32((uint32_t)(0x121c3510u));
  /* 121930b9 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x121930bfu);
  /* 121930bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121930c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121930c4 call 0x12196800 */
  push32(0x121930c9u); f_12196800();
  /* 121930c9 mov esi, esp */
  ESI = (ESP);
  /* 121930cb push 0 */
  push32((uint32_t)(0x0u));
  /* 121930cd push 0x121c3510 */
  push32((uint32_t)(0x121c3510u));
  /* 121930d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 121930d4 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121930dau);
  /* 121930da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121930dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121930df call 0x12196800 */
  push32(0x121930e4u); f_12196800();
  /* 121930e4 mov esi, esp */
  ESI = (ESP);
  /* 121930e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121930e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121930ea push 0x121c35a8 */
  push32((uint32_t)(0x121c35a8u));
  /* 121930ef push 1 */
  push32((uint32_t)(0x1u));
  /* 121930f1 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x121930f7u);
  /* 121930f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121930fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121930fc call 0x12196800 */
  push32(0x12193101u); f_12196800();
  /* 12193101 mov esi, esp */
  ESI = (ESP);
  /* 12193103 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12193108 push 6 */
  push32((uint32_t)(0x6u));
  /* 1219310a call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12193110u);
  /* 12193110 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193113 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193115 call 0x12196800 */
  push32(0x1219311au); f_12196800();
  /* 1219311a mov esi, esp */
  ESI = (ESP);
  /* 1219311c push 1 */
  push32((uint32_t)(0x1u));
  /* 1219311e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12193120 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193126u);
  /* 12193126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193129 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219312b call 0x12196800 */
  push32(0x12193130u); f_12196800();
  /* 12193130 mov edx, dword ptr [0x121c3478] */
  EDX = (r32((uint32_t)(0x121c3478)));
  /* 12193136 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12193139 mov dword ptr [0x121c3478], edx */
  w32((uint32_t)(0x121c3478), (EDX));
L_1219313f:;
  /* 1219313f mov esi, esp */
  ESI = (ESP);
  /* 12193141 push 0x121c3510 */
  push32((uint32_t)(0x121c3510u));
  /* 12193146 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x1219314cu);
  /* 1219314c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219314f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193151 call 0x12196800 */
  push32(0x12193156u); f_12196800();
  /* 12193156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193158 jle 0x121931e7 */
  if ((C.zf||C.sf!=C.of)) goto L_121931e7;
  /* 1219315e mov esi, esp */
  ESI = (ESP);
  /* 12193160 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12193162 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193168u);
  /* 12193168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219316b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219316d call 0x12196800 */
  push32(0x12193172u); f_12196800();
  /* 12193172 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193177 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193179 je 0x121931e7 */
  if (C.zf) goto L_121931e7;
  /* 1219317b mov esi, esp */
  ESI = (ESP);
  /* 1219317d push 0x121c3510 */
  push32((uint32_t)(0x121c3510u));
  /* 12193182 push 0x121c35a8 */
  push32((uint32_t)(0x121c35a8u));
  /* 12193187 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x1219318du);
  /* 1219318d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193190 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193192 call 0x12196800 */
  push32(0x12193197u); f_12196800();
  /* 12193197 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193199 jle 0x121931e7 */
  if ((C.zf||C.sf!=C.of)) goto L_121931e7;
  /* 1219319b mov esi, esp */
  ESI = (ESP);
  /* 1219319d push 0 */
  push32((uint32_t)(0x0u));
  /* 1219319f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 121931a1 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121931a7u);
  /* 121931a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121931aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121931ac call 0x12196800 */
  push32(0x121931b1u); f_12196800();
  /* 121931b1 mov esi, esp */
  ESI = (ESP);
  /* 121931b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121931b5 push 0x121c3510 */
  push32((uint32_t)(0x121c3510u));
  /* 121931ba push 1 */
  push32((uint32_t)(0x1u));
  /* 121931bc call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121931c2u);
  /* 121931c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121931c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121931c7 call 0x12196800 */
  push32(0x121931ccu); f_12196800();
  /* 121931cc mov esi, esp */
  ESI = (ESP);
  /* 121931ce push 0 */
  push32((uint32_t)(0x0u));
  /* 121931d0 push 0x121c3598 */
  push32((uint32_t)(0x121c3598u));
  /* 121931d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 121931d7 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x121931ddu);
  /* 121931dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121931e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121931e2 call 0x12196800 */
  push32(0x121931e7u); f_12196800();
L_121931e7:;
  /* 121931e7 mov esi, esp */
  ESI = (ESP);
  /* 121931e9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121931eb call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121931f1u);
  /* 121931f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121931f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121931f6 call 0x12196800 */
  push32(0x121931fbu); f_12196800();
  /* 121931fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193202 je 0x1219330a */
  if (C.zf) goto L_1219330a;
  /* 12193208 mov esi, esp */
  ESI = (ESP);
  /* 1219320a push 3 */
  push32((uint32_t)(0x3u));
  /* 1219320c call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12193212u);
  /* 12193212 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193217 call 0x12196800 */
  push32(0x1219321cu); f_12196800();
  /* 1219321c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193223 je 0x1219330a */
  if (C.zf) goto L_1219330a;
  /* 12193229 mov esi, esp */
  ESI = (ESP);
  /* 1219322b push 6 */
  push32((uint32_t)(0x6u));
  /* 1219322d call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12193233u);
  /* 12193233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193236 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193238 call 0x12196800 */
  push32(0x1219323du); f_12196800();
  /* 1219323d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193244 je 0x1219330a */
  if (C.zf) goto L_1219330a;
  /* 1219324a mov esi, esp */
  ESI = (ESP);
  /* 1219324c push 0x121c3518 */
  push32((uint32_t)(0x121c3518u));
  /* 12193251 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12193257u);
  /* 12193257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219325a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219325c call 0x12196800 */
  push32(0x12193261u); f_12196800();
  /* 12193261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193263 jne 0x1219330a */
  if (!C.zf) goto L_1219330a;
  /* 12193269 mov eax, dword ptr [0x121c347c] */
  EAX = (r32((uint32_t)(0x121c347c)));
  /* 1219326e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12193271 mov dword ptr [0x121c347c], eax */
  w32((uint32_t)(0x121c347c), (EAX));
  /* 12193276 cmp dword ptr [0x121c347c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c347c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219327d je 0x1219330a */
  if (C.zf) goto L_1219330a;
  /* 12193283 mov esi, esp */
  ESI = (ESP);
  /* 12193285 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193287 push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 1219328c push 1 */
  push32((uint32_t)(0x1u));
  /* 1219328e push 0x121c3558 */
  push32((uint32_t)(0x121c3558u));
  /* 12193293 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12193298 push 0x121c3518 */
  push32((uint32_t)(0x121c3518u));
  /* 1219329d call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x121932a3u);
  /* 121932a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121932a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121932a8 call 0x12196800 */
  push32(0x121932adu); f_12196800();
  /* 121932ad mov esi, esp */
  ESI = (ESP);
  /* 121932af push 0 */
  push32((uint32_t)(0x0u));
  /* 121932b1 push 0x121c3518 */
  push32((uint32_t)(0x121c3518u));
  /* 121932b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 121932b8 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121932beu);
  /* 121932be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121932c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121932c3 call 0x12196800 */
  push32(0x121932c8u); f_12196800();
  /* 121932c8 mov esi, esp */
  ESI = (ESP);
  /* 121932ca push 0 */
  push32((uint32_t)(0x0u));
  /* 121932cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121932ce push 0x121c35b8 */
  push32((uint32_t)(0x121c35b8u));
  /* 121932d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121932d5 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x121932dbu);
  /* 121932db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121932de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121932e0 call 0x12196800 */
  push32(0x121932e5u); f_12196800();
  /* 121932e5 mov esi, esp */
  ESI = (ESP);
  /* 121932e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 121932e9 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 121932eb call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121932f1u);
  /* 121932f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121932f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121932f6 call 0x12196800 */
  push32(0x121932fbu); f_12196800();
  /* 121932fb mov ecx, dword ptr [0x121c347c] */
  ECX = (r32((uint32_t)(0x121c347c)));
  /* 12193301 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12193304 mov dword ptr [0x121c347c], ecx */
  w32((uint32_t)(0x121c347c), (ECX));
L_1219330a:;
  /* 1219330a mov esi, esp */
  ESI = (ESP);
  /* 1219330c push 0x121c3518 */
  push32((uint32_t)(0x121c3518u));
  /* 12193311 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12193317u);
  /* 12193317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219331a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219331c call 0x12196800 */
  push32(0x12193321u); f_12196800();
  /* 12193321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193323 jle 0x121933b2 */
  if ((C.zf||C.sf!=C.of)) goto L_121933b2;
  /* 12193329 mov esi, esp */
  ESI = (ESP);
  /* 1219332b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1219332d call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193333u);
  /* 12193333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193338 call 0x12196800 */
  push32(0x1219333du); f_12196800();
  /* 1219333d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193344 je 0x121933b2 */
  if (C.zf) goto L_121933b2;
  /* 12193346 mov esi, esp */
  ESI = (ESP);
  /* 12193348 push 0x121c3518 */
  push32((uint32_t)(0x121c3518u));
  /* 1219334d push 0x121c35b8 */
  push32((uint32_t)(0x121c35b8u));
  /* 12193352 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12193358u);
  /* 12193358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219335b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219335d call 0x12196800 */
  push32(0x12193362u); f_12196800();
  /* 12193362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193364 jle 0x121933b2 */
  if ((C.zf||C.sf!=C.of)) goto L_121933b2;
  /* 12193366 mov esi, esp */
  ESI = (ESP);
  /* 12193368 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219336a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1219336c call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193372u);
  /* 12193372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193375 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193377 call 0x12196800 */
  push32(0x1219337cu); f_12196800();
  /* 1219337c mov esi, esp */
  ESI = (ESP);
  /* 1219337e push 0 */
  push32((uint32_t)(0x0u));
  /* 12193380 push 0x121c3518 */
  push32((uint32_t)(0x121c3518u));
  /* 12193385 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193387 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x1219338du);
  /* 1219338d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193392 call 0x12196800 */
  push32(0x12193397u); f_12196800();
  /* 12193397 mov esi, esp */
  ESI = (ESP);
  /* 12193399 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219339b push 0x121c3588 */
  push32((uint32_t)(0x121c3588u));
  /* 121933a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121933a2 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x121933a8u);
  /* 121933a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121933ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121933ad call 0x12196800 */
  push32(0x121933b2u); f_12196800();
L_121933b2:;
  /* 121933b2 mov esi, esp */
  ESI = (ESP);
  /* 121933b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121933b6 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121933bcu);
  /* 121933bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121933bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121933c1 call 0x12196800 */
  push32(0x121933c6u); f_12196800();
  /* 121933c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121933c8 jle 0x121935a5 */
  if ((C.zf||C.sf!=C.of)) goto L_121935a5;
  /* 121933ce mov esi, esp */
  ESI = (ESP);
  /* 121933d0 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 121933d2 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121933d8u);
  /* 121933d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121933db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121933dd call 0x12196800 */
  push32(0x121933e2u); f_12196800();
  /* 121933e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121933e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121933e9 je 0x121934fd */
  if (C.zf) goto L_121934fd;
  /* 121933ef mov esi, esp */
  ESI = (ESP);
  /* 121933f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 121933f3 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x121933f9u);
  /* 121933f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121933fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121933fe call 0x12196800 */
  push32(0x12193403u); f_12196800();
  /* 12193403 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219340a je 0x121934fd */
  if (C.zf) goto L_121934fd;
  /* 12193410 mov esi, esp */
  ESI = (ESP);
  /* 12193412 push 6 */
  push32((uint32_t)(0x6u));
  /* 12193414 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x1219341au);
  /* 1219341a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219341d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219341f call 0x12196800 */
  push32(0x12193424u); f_12196800();
  /* 12193424 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219342b je 0x121934fd */
  if (C.zf) goto L_121934fd;
  /* 12193431 mov esi, esp */
  ESI = (ESP);
  /* 12193433 push 0x121c3498 */
  push32((uint32_t)(0x121c3498u));
  /* 12193438 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x1219343eu);
  /* 1219343e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193441 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193443 call 0x12196800 */
  push32(0x12193448u); f_12196800();
  /* 12193448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219344a jne 0x121934fd */
  if (!C.zf) goto L_121934fd;
  /* 12193450 cmp dword ptr [0x121c3480], 4 */
  { uint32_t _a=(r32((uint32_t)(0x121c3480))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193457 jge 0x121934fd */
  if ((C.sf==C.of)) goto L_121934fd;
  /* 1219345d mov esi, esp */
  ESI = (ESP);
  /* 1219345f push 0 */
  push32((uint32_t)(0x0u));
  /* 12193461 push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 12193466 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193468 push 0x121c3560 */
  push32((uint32_t)(0x121c3560u));
  /* 1219346d push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12193472 push 0x121c3498 */
  push32((uint32_t)(0x121c3498u));
  /* 12193477 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x1219347du);
  /* 1219347d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193480 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193482 call 0x12196800 */
  push32(0x12193487u); f_12196800();
  /* 12193487 mov esi, esp */
  ESI = (ESP);
  /* 12193489 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219348b push 0x121c3498 */
  push32((uint32_t)(0x121c3498u));
  /* 12193490 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193492 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193498u);
  /* 12193498 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219349b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219349d call 0x12196800 */
  push32(0x121934a2u); f_12196800();
  /* 121934a2 mov esi, esp */
  ESI = (ESP);
  /* 121934a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121934a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121934a8 push 0x121c35e8 */
  push32((uint32_t)(0x121c35e8u));
  /* 121934ad push 1 */
  push32((uint32_t)(0x1u));
  /* 121934af call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x121934b5u);
  /* 121934b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121934b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121934ba call 0x12196800 */
  push32(0x121934bfu); f_12196800();
  /* 121934bf mov esi, esp */
  ESI = (ESP);
  /* 121934c1 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 121934c6 push 7 */
  push32((uint32_t)(0x7u));
  /* 121934c8 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x121934ceu);
  /* 121934ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121934d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121934d3 call 0x12196800 */
  push32(0x121934d8u); f_12196800();
  /* 121934d8 mov esi, esp */
  ESI = (ESP);
  /* 121934da push 1 */
  push32((uint32_t)(0x1u));
  /* 121934dc push 0x27 */
  push32((uint32_t)(0x27u));
  /* 121934de call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121934e4u);
  /* 121934e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121934e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121934e9 call 0x12196800 */
  push32(0x121934eeu); f_12196800();
  /* 121934ee mov edx, dword ptr [0x121c3480] */
  EDX = (r32((uint32_t)(0x121c3480)));
  /* 121934f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121934f7 mov dword ptr [0x121c3480], edx */
  w32((uint32_t)(0x121c3480), (EDX));
L_121934fd:;
  /* 121934fd mov esi, esp */
  ESI = (ESP);
  /* 121934ff push 0x121c3498 */
  push32((uint32_t)(0x121c3498u));
  /* 12193504 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x1219350au);
  /* 1219350a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219350d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219350f call 0x12196800 */
  push32(0x12193514u); f_12196800();
  /* 12193514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193516 jle 0x121935a5 */
  if ((C.zf||C.sf!=C.of)) goto L_121935a5;
  /* 1219351c mov esi, esp */
  ESI = (ESP);
  /* 1219351e push 0x27 */
  push32((uint32_t)(0x27u));
  /* 12193520 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193526u);
  /* 12193526 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193529 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219352b call 0x12196800 */
  push32(0x12193530u); f_12196800();
  /* 12193530 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193537 je 0x121935a5 */
  if (C.zf) goto L_121935a5;
  /* 12193539 mov esi, esp */
  ESI = (ESP);
  /* 1219353b push 0x121c3498 */
  push32((uint32_t)(0x121c3498u));
  /* 12193540 push 0x121c35e8 */
  push32((uint32_t)(0x121c35e8u));
  /* 12193545 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x1219354bu);
  /* 1219354b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219354e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193550 call 0x12196800 */
  push32(0x12193555u); f_12196800();
  /* 12193555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193557 jle 0x121935a5 */
  if ((C.zf||C.sf!=C.of)) goto L_121935a5;
  /* 12193559 mov esi, esp */
  ESI = (ESP);
  /* 1219355b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219355d push 0x27 */
  push32((uint32_t)(0x27u));
  /* 1219355f call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193565u);
  /* 12193565 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193568 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219356a call 0x12196800 */
  push32(0x1219356fu); f_12196800();
  /* 1219356f mov esi, esp */
  ESI = (ESP);
  /* 12193571 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193573 push 0x121c3498 */
  push32((uint32_t)(0x121c3498u));
  /* 12193578 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219357a call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193580u);
  /* 12193580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193585 call 0x12196800 */
  push32(0x1219358au); f_12196800();
  /* 1219358a mov esi, esp */
  ESI = (ESP);
  /* 1219358c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219358e push 0x121c3600 */
  push32((uint32_t)(0x121c3600u));
  /* 12193593 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193595 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x1219359bu);
  /* 1219359b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219359e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121935a0 call 0x12196800 */
  push32(0x121935a5u); f_12196800();
L_121935a5:;
  /* 121935a5 mov esi, esp */
  ESI = (ESP);
  /* 121935a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121935a9 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121935afu);
  /* 121935af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121935b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121935b4 call 0x12196800 */
  push32(0x121935b9u); f_12196800();
  /* 121935b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121935bc jle 0x1219378d */
  if ((C.zf||C.sf!=C.of)) goto L_1219378d;
  /* 121935c2 mov esi, esp */
  ESI = (ESP);
  /* 121935c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 121935c6 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121935ccu);
  /* 121935cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121935cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121935d1 call 0x12196800 */
  push32(0x121935d6u); f_12196800();
  /* 121935d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121935db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121935dd je 0x121936cb */
  if (C.zf) goto L_121936cb;
  /* 121935e3 mov esi, esp */
  ESI = (ESP);
  /* 121935e5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 121935e7 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x121935edu);
  /* 121935ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121935f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121935f2 call 0x12196800 */
  push32(0x121935f7u); f_12196800();
  /* 121935f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121935fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121935fe je 0x121936cb */
  if (C.zf) goto L_121936cb;
  /* 12193604 mov esi, esp */
  ESI = (ESP);
  /* 12193606 push 0x121c3538 */
  push32((uint32_t)(0x121c3538u));
  /* 1219360b call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12193611u);
  /* 12193611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193614 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193616 call 0x12196800 */
  push32(0x1219361bu); f_12196800();
  /* 1219361b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219361d jne 0x121936cb */
  if (!C.zf) goto L_121936cb;
  /* 12193623 cmp dword ptr [0x121c3484], 3 */
  { uint32_t _a=(r32((uint32_t)(0x121c3484))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219362a jge 0x121936cb */
  if ((C.sf==C.of)) goto L_121936cb;
  /* 12193630 mov esi, esp */
  ESI = (ESP);
  /* 12193632 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193634 push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 12193639 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219363b push 0x121c3410 */
  push32((uint32_t)(0x121c3410u));
  /* 12193640 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12193645 push 0x121c3538 */
  push32((uint32_t)(0x121c3538u));
  /* 1219364a call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12193650u);
  /* 12193650 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193653 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193655 call 0x12196800 */
  push32(0x1219365au); f_12196800();
  /* 1219365a mov esi, esp */
  ESI = (ESP);
  /* 1219365c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219365e push 0x121c3538 */
  push32((uint32_t)(0x121c3538u));
  /* 12193663 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193665 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x1219366bu);
  /* 1219366b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219366e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193670 call 0x12196800 */
  push32(0x12193675u); f_12196800();
  /* 12193675 mov esi, esp */
  ESI = (ESP);
  /* 12193677 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219367b push 0x121c3468 */
  push32((uint32_t)(0x121c3468u));
  /* 12193680 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193682 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12193688u);
  /* 12193688 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219368b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219368d call 0x12196800 */
  push32(0x12193692u); f_12196800();
  /* 12193692 mov esi, esp */
  ESI = (ESP);
  /* 12193694 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193696 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12193698 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219369eu);
  /* 1219369e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121936a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121936a3 call 0x12196800 */
  push32(0x121936a8u); f_12196800();
  /* 121936a8 mov esi, esp */
  ESI = (ESP);
  /* 121936aa push 1 */
  push32((uint32_t)(0x1u));
  /* 121936ac push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121936ae call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121936b4u);
  /* 121936b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121936b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121936b9 call 0x12196800 */
  push32(0x121936beu); f_12196800();
  /* 121936be mov eax, dword ptr [0x121c3484] */
  EAX = (r32((uint32_t)(0x121c3484)));
  /* 121936c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121936c6 mov dword ptr [0x121c3484], eax */
  w32((uint32_t)(0x121c3484), (EAX));
L_121936cb:;
  /* 121936cb mov esi, esp */
  ESI = (ESP);
  /* 121936cd push 0x121c3538 */
  push32((uint32_t)(0x121c3538u));
  /* 121936d2 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x121936d8u);
  /* 121936d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121936db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121936dd call 0x12196800 */
  push32(0x121936e2u); f_12196800();
  /* 121936e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121936e4 jle 0x1219378d */
  if ((C.zf||C.sf!=C.of)) goto L_1219378d;
  /* 121936ea mov esi, esp */
  ESI = (ESP);
  /* 121936ec push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121936ee call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121936f4u);
  /* 121936f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121936f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121936f9 call 0x12196800 */
  push32(0x121936feu); f_12196800();
  /* 121936fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193703 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193705 je 0x1219378d */
  if (C.zf) goto L_1219378d;
  /* 1219370b mov esi, esp */
  ESI = (ESP);
  /* 1219370d push 0x121c3538 */
  push32((uint32_t)(0x121c3538u));
  /* 12193712 push 0x121c3468 */
  push32((uint32_t)(0x121c3468u));
  /* 12193717 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x1219371du);
  /* 1219371d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193720 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193722 call 0x12196800 */
  push32(0x12193727u); f_12196800();
  /* 12193727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193729 jle 0x1219378d */
  if ((C.zf||C.sf!=C.of)) goto L_1219378d;
  /* 1219372b mov esi, esp */
  ESI = (ESP);
  /* 1219372d push 0 */
  push32((uint32_t)(0x0u));
  /* 1219372f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12193731 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193737u);
  /* 12193737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219373a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219373c call 0x12196800 */
  push32(0x12193741u); f_12196800();
  /* 12193741 mov esi, esp */
  ESI = (ESP);
  /* 12193743 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193745 push 0x121c3538 */
  push32((uint32_t)(0x121c3538u));
  /* 1219374a push 1 */
  push32((uint32_t)(0x1u));
  /* 1219374c call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193752u);
  /* 12193752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193755 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193757 call 0x12196800 */
  push32(0x1219375cu); f_12196800();
  /* 1219375c mov esi, esp */
  ESI = (ESP);
  /* 1219375e push 1 */
  push32((uint32_t)(0x1u));
  /* 12193760 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12193762 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193768u);
  /* 12193768 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219376b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219376d call 0x12196800 */
  push32(0x12193772u); f_12196800();
  /* 12193772 mov esi, esp */
  ESI = (ESP);
  /* 12193774 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193776 push 0x121c3570 */
  push32((uint32_t)(0x121c3570u));
  /* 1219377b push 1 */
  push32((uint32_t)(0x1u));
  /* 1219377d call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12193783u);
  /* 12193783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193788 call 0x12196800 */
  push32(0x1219378du); f_12196800();
L_1219378d:;
  /* 1219378d mov esi, esp */
  ESI = (ESP);
  /* 1219378f push 0 */
  push32((uint32_t)(0x0u));
  /* 12193791 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12193797u);
  /* 12193797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219379a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219379c call 0x12196800 */
  push32(0x121937a1u); f_12196800();
  /* 121937a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121937a4 jle 0x12193977 */
  if ((C.zf||C.sf!=C.of)) goto L_12193977;
  /* 121937aa mov esi, esp */
  ESI = (ESP);
  /* 121937ac push 0x28 */
  push32((uint32_t)(0x28u));
  /* 121937ae call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121937b4u);
  /* 121937b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121937b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121937b9 call 0x12196800 */
  push32(0x121937beu); f_12196800();
  /* 121937be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121937c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121937c5 je 0x121938b5 */
  if (C.zf) goto L_121938b5;
  /* 121937cb mov esi, esp */
  ESI = (ESP);
  /* 121937cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 121937cf call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x121937d5u);
  /* 121937d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121937d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121937da call 0x12196800 */
  push32(0x121937dfu); f_12196800();
  /* 121937df and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121937e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121937e6 je 0x121938b5 */
  if (C.zf) goto L_121938b5;
  /* 121937ec mov esi, esp */
  ESI = (ESP);
  /* 121937ee push 0x121c34a0 */
  push32((uint32_t)(0x121c34a0u));
  /* 121937f3 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x121937f9u);
  /* 121937f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121937fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121937fe call 0x12196800 */
  push32(0x12193803u); f_12196800();
  /* 12193803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193805 jne 0x121938b5 */
  if (!C.zf) goto L_121938b5;
  /* 1219380b cmp dword ptr [0x121c3488], 3 */
  { uint32_t _a=(r32((uint32_t)(0x121c3488))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193812 jge 0x121938b5 */
  if ((C.sf==C.of)) goto L_121938b5;
  /* 12193818 mov esi, esp */
  ESI = (ESP);
  /* 1219381a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219381c push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 12193821 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193823 push 0x121c3410 */
  push32((uint32_t)(0x121c3410u));
  /* 12193828 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 1219382d push 0x121c34a0 */
  push32((uint32_t)(0x121c34a0u));
  /* 12193832 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12193838u);
  /* 12193838 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219383b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219383d call 0x12196800 */
  push32(0x12193842u); f_12196800();
  /* 12193842 mov esi, esp */
  ESI = (ESP);
  /* 12193844 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193846 push 0x121c34a0 */
  push32((uint32_t)(0x121c34a0u));
  /* 1219384b push 1 */
  push32((uint32_t)(0x1u));
  /* 1219384d call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193853u);
  /* 12193853 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193856 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193858 call 0x12196800 */
  push32(0x1219385du); f_12196800();
  /* 1219385d mov esi, esp */
  ESI = (ESP);
  /* 1219385f push 0 */
  push32((uint32_t)(0x0u));
  /* 12193861 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193863 push 0x121c3610 */
  push32((uint32_t)(0x121c3610u));
  /* 12193868 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219386a call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12193870u);
  /* 12193870 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193873 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193875 call 0x12196800 */
  push32(0x1219387au); f_12196800();
  /* 1219387a mov esi, esp */
  ESI = (ESP);
  /* 1219387c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219387e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12193880 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193886u);
  /* 12193886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193889 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219388b call 0x12196800 */
  push32(0x12193890u); f_12196800();
  /* 12193890 mov esi, esp */
  ESI = (ESP);
  /* 12193892 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193894 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12193896 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219389cu);
  /* 1219389c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219389f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121938a1 call 0x12196800 */
  push32(0x121938a6u); f_12196800();
  /* 121938a6 mov ecx, dword ptr [0x121c3488] */
  ECX = (r32((uint32_t)(0x121c3488)));
  /* 121938ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121938af mov dword ptr [0x121c3488], ecx */
  w32((uint32_t)(0x121c3488), (ECX));
L_121938b5:;
  /* 121938b5 mov esi, esp */
  ESI = (ESP);
  /* 121938b7 push 0x121c34a0 */
  push32((uint32_t)(0x121c34a0u));
  /* 121938bc call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x121938c2u);
  /* 121938c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121938c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121938c7 call 0x12196800 */
  push32(0x121938ccu); f_12196800();
  /* 121938cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121938ce jle 0x12193977 */
  if ((C.zf||C.sf!=C.of)) goto L_12193977;
  /* 121938d4 mov esi, esp */
  ESI = (ESP);
  /* 121938d6 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 121938d8 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121938deu);
  /* 121938de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121938e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121938e3 call 0x12196800 */
  push32(0x121938e8u); f_12196800();
  /* 121938e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121938ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121938ef je 0x12193977 */
  if (C.zf) goto L_12193977;
  /* 121938f5 mov esi, esp */
  ESI = (ESP);
  /* 121938f7 push 0x121c34a0 */
  push32((uint32_t)(0x121c34a0u));
  /* 121938fc push 0x121c3610 */
  push32((uint32_t)(0x121c3610u));
  /* 12193901 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12193907u);
  /* 12193907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219390a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219390c call 0x12196800 */
  push32(0x12193911u); f_12196800();
  /* 12193911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193913 jle 0x12193977 */
  if ((C.zf||C.sf!=C.of)) goto L_12193977;
  /* 12193915 mov esi, esp */
  ESI = (ESP);
  /* 12193917 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193919 push 0x121c34a0 */
  push32((uint32_t)(0x121c34a0u));
  /* 1219391e push 1 */
  push32((uint32_t)(0x1u));
  /* 12193920 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193926u);
  /* 12193926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193929 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219392b call 0x12196800 */
  push32(0x12193930u); f_12196800();
  /* 12193930 mov esi, esp */
  ESI = (ESP);
  /* 12193932 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193934 push 0x121c3620 */
  push32((uint32_t)(0x121c3620u));
  /* 12193939 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219393b call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12193941u);
  /* 12193941 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193944 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193946 call 0x12196800 */
  push32(0x1219394bu); f_12196800();
  /* 1219394b mov esi, esp */
  ESI = (ESP);
  /* 1219394d push 0 */
  push32((uint32_t)(0x0u));
  /* 1219394f push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12193951 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193957u);
  /* 12193957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219395a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219395c call 0x12196800 */
  push32(0x12193961u); f_12196800();
  /* 12193961 mov esi, esp */
  ESI = (ESP);
  /* 12193963 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193965 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12193967 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219396du);
  /* 1219396d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193970 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193972 call 0x12196800 */
  push32(0x12193977u); f_12196800();
L_12193977:;
  /* 12193977 mov esi, esp */
  ESI = (ESP);
  /* 12193979 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1219397b call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193981u);
  /* 12193981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193986 call 0x12196800 */
  push32(0x1219398bu); f_12196800();
  /* 1219398b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193990 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193992 je 0x121947c6 */
  if (C.zf) goto L_121947c6;
  /* 12193998 mov esi, esp */
  ESI = (ESP);
  /* 1219399a push 0xc */
  push32((uint32_t)(0xcu));
  /* 1219399c call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121939a2u);
  /* 121939a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121939a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121939a7 call 0x12196800 */
  push32(0x121939acu); f_12196800();
  /* 121939ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121939b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121939b3 je 0x12193ac7 */
  if (C.zf) goto L_12193ac7;
  /* 121939b9 mov esi, esp */
  ESI = (ESP);
  /* 121939bb push 3 */
  push32((uint32_t)(0x3u));
  /* 121939bd call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x121939c3u);
  /* 121939c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121939c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121939c8 call 0x12196800 */
  push32(0x121939cdu); f_12196800();
  /* 121939cd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121939d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121939d4 je 0x12193ac7 */
  if (C.zf) goto L_12193ac7;
  /* 121939da mov esi, esp */
  ESI = (ESP);
  /* 121939dc push 7 */
  push32((uint32_t)(0x7u));
  /* 121939de call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x121939e4u);
  /* 121939e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121939e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121939e9 call 0x12196800 */
  push32(0x121939eeu); f_12196800();
  /* 121939ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121939f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121939f5 je 0x12193ac7 */
  if (C.zf) goto L_12193ac7;
  /* 121939fb mov esi, esp */
  ESI = (ESP);
  /* 121939fd push 0x121c3520 */
  push32((uint32_t)(0x121c3520u));
  /* 12193a02 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12193a08u);
  /* 12193a08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193a0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193a0d call 0x12196800 */
  push32(0x12193a12u); f_12196800();
  /* 12193a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193a14 jne 0x12193ac7 */
  if (!C.zf) goto L_12193ac7;
  /* 12193a1a cmp dword ptr [0x121c348c], 4 */
  { uint32_t _a=(r32((uint32_t)(0x121c348c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193a21 jge 0x12193ac7 */
  if ((C.sf==C.of)) goto L_12193ac7;
  /* 12193a27 mov esi, esp */
  ESI = (ESP);
  /* 12193a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193a2b push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 12193a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193a32 push 0x121c3560 */
  push32((uint32_t)(0x121c3560u));
  /* 12193a37 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12193a3c push 0x121c3520 */
  push32((uint32_t)(0x121c3520u));
  /* 12193a41 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12193a47u);
  /* 12193a47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193a4c call 0x12196800 */
  push32(0x12193a51u); f_12196800();
  /* 12193a51 mov esi, esp */
  ESI = (ESP);
  /* 12193a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193a55 push 0x121c3520 */
  push32((uint32_t)(0x121c3520u));
  /* 12193a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12193a5c call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193a62u);
  /* 12193a62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193a67 call 0x12196800 */
  push32(0x12193a6cu); f_12196800();
  /* 12193a6c mov esi, esp */
  ESI = (ESP);
  /* 12193a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12193a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193a72 push 0x121c35c8 */
  push32((uint32_t)(0x121c35c8u));
  /* 12193a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193a79 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12193a7fu);
  /* 12193a7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193a82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193a84 call 0x12196800 */
  push32(0x12193a89u); f_12196800();
  /* 12193a89 mov esi, esp */
  ESI = (ESP);
  /* 12193a8b push 1 */
  push32((uint32_t)(0x1u));
  /* 12193a8d push 0x25 */
  push32((uint32_t)(0x25u));
  /* 12193a8f call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193a95u);
  /* 12193a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193a98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193a9a call 0x12196800 */
  push32(0x12193a9fu); f_12196800();
  /* 12193a9f mov esi, esp */
  ESI = (ESP);
  /* 12193aa1 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12193aa6 push 5 */
  push32((uint32_t)(0x5u));
  /* 12193aa8 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12193aaeu);
  /* 12193aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193ab3 call 0x12196800 */
  push32(0x12193ab8u); f_12196800();
  /* 12193ab8 mov edx, dword ptr [0x121c348c] */
  EDX = (r32((uint32_t)(0x121c348c)));
  /* 12193abe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12193ac1 mov dword ptr [0x121c348c], edx */
  w32((uint32_t)(0x121c348c), (EDX));
L_12193ac7:;
  /* 12193ac7 mov esi, esp */
  ESI = (ESP);
  /* 12193ac9 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 12193acb call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193ad1u);
  /* 12193ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193ad4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193ad6 call 0x12196800 */
  push32(0x12193adbu); f_12196800();
  /* 12193adb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193ae2 je 0x12193b61 */
  if (C.zf) goto L_12193b61;
  /* 12193ae4 push 0x121c3520 */
  push32((uint32_t)(0x121c3520u));
  /* 12193ae9 call 0x12191005 */
  push32(0x12193aeeu); f_12191005();
  /* 12193aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193af3 jle 0x12193b61 */
  if ((C.zf||C.sf!=C.of)) goto L_12193b61;
  /* 12193af5 mov esi, esp */
  ESI = (ESP);
  /* 12193af7 push 0x121c3520 */
  push32((uint32_t)(0x121c3520u));
  /* 12193afc push 0x121c35c8 */
  push32((uint32_t)(0x121c35c8u));
  /* 12193b01 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12193b07u);
  /* 12193b07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193b0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193b0c call 0x12196800 */
  push32(0x12193b11u); f_12196800();
  /* 12193b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193b13 jle 0x12193b61 */
  if ((C.zf||C.sf!=C.of)) goto L_12193b61;
  /* 12193b15 mov esi, esp */
  ESI = (ESP);
  /* 12193b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193b19 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 12193b1b call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193b21u);
  /* 12193b21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193b24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193b26 call 0x12196800 */
  push32(0x12193b2bu); f_12196800();
  /* 12193b2b mov esi, esp */
  ESI = (ESP);
  /* 12193b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12193b2f push 0x121c3520 */
  push32((uint32_t)(0x121c3520u));
  /* 12193b34 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193b36 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193b3cu);
  /* 12193b3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193b3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193b41 call 0x12196800 */
  push32(0x12193b46u); f_12196800();
  /* 12193b46 mov esi, esp */
  ESI = (ESP);
  /* 12193b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193b4a push 0x121c35d8 */
  push32((uint32_t)(0x121c35d8u));
  /* 12193b4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12193b51 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12193b57u);
  /* 12193b57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193b5c call 0x12196800 */
  push32(0x12193b61u); f_12196800();
L_12193b61:;
  /* 12193b61 mov esi, esp */
  ESI = (ESP);
  /* 12193b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193b65 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12193b6bu);
  /* 12193b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193b6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193b70 call 0x12196800 */
  push32(0x12193b75u); f_12196800();
  /* 12193b75 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193b78 jle 0x12193d24 */
  if ((C.zf||C.sf!=C.of)) goto L_12193d24;
  /* 12193b7e mov esi, esp */
  ESI = (ESP);
  /* 12193b80 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12193b82 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193b88u);
  /* 12193b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193b8d call 0x12196800 */
  push32(0x12193b92u); f_12196800();
  /* 12193b92 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193b97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193b99 je 0x12193c8a */
  if (C.zf) goto L_12193c8a;
  /* 12193b9f mov esi, esp */
  ESI = (ESP);
  /* 12193ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193ba3 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12193ba9u);
  /* 12193ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193bac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193bae call 0x12196800 */
  push32(0x12193bb3u); f_12196800();
  /* 12193bb3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193bba je 0x12193c8a */
  if (C.zf) goto L_12193c8a;
  /* 12193bc0 mov esi, esp */
  ESI = (ESP);
  /* 12193bc2 push 0x121c34c0 */
  push32((uint32_t)(0x121c34c0u));
  /* 12193bc7 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12193bcdu);
  /* 12193bcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193bd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193bd2 call 0x12196800 */
  push32(0x12193bd7u); f_12196800();
  /* 12193bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193bd9 jne 0x12193c8a */
  if (!C.zf) goto L_12193c8a;
  /* 12193bdf cmp dword ptr [0x121c3490], 4 */
  { uint32_t _a=(r32((uint32_t)(0x121c3490))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193be6 jge 0x12193c8a */
  if ((C.sf==C.of)) goto L_12193c8a;
  /* 12193bec mov esi, esp */
  ESI = (ESP);
  /* 12193bee push 0 */
  push32((uint32_t)(0x0u));
  /* 12193bf0 push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 12193bf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193bf7 push 0x121c3560 */
  push32((uint32_t)(0x121c3560u));
  /* 12193bfc push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12193c01 push 0x121c34c0 */
  push32((uint32_t)(0x121c34c0u));
  /* 12193c06 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12193c0cu);
  /* 12193c0c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193c0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193c11 call 0x12196800 */
  push32(0x12193c16u); f_12196800();
  /* 12193c16 mov esi, esp */
  ESI = (ESP);
  /* 12193c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193c1a push 0x121c34c0 */
  push32((uint32_t)(0x121c34c0u));
  /* 12193c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12193c21 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193c27u);
  /* 12193c27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193c2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193c2c call 0x12196800 */
  push32(0x12193c31u); f_12196800();
  /* 12193c31 mov esi, esp */
  ESI = (ESP);
  /* 12193c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193c37 push 0x121c35d8 */
  push32((uint32_t)(0x121c35d8u));
  /* 12193c3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12193c3e call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12193c44u);
  /* 12193c44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193c47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193c49 call 0x12196800 */
  push32(0x12193c4eu); f_12196800();
  /* 12193c4e mov esi, esp */
  ESI = (ESP);
  /* 12193c50 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193c52 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12193c54 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193c5au);
  /* 12193c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193c5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193c5f call 0x12196800 */
  push32(0x12193c64u); f_12196800();
  /* 12193c64 mov esi, esp */
  ESI = (ESP);
  /* 12193c66 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12193c6b push 5 */
  push32((uint32_t)(0x5u));
  /* 12193c6d call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12193c73u);
  /* 12193c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193c76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193c78 call 0x12196800 */
  push32(0x12193c7du); f_12196800();
  /* 12193c7d mov eax, dword ptr [0x121c3490] */
  EAX = (r32((uint32_t)(0x121c3490)));
  /* 12193c82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12193c85 mov dword ptr [0x121c3490], eax */
  w32((uint32_t)(0x121c3490), (EAX));
L_12193c8a:;
  /* 12193c8a mov esi, esp */
  ESI = (ESP);
  /* 12193c8c push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12193c8e call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193c94u);
  /* 12193c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193c97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193c99 call 0x12196800 */
  push32(0x12193c9eu); f_12196800();
  /* 12193c9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193ca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193ca5 je 0x12193d24 */
  if (C.zf) goto L_12193d24;
  /* 12193ca7 push 0x121c34c0 */
  push32((uint32_t)(0x121c34c0u));
  /* 12193cac call 0x12191005 */
  push32(0x12193cb1u); f_12191005();
  /* 12193cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193cb6 jle 0x12193d24 */
  if ((C.zf||C.sf!=C.of)) goto L_12193d24;
  /* 12193cb8 mov esi, esp */
  ESI = (ESP);
  /* 12193cba push 0x121c34c0 */
  push32((uint32_t)(0x121c34c0u));
  /* 12193cbf push 0x121c35d8 */
  push32((uint32_t)(0x121c35d8u));
  /* 12193cc4 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12193ccau);
  /* 12193cca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193ccd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193ccf call 0x12196800 */
  push32(0x12193cd4u); f_12196800();
  /* 12193cd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193cd6 jle 0x12193d24 */
  if ((C.zf||C.sf!=C.of)) goto L_12193d24;
  /* 12193cd8 mov esi, esp */
  ESI = (ESP);
  /* 12193cda push 0 */
  push32((uint32_t)(0x0u));
  /* 12193cdc push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12193cde call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193ce4u);
  /* 12193ce4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193ce9 call 0x12196800 */
  push32(0x12193ceeu); f_12196800();
  /* 12193cee mov esi, esp */
  ESI = (ESP);
  /* 12193cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193cf2 push 0x121c34c0 */
  push32((uint32_t)(0x121c34c0u));
  /* 12193cf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193cf9 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193cffu);
  /* 12193cff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193d02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193d04 call 0x12196800 */
  push32(0x12193d09u); f_12196800();
  /* 12193d09 mov esi, esp */
  ESI = (ESP);
  /* 12193d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12193d0d push 0x121c35c8 */
  push32((uint32_t)(0x121c35c8u));
  /* 12193d12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193d14 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12193d1au);
  /* 12193d1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193d1f call 0x12196800 */
  push32(0x12193d24u); f_12196800();
L_12193d24:;
  /* 12193d24 mov esi, esp */
  ESI = (ESP);
  /* 12193d26 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12193d28 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193d2eu);
  /* 12193d2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193d31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193d33 call 0x12196800 */
  push32(0x12193d38u); f_12196800();
  /* 12193d38 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193d3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193d3f je 0x12193e53 */
  if (C.zf) goto L_12193e53;
  /* 12193d45 mov esi, esp */
  ESI = (ESP);
  /* 12193d47 push 3 */
  push32((uint32_t)(0x3u));
  /* 12193d49 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12193d4fu);
  /* 12193d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193d52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193d54 call 0x12196800 */
  push32(0x12193d59u); f_12196800();
  /* 12193d59 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193d60 je 0x12193e53 */
  if (C.zf) goto L_12193e53;
  /* 12193d66 mov esi, esp */
  ESI = (ESP);
  /* 12193d68 push 5 */
  push32((uint32_t)(0x5u));
  /* 12193d6a call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12193d70u);
  /* 12193d70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193d73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193d75 call 0x12196800 */
  push32(0x12193d7au); f_12196800();
  /* 12193d7a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193d7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193d81 je 0x12193e53 */
  if (C.zf) goto L_12193e53;
  /* 12193d87 mov esi, esp */
  ESI = (ESP);
  /* 12193d89 push 0x121c3528 */
  push32((uint32_t)(0x121c3528u));
  /* 12193d8e call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12193d94u);
  /* 12193d94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193d99 call 0x12196800 */
  push32(0x12193d9eu); f_12196800();
  /* 12193d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193da0 jne 0x12193e53 */
  if (!C.zf) goto L_12193e53;
  /* 12193da6 cmp dword ptr [0x121c3640], 5 */
  { uint32_t _a=(r32((uint32_t)(0x121c3640))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193dad jge 0x12193e53 */
  if ((C.sf==C.of)) goto L_12193e53;
  /* 12193db3 mov esi, esp */
  ESI = (ESP);
  /* 12193db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193db7 push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 12193dbc push 1 */
  push32((uint32_t)(0x1u));
  /* 12193dbe push 0x121c3558 */
  push32((uint32_t)(0x121c3558u));
  /* 12193dc3 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12193dc8 push 0x121c3528 */
  push32((uint32_t)(0x121c3528u));
  /* 12193dcd call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12193dd3u);
  /* 12193dd3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193dd8 call 0x12196800 */
  push32(0x12193dddu); f_12196800();
  /* 12193ddd mov esi, esp */
  ESI = (ESP);
  /* 12193ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 12193de1 push 0x121c3528 */
  push32((uint32_t)(0x121c3528u));
  /* 12193de6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193de8 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193deeu);
  /* 12193dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193df1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193df3 call 0x12196800 */
  push32(0x12193df8u); f_12196800();
  /* 12193df8 mov esi, esp */
  ESI = (ESP);
  /* 12193dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12193dfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12193dfe push 0x121c3598 */
  push32((uint32_t)(0x121c3598u));
  /* 12193e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193e05 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12193e0bu);
  /* 12193e0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193e0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193e10 call 0x12196800 */
  push32(0x12193e15u); f_12196800();
  /* 12193e15 mov esi, esp */
  ESI = (ESP);
  /* 12193e17 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 12193e1c push 6 */
  push32((uint32_t)(0x6u));
  /* 12193e1e call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12193e24u);
  /* 12193e24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193e27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193e29 call 0x12196800 */
  push32(0x12193e2eu); f_12196800();
  /* 12193e2e mov esi, esp */
  ESI = (ESP);
  /* 12193e30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193e32 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12193e34 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193e3au);
  /* 12193e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193e3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193e3f call 0x12196800 */
  push32(0x12193e44u); f_12196800();
  /* 12193e44 mov ecx, dword ptr [0x121c3640] */
  ECX = (r32((uint32_t)(0x121c3640)));
  /* 12193e4a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12193e4d mov dword ptr [0x121c3640], ecx */
  w32((uint32_t)(0x121c3640), (ECX));
L_12193e53:;
  /* 12193e53 mov esi, esp */
  ESI = (ESP);
  /* 12193e55 push 0x121c3528 */
  push32((uint32_t)(0x121c3528u));
  /* 12193e5a call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12193e60u);
  /* 12193e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193e63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193e65 call 0x12196800 */
  push32(0x12193e6au); f_12196800();
  /* 12193e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193e6c jle 0x12193efb */
  if ((C.zf||C.sf!=C.of)) goto L_12193efb;
  /* 12193e72 mov esi, esp */
  ESI = (ESP);
  /* 12193e74 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12193e76 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193e7cu);
  /* 12193e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193e7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193e81 call 0x12196800 */
  push32(0x12193e86u); f_12196800();
  /* 12193e86 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193e8d je 0x12193efb */
  if (C.zf) goto L_12193efb;
  /* 12193e8f mov esi, esp */
  ESI = (ESP);
  /* 12193e91 push 0x121c3528 */
  push32((uint32_t)(0x121c3528u));
  /* 12193e96 push 0x121c3598 */
  push32((uint32_t)(0x121c3598u));
  /* 12193e9b call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12193ea1u);
  /* 12193ea1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193ea4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193ea6 call 0x12196800 */
  push32(0x12193eabu); f_12196800();
  /* 12193eab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193ead jle 0x12193efb */
  if ((C.zf||C.sf!=C.of)) goto L_12193efb;
  /* 12193eaf mov esi, esp */
  ESI = (ESP);
  /* 12193eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193eb3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12193eb5 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12193ebbu);
  /* 12193ebb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193ebe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193ec0 call 0x12196800 */
  push32(0x12193ec5u); f_12196800();
  /* 12193ec5 mov esi, esp */
  ESI = (ESP);
  /* 12193ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193ec9 push 0x121c3528 */
  push32((uint32_t)(0x121c3528u));
  /* 12193ece push 1 */
  push32((uint32_t)(0x1u));
  /* 12193ed0 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193ed6u);
  /* 12193ed6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193ed9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193edb call 0x12196800 */
  push32(0x12193ee0u); f_12196800();
  /* 12193ee0 mov esi, esp */
  ESI = (ESP);
  /* 12193ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193ee4 push 0x121c35a8 */
  push32((uint32_t)(0x121c35a8u));
  /* 12193ee9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193eeb call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12193ef1u);
  /* 12193ef1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193ef4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193ef6 call 0x12196800 */
  push32(0x12193efbu); f_12196800();
L_12193efb:;
  /* 12193efb mov esi, esp */
  ESI = (ESP);
  /* 12193efd push 0 */
  push32((uint32_t)(0x0u));
  /* 12193eff call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12193f05u);
  /* 12193f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193f08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193f0a call 0x12196800 */
  push32(0x12193f0fu); f_12196800();
  /* 12193f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193f11 jle 0x121940d5 */
  if ((C.zf||C.sf!=C.of)) goto L_121940d5;
  /* 12193f17 mov esi, esp */
  ESI = (ESP);
  /* 12193f19 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12193f1b call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12193f21u);
  /* 12193f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193f26 call 0x12196800 */
  push32(0x12193f2bu); f_12196800();
  /* 12193f2b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193f32 je 0x1219402d */
  if (C.zf) goto L_1219402d;
  /* 12193f38 mov esi, esp */
  ESI = (ESP);
  /* 12193f3a push 3 */
  push32((uint32_t)(0x3u));
  /* 12193f3c call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12193f42u);
  /* 12193f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193f45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193f47 call 0x12196800 */
  push32(0x12193f4cu); f_12196800();
  /* 12193f4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193f53 je 0x1219402d */
  if (C.zf) goto L_1219402d;
  /* 12193f59 mov esi, esp */
  ESI = (ESP);
  /* 12193f5b push 5 */
  push32((uint32_t)(0x5u));
  /* 12193f5d call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12193f63u);
  /* 12193f63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193f66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193f68 call 0x12196800 */
  push32(0x12193f6du); f_12196800();
  /* 12193f6d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12193f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193f74 je 0x1219402d */
  if (C.zf) goto L_1219402d;
  /* 12193f7a mov esi, esp */
  ESI = (ESP);
  /* 12193f7c push 0x121c34a8 */
  push32((uint32_t)(0x121c34a8u));
  /* 12193f81 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12193f87u);
  /* 12193f87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193f8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193f8c call 0x12196800 */
  push32(0x12193f91u); f_12196800();
  /* 12193f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12193f93 jne 0x1219402d */
  if (!C.zf) goto L_1219402d;
  /* 12193f99 cmp dword ptr [0x121c3644], 4 */
  { uint32_t _a=(r32((uint32_t)(0x121c3644))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193fa0 jge 0x1219402d */
  if ((C.sf==C.of)) goto L_1219402d;
  /* 12193fa6 mov esi, esp */
  ESI = (ESP);
  /* 12193fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193faa push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 12193faf push 1 */
  push32((uint32_t)(0x1u));
  /* 12193fb1 push 0x121c3560 */
  push32((uint32_t)(0x121c3560u));
  /* 12193fb6 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12193fbb push 0x121c34a8 */
  push32((uint32_t)(0x121c34a8u));
  /* 12193fc0 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12193fc6u);
  /* 12193fc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193fc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193fcb call 0x12196800 */
  push32(0x12193fd0u); f_12196800();
  /* 12193fd0 mov esi, esp */
  ESI = (ESP);
  /* 12193fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12193fd4 push 0x121c34a8 */
  push32((uint32_t)(0x121c34a8u));
  /* 12193fd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193fdb call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12193fe1u);
  /* 12193fe1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12193fe4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12193fe6 call 0x12196800 */
  push32(0x12193febu); f_12196800();
  /* 12193feb mov esi, esp */
  ESI = (ESP);
  /* 12193fed push 0 */
  push32((uint32_t)(0x0u));
  /* 12193fef push 0 */
  push32((uint32_t)(0x0u));
  /* 12193ff1 push 0x121c35c0 */
  push32((uint32_t)(0x121c35c0u));
  /* 12193ff6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12193ff8 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12193ffeu);
  /* 12193ffe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194003 call 0x12196800 */
  push32(0x12194008u); f_12196800();
  /* 12194008 mov esi, esp */
  ESI = (ESP);
  /* 1219400a push 1 */
  push32((uint32_t)(0x1u));
  /* 1219400c push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1219400e call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194014u);
  /* 12194014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194017 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194019 call 0x12196800 */
  push32(0x1219401eu); f_12196800();
  /* 1219401e mov edx, dword ptr [0x121c3644] */
  EDX = (r32((uint32_t)(0x121c3644)));
  /* 12194024 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12194027 mov dword ptr [0x121c3644], edx */
  w32((uint32_t)(0x121c3644), (EDX));
L_1219402d:;
  /* 1219402d mov esi, esp */
  ESI = (ESP);
  /* 1219402f push 0x121c34a8 */
  push32((uint32_t)(0x121c34a8u));
  /* 12194034 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x1219403au);
  /* 1219403a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219403d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219403f call 0x12196800 */
  push32(0x12194044u); f_12196800();
  /* 12194044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194046 jle 0x121940d5 */
  if ((C.zf||C.sf!=C.of)) goto L_121940d5;
  /* 1219404c mov esi, esp */
  ESI = (ESP);
  /* 1219404e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12194050 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194056u);
  /* 12194056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194059 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219405b call 0x12196800 */
  push32(0x12194060u); f_12196800();
  /* 12194060 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194067 je 0x121940d5 */
  if (C.zf) goto L_121940d5;
  /* 12194069 mov esi, esp */
  ESI = (ESP);
  /* 1219406b push 0x121c34a8 */
  push32((uint32_t)(0x121c34a8u));
  /* 12194070 push 0x121c35c0 */
  push32((uint32_t)(0x121c35c0u));
  /* 12194075 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x1219407bu);
  /* 1219407b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219407e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194080 call 0x12196800 */
  push32(0x12194085u); f_12196800();
  /* 12194085 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194087 jle 0x121940d5 */
  if ((C.zf||C.sf!=C.of)) goto L_121940d5;
  /* 12194089 mov esi, esp */
  ESI = (ESP);
  /* 1219408b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219408d push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1219408f call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194095u);
  /* 12194095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194098 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219409a call 0x12196800 */
  push32(0x1219409fu); f_12196800();
  /* 1219409f mov esi, esp */
  ESI = (ESP);
  /* 121940a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121940a3 push 0x121c34a8 */
  push32((uint32_t)(0x121c34a8u));
  /* 121940a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 121940aa call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121940b0u);
  /* 121940b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121940b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121940b5 call 0x12196800 */
  push32(0x121940bau); f_12196800();
  /* 121940ba mov esi, esp */
  ESI = (ESP);
  /* 121940bc push 0 */
  push32((uint32_t)(0x0u));
  /* 121940be push 0x121c35d0 */
  push32((uint32_t)(0x121c35d0u));
  /* 121940c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121940c5 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x121940cbu);
  /* 121940cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121940ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121940d0 call 0x12196800 */
  push32(0x121940d5u); f_12196800();
L_121940d5:;
  /* 121940d5 mov esi, esp */
  ESI = (ESP);
  /* 121940d7 push 0xe */
  push32((uint32_t)(0xeu));
  /* 121940d9 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121940dfu);
  /* 121940df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121940e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121940e4 call 0x12196800 */
  push32(0x121940e9u); f_12196800();
  /* 121940e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121940ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121940f0 je 0x121941e9 */
  if (C.zf) goto L_121941e9;
  /* 121940f6 mov esi, esp */
  ESI = (ESP);
  /* 121940f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 121940fa call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12194100u);
  /* 12194100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194103 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194105 call 0x12196800 */
  push32(0x1219410au); f_12196800();
  /* 1219410a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219410f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194111 je 0x121941e9 */
  if (C.zf) goto L_121941e9;
  /* 12194117 mov esi, esp */
  ESI = (ESP);
  /* 12194119 push 6 */
  push32((uint32_t)(0x6u));
  /* 1219411b call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12194121u);
  /* 12194121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194126 call 0x12196800 */
  push32(0x1219412bu); f_12196800();
  /* 1219412b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194132 je 0x121941e9 */
  if (C.zf) goto L_121941e9;
  /* 12194138 mov esi, esp */
  ESI = (ESP);
  /* 1219413a push 0x121c3530 */
  push32((uint32_t)(0x121c3530u));
  /* 1219413f call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194145u);
  /* 12194145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194148 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219414a call 0x12196800 */
  push32(0x1219414fu); f_12196800();
  /* 1219414f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194151 jne 0x121941e9 */
  if (!C.zf) goto L_121941e9;
  /* 12194157 cmp dword ptr [0x121c3648], 5 */
  { uint32_t _a=(r32((uint32_t)(0x121c3648))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219415e jge 0x121941e9 */
  if ((C.sf==C.of)) goto L_121941e9;
  /* 12194164 mov esi, esp */
  ESI = (ESP);
  /* 12194166 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194168 push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 1219416d push 1 */
  push32((uint32_t)(0x1u));
  /* 1219416f push 0x121c3558 */
  push32((uint32_t)(0x121c3558u));
  /* 12194174 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12194179 push 0x121c3530 */
  push32((uint32_t)(0x121c3530u));
  /* 1219417e call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12194184u);
  /* 12194184 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194187 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194189 call 0x12196800 */
  push32(0x1219418eu); f_12196800();
  /* 1219418e mov esi, esp */
  ESI = (ESP);
  /* 12194190 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194192 push 0x121c3530 */
  push32((uint32_t)(0x121c3530u));
  /* 12194197 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194199 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x1219419fu);
  /* 1219419f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121941a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121941a4 call 0x12196800 */
  push32(0x121941a9u); f_12196800();
  /* 121941a9 mov esi, esp */
  ESI = (ESP);
  /* 121941ab push 0 */
  push32((uint32_t)(0x0u));
  /* 121941ad push 0 */
  push32((uint32_t)(0x0u));
  /* 121941af push 0x121c3580 */
  push32((uint32_t)(0x121c3580u));
  /* 121941b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121941b6 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x121941bcu);
  /* 121941bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121941bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121941c1 call 0x12196800 */
  push32(0x121941c6u); f_12196800();
  /* 121941c6 mov esi, esp */
  ESI = (ESP);
  /* 121941c8 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 121941cd push 7 */
  push32((uint32_t)(0x7u));
  /* 121941cf call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x121941d5u);
  /* 121941d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121941d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121941da call 0x12196800 */
  push32(0x121941dfu); f_12196800();
  /* 121941df mov dword ptr [0x121c3648], 0xd */
  w32((uint32_t)(0x121c3648), (0xdu));
L_121941e9:;
  /* 121941e9 mov esi, esp */
  ESI = (ESP);
  /* 121941eb push 0 */
  push32((uint32_t)(0x0u));
  /* 121941ed call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121941f3u);
  /* 121941f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121941f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121941f8 call 0x12196800 */
  push32(0x121941fdu); f_12196800();
  /* 121941fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194200 jle 0x121943d1 */
  if ((C.zf||C.sf!=C.of)) goto L_121943d1;
  /* 12194206 mov esi, esp */
  ESI = (ESP);
  /* 12194208 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1219420a call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194210u);
  /* 12194210 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194213 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194215 call 0x12196800 */
  push32(0x1219421au); f_12196800();
  /* 1219421a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219421f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194221 je 0x1219430f */
  if (C.zf) goto L_1219430f;
  /* 12194227 mov esi, esp */
  ESI = (ESP);
  /* 12194229 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1219422b call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12194231u);
  /* 12194231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194234 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194236 call 0x12196800 */
  push32(0x1219423bu); f_12196800();
  /* 1219423b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194240 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194242 je 0x1219430f */
  if (C.zf) goto L_1219430f;
  /* 12194248 mov esi, esp */
  ESI = (ESP);
  /* 1219424a push 0x121c3540 */
  push32((uint32_t)(0x121c3540u));
  /* 1219424f call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194255u);
  /* 12194255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194258 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219425a call 0x12196800 */
  push32(0x1219425fu); f_12196800();
  /* 1219425f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194261 jne 0x1219430f */
  if (!C.zf) goto L_1219430f;
  /* 12194267 cmp dword ptr [0x121c364c], 3 */
  { uint32_t _a=(r32((uint32_t)(0x121c364c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219426e jge 0x1219430f */
  if ((C.sf==C.of)) goto L_1219430f;
  /* 12194274 mov esi, esp */
  ESI = (ESP);
  /* 12194276 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194278 push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 1219427d push 1 */
  push32((uint32_t)(0x1u));
  /* 1219427f push 0x121c3410 */
  push32((uint32_t)(0x121c3410u));
  /* 12194284 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12194289 push 0x121c3540 */
  push32((uint32_t)(0x121c3540u));
  /* 1219428e call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12194294u);
  /* 12194294 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194297 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194299 call 0x12196800 */
  push32(0x1219429eu); f_12196800();
  /* 1219429e mov esi, esp */
  ESI = (ESP);
  /* 121942a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121942a2 push 0x121c3540 */
  push32((uint32_t)(0x121c3540u));
  /* 121942a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 121942a9 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121942afu);
  /* 121942af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121942b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121942b4 call 0x12196800 */
  push32(0x121942b9u); f_12196800();
  /* 121942b9 mov esi, esp */
  ESI = (ESP);
  /* 121942bb push 0 */
  push32((uint32_t)(0x0u));
  /* 121942bd push 0 */
  push32((uint32_t)(0x0u));
  /* 121942bf push 0x121c3460 */
  push32((uint32_t)(0x121c3460u));
  /* 121942c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121942c6 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x121942ccu);
  /* 121942cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121942cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121942d1 call 0x12196800 */
  push32(0x121942d6u); f_12196800();
  /* 121942d6 mov esi, esp */
  ESI = (ESP);
  /* 121942d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121942da push 0x12 */
  push32((uint32_t)(0x12u));
  /* 121942dc call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121942e2u);
  /* 121942e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121942e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121942e7 call 0x12196800 */
  push32(0x121942ecu); f_12196800();
  /* 121942ec mov esi, esp */
  ESI = (ESP);
  /* 121942ee push 1 */
  push32((uint32_t)(0x1u));
  /* 121942f0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121942f2 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121942f8u);
  /* 121942f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121942fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121942fd call 0x12196800 */
  push32(0x12194302u); f_12196800();
  /* 12194302 mov eax, dword ptr [0x121c364c] */
  EAX = (r32((uint32_t)(0x121c364c)));
  /* 12194307 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219430a mov dword ptr [0x121c364c], eax */
  w32((uint32_t)(0x121c364c), (EAX));
L_1219430f:;
  /* 1219430f mov esi, esp */
  ESI = (ESP);
  /* 12194311 push 0x121c3540 */
  push32((uint32_t)(0x121c3540u));
  /* 12194316 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x1219431cu);
  /* 1219431c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219431f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194321 call 0x12196800 */
  push32(0x12194326u); f_12196800();
  /* 12194326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194328 jle 0x121943d1 */
  if ((C.zf||C.sf!=C.of)) goto L_121943d1;
  /* 1219432e mov esi, esp */
  ESI = (ESP);
  /* 12194330 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12194332 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194338u);
  /* 12194338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219433b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219433d call 0x12196800 */
  push32(0x12194342u); f_12196800();
  /* 12194342 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194349 je 0x121943d1 */
  if (C.zf) goto L_121943d1;
  /* 1219434f mov esi, esp */
  ESI = (ESP);
  /* 12194351 push 0x121c3540 */
  push32((uint32_t)(0x121c3540u));
  /* 12194356 push 0x121c3460 */
  push32((uint32_t)(0x121c3460u));
  /* 1219435b call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12194361u);
  /* 12194361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194364 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194366 call 0x12196800 */
  push32(0x1219436bu); f_12196800();
  /* 1219436b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219436d jle 0x121943d1 */
  if ((C.zf||C.sf!=C.of)) goto L_121943d1;
  /* 1219436f mov esi, esp */
  ESI = (ESP);
  /* 12194371 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194373 push 0x121c3540 */
  push32((uint32_t)(0x121c3540u));
  /* 12194378 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219437a call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194380u);
  /* 12194380 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194383 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194385 call 0x12196800 */
  push32(0x1219438au); f_12196800();
  /* 1219438a mov esi, esp */
  ESI = (ESP);
  /* 1219438c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219438e push 0x121c3578 */
  push32((uint32_t)(0x121c3578u));
  /* 12194393 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194395 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x1219439bu);
  /* 1219439b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219439e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121943a0 call 0x12196800 */
  push32(0x121943a5u); f_12196800();
  /* 121943a5 mov esi, esp */
  ESI = (ESP);
  /* 121943a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 121943a9 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 121943ab call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121943b1u);
  /* 121943b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121943b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121943b6 call 0x12196800 */
  push32(0x121943bbu); f_12196800();
  /* 121943bb mov esi, esp */
  ESI = (ESP);
  /* 121943bd push 0 */
  push32((uint32_t)(0x0u));
  /* 121943bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121943c1 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121943c7u);
  /* 121943c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121943ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121943cc call 0x12196800 */
  push32(0x121943d1u); f_12196800();
L_121943d1:;
  /* 121943d1 mov esi, esp */
  ESI = (ESP);
  /* 121943d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121943d5 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121943dbu);
  /* 121943db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121943de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121943e0 call 0x12196800 */
  push32(0x121943e5u); f_12196800();
  /* 121943e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121943e8 jle 0x121945dc */
  if ((C.zf||C.sf!=C.of)) goto L_121945dc;
  /* 121943ee mov esi, esp */
  ESI = (ESP);
  /* 121943f0 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 121943f2 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121943f8u);
  /* 121943f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121943fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121943fd call 0x12196800 */
  push32(0x12194402u); f_12196800();
  /* 12194402 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194409 je 0x1219451a */
  if (C.zf) goto L_1219451a;
  /* 1219440f mov esi, esp */
  ESI = (ESP);
  /* 12194411 push 6 */
  push32((uint32_t)(0x6u));
  /* 12194413 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12194419u);
  /* 12194419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219441c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219441e call 0x12196800 */
  push32(0x12194423u); f_12196800();
  /* 12194423 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219442a je 0x1219451a */
  if (C.zf) goto L_1219451a;
  /* 12194430 mov esi, esp */
  ESI = (ESP);
  /* 12194432 push 3 */
  push32((uint32_t)(0x3u));
  /* 12194434 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x1219443au);
  /* 1219443a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219443d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219443f call 0x12196800 */
  push32(0x12194444u); f_12196800();
  /* 12194444 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219444b je 0x1219451a */
  if (C.zf) goto L_1219451a;
  /* 12194451 mov esi, esp */
  ESI = (ESP);
  /* 12194453 push 0x121c34b0 */
  push32((uint32_t)(0x121c34b0u));
  /* 12194458 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x1219445eu);
  /* 1219445e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194461 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194463 call 0x12196800 */
  push32(0x12194468u); f_12196800();
  /* 12194468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219446a jne 0x1219451a */
  if (!C.zf) goto L_1219451a;
  /* 12194470 cmp dword ptr [0x121c3650], 3 */
  { uint32_t _a=(r32((uint32_t)(0x121c3650))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194477 jge 0x1219451a */
  if ((C.sf==C.of)) goto L_1219451a;
  /* 1219447d mov esi, esp */
  ESI = (ESP);
  /* 1219447f push 0 */
  push32((uint32_t)(0x0u));
  /* 12194481 push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 12194486 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194488 push 0x121c3410 */
  push32((uint32_t)(0x121c3410u));
  /* 1219448d push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12194492 push 0x121c34b0 */
  push32((uint32_t)(0x121c34b0u));
  /* 12194497 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x1219449du);
  /* 1219449d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121944a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121944a2 call 0x12196800 */
  push32(0x121944a7u); f_12196800();
  /* 121944a7 mov esi, esp */
  ESI = (ESP);
  /* 121944a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121944ab push 0x121c34b0 */
  push32((uint32_t)(0x121c34b0u));
  /* 121944b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121944b2 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121944b8u);
  /* 121944b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121944bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121944bd call 0x12196800 */
  push32(0x121944c2u); f_12196800();
  /* 121944c2 mov esi, esp */
  ESI = (ESP);
  /* 121944c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121944c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121944c8 push 0x121c3630 */
  push32((uint32_t)(0x121c3630u));
  /* 121944cd push 1 */
  push32((uint32_t)(0x1u));
  /* 121944cf call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x121944d5u);
  /* 121944d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121944d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121944da call 0x12196800 */
  push32(0x121944dfu); f_12196800();
  /* 121944df mov esi, esp */
  ESI = (ESP);
  /* 121944e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121944e3 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 121944e5 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121944ebu);
  /* 121944eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121944ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121944f0 call 0x12196800 */
  push32(0x121944f5u); f_12196800();
  /* 121944f5 mov esi, esp */
  ESI = (ESP);
  /* 121944f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 121944f9 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 121944fb call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194501u);
  /* 12194501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194504 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194506 call 0x12196800 */
  push32(0x1219450bu); f_12196800();
  /* 1219450b mov ecx, dword ptr [0x121c3650] */
  ECX = (r32((uint32_t)(0x121c3650)));
  /* 12194511 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12194514 mov dword ptr [0x121c3650], ecx */
  w32((uint32_t)(0x121c3650), (ECX));
L_1219451a:;
  /* 1219451a mov esi, esp */
  ESI = (ESP);
  /* 1219451c push 0x121c34b0 */
  push32((uint32_t)(0x121c34b0u));
  /* 12194521 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194527u);
  /* 12194527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219452a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219452c call 0x12196800 */
  push32(0x12194531u); f_12196800();
  /* 12194531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194533 jle 0x121945dc */
  if ((C.zf||C.sf!=C.of)) goto L_121945dc;
  /* 12194539 mov esi, esp */
  ESI = (ESP);
  /* 1219453b push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1219453d call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194543u);
  /* 12194543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194546 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194548 call 0x12196800 */
  push32(0x1219454du); f_12196800();
  /* 1219454d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194554 je 0x121945dc */
  if (C.zf) goto L_121945dc;
  /* 1219455a mov esi, esp */
  ESI = (ESP);
  /* 1219455c push 0x121c34b0 */
  push32((uint32_t)(0x121c34b0u));
  /* 12194561 push 0x121c3630 */
  push32((uint32_t)(0x121c3630u));
  /* 12194566 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x1219456cu);
  /* 1219456c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219456f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194571 call 0x12196800 */
  push32(0x12194576u); f_12196800();
  /* 12194576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194578 jle 0x121945dc */
  if ((C.zf||C.sf!=C.of)) goto L_121945dc;
  /* 1219457a mov esi, esp */
  ESI = (ESP);
  /* 1219457c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219457e push 0x121c34b0 */
  push32((uint32_t)(0x121c34b0u));
  /* 12194583 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194585 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x1219458bu);
  /* 1219458b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219458e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194590 call 0x12196800 */
  push32(0x12194595u); f_12196800();
  /* 12194595 mov esi, esp */
  ESI = (ESP);
  /* 12194597 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194599 push 0x121c35e0 */
  push32((uint32_t)(0x121c35e0u));
  /* 1219459e push 1 */
  push32((uint32_t)(0x1u));
  /* 121945a0 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x121945a6u);
  /* 121945a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121945a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121945ab call 0x12196800 */
  push32(0x121945b0u); f_12196800();
  /* 121945b0 mov esi, esp */
  ESI = (ESP);
  /* 121945b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 121945b4 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 121945b6 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121945bcu);
  /* 121945bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121945bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121945c1 call 0x12196800 */
  push32(0x121945c6u); f_12196800();
  /* 121945c6 mov esi, esp */
  ESI = (ESP);
  /* 121945c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121945ca push 0x2d */
  push32((uint32_t)(0x2du));
  /* 121945cc call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121945d2u);
  /* 121945d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121945d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121945d7 call 0x12196800 */
  push32(0x121945dcu); f_12196800();
L_121945dc:;
  /* 121945dc mov esi, esp */
  ESI = (ESP);
  /* 121945de push 0 */
  push32((uint32_t)(0x0u));
  /* 121945e0 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121945e6u);
  /* 121945e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121945e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121945eb call 0x12196800 */
  push32(0x121945f0u); f_12196800();
  /* 121945f0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121945f3 jle 0x121947c6 */
  if ((C.zf||C.sf!=C.of)) goto L_121947c6;
  /* 121945f9 mov esi, esp */
  ESI = (ESP);
  /* 121945fb push 0x22 */
  push32((uint32_t)(0x22u));
  /* 121945fd call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194603u);
  /* 12194603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194606 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194608 call 0x12196800 */
  push32(0x1219460du); f_12196800();
  /* 1219460d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194614 je 0x12194704 */
  if (C.zf) goto L_12194704;
  /* 1219461a mov esi, esp */
  ESI = (ESP);
  /* 1219461c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1219461e call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12194624u);
  /* 12194624 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194627 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194629 call 0x12196800 */
  push32(0x1219462eu); f_12196800();
  /* 1219462e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194633 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194635 je 0x12194704 */
  if (C.zf) goto L_12194704;
  /* 1219463b mov esi, esp */
  ESI = (ESP);
  /* 1219463d push 0x121c3548 */
  push32((uint32_t)(0x121c3548u));
  /* 12194642 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194648u);
  /* 12194648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219464b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219464d call 0x12196800 */
  push32(0x12194652u); f_12196800();
  /* 12194652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194654 jne 0x12194704 */
  if (!C.zf) goto L_12194704;
  /* 1219465a cmp dword ptr [0x121c3654], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121c3654))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194661 jge 0x12194704 */
  if ((C.sf==C.of)) goto L_12194704;
  /* 12194667 mov esi, esp */
  ESI = (ESP);
  /* 12194669 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219466b push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 12194670 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194672 push 0x121c3420 */
  push32((uint32_t)(0x121c3420u));
  /* 12194677 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 1219467c push 0x121c3548 */
  push32((uint32_t)(0x121c3548u));
  /* 12194681 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12194687u);
  /* 12194687 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219468a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219468c call 0x12196800 */
  push32(0x12194691u); f_12196800();
  /* 12194691 mov esi, esp */
  ESI = (ESP);
  /* 12194693 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194695 push 0x121c3548 */
  push32((uint32_t)(0x121c3548u));
  /* 1219469a push 1 */
  push32((uint32_t)(0x1u));
  /* 1219469c call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121946a2u);
  /* 121946a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121946a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121946a7 call 0x12196800 */
  push32(0x121946acu); f_12196800();
  /* 121946ac mov esi, esp */
  ESI = (ESP);
  /* 121946ae push 0 */
  push32((uint32_t)(0x0u));
  /* 121946b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121946b2 push 0x121c35a0 */
  push32((uint32_t)(0x121c35a0u));
  /* 121946b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 121946b9 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x121946bfu);
  /* 121946bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121946c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121946c4 call 0x12196800 */
  push32(0x121946c9u); f_12196800();
  /* 121946c9 mov esi, esp */
  ESI = (ESP);
  /* 121946cb push 1 */
  push32((uint32_t)(0x1u));
  /* 121946cd push 0x23 */
  push32((uint32_t)(0x23u));
  /* 121946cf call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121946d5u);
  /* 121946d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121946d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121946da call 0x12196800 */
  push32(0x121946dfu); f_12196800();
  /* 121946df mov esi, esp */
  ESI = (ESP);
  /* 121946e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121946e3 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 121946e5 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121946ebu);
  /* 121946eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121946ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121946f0 call 0x12196800 */
  push32(0x121946f5u); f_12196800();
  /* 121946f5 mov edx, dword ptr [0x121c3654] */
  EDX = (r32((uint32_t)(0x121c3654)));
  /* 121946fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121946fe mov dword ptr [0x121c3654], edx */
  w32((uint32_t)(0x121c3654), (EDX));
L_12194704:;
  /* 12194704 mov esi, esp */
  ESI = (ESP);
  /* 12194706 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12194708 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x1219470eu);
  /* 1219470e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194713 call 0x12196800 */
  push32(0x12194718u); f_12196800();
  /* 12194718 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219471d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219471f je 0x121947c6 */
  if (C.zf) goto L_121947c6;
  /* 12194725 mov esi, esp */
  ESI = (ESP);
  /* 12194727 push 0x121c3548 */
  push32((uint32_t)(0x121c3548u));
  /* 1219472c call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194732u);
  /* 12194732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194735 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194737 call 0x12196800 */
  push32(0x1219473cu); f_12196800();
  /* 1219473c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219473e jle 0x121947c6 */
  if ((C.zf||C.sf!=C.of)) goto L_121947c6;
  /* 12194744 mov esi, esp */
  ESI = (ESP);
  /* 12194746 push 0x121c3548 */
  push32((uint32_t)(0x121c3548u));
  /* 1219474b push 0x121c35a0 */
  push32((uint32_t)(0x121c35a0u));
  /* 12194750 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12194756u);
  /* 12194756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194759 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219475b call 0x12196800 */
  push32(0x12194760u); f_12196800();
  /* 12194760 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194762 jle 0x121947c6 */
  if ((C.zf||C.sf!=C.of)) goto L_121947c6;
  /* 12194764 mov esi, esp */
  ESI = (ESP);
  /* 12194766 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194768 push 0x121c3548 */
  push32((uint32_t)(0x121c3548u));
  /* 1219476d push 1 */
  push32((uint32_t)(0x1u));
  /* 1219476f call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194775u);
  /* 12194775 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194778 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219477a call 0x12196800 */
  push32(0x1219477fu); f_12196800();
  /* 1219477f mov esi, esp */
  ESI = (ESP);
  /* 12194781 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194783 push 0x121c35b0 */
  push32((uint32_t)(0x121c35b0u));
  /* 12194788 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219478a call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12194790u);
  /* 12194790 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194793 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194795 call 0x12196800 */
  push32(0x1219479au); f_12196800();
  /* 1219479a mov esi, esp */
  ESI = (ESP);
  /* 1219479c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219479e push 0x23 */
  push32((uint32_t)(0x23u));
  /* 121947a0 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121947a6u);
  /* 121947a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121947a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121947ab call 0x12196800 */
  push32(0x121947b0u); f_12196800();
  /* 121947b0 mov esi, esp */
  ESI = (ESP);
  /* 121947b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 121947b4 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 121947b6 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121947bcu);
  /* 121947bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121947bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121947c1 call 0x12196800 */
  push32(0x121947c6u); f_12196800();
L_121947c6:;
  /* 121947c6 mov esi, esp */
  ESI = (ESP);
  /* 121947c8 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 121947ca call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121947d0u);
  /* 121947d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121947d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121947d5 call 0x12196800 */
  push32(0x121947dau); f_12196800();
  /* 121947da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121947df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121947e1 je 0x1219482d */
  if (C.zf) goto L_1219482d;
  /* 121947e3 mov esi, esp */
  ESI = (ESP);
  /* 121947e5 push 0x121c33e0 */
  push32((uint32_t)(0x121c33e0u));
  /* 121947ea call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x121947f0u);
  /* 121947f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121947f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121947f5 call 0x12196800 */
  push32(0x121947fau); f_12196800();
  /* 121947fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121947fc jne 0x1219482d */
  if (!C.zf) goto L_1219482d;
  /* 121947fe mov esi, esp */
  ESI = (ESP);
  /* 12194800 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194802 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12194804 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219480au);
  /* 1219480a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219480d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219480f call 0x12196800 */
  push32(0x12194814u); f_12196800();
  /* 12194814 mov esi, esp */
  ESI = (ESP);
  /* 12194816 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1219481b push 8 */
  push32((uint32_t)(0x8u));
  /* 1219481d call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12194823u);
  /* 12194823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194826 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194828 call 0x12196800 */
  push32(0x1219482du); f_12196800();
L_1219482d:;
  /* 1219482d mov esi, esp */
  ESI = (ESP);
  /* 1219482f push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12194831 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194837u);
  /* 12194837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219483a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219483c call 0x12196800 */
  push32(0x12194841u); f_12196800();
  /* 12194841 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194848 je 0x12194894 */
  if (C.zf) goto L_12194894;
  /* 1219484a mov esi, esp */
  ESI = (ESP);
  /* 1219484c push 0x121c33e8 */
  push32((uint32_t)(0x121c33e8u));
  /* 12194851 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194857u);
  /* 12194857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219485a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219485c call 0x12196800 */
  push32(0x12194861u); f_12196800();
  /* 12194861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194863 jne 0x12194894 */
  if (!C.zf) goto L_12194894;
  /* 12194865 mov esi, esp */
  ESI = (ESP);
  /* 12194867 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194869 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1219486b call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194871u);
  /* 12194871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194874 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194876 call 0x12196800 */
  push32(0x1219487bu); f_12196800();
  /* 1219487b mov esi, esp */
  ESI = (ESP);
  /* 1219487d push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12194882 push 9 */
  push32((uint32_t)(0x9u));
  /* 12194884 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x1219488au);
  /* 1219488a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219488d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219488f call 0x12196800 */
  push32(0x12194894u); f_12196800();
L_12194894:;
  /* 12194894 mov esi, esp */
  ESI = (ESP);
  /* 12194896 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194898 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x1219489eu);
  /* 1219489e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121948a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121948a3 call 0x12196800 */
  push32(0x121948a8u); f_12196800();
  /* 121948a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121948ab jle 0x12194976 */
  if ((C.zf||C.sf!=C.of)) goto L_12194976;
  /* 121948b1 mov esi, esp */
  ESI = (ESP);
  /* 121948b3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 121948b5 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121948bbu);
  /* 121948bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121948be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121948c0 call 0x12196800 */
  push32(0x121948c5u); f_12196800();
  /* 121948c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121948ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121948cc jne 0x12194971 */
  if (!C.zf) goto L_12194971;
  /* 121948d2 mov esi, esp */
  ESI = (ESP);
  /* 121948d4 push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 121948d9 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x121948dfu);
  /* 121948df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121948e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121948e4 call 0x12196800 */
  push32(0x121948e9u); f_12196800();
  /* 121948e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121948eb jne 0x12194971 */
  if (!C.zf) goto L_12194971;
  /* 121948f1 mov esi, esp */
  ESI = (ESP);
  /* 121948f3 push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 121948f8 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x121948feu);
  /* 121948fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194901 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194903 call 0x12196800 */
  push32(0x12194908u); f_12196800();
  /* 12194908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219490a jne 0x12194971 */
  if (!C.zf) goto L_12194971;
  /* 1219490c mov esi, esp */
  ESI = (ESP);
  /* 1219490e push 0x121c34e8 */
  push32((uint32_t)(0x121c34e8u));
  /* 12194913 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194919u);
  /* 12194919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219491c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219491e call 0x12196800 */
  push32(0x12194923u); f_12196800();
  /* 12194923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194925 jne 0x12194971 */
  if (!C.zf) goto L_12194971;
  /* 12194927 mov esi, esp */
  ESI = (ESP);
  /* 12194929 push 0x121c34f0 */
  push32((uint32_t)(0x121c34f0u));
  /* 1219492e call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194934u);
  /* 12194934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194937 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194939 call 0x12196800 */
  push32(0x1219493eu); f_12196800();
  /* 1219493e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194940 jne 0x12194971 */
  if (!C.zf) goto L_12194971;
  /* 12194942 mov esi, esp */
  ESI = (ESP);
  /* 12194944 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194946 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12194948 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219494eu);
  /* 1219494e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194953 call 0x12196800 */
  push32(0x12194958u); f_12196800();
  /* 12194958 mov esi, esp */
  ESI = (ESP);
  /* 1219495a push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 1219495f push 8 */
  push32((uint32_t)(0x8u));
  /* 12194961 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12194967u);
  /* 12194967 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219496a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219496c call 0x12196800 */
  push32(0x12194971u); f_12196800();
L_12194971:;
  /* 12194971 jmp 0x121949f8 */
  goto L_121949f8;
L_12194976:;
  /* 12194976 mov esi, esp */
  ESI = (ESP);
  /* 12194978 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1219497a call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194980u);
  /* 12194980 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194983 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194985 call 0x12196800 */
  push32(0x1219498au); f_12196800();
  /* 1219498a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219498f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194991 jne 0x121949f8 */
  if (!C.zf) goto L_121949f8;
  /* 12194993 mov esi, esp */
  ESI = (ESP);
  /* 12194995 push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 1219499a call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x121949a0u);
  /* 121949a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121949a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121949a5 call 0x12196800 */
  push32(0x121949aau); f_12196800();
  /* 121949aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121949ac jne 0x121949f8 */
  if (!C.zf) goto L_121949f8;
  /* 121949ae mov esi, esp */
  ESI = (ESP);
  /* 121949b0 push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 121949b5 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x121949bbu);
  /* 121949bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121949be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121949c0 call 0x12196800 */
  push32(0x121949c5u); f_12196800();
  /* 121949c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121949c7 jne 0x121949f8 */
  if (!C.zf) goto L_121949f8;
  /* 121949c9 mov esi, esp */
  ESI = (ESP);
  /* 121949cb push 1 */
  push32((uint32_t)(0x1u));
  /* 121949cd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 121949cf call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121949d5u);
  /* 121949d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121949d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121949da call 0x12196800 */
  push32(0x121949dfu); f_12196800();
  /* 121949df mov esi, esp */
  ESI = (ESP);
  /* 121949e1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 121949e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 121949e8 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x121949eeu);
  /* 121949ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121949f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121949f3 call 0x12196800 */
  push32(0x121949f8u); f_12196800();
L_121949f8:;
  /* 121949f8 mov esi, esp */
  ESI = (ESP);
  /* 121949fa push 0 */
  push32((uint32_t)(0x0u));
  /* 121949fc call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12194a02u);
  /* 12194a02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194a05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194a07 call 0x12196800 */
  push32(0x12194a0cu); f_12196800();
  /* 12194a0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194a0f jle 0x12194ad5 */
  if ((C.zf||C.sf!=C.of)) goto L_12194ad5;
  /* 12194a15 mov esi, esp */
  ESI = (ESP);
  /* 12194a17 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12194a19 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194a1fu);
  /* 12194a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194a24 call 0x12196800 */
  push32(0x12194a29u); f_12196800();
  /* 12194a29 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194a2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194a30 jne 0x12194ad5 */
  if (!C.zf) goto L_12194ad5;
  /* 12194a36 mov esi, esp */
  ESI = (ESP);
  /* 12194a38 push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 12194a3d call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194a43u);
  /* 12194a43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194a46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194a48 call 0x12196800 */
  push32(0x12194a4du); f_12196800();
  /* 12194a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194a4f jne 0x12194ad5 */
  if (!C.zf) goto L_12194ad5;
  /* 12194a55 mov esi, esp */
  ESI = (ESP);
  /* 12194a57 push 0x121c34e0 */
  push32((uint32_t)(0x121c34e0u));
  /* 12194a5c call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194a62u);
  /* 12194a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194a67 call 0x12196800 */
  push32(0x12194a6cu); f_12196800();
  /* 12194a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194a6e jne 0x12194ad5 */
  if (!C.zf) goto L_12194ad5;
  /* 12194a70 mov esi, esp */
  ESI = (ESP);
  /* 12194a72 push 0x121c34f8 */
  push32((uint32_t)(0x121c34f8u));
  /* 12194a77 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194a7du);
  /* 12194a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194a80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194a82 call 0x12196800 */
  push32(0x12194a87u); f_12196800();
  /* 12194a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194a89 jne 0x12194ad5 */
  if (!C.zf) goto L_12194ad5;
  /* 12194a8b mov esi, esp */
  ESI = (ESP);
  /* 12194a8d push 0x121c3500 */
  push32((uint32_t)(0x121c3500u));
  /* 12194a92 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194a98u);
  /* 12194a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194a9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194a9d call 0x12196800 */
  push32(0x12194aa2u); f_12196800();
  /* 12194aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194aa4 jne 0x12194ad5 */
  if (!C.zf) goto L_12194ad5;
  /* 12194aa6 mov esi, esp */
  ESI = (ESP);
  /* 12194aa8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194aaa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12194aac call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194ab2u);
  /* 12194ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194ab5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194ab7 call 0x12196800 */
  push32(0x12194abcu); f_12196800();
  /* 12194abc mov esi, esp */
  ESI = (ESP);
  /* 12194abe push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 12194ac3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12194ac5 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12194acbu);
  /* 12194acb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194ad0 call 0x12196800 */
  push32(0x12194ad5u); f_12196800();
L_12194ad5:;
  /* 12194ad5 mov esi, esp */
  ESI = (ESP);
  /* 12194ad7 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12194ad9 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194adfu);
  /* 12194adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194ae2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194ae4 call 0x12196800 */
  push32(0x12194ae9u); f_12196800();
  /* 12194ae9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194aee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194af0 jne 0x12194b57 */
  if (!C.zf) goto L_12194b57;
  /* 12194af2 mov esi, esp */
  ESI = (ESP);
  /* 12194af4 push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 12194af9 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194affu);
  /* 12194aff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194b04 call 0x12196800 */
  push32(0x12194b09u); f_12196800();
  /* 12194b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194b0b jne 0x12194b57 */
  if (!C.zf) goto L_12194b57;
  /* 12194b0d mov esi, esp */
  ESI = (ESP);
  /* 12194b0f push 0x121c34e0 */
  push32((uint32_t)(0x121c34e0u));
  /* 12194b14 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194b1au);
  /* 12194b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194b1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194b1f call 0x12196800 */
  push32(0x12194b24u); f_12196800();
  /* 12194b24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194b26 jne 0x12194b57 */
  if (!C.zf) goto L_12194b57;
  /* 12194b28 mov esi, esp */
  ESI = (ESP);
  /* 12194b2a push 1 */
  push32((uint32_t)(0x1u));
  /* 12194b2c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12194b2e call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194b34u);
  /* 12194b34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194b37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194b39 call 0x12196800 */
  push32(0x12194b3eu); f_12196800();
  /* 12194b3e mov esi, esp */
  ESI = (ESP);
  /* 12194b40 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 12194b45 push 9 */
  push32((uint32_t)(0x9u));
  /* 12194b47 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12194b4du);
  /* 12194b4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194b50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194b52 call 0x12196800 */
  push32(0x12194b57u); f_12196800();
L_12194b57:;
  /* 12194b57 mov esi, esp */
  ESI = (ESP);
  /* 12194b59 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12194b5b call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194b61u);
  /* 12194b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194b64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194b66 call 0x12196800 */
  push32(0x12194b6bu); f_12196800();
  /* 12194b6b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194b70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194b72 je 0x12194d62 */
  if (C.zf) goto L_12194d62;
  /* 12194b78 mov esi, esp */
  ESI = (ESP);
  /* 12194b7a push 8 */
  push32((uint32_t)(0x8u));
  /* 12194b7c call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12194b82u);
  /* 12194b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194b85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194b87 call 0x12196800 */
  push32(0x12194b8cu); f_12196800();
  /* 12194b8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194b91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194b93 je 0x12194d62 */
  if (C.zf) goto L_12194d62;
  /* 12194b99 cmp dword ptr [0x121c3658], 0xf */
  { uint32_t _a=(r32((uint32_t)(0x121c3658))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194ba0 jge 0x12194d62 */
  if ((C.sf==C.of)) goto L_12194d62;
  /* 12194ba6 mov esi, esp */
  ESI = (ESP);
  /* 12194ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194baa push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12194bac call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194bb2u);
  /* 12194bb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194bb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194bb7 call 0x12196800 */
  push32(0x12194bbcu); f_12196800();
  /* 12194bbc mov esi, esp */
  ESI = (ESP);
  /* 12194bbe push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12194bc3 push 0x121c3438 */
  push32((uint32_t)(0x121c3438u));
  /* 12194bc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194bca push 0x121c3550 */
  push32((uint32_t)(0x121c3550u));
  /* 12194bcf push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12194bd4 push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 12194bd9 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12194bdfu);
  /* 12194bdf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194be2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194be4 call 0x12196800 */
  push32(0x12194be9u); f_12196800();
  /* 12194be9 mov esi, esp */
  ESI = (ESP);
  /* 12194beb push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12194bf0 push 0x121c3438 */
  push32((uint32_t)(0x121c3438u));
  /* 12194bf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194bf7 push 0x121c3550 */
  push32((uint32_t)(0x121c3550u));
  /* 12194bfc push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12194c01 push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 12194c06 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12194c0cu);
  /* 12194c0c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194c0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194c11 call 0x12196800 */
  push32(0x12194c16u); f_12196800();
  /* 12194c16 mov esi, esp */
  ESI = (ESP);
  /* 12194c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194c1a call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12194c20u);
  /* 12194c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194c23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194c25 call 0x12196800 */
  push32(0x12194c2au); f_12196800();
  /* 12194c2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194c2d jle 0x12194c89 */
  if ((C.zf||C.sf!=C.of)) goto L_12194c89;
  /* 12194c2f mov esi, esp */
  ESI = (ESP);
  /* 12194c31 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12194c36 push 0x121c3438 */
  push32((uint32_t)(0x121c3438u));
  /* 12194c3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12194c3d push 0x121c3638 */
  push32((uint32_t)(0x121c3638u));
  /* 12194c42 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12194c47 push 0x121c34e8 */
  push32((uint32_t)(0x121c34e8u));
  /* 12194c4c call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12194c52u);
  /* 12194c52 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194c55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194c57 call 0x12196800 */
  push32(0x12194c5cu); f_12196800();
  /* 12194c5c mov esi, esp */
  ESI = (ESP);
  /* 12194c5e push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12194c63 push 0x121c3438 */
  push32((uint32_t)(0x121c3438u));
  /* 12194c68 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194c6a push 0x121c3638 */
  push32((uint32_t)(0x121c3638u));
  /* 12194c6f push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12194c74 push 0x121c34f0 */
  push32((uint32_t)(0x121c34f0u));
  /* 12194c79 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x12194c7fu);
  /* 12194c7f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194c84 call 0x12196800 */
  push32(0x12194c89u); f_12196800();
L_12194c89:;
  /* 12194c89 mov esi, esp */
  ESI = (ESP);
  /* 12194c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12194c8d push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 12194c92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194c94 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194c9au);
  /* 12194c9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194c9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194c9f call 0x12196800 */
  push32(0x12194ca4u); f_12196800();
  /* 12194ca4 mov esi, esp */
  ESI = (ESP);
  /* 12194ca6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194ca8 push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 12194cad push 2 */
  push32((uint32_t)(0x2u));
  /* 12194caf call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194cb5u);
  /* 12194cb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194cba call 0x12196800 */
  push32(0x12194cbfu); f_12196800();
  /* 12194cbf mov esi, esp */
  ESI = (ESP);
  /* 12194cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194cc3 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12194cc9u);
  /* 12194cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194ccc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194cce call 0x12196800 */
  push32(0x12194cd3u); f_12196800();
  /* 12194cd3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194cd6 jle 0x12194d0e */
  if ((C.zf||C.sf!=C.of)) goto L_12194d0e;
  /* 12194cd8 mov esi, esp */
  ESI = (ESP);
  /* 12194cda push 1 */
  push32((uint32_t)(0x1u));
  /* 12194cdc push 0x121c34e8 */
  push32((uint32_t)(0x121c34e8u));
  /* 12194ce1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194ce3 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194ce9u);
  /* 12194ce9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194cec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194cee call 0x12196800 */
  push32(0x12194cf3u); f_12196800();
  /* 12194cf3 mov esi, esp */
  ESI = (ESP);
  /* 12194cf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194cf7 push 0x121c34f0 */
  push32((uint32_t)(0x121c34f0u));
  /* 12194cfc push 2 */
  push32((uint32_t)(0x2u));
  /* 12194cfe call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194d04u);
  /* 12194d04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194d07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194d09 call 0x12196800 */
  push32(0x12194d0eu); f_12196800();
L_12194d0e:;
  /* 12194d0e mov esi, esp */
  ESI = (ESP);
  /* 12194d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194d14 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12194d19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194d1b call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x12194d21u);
  /* 12194d21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194d24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194d26 call 0x12196800 */
  push32(0x12194d2bu); f_12196800();
  /* 12194d2b mov eax, dword ptr [0x121c3658] */
  EAX = (r32((uint32_t)(0x121c3658)));
  /* 12194d30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12194d33 mov dword ptr [0x121c3658], eax */
  w32((uint32_t)(0x121c3658), (EAX));
  /* 12194d38 mov esi, esp */
  ESI = (ESP);
  /* 12194d3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12194d3c push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12194d3e call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194d44u);
  /* 12194d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194d49 call 0x12196800 */
  push32(0x12194d4eu); f_12196800();
  /* 12194d4e mov esi, esp */
  ESI = (ESP);
  /* 12194d50 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194d52 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x12194d58u);
  /* 12194d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194d5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194d5d call 0x12196800 */
  push32(0x12194d62u); f_12196800();
L_12194d62:;
  /* 12194d62 mov esi, esp */
  ESI = (ESP);
  /* 12194d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194d66 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12194d6cu);
  /* 12194d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194d6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194d71 call 0x12196800 */
  push32(0x12194d76u); f_12196800();
  /* 12194d76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194d79 jle 0x12194f18 */
  if ((C.zf||C.sf!=C.of)) goto L_12194f18;
  /* 12194d7f mov esi, esp */
  ESI = (ESP);
  /* 12194d81 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12194d83 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194d89u);
  /* 12194d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194d8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194d8e call 0x12196800 */
  push32(0x12194d93u); f_12196800();
  /* 12194d93 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194d9a je 0x12194ee4 */
  if (C.zf) goto L_12194ee4;
  /* 12194da0 mov esi, esp */
  ESI = (ESP);
  /* 12194da2 push 0x121c34e8 */
  push32((uint32_t)(0x121c34e8u));
  /* 12194da7 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194dadu);
  /* 12194dad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194db0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194db2 call 0x12196800 */
  push32(0x12194db7u); f_12196800();
  /* 12194db7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194db9 jle 0x12194ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_12194ee4;
  /* 12194dbf mov esi, esp */
  ESI = (ESP);
  /* 12194dc1 push 0x121c34f0 */
  push32((uint32_t)(0x121c34f0u));
  /* 12194dc6 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12194dccu);
  /* 12194dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194dcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194dd1 call 0x12196800 */
  push32(0x12194dd6u); f_12196800();
  /* 12194dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194dd8 jle 0x12194ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_12194ee4;
  /* 12194dde mov esi, esp */
  ESI = (ESP);
  /* 12194de0 push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 12194de5 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12194dea call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12194df0u);
  /* 12194df0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194df3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194df5 call 0x12196800 */
  push32(0x12194dfau); f_12196800();
  /* 12194dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194dfc jg 0x12194e62 */
  if ((!C.zf&&C.sf==C.of)) goto L_12194e62;
  /* 12194dfe mov esi, esp */
  ESI = (ESP);
  /* 12194e00 push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 12194e05 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12194e0a call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12194e10u);
  /* 12194e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194e15 call 0x12196800 */
  push32(0x12194e1au); f_12196800();
  /* 12194e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194e1c jg 0x12194e62 */
  if ((!C.zf&&C.sf==C.of)) goto L_12194e62;
  /* 12194e1e mov esi, esp */
  ESI = (ESP);
  /* 12194e20 push 0x121c34e8 */
  push32((uint32_t)(0x121c34e8u));
  /* 12194e25 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12194e2a call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12194e30u);
  /* 12194e30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194e33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194e35 call 0x12196800 */
  push32(0x12194e3au); f_12196800();
  /* 12194e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194e3c jg 0x12194e62 */
  if ((!C.zf&&C.sf==C.of)) goto L_12194e62;
  /* 12194e3e mov esi, esp */
  ESI = (ESP);
  /* 12194e40 push 0x121c34f0 */
  push32((uint32_t)(0x121c34f0u));
  /* 12194e45 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12194e4a call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12194e50u);
  /* 12194e50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194e53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194e55 call 0x12196800 */
  push32(0x12194e5au); f_12196800();
  /* 12194e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194e5c jle 0x12194ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_12194ee4;
L_12194e62:;
  /* 12194e62 mov esi, esp */
  ESI = (ESP);
  /* 12194e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194e66 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12194e68 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194e6eu);
  /* 12194e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194e71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194e73 call 0x12196800 */
  push32(0x12194e78u); f_12196800();
  /* 12194e78 mov esi, esp */
  ESI = (ESP);
  /* 12194e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12194e7c push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 12194e81 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194e83 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194e89u);
  /* 12194e89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194e8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194e8e call 0x12196800 */
  push32(0x12194e93u); f_12196800();
  /* 12194e93 mov esi, esp */
  ESI = (ESP);
  /* 12194e95 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194e97 push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 12194e9c push 2 */
  push32((uint32_t)(0x2u));
  /* 12194e9e call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194ea4u);
  /* 12194ea4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194ea7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194ea9 call 0x12196800 */
  push32(0x12194eaeu); f_12196800();
  /* 12194eae mov esi, esp */
  ESI = (ESP);
  /* 12194eb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12194eb2 push 0x121c34e8 */
  push32((uint32_t)(0x121c34e8u));
  /* 12194eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194eb9 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194ebfu);
  /* 12194ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194ec2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194ec4 call 0x12196800 */
  push32(0x12194ec9u); f_12196800();
  /* 12194ec9 mov esi, esp */
  ESI = (ESP);
  /* 12194ecb push 1 */
  push32((uint32_t)(0x1u));
  /* 12194ecd push 0x121c34f0 */
  push32((uint32_t)(0x121c34f0u));
  /* 12194ed2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194ed4 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194edau);
  /* 12194eda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194edd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194edf call 0x12196800 */
  push32(0x12194ee4u); f_12196800();
L_12194ee4:;
  /* 12194ee4 mov esi, esp */
  ESI = (ESP);
  /* 12194ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194ee8 push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 12194eed push 2 */
  push32((uint32_t)(0x2u));
  /* 12194eef call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12194ef5u);
  /* 12194ef5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194ef8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194efa call 0x12196800 */
  push32(0x12194effu); f_12196800();
  /* 12194eff mov esi, esp */
  ESI = (ESP);
  /* 12194f01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194f03 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x12194f09u);
  /* 12194f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194f0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194f0e call 0x12196800 */
  push32(0x12194f13u); f_12196800();
  /* 12194f13 jmp 0x12194ff4 */
  goto L_12194ff4;
L_12194f18:;
  /* 12194f18 mov esi, esp */
  ESI = (ESP);
  /* 12194f1a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12194f1c call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194f22u);
  /* 12194f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194f25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194f27 call 0x12196800 */
  push32(0x12194f2cu); f_12196800();
  /* 12194f2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12194f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194f33 je 0x12194ff4 */
  if (C.zf) goto L_12194ff4;
  /* 12194f39 mov esi, esp */
  ESI = (ESP);
  /* 12194f3b push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 12194f40 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12194f45 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12194f4bu);
  /* 12194f4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194f50 call 0x12196800 */
  push32(0x12194f55u); f_12196800();
  /* 12194f55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194f57 jg 0x12194f79 */
  if ((!C.zf&&C.sf==C.of)) goto L_12194f79;
  /* 12194f59 mov esi, esp */
  ESI = (ESP);
  /* 12194f5b push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 12194f60 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12194f65 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x12194f6bu);
  /* 12194f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194f6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194f70 call 0x12196800 */
  push32(0x12194f75u); f_12196800();
  /* 12194f75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12194f77 jle 0x12194ff4 */
  if ((C.zf||C.sf!=C.of)) goto L_12194ff4;
L_12194f79:;
  /* 12194f79 mov esi, esp */
  ESI = (ESP);
  /* 12194f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12194f7d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12194f7f call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12194f85u);
  /* 12194f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194f88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194f8a call 0x12196800 */
  push32(0x12194f8fu); f_12196800();
  /* 12194f8f mov esi, esp */
  ESI = (ESP);
  /* 12194f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194f93 push 0x121c34c8 */
  push32((uint32_t)(0x121c34c8u));
  /* 12194f98 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194f9a call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194fa0u);
  /* 12194fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194fa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194fa5 call 0x12196800 */
  push32(0x12194faau); f_12196800();
  /* 12194faa mov esi, esp */
  ESI = (ESP);
  /* 12194fac push 1 */
  push32((uint32_t)(0x1u));
  /* 12194fae push 0x121c34d0 */
  push32((uint32_t)(0x121c34d0u));
  /* 12194fb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194fb5 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12194fbbu);
  /* 12194fbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194fbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194fc0 call 0x12196800 */
  push32(0x12194fc5u); f_12196800();
  /* 12194fc5 mov esi, esp */
  ESI = (ESP);
  /* 12194fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12194fc9 push 0x121c3448 */
  push32((uint32_t)(0x121c3448u));
  /* 12194fce push 2 */
  push32((uint32_t)(0x2u));
  /* 12194fd0 call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12194fd6u);
  /* 12194fd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194fd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194fdb call 0x12196800 */
  push32(0x12194fe0u); f_12196800();
  /* 12194fe0 mov esi, esp */
  ESI = (ESP);
  /* 12194fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12194fe4 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x12194feau);
  /* 12194fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12194fed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12194fef call 0x12196800 */
  push32(0x12194ff4u); f_12196800();
L_12194ff4:;
  /* 12194ff4 mov esi, esp */
  ESI = (ESP);
  /* 12194ff6 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12194ff8 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12194ffeu);
  /* 12194ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195003 call 0x12196800 */
  push32(0x12195008u); f_12196800();
  /* 12195008 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219500d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219500f je 0x12195201 */
  if (C.zf) goto L_12195201;
  /* 12195015 mov esi, esp */
  ESI = (ESP);
  /* 12195017 push 9 */
  push32((uint32_t)(0x9u));
  /* 12195019 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x1219501fu);
  /* 1219501f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195022 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195024 call 0x12196800 */
  push32(0x12195029u); f_12196800();
  /* 12195029 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219502e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195030 je 0x12195201 */
  if (C.zf) goto L_12195201;
  /* 12195036 cmp dword ptr [0x121c365c], 0xf */
  { uint32_t _a=(r32((uint32_t)(0x121c365c))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219503d jge 0x12195201 */
  if ((C.sf==C.of)) goto L_12195201;
  /* 12195043 mov esi, esp */
  ESI = (ESP);
  /* 12195045 push 0 */
  push32((uint32_t)(0x0u));
  /* 12195047 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12195049 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219504fu);
  /* 1219504f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195052 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195054 call 0x12196800 */
  push32(0x12195059u); f_12196800();
  /* 12195059 mov esi, esp */
  ESI = (ESP);
  /* 1219505b push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12195060 push 0x121c3430 */
  push32((uint32_t)(0x121c3430u));
  /* 12195065 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195067 push 0x121c3550 */
  push32((uint32_t)(0x121c3550u));
  /* 1219506c push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12195071 push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 12195076 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x1219507cu);
  /* 1219507c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219507f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195081 call 0x12196800 */
  push32(0x12195086u); f_12196800();
  /* 12195086 mov esi, esp */
  ESI = (ESP);
  /* 12195088 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 1219508d push 0x121c3430 */
  push32((uint32_t)(0x121c3430u));
  /* 12195092 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195094 push 0x121c3550 */
  push32((uint32_t)(0x121c3550u));
  /* 12195099 push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 1219509e push 0x121c34e0 */
  push32((uint32_t)(0x121c34e0u));
  /* 121950a3 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x121950a9u);
  /* 121950a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121950ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121950ae call 0x12196800 */
  push32(0x121950b3u); f_12196800();
  /* 121950b3 mov esi, esp */
  ESI = (ESP);
  /* 121950b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121950b7 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x121950bdu);
  /* 121950bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121950c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121950c2 call 0x12196800 */
  push32(0x121950c7u); f_12196800();
  /* 121950c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121950ca jle 0x12195126 */
  if ((C.zf||C.sf!=C.of)) goto L_12195126;
  /* 121950cc mov esi, esp */
  ESI = (ESP);
  /* 121950ce push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 121950d3 push 0x121c3430 */
  push32((uint32_t)(0x121c3430u));
  /* 121950d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121950da push 0x121c3638 */
  push32((uint32_t)(0x121c3638u));
  /* 121950df push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 121950e4 push 0x121c34f8 */
  push32((uint32_t)(0x121c34f8u));
  /* 121950e9 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x121950efu);
  /* 121950ef add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121950f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121950f4 call 0x12196800 */
  push32(0x121950f9u); f_12196800();
  /* 121950f9 mov esi, esp */
  ESI = (ESP);
  /* 121950fb push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 12195100 push 0x121c3430 */
  push32((uint32_t)(0x121c3430u));
  /* 12195105 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195107 push 0x121c3638 */
  push32((uint32_t)(0x121c3638u));
  /* 1219510c push 0x121c3418 */
  push32((uint32_t)(0x121c3418u));
  /* 12195111 push 0x121c3500 */
  push32((uint32_t)(0x121c3500u));
  /* 12195116 call dword ptr [0x121c6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6458))), 0x1219511cu);
  /* 1219511c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219511f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195121 call 0x12196800 */
  push32(0x12195126u); f_12196800();
L_12195126:;
  /* 12195126 mov esi, esp */
  ESI = (ESP);
  /* 12195128 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219512a push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 1219512f push 2 */
  push32((uint32_t)(0x2u));
  /* 12195131 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12195137u);
  /* 12195137 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219513a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219513c call 0x12196800 */
  push32(0x12195141u); f_12196800();
  /* 12195141 mov esi, esp */
  ESI = (ESP);
  /* 12195143 push 1 */
  push32((uint32_t)(0x1u));
  /* 12195145 push 0x121c34e0 */
  push32((uint32_t)(0x121c34e0u));
  /* 1219514a push 2 */
  push32((uint32_t)(0x2u));
  /* 1219514c call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12195152u);
  /* 12195152 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195155 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195157 call 0x12196800 */
  push32(0x1219515cu); f_12196800();
  /* 1219515c mov esi, esp */
  ESI = (ESP);
  /* 1219515e push 0 */
  push32((uint32_t)(0x0u));
  /* 12195160 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x12195166u);
  /* 12195166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195169 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219516b call 0x12196800 */
  push32(0x12195170u); f_12196800();
  /* 12195170 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195173 jle 0x121951ab */
  if ((C.zf||C.sf!=C.of)) goto L_121951ab;
  /* 12195175 mov esi, esp */
  ESI = (ESP);
  /* 12195177 push 1 */
  push32((uint32_t)(0x1u));
  /* 12195179 push 0x121c34f8 */
  push32((uint32_t)(0x121c34f8u));
  /* 1219517e push 2 */
  push32((uint32_t)(0x2u));
  /* 12195180 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12195186u);
  /* 12195186 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195189 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219518b call 0x12196800 */
  push32(0x12195190u); f_12196800();
  /* 12195190 mov esi, esp */
  ESI = (ESP);
  /* 12195192 push 1 */
  push32((uint32_t)(0x1u));
  /* 12195194 push 0x121c3500 */
  push32((uint32_t)(0x121c3500u));
  /* 12195199 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219519b call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x121951a1u);
  /* 121951a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121951a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121951a6 call 0x12196800 */
  push32(0x121951abu); f_12196800();
L_121951ab:;
  /* 121951ab mov esi, esp */
  ESI = (ESP);
  /* 121951ad push 0 */
  push32((uint32_t)(0x0u));
  /* 121951af push 0 */
  push32((uint32_t)(0x0u));
  /* 121951b1 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 121951b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121951b8 call dword ptr [0x121c6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6444))), 0x121951beu);
  /* 121951be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121951c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121951c3 call 0x12196800 */
  push32(0x121951c8u); f_12196800();
  /* 121951c8 mov ecx, dword ptr [0x121c365c] */
  ECX = (r32((uint32_t)(0x121c365c)));
  /* 121951ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121951d1 mov dword ptr [0x121c365c], ecx */
  w32((uint32_t)(0x121c365c), (ECX));
  /* 121951d7 mov esi, esp */
  ESI = (ESP);
  /* 121951d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 121951db push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 121951dd call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121951e3u);
  /* 121951e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121951e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121951e8 call 0x12196800 */
  push32(0x121951edu); f_12196800();
  /* 121951ed mov esi, esp */
  ESI = (ESP);
  /* 121951ef push 2 */
  push32((uint32_t)(0x2u));
  /* 121951f1 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x121951f7u);
  /* 121951f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121951fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121951fc call 0x12196800 */
  push32(0x12195201u); f_12196800();
L_12195201:;
  /* 12195201 mov esi, esp */
  ESI = (ESP);
  /* 12195203 push 0 */
  push32((uint32_t)(0x0u));
  /* 12195205 call dword ptr [0x121c640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c640c))), 0x1219520bu);
  /* 1219520b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219520e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195210 call 0x12196800 */
  push32(0x12195215u); f_12196800();
  /* 12195215 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195218 jle 0x12195397 */
  if ((C.zf||C.sf!=C.of)) goto L_12195397;
  /* 1219521e mov esi, esp */
  ESI = (ESP);
  /* 12195220 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 12195222 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12195228u);
  /* 12195228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219522b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219522d call 0x12196800 */
  push32(0x12195232u); f_12196800();
  /* 12195232 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12195237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195239 je 0x12195392 */
  if (C.zf) goto L_12195392;
  /* 1219523f mov esi, esp */
  ESI = (ESP);
  /* 12195241 push 0x121c34f8 */
  push32((uint32_t)(0x121c34f8u));
  /* 12195246 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x1219524cu);
  /* 1219524c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219524f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195251 call 0x12196800 */
  push32(0x12195256u); f_12196800();
  /* 12195256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195258 jle 0x12195392 */
  if ((C.zf||C.sf!=C.of)) goto L_12195392;
  /* 1219525e mov esi, esp */
  ESI = (ESP);
  /* 12195260 push 0x121c3500 */
  push32((uint32_t)(0x121c3500u));
  /* 12195265 call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x1219526bu);
  /* 1219526b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219526e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195270 call 0x12196800 */
  push32(0x12195275u); f_12196800();
  /* 12195275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195277 jle 0x12195392 */
  if ((C.zf||C.sf!=C.of)) goto L_12195392;
  /* 1219527d mov esi, esp */
  ESI = (ESP);
  /* 1219527f push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 12195284 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 12195289 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x1219528fu);
  /* 1219528f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195292 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195294 call 0x12196800 */
  push32(0x12195299u); f_12196800();
  /* 12195299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219529b jg 0x121952e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_121952e1;
  /* 1219529d mov esi, esp */
  ESI = (ESP);
  /* 1219529f push 0x121c34f8 */
  push32((uint32_t)(0x121c34f8u));
  /* 121952a4 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 121952a9 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x121952afu);
  /* 121952af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121952b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121952b4 call 0x12196800 */
  push32(0x121952b9u); f_12196800();
  /* 121952b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121952bb jg 0x121952e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_121952e1;
  /* 121952bd mov esi, esp */
  ESI = (ESP);
  /* 121952bf push 0x121c3500 */
  push32((uint32_t)(0x121c3500u));
  /* 121952c4 push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 121952c9 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x121952cfu);
  /* 121952cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121952d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121952d4 call 0x12196800 */
  push32(0x121952d9u); f_12196800();
  /* 121952d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121952db jle 0x12195392 */
  if ((C.zf||C.sf!=C.of)) goto L_12195392;
L_121952e1:;
  /* 121952e1 mov esi, esp */
  ESI = (ESP);
  /* 121952e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121952e5 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 121952e7 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121952edu);
  /* 121952ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121952f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121952f2 call 0x12196800 */
  push32(0x121952f7u); f_12196800();
  /* 121952f7 mov esi, esp */
  ESI = (ESP);
  /* 121952f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121952fb push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 12195300 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195302 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12195308u);
  /* 12195308 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219530b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219530d call 0x12196800 */
  push32(0x12195312u); f_12196800();
  /* 12195312 mov esi, esp */
  ESI = (ESP);
  /* 12195314 push 1 */
  push32((uint32_t)(0x1u));
  /* 12195316 push 0x121c34e0 */
  push32((uint32_t)(0x121c34e0u));
  /* 1219531b push 2 */
  push32((uint32_t)(0x2u));
  /* 1219531d call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12195323u);
  /* 12195323 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195326 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195328 call 0x12196800 */
  push32(0x1219532du); f_12196800();
  /* 1219532d mov esi, esp */
  ESI = (ESP);
  /* 1219532f push 1 */
  push32((uint32_t)(0x1u));
  /* 12195331 push 0x121c34f8 */
  push32((uint32_t)(0x121c34f8u));
  /* 12195336 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195338 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x1219533eu);
  /* 1219533e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195343 call 0x12196800 */
  push32(0x12195348u); f_12196800();
  /* 12195348 mov esi, esp */
  ESI = (ESP);
  /* 1219534a push 1 */
  push32((uint32_t)(0x1u));
  /* 1219534c push 0x121c3500 */
  push32((uint32_t)(0x121c3500u));
  /* 12195351 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195353 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x12195359u);
  /* 12195359 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219535c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219535e call 0x12196800 */
  push32(0x12195363u); f_12196800();
  /* 12195363 mov esi, esp */
  ESI = (ESP);
  /* 12195365 push 0 */
  push32((uint32_t)(0x0u));
  /* 12195367 push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 1219536c push 2 */
  push32((uint32_t)(0x2u));
  /* 1219536e call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12195374u);
  /* 12195374 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195377 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195379 call 0x12196800 */
  push32(0x1219537eu); f_12196800();
  /* 1219537e mov esi, esp */
  ESI = (ESP);
  /* 12195380 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195382 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x12195388u);
  /* 12195388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219538b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219538d call 0x12196800 */
  push32(0x12195392u); f_12196800();
L_12195392:;
  /* 12195392 jmp 0x12195473 */
  goto L_12195473;
L_12195397:;
  /* 12195397 mov esi, esp */
  ESI = (ESP);
  /* 12195399 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 1219539b call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121953a1u);
  /* 121953a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121953a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121953a6 call 0x12196800 */
  push32(0x121953abu); f_12196800();
  /* 121953ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121953b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121953b2 je 0x12195473 */
  if (C.zf) goto L_12195473;
  /* 121953b8 mov esi, esp */
  ESI = (ESP);
  /* 121953ba push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 121953bf push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 121953c4 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x121953cau);
  /* 121953ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121953cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121953cf call 0x12196800 */
  push32(0x121953d4u); f_12196800();
  /* 121953d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121953d6 jg 0x121953f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_121953f8;
  /* 121953d8 mov esi, esp */
  ESI = (ESP);
  /* 121953da push 0x121c34e0 */
  push32((uint32_t)(0x121c34e0u));
  /* 121953df push 0x121c3440 */
  push32((uint32_t)(0x121c3440u));
  /* 121953e4 call dword ptr [0x121c645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c645c))), 0x121953eau);
  /* 121953ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121953ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121953ef call 0x12196800 */
  push32(0x121953f4u); f_12196800();
  /* 121953f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121953f6 jle 0x12195473 */
  if ((C.zf||C.sf!=C.of)) goto L_12195473;
L_121953f8:;
  /* 121953f8 mov esi, esp */
  ESI = (ESP);
  /* 121953fa push 0 */
  push32((uint32_t)(0x0u));
  /* 121953fc push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 121953fe call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12195404u);
  /* 12195404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195407 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195409 call 0x12196800 */
  push32(0x1219540eu); f_12196800();
  /* 1219540e mov esi, esp */
  ESI = (ESP);
  /* 12195410 push 0 */
  push32((uint32_t)(0x0u));
  /* 12195412 push 0x121c34d8 */
  push32((uint32_t)(0x121c34d8u));
  /* 12195417 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195419 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x1219541fu);
  /* 1219541f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195422 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195424 call 0x12196800 */
  push32(0x12195429u); f_12196800();
  /* 12195429 mov esi, esp */
  ESI = (ESP);
  /* 1219542b push 1 */
  push32((uint32_t)(0x1u));
  /* 1219542d push 0x121c34e0 */
  push32((uint32_t)(0x121c34e0u));
  /* 12195432 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195434 call dword ptr [0x121c6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6440))), 0x1219543au);
  /* 1219543a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219543d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219543f call 0x12196800 */
  push32(0x12195444u); f_12196800();
  /* 12195444 mov esi, esp */
  ESI = (ESP);
  /* 12195446 push 0 */
  push32((uint32_t)(0x0u));
  /* 12195448 push 0x121c3450 */
  push32((uint32_t)(0x121c3450u));
  /* 1219544d push 2 */
  push32((uint32_t)(0x2u));
  /* 1219544f call dword ptr [0x121c6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6454))), 0x12195455u);
  /* 12195455 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195458 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219545a call 0x12196800 */
  push32(0x1219545fu); f_12196800();
  /* 1219545f mov esi, esp */
  ESI = (ESP);
  /* 12195461 push 2 */
  push32((uint32_t)(0x2u));
  /* 12195463 call dword ptr [0x121c643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c643c))), 0x12195469u);
  /* 12195469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219546c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219546e call 0x12196800 */
  push32(0x12195473u); f_12196800();
L_12195473:;
  /* 12195473 mov esi, esp */
  ESI = (ESP);
  /* 12195475 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12195477 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x1219547du);
  /* 1219547d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195480 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195482 call 0x12196800 */
  push32(0x12195487u); f_12196800();
  /* 12195487 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219548c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219548e je 0x1219550c */
  if (C.zf) goto L_1219550c;
  /* 12195490 mov esi, esp */
  ESI = (ESP);
  /* 12195492 push 0xa */
  push32((uint32_t)(0xau));
  /* 12195494 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x1219549au);
  /* 1219549a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219549d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219549f call 0x12196800 */
  push32(0x121954a4u); f_12196800();
  /* 121954a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121954a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121954ab je 0x1219550c */
  if (C.zf) goto L_1219550c;
  /* 121954ad mov esi, esp */
  ESI = (ESP);
  /* 121954af push 0 */
  push32((uint32_t)(0x0u));
  /* 121954b1 push 0x121c35f0 */
  push32((uint32_t)(0x121c35f0u));
  /* 121954b6 call dword ptr [0x121c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6464))), 0x121954bcu);
  /* 121954bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121954bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121954c1 call 0x12196800 */
  push32(0x121954c6u); f_12196800();
  /* 121954c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121954c8 jle 0x1219550c */
  if ((C.zf||C.sf!=C.of)) goto L_1219550c;
  /* 121954ca mov esi, esp */
  ESI = (ESP);
  /* 121954cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121954ce push 0x1d */
  push32((uint32_t)(0x1du));
  /* 121954d0 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121954d6u);
  /* 121954d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121954d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121954db call 0x12196800 */
  push32(0x121954e0u); f_12196800();
  /* 121954e0 mov esi, esp */
  ESI = (ESP);
  /* 121954e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121954e4 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 121954e6 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121954ecu);
  /* 121954ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121954ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121954f1 call 0x12196800 */
  push32(0x121954f6u); f_12196800();
  /* 121954f6 mov esi, esp */
  ESI = (ESP);
  /* 121954f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 121954fa push 0x34 */
  push32((uint32_t)(0x34u));
  /* 121954fc call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12195502u);
  /* 12195502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195505 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195507 call 0x12196800 */
  push32(0x1219550cu); f_12196800();
L_1219550c:;
  /* 1219550c mov esi, esp */
  ESI = (ESP);
  /* 1219550e push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12195510 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12195516u);
  /* 12195516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195519 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219551b call 0x12196800 */
  push32(0x12195520u); f_12196800();
  /* 12195520 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12195525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195527 je 0x121955a5 */
  if (C.zf) goto L_121955a5;
  /* 12195529 mov esi, esp */
  ESI = (ESP);
  /* 1219552b push 0xa */
  push32((uint32_t)(0xau));
  /* 1219552d call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12195533u);
  /* 12195533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195536 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195538 call 0x12196800 */
  push32(0x1219553du); f_12196800();
  /* 1219553d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12195542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195544 je 0x121955a5 */
  if (C.zf) goto L_121955a5;
  /* 12195546 mov esi, esp */
  ESI = (ESP);
  /* 12195548 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219554a push 0x121c35f0 */
  push32((uint32_t)(0x121c35f0u));
  /* 1219554f call dword ptr [0x121c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6464))), 0x12195555u);
  /* 12195555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195558 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219555a call 0x12196800 */
  push32(0x1219555fu); f_12196800();
  /* 1219555f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195561 jne 0x121955a5 */
  if (!C.zf) goto L_121955a5;
  /* 12195563 mov esi, esp */
  ESI = (ESP);
  /* 12195565 push 1 */
  push32((uint32_t)(0x1u));
  /* 12195567 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 12195569 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219556fu);
  /* 1219556f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195574 call 0x12196800 */
  push32(0x12195579u); f_12196800();
  /* 12195579 mov esi, esp */
  ESI = (ESP);
  /* 1219557b push 1 */
  push32((uint32_t)(0x1u));
  /* 1219557d push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1219557f call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12195585u);
  /* 12195585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195588 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219558a call 0x12196800 */
  push32(0x1219558fu); f_12196800();
  /* 1219558f mov esi, esp */
  ESI = (ESP);
  /* 12195591 push 0 */
  push32((uint32_t)(0x0u));
  /* 12195593 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12195595 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219559bu);
  /* 1219559b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219559e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121955a0 call 0x12196800 */
  push32(0x121955a5u); f_12196800();
L_121955a5:;
  /* 121955a5 mov esi, esp */
  ESI = (ESP);
  /* 121955a7 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 121955a9 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121955afu);
  /* 121955af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121955b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121955b4 call 0x12196800 */
  push32(0x121955b9u); f_12196800();
  /* 121955b9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121955be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121955c0 je 0x1219563e */
  if (C.zf) goto L_1219563e;
  /* 121955c2 mov esi, esp */
  ESI = (ESP);
  /* 121955c4 push 0xa */
  push32((uint32_t)(0xau));
  /* 121955c6 call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x121955ccu);
  /* 121955cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121955cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121955d1 call 0x12196800 */
  push32(0x121955d6u); f_12196800();
  /* 121955d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121955db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121955dd je 0x1219563e */
  if (C.zf) goto L_1219563e;
  /* 121955df mov esi, esp */
  ESI = (ESP);
  /* 121955e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121955e3 push 0x121c3590 */
  push32((uint32_t)(0x121c3590u));
  /* 121955e8 call dword ptr [0x121c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6464))), 0x121955eeu);
  /* 121955ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121955f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121955f3 call 0x12196800 */
  push32(0x121955f8u); f_12196800();
  /* 121955f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121955fa jle 0x1219563e */
  if ((C.zf||C.sf!=C.of)) goto L_1219563e;
  /* 121955fc mov esi, esp */
  ESI = (ESP);
  /* 121955fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12195600 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12195602 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12195608u);
  /* 12195608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219560b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219560d call 0x12196800 */
  push32(0x12195612u); f_12196800();
  /* 12195612 mov esi, esp */
  ESI = (ESP);
  /* 12195614 push 0 */
  push32((uint32_t)(0x0u));
  /* 12195616 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12195618 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219561eu);
  /* 1219561e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195621 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195623 call 0x12196800 */
  push32(0x12195628u); f_12196800();
  /* 12195628 mov esi, esp */
  ESI = (ESP);
  /* 1219562a push 1 */
  push32((uint32_t)(0x1u));
  /* 1219562c push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1219562e call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12195634u);
  /* 12195634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195637 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195639 call 0x12196800 */
  push32(0x1219563eu); f_12196800();
L_1219563e:;
  /* 1219563e mov esi, esp */
  ESI = (ESP);
  /* 12195640 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12195642 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12195648u);
  /* 12195648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219564b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219564d call 0x12196800 */
  push32(0x12195652u); f_12196800();
  /* 12195652 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12195657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195659 je 0x121956d7 */
  if (C.zf) goto L_121956d7;
  /* 1219565b mov esi, esp */
  ESI = (ESP);
  /* 1219565d push 0xa */
  push32((uint32_t)(0xau));
  /* 1219565f call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12195665u);
  /* 12195665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195668 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219566a call 0x12196800 */
  push32(0x1219566fu); f_12196800();
  /* 1219566f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12195674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195676 je 0x121956d7 */
  if (C.zf) goto L_121956d7;
  /* 12195678 mov esi, esp */
  ESI = (ESP);
  /* 1219567a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219567c push 0x121c3590 */
  push32((uint32_t)(0x121c3590u));
  /* 12195681 call dword ptr [0x121c6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6464))), 0x12195687u);
  /* 12195687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219568a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219568c call 0x12196800 */
  push32(0x12195691u); f_12196800();
  /* 12195691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195693 jne 0x121956d7 */
  if (!C.zf) goto L_121956d7;
  /* 12195695 mov esi, esp */
  ESI = (ESP);
  /* 12195697 push 1 */
  push32((uint32_t)(0x1u));
  /* 12195699 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1219569b call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121956a1u);
  /* 121956a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121956a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121956a6 call 0x12196800 */
  push32(0x121956abu); f_12196800();
  /* 121956ab mov esi, esp */
  ESI = (ESP);
  /* 121956ad push 0 */
  push32((uint32_t)(0x0u));
  /* 121956af push 0x36 */
  push32((uint32_t)(0x36u));
  /* 121956b1 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121956b7u);
  /* 121956b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121956ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121956bc call 0x12196800 */
  push32(0x121956c1u); f_12196800();
  /* 121956c1 mov esi, esp */
  ESI = (ESP);
  /* 121956c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121956c5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 121956c7 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121956cdu);
  /* 121956cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121956d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121956d2 call 0x12196800 */
  push32(0x121956d7u); f_12196800();
L_121956d7:;
  /* 121956d7 mov esi, esp */
  ESI = (ESP);
  /* 121956d9 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 121956db call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121956e1u);
  /* 121956e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121956e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121956e6 call 0x12196800 */
  push32(0x121956ebu); f_12196800();
  /* 121956eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121956f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121956f2 je 0x12195739 */
  if (C.zf) goto L_12195739;
  /* 121956f4 mov esi, esp */
  ESI = (ESP);
  /* 121956f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121956f8 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 121956fa call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12195700u);
  /* 12195700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195705 call 0x12196800 */
  push32(0x1219570au); f_12196800();
  /* 1219570a mov esi, esp */
  ESI = (ESP);
  /* 1219570c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 12195711 push 0xa */
  push32((uint32_t)(0xau));
  /* 12195713 call dword ptr [0x121c6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6428))), 0x12195719u);
  /* 12195719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219571c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219571e call 0x12196800 */
  push32(0x12195723u); f_12196800();
  /* 12195723 mov esi, esp */
  ESI = (ESP);
  /* 12195725 push 1 */
  push32((uint32_t)(0x1u));
  /* 12195727 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12195729 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219572fu);
  /* 1219572f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195732 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195734 call 0x12196800 */
  push32(0x12195739u); f_12196800();
L_12195739:;
  /* 12195739 mov esi, esp */
  ESI = (ESP);
  /* 1219573b push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1219573d call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x12195743u);
  /* 12195743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195746 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195748 call 0x12196800 */
  push32(0x1219574du); f_12196800();
  /* 1219574d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12195752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195754 jne 0x1219579f */
  if (!C.zf) goto L_1219579f;
  /* 12195756 mov esi, esp */
  ESI = (ESP);
  /* 12195758 push 0xa */
  push32((uint32_t)(0xau));
  /* 1219575a call dword ptr [0x121c6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6424))), 0x12195760u);
  /* 12195760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195763 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195765 call 0x12196800 */
  push32(0x1219576au); f_12196800();
  /* 1219576a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219576f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195771 je 0x1219579f */
  if (C.zf) goto L_1219579f;
  /* 12195773 mov esi, esp */
  ESI = (ESP);
  /* 12195775 push 1 */
  push32((uint32_t)(0x1u));
  /* 12195777 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12195779 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219577fu);
  /* 1219577f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195782 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195784 call 0x12196800 */
  push32(0x12195789u); f_12196800();
  /* 12195789 mov esi, esp */
  ESI = (ESP);
  /* 1219578b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219578d push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1219578f call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x12195795u);
  /* 12195795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195798 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219579a call 0x12196800 */
  push32(0x1219579fu); f_12196800();
L_1219579f:;
  /* 1219579f mov esi, esp */
  ESI = (ESP);
  /* 121957a1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 121957a3 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x121957a9u);
  /* 121957a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121957ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121957ae call 0x12196800 */
  push32(0x121957b3u); f_12196800();
  /* 121957b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121957b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121957ba je 0x12195815 */
  if (C.zf) goto L_12195815;
  /* 121957bc mov esi, esp */
  ESI = (ESP);
  /* 121957be push 0 */
  push32((uint32_t)(0x0u));
  /* 121957c0 call dword ptr [0x121c6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6468))), 0x121957c6u);
  /* 121957c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121957c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121957cb call 0x12196800 */
  push32(0x121957d0u); f_12196800();
  /* 121957d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121957d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121957d7 je 0x12195815 */
  if (C.zf) goto L_12195815;
  /* 121957d9 mov esi, esp */
  ESI = (ESP);
  /* 121957db push 0 */
  push32((uint32_t)(0x0u));
  /* 121957dd push 0x63 */
  push32((uint32_t)(0x63u));
  /* 121957df call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x121957e5u);
  /* 121957e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121957e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121957ea call 0x12196800 */
  push32(0x121957efu); f_12196800();
  /* 121957ef mov esi, esp */
  ESI = (ESP);
  /* 121957f1 push 0x121be140 */
  push32((uint32_t)(0x121be140u));
  /* 121957f6 call dword ptr [0x121c6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6434))), 0x121957fcu);
  /* 121957fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121957ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195801 call 0x12196800 */
  push32(0x12195806u); f_12196800();
  /* 12195806 mov esi, esp */
  ESI = (ESP);
  /* 12195808 call dword ptr [0x121c6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6460))), 0x1219580eu);
  /* 1219580e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195810 call 0x12196800 */
  push32(0x12195815u); f_12196800();
L_12195815:;
  /* 12195815 mov esi, esp */
  ESI = (ESP);
  /* 12195817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12195819 call dword ptr [0x121c6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6410))), 0x1219581fu);
  /* 1219581f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195822 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195824 call 0x12196800 */
  push32(0x12195829u); f_12196800();
  /* 12195829 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219582e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12195830 je 0x1219588b */
  if (C.zf) goto L_1219588b;
  /* 12195832 mov esi, esp */
  ESI = (ESP);
  /* 12195834 push 3 */
  push32((uint32_t)(0x3u));
  /* 12195836 call dword ptr [0x121c6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6468))), 0x1219583cu);
  /* 1219583c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219583f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195841 call 0x12196800 */
  push32(0x12195846u); f_12196800();
  /* 12195846 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219584b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219584d je 0x1219588b */
  if (C.zf) goto L_1219588b;
  /* 1219584f mov esi, esp */
  ESI = (ESP);
  /* 12195851 push 0 */
  push32((uint32_t)(0x0u));
  /* 12195853 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12195855 call dword ptr [0x121c6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6414))), 0x1219585bu);
  /* 1219585b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219585e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195860 call 0x12196800 */
  push32(0x12195865u); f_12196800();
  /* 12195865 mov esi, esp */
  ESI = (ESP);
  /* 12195867 push 0x121be134 */
  push32((uint32_t)(0x121be134u));
  /* 1219586c call dword ptr [0x121c6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6434))), 0x12195872u);
  /* 12195872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195877 call 0x12196800 */
  push32(0x1219587cu); f_12196800();
  /* 1219587c mov esi, esp */
  ESI = (ESP);
  /* 1219587e call dword ptr [0x121c6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6470))), 0x12195884u);
  /* 12195884 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195886 call 0x12196800 */
  push32(0x1219588bu); f_12196800();
L_1219588b:;
  /* 1219588b pop edi */
  EDI = (pop32());
  /* 1219588c pop esi */
  ESI = (pop32());
  /* 1219588d pop ebx */
  EBX = (pop32());
  /* 1219588e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12195891 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12195893 call 0x12196800 */
  push32(0x12195898u); f_12196800();
  /* 12195898 mov esp, ebp */
  ESP = (EBP);
  /* 1219589a pop ebp */
  EBP = (pop32());
  /* 1219589b ret  */
  ESPCHK(0x12191f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x121966e0 (63 bytes, 26 insns) */
void f_121966e0(void) {
  FTRACE(0x121966e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121966e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121966e1 mov ebp, esp */
  EBP = (ESP);
  /* 121966e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121966e6 push ebx */
  push32((uint32_t)(EBX));
  /* 121966e7 push esi */
  push32((uint32_t)(ESI));
  /* 121966e8 push edi */
  push32((uint32_t)(EDI));
  /* 121966e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 121966ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 121966f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 121966f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 121966f8 mov esi, esp */
  ESI = (ESP);
  /* 121966fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121966fd push eax */
  push32((uint32_t)(EAX));
  /* 121966fe call dword ptr [0x121c644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c644c))), 0x12196704u);
  /* 12196704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196707 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196709 call 0x12196800 */
  push32(0x1219670eu); f_12196800();
  /* 1219670e pop edi */
  EDI = (pop32());
  /* 1219670f pop esi */
  ESI = (pop32());
  /* 12196710 pop ebx */
  EBX = (pop32());
  /* 12196711 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196714 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196716 call 0x12196800 */
  push32(0x1219671bu); f_12196800();
  /* 1219671b mov esp, ebp */
  ESP = (EBP);
  /* 1219671d pop ebp */
  EBP = (pop32());
  /* 1219671e ret  */
  ESPCHK(0x121966e0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12196800 (56 bytes, 28 insns) */
void f_12196800(void) {
  FTRACE(0x12196800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196800 jne 0x12196803 */
  if (!C.zf) goto L_12196803;
  /* 12196802 ret  */
  ESPCHK(0x12196800u, _esp0);
  ESP += 4; return;
L_12196803:;
  /* 12196803 push ebp */
  push32((uint32_t)(EBP));
  /* 12196804 mov ebp, esp */
  EBP = (ESP);
  /* 12196806 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12196809 push eax */
  push32((uint32_t)(EAX));
  /* 1219680a push edx */
  push32((uint32_t)(EDX));
  /* 1219680b push ebx */
  push32((uint32_t)(EBX));
  /* 1219680c push esi */
  push32((uint32_t)(ESI));
  /* 1219680d push edi */
  push32((uint32_t)(EDI));
  /* 1219680e push 0x121be1e0 */
  push32((uint32_t)(0x121be1e0u));
  /* 12196813 push 0x121be1dc */
  push32((uint32_t)(0x121be1dcu));
  /* 12196818 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1219681a push 0x121be1cc */
  push32((uint32_t)(0x121be1ccu));
  /* 1219681f push 1 */
  push32((uint32_t)(0x1u));
  /* 12196821 call 0x12196bd0 */
  push32(0x12196826u); f_12196bd0();
  /* 12196826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196829 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219682c jne 0x1219682f */
  if (!C.zf) goto L_1219682f;
  /* 1219682e int3  */
  x86_unimpl("int3 @ 0x1219682e");
L_1219682f:;
  /* 1219682f pop edi */
  EDI = (pop32());
  /* 12196830 pop esi */
  ESI = (pop32());
  /* 12196831 pop ebx */
  EBX = (pop32());
  /* 12196832 pop edx */
  EDX = (pop32());
  /* 12196833 pop eax */
  EAX = (pop32());
  /* 12196834 mov esp, ebp */
  ESP = (EBP);
  /* 12196836 pop ebp */
  EBP = (pop32());
  /* 12196837 ret  */
  ESPCHK(0x12196800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006840 @ 0x12196840 (313 bytes, 78 insns) */
void f_12196840(void) {
  FTRACE(0x12196840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196840 push ebp */
  push32((uint32_t)(EBP));
  /* 12196841 mov ebp, esp */
  EBP = (ESP);
  /* 12196843 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196847 jne 0x12196907 */
  if (!C.zf) goto L_12196907;
  /* 1219684d call dword ptr [0x121c6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6310))), 0x12196853u);
  /* 12196853 mov dword ptr [0x121c3700], eax */
  w32((uint32_t)(0x121c3700), (EAX));
  /* 12196858 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219685a call 0x1219a300 */
  push32(0x1219685fu); f_1219a300();
  /* 1219685f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196864 jne 0x1219686d */
  if (!C.zf) goto L_1219686d;
  /* 12196866 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12196868 jmp 0x12196975 */
  goto L_12196975;
L_1219686d:;
  /* 1219686d mov eax, dword ptr [0x121c3700] */
  EAX = (r32((uint32_t)(0x121c3700)));
  /* 12196872 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12196875 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219687a mov dword ptr [0x121c370c], eax */
  w32((uint32_t)(0x121c370c), (EAX));
  /* 1219687f mov ecx, dword ptr [0x121c3700] */
  ECX = (r32((uint32_t)(0x121c3700)));
  /* 12196885 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219688b mov dword ptr [0x121c3708], ecx */
  w32((uint32_t)(0x121c3708), (ECX));
  /* 12196891 mov edx, dword ptr [0x121c3708] */
  EDX = (r32((uint32_t)(0x121c3708)));
  /* 12196897 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1219689a add edx, dword ptr [0x121c370c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c370c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121968a0 mov dword ptr [0x121c3704], edx */
  w32((uint32_t)(0x121c3704), (EDX));
  /* 121968a6 mov eax, dword ptr [0x121c3700] */
  EAX = (r32((uint32_t)(0x121c3700)));
  /* 121968ab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 121968ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121968b3 mov dword ptr [0x121c3700], eax */
  w32((uint32_t)(0x121c3700), (EAX));
  /* 121968b8 call 0x12197470 */
  push32(0x121968bdu); f_12197470();
  /* 121968bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121968bf jne 0x121968cd */
  if (!C.zf) goto L_121968cd;
  /* 121968c1 call 0x1219a350 */
  push32(0x121968c6u); f_1219a350();
  /* 121968c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121968c8 jmp 0x12196975 */
  goto L_12196975;
L_121968cd:;
  /* 121968cd call dword ptr [0x121c630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c630c))), 0x121968d3u);
  /* 121968d3 mov dword ptr [0x121c524c], eax */
  w32((uint32_t)(0x121c524c), (EAX));
  /* 121968d8 call 0x1219a0e0 */
  push32(0x121968ddu); f_1219a0e0();
  /* 121968dd mov dword ptr [0x121c36e8], eax */
  w32((uint32_t)(0x121c36e8), (EAX));
  /* 121968e2 call 0x12197720 */
  push32(0x121968e7u); f_12197720();
  /* 121968e7 call 0x12199bd0 */
  push32(0x121968ecu); f_12199bd0();
  /* 121968ec call 0x12199a80 */
  push32(0x121968f1u); f_12199a80();
  /* 121968f1 call 0x12197270 */
  push32(0x121968f6u); f_12197270();
  /* 121968f6 mov ecx, dword ptr [0x121c36e4] */
  ECX = (r32((uint32_t)(0x121c36e4)));
  /* 121968fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121968ff mov dword ptr [0x121c36e4], ecx */
  w32((uint32_t)(0x121c36e4), (ECX));
  /* 12196905 jmp 0x12196970 */
  goto L_12196970;
L_12196907:;
  /* 12196907 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219690b jne 0x12196960 */
  if (!C.zf) goto L_12196960;
  /* 1219690d cmp dword ptr [0x121c36e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c36e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196914 jle 0x1219695a */
  if ((C.zf||C.sf!=C.of)) goto L_1219695a;
  /* 12196916 mov edx, dword ptr [0x121c36e4] */
  EDX = (r32((uint32_t)(0x121c36e4)));
  /* 1219691c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219691f mov dword ptr [0x121c36e4], edx */
  w32((uint32_t)(0x121c36e4), (EDX));
  /* 12196925 cmp dword ptr [0x121c3738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219692c jne 0x12196933 */
  if (!C.zf) goto L_12196933;
  /* 1219692e call 0x121972f0 */
  push32(0x12196933u); f_121972f0();
L_12196933:;
  /* 12196933 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12196935 call 0x12199020 */
  push32(0x1219693au); f_12199020();
  /* 1219693a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219693d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12196940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196942 je 0x12196949 */
  if (C.zf) goto L_12196949;
  /* 12196944 call 0x12199930 */
  push32(0x12196949u); f_12199930();
L_12196949:;
  /* 12196949 call 0x12197a50 */
  push32(0x1219694eu); f_12197a50();
  /* 1219694e call 0x12197500 */
  push32(0x12196953u); f_12197500();
  /* 12196953 call 0x1219a350 */
  push32(0x12196958u); f_1219a350();
  /* 12196958 jmp 0x1219695e */
  goto L_1219695e;
L_1219695a:;
  /* 1219695a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219695c jmp 0x12196975 */
  goto L_12196975;
L_1219695e:;
  /* 1219695e jmp 0x12196970 */
  goto L_12196970;
L_12196960:;
  /* 12196960 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196964 jne 0x12196970 */
  if (!C.zf) goto L_12196970;
  /* 12196966 push 0 */
  push32((uint32_t)(0x0u));
  /* 12196968 call 0x121975f0 */
  push32(0x1219696du); f_121975f0();
  /* 1219696d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12196970:;
  /* 12196970 mov eax, 1 */
  EAX = (0x1u);
L_12196975:;
  /* 12196975 pop ebp */
  EBP = (pop32());
  /* 12196976 ret 0xc */
  ESPCHK(0x12196840u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12196980 (243 bytes, 86 insns) */
void f_12196980(void) {
  FTRACE(0x12196980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196980 push ebp */
  push32((uint32_t)(EBP));
  /* 12196981 mov ebp, esp */
  EBP = (ESP);
  /* 12196983 push ecx */
  push32((uint32_t)(ECX));
  /* 12196984 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1219698b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219698f jne 0x121969a1 */
  if (!C.zf) goto L_121969a1;
  /* 12196991 cmp dword ptr [0x121c36e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c36e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196998 jne 0x121969a1 */
  if (!C.zf) goto L_121969a1;
  /* 1219699a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219699c jmp 0x12196a6d */
  goto L_12196a6d;
L_121969a1:;
  /* 121969a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121969a5 je 0x121969ad */
  if (C.zf) goto L_121969ad;
  /* 121969a7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121969ab jne 0x121969ef */
  if (!C.zf) goto L_121969ef;
L_121969ad:;
  /* 121969ad cmp dword ptr [0x121c525c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c525c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121969b4 je 0x121969cb */
  if (C.zf) goto L_121969cb;
  /* 121969b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121969b9 push eax */
  push32((uint32_t)(EAX));
  /* 121969ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121969bd push ecx */
  push32((uint32_t)(ECX));
  /* 121969be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121969c1 push edx */
  push32((uint32_t)(EDX));
  /* 121969c2 call dword ptr [0x121c525c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c525c))), 0x121969c8u);
  /* 121969c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121969cb:;
  /* 121969cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121969cf je 0x121969e5 */
  if (C.zf) goto L_121969e5;
  /* 121969d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121969d4 push eax */
  push32((uint32_t)(EAX));
  /* 121969d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121969d8 push ecx */
  push32((uint32_t)(ECX));
  /* 121969d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121969dc push edx */
  push32((uint32_t)(EDX));
  /* 121969dd call 0x12196840 */
  push32(0x121969e2u); f_12196840();
  /* 121969e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121969e5:;
  /* 121969e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121969e9 jne 0x121969ef */
  if (!C.zf) goto L_121969ef;
  /* 121969eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121969ed jmp 0x12196a6d */
  goto L_12196a6d;
L_121969ef:;
  /* 121969ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121969f2 push eax */
  push32((uint32_t)(EAX));
  /* 121969f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121969f6 push ecx */
  push32((uint32_t)(ECX));
  /* 121969f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121969fa push edx */
  push32((uint32_t)(EDX));
  /* 121969fb call 0x1219100f */
  push32(0x12196a00u); f_1219100f();
  /* 12196a00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12196a03 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196a07 jne 0x12196a1e */
  if (!C.zf) goto L_12196a1e;
  /* 12196a09 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196a0d jne 0x12196a1e */
  if (!C.zf) goto L_12196a1e;
  /* 12196a0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12196a12 push eax */
  push32((uint32_t)(EAX));
  /* 12196a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12196a15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196a18 push ecx */
  push32((uint32_t)(ECX));
  /* 12196a19 call 0x12196840 */
  push32(0x12196a1eu); f_12196840();
L_12196a1e:;
  /* 12196a1e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196a22 je 0x12196a2a */
  if (C.zf) goto L_12196a2a;
  /* 12196a24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196a28 jne 0x12196a6a */
  if (!C.zf) goto L_12196a6a;
L_12196a2a:;
  /* 12196a2a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12196a2d push edx */
  push32((uint32_t)(EDX));
  /* 12196a2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12196a31 push eax */
  push32((uint32_t)(EAX));
  /* 12196a32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196a35 push ecx */
  push32((uint32_t)(ECX));
  /* 12196a36 call 0x12196840 */
  push32(0x12196a3bu); f_12196840();
  /* 12196a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196a3d jne 0x12196a46 */
  if (!C.zf) goto L_12196a46;
  /* 12196a3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12196a46:;
  /* 12196a46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196a4a je 0x12196a6a */
  if (C.zf) goto L_12196a6a;
  /* 12196a4c cmp dword ptr [0x121c525c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c525c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196a53 je 0x12196a6a */
  if (C.zf) goto L_12196a6a;
  /* 12196a55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12196a58 push edx */
  push32((uint32_t)(EDX));
  /* 12196a59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12196a5c push eax */
  push32((uint32_t)(EAX));
  /* 12196a5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196a60 push ecx */
  push32((uint32_t)(ECX));
  /* 12196a61 call dword ptr [0x121c525c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c525c))), 0x12196a67u);
  /* 12196a67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12196a6a:;
  /* 12196a6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12196a6d:;
  /* 12196a6d mov esp, ebp */
  ESP = (EBP);
  /* 12196a6f pop ebp */
  EBP = (pop32());
  /* 12196a70 ret 0xc */
  ESPCHK(0x12196980u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12196a80 (58 bytes, 18 insns) */
void f_12196a80(void) {
  FTRACE(0x12196a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12196a81 mov ebp, esp */
  EBP = (ESP);
  /* 12196a83 cmp dword ptr [0x121c36f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196a8a je 0x12196a9e */
  if (C.zf) goto L_12196a9e;
  /* 12196a8c cmp dword ptr [0x121c36f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196a93 jne 0x12196aa3 */
  if (!C.zf) goto L_12196aa3;
  /* 12196a95 cmp dword ptr [0x121c36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196a9c jne 0x12196aa3 */
  if (!C.zf) goto L_12196aa3;
L_12196a9e:;
  /* 12196a9e call 0x1219a3f0 */
  push32(0x12196aa3u); f_1219a3f0();
L_12196aa3:;
  /* 12196aa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196aa6 push eax */
  push32((uint32_t)(EAX));
  /* 12196aa7 call 0x1219a440 */
  push32(0x12196aacu); f_1219a440();
  /* 12196aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196aaf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12196ab4 call dword ptr [0x121c1a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c1a30))), 0x12196abau);
  /* 12196aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196abd pop ebp */
  EBP = (pop32());
  /* 12196abe ret  */
  ESPCHK(0x12196a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x12196ac0 (11 bytes, 5 insns) */
void f_12196ac0(void) {
  FTRACE(0x12196ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12196ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12196ac3 call dword ptr [0x121c6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6314))), 0x12196ac9u);
  /* 12196ac9 pop ebp */
  EBP = (pop32());
  /* 12196aca ret  */
  ESPCHK(0x12196ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x12196ad0 (87 bytes, 30 insns) */
void f_12196ad0(void) {
  FTRACE(0x12196ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12196ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12196ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 12196ad4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196ad8 jl 0x12196ae0 */
  if ((C.sf!=C.of)) goto L_12196ae0;
  /* 12196ada cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196ade jl 0x12196ae5 */
  if ((C.sf!=C.of)) goto L_12196ae5;
L_12196ae0:;
  /* 12196ae0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12196ae3 jmp 0x12196b23 */
  goto L_12196b23;
L_12196ae5:;
  /* 12196ae5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196ae9 jne 0x12196af7 */
  if (!C.zf) goto L_12196af7;
  /* 12196aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196aee mov eax, dword ptr [eax*4 + 0x121c1a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x121c1a38)));
  /* 12196af5 jmp 0x12196b23 */
  goto L_12196b23;
L_12196af7:;
  /* 12196af7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12196afa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12196afd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12196aff je 0x12196b06 */
  if (C.zf) goto L_12196b06;
  /* 12196b01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12196b04 jmp 0x12196b23 */
  goto L_12196b23;
L_12196b06:;
  /* 12196b06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196b09 mov eax, dword ptr [edx*4 + 0x121c1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c1a38)));
  /* 12196b10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12196b13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196b16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12196b19 mov dword ptr [ecx*4 + 0x121c1a38], edx */
  w32((uint32_t)(ECX*4 + 0x121c1a38), (EDX));
  /* 12196b20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12196b23:;
  /* 12196b23 mov esp, ebp */
  ESP = (EBP);
  /* 12196b25 pop ebp */
  EBP = (pop32());
  /* 12196b26 ret  */
  ESPCHK(0x12196ad0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12196b30 (126 bytes, 38 insns) */
void f_12196b30(void) {
  FTRACE(0x12196b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12196b31 mov ebp, esp */
  EBP = (ESP);
  /* 12196b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12196b34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196b38 jl 0x12196b40 */
  if ((C.sf!=C.of)) goto L_12196b40;
  /* 12196b3a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196b3e jl 0x12196b47 */
  if ((C.sf!=C.of)) goto L_12196b47;
L_12196b40:;
  /* 12196b40 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12196b45 jmp 0x12196baa */
  goto L_12196baa;
L_12196b47:;
  /* 12196b47 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196b4b jne 0x12196b59 */
  if (!C.zf) goto L_12196b59;
  /* 12196b4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196b50 mov eax, dword ptr [eax*4 + 0x121c1a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x121c1a44)));
  /* 12196b57 jmp 0x12196baa */
  goto L_12196baa;
L_12196b59:;
  /* 12196b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196b5c mov edx, dword ptr [ecx*4 + 0x121c1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c1a44)));
  /* 12196b63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12196b66 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196b6a jne 0x12196b80 */
  if (!C.zf) goto L_12196b80;
  /* 12196b6c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12196b6e call dword ptr [0x121c6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6318))), 0x12196b74u);
  /* 12196b74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196b77 mov dword ptr [ecx*4 + 0x121c1a44], eax */
  w32((uint32_t)(ECX*4 + 0x121c1a44), (EAX));
  /* 12196b7e jmp 0x12196ba7 */
  goto L_12196ba7;
L_12196b80:;
  /* 12196b80 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196b84 jne 0x12196b9a */
  if (!C.zf) goto L_12196b9a;
  /* 12196b86 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12196b88 call dword ptr [0x121c6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6318))), 0x12196b8eu);
  /* 12196b8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196b91 mov dword ptr [edx*4 + 0x121c1a44], eax */
  w32((uint32_t)(EDX*4 + 0x121c1a44), (EAX));
  /* 12196b98 jmp 0x12196ba7 */
  goto L_12196ba7;
L_12196b9a:;
  /* 12196b9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196b9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12196ba0 mov dword ptr [eax*4 + 0x121c1a44], ecx */
  w32((uint32_t)(EAX*4 + 0x121c1a44), (ECX));
L_12196ba7:;
  /* 12196ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12196baa:;
  /* 12196baa mov esp, ebp */
  ESP = (EBP);
  /* 12196bac pop ebp */
  EBP = (pop32());
  /* 12196bad ret  */
  ESPCHK(0x12196b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x12196bb0 (28 bytes, 11 insns) */
void f_12196bb0(void) {
  FTRACE(0x12196bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12196bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12196bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12196bb4 mov eax, dword ptr [0x121c5240] */
  EAX = (r32((uint32_t)(0x121c5240)));
  /* 12196bb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12196bbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196bbf mov dword ptr [0x121c5240], ecx */
  w32((uint32_t)(0x121c5240), (ECX));
  /* 12196bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12196bc8 mov esp, ebp */
  ESP = (EBP);
  /* 12196bca pop ebp */
  EBP = (pop32());
  /* 12196bcb ret  */
  ESPCHK(0x12196bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bd0 @ 0x12196bd0 (912 bytes, 248 insns) */
void f_12196bd0(void) {
  FTRACE(0x12196bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12196bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12196bd3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12196bd8 call 0x1219acb0 */
  push32(0x12196bddu); f_1219acb0();
  /* 12196bdd push edi */
  push32((uint32_t)(EDI));
  /* 12196bde mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12196be5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12196bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12196bec lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12196bf2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12196bf4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12196bf6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12196bf7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12196bfe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12196c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12196c05 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12196c0b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12196c0d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12196c0f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12196c10 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12196c17 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12196c1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12196c1e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12196c24 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12196c26 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12196c28 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12196c29 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12196c2c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12196c32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196c36 jl 0x12196c3e */
  if ((C.sf!=C.of)) goto L_12196c3e;
  /* 12196c38 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196c3c jl 0x12196c46 */
  if ((C.sf!=C.of)) goto L_12196c46;
L_12196c3e:;
  /* 12196c3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12196c41 jmp 0x12196f5b */
  goto L_12196f5b;
L_12196c46:;
  /* 12196c46 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196c4a jne 0x12196cf0 */
  if (!C.zf) goto L_12196cf0;
  /* 12196c50 push 0x121c1a34 */
  push32((uint32_t)(0x121c1a34u));
  /* 12196c55 call dword ptr [0x121c6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6330))), 0x12196c5bu);
  /* 12196c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196c5d jle 0x12196cf0 */
  if ((C.zf||C.sf!=C.of)) goto L_12196cf0;
  /* 12196c63 cmp dword ptr [0x121c36f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196c6a jne 0x12196cae */
  if (!C.zf) goto L_12196cae;
  /* 12196c6c push 0x121be388 */
  push32((uint32_t)(0x121be388u));
  /* 12196c71 call dword ptr [0x121c632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c632c))), 0x12196c77u);
  /* 12196c77 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12196c7d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196c84 je 0x12196ca6 */
  if (C.zf) goto L_12196ca6;
  /* 12196c86 push 0x121be37c */
  push32((uint32_t)(0x121be37cu));
  /* 12196c8b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12196c91 push ecx */
  push32((uint32_t)(ECX));
  /* 12196c92 call dword ptr [0x121c6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6328))), 0x12196c98u);
  /* 12196c98 mov dword ptr [0x121c36f8], eax */
  w32((uint32_t)(0x121c36f8), (EAX));
  /* 12196c9d cmp dword ptr [0x121c36f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196ca4 jne 0x12196cae */
  if (!C.zf) goto L_12196cae;
L_12196ca6:;
  /* 12196ca6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12196ca9 jmp 0x12196f5b */
  goto L_12196f5b;
L_12196cae:;
  /* 12196cae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12196cb1 push edx */
  push32((uint32_t)(EDX));
  /* 12196cb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12196cb5 push eax */
  push32((uint32_t)(EAX));
  /* 12196cb6 push 0x121be348 */
  push32((uint32_t)(0x121be348u));
  /* 12196cbb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12196cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12196cc2 call dword ptr [0x121c36f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c36f8))), 0x12196cc8u);
  /* 12196cc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196ccb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12196cd1 push edx */
  push32((uint32_t)(EDX));
  /* 12196cd2 call dword ptr [0x121c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6324))), 0x12196cd8u);
  /* 12196cd8 push 0x121c1a34 */
  push32((uint32_t)(0x121c1a34u));
  /* 12196cdd call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x12196ce3u);
  /* 12196ce3 call 0x12196ac0 */
  push32(0x12196ce8u); f_12196ac0();
  /* 12196ce8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12196ceb jmp 0x12196f5b */
  goto L_12196f5b;
L_12196cf0:;
  /* 12196cf0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196cf4 je 0x12196d2d */
  if (C.zf) goto L_12196d2d;
  /* 12196cf6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12196cfc push eax */
  push32((uint32_t)(EAX));
  /* 12196cfd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12196d00 push ecx */
  push32((uint32_t)(ECX));
  /* 12196d01 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12196d06 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12196d0c push edx */
  push32((uint32_t)(EDX));
  /* 12196d0d call 0x1219abb0 */
  push32(0x12196d12u); f_1219abb0();
  /* 12196d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196d15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196d17 jge 0x12196d2d */
  if ((C.sf==C.of)) goto L_12196d2d;
  /* 12196d19 push 0x121be31c */
  push32((uint32_t)(0x121be31cu));
  /* 12196d1e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12196d24 push eax */
  push32((uint32_t)(EAX));
  /* 12196d25 call 0x1219aac0 */
  push32(0x12196d2au); f_1219aac0();
  /* 12196d2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12196d2d:;
  /* 12196d2d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196d31 jne 0x12196d65 */
  if (!C.zf) goto L_12196d65;
  /* 12196d33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196d37 je 0x12196d45 */
  if (C.zf) goto L_12196d45;
  /* 12196d39 mov dword ptr [ebp - 0x3028], 0x121be308 */
  w32((uint32_t)(EBP + -0x3028), (0x121be308u));
  /* 12196d43 jmp 0x12196d4f */
  goto L_12196d4f;
L_12196d45:;
  /* 12196d45 mov dword ptr [ebp - 0x3028], 0x121be2f4 */
  w32((uint32_t)(EBP + -0x3028), (0x121be2f4u));
L_12196d4f:;
  /* 12196d4f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12196d55 push ecx */
  push32((uint32_t)(ECX));
  /* 12196d56 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12196d5c push edx */
  push32((uint32_t)(EDX));
  /* 12196d5d call 0x1219aac0 */
  push32(0x12196d62u); f_1219aac0();
  /* 12196d62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12196d65:;
  /* 12196d65 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12196d6b push eax */
  push32((uint32_t)(EAX));
  /* 12196d6c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12196d72 push ecx */
  push32((uint32_t)(ECX));
  /* 12196d73 call 0x1219aad0 */
  push32(0x12196d78u); f_1219aad0();
  /* 12196d78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196d7b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196d7f jne 0x12196dba */
  if (!C.zf) goto L_12196dba;
  /* 12196d81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196d84 mov eax, dword ptr [edx*4 + 0x121c1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c1a38)));
  /* 12196d8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12196d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196d90 je 0x12196da6 */
  if (C.zf) goto L_12196da6;
  /* 12196d92 push 0x121be2f0 */
  push32((uint32_t)(0x121be2f0u));
  /* 12196d97 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12196d9d push ecx */
  push32((uint32_t)(ECX));
  /* 12196d9e call 0x1219aad0 */
  push32(0x12196da3u); f_1219aad0();
  /* 12196da3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12196da6:;
  /* 12196da6 push 0x121be2ec */
  push32((uint32_t)(0x121be2ecu));
  /* 12196dab lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12196db1 push edx */
  push32((uint32_t)(EDX));
  /* 12196db2 call 0x1219aad0 */
  push32(0x12196db7u); f_1219aad0();
  /* 12196db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12196dba:;
  /* 12196dba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196dbe je 0x12196e02 */
  if (C.zf) goto L_12196e02;
  /* 12196dc0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12196dc6 push eax */
  push32((uint32_t)(EAX));
  /* 12196dc7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12196dca push ecx */
  push32((uint32_t)(ECX));
  /* 12196dcb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12196dce push edx */
  push32((uint32_t)(EDX));
  /* 12196dcf push 0x121be2e0 */
  push32((uint32_t)(0x121be2e0u));
  /* 12196dd4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12196dd9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12196ddf push eax */
  push32((uint32_t)(EAX));
  /* 12196de0 call 0x1219a9c0 */
  push32(0x12196de5u); f_1219a9c0();
  /* 12196de5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196dea jge 0x12196e00 */
  if ((C.sf==C.of)) goto L_12196e00;
  /* 12196dec push 0x121be31c */
  push32((uint32_t)(0x121be31cu));
  /* 12196df1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12196df7 push ecx */
  push32((uint32_t)(ECX));
  /* 12196df8 call 0x1219aac0 */
  push32(0x12196dfdu); f_1219aac0();
  /* 12196dfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12196e00:;
  /* 12196e00 jmp 0x12196e18 */
  goto L_12196e18;
L_12196e02:;
  /* 12196e02 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12196e08 push edx */
  push32((uint32_t)(EDX));
  /* 12196e09 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12196e0f push eax */
  push32((uint32_t)(EAX));
  /* 12196e10 call 0x1219aac0 */
  push32(0x12196e15u); f_1219aac0();
  /* 12196e15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12196e18:;
  /* 12196e18 cmp dword ptr [0x121c5240], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c5240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196e1f je 0x12196e5c */
  if (C.zf) goto L_12196e5c;
  /* 12196e21 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12196e27 push ecx */
  push32((uint32_t)(ECX));
  /* 12196e28 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12196e2e push edx */
  push32((uint32_t)(EDX));
  /* 12196e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196e32 push eax */
  push32((uint32_t)(EAX));
  /* 12196e33 call dword ptr [0x121c5240] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c5240))), 0x12196e39u);
  /* 12196e39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196e3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196e3e je 0x12196e5c */
  if (C.zf) goto L_12196e5c;
  /* 12196e40 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196e44 jne 0x12196e51 */
  if (!C.zf) goto L_12196e51;
  /* 12196e46 push 0x121c1a34 */
  push32((uint32_t)(0x121c1a34u));
  /* 12196e4b call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x12196e51u);
L_12196e51:;
  /* 12196e51 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12196e57 jmp 0x12196f5b */
  goto L_12196f5b;
L_12196e5c:;
  /* 12196e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196e5f mov edx, dword ptr [ecx*4 + 0x121c1a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c1a38)));
  /* 12196e66 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12196e69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12196e6b je 0x12196eab */
  if (C.zf) goto L_12196eab;
  /* 12196e6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196e70 cmp dword ptr [eax*4 + 0x121c1a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x121c1a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196e78 je 0x12196eab */
  if (C.zf) goto L_12196eab;
  /* 12196e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12196e7c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12196e82 push ecx */
  push32((uint32_t)(ECX));
  /* 12196e83 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12196e89 push edx */
  push32((uint32_t)(EDX));
  /* 12196e8a call 0x1219a940 */
  push32(0x12196e8fu); f_1219a940();
  /* 12196e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196e92 push eax */
  push32((uint32_t)(EAX));
  /* 12196e93 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12196e99 push eax */
  push32((uint32_t)(EAX));
  /* 12196e9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196e9d mov edx, dword ptr [ecx*4 + 0x121c1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c1a44)));
  /* 12196ea4 push edx */
  push32((uint32_t)(EDX));
  /* 12196ea5 call dword ptr [0x121c631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c631c))), 0x12196eabu);
L_12196eab:;
  /* 12196eab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196eae mov ecx, dword ptr [eax*4 + 0x121c1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x121c1a38)));
  /* 12196eb5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12196eb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12196eba je 0x12196ec9 */
  if (C.zf) goto L_12196ec9;
  /* 12196ebc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12196ec2 push edx */
  push32((uint32_t)(EDX));
  /* 12196ec3 call dword ptr [0x121c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6324))), 0x12196ec9u);
L_12196ec9:;
  /* 12196ec9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196ecc mov ecx, dword ptr [eax*4 + 0x121c1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x121c1a38)));
  /* 12196ed3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12196ed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12196ed8 je 0x12196f48 */
  if (C.zf) goto L_12196f48;
  /* 12196eda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196ede je 0x12196efd */
  if (C.zf) goto L_12196efd;
  /* 12196ee0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12196ee2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12196ee8 push edx */
  push32((uint32_t)(EDX));
  /* 12196ee9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12196eec push eax */
  push32((uint32_t)(EAX));
  /* 12196eed call 0x1219a650 */
  push32(0x12196ef2u); f_1219a650();
  /* 12196ef2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196ef5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12196efb jmp 0x12196f07 */
  goto L_12196f07;
L_12196efd:;
  /* 12196efd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12196f07:;
  /* 12196f07 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12196f0d push ecx */
  push32((uint32_t)(ECX));
  /* 12196f0e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12196f11 push edx */
  push32((uint32_t)(EDX));
  /* 12196f12 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12196f18 push eax */
  push32((uint32_t)(EAX));
  /* 12196f19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12196f1c push ecx */
  push32((uint32_t)(ECX));
  /* 12196f1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12196f20 push edx */
  push32((uint32_t)(EDX));
  /* 12196f21 call 0x12196f60 */
  push32(0x12196f26u); f_12196f60();
  /* 12196f26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196f29 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12196f2f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196f33 jne 0x12196f40 */
  if (!C.zf) goto L_12196f40;
  /* 12196f35 push 0x121c1a34 */
  push32((uint32_t)(0x121c1a34u));
  /* 12196f3a call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x12196f40u);
L_12196f40:;
  /* 12196f40 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12196f46 jmp 0x12196f5b */
  goto L_12196f5b;
L_12196f48:;
  /* 12196f48 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196f4c jne 0x12196f59 */
  if (!C.zf) goto L_12196f59;
  /* 12196f4e push 0x121c1a34 */
  push32((uint32_t)(0x121c1a34u));
  /* 12196f53 call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x12196f59u);
L_12196f59:;
  /* 12196f59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12196f5b:;
  /* 12196f5b pop edi */
  EDI = (pop32());
  /* 12196f5c mov esp, ebp */
  ESP = (EBP);
  /* 12196f5e pop ebp */
  EBP = (pop32());
  /* 12196f5f ret  */
  ESPCHK(0x12196bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f60 @ 0x12196f60 (780 bytes, 197 insns) */
void f_12196f60(void) {
  FTRACE(0x12196f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12196f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12196f61 mov ebp, esp */
  EBP = (ESP);
  /* 12196f63 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12196f68 call 0x1219acb0 */
  push32(0x12196f6du); f_1219acb0();
L_12196f6d:;
  /* 12196f6d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196f71 jne 0x12196f98 */
  if (!C.zf) goto L_12196f98;
  /* 12196f73 push 0x121be4d8 */
  push32((uint32_t)(0x121be4d8u));
  /* 12196f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12196f7a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12196f7f push 0x121be4cc */
  push32((uint32_t)(0x121be4ccu));
  /* 12196f84 push 2 */
  push32((uint32_t)(0x2u));
  /* 12196f86 call 0x12196bd0 */
  push32(0x12196f8bu); f_12196bd0();
  /* 12196f8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196f8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196f91 jne 0x12196f98 */
  if (!C.zf) goto L_12196f98;
  /* 12196f93 call 0x12196ac0 */
  push32(0x12196f98u); f_12196ac0();
L_12196f98:;
  /* 12196f98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12196f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196f9c jne 0x12196f6d */
  if (!C.zf) goto L_12196f6d;
  /* 12196f9e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12196fa3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12196fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 12196faa push 0 */
  push32((uint32_t)(0x0u));
  /* 12196fac call dword ptr [0x121c6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6334))), 0x12196fb2u);
  /* 12196fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12196fb4 jne 0x12196fca */
  if (!C.zf) goto L_12196fca;
  /* 12196fb6 push 0x121be4b4 */
  push32((uint32_t)(0x121be4b4u));
  /* 12196fbb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12196fc1 push edx */
  push32((uint32_t)(EDX));
  /* 12196fc2 call 0x1219aac0 */
  push32(0x12196fc7u); f_1219aac0();
  /* 12196fc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12196fca:;
  /* 12196fca lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12196fd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12196fd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12196fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12196fd7 call 0x1219a940 */
  push32(0x12196fdcu); f_1219a940();
  /* 12196fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196fdf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12196fe2 jbe 0x1219700d */
  if ((C.cf||C.zf)) goto L_1219700d;
  /* 12196fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12196fe7 push edx */
  push32((uint32_t)(EDX));
  /* 12196fe8 call 0x1219a940 */
  push32(0x12196fedu); f_1219a940();
  /* 12196fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12196ff0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12196ff3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12196ff7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12196ffa push 3 */
  push32((uint32_t)(0x3u));
  /* 12196ffc push 0x121be4b0 */
  push32((uint32_t)(0x121be4b0u));
  /* 12197001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197004 push eax */
  push32((uint32_t)(EAX));
  /* 12197005 call 0x1219b330 */
  push32(0x1219700au); f_1219b330();
  /* 1219700a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219700d:;
  /* 1219700d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12197010 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12197016 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219701d je 0x12197068 */
  if (C.zf) goto L_12197068;
  /* 1219701f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12197025 push edx */
  push32((uint32_t)(EDX));
  /* 12197026 call 0x1219a940 */
  push32(0x1219702bu); f_1219a940();
  /* 1219702b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219702e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197031 jbe 0x12197068 */
  if ((C.cf||C.zf)) goto L_12197068;
  /* 12197033 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12197039 push eax */
  push32((uint32_t)(EAX));
  /* 1219703a call 0x1219a940 */
  push32(0x1219703fu); f_1219a940();
  /* 1219703f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197042 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12197048 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1219704c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12197052 push 3 */
  push32((uint32_t)(0x3u));
  /* 12197054 push 0x121be4b0 */
  push32((uint32_t)(0x121be4b0u));
  /* 12197059 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1219705f push eax */
  push32((uint32_t)(EAX));
  /* 12197060 call 0x1219b330 */
  push32(0x12197065u); f_1219b330();
  /* 12197065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12197068:;
  /* 12197068 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219706c jne 0x1219707a */
  if (!C.zf) goto L_1219707a;
  /* 1219706e mov dword ptr [ebp - 0x1114], 0x121be43c */
  w32((uint32_t)(EBP + -0x1114), (0x121be43cu));
  /* 12197078 jmp 0x12197084 */
  goto L_12197084;
L_1219707a:;
  /* 1219707a mov dword ptr [ebp - 0x1114], 0x121be1dc */
  w32((uint32_t)(EBP + -0x1114), (0x121be1dcu));
L_12197084:;
  /* 12197084 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12197087 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1219708a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219708c je 0x12197099 */
  if (C.zf) goto L_12197099;
  /* 1219708e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12197091 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12197097 jmp 0x121970a3 */
  goto L_121970a3;
L_12197099:;
  /* 12197099 mov dword ptr [ebp - 0x1118], 0x121be1dc */
  w32((uint32_t)(EBP + -0x1118), (0x121be1dcu));
L_121970a3:;
  /* 121970a3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121970a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121970a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121970ab je 0x121970bf */
  if (C.zf) goto L_121970bf;
  /* 121970ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121970b1 jne 0x121970bf */
  if (!C.zf) goto L_121970bf;
  /* 121970b3 mov dword ptr [ebp - 0x111c], 0x121be42c */
  w32((uint32_t)(EBP + -0x111c), (0x121be42cu));
  /* 121970bd jmp 0x121970c9 */
  goto L_121970c9;
L_121970bf:;
  /* 121970bf mov dword ptr [ebp - 0x111c], 0x121be1dc */
  w32((uint32_t)(EBP + -0x111c), (0x121be1dcu));
L_121970c9:;
  /* 121970c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121970cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121970cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121970d1 je 0x121970df */
  if (C.zf) goto L_121970df;
  /* 121970d3 mov dword ptr [ebp - 0x1120], 0x121be428 */
  w32((uint32_t)(EBP + -0x1120), (0x121be428u));
  /* 121970dd jmp 0x121970e9 */
  goto L_121970e9;
L_121970df:;
  /* 121970df mov dword ptr [ebp - 0x1120], 0x121be1dc */
  w32((uint32_t)(EBP + -0x1120), (0x121be1dcu));
L_121970e9:;
  /* 121970e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121970ed je 0x121970fa */
  if (C.zf) goto L_121970fa;
  /* 121970ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121970f2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 121970f8 jmp 0x12197104 */
  goto L_12197104;
L_121970fa:;
  /* 121970fa mov dword ptr [ebp - 0x1124], 0x121be1dc */
  w32((uint32_t)(EBP + -0x1124), (0x121be1dcu));
L_12197104:;
  /* 12197104 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197108 je 0x12197116 */
  if (C.zf) goto L_12197116;
  /* 1219710a mov dword ptr [ebp - 0x1128], 0x121be420 */
  w32((uint32_t)(EBP + -0x1128), (0x121be420u));
  /* 12197114 jmp 0x12197120 */
  goto L_12197120;
L_12197116:;
  /* 12197116 mov dword ptr [ebp - 0x1128], 0x121be1dc */
  w32((uint32_t)(EBP + -0x1128), (0x121be1dcu));
L_12197120:;
  /* 12197120 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197124 je 0x12197131 */
  if (C.zf) goto L_12197131;
  /* 12197126 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197129 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1219712f jmp 0x1219713b */
  goto L_1219713b;
L_12197131:;
  /* 12197131 mov dword ptr [ebp - 0x112c], 0x121be1dc */
  w32((uint32_t)(EBP + -0x112c), (0x121be1dcu));
L_1219713b:;
  /* 1219713b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219713f je 0x1219714d */
  if (C.zf) goto L_1219714d;
  /* 12197141 mov dword ptr [ebp - 0x1130], 0x121be418 */
  w32((uint32_t)(EBP + -0x1130), (0x121be418u));
  /* 1219714b jmp 0x12197157 */
  goto L_12197157;
L_1219714d:;
  /* 1219714d mov dword ptr [ebp - 0x1130], 0x121be1dc */
  w32((uint32_t)(EBP + -0x1130), (0x121be1dcu));
L_12197157:;
  /* 12197157 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219715e je 0x1219716e */
  if (C.zf) goto L_1219716e;
  /* 12197160 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12197166 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1219716c jmp 0x12197178 */
  goto L_12197178;
L_1219716e:;
  /* 1219716e mov dword ptr [ebp - 0x1134], 0x121be1dc */
  w32((uint32_t)(EBP + -0x1134), (0x121be1dcu));
L_12197178:;
  /* 12197178 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219717f je 0x1219718d */
  if (C.zf) goto L_1219718d;
  /* 12197181 mov dword ptr [ebp - 0x1138], 0x121be40c */
  w32((uint32_t)(EBP + -0x1138), (0x121be40cu));
  /* 1219718b jmp 0x12197197 */
  goto L_12197197;
L_1219718d:;
  /* 1219718d mov dword ptr [ebp - 0x1138], 0x121be1dc */
  w32((uint32_t)(EBP + -0x1138), (0x121be1dcu));
L_12197197:;
  /* 12197197 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1219719d push edx */
  push32((uint32_t)(EDX));
  /* 1219719e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 121971a4 push eax */
  push32((uint32_t)(EAX));
  /* 121971a5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 121971ab push ecx */
  push32((uint32_t)(ECX));
  /* 121971ac mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 121971b2 push edx */
  push32((uint32_t)(EDX));
  /* 121971b3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 121971b9 push eax */
  push32((uint32_t)(EAX));
  /* 121971ba mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 121971c0 push ecx */
  push32((uint32_t)(ECX));
  /* 121971c1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 121971c7 push edx */
  push32((uint32_t)(EDX));
  /* 121971c8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 121971ce push eax */
  push32((uint32_t)(EAX));
  /* 121971cf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 121971d5 push ecx */
  push32((uint32_t)(ECX));
  /* 121971d6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 121971dc push edx */
  push32((uint32_t)(EDX));
  /* 121971dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121971e0 push eax */
  push32((uint32_t)(EAX));
  /* 121971e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121971e4 mov edx, dword ptr [ecx*4 + 0x121c1a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c1a50)));
  /* 121971eb push edx */
  push32((uint32_t)(EDX));
  /* 121971ec push 0x121be3b8 */
  push32((uint32_t)(0x121be3b8u));
  /* 121971f1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 121971f6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 121971fc push eax */
  push32((uint32_t)(EAX));
  /* 121971fd call 0x1219a9c0 */
  push32(0x12197202u); f_1219a9c0();
  /* 12197202 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12197207 jge 0x1219721d */
  if ((C.sf==C.of)) goto L_1219721d;
  /* 12197209 push 0x121be31c */
  push32((uint32_t)(0x121be31cu));
  /* 1219720e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12197214 push ecx */
  push32((uint32_t)(ECX));
  /* 12197215 call 0x1219aac0 */
  push32(0x1219721au); f_1219aac0();
  /* 1219721a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219721d:;
  /* 1219721d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12197222 push 0x121be394 */
  push32((uint32_t)(0x121be394u));
  /* 12197227 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1219722d push edx */
  push32((uint32_t)(EDX));
  /* 1219722e call 0x1219b270 */
  push32(0x12197233u); f_1219b270();
  /* 12197233 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197236 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1219723c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197243 jne 0x12197256 */
  if (!C.zf) goto L_12197256;
  /* 12197245 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12197247 call 0x1219afb0 */
  push32(0x1219724cu); f_1219afb0();
  /* 1219724c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219724f push 3 */
  push32((uint32_t)(0x3u));
  /* 12197251 call 0x121972d0 */
  push32(0x12197256u); f_121972d0();
L_12197256:;
  /* 12197256 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219725d jne 0x12197266 */
  if (!C.zf) goto L_12197266;
  /* 1219725f mov eax, 1 */
  EAX = (0x1u);
  /* 12197264 jmp 0x12197268 */
  goto L_12197268;
L_12197266:;
  /* 12197266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12197268:;
  /* 12197268 mov esp, ebp */
  ESP = (EBP);
  /* 1219726a pop ebp */
  EBP = (pop32());
  /* 1219726b ret  */
  ESPCHK(0x12196f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x12197270 (56 bytes, 15 insns) */
void f_12197270(void) {
  FTRACE(0x12197270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197270 push ebp */
  push32((uint32_t)(EBP));
  /* 12197271 mov ebp, esp */
  EBP = (ESP);
  /* 12197273 cmp dword ptr [0x121c523c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c523c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219727a je 0x12197282 */
  if (C.zf) goto L_12197282;
  /* 1219727c call dword ptr [0x121c523c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c523c))), 0x12197282u);
L_12197282:;
  /* 12197282 push 0x121c1418 */
  push32((uint32_t)(0x121c1418u));
  /* 12197287 push 0x121c1208 */
  push32((uint32_t)(0x121c1208u));
  /* 1219728c call 0x12197440 */
  push32(0x12197291u); f_12197440();
  /* 12197291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197294 push 0x121c1104 */
  push32((uint32_t)(0x121c1104u));
  /* 12197299 push 0x121c1000 */
  push32((uint32_t)(0x121c1000u));
  /* 1219729e call 0x12197440 */
  push32(0x121972a3u); f_12197440();
  /* 121972a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121972a6 pop ebp */
  EBP = (pop32());
  /* 121972a7 ret  */
  ESPCHK(0x12197270u, _esp0);
  ESP += 4; return;
}

/* FUN_100072b0 @ 0x121972b0 (21 bytes, 10 insns) */
void f_121972b0(void) {
  FTRACE(0x121972b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121972b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121972b1 mov ebp, esp */
  EBP = (ESP);
  /* 121972b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121972b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121972b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121972ba push eax */
  push32((uint32_t)(EAX));
  /* 121972bb call 0x12197330 */
  push32(0x121972c0u); f_12197330();
  /* 121972c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121972c3 pop ebp */
  EBP = (pop32());
  /* 121972c4 ret  */
  ESPCHK(0x121972b0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x121972d0 (21 bytes, 10 insns) */
void f_121972d0(void) {
  FTRACE(0x121972d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121972d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121972d1 mov ebp, esp */
  EBP = (ESP);
  /* 121972d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121972d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 121972d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121972da push eax */
  push32((uint32_t)(EAX));
  /* 121972db call 0x12197330 */
  push32(0x121972e0u); f_12197330();
  /* 121972e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121972e3 pop ebp */
  EBP = (pop32());
  /* 121972e4 ret  */
  ESPCHK(0x121972d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x121972f0 (19 bytes, 9 insns) */
void f_121972f0(void) {
  FTRACE(0x121972f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121972f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121972f1 mov ebp, esp */
  EBP = (ESP);
  /* 121972f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121972f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121972f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121972f9 call 0x12197330 */
  push32(0x121972feu); f_12197330();
  /* 121972fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197301 pop ebp */
  EBP = (pop32());
  /* 12197302 ret  */
  ESPCHK(0x121972f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x12197310 (19 bytes, 9 insns) */
void f_12197310(void) {
  FTRACE(0x12197310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197310 push ebp */
  push32((uint32_t)(EBP));
  /* 12197311 mov ebp, esp */
  EBP = (ESP);
  /* 12197313 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197315 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197317 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197319 call 0x12197330 */
  push32(0x1219731eu); f_12197330();
  /* 1219731e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197321 pop ebp */
  EBP = (pop32());
  /* 12197322 ret  */
  ESPCHK(0x12197310u, _esp0);
  ESP += 4; return;
}

/* FUN_10007330 @ 0x12197330 (227 bytes, 61 insns) */
void f_12197330(void) {
  FTRACE(0x12197330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197330 push ebp */
  push32((uint32_t)(EBP));
  /* 12197331 mov ebp, esp */
  EBP = (ESP);
  /* 12197333 push ecx */
  push32((uint32_t)(ECX));
  /* 12197334 call 0x12197420 */
  push32(0x12197339u); f_12197420();
  /* 12197339 cmp dword ptr [0x121c373c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c373c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197340 jne 0x12197353 */
  if (!C.zf) goto L_12197353;
  /* 12197342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197345 push eax */
  push32((uint32_t)(EAX));
  /* 12197346 call dword ptr [0x121c6340] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6340))), 0x1219734cu);
  /* 1219734c push eax */
  push32((uint32_t)(EAX));
  /* 1219734d call dword ptr [0x121c633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c633c))), 0x12197353u);
L_12197353:;
  /* 12197353 mov dword ptr [0x121c3738], 1 */
  w32((uint32_t)(0x121c3738), (0x1u));
  /* 1219735d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12197360 mov byte ptr [0x121c3734], cl */
  w8((uint32_t)(0x121c3734), (CL));
  /* 12197366 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219736a jne 0x121973b3 */
  if (!C.zf) goto L_121973b3;
  /* 1219736c cmp dword ptr [0x121c5238], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c5238))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197373 je 0x121973a1 */
  if (C.zf) goto L_121973a1;
  /* 12197375 mov edx, dword ptr [0x121c5234] */
  EDX = (r32((uint32_t)(0x121c5234)));
  /* 1219737b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1219737e:;
  /* 1219737e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197381 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12197384 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12197387 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219738a cmp ecx, dword ptr [0x121c5238] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c5238))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197390 jb 0x121973a1 */
  if (C.cf) goto L_121973a1;
  /* 12197392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197395 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197398 je 0x1219739f */
  if (C.zf) goto L_1219739f;
  /* 1219739a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219739d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1219739fu);
L_1219739f:;
  /* 1219739f jmp 0x1219737e */
  goto L_1219737e;
L_121973a1:;
  /* 121973a1 push 0x121c1724 */
  push32((uint32_t)(0x121c1724u));
  /* 121973a6 push 0x121c151c */
  push32((uint32_t)(0x121c151cu));
  /* 121973ab call 0x12197440 */
  push32(0x121973b0u); f_12197440();
  /* 121973b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121973b3:;
  /* 121973b3 push 0x121c192c */
  push32((uint32_t)(0x121c192cu));
  /* 121973b8 push 0x121c1828 */
  push32((uint32_t)(0x121c1828u));
  /* 121973bd call 0x12197440 */
  push32(0x121973c2u); f_12197440();
  /* 121973c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121973c5 cmp dword ptr [0x121c3740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121973cc jne 0x121973ee */
  if (!C.zf) goto L_121973ee;
  /* 121973ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121973d0 call 0x12199020 */
  push32(0x121973d5u); f_12199020();
  /* 121973d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121973d8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 121973db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121973dd je 0x121973ee */
  if (C.zf) goto L_121973ee;
  /* 121973df mov dword ptr [0x121c3740], 1 */
  w32((uint32_t)(0x121c3740), (0x1u));
  /* 121973e9 call 0x12199930 */
  push32(0x121973eeu); f_12199930();
L_121973ee:;
  /* 121973ee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121973f2 je 0x121973fb */
  if (C.zf) goto L_121973fb;
  /* 121973f4 call 0x12197430 */
  push32(0x121973f9u); f_12197430();
  /* 121973f9 jmp 0x1219740f */
  goto L_1219740f;
L_121973fb:;
  /* 121973fb mov dword ptr [0x121c373c], 1 */
  w32((uint32_t)(0x121c373c), (0x1u));
  /* 12197405 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197408 push ecx */
  push32((uint32_t)(ECX));
  /* 12197409 call dword ptr [0x121c6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6338))), 0x1219740fu);
L_1219740f:;
  /* 1219740f mov esp, ebp */
  ESP = (EBP);
  /* 12197411 pop ebp */
  EBP = (pop32());
  /* 12197412 ret  */
  ESPCHK(0x12197330u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x12197420 (15 bytes, 7 insns) */
void f_12197420(void) {
  FTRACE(0x12197420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197420 push ebp */
  push32((uint32_t)(EBP));
  /* 12197421 mov ebp, esp */
  EBP = (ESP);
  /* 12197423 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12197425 call 0x1219b510 */
  push32(0x1219742au); f_1219b510();
  /* 1219742a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219742d pop ebp */
  EBP = (pop32());
  /* 1219742e ret  */
  ESPCHK(0x12197420u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x12197430 (15 bytes, 7 insns) */
void f_12197430(void) {
  FTRACE(0x12197430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197430 push ebp */
  push32((uint32_t)(EBP));
  /* 12197431 mov ebp, esp */
  EBP = (ESP);
  /* 12197433 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12197435 call 0x1219b5b0 */
  push32(0x1219743au); f_1219b5b0();
  /* 1219743a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219743d pop ebp */
  EBP = (pop32());
  /* 1219743e ret  */
  ESPCHK(0x12197430u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12197440 (37 bytes, 16 insns) */
void f_12197440(void) {
  FTRACE(0x12197440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197440 push ebp */
  push32((uint32_t)(EBP));
  /* 12197441 mov ebp, esp */
  EBP = (ESP);
L_12197443:;
  /* 12197443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197446 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197449 jae 0x12197463 */
  if (!C.cf) goto L_12197463;
  /* 1219744b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219744e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197451 je 0x12197458 */
  if (C.zf) goto L_12197458;
  /* 12197453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197456 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12197458u);
L_12197458:;
  /* 12197458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219745b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219745e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12197461 jmp 0x12197443 */
  goto L_12197443;
L_12197463:;
  /* 12197463 pop ebp */
  EBP = (pop32());
  /* 12197464 ret  */
  ESPCHK(0x12197440u, _esp0);
  ESP += 4; return;
}

/* FUN_10007470 @ 0x12197470 (130 bytes, 42 insns) */
void f_12197470(void) {
  FTRACE(0x12197470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197470 push ebp */
  push32((uint32_t)(EBP));
  /* 12197471 mov ebp, esp */
  EBP = (ESP);
  /* 12197473 push ecx */
  push32((uint32_t)(ECX));
  /* 12197474 call 0x1219b430 */
  push32(0x12197479u); f_1219b430();
  /* 12197479 call dword ptr [0x121c634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c634c))), 0x1219747fu);
  /* 1219747f mov dword ptr [0x121c1a5c], eax */
  w32((uint32_t)(0x121c1a5c), (EAX));
  /* 12197484 cmp dword ptr [0x121c1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219748b jne 0x12197491 */
  if (!C.zf) goto L_12197491;
  /* 1219748d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219748f jmp 0x121974ee */
  goto L_121974ee;
L_12197491:;
  /* 12197491 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12197493 push 0x121be4f0 */
  push32((uint32_t)(0x121be4f0u));
  /* 12197498 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219749a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1219749c push 1 */
  push32((uint32_t)(0x1u));
  /* 1219749e call 0x12197f20 */
  push32(0x121974a3u); f_12197f20();
  /* 121974a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121974a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121974a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121974ad je 0x121974c4 */
  if (C.zf) goto L_121974c4;
  /* 121974af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121974b2 push eax */
  push32((uint32_t)(EAX));
  /* 121974b3 mov ecx, dword ptr [0x121c1a5c] */
  ECX = (r32((uint32_t)(0x121c1a5c)));
  /* 121974b9 push ecx */
  push32((uint32_t)(ECX));
  /* 121974ba call dword ptr [0x121c6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6348))), 0x121974c0u);
  /* 121974c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121974c2 jne 0x121974c8 */
  if (!C.zf) goto L_121974c8;
L_121974c4:;
  /* 121974c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121974c6 jmp 0x121974ee */
  goto L_121974ee;
L_121974c8:;
  /* 121974c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121974cb push edx */
  push32((uint32_t)(EDX));
  /* 121974cc call 0x12197530 */
  push32(0x121974d1u); f_12197530();
  /* 121974d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121974d4 call dword ptr [0x121c6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6344))), 0x121974dau);
  /* 121974da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121974dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121974df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121974e2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 121974e9 mov eax, 1 */
  EAX = (0x1u);
L_121974ee:;
  /* 121974ee mov esp, ebp */
  ESP = (EBP);
  /* 121974f0 pop ebp */
  EBP = (pop32());
  /* 121974f1 ret  */
  ESPCHK(0x12197470u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x12197500 (41 bytes, 11 insns) */
void f_12197500(void) {
  FTRACE(0x12197500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197500 push ebp */
  push32((uint32_t)(EBP));
  /* 12197501 mov ebp, esp */
  EBP = (ESP);
  /* 12197503 call 0x1219b470 */
  push32(0x12197508u); f_1219b470();
  /* 12197508 cmp dword ptr [0x121c1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219750f je 0x12197527 */
  if (C.zf) goto L_12197527;
  /* 12197511 mov eax, dword ptr [0x121c1a5c] */
  EAX = (r32((uint32_t)(0x121c1a5c)));
  /* 12197516 push eax */
  push32((uint32_t)(EAX));
  /* 12197517 call dword ptr [0x121c6350] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6350))), 0x1219751du);
  /* 1219751d mov dword ptr [0x121c1a5c], 0xffffffff */
  w32((uint32_t)(0x121c1a5c), (0xffffffffu));
L_12197527:;
  /* 12197527 pop ebp */
  EBP = (pop32());
  /* 12197528 ret  */
  ESPCHK(0x12197500u, _esp0);
  ESP += 4; return;
}

/* FUN_10007530 @ 0x12197530 (25 bytes, 8 insns) */
void f_12197530(void) {
  FTRACE(0x12197530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197530 push ebp */
  push32((uint32_t)(EBP));
  /* 12197531 mov ebp, esp */
  EBP = (ESP);
  /* 12197533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197536 mov dword ptr [eax + 0x50], 0x121c1c00 */
  w32((uint32_t)(EAX + 0x50), (0x121c1c00u));
  /* 1219753d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197540 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12197547 pop ebp */
  EBP = (pop32());
  /* 12197548 ret  */
  ESPCHK(0x12197530u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x12197550 (152 bytes, 48 insns) */
void f_12197550(void) {
  FTRACE(0x12197550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197550 push ebp */
  push32((uint32_t)(EBP));
  /* 12197551 mov ebp, esp */
  EBP = (ESP);
  /* 12197553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12197556 call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x1219755cu);
  /* 1219755c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219755f mov eax, dword ptr [0x121c1a5c] */
  EAX = (r32((uint32_t)(0x121c1a5c)));
  /* 12197564 push eax */
  push32((uint32_t)(EAX));
  /* 12197565 call dword ptr [0x121c6288] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6288))), 0x1219756bu);
  /* 1219756b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219756e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197572 jne 0x121975d7 */
  if (!C.zf) goto L_121975d7;
  /* 12197574 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12197579 push 0x121be4f0 */
  push32((uint32_t)(0x121be4f0u));
  /* 1219757e push 2 */
  push32((uint32_t)(0x2u));
  /* 12197580 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12197582 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197584 call 0x12197f20 */
  push32(0x12197589u); f_12197f20();
  /* 12197589 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219758c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219758f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197593 je 0x121975cd */
  if (C.zf) goto L_121975cd;
  /* 12197595 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197598 push ecx */
  push32((uint32_t)(ECX));
  /* 12197599 mov edx, dword ptr [0x121c1a5c] */
  EDX = (r32((uint32_t)(0x121c1a5c)));
  /* 1219759f push edx */
  push32((uint32_t)(EDX));
  /* 121975a0 call dword ptr [0x121c6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6348))), 0x121975a6u);
  /* 121975a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121975a8 je 0x121975cd */
  if (C.zf) goto L_121975cd;
  /* 121975aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121975ad push eax */
  push32((uint32_t)(EAX));
  /* 121975ae call 0x12197530 */
  push32(0x121975b3u); f_12197530();
  /* 121975b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121975b6 call dword ptr [0x121c6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6344))), 0x121975bcu);
  /* 121975bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121975bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121975c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121975c4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 121975cb jmp 0x121975d7 */
  goto L_121975d7;
L_121975cd:;
  /* 121975cd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 121975cf call 0x12196a80 */
  push32(0x121975d4u); f_12196a80();
  /* 121975d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121975d7:;
  /* 121975d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121975da push eax */
  push32((uint32_t)(EAX));
  /* 121975db call dword ptr [0x121c6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6354))), 0x121975e1u);
  /* 121975e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121975e4 mov esp, ebp */
  ESP = (EBP);
  /* 121975e6 pop ebp */
  EBP = (pop32());
  /* 121975e7 ret  */
  ESPCHK(0x12197550u, _esp0);
  ESP += 4; return;
}

/* FUN_100075f0 @ 0x121975f0 (263 bytes, 86 insns) */
void f_121975f0(void) {
  FTRACE(0x121975f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121975f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121975f1 mov ebp, esp */
  EBP = (ESP);
  /* 121975f3 cmp dword ptr [0x121c1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121975fa je 0x121976f5 */
  if (C.zf) goto L_121976f5;
  /* 12197600 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197604 jne 0x12197615 */
  if (!C.zf) goto L_12197615;
  /* 12197606 mov eax, dword ptr [0x121c1a5c] */
  EAX = (r32((uint32_t)(0x121c1a5c)));
  /* 1219760b push eax */
  push32((uint32_t)(EAX));
  /* 1219760c call dword ptr [0x121c6288] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6288))), 0x12197612u);
  /* 12197612 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12197615:;
  /* 12197615 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197619 je 0x121976e6 */
  if (C.zf) goto L_121976e6;
  /* 1219761f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197622 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197626 je 0x12197639 */
  if (C.zf) goto L_12197639;
  /* 12197628 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219762a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219762d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12197630 push eax */
  push32((uint32_t)(EAX));
  /* 12197631 call 0x121985a0 */
  push32(0x12197636u); f_121985a0();
  /* 12197636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12197639:;
  /* 12197639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219763c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197640 je 0x12197653 */
  if (C.zf) goto L_12197653;
  /* 12197642 push 2 */
  push32((uint32_t)(0x2u));
  /* 12197644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197647 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1219764a push eax */
  push32((uint32_t)(EAX));
  /* 1219764b call 0x121985a0 */
  push32(0x12197650u); f_121985a0();
  /* 12197650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12197653:;
  /* 12197653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197656 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219765a je 0x1219766d */
  if (C.zf) goto L_1219766d;
  /* 1219765c push 2 */
  push32((uint32_t)(0x2u));
  /* 1219765e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197661 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12197664 push eax */
  push32((uint32_t)(EAX));
  /* 12197665 call 0x121985a0 */
  push32(0x1219766au); f_121985a0();
  /* 1219766a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219766d:;
  /* 1219766d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197670 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197674 je 0x12197687 */
  if (C.zf) goto L_12197687;
  /* 12197676 push 2 */
  push32((uint32_t)(0x2u));
  /* 12197678 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219767b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1219767e push eax */
  push32((uint32_t)(EAX));
  /* 1219767f call 0x121985a0 */
  push32(0x12197684u); f_121985a0();
  /* 12197684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12197687:;
  /* 12197687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219768a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219768e je 0x121976a1 */
  if (C.zf) goto L_121976a1;
  /* 12197690 push 2 */
  push32((uint32_t)(0x2u));
  /* 12197692 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197695 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12197698 push eax */
  push32((uint32_t)(EAX));
  /* 12197699 call 0x121985a0 */
  push32(0x1219769eu); f_121985a0();
  /* 1219769e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121976a1:;
  /* 121976a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121976a4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121976a8 je 0x121976bb */
  if (C.zf) goto L_121976bb;
  /* 121976aa push 2 */
  push32((uint32_t)(0x2u));
  /* 121976ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121976af mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 121976b2 push eax */
  push32((uint32_t)(EAX));
  /* 121976b3 call 0x121985a0 */
  push32(0x121976b8u); f_121985a0();
  /* 121976b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121976bb:;
  /* 121976bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121976be cmp dword ptr [ecx + 0x50], 0x121c1c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x121c1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121976c5 je 0x121976d8 */
  if (C.zf) goto L_121976d8;
  /* 121976c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 121976c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121976cc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 121976cf push eax */
  push32((uint32_t)(EAX));
  /* 121976d0 call 0x121985a0 */
  push32(0x121976d5u); f_121985a0();
  /* 121976d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121976d8:;
  /* 121976d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121976da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121976dd push ecx */
  push32((uint32_t)(ECX));
  /* 121976de call 0x121985a0 */
  push32(0x121976e3u); f_121985a0();
  /* 121976e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121976e6:;
  /* 121976e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121976e8 mov edx, dword ptr [0x121c1a5c] */
  EDX = (r32((uint32_t)(0x121c1a5c)));
  /* 121976ee push edx */
  push32((uint32_t)(EDX));
  /* 121976ef call dword ptr [0x121c6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6348))), 0x121976f5u);
L_121976f5:;
  /* 121976f5 pop ebp */
  EBP = (pop32());
  /* 121976f6 ret  */
  ESPCHK(0x121975f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007700 @ 0x12197700 (11 bytes, 5 insns) */
void f_12197700(void) {
  FTRACE(0x12197700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197700 push ebp */
  push32((uint32_t)(EBP));
  /* 12197701 mov ebp, esp */
  EBP = (ESP);
  /* 12197703 call dword ptr [0x121c6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6344))), 0x12197709u);
  /* 12197709 pop ebp */
  EBP = (pop32());
  /* 1219770a ret  */
  ESPCHK(0x12197700u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x12197710 (11 bytes, 5 insns) */
void f_12197710(void) {
  FTRACE(0x12197710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197710 push ebp */
  push32((uint32_t)(EBP));
  /* 12197711 mov ebp, esp */
  EBP = (ESP);
  /* 12197713 call dword ptr [0x121c6360] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6360))), 0x12197719u);
  /* 12197719 pop ebp */
  EBP = (pop32());
  /* 1219771a ret  */
  ESPCHK(0x12197710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007720 @ 0x12197720 (804 bytes, 236 insns) */
void f_12197720(void) {
  FTRACE(0x12197720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197720 push ebp */
  push32((uint32_t)(EBP));
  /* 12197721 mov ebp, esp */
  EBP = (ESP);
  /* 12197723 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12197726 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1219772b push 0x121be4fc */
  push32((uint32_t)(0x121be4fcu));
  /* 12197730 push 2 */
  push32((uint32_t)(0x2u));
  /* 12197732 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12197737 call 0x12197b10 */
  push32(0x1219773cu); f_12197b10();
  /* 1219773c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219773f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12197742 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197746 jne 0x12197752 */
  if (!C.zf) goto L_12197752;
  /* 12197748 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1219774a call 0x12196a80 */
  push32(0x1219774fu); f_12196a80();
  /* 1219774f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12197752:;
  /* 12197752 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197755 mov dword ptr [0x121c50e0], eax */
  w32((uint32_t)(0x121c50e0), (EAX));
  /* 1219775a mov dword ptr [0x121c521c], 0x20 */
  w32((uint32_t)(0x121c521c), (0x20u));
  /* 12197764 jmp 0x1219776f */
  goto L_1219776f;
L_12197766:;
  /* 12197766 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197769 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219776c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1219776f:;
  /* 1219776f mov edx, dword ptr [0x121c50e0] */
  EDX = (r32((uint32_t)(0x121c50e0)));
  /* 12197775 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219777b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219777e jae 0x121977a3 */
  if (!C.cf) goto L_121977a3;
  /* 12197780 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197783 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12197787 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1219778a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12197790 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197793 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12197797 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1219779a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 121977a1 jmp 0x12197766 */
  goto L_12197766;
L_121977a3:;
  /* 121977a3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 121977a6 push ecx */
  push32((uint32_t)(ECX));
  /* 121977a7 call dword ptr [0x121c636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c636c))), 0x121977adu);
  /* 121977ad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 121977b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121977b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121977b8 je 0x12197945 */
  if (C.zf) goto L_12197945;
  /* 121977be cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121977c2 je 0x12197945 */
  if (C.zf) goto L_12197945;
  /* 121977c8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121977cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121977cd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 121977d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121977d3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121977d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121977d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121977dc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121977df mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 121977e2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121977e9 jge 0x121977f3 */
  if ((C.sf==C.of)) goto L_121977f3;
  /* 121977eb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 121977ee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 121977f1 jmp 0x121977fa */
  goto L_121977fa;
L_121977f3:;
  /* 121977f3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_121977fa:;
  /* 121977fa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 121977fd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12197800 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12197807 jmp 0x12197812 */
  goto L_12197812;
L_12197809:;
  /* 12197809 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1219780c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219780f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12197812:;
  /* 12197812 mov ecx, dword ptr [0x121c521c] */
  ECX = (r32((uint32_t)(0x121c521c)));
  /* 12197818 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219781b jge 0x121978b2 */
  if ((C.sf==C.of)) goto L_121978b2;
  /* 12197821 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12197826 push 0x121be4fc */
  push32((uint32_t)(0x121be4fcu));
  /* 1219782b push 2 */
  push32((uint32_t)(0x2u));
  /* 1219782d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12197832 call 0x12197b10 */
  push32(0x12197837u); f_12197b10();
  /* 12197837 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219783a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1219783d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197841 jne 0x1219784e */
  if (!C.zf) goto L_1219784e;
  /* 12197843 mov edx, dword ptr [0x121c521c] */
  EDX = (r32((uint32_t)(0x121c521c)));
  /* 12197849 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1219784c jmp 0x121978b2 */
  goto L_121978b2;
L_1219784e:;
  /* 1219784e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12197851 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197854 mov dword ptr [eax*4 + 0x121c50e0], ecx */
  w32((uint32_t)(EAX*4 + 0x121c50e0), (ECX));
  /* 1219785b mov edx, dword ptr [0x121c521c] */
  EDX = (r32((uint32_t)(0x121c521c)));
  /* 12197861 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197864 mov dword ptr [0x121c521c], edx */
  w32((uint32_t)(0x121c521c), (EDX));
  /* 1219786a jmp 0x12197875 */
  goto L_12197875;
L_1219786c:;
  /* 1219786c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1219786f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197872 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12197875:;
  /* 12197875 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12197878 mov edx, dword ptr [ecx*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 1219787f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197885 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197888 jae 0x121978ad */
  if (!C.cf) goto L_121978ad;
  /* 1219788a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1219788d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12197891 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197894 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1219789a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1219789d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 121978a1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121978a4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 121978ab jmp 0x1219786c */
  goto L_1219786c;
L_121978ad:;
  /* 121978ad jmp 0x12197809 */
  goto L_12197809;
L_121978b2:;
  /* 121978b2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 121978b9 jmp 0x121978d6 */
  goto L_121978d6;
L_121978bb:;
  /* 121978bb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 121978be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121978c1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 121978c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121978c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121978ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121978cd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 121978d0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121978d3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_121978d6:;
  /* 121978d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 121978d9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121978dc jge 0x12197945 */
  if ((C.sf==C.of)) goto L_12197945;
  /* 121978de mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 121978e1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121978e4 je 0x12197940 */
  if (C.zf) goto L_12197940;
  /* 121978e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121978e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121978ec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121978ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121978f1 je 0x12197940 */
  if (C.zf) goto L_12197940;
  /* 121978f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121978f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121978f9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 121978fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121978fe jne 0x12197910 */
  if (!C.zf) goto L_12197910;
  /* 12197900 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12197903 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12197905 push edx */
  push32((uint32_t)(EDX));
  /* 12197906 call dword ptr [0x121c6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6368))), 0x1219790cu);
  /* 1219790c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219790e je 0x12197940 */
  if (C.zf) goto L_12197940;
L_12197910:;
  /* 12197910 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12197913 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12197916 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12197919 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1219791c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219791f mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 12197926 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197928 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1219792b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1219792e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12197931 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12197933 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12197935 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197938 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219793b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1219793d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12197940:;
  /* 12197940 jmp 0x121978bb */
  goto L_121978bb;
L_12197945:;
  /* 12197945 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1219794c jmp 0x12197957 */
  goto L_12197957;
L_1219794e:;
  /* 1219794e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12197951 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197954 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12197957:;
  /* 12197957 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219795b jge 0x12197a34 */
  if ((C.sf==C.of)) goto L_12197a34;
  /* 12197961 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12197964 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12197967 mov edx, dword ptr [0x121c50e0] */
  EDX = (r32((uint32_t)(0x121c50e0)));
  /* 1219796d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219796f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12197972 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197978 jne 0x12197a20 */
  if (!C.zf) goto L_12197a20;
  /* 1219797e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197981 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12197985 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197989 jne 0x12197994 */
  if (!C.zf) goto L_12197994;
  /* 1219798b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12197992 jmp 0x121979a4 */
  goto L_121979a4;
L_12197994:;
  /* 12197994 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12197997 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219799a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219799c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219799e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121979a1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_121979a4:;
  /* 121979a4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 121979a7 push eax */
  push32((uint32_t)(EAX));
  /* 121979a8 call dword ptr [0x121c6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6318))), 0x121979aeu);
  /* 121979ae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 121979b1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121979b5 je 0x12197a0f */
  if (C.zf) goto L_12197a0f;
  /* 121979b7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 121979ba push ecx */
  push32((uint32_t)(ECX));
  /* 121979bb call dword ptr [0x121c6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6368))), 0x121979c1u);
  /* 121979c1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 121979c4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121979c8 je 0x12197a0f */
  if (C.zf) goto L_12197a0f;
  /* 121979ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 121979cd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 121979d0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121979d2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 121979d5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121979db cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121979de jne 0x121979f0 */
  if (!C.zf) goto L_121979f0;
  /* 121979e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 121979e3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 121979e6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 121979e8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 121979eb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 121979ee jmp 0x12197a0d */
  goto L_12197a0d;
L_121979f0:;
  /* 121979f0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 121979f3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121979f9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121979fc jne 0x12197a0d */
  if (!C.zf) goto L_12197a0d;
  /* 121979fe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197a01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12197a04 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12197a07 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197a0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12197a0d:;
  /* 12197a0d jmp 0x12197a1e */
  goto L_12197a1e;
L_12197a0f:;
  /* 12197a0f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197a12 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12197a15 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12197a18 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197a1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12197a1e:;
  /* 12197a1e jmp 0x12197a2f */
  goto L_12197a2f;
L_12197a20:;
  /* 12197a20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197a23 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12197a26 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12197a29 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12197a2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12197a2f:;
  /* 12197a2f jmp 0x1219794e */
  goto L_1219794e;
L_12197a34:;
  /* 12197a34 mov eax, dword ptr [0x121c521c] */
  EAX = (r32((uint32_t)(0x121c521c)));
  /* 12197a39 push eax */
  push32((uint32_t)(EAX));
  /* 12197a3a call dword ptr [0x121c6364] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6364))), 0x12197a40u);
  /* 12197a40 mov esp, ebp */
  ESP = (EBP);
  /* 12197a42 pop ebp */
  EBP = (pop32());
  /* 12197a43 ret  */
  ESPCHK(0x12197720u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12197a50 (155 bytes, 45 insns) */
void f_12197a50(void) {
  FTRACE(0x12197a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12197a51 mov ebp, esp */
  EBP = (ESP);
  /* 12197a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12197a56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12197a5d jmp 0x12197a68 */
  goto L_12197a68;
L_12197a5f:;
  /* 12197a5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197a62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197a65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12197a68:;
  /* 12197a68 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197a6c jge 0x12197ae7 */
  if ((C.sf==C.of)) goto L_12197ae7;
  /* 12197a6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197a71 cmp dword ptr [ecx*4 + 0x121c50e0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x121c50e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197a79 je 0x12197ae2 */
  if (C.zf) goto L_12197ae2;
  /* 12197a7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197a7e mov eax, dword ptr [edx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c50e0)));
  /* 12197a85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12197a88 jmp 0x12197a93 */
  goto L_12197a93;
L_12197a8a:;
  /* 12197a8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197a8d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197a90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12197a93:;
  /* 12197a93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197a96 mov eax, dword ptr [edx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c50e0)));
  /* 12197a9d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197aa2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197aa5 jae 0x12197abf */
  if (!C.cf) goto L_12197abf;
  /* 12197aa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197aaa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197aae je 0x12197abd */
  if (C.zf) goto L_12197abd;
  /* 12197ab0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197ab3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197ab6 push edx */
  push32((uint32_t)(EDX));
  /* 12197ab7 call dword ptr [0x121c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6370))), 0x12197abdu);
L_12197abd:;
  /* 12197abd jmp 0x12197a8a */
  goto L_12197a8a;
L_12197abf:;
  /* 12197abf push 2 */
  push32((uint32_t)(0x2u));
  /* 12197ac1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197ac4 mov ecx, dword ptr [eax*4 + 0x121c50e0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 12197acb push ecx */
  push32((uint32_t)(ECX));
  /* 12197acc call 0x121985a0 */
  push32(0x12197ad1u); f_121985a0();
  /* 12197ad1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197ad4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197ad7 mov dword ptr [edx*4 + 0x121c50e0], 0 */
  w32((uint32_t)(EDX*4 + 0x121c50e0), (0x0u));
L_12197ae2:;
  /* 12197ae2 jmp 0x12197a5f */
  goto L_12197a5f;
L_12197ae7:;
  /* 12197ae7 mov esp, ebp */
  ESP = (EBP);
  /* 12197ae9 pop ebp */
  EBP = (pop32());
  /* 12197aea ret  */
  ESPCHK(0x12197a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x12197af0 (29 bytes, 13 insns) */
void f_12197af0(void) {
  FTRACE(0x12197af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12197af1 mov ebp, esp */
  EBP = (ESP);
  /* 12197af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197af7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197af9 mov eax, dword ptr [0x121c38e8] */
  EAX = (r32((uint32_t)(0x121c38e8)));
  /* 12197afe push eax */
  push32((uint32_t)(EAX));
  /* 12197aff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197b02 push ecx */
  push32((uint32_t)(ECX));
  /* 12197b03 call 0x12197b60 */
  push32(0x12197b08u); f_12197b60();
  /* 12197b08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197b0b pop ebp */
  EBP = (pop32());
  /* 12197b0c ret  */
  ESPCHK(0x12197af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x12197b10 (35 bytes, 16 insns) */
void f_12197b10(void) {
  FTRACE(0x12197b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12197b11 mov ebp, esp */
  EBP = (ESP);
  /* 12197b13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12197b16 push eax */
  push32((uint32_t)(EAX));
  /* 12197b17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12197b1a push ecx */
  push32((uint32_t)(ECX));
  /* 12197b1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197b1e push edx */
  push32((uint32_t)(EDX));
  /* 12197b1f mov eax, dword ptr [0x121c38e8] */
  EAX = (r32((uint32_t)(0x121c38e8)));
  /* 12197b24 push eax */
  push32((uint32_t)(EAX));
  /* 12197b25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197b28 push ecx */
  push32((uint32_t)(ECX));
  /* 12197b29 call 0x12197b60 */
  push32(0x12197b2eu); f_12197b60();
  /* 12197b2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197b31 pop ebp */
  EBP = (pop32());
  /* 12197b32 ret  */
  ESPCHK(0x12197b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b40 @ 0x12197b40 (27 bytes, 13 insns) */
void f_12197b40(void) {
  FTRACE(0x12197b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12197b41 mov ebp, esp */
  EBP = (ESP);
  /* 12197b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197b49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197b4c push eax */
  push32((uint32_t)(EAX));
  /* 12197b4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197b50 push ecx */
  push32((uint32_t)(ECX));
  /* 12197b51 call 0x12197b60 */
  push32(0x12197b56u); f_12197b60();
  /* 12197b56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197b59 pop ebp */
  EBP = (pop32());
  /* 12197b5a ret  */
  ESPCHK(0x12197b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b60 @ 0x12197b60 (94 bytes, 38 insns) */
void f_12197b60(void) {
  FTRACE(0x12197b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12197b61 mov ebp, esp */
  EBP = (ESP);
  /* 12197b63 push ecx */
  push32((uint32_t)(ECX));
L_12197b64:;
  /* 12197b64 push 9 */
  push32((uint32_t)(0x9u));
  /* 12197b66 call 0x1219b510 */
  push32(0x12197b6bu); f_1219b510();
  /* 12197b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197b6e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12197b71 push eax */
  push32((uint32_t)(EAX));
  /* 12197b72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12197b75 push ecx */
  push32((uint32_t)(ECX));
  /* 12197b76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12197b79 push edx */
  push32((uint32_t)(EDX));
  /* 12197b7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197b7d push eax */
  push32((uint32_t)(EAX));
  /* 12197b7e call 0x12197be0 */
  push32(0x12197b83u); f_12197be0();
  /* 12197b83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197b86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12197b89 push 9 */
  push32((uint32_t)(0x9u));
  /* 12197b8b call 0x1219b5b0 */
  push32(0x12197b90u); f_1219b5b0();
  /* 12197b90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197b93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197b97 jne 0x12197b9f */
  if (!C.zf) goto L_12197b9f;
  /* 12197b99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197b9d jne 0x12197ba4 */
  if (!C.zf) goto L_12197ba4;
L_12197b9f:;
  /* 12197b9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197ba2 jmp 0x12197bba */
  goto L_12197bba;
L_12197ba4:;
  /* 12197ba4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12197ba8 call 0x1219b850 */
  push32(0x12197badu); f_1219b850();
  /* 12197bad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12197bb2 jne 0x12197bb8 */
  if (!C.zf) goto L_12197bb8;
  /* 12197bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12197bb6 jmp 0x12197bba */
  goto L_12197bba;
L_12197bb8:;
  /* 12197bb8 jmp 0x12197b64 */
  goto L_12197b64;
L_12197bba:;
  /* 12197bba mov esp, ebp */
  ESP = (EBP);
  /* 12197bbc pop ebp */
  EBP = (pop32());
  /* 12197bbd ret  */
  ESPCHK(0x12197b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bc0 @ 0x12197bc0 (23 bytes, 11 insns) */
void f_12197bc0(void) {
  FTRACE(0x12197bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12197bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12197bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197bc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197bcc push eax */
  push32((uint32_t)(EAX));
  /* 12197bcd call 0x12197be0 */
  push32(0x12197bd2u); f_12197be0();
  /* 12197bd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197bd5 pop ebp */
  EBP = (pop32());
  /* 12197bd6 ret  */
  ESPCHK(0x12197bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007be0 @ 0x12197be0 (787 bytes, 254 insns) */
void f_12197be0(void) {
  FTRACE(0x12197be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12197be1 mov ebp, esp */
  EBP = (ESP);
  /* 12197be3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12197be6 push ebx */
  push32((uint32_t)(EBX));
  /* 12197be7 push esi */
  push32((uint32_t)(ESI));
  /* 12197be8 push edi */
  push32((uint32_t)(EDI));
  /* 12197be9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12197bf0 mov eax, dword ptr [0x121c1a84] */
  EAX = (r32((uint32_t)(0x121c1a84)));
  /* 12197bf5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12197bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12197bfa je 0x12197c2c */
  if (C.zf) goto L_12197c2c;
L_12197bfc:;
  /* 12197bfc call 0x12198cb0 */
  push32(0x12197c01u); f_12198cb0();
  /* 12197c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12197c03 jne 0x12197c26 */
  if (!C.zf) goto L_12197c26;
  /* 12197c05 push 0x121be5f0 */
  push32((uint32_t)(0x121be5f0u));
  /* 12197c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12197c0c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12197c11 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12197c16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12197c18 call 0x12196bd0 */
  push32(0x12197c1du); f_12196bd0();
  /* 12197c1d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197c20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197c23 jne 0x12197c26 */
  if (!C.zf) goto L_12197c26;
  /* 12197c25 int3  */
  x86_unimpl("int3 @ 0x12197c25");
L_12197c26:;
  /* 12197c26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12197c28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12197c2a jne 0x12197bfc */
  if (!C.zf) goto L_12197bfc;
L_12197c2c:;
  /* 12197c2c mov edx, dword ptr [0x121c1a88] */
  EDX = (r32((uint32_t)(0x121c1a88)));
  /* 12197c32 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12197c35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197c38 cmp eax, dword ptr [0x121c1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197c3e jne 0x12197c41 */
  if (!C.zf) goto L_12197c41;
  /* 12197c40 int3  */
  x86_unimpl("int3 @ 0x12197c40");
L_12197c41:;
  /* 12197c41 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12197c44 push ecx */
  push32((uint32_t)(ECX));
  /* 12197c45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12197c48 push edx */
  push32((uint32_t)(EDX));
  /* 12197c49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197c4c push eax */
  push32((uint32_t)(EAX));
  /* 12197c4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197c50 push ecx */
  push32((uint32_t)(ECX));
  /* 12197c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197c54 push edx */
  push32((uint32_t)(EDX));
  /* 12197c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197c57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197c59 call dword ptr [0x121c1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c1c90))), 0x12197c5fu);
  /* 12197c5f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12197c64 jne 0x12197cc4 */
  if (!C.zf) goto L_12197cc4;
  /* 12197c66 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197c6a je 0x12197c97 */
  if (C.zf) goto L_12197c97;
L_12197c6c:;
  /* 12197c6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12197c6f push eax */
  push32((uint32_t)(EAX));
  /* 12197c70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12197c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12197c74 push 0x121be5ac */
  push32((uint32_t)(0x121be5acu));
  /* 12197c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12197c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12197c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12197c81 call 0x12196bd0 */
  push32(0x12197c86u); f_12196bd0();
  /* 12197c86 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197c89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197c8c jne 0x12197c8f */
  if (!C.zf) goto L_12197c8f;
  /* 12197c8e int3  */
  x86_unimpl("int3 @ 0x12197c8e");
L_12197c8f:;
  /* 12197c8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12197c91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12197c93 jne 0x12197c6c */
  if (!C.zf) goto L_12197c6c;
  /* 12197c95 jmp 0x12197cbd */
  goto L_12197cbd;
L_12197c97:;
  /* 12197c97 push 0x121be588 */
  push32((uint32_t)(0x121be588u));
  /* 12197c9c push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 12197ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197ca9 call 0x12196bd0 */
  push32(0x12197caeu); f_12196bd0();
  /* 12197cae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197cb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197cb4 jne 0x12197cb7 */
  if (!C.zf) goto L_12197cb7;
  /* 12197cb6 int3  */
  x86_unimpl("int3 @ 0x12197cb6");
L_12197cb7:;
  /* 12197cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12197cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12197cbb jne 0x12197c97 */
  if (!C.zf) goto L_12197c97;
L_12197cbd:;
  /* 12197cbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12197cbf jmp 0x12197eec */
  goto L_12197eec;
L_12197cc4:;
  /* 12197cc4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197cc7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12197ccd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197cd0 je 0x12197ce6 */
  if (C.zf) goto L_12197ce6;
  /* 12197cd2 mov edx, dword ptr [0x121c1a84] */
  EDX = (r32((uint32_t)(0x121c1a84)));
  /* 12197cd8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12197cdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12197cdd jne 0x12197ce6 */
  if (!C.zf) goto L_12197ce6;
  /* 12197cdf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12197ce6:;
  /* 12197ce6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197cea ja 0x12197cf7 */
  if ((!C.cf&&!C.zf)) goto L_12197cf7;
  /* 12197cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197cef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197cf2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197cf5 jbe 0x12197d23 */
  if ((C.cf||C.zf)) goto L_12197d23;
L_12197cf7:;
  /* 12197cf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197cfa push ecx */
  push32((uint32_t)(ECX));
  /* 12197cfb push 0x121be560 */
  push32((uint32_t)(0x121be560u));
  /* 12197d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197d06 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197d08 call 0x12196bd0 */
  push32(0x12197d0du); f_12196bd0();
  /* 12197d0d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197d10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197d13 jne 0x12197d16 */
  if (!C.zf) goto L_12197d16;
  /* 12197d15 int3  */
  x86_unimpl("int3 @ 0x12197d15");
L_12197d16:;
  /* 12197d16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12197d18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12197d1a jne 0x12197cf7 */
  if (!C.zf) goto L_12197cf7;
  /* 12197d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12197d1e jmp 0x12197eec */
  goto L_12197eec;
L_12197d23:;
  /* 12197d23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197d26 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12197d2b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197d2e je 0x12197d70 */
  if (C.zf) goto L_12197d70;
  /* 12197d30 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197d34 je 0x12197d70 */
  if (C.zf) goto L_12197d70;
  /* 12197d36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197d39 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12197d3f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197d42 je 0x12197d70 */
  if (C.zf) goto L_12197d70;
  /* 12197d44 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197d48 je 0x12197d70 */
  if (C.zf) goto L_12197d70;
L_12197d4a:;
  /* 12197d4a push 0x121be52c */
  push32((uint32_t)(0x121be52cu));
  /* 12197d4f push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 12197d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197d5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12197d5c call 0x12196bd0 */
  push32(0x12197d61u); f_12196bd0();
  /* 12197d61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197d64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197d67 jne 0x12197d6a */
  if (!C.zf) goto L_12197d6a;
  /* 12197d69 int3  */
  x86_unimpl("int3 @ 0x12197d69");
L_12197d6a:;
  /* 12197d6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12197d6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12197d6e jne 0x12197d4a */
  if (!C.zf) goto L_12197d4a;
L_12197d70:;
  /* 12197d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197d73 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197d76 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12197d79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12197d7c push ecx */
  push32((uint32_t)(ECX));
  /* 12197d7d call 0x1219b960 */
  push32(0x12197d82u); f_1219b960();
  /* 12197d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197d85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12197d88 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197d8c jne 0x12197d95 */
  if (!C.zf) goto L_12197d95;
  /* 12197d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12197d90 jmp 0x12197eec */
  goto L_12197eec;
L_12197d95:;
  /* 12197d95 mov edx, dword ptr [0x121c1a88] */
  EDX = (r32((uint32_t)(0x121c1a88)));
  /* 12197d9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197d9e mov dword ptr [0x121c1a88], edx */
  w32((uint32_t)(0x121c1a88), (EDX));
  /* 12197da4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197da8 je 0x12197df3 */
  if (C.zf) goto L_12197df3;
  /* 12197daa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197dad mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12197db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197db6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12197dbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197dc0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12197dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197dca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12197dd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197dd7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12197dda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197ddd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12197de4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197de7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12197dee jmp 0x12197e93 */
  goto L_12197e93;
L_12197df3:;
  /* 12197df3 mov edx, dword ptr [0x121c3748] */
  EDX = (r32((uint32_t)(0x121c3748)));
  /* 12197df9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197dfc mov dword ptr [0x121c3748], edx */
  w32((uint32_t)(0x121c3748), (EDX));
  /* 12197e02 mov eax, dword ptr [0x121c3750] */
  EAX = (r32((uint32_t)(0x121c3750)));
  /* 12197e07 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197e0a mov dword ptr [0x121c3750], eax */
  w32((uint32_t)(0x121c3750), (EAX));
  /* 12197e0f mov ecx, dword ptr [0x121c3750] */
  ECX = (r32((uint32_t)(0x121c3750)));
  /* 12197e15 cmp ecx, dword ptr [0x121c3754] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c3754))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197e1b jbe 0x12197e29 */
  if ((C.cf||C.zf)) goto L_12197e29;
  /* 12197e1d mov edx, dword ptr [0x121c3750] */
  EDX = (r32((uint32_t)(0x121c3750)));
  /* 12197e23 mov dword ptr [0x121c3754], edx */
  w32((uint32_t)(0x121c3754), (EDX));
L_12197e29:;
  /* 12197e29 cmp dword ptr [0x121c374c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c374c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197e30 je 0x12197e3f */
  if (C.zf) goto L_12197e3f;
  /* 12197e32 mov eax, dword ptr [0x121c374c] */
  EAX = (r32((uint32_t)(0x121c374c)));
  /* 12197e37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e3a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12197e3d jmp 0x12197e48 */
  goto L_12197e48;
L_12197e3f:;
  /* 12197e3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e42 mov dword ptr [0x121c3744], edx */
  w32((uint32_t)(0x121c3744), (EDX));
L_12197e48:;
  /* 12197e48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e4b mov ecx, dword ptr [0x121c374c] */
  ECX = (r32((uint32_t)(0x121c374c)));
  /* 12197e51 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12197e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e56 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12197e5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12197e63 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12197e66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12197e6c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12197e6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197e75 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12197e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197e7e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12197e81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197e87 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12197e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197e8d mov dword ptr [0x121c374c], ecx */
  w32((uint32_t)(0x121c374c), (ECX));
L_12197e93:;
  /* 12197e93 push 4 */
  push32((uint32_t)(0x4u));
  /* 12197e95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12197e97 mov dl, byte ptr [0x121c1a90] */
  DL = (r8((uint32_t)(0x121c1a90)));
  /* 12197e9d push edx */
  push32((uint32_t)(EDX));
  /* 12197e9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197ea1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197ea4 push eax */
  push32((uint32_t)(EAX));
  /* 12197ea5 call 0x1219b880 */
  push32(0x12197eaau); f_1219b880();
  /* 12197eaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197ead push 4 */
  push32((uint32_t)(0x4u));
  /* 12197eaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12197eb1 mov cl, byte ptr [0x121c1a90] */
  CL = (r8((uint32_t)(0x121c1a90)));
  /* 12197eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12197eb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197ebb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197ebe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12197ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 12197ec3 call 0x1219b880 */
  push32(0x12197ec8u); f_1219b880();
  /* 12197ec8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197ecb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197ece push edx */
  push32((uint32_t)(EDX));
  /* 12197ecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12197ed1 mov al, byte ptr [0x121c1a92] */
  AL = (r8((uint32_t)(0x121c1a92)));
  /* 12197ed6 push eax */
  push32((uint32_t)(EAX));
  /* 12197ed7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197eda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197edd push ecx */
  push32((uint32_t)(ECX));
  /* 12197ede call 0x1219b880 */
  push32(0x12197ee3u); f_1219b880();
  /* 12197ee3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197ee9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12197eec:;
  /* 12197eec pop edi */
  EDI = (pop32());
  /* 12197eed pop esi */
  ESI = (pop32());
  /* 12197eee pop ebx */
  EBX = (pop32());
  /* 12197eef mov esp, ebp */
  ESP = (EBP);
  /* 12197ef1 pop ebp */
  EBP = (pop32());
  /* 12197ef2 ret  */
  ESPCHK(0x12197be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f00 @ 0x12197f00 (27 bytes, 13 insns) */
void f_12197f00(void) {
  FTRACE(0x12197f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12197f01 mov ebp, esp */
  EBP = (ESP);
  /* 12197f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197f07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197f09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197f0c push eax */
  push32((uint32_t)(EAX));
  /* 12197f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197f10 push ecx */
  push32((uint32_t)(ECX));
  /* 12197f11 call 0x12197f20 */
  push32(0x12197f16u); f_12197f20();
  /* 12197f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197f19 pop ebp */
  EBP = (pop32());
  /* 12197f1a ret  */
  ESPCHK(0x12197f00u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12197f20 (96 bytes, 37 insns) */
void f_12197f20(void) {
  FTRACE(0x12197f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12197f21 mov ebp, esp */
  EBP = (ESP);
  /* 12197f23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12197f26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197f29 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12197f2d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12197f30 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12197f33 push ecx */
  push32((uint32_t)(ECX));
  /* 12197f34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12197f37 push edx */
  push32((uint32_t)(EDX));
  /* 12197f38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12197f3b push eax */
  push32((uint32_t)(EAX));
  /* 12197f3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197f3f push ecx */
  push32((uint32_t)(ECX));
  /* 12197f40 call 0x12197b10 */
  push32(0x12197f45u); f_12197b10();
  /* 12197f45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197f48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12197f4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197f4f je 0x12197f79 */
  if (C.zf) goto L_12197f79;
  /* 12197f51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197f54 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12197f57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12197f5a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197f5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12197f60:;
  /* 12197f60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12197f63 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197f66 jae 0x12197f79 */
  if (!C.cf) goto L_12197f79;
  /* 12197f68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12197f6b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12197f6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12197f71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12197f74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12197f77 jmp 0x12197f60 */
  goto L_12197f60;
L_12197f79:;
  /* 12197f79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12197f7c mov esp, ebp */
  ESP = (EBP);
  /* 12197f7e pop ebp */
  EBP = (pop32());
  /* 12197f7f ret  */
  ESPCHK(0x12197f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f80 @ 0x12197f80 (27 bytes, 13 insns) */
void f_12197f80(void) {
  FTRACE(0x12197f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12197f81 mov ebp, esp */
  EBP = (ESP);
  /* 12197f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12197f87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12197f89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197f8c push eax */
  push32((uint32_t)(EAX));
  /* 12197f8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197f90 push ecx */
  push32((uint32_t)(ECX));
  /* 12197f91 call 0x12197fa0 */
  push32(0x12197f96u); f_12197fa0();
  /* 12197f96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197f99 pop ebp */
  EBP = (pop32());
  /* 12197f9a ret  */
  ESPCHK(0x12197f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x12197fa0 (64 bytes, 27 insns) */
void f_12197fa0(void) {
  FTRACE(0x12197fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12197fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12197fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12197fa4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12197fa6 call 0x1219b510 */
  push32(0x12197fabu); f_1219b510();
  /* 12197fab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197fae push 1 */
  push32((uint32_t)(0x1u));
  /* 12197fb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12197fb3 push eax */
  push32((uint32_t)(EAX));
  /* 12197fb4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12197fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12197fb8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12197fbb push edx */
  push32((uint32_t)(EDX));
  /* 12197fbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12197fbf push eax */
  push32((uint32_t)(EAX));
  /* 12197fc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12197fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12197fc4 call 0x12197fe0 */
  push32(0x12197fc9u); f_12197fe0();
  /* 12197fc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197fcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12197fcf push 9 */
  push32((uint32_t)(0x9u));
  /* 12197fd1 call 0x1219b5b0 */
  push32(0x12197fd6u); f_1219b5b0();
  /* 12197fd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12197fd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12197fdc mov esp, ebp */
  ESP = (EBP);
  /* 12197fde pop ebp */
  EBP = (pop32());
  /* 12197fdf ret  */
  ESPCHK(0x12197fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe0 @ 0x12197fe0 (1297 bytes, 431 insns) */
void f_12197fe0(void) {
  FTRACE(0x12197fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12197fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12197fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12197fe3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12197fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 12197fe7 push esi */
  push32((uint32_t)(ESI));
  /* 12197fe8 push edi */
  push32((uint32_t)(EDI));
  /* 12197fe9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12197ff0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12197ff4 jne 0x12198013 */
  if (!C.zf) goto L_12198013;
  /* 12197ff6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12197ff9 push eax */
  push32((uint32_t)(EAX));
  /* 12197ffa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12197ffd push ecx */
  push32((uint32_t)(ECX));
  /* 12197ffe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12198001 push edx */
  push32((uint32_t)(EDX));
  /* 12198002 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12198005 push eax */
  push32((uint32_t)(EAX));
  /* 12198006 call 0x12197b10 */
  push32(0x1219800bu); f_12197b10();
  /* 1219800b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219800e jmp 0x121984ea */
  goto L_121984ea;
L_12198013:;
  /* 12198013 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198017 je 0x12198036 */
  if (C.zf) goto L_12198036;
  /* 12198019 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219801d jne 0x12198036 */
  if (!C.zf) goto L_12198036;
  /* 1219801f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12198022 push ecx */
  push32((uint32_t)(ECX));
  /* 12198023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198026 push edx */
  push32((uint32_t)(EDX));
  /* 12198027 call 0x121985a0 */
  push32(0x1219802cu); f_121985a0();
  /* 1219802c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219802f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198031 jmp 0x121984ea */
  goto L_121984ea;
L_12198036:;
  /* 12198036 mov eax, dword ptr [0x121c1a84] */
  EAX = (r32((uint32_t)(0x121c1a84)));
  /* 1219803b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1219803e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198040 je 0x12198072 */
  if (C.zf) goto L_12198072;
L_12198042:;
  /* 12198042 call 0x12198cb0 */
  push32(0x12198047u); f_12198cb0();
  /* 12198047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198049 jne 0x1219806c */
  if (!C.zf) goto L_1219806c;
  /* 1219804b push 0x121be5f0 */
  push32((uint32_t)(0x121be5f0u));
  /* 12198050 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198052 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12198057 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 1219805c push 2 */
  push32((uint32_t)(0x2u));
  /* 1219805e call 0x12196bd0 */
  push32(0x12198063u); f_12196bd0();
  /* 12198063 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198066 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198069 jne 0x1219806c */
  if (!C.zf) goto L_1219806c;
  /* 1219806b int3  */
  x86_unimpl("int3 @ 0x1219806b");
L_1219806c:;
  /* 1219806c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219806e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198070 jne 0x12198042 */
  if (!C.zf) goto L_12198042;
L_12198072:;
  /* 12198072 mov edx, dword ptr [0x121c1a88] */
  EDX = (r32((uint32_t)(0x121c1a88)));
  /* 12198078 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1219807b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219807e cmp eax, dword ptr [0x121c1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198084 jne 0x12198087 */
  if (!C.zf) goto L_12198087;
  /* 12198086 int3  */
  x86_unimpl("int3 @ 0x12198086");
L_12198087:;
  /* 12198087 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219808a push ecx */
  push32((uint32_t)(ECX));
  /* 1219808b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219808e push edx */
  push32((uint32_t)(EDX));
  /* 1219808f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12198092 push eax */
  push32((uint32_t)(EAX));
  /* 12198093 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12198096 push ecx */
  push32((uint32_t)(ECX));
  /* 12198097 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219809a push edx */
  push32((uint32_t)(EDX));
  /* 1219809b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219809e push eax */
  push32((uint32_t)(EAX));
  /* 1219809f push 2 */
  push32((uint32_t)(0x2u));
  /* 121980a1 call dword ptr [0x121c1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c1c90))), 0x121980a7u);
  /* 121980a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121980aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121980ac jne 0x1219810c */
  if (!C.zf) goto L_1219810c;
  /* 121980ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121980b2 je 0x121980df */
  if (C.zf) goto L_121980df;
L_121980b4:;
  /* 121980b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121980b7 push ecx */
  push32((uint32_t)(ECX));
  /* 121980b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121980bb push edx */
  push32((uint32_t)(EDX));
  /* 121980bc push 0x121be76c */
  push32((uint32_t)(0x121be76cu));
  /* 121980c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121980c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121980c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121980c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121980c9 call 0x12196bd0 */
  push32(0x121980ceu); f_12196bd0();
  /* 121980ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121980d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121980d4 jne 0x121980d7 */
  if (!C.zf) goto L_121980d7;
  /* 121980d6 int3  */
  x86_unimpl("int3 @ 0x121980d6");
L_121980d7:;
  /* 121980d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121980d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121980db jne 0x121980b4 */
  if (!C.zf) goto L_121980b4;
  /* 121980dd jmp 0x12198105 */
  goto L_12198105;
L_121980df:;
  /* 121980df push 0x121be748 */
  push32((uint32_t)(0x121be748u));
  /* 121980e4 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 121980e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121980eb push 0 */
  push32((uint32_t)(0x0u));
  /* 121980ed push 0 */
  push32((uint32_t)(0x0u));
  /* 121980ef push 0 */
  push32((uint32_t)(0x0u));
  /* 121980f1 call 0x12196bd0 */
  push32(0x121980f6u); f_12196bd0();
  /* 121980f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121980f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121980fc jne 0x121980ff */
  if (!C.zf) goto L_121980ff;
  /* 121980fe int3  */
  x86_unimpl("int3 @ 0x121980fe");
L_121980ff:;
  /* 121980ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198101 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198103 jne 0x121980df */
  if (!C.zf) goto L_121980df;
L_12198105:;
  /* 12198105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198107 jmp 0x121984ea */
  goto L_121984ea;
L_1219810c:;
  /* 1219810c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198110 jbe 0x1219813e */
  if ((C.cf||C.zf)) goto L_1219813e;
L_12198112:;
  /* 12198112 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12198115 push edx */
  push32((uint32_t)(EDX));
  /* 12198116 push 0x121be718 */
  push32((uint32_t)(0x121be718u));
  /* 1219811b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219811d push 0 */
  push32((uint32_t)(0x0u));
  /* 1219811f push 0 */
  push32((uint32_t)(0x0u));
  /* 12198121 push 1 */
  push32((uint32_t)(0x1u));
  /* 12198123 call 0x12196bd0 */
  push32(0x12198128u); f_12196bd0();
  /* 12198128 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219812b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219812e jne 0x12198131 */
  if (!C.zf) goto L_12198131;
  /* 12198130 int3  */
  x86_unimpl("int3 @ 0x12198130");
L_12198131:;
  /* 12198131 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198135 jne 0x12198112 */
  if (!C.zf) goto L_12198112;
  /* 12198137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198139 jmp 0x121984ea */
  goto L_121984ea;
L_1219813e:;
  /* 1219813e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198142 je 0x12198186 */
  if (C.zf) goto L_12198186;
  /* 12198144 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12198147 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219814d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198150 je 0x12198186 */
  if (C.zf) goto L_12198186;
  /* 12198152 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12198155 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1219815b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219815e je 0x12198186 */
  if (C.zf) goto L_12198186;
L_12198160:;
  /* 12198160 push 0x121be52c */
  push32((uint32_t)(0x121be52cu));
  /* 12198165 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 1219816a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219816c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219816e push 0 */
  push32((uint32_t)(0x0u));
  /* 12198170 push 1 */
  push32((uint32_t)(0x1u));
  /* 12198172 call 0x12196bd0 */
  push32(0x12198177u); f_12196bd0();
  /* 12198177 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219817a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219817d jne 0x12198180 */
  if (!C.zf) goto L_12198180;
  /* 1219817f int3  */
  x86_unimpl("int3 @ 0x1219817f");
L_12198180:;
  /* 12198180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198184 jne 0x12198160 */
  if (!C.zf) goto L_12198160;
L_12198186:;
  /* 12198186 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198189 push ecx */
  push32((uint32_t)(ECX));
  /* 1219818a call 0x12199110 */
  push32(0x1219818fu); f_12199110();
  /* 1219818f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198194 jne 0x121981b7 */
  if (!C.zf) goto L_121981b7;
  /* 12198196 push 0x121be6f4 */
  push32((uint32_t)(0x121be6f4u));
  /* 1219819b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219819d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 121981a2 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 121981a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 121981a9 call 0x12196bd0 */
  push32(0x121981aeu); f_12196bd0();
  /* 121981ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121981b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121981b4 jne 0x121981b7 */
  if (!C.zf) goto L_121981b7;
  /* 121981b6 int3  */
  x86_unimpl("int3 @ 0x121981b6");
L_121981b7:;
  /* 121981b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121981b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121981bb jne 0x12198186 */
  if (!C.zf) goto L_12198186;
  /* 121981bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121981c0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121981c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121981c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121981c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121981cd jne 0x121981d6 */
  if (!C.zf) goto L_121981d6;
  /* 121981cf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_121981d6:;
  /* 121981d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121981da je 0x1219821a */
  if (C.zf) goto L_1219821a;
L_121981dc:;
  /* 121981dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121981df cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121981e6 jne 0x121981f1 */
  if (!C.zf) goto L_121981f1;
  /* 121981e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121981eb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121981ef je 0x12198212 */
  if (C.zf) goto L_12198212;
L_121981f1:;
  /* 121981f1 push 0x121be6ac */
  push32((uint32_t)(0x121be6acu));
  /* 121981f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121981f8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 121981fd push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198202 push 2 */
  push32((uint32_t)(0x2u));
  /* 12198204 call 0x12196bd0 */
  push32(0x12198209u); f_12196bd0();
  /* 12198209 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219820c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219820f jne 0x12198212 */
  if (!C.zf) goto L_12198212;
  /* 12198211 int3  */
  x86_unimpl("int3 @ 0x12198211");
L_12198212:;
  /* 12198212 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198214 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198216 jne 0x121981dc */
  if (!C.zf) goto L_121981dc;
  /* 12198218 jmp 0x1219827e */
  goto L_1219827e;
L_1219821a:;
  /* 1219821a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219821d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12198220 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12198225 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198228 jne 0x1219823f */
  if (!C.zf) goto L_1219823f;
  /* 1219822a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219822d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12198233 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198236 jne 0x1219823f */
  if (!C.zf) goto L_1219823f;
  /* 12198238 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1219823f:;
  /* 1219823f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198242 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12198245 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219824a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219824d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12198253 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198255 je 0x12198278 */
  if (C.zf) goto L_12198278;
  /* 12198257 push 0x121be670 */
  push32((uint32_t)(0x121be670u));
  /* 1219825c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219825e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12198263 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198268 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219826a call 0x12196bd0 */
  push32(0x1219826fu); f_12196bd0();
  /* 1219826f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198272 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198275 jne 0x12198278 */
  if (!C.zf) goto L_12198278;
  /* 12198277 int3  */
  x86_unimpl("int3 @ 0x12198277");
L_12198278:;
  /* 12198278 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219827a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219827c jne 0x1219823f */
  if (!C.zf) goto L_1219823f;
L_1219827e:;
  /* 1219827e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198282 je 0x121982a9 */
  if (C.zf) goto L_121982a9;
  /* 12198284 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12198287 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219828a push eax */
  push32((uint32_t)(EAX));
  /* 1219828b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219828e push ecx */
  push32((uint32_t)(ECX));
  /* 1219828f call 0x1219ba90 */
  push32(0x12198294u); f_1219ba90();
  /* 12198294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198297 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219829a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219829e jne 0x121982a7 */
  if (!C.zf) goto L_121982a7;
  /* 121982a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121982a2 jmp 0x121984ea */
  goto L_121984ea;
L_121982a7:;
  /* 121982a7 jmp 0x121982cc */
  goto L_121982cc;
L_121982a9:;
  /* 121982a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121982ac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121982af push edx */
  push32((uint32_t)(EDX));
  /* 121982b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121982b3 push eax */
  push32((uint32_t)(EAX));
  /* 121982b4 call 0x1219b9e0 */
  push32(0x121982b9u); f_1219b9e0();
  /* 121982b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121982bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121982bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121982c3 jne 0x121982cc */
  if (!C.zf) goto L_121982cc;
  /* 121982c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121982c7 jmp 0x121984ea */
  goto L_121984ea;
L_121982cc:;
  /* 121982cc mov ecx, dword ptr [0x121c1a88] */
  ECX = (r32((uint32_t)(0x121c1a88)));
  /* 121982d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121982d5 mov dword ptr [0x121c1a88], ecx */
  w32((uint32_t)(0x121c1a88), (ECX));
  /* 121982db cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121982df jne 0x12198337 */
  if (!C.zf) goto L_12198337;
  /* 121982e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121982e4 mov eax, dword ptr [0x121c3748] */
  EAX = (r32((uint32_t)(0x121c3748)));
  /* 121982e9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121982ec mov dword ptr [0x121c3748], eax */
  w32((uint32_t)(0x121c3748), (EAX));
  /* 121982f1 mov ecx, dword ptr [0x121c3748] */
  ECX = (r32((uint32_t)(0x121c3748)));
  /* 121982f7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121982fa mov dword ptr [0x121c3748], ecx */
  w32((uint32_t)(0x121c3748), (ECX));
  /* 12198300 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12198303 mov eax, dword ptr [0x121c3750] */
  EAX = (r32((uint32_t)(0x121c3750)));
  /* 12198308 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219830b mov dword ptr [0x121c3750], eax */
  w32((uint32_t)(0x121c3750), (EAX));
  /* 12198310 mov ecx, dword ptr [0x121c3750] */
  ECX = (r32((uint32_t)(0x121c3750)));
  /* 12198316 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198319 mov dword ptr [0x121c3750], ecx */
  w32((uint32_t)(0x121c3750), (ECX));
  /* 1219831f mov edx, dword ptr [0x121c3750] */
  EDX = (r32((uint32_t)(0x121c3750)));
  /* 12198325 cmp edx, dword ptr [0x121c3754] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c3754))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219832b jbe 0x12198337 */
  if ((C.cf||C.zf)) goto L_12198337;
  /* 1219832d mov eax, dword ptr [0x121c3750] */
  EAX = (r32((uint32_t)(0x121c3750)));
  /* 12198332 mov dword ptr [0x121c3754], eax */
  w32((uint32_t)(0x121c3754), (EAX));
L_12198337:;
  /* 12198337 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219833a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219833d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12198340 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12198343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12198346 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198349 jbe 0x1219836f */
  if ((C.cf||C.zf)) goto L_1219836f;
  /* 1219834b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219834e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12198351 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12198354 push edx */
  push32((uint32_t)(EDX));
  /* 12198355 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198357 mov al, byte ptr [0x121c1a92] */
  AL = (r8((uint32_t)(0x121c1a92)));
  /* 1219835c push eax */
  push32((uint32_t)(EAX));
  /* 1219835d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12198360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198363 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198366 push edx */
  push32((uint32_t)(EDX));
  /* 12198367 call 0x1219b880 */
  push32(0x1219836cu); f_1219b880();
  /* 1219836c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219836f:;
  /* 1219836f push 4 */
  push32((uint32_t)(0x4u));
  /* 12198371 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198373 mov al, byte ptr [0x121c1a90] */
  AL = (r8((uint32_t)(0x121c1a90)));
  /* 12198378 push eax */
  push32((uint32_t)(EAX));
  /* 12198379 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219837c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219837f push ecx */
  push32((uint32_t)(ECX));
  /* 12198380 call 0x1219b880 */
  push32(0x12198385u); f_1219b880();
  /* 12198385 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198388 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219838c jne 0x121983a9 */
  if (!C.zf) goto L_121983a9;
  /* 1219838e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12198391 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12198394 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12198397 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219839a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219839d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 121983a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121983a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121983a6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_121983a9:;
  /* 121983a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121983ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121983af mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_121983b2:;
  /* 121983b2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121983b6 jne 0x121983e7 */
  if (!C.zf) goto L_121983e7;
  /* 121983b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121983bc jne 0x121983c6 */
  if (!C.zf) goto L_121983c6;
  /* 121983be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121983c1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121983c4 je 0x121983e7 */
  if (C.zf) goto L_121983e7;
L_121983c6:;
  /* 121983c6 push 0x121be63c */
  push32((uint32_t)(0x121be63cu));
  /* 121983cb push 0 */
  push32((uint32_t)(0x0u));
  /* 121983cd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 121983d2 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 121983d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 121983d9 call 0x12196bd0 */
  push32(0x121983deu); f_12196bd0();
  /* 121983de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121983e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121983e4 jne 0x121983e7 */
  if (!C.zf) goto L_121983e7;
  /* 121983e6 int3  */
  x86_unimpl("int3 @ 0x121983e6");
L_121983e7:;
  /* 121983e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121983e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121983eb jne 0x121983b2 */
  if (!C.zf) goto L_121983b2;
  /* 121983ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121983f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121983f3 je 0x121983fb */
  if (C.zf) goto L_121983fb;
  /* 121983f5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121983f9 je 0x12198403 */
  if (C.zf) goto L_12198403;
L_121983fb:;
  /* 121983fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121983fe jmp 0x121984ea */
  goto L_121984ea;
L_12198403:;
  /* 12198403 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12198406 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198409 je 0x1219841b */
  if (C.zf) goto L_1219841b;
  /* 1219840b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219840e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12198410 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12198413 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12198416 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12198419 jmp 0x12198457 */
  goto L_12198457;
L_1219841b:;
  /* 1219841b mov eax, dword ptr [0x121c3744] */
  EAX = (r32((uint32_t)(0x121c3744)));
  /* 12198420 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198423 je 0x12198446 */
  if (C.zf) goto L_12198446;
  /* 12198425 push 0x121be620 */
  push32((uint32_t)(0x121be620u));
  /* 1219842a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219842c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12198431 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198436 push 2 */
  push32((uint32_t)(0x2u));
  /* 12198438 call 0x12196bd0 */
  push32(0x1219843du); f_12196bd0();
  /* 1219843d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198440 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198443 jne 0x12198446 */
  if (!C.zf) goto L_12198446;
  /* 12198445 int3  */
  x86_unimpl("int3 @ 0x12198445");
L_12198446:;
  /* 12198446 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219844a jne 0x1219841b */
  if (!C.zf) goto L_1219841b;
  /* 1219844c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219844f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12198452 mov dword ptr [0x121c3744], eax */
  w32((uint32_t)(0x121c3744), (EAX));
L_12198457:;
  /* 12198457 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219845a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219845e je 0x1219846f */
  if (C.zf) goto L_1219846f;
  /* 12198460 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12198463 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12198466 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12198469 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219846b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1219846d jmp 0x121984aa */
  goto L_121984aa;
L_1219846f:;
  /* 1219846f mov eax, dword ptr [0x121c374c] */
  EAX = (r32((uint32_t)(0x121c374c)));
  /* 12198474 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198477 je 0x1219849a */
  if (C.zf) goto L_1219849a;
  /* 12198479 push 0x121be604 */
  push32((uint32_t)(0x121be604u));
  /* 1219847e push 0 */
  push32((uint32_t)(0x0u));
  /* 12198480 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12198485 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 1219848a push 2 */
  push32((uint32_t)(0x2u));
  /* 1219848c call 0x12196bd0 */
  push32(0x12198491u); f_12196bd0();
  /* 12198491 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198494 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198497 jne 0x1219849a */
  if (!C.zf) goto L_1219849a;
  /* 12198499 int3  */
  x86_unimpl("int3 @ 0x12198499");
L_1219849a:;
  /* 1219849a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219849c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219849e jne 0x1219846f */
  if (!C.zf) goto L_1219846f;
  /* 121984a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121984a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121984a5 mov dword ptr [0x121c374c], eax */
  w32((uint32_t)(0x121c374c), (EAX));
L_121984aa:;
  /* 121984aa cmp dword ptr [0x121c374c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c374c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121984b1 je 0x121984c1 */
  if (C.zf) goto L_121984c1;
  /* 121984b3 mov ecx, dword ptr [0x121c374c] */
  ECX = (r32((uint32_t)(0x121c374c)));
  /* 121984b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121984bc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 121984bf jmp 0x121984c9 */
  goto L_121984c9;
L_121984c1:;
  /* 121984c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121984c4 mov dword ptr [0x121c3744], eax */
  w32((uint32_t)(0x121c3744), (EAX));
L_121984c9:;
  /* 121984c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121984cc mov edx, dword ptr [0x121c374c] */
  EDX = (r32((uint32_t)(0x121c374c)));
  /* 121984d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 121984d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121984d7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 121984de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121984e1 mov dword ptr [0x121c374c], ecx */
  w32((uint32_t)(0x121c374c), (ECX));
  /* 121984e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121984ea:;
  /* 121984ea pop edi */
  EDI = (pop32());
  /* 121984eb pop esi */
  ESI = (pop32());
  /* 121984ec pop ebx */
  EBX = (pop32());
  /* 121984ed mov esp, ebp */
  ESP = (EBP);
  /* 121984ef pop ebp */
  EBP = (pop32());
  /* 121984f0 ret  */
  ESPCHK(0x12197fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008500 @ 0x12198500 (27 bytes, 13 insns) */
void f_12198500(void) {
  FTRACE(0x12198500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12198500 push ebp */
  push32((uint32_t)(EBP));
  /* 12198501 mov ebp, esp */
  EBP = (ESP);
  /* 12198503 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198505 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198507 push 1 */
  push32((uint32_t)(0x1u));
  /* 12198509 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219850c push eax */
  push32((uint32_t)(EAX));
  /* 1219850d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198510 push ecx */
  push32((uint32_t)(ECX));
  /* 12198511 call 0x12198520 */
  push32(0x12198516u); f_12198520();
  /* 12198516 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198519 pop ebp */
  EBP = (pop32());
  /* 1219851a ret  */
  ESPCHK(0x12198500u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x12198520 (64 bytes, 27 insns) */
void f_12198520(void) {
  FTRACE(0x12198520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12198520 push ebp */
  push32((uint32_t)(EBP));
  /* 12198521 mov ebp, esp */
  EBP = (ESP);
  /* 12198523 push ecx */
  push32((uint32_t)(ECX));
  /* 12198524 push 9 */
  push32((uint32_t)(0x9u));
  /* 12198526 call 0x1219b510 */
  push32(0x1219852bu); f_1219b510();
  /* 1219852b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219852e push 0 */
  push32((uint32_t)(0x0u));
  /* 12198530 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12198533 push eax */
  push32((uint32_t)(EAX));
  /* 12198534 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12198537 push ecx */
  push32((uint32_t)(ECX));
  /* 12198538 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219853b push edx */
  push32((uint32_t)(EDX));
  /* 1219853c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219853f push eax */
  push32((uint32_t)(EAX));
  /* 12198540 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198543 push ecx */
  push32((uint32_t)(ECX));
  /* 12198544 call 0x12197fe0 */
  push32(0x12198549u); f_12197fe0();
  /* 12198549 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219854c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219854f push 9 */
  push32((uint32_t)(0x9u));
  /* 12198551 call 0x1219b5b0 */
  push32(0x12198556u); f_1219b5b0();
  /* 12198556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219855c mov esp, ebp */
  ESP = (EBP);
  /* 1219855e pop ebp */
  EBP = (pop32());
  /* 1219855f ret  */
  ESPCHK(0x12198520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008560 @ 0x12198560 (19 bytes, 9 insns) */
void f_12198560(void) {
  FTRACE(0x12198560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12198560 push ebp */
  push32((uint32_t)(EBP));
  /* 12198561 mov ebp, esp */
  EBP = (ESP);
  /* 12198563 push 1 */
  push32((uint32_t)(0x1u));
  /* 12198565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198568 push eax */
  push32((uint32_t)(EAX));
  /* 12198569 call 0x121985a0 */
  push32(0x1219856eu); f_121985a0();
  /* 1219856e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198571 pop ebp */
  EBP = (pop32());
  /* 12198572 ret  */
  ESPCHK(0x12198560u, _esp0);
  ESP += 4; return;
}

/* FUN_10008580 @ 0x12198580 (19 bytes, 9 insns) */
void f_12198580(void) {
  FTRACE(0x12198580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12198580 push ebp */
  push32((uint32_t)(EBP));
  /* 12198581 mov ebp, esp */
  EBP = (ESP);
  /* 12198583 push 1 */
  push32((uint32_t)(0x1u));
  /* 12198585 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198588 push eax */
  push32((uint32_t)(EAX));
  /* 12198589 call 0x121985d0 */
  push32(0x1219858eu); f_121985d0();
  /* 1219858e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198591 pop ebp */
  EBP = (pop32());
  /* 12198592 ret  */
  ESPCHK(0x12198580u, _esp0);
  ESP += 4; return;
}

/* FUN_100085a0 @ 0x121985a0 (41 bytes, 16 insns) */
void f_121985a0(void) {
  FTRACE(0x121985a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121985a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121985a1 mov ebp, esp */
  EBP = (ESP);
  /* 121985a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 121985a5 call 0x1219b510 */
  push32(0x121985aau); f_1219b510();
  /* 121985aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121985ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121985b0 push eax */
  push32((uint32_t)(EAX));
  /* 121985b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121985b4 push ecx */
  push32((uint32_t)(ECX));
  /* 121985b5 call 0x121985d0 */
  push32(0x121985bau); f_121985d0();
  /* 121985ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121985bd push 9 */
  push32((uint32_t)(0x9u));
  /* 121985bf call 0x1219b5b0 */
  push32(0x121985c4u); f_1219b5b0();
  /* 121985c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121985c7 pop ebp */
  EBP = (pop32());
  /* 121985c8 ret  */
  ESPCHK(0x121985a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085d0 @ 0x121985d0 (1004 bytes, 342 insns) */
void f_121985d0(void) {
  FTRACE(0x121985d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121985d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121985d1 mov ebp, esp */
  EBP = (ESP);
  /* 121985d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121985d4 push ebx */
  push32((uint32_t)(EBX));
  /* 121985d5 push esi */
  push32((uint32_t)(ESI));
  /* 121985d6 push edi */
  push32((uint32_t)(EDI));
  /* 121985d7 mov eax, dword ptr [0x121c1a84] */
  EAX = (r32((uint32_t)(0x121c1a84)));
  /* 121985dc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 121985df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121985e1 je 0x12198613 */
  if (C.zf) goto L_12198613;
L_121985e3:;
  /* 121985e3 call 0x12198cb0 */
  push32(0x121985e8u); f_12198cb0();
  /* 121985e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121985ea jne 0x1219860d */
  if (!C.zf) goto L_1219860d;
  /* 121985ec push 0x121be5f0 */
  push32((uint32_t)(0x121be5f0u));
  /* 121985f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121985f3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 121985f8 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 121985fd push 2 */
  push32((uint32_t)(0x2u));
  /* 121985ff call 0x12196bd0 */
  push32(0x12198604u); f_12196bd0();
  /* 12198604 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198607 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219860a jne 0x1219860d */
  if (!C.zf) goto L_1219860d;
  /* 1219860c int3  */
  x86_unimpl("int3 @ 0x1219860c");
L_1219860d:;
  /* 1219860d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219860f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198611 jne 0x121985e3 */
  if (!C.zf) goto L_121985e3;
L_12198613:;
  /* 12198613 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198617 jne 0x1219861e */
  if (!C.zf) goto L_1219861e;
  /* 12198619 jmp 0x121989b5 */
  goto L_121989b5;
L_1219861e:;
  /* 1219861e push 0 */
  push32((uint32_t)(0x0u));
  /* 12198620 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198622 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198624 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12198627 push edx */
  push32((uint32_t)(EDX));
  /* 12198628 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219862a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219862d push eax */
  push32((uint32_t)(EAX));
  /* 1219862e push 3 */
  push32((uint32_t)(0x3u));
  /* 12198630 call dword ptr [0x121c1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c1c90))), 0x12198636u);
  /* 12198636 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219863b jne 0x12198668 */
  if (!C.zf) goto L_12198668;
L_1219863d:;
  /* 1219863d push 0x121be8b4 */
  push32((uint32_t)(0x121be8b4u));
  /* 12198642 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 12198647 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198649 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219864b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219864d push 0 */
  push32((uint32_t)(0x0u));
  /* 1219864f call 0x12196bd0 */
  push32(0x12198654u); f_12196bd0();
  /* 12198654 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198657 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219865a jne 0x1219865d */
  if (!C.zf) goto L_1219865d;
  /* 1219865c int3  */
  x86_unimpl("int3 @ 0x1219865c");
L_1219865d:;
  /* 1219865d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219865f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198661 jne 0x1219863d */
  if (!C.zf) goto L_1219863d;
  /* 12198663 jmp 0x121989b5 */
  goto L_121989b5;
L_12198668:;
  /* 12198668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219866b push edx */
  push32((uint32_t)(EDX));
  /* 1219866c call 0x12199110 */
  push32(0x12198671u); f_12199110();
  /* 12198671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198676 jne 0x12198699 */
  if (!C.zf) goto L_12198699;
  /* 12198678 push 0x121be6f4 */
  push32((uint32_t)(0x121be6f4u));
  /* 1219867d push 0 */
  push32((uint32_t)(0x0u));
  /* 1219867f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12198684 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198689 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219868b call 0x12196bd0 */
  push32(0x12198690u); f_12196bd0();
  /* 12198690 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198693 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198696 jne 0x12198699 */
  if (!C.zf) goto L_12198699;
  /* 12198698 int3  */
  x86_unimpl("int3 @ 0x12198698");
L_12198699:;
  /* 12198699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219869b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219869d jne 0x12198668 */
  if (!C.zf) goto L_12198668;
  /* 1219869f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121986a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121986a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121986a8:;
  /* 121986a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121986ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121986ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121986b3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121986b6 je 0x121986fb */
  if (C.zf) goto L_121986fb;
  /* 121986b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121986bb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121986bf je 0x121986fb */
  if (C.zf) goto L_121986fb;
  /* 121986c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121986c4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121986c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121986cc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121986cf je 0x121986fb */
  if (C.zf) goto L_121986fb;
  /* 121986d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121986d4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121986d8 je 0x121986fb */
  if (C.zf) goto L_121986fb;
  /* 121986da push 0x121be88c */
  push32((uint32_t)(0x121be88cu));
  /* 121986df push 0 */
  push32((uint32_t)(0x0u));
  /* 121986e1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 121986e6 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 121986eb push 2 */
  push32((uint32_t)(0x2u));
  /* 121986ed call 0x12196bd0 */
  push32(0x121986f2u); f_12196bd0();
  /* 121986f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121986f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121986f8 jne 0x121986fb */
  if (!C.zf) goto L_121986fb;
  /* 121986fa int3  */
  x86_unimpl("int3 @ 0x121986fa");
L_121986fb:;
  /* 121986fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121986fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121986ff jne 0x121986a8 */
  if (!C.zf) goto L_121986a8;
  /* 12198701 mov eax, dword ptr [0x121c1a84] */
  EAX = (r32((uint32_t)(0x121c1a84)));
  /* 12198706 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12198709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219870b jne 0x121987d6 */
  if (!C.zf) goto L_121987d6;
  /* 12198711 push 4 */
  push32((uint32_t)(0x4u));
  /* 12198713 mov cl, byte ptr [0x121c1a90] */
  CL = (r8((uint32_t)(0x121c1a90)));
  /* 12198719 push ecx */
  push32((uint32_t)(ECX));
  /* 1219871a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219871d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198720 push edx */
  push32((uint32_t)(EDX));
  /* 12198721 call 0x12198c20 */
  push32(0x12198726u); f_12198c20();
  /* 12198726 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219872b jne 0x12198770 */
  if (!C.zf) goto L_12198770;
L_1219872d:;
  /* 1219872d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198730 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198733 push eax */
  push32((uint32_t)(EAX));
  /* 12198734 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198737 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1219873a push edx */
  push32((uint32_t)(EDX));
  /* 1219873b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219873e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12198741 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12198747 mov edx, dword ptr [ecx*4 + 0x121c1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c1a94)));
  /* 1219874e push edx */
  push32((uint32_t)(EDX));
  /* 1219874f push 0x121be860 */
  push32((uint32_t)(0x121be860u));
  /* 12198754 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198756 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198758 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219875a push 1 */
  push32((uint32_t)(0x1u));
  /* 1219875c call 0x12196bd0 */
  push32(0x12198761u); f_12196bd0();
  /* 12198761 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198764 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198767 jne 0x1219876a */
  if (!C.zf) goto L_1219876a;
  /* 12198769 int3  */
  x86_unimpl("int3 @ 0x12198769");
L_1219876a:;
  /* 1219876a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219876c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219876e jne 0x1219872d */
  if (!C.zf) goto L_1219872d;
L_12198770:;
  /* 12198770 push 4 */
  push32((uint32_t)(0x4u));
  /* 12198772 mov cl, byte ptr [0x121c1a90] */
  CL = (r8((uint32_t)(0x121c1a90)));
  /* 12198778 push ecx */
  push32((uint32_t)(ECX));
  /* 12198779 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219877c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1219877f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198782 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12198786 push edx */
  push32((uint32_t)(EDX));
  /* 12198787 call 0x12198c20 */
  push32(0x1219878cu); f_12198c20();
  /* 1219878c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219878f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198791 jne 0x121987d6 */
  if (!C.zf) goto L_121987d6;
L_12198793:;
  /* 12198793 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198796 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198799 push eax */
  push32((uint32_t)(EAX));
  /* 1219879a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219879d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121987a0 push edx */
  push32((uint32_t)(EDX));
  /* 121987a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121987a4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121987a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121987ad mov edx, dword ptr [ecx*4 + 0x121c1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c1a94)));
  /* 121987b4 push edx */
  push32((uint32_t)(EDX));
  /* 121987b5 push 0x121be834 */
  push32((uint32_t)(0x121be834u));
  /* 121987ba push 0 */
  push32((uint32_t)(0x0u));
  /* 121987bc push 0 */
  push32((uint32_t)(0x0u));
  /* 121987be push 0 */
  push32((uint32_t)(0x0u));
  /* 121987c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121987c2 call 0x12196bd0 */
  push32(0x121987c7u); f_12196bd0();
  /* 121987c7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121987ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121987cd jne 0x121987d0 */
  if (!C.zf) goto L_121987d0;
  /* 121987cf int3  */
  x86_unimpl("int3 @ 0x121987cf");
L_121987d0:;
  /* 121987d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121987d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121987d4 jne 0x12198793 */
  if (!C.zf) goto L_12198793;
L_121987d6:;
  /* 121987d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121987d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121987dd jne 0x1219884b */
  if (!C.zf) goto L_1219884b;
L_121987df:;
  /* 121987df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121987e2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121987e9 jne 0x121987f4 */
  if (!C.zf) goto L_121987f4;
  /* 121987eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121987ee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121987f2 je 0x12198815 */
  if (C.zf) goto L_12198815;
L_121987f4:;
  /* 121987f4 push 0x121be7f4 */
  push32((uint32_t)(0x121be7f4u));
  /* 121987f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121987fb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12198800 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198805 push 2 */
  push32((uint32_t)(0x2u));
  /* 12198807 call 0x12196bd0 */
  push32(0x1219880cu); f_12196bd0();
  /* 1219880c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219880f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198812 jne 0x12198815 */
  if (!C.zf) goto L_12198815;
  /* 12198814 int3  */
  x86_unimpl("int3 @ 0x12198814");
L_12198815:;
  /* 12198815 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198817 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198819 jne 0x121987df */
  if (!C.zf) goto L_121987df;
  /* 1219881b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219881e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12198821 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198824 push eax */
  push32((uint32_t)(EAX));
  /* 12198825 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198827 mov cl, byte ptr [0x121c1a91] */
  CL = (r8((uint32_t)(0x121c1a91)));
  /* 1219882d push ecx */
  push32((uint32_t)(ECX));
  /* 1219882e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198831 push edx */
  push32((uint32_t)(EDX));
  /* 12198832 call 0x1219b880 */
  push32(0x12198837u); f_1219b880();
  /* 12198837 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219883a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219883d push eax */
  push32((uint32_t)(EAX));
  /* 1219883e call 0x1219bc80 */
  push32(0x12198843u); f_1219bc80();
  /* 12198843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198846 jmp 0x121989b5 */
  goto L_121989b5;
L_1219884b:;
  /* 1219884b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219884e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198852 jne 0x12198861 */
  if (!C.zf) goto L_12198861;
  /* 12198854 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198858 jne 0x12198861 */
  if (!C.zf) goto L_12198861;
  /* 1219885a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12198861:;
  /* 12198861 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198864 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12198867 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219886a je 0x1219888d */
  if (C.zf) goto L_1219888d;
  /* 1219886c push 0x121be7d4 */
  push32((uint32_t)(0x121be7d4u));
  /* 12198871 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198873 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12198878 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 1219887d push 2 */
  push32((uint32_t)(0x2u));
  /* 1219887f call 0x12196bd0 */
  push32(0x12198884u); f_12196bd0();
  /* 12198884 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198887 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219888a jne 0x1219888d */
  if (!C.zf) goto L_1219888d;
  /* 1219888c int3  */
  x86_unimpl("int3 @ 0x1219888c");
L_1219888d:;
  /* 1219888d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219888f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198891 jne 0x12198861 */
  if (!C.zf) goto L_12198861;
  /* 12198893 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198896 mov eax, dword ptr [0x121c3750] */
  EAX = (r32((uint32_t)(0x121c3750)));
  /* 1219889b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219889e mov dword ptr [0x121c3750], eax */
  w32((uint32_t)(0x121c3750), (EAX));
  /* 121988a3 mov ecx, dword ptr [0x121c1a84] */
  ECX = (r32((uint32_t)(0x121c1a84)));
  /* 121988a9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 121988ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121988ae jne 0x1219898c */
  if (!C.zf) goto L_1219898c;
  /* 121988b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121988b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121988ba je 0x121988cc */
  if (C.zf) goto L_121988cc;
  /* 121988bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121988bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121988c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121988c4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121988c7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 121988ca jmp 0x1219890a */
  goto L_1219890a;
L_121988cc:;
  /* 121988cc mov ecx, dword ptr [0x121c3744] */
  ECX = (r32((uint32_t)(0x121c3744)));
  /* 121988d2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121988d5 je 0x121988f8 */
  if (C.zf) goto L_121988f8;
  /* 121988d7 push 0x121be7bc */
  push32((uint32_t)(0x121be7bcu));
  /* 121988dc push 0 */
  push32((uint32_t)(0x0u));
  /* 121988de push 0x42a */
  push32((uint32_t)(0x42au));
  /* 121988e3 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 121988e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121988ea call 0x12196bd0 */
  push32(0x121988efu); f_12196bd0();
  /* 121988ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121988f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121988f5 jne 0x121988f8 */
  if (!C.zf) goto L_121988f8;
  /* 121988f7 int3  */
  x86_unimpl("int3 @ 0x121988f7");
L_121988f8:;
  /* 121988f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121988fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121988fc jne 0x121988cc */
  if (!C.zf) goto L_121988cc;
  /* 121988fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198901 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12198904 mov dword ptr [0x121c3744], ecx */
  w32((uint32_t)(0x121c3744), (ECX));
L_1219890a:;
  /* 1219890a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219890d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198911 je 0x12198922 */
  if (C.zf) goto L_12198922;
  /* 12198913 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198916 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12198919 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219891c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219891e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12198920 jmp 0x1219895f */
  goto L_1219895f;
L_12198922:;
  /* 12198922 mov ecx, dword ptr [0x121c374c] */
  ECX = (r32((uint32_t)(0x121c374c)));
  /* 12198928 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219892b je 0x1219894e */
  if (C.zf) goto L_1219894e;
  /* 1219892d push 0x121be7a4 */
  push32((uint32_t)(0x121be7a4u));
  /* 12198932 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198934 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12198939 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 1219893e push 2 */
  push32((uint32_t)(0x2u));
  /* 12198940 call 0x12196bd0 */
  push32(0x12198945u); f_12196bd0();
  /* 12198945 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198948 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219894b jne 0x1219894e */
  if (!C.zf) goto L_1219894e;
  /* 1219894d int3  */
  x86_unimpl("int3 @ 0x1219894d");
L_1219894e:;
  /* 1219894e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12198950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12198952 jne 0x12198922 */
  if (!C.zf) goto L_12198922;
  /* 12198954 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198957 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12198959 mov dword ptr [0x121c374c], ecx */
  w32((uint32_t)(0x121c374c), (ECX));
L_1219895f:;
  /* 1219895f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198962 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12198965 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198968 push eax */
  push32((uint32_t)(EAX));
  /* 12198969 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219896b mov cl, byte ptr [0x121c1a91] */
  CL = (r8((uint32_t)(0x121c1a91)));
  /* 12198971 push ecx */
  push32((uint32_t)(ECX));
  /* 12198972 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198975 push edx */
  push32((uint32_t)(EDX));
  /* 12198976 call 0x1219b880 */
  push32(0x1219897bu); f_1219b880();
  /* 1219897b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219897e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198981 push eax */
  push32((uint32_t)(EAX));
  /* 12198982 call 0x1219bc80 */
  push32(0x12198987u); f_1219bc80();
  /* 12198987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219898a jmp 0x121989b5 */
  goto L_121989b5;
L_1219898c:;
  /* 1219898c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219898f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12198996 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198999 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1219899c push eax */
  push32((uint32_t)(EAX));
  /* 1219899d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219899f mov cl, byte ptr [0x121c1a91] */
  CL = (r8((uint32_t)(0x121c1a91)));
  /* 121989a5 push ecx */
  push32((uint32_t)(ECX));
  /* 121989a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121989a9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121989ac push edx */
  push32((uint32_t)(EDX));
  /* 121989ad call 0x1219b880 */
  push32(0x121989b2u); f_1219b880();
  /* 121989b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121989b5:;
  /* 121989b5 pop edi */
  EDI = (pop32());
  /* 121989b6 pop esi */
  ESI = (pop32());
  /* 121989b7 pop ebx */
  EBX = (pop32());
  /* 121989b8 mov esp, ebp */
  ESP = (EBP);
  /* 121989ba pop ebp */
  EBP = (pop32());
  /* 121989bb ret  */
  ESPCHK(0x121985d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x121989c0 (19 bytes, 9 insns) */
void f_121989c0(void) {
  FTRACE(0x121989c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121989c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121989c1 mov ebp, esp */
  EBP = (ESP);
  /* 121989c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121989c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121989c8 push eax */
  push32((uint32_t)(EAX));
  /* 121989c9 call 0x121989e0 */
  push32(0x121989ceu); f_121989e0();
  /* 121989ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121989d1 pop ebp */
  EBP = (pop32());
  /* 121989d2 ret  */
  ESPCHK(0x121989c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089e0 @ 0x121989e0 (342 bytes, 119 insns) */
void f_121989e0(void) {
  FTRACE(0x121989e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121989e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121989e1 mov ebp, esp */
  EBP = (ESP);
  /* 121989e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121989e6 push ebx */
  push32((uint32_t)(EBX));
  /* 121989e7 push esi */
  push32((uint32_t)(ESI));
  /* 121989e8 push edi */
  push32((uint32_t)(EDI));
  /* 121989e9 mov eax, dword ptr [0x121c1a84] */
  EAX = (r32((uint32_t)(0x121c1a84)));
  /* 121989ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 121989f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121989f3 je 0x12198a25 */
  if (C.zf) goto L_12198a25;
L_121989f5:;
  /* 121989f5 call 0x12198cb0 */
  push32(0x121989fau); f_12198cb0();
  /* 121989fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121989fc jne 0x12198a1f */
  if (!C.zf) goto L_12198a1f;
  /* 121989fe push 0x121be5f0 */
  push32((uint32_t)(0x121be5f0u));
  /* 12198a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198a05 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12198a0a push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198a0f push 2 */
  push32((uint32_t)(0x2u));
  /* 12198a11 call 0x12196bd0 */
  push32(0x12198a16u); f_12196bd0();
  /* 12198a16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198a19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198a1c jne 0x12198a1f */
  if (!C.zf) goto L_12198a1f;
  /* 12198a1e int3  */
  x86_unimpl("int3 @ 0x12198a1e");
L_12198a1f:;
  /* 12198a1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198a21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198a23 jne 0x121989f5 */
  if (!C.zf) goto L_121989f5;
L_12198a25:;
  /* 12198a25 push 9 */
  push32((uint32_t)(0x9u));
  /* 12198a27 call 0x1219b510 */
  push32(0x12198a2cu); f_1219b510();
  /* 12198a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12198a2f:;
  /* 12198a2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198a32 push edx */
  push32((uint32_t)(EDX));
  /* 12198a33 call 0x12199110 */
  push32(0x12198a38u); f_12199110();
  /* 12198a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198a3d jne 0x12198a60 */
  if (!C.zf) goto L_12198a60;
  /* 12198a3f push 0x121be6f4 */
  push32((uint32_t)(0x121be6f4u));
  /* 12198a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198a46 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12198a4b push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198a50 push 2 */
  push32((uint32_t)(0x2u));
  /* 12198a52 call 0x12196bd0 */
  push32(0x12198a57u); f_12196bd0();
  /* 12198a57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198a5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198a5d jne 0x12198a60 */
  if (!C.zf) goto L_12198a60;
  /* 12198a5f int3  */
  x86_unimpl("int3 @ 0x12198a5f");
L_12198a60:;
  /* 12198a60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198a62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198a64 jne 0x12198a2f */
  if (!C.zf) goto L_12198a2f;
  /* 12198a66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198a69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12198a6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12198a6f:;
  /* 12198a6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198a72 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12198a75 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12198a7a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198a7d je 0x12198ac2 */
  if (C.zf) goto L_12198ac2;
  /* 12198a7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198a82 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198a86 je 0x12198ac2 */
  if (C.zf) goto L_12198ac2;
  /* 12198a88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198a8b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12198a8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12198a93 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198a96 je 0x12198ac2 */
  if (C.zf) goto L_12198ac2;
  /* 12198a98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198a9b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198a9f je 0x12198ac2 */
  if (C.zf) goto L_12198ac2;
  /* 12198aa1 push 0x121be88c */
  push32((uint32_t)(0x121be88cu));
  /* 12198aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198aa8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12198aad push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198ab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12198ab4 call 0x12196bd0 */
  push32(0x12198ab9u); f_12196bd0();
  /* 12198ab9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198abc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198abf jne 0x12198ac2 */
  if (!C.zf) goto L_12198ac2;
  /* 12198ac1 int3  */
  x86_unimpl("int3 @ 0x12198ac1");
L_12198ac2:;
  /* 12198ac2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12198ac4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12198ac6 jne 0x12198a6f */
  if (!C.zf) goto L_12198a6f;
  /* 12198ac8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198acb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198acf jne 0x12198ade */
  if (!C.zf) goto L_12198ade;
  /* 12198ad1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198ad5 jne 0x12198ade */
  if (!C.zf) goto L_12198ade;
  /* 12198ad7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12198ade:;
  /* 12198ade mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198ae1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198ae5 je 0x12198b19 */
  if (C.zf) goto L_12198b19;
L_12198ae7:;
  /* 12198ae7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198aea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12198aed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198af0 je 0x12198b13 */
  if (C.zf) goto L_12198b13;
  /* 12198af2 push 0x121be7d4 */
  push32((uint32_t)(0x121be7d4u));
  /* 12198af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198af9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12198afe push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198b03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12198b05 call 0x12196bd0 */
  push32(0x12198b0au); f_12196bd0();
  /* 12198b0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198b0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198b10 jne 0x12198b13 */
  if (!C.zf) goto L_12198b13;
  /* 12198b12 int3  */
  x86_unimpl("int3 @ 0x12198b12");
L_12198b13:;
  /* 12198b13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198b15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198b17 jne 0x12198ae7 */
  if (!C.zf) goto L_12198ae7;
L_12198b19:;
  /* 12198b19 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198b1c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12198b1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12198b22 push 9 */
  push32((uint32_t)(0x9u));
  /* 12198b24 call 0x1219b5b0 */
  push32(0x12198b29u); f_1219b5b0();
  /* 12198b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198b2f pop edi */
  EDI = (pop32());
  /* 12198b30 pop esi */
  ESI = (pop32());
  /* 12198b31 pop ebx */
  EBX = (pop32());
  /* 12198b32 mov esp, ebp */
  ESP = (EBP);
  /* 12198b34 pop ebp */
  EBP = (pop32());
  /* 12198b35 ret  */
  ESPCHK(0x121989e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b40 @ 0x12198b40 (28 bytes, 11 insns) */
void f_12198b40(void) {
  FTRACE(0x12198b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12198b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12198b41 mov ebp, esp */
  EBP = (ESP);
  /* 12198b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12198b44 mov eax, dword ptr [0x121c1a8c] */
  EAX = (r32((uint32_t)(0x121c1a8c)));
  /* 12198b49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12198b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198b4f mov dword ptr [0x121c1a8c], ecx */
  w32((uint32_t)(0x121c1a8c), (ECX));
  /* 12198b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198b58 mov esp, ebp */
  ESP = (EBP);
  /* 12198b5a pop ebp */
  EBP = (pop32());
  /* 12198b5b ret  */
  ESPCHK(0x12198b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b60 @ 0x12198b60 (157 bytes, 59 insns) */
void f_12198b60(void) {
  FTRACE(0x12198b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12198b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12198b61 mov ebp, esp */
  EBP = (ESP);
  /* 12198b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12198b64 push ebx */
  push32((uint32_t)(EBX));
  /* 12198b65 push esi */
  push32((uint32_t)(ESI));
  /* 12198b66 push edi */
  push32((uint32_t)(EDI));
  /* 12198b67 push 9 */
  push32((uint32_t)(0x9u));
  /* 12198b69 call 0x1219b510 */
  push32(0x12198b6eu); f_1219b510();
  /* 12198b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198b71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198b74 push eax */
  push32((uint32_t)(EAX));
  /* 12198b75 call 0x12199110 */
  push32(0x12198b7au); f_12199110();
  /* 12198b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198b7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198b7f je 0x12198bec */
  if (C.zf) goto L_12198bec;
  /* 12198b81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198b84 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12198b87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12198b8a:;
  /* 12198b8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198b8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12198b90 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12198b95 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198b98 je 0x12198bdd */
  if (C.zf) goto L_12198bdd;
  /* 12198b9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198b9d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198ba1 je 0x12198bdd */
  if (C.zf) goto L_12198bdd;
  /* 12198ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198ba6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12198ba9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12198bae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198bb1 je 0x12198bdd */
  if (C.zf) goto L_12198bdd;
  /* 12198bb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198bb6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198bba je 0x12198bdd */
  if (C.zf) goto L_12198bdd;
  /* 12198bbc push 0x121be88c */
  push32((uint32_t)(0x121be88cu));
  /* 12198bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198bc3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12198bc8 push 0x121be5e4 */
  push32((uint32_t)(0x121be5e4u));
  /* 12198bcd push 2 */
  push32((uint32_t)(0x2u));
  /* 12198bcf call 0x12196bd0 */
  push32(0x12198bd4u); f_12196bd0();
  /* 12198bd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198bd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198bda jne 0x12198bdd */
  if (!C.zf) goto L_12198bdd;
  /* 12198bdc int3  */
  x86_unimpl("int3 @ 0x12198bdc");
L_12198bdd:;
  /* 12198bdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12198bdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12198be1 jne 0x12198b8a */
  if (!C.zf) goto L_12198b8a;
  /* 12198be3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198be6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12198be9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12198bec:;
  /* 12198bec push 9 */
  push32((uint32_t)(0x9u));
  /* 12198bee call 0x1219b5b0 */
  push32(0x12198bf3u); f_1219b5b0();
  /* 12198bf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198bf6 pop edi */
  EDI = (pop32());
  /* 12198bf7 pop esi */
  ESI = (pop32());
  /* 12198bf8 pop ebx */
  EBX = (pop32());
  /* 12198bf9 mov esp, ebp */
  ESP = (EBP);
  /* 12198bfb pop ebp */
  EBP = (pop32());
  /* 12198bfc ret  */
  ESPCHK(0x12198b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c00 @ 0x12198c00 (28 bytes, 11 insns) */
void f_12198c00(void) {
  FTRACE(0x12198c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12198c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12198c01 mov ebp, esp */
  EBP = (ESP);
  /* 12198c03 push ecx */
  push32((uint32_t)(ECX));
  /* 12198c04 mov eax, dword ptr [0x121c1c90] */
  EAX = (r32((uint32_t)(0x121c1c90)));
  /* 12198c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12198c0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198c0f mov dword ptr [0x121c1c90], ecx */
  w32((uint32_t)(0x121c1c90), (ECX));
  /* 12198c15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198c18 mov esp, ebp */
  ESP = (EBP);
  /* 12198c1a pop ebp */
  EBP = (pop32());
  /* 12198c1b ret  */
  ESPCHK(0x12198c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c20 @ 0x12198c20 (136 bytes, 55 insns) */
void f_12198c20(void) {
  FTRACE(0x12198c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12198c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12198c21 mov ebp, esp */
  EBP = (ESP);
  /* 12198c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12198c24 push ebx */
  push32((uint32_t)(EBX));
  /* 12198c25 push esi */
  push32((uint32_t)(ESI));
  /* 12198c26 push edi */
  push32((uint32_t)(EDI));
  /* 12198c27 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12198c2e:;
  /* 12198c2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12198c31 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12198c34 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12198c37 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12198c3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198c3c je 0x12198c9e */
  if (C.zf) goto L_12198c9e;
  /* 12198c3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198c43 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12198c45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12198c48 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12198c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198c51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198c54 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12198c57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198c59 je 0x12198c9c */
  if (C.zf) goto L_12198c9c;
L_12198c5b:;
  /* 12198c5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12198c5e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12198c63 push eax */
  push32((uint32_t)(EAX));
  /* 12198c64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198c67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12198c69 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12198c6c push edx */
  push32((uint32_t)(EDX));
  /* 12198c6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12198c70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12198c73 push eax */
  push32((uint32_t)(EAX));
  /* 12198c74 push 0x121be8d0 */
  push32((uint32_t)(0x121be8d0u));
  /* 12198c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12198c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12198c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12198c81 call 0x12196bd0 */
  push32(0x12198c86u); f_12196bd0();
  /* 12198c86 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198c89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198c8c jne 0x12198c8f */
  if (!C.zf) goto L_12198c8f;
  /* 12198c8e int3  */
  x86_unimpl("int3 @ 0x12198c8e");
L_12198c8f:;
  /* 12198c8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198c91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198c93 jne 0x12198c5b */
  if (!C.zf) goto L_12198c5b;
  /* 12198c95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12198c9c:;
  /* 12198c9c jmp 0x12198c2e */
  goto L_12198c2e;
L_12198c9e:;
  /* 12198c9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12198ca1 pop edi */
  EDI = (pop32());
  /* 12198ca2 pop esi */
  ESI = (pop32());
  /* 12198ca3 pop ebx */
  EBX = (pop32());
  /* 12198ca4 mov esp, ebp */
  ESP = (EBP);
  /* 12198ca6 pop ebp */
  EBP = (pop32());
  /* 12198ca7 ret  */
  ESPCHK(0x12198c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb0 @ 0x12198cb0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12198cb0(void) {
  FTRACE(0x12198cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12198cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12198cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12198cb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12198cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 12198cb7 push esi */
  push32((uint32_t)(ESI));
  /* 12198cb8 push edi */
  push32((uint32_t)(EDI));
  /* 12198cb9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12198cc0 mov eax, dword ptr [0x121c1a84] */
  EAX = (r32((uint32_t)(0x121c1a84)));
  /* 12198cc5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12198cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198cca jne 0x12198cd6 */
  if (!C.zf) goto L_12198cd6;
  /* 12198ccc mov eax, 1 */
  EAX = (0x1u);
  /* 12198cd1 jmp 0x12199008 */
  goto L_12199008;
L_12198cd6:;
  /* 12198cd6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12198cd8 call 0x1219b510 */
  push32(0x12198cddu); f_1219b510();
  /* 12198cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198ce0 call 0x1219bcf0 */
  push32(0x12198ce5u); f_1219bcf0();
  /* 12198ce5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12198ce8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198cec je 0x12198df9 */
  if (C.zf) goto L_12198df9;
  /* 12198cf2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198cf6 je 0x12198df9 */
  if (C.zf) goto L_12198df9;
  /* 12198cfc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12198cff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12198d02 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12198d05 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198d08 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12198d0b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198d0f ja 0x12198dc2 */
  if ((!C.cf&&!C.zf)) goto L_12198dc2;
  /* 12198d15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12198d18 jmp dword ptr [eax*4 + 0x1219900f] */
  switch (EAX) {
    case 0: goto L_12198d9a;
    case 1: goto L_12198d72;
    case 2: goto L_12198d4a;
    case 3: goto L_12198d1f;
    default: x86_unimpl("switch@0x12198d18 out of table"); return;
  }
L_12198d1f:;
  /* 12198d1f push 0x121bea24 */
  push32((uint32_t)(0x121bea24u));
  /* 12198d24 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 12198d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d31 call 0x12196bd0 */
  push32(0x12198d36u); f_12196bd0();
  /* 12198d36 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198d39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198d3c jne 0x12198d3f */
  if (!C.zf) goto L_12198d3f;
  /* 12198d3e int3  */
  x86_unimpl("int3 @ 0x12198d3e");
L_12198d3f:;
  /* 12198d3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198d41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198d43 jne 0x12198d1f */
  if (!C.zf) goto L_12198d1f;
  /* 12198d45 jmp 0x12198de8 */
  goto L_12198de8;
L_12198d4a:;
  /* 12198d4a push 0x121bea00 */
  push32((uint32_t)(0x121bea00u));
  /* 12198d4f push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 12198d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d5c call 0x12196bd0 */
  push32(0x12198d61u); f_12196bd0();
  /* 12198d61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198d64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198d67 jne 0x12198d6a */
  if (!C.zf) goto L_12198d6a;
  /* 12198d69 int3  */
  x86_unimpl("int3 @ 0x12198d69");
L_12198d6a:;
  /* 12198d6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12198d6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12198d6e jne 0x12198d4a */
  if (!C.zf) goto L_12198d4a;
  /* 12198d70 jmp 0x12198de8 */
  goto L_12198de8;
L_12198d72:;
  /* 12198d72 push 0x121be9dc */
  push32((uint32_t)(0x121be9dcu));
  /* 12198d77 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 12198d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198d84 call 0x12196bd0 */
  push32(0x12198d89u); f_12196bd0();
  /* 12198d89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198d8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198d8f jne 0x12198d92 */
  if (!C.zf) goto L_12198d92;
  /* 12198d91 int3  */
  x86_unimpl("int3 @ 0x12198d91");
L_12198d92:;
  /* 12198d92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198d96 jne 0x12198d72 */
  if (!C.zf) goto L_12198d72;
  /* 12198d98 jmp 0x12198de8 */
  goto L_12198de8;
L_12198d9a:;
  /* 12198d9a push 0x121be9b8 */
  push32((uint32_t)(0x121be9b8u));
  /* 12198d9f push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 12198da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198daa push 0 */
  push32((uint32_t)(0x0u));
  /* 12198dac call 0x12196bd0 */
  push32(0x12198db1u); f_12196bd0();
  /* 12198db1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198db4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198db7 jne 0x12198dba */
  if (!C.zf) goto L_12198dba;
  /* 12198db9 int3  */
  x86_unimpl("int3 @ 0x12198db9");
L_12198dba:;
  /* 12198dba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198dbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198dbe jne 0x12198d9a */
  if (!C.zf) goto L_12198d9a;
  /* 12198dc0 jmp 0x12198de8 */
  goto L_12198de8;
L_12198dc2:;
  /* 12198dc2 push 0x121be98c */
  push32((uint32_t)(0x121be98cu));
  /* 12198dc7 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 12198dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 12198dce push 0 */
  push32((uint32_t)(0x0u));
  /* 12198dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198dd4 call 0x12196bd0 */
  push32(0x12198dd9u); f_12196bd0();
  /* 12198dd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198ddc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198ddf jne 0x12198de2 */
  if (!C.zf) goto L_12198de2;
  /* 12198de1 int3  */
  x86_unimpl("int3 @ 0x12198de1");
L_12198de2:;
  /* 12198de2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12198de4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12198de6 jne 0x12198dc2 */
  if (!C.zf) goto L_12198dc2;
L_12198de8:;
  /* 12198de8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12198dea call 0x1219b5b0 */
  push32(0x12198defu); f_1219b5b0();
  /* 12198def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198df2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198df4 jmp 0x12199008 */
  goto L_12199008;
L_12198df9:;
  /* 12198df9 mov eax, dword ptr [0x121c374c] */
  EAX = (r32((uint32_t)(0x121c374c)));
  /* 12198dfe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12198e01 jmp 0x12198e0b */
  goto L_12198e0b;
L_12198e03:;
  /* 12198e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198e06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12198e08 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12198e0b:;
  /* 12198e0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198e0f je 0x12198ffb */
  if (C.zf) goto L_12198ffb;
  /* 12198e15 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12198e1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198e1f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12198e22 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12198e28 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198e2b je 0x12198e50 */
  if (C.zf) goto L_12198e50;
  /* 12198e2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198e30 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198e34 je 0x12198e50 */
  if (C.zf) goto L_12198e50;
  /* 12198e36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198e39 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12198e3c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12198e42 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198e45 je 0x12198e50 */
  if (C.zf) goto L_12198e50;
  /* 12198e47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198e4a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198e4e jne 0x12198e68 */
  if (!C.zf) goto L_12198e68;
L_12198e50:;
  /* 12198e50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198e53 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12198e56 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12198e5c mov edx, dword ptr [ecx*4 + 0x121c1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c1a94)));
  /* 12198e63 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12198e66 jmp 0x12198e6f */
  goto L_12198e6f;
L_12198e68:;
  /* 12198e68 mov dword ptr [ebp - 0x14], 0x121be984 */
  w32((uint32_t)(EBP + -0x14), (0x121be984u));
L_12198e6f:;
  /* 12198e6f push 4 */
  push32((uint32_t)(0x4u));
  /* 12198e71 mov al, byte ptr [0x121c1a90] */
  AL = (r8((uint32_t)(0x121c1a90)));
  /* 12198e76 push eax */
  push32((uint32_t)(EAX));
  /* 12198e77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198e7a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198e7d push ecx */
  push32((uint32_t)(ECX));
  /* 12198e7e call 0x12198c20 */
  push32(0x12198e83u); f_12198c20();
  /* 12198e83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198e88 jne 0x12198ec4 */
  if (!C.zf) goto L_12198ec4;
L_12198e8a:;
  /* 12198e8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198e8d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198e90 push edx */
  push32((uint32_t)(EDX));
  /* 12198e91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198e94 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12198e97 push ecx */
  push32((uint32_t)(ECX));
  /* 12198e98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12198e9b push edx */
  push32((uint32_t)(EDX));
  /* 12198e9c push 0x121be860 */
  push32((uint32_t)(0x121be860u));
  /* 12198ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198ea9 call 0x12196bd0 */
  push32(0x12198eaeu); f_12196bd0();
  /* 12198eae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198eb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198eb4 jne 0x12198eb7 */
  if (!C.zf) goto L_12198eb7;
  /* 12198eb6 int3  */
  x86_unimpl("int3 @ 0x12198eb6");
L_12198eb7:;
  /* 12198eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198ebb jne 0x12198e8a */
  if (!C.zf) goto L_12198e8a;
  /* 12198ebd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12198ec4:;
  /* 12198ec4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12198ec6 mov cl, byte ptr [0x121c1a90] */
  CL = (r8((uint32_t)(0x121c1a90)));
  /* 12198ecc push ecx */
  push32((uint32_t)(ECX));
  /* 12198ecd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198ed0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12198ed3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198ed6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12198eda push edx */
  push32((uint32_t)(EDX));
  /* 12198edb call 0x12198c20 */
  push32(0x12198ee0u); f_12198c20();
  /* 12198ee0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198ee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198ee5 jne 0x12198f21 */
  if (!C.zf) goto L_12198f21;
L_12198ee7:;
  /* 12198ee7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198eea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198eed push eax */
  push32((uint32_t)(EAX));
  /* 12198eee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198ef1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12198ef4 push edx */
  push32((uint32_t)(EDX));
  /* 12198ef5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12198ef8 push eax */
  push32((uint32_t)(EAX));
  /* 12198ef9 push 0x121be834 */
  push32((uint32_t)(0x121be834u));
  /* 12198efe push 0 */
  push32((uint32_t)(0x0u));
  /* 12198f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198f06 call 0x12196bd0 */
  push32(0x12198f0bu); f_12196bd0();
  /* 12198f0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198f0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198f11 jne 0x12198f14 */
  if (!C.zf) goto L_12198f14;
  /* 12198f13 int3  */
  x86_unimpl("int3 @ 0x12198f13");
L_12198f14:;
  /* 12198f14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12198f16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12198f18 jne 0x12198ee7 */
  if (!C.zf) goto L_12198ee7;
  /* 12198f1a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12198f21:;
  /* 12198f21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198f24 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198f28 jne 0x12198f7a */
  if (!C.zf) goto L_12198f7a;
  /* 12198f2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198f2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12198f30 push ecx */
  push32((uint32_t)(ECX));
  /* 12198f31 mov dl, byte ptr [0x121c1a91] */
  DL = (r8((uint32_t)(0x121c1a91)));
  /* 12198f37 push edx */
  push32((uint32_t)(EDX));
  /* 12198f38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198f3b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198f3e push eax */
  push32((uint32_t)(EAX));
  /* 12198f3f call 0x12198c20 */
  push32(0x12198f44u); f_12198c20();
  /* 12198f44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198f47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198f49 jne 0x12198f7a */
  if (!C.zf) goto L_12198f7a;
L_12198f4b:;
  /* 12198f4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198f4e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198f51 push ecx */
  push32((uint32_t)(ECX));
  /* 12198f52 push 0x121be958 */
  push32((uint32_t)(0x121be958u));
  /* 12198f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12198f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12198f5f call 0x12196bd0 */
  push32(0x12198f64u); f_12196bd0();
  /* 12198f64 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198f67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198f6a jne 0x12198f6d */
  if (!C.zf) goto L_12198f6d;
  /* 12198f6c int3  */
  x86_unimpl("int3 @ 0x12198f6c");
L_12198f6d:;
  /* 12198f6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12198f6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12198f71 jne 0x12198f4b */
  if (!C.zf) goto L_12198f4b;
  /* 12198f73 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12198f7a:;
  /* 12198f7a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198f7e jne 0x12198ff6 */
  if (!C.zf) goto L_12198ff6;
  /* 12198f80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198f83 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198f87 je 0x12198fbc */
  if (C.zf) goto L_12198fbc;
L_12198f89:;
  /* 12198f89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198f8c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12198f8f push edx */
  push32((uint32_t)(EDX));
  /* 12198f90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198f93 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12198f96 push ecx */
  push32((uint32_t)(ECX));
  /* 12198f97 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12198f9a push edx */
  push32((uint32_t)(EDX));
  /* 12198f9b push 0x121be938 */
  push32((uint32_t)(0x121be938u));
  /* 12198fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198fa8 call 0x12196bd0 */
  push32(0x12198fadu); f_12196bd0();
  /* 12198fad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198fb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198fb3 jne 0x12198fb6 */
  if (!C.zf) goto L_12198fb6;
  /* 12198fb5 int3  */
  x86_unimpl("int3 @ 0x12198fb5");
L_12198fb6:;
  /* 12198fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12198fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12198fba jne 0x12198f89 */
  if (!C.zf) goto L_12198f89;
L_12198fbc:;
  /* 12198fbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198fbf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12198fc2 push edx */
  push32((uint32_t)(EDX));
  /* 12198fc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12198fc6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12198fc9 push eax */
  push32((uint32_t)(EAX));
  /* 12198fca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12198fcd push ecx */
  push32((uint32_t)(ECX));
  /* 12198fce push 0x121be90c */
  push32((uint32_t)(0x121be90cu));
  /* 12198fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12198fdb call 0x12196bd0 */
  push32(0x12198fe0u); f_12196bd0();
  /* 12198fe0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12198fe3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12198fe6 jne 0x12198fe9 */
  if (!C.zf) goto L_12198fe9;
  /* 12198fe8 int3  */
  x86_unimpl("int3 @ 0x12198fe8");
L_12198fe9:;
  /* 12198fe9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12198feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12198fed jne 0x12198fbc */
  if (!C.zf) goto L_12198fbc;
  /* 12198fef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12198ff6:;
  /* 12198ff6 jmp 0x12198e03 */
  goto L_12198e03;
L_12198ffb:;
  /* 12198ffb push 9 */
  push32((uint32_t)(0x9u));
  /* 12198ffd call 0x1219b5b0 */
  push32(0x12199002u); f_1219b5b0();
  /* 12199002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199005 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12199008:;
  /* 12199008 pop edi */
  EDI = (pop32());
  /* 12199009 pop esi */
  ESI = (pop32());
  /* 1219900a pop ebx */
  EBX = (pop32());
  /* 1219900b mov esp, ebp */
  ESP = (EBP);
  /* 1219900d pop ebp */
  EBP = (pop32());
  /* 1219900e ret  */
  ESPCHK(0x12198cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x12199020 (34 bytes, 13 insns) */
void f_12199020(void) {
  FTRACE(0x12199020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199020 push ebp */
  push32((uint32_t)(EBP));
  /* 12199021 mov ebp, esp */
  EBP = (ESP);
  /* 12199023 push ecx */
  push32((uint32_t)(ECX));
  /* 12199024 mov eax, dword ptr [0x121c1a84] */
  EAX = (r32((uint32_t)(0x121c1a84)));
  /* 12199029 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219902c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199030 je 0x1219903b */
  if (C.zf) goto L_1219903b;
  /* 12199032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199035 mov dword ptr [0x121c1a84], ecx */
  w32((uint32_t)(0x121c1a84), (ECX));
L_1219903b:;
  /* 1219903b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219903e mov esp, ebp */
  ESP = (EBP);
  /* 12199040 pop ebp */
  EBP = (pop32());
  /* 12199041 ret  */
  ESPCHK(0x12199020u, _esp0);
  ESP += 4; return;
}

/* FUN_10009050 @ 0x12199050 (103 bytes, 38 insns) */
void f_12199050(void) {
  FTRACE(0x12199050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199050 push ebp */
  push32((uint32_t)(EBP));
  /* 12199051 mov ebp, esp */
  EBP = (ESP);
  /* 12199053 push ecx */
  push32((uint32_t)(ECX));
  /* 12199054 mov eax, dword ptr [0x121c1a84] */
  EAX = (r32((uint32_t)(0x121c1a84)));
  /* 12199059 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1219905c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219905e jne 0x12199062 */
  if (!C.zf) goto L_12199062;
  /* 12199060 jmp 0x121990b3 */
  goto L_121990b3;
L_12199062:;
  /* 12199062 push 9 */
  push32((uint32_t)(0x9u));
  /* 12199064 call 0x1219b510 */
  push32(0x12199069u); f_1219b510();
  /* 12199069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219906c mov ecx, dword ptr [0x121c374c] */
  ECX = (r32((uint32_t)(0x121c374c)));
  /* 12199072 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12199075 jmp 0x1219907f */
  goto L_1219907f;
L_12199077:;
  /* 12199077 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219907a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219907c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219907f:;
  /* 1219907f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199083 je 0x121990a9 */
  if (C.zf) goto L_121990a9;
  /* 12199085 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199088 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1219908b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12199091 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199094 jne 0x121990a7 */
  if (!C.zf) goto L_121990a7;
  /* 12199096 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12199099 push eax */
  push32((uint32_t)(EAX));
  /* 1219909a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219909d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121990a0 push ecx */
  push32((uint32_t)(ECX));
  /* 121990a1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x121990a4u);
  /* 121990a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121990a7:;
  /* 121990a7 jmp 0x12199077 */
  goto L_12199077;
L_121990a9:;
  /* 121990a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 121990ab call 0x1219b5b0 */
  push32(0x121990b0u); f_1219b5b0();
  /* 121990b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121990b3:;
  /* 121990b3 mov esp, ebp */
  ESP = (EBP);
  /* 121990b5 pop ebp */
  EBP = (pop32());
  /* 121990b6 ret  */
  ESPCHK(0x12199050u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x121990c0 (75 bytes, 28 insns) */
void f_121990c0(void) {
  FTRACE(0x121990c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121990c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121990c1 mov ebp, esp */
  EBP = (ESP);
  /* 121990c3 push ecx */
  push32((uint32_t)(ECX));
  /* 121990c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121990c8 je 0x121990fd */
  if (C.zf) goto L_121990fd;
  /* 121990ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121990cd push eax */
  push32((uint32_t)(EAX));
  /* 121990ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121990d1 push ecx */
  push32((uint32_t)(ECX));
  /* 121990d2 call dword ptr [0x121c6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6378))), 0x121990d8u);
  /* 121990d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121990da jne 0x121990fd */
  if (!C.zf) goto L_121990fd;
  /* 121990dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121990e0 je 0x121990f4 */
  if (C.zf) goto L_121990f4;
  /* 121990e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121990e5 push edx */
  push32((uint32_t)(EDX));
  /* 121990e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121990e9 push eax */
  push32((uint32_t)(EAX));
  /* 121990ea call dword ptr [0x121c6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6374))), 0x121990f0u);
  /* 121990f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121990f2 jne 0x121990fd */
  if (!C.zf) goto L_121990fd;
L_121990f4:;
  /* 121990f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121990fb jmp 0x12199104 */
  goto L_12199104;
L_121990fd:;
  /* 121990fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12199104:;
  /* 12199104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199107 mov esp, ebp */
  ESP = (EBP);
  /* 12199109 pop ebp */
  EBP = (pop32());
  /* 1219910a ret  */
  ESPCHK(0x121990c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009110 @ 0x12199110 (134 bytes, 50 insns) */
void f_12199110(void) {
  FTRACE(0x12199110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199110 push ebp */
  push32((uint32_t)(EBP));
  /* 12199111 mov ebp, esp */
  EBP = (ESP);
  /* 12199113 push ecx */
  push32((uint32_t)(ECX));
  /* 12199114 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199118 jne 0x1219911e */
  if (!C.zf) goto L_1219911e;
  /* 1219911a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219911c jmp 0x12199192 */
  goto L_12199192;
L_1219911e:;
  /* 1219911e push 1 */
  push32((uint32_t)(0x1u));
  /* 12199120 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12199122 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199125 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199128 push eax */
  push32((uint32_t)(EAX));
  /* 12199129 call 0x121990c0 */
  push32(0x1219912eu); f_121990c0();
  /* 1219912e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199133 jne 0x12199139 */
  if (!C.zf) goto L_12199139;
  /* 12199135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12199137 jmp 0x12199192 */
  goto L_12199192;
L_12199139:;
  /* 12199139 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219913c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219913f push ecx */
  push32((uint32_t)(ECX));
  /* 12199140 call 0x1219be10 */
  push32(0x12199145u); f_1219be10();
  /* 12199145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199148 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219914b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219914f je 0x12199166 */
  if (C.zf) goto L_12199166;
  /* 12199151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199154 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199157 push edx */
  push32((uint32_t)(EDX));
  /* 12199158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219915b push eax */
  push32((uint32_t)(EAX));
  /* 1219915c call 0x1219be70 */
  push32(0x12199161u); f_1219be70();
  /* 12199161 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199164 jmp 0x12199192 */
  goto L_12199192;
L_12199166:;
  /* 12199166 mov ecx, dword ptr [0x121c3700] */
  ECX = (r32((uint32_t)(0x121c3700)));
  /* 1219916c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12199172 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12199174 je 0x1219917d */
  if (C.zf) goto L_1219917d;
  /* 12199176 mov eax, 1 */
  EAX = (0x1u);
  /* 1219917b jmp 0x12199192 */
  goto L_12199192;
L_1219917d:;
  /* 1219917d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199180 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199183 push edx */
  push32((uint32_t)(EDX));
  /* 12199184 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199186 mov eax, dword ptr [0x121c50ac] */
  EAX = (r32((uint32_t)(0x121c50ac)));
  /* 1219918b push eax */
  push32((uint32_t)(EAX));
  /* 1219918c call dword ptr [0x121c637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c637c))), 0x12199192u);
L_12199192:;
  /* 12199192 mov esp, ebp */
  ESP = (EBP);
  /* 12199194 pop ebp */
  EBP = (pop32());
  /* 12199195 ret  */
  ESPCHK(0x12199110u, _esp0);
  ESP += 4; return;
}

/* FUN_100091a0 @ 0x121991a0 (227 bytes, 80 insns) */
void f_121991a0(void) {
  FTRACE(0x121991a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121991a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121991a1 mov ebp, esp */
  EBP = (ESP);
  /* 121991a3 push ecx */
  push32((uint32_t)(ECX));
  /* 121991a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121991a7 push eax */
  push32((uint32_t)(EAX));
  /* 121991a8 call 0x12199110 */
  push32(0x121991adu); f_12199110();
  /* 121991ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121991b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121991b2 jne 0x121991bb */
  if (!C.zf) goto L_121991bb;
  /* 121991b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121991b6 jmp 0x1219927f */
  goto L_1219927f;
L_121991bb:;
  /* 121991bb push 9 */
  push32((uint32_t)(0x9u));
  /* 121991bd call 0x1219b510 */
  push32(0x121991c2u); f_1219b510();
  /* 121991c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121991c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121991c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121991cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121991ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121991d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121991d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121991d9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121991dc je 0x12199200 */
  if (C.zf) goto L_12199200;
  /* 121991de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121991e1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121991e5 je 0x12199200 */
  if (C.zf) goto L_12199200;
  /* 121991e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121991ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121991ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121991f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121991f5 je 0x12199200 */
  if (C.zf) goto L_12199200;
  /* 121991f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121991fa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121991fe jne 0x12199273 */
  if (!C.zf) goto L_12199273;
L_12199200:;
  /* 12199200 push 1 */
  push32((uint32_t)(0x1u));
  /* 12199202 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12199205 push edx */
  push32((uint32_t)(EDX));
  /* 12199206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199209 push eax */
  push32((uint32_t)(EAX));
  /* 1219920a call 0x121990c0 */
  push32(0x1219920fu); f_121990c0();
  /* 1219920f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199214 je 0x12199273 */
  if (C.zf) goto L_12199273;
  /* 12199216 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199219 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1219921c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219921f jne 0x12199273 */
  if (!C.zf) goto L_12199273;
  /* 12199221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199224 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12199227 cmp ecx, dword ptr [0x121c1a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c1a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219922d jg 0x12199273 */
  if ((!C.zf&&C.sf==C.of)) goto L_12199273;
  /* 1219922f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199233 je 0x12199240 */
  if (C.zf) goto L_12199240;
  /* 12199235 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219923b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1219923e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12199240:;
  /* 12199240 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199244 je 0x12199251 */
  if (C.zf) goto L_12199251;
  /* 12199246 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12199249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219924c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1219924f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12199251:;
  /* 12199251 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199255 je 0x12199262 */
  if (C.zf) goto L_12199262;
  /* 12199257 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219925a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219925d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12199260 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12199262:;
  /* 12199262 push 9 */
  push32((uint32_t)(0x9u));
  /* 12199264 call 0x1219b5b0 */
  push32(0x12199269u); f_1219b5b0();
  /* 12199269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219926c mov eax, 1 */
  EAX = (0x1u);
  /* 12199271 jmp 0x1219927f */
  goto L_1219927f;
L_12199273:;
  /* 12199273 push 9 */
  push32((uint32_t)(0x9u));
  /* 12199275 call 0x1219b5b0 */
  push32(0x1219927au); f_1219b5b0();
  /* 1219927a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219927d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219927f:;
  /* 1219927f mov esp, ebp */
  ESP = (EBP);
  /* 12199281 pop ebp */
  EBP = (pop32());
  /* 12199282 ret  */
  ESPCHK(0x121991a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009290 @ 0x12199290 (28 bytes, 11 insns) */
void f_12199290(void) {
  FTRACE(0x12199290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199290 push ebp */
  push32((uint32_t)(EBP));
  /* 12199291 mov ebp, esp */
  EBP = (ESP);
  /* 12199293 push ecx */
  push32((uint32_t)(ECX));
  /* 12199294 mov eax, dword ptr [0x121c50b8] */
  EAX = (r32((uint32_t)(0x121c50b8)));
  /* 12199299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219929c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219929f mov dword ptr [0x121c50b8], ecx */
  w32((uint32_t)(0x121c50b8), (ECX));
  /* 121992a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121992a8 mov esp, ebp */
  ESP = (EBP);
  /* 121992aa pop ebp */
  EBP = (pop32());
  /* 121992ab ret  */
  ESPCHK(0x12199290u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x121992b0 (362 bytes, 116 insns) */
void f_121992b0(void) {
  FTRACE(0x121992b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121992b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121992b1 mov ebp, esp */
  EBP = (ESP);
  /* 121992b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121992b6 push ebx */
  push32((uint32_t)(EBX));
  /* 121992b7 push esi */
  push32((uint32_t)(ESI));
  /* 121992b8 push edi */
  push32((uint32_t)(EDI));
  /* 121992b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121992bd jne 0x121992ea */
  if (!C.zf) goto L_121992ea;
L_121992bf:;
  /* 121992bf push 0x121bea6c */
  push32((uint32_t)(0x121bea6cu));
  /* 121992c4 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 121992c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121992cb push 0 */
  push32((uint32_t)(0x0u));
  /* 121992cd push 0 */
  push32((uint32_t)(0x0u));
  /* 121992cf push 0 */
  push32((uint32_t)(0x0u));
  /* 121992d1 call 0x12196bd0 */
  push32(0x121992d6u); f_12196bd0();
  /* 121992d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121992d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121992dc jne 0x121992df */
  if (!C.zf) goto L_121992df;
  /* 121992de int3  */
  x86_unimpl("int3 @ 0x121992de");
L_121992df:;
  /* 121992df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121992e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121992e3 jne 0x121992bf */
  if (!C.zf) goto L_121992bf;
  /* 121992e5 jmp 0x12199413 */
  goto L_12199413;
L_121992ea:;
  /* 121992ea push 9 */
  push32((uint32_t)(0x9u));
  /* 121992ec call 0x1219b510 */
  push32(0x121992f1u); f_1219b510();
  /* 121992f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121992f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121992f7 mov edx, dword ptr [0x121c374c] */
  EDX = (r32((uint32_t)(0x121c374c)));
  /* 121992fd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 121992ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12199306 jmp 0x12199311 */
  goto L_12199311;
L_12199308:;
  /* 12199308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219930b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219930e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12199311:;
  /* 12199311 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199315 jge 0x12199335 */
  if ((C.sf==C.of)) goto L_12199335;
  /* 12199317 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219931a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219931d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12199325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199328 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219932b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12199333 jmp 0x12199308 */
  goto L_12199308;
L_12199335:;
  /* 12199335 mov edx, dword ptr [0x121c374c] */
  EDX = (r32((uint32_t)(0x121c374c)));
  /* 1219933b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1219933e jmp 0x12199348 */
  goto L_12199348;
L_12199340:;
  /* 12199340 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12199343 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12199345 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12199348:;
  /* 12199348 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219934c je 0x121993f1 */
  if (C.zf) goto L_121993f1;
  /* 12199352 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12199355 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12199358 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219935d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219935f jl 0x121993c7 */
  if ((C.sf!=C.of)) goto L_121993c7;
  /* 12199361 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12199364 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12199367 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1219936d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199370 jge 0x121993c7 */
  if ((C.sf==C.of)) goto L_121993c7;
  /* 12199372 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12199375 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12199378 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219937e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199381 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12199385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199388 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219938b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1219938e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12199394 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199397 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1219939b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219939e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121993a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121993a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121993a9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 121993ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121993b0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121993b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121993b6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 121993b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121993be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121993c1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 121993c5 jmp 0x121993ec */
  goto L_121993ec;
L_121993c7:;
  /* 121993c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121993ca push edx */
  push32((uint32_t)(EDX));
  /* 121993cb push 0x121bea48 */
  push32((uint32_t)(0x121bea48u));
  /* 121993d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121993d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121993d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121993d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121993d8 call 0x12196bd0 */
  push32(0x121993ddu); f_12196bd0();
  /* 121993dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121993e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121993e3 jne 0x121993e6 */
  if (!C.zf) goto L_121993e6;
  /* 121993e5 int3  */
  x86_unimpl("int3 @ 0x121993e5");
L_121993e6:;
  /* 121993e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121993e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121993ea jne 0x121993c7 */
  if (!C.zf) goto L_121993c7;
L_121993ec:;
  /* 121993ec jmp 0x12199340 */
  goto L_12199340;
L_121993f1:;
  /* 121993f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121993f4 mov edx, dword ptr [0x121c3754] */
  EDX = (r32((uint32_t)(0x121c3754)));
  /* 121993fa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 121993fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199400 mov ecx, dword ptr [0x121c3748] */
  ECX = (r32((uint32_t)(0x121c3748)));
  /* 12199406 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12199409 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219940b call 0x1219b5b0 */
  push32(0x12199410u); f_1219b5b0();
  /* 12199410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12199413:;
  /* 12199413 pop edi */
  EDI = (pop32());
  /* 12199414 pop esi */
  ESI = (pop32());
  /* 12199415 pop ebx */
  EBX = (pop32());
  /* 12199416 mov esp, ebp */
  ESP = (EBP);
  /* 12199418 pop ebp */
  EBP = (pop32());
  /* 12199419 ret  */
  ESPCHK(0x121992b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x12199420 (291 bytes, 95 insns) */
void f_12199420(void) {
  FTRACE(0x12199420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199420 push ebp */
  push32((uint32_t)(EBP));
  /* 12199421 mov ebp, esp */
  EBP = (ESP);
  /* 12199423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199426 push ebx */
  push32((uint32_t)(EBX));
  /* 12199427 push esi */
  push32((uint32_t)(ESI));
  /* 12199428 push edi */
  push32((uint32_t)(EDI));
  /* 12199429 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12199430 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199434 je 0x12199442 */
  if (C.zf) goto L_12199442;
  /* 12199436 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219943a je 0x12199442 */
  if (C.zf) goto L_12199442;
  /* 1219943c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199440 jne 0x12199470 */
  if (!C.zf) goto L_12199470;
L_12199442:;
  /* 12199442 push 0x121bea94 */
  push32((uint32_t)(0x121bea94u));
  /* 12199447 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 1219944c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219944e push 0 */
  push32((uint32_t)(0x0u));
  /* 12199450 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199452 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199454 call 0x12196bd0 */
  push32(0x12199459u); f_12196bd0();
  /* 12199459 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219945c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219945f jne 0x12199462 */
  if (!C.zf) goto L_12199462;
  /* 12199461 int3  */
  x86_unimpl("int3 @ 0x12199461");
L_12199462:;
  /* 12199462 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12199464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199466 jne 0x12199442 */
  if (!C.zf) goto L_12199442;
  /* 12199468 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219946b jmp 0x1219953c */
  goto L_1219953c;
L_12199470:;
  /* 12199470 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12199477 jmp 0x12199482 */
  goto L_12199482;
L_12199479:;
  /* 12199479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219947c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219947f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12199482:;
  /* 12199482 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199486 jge 0x1219950c */
  if ((C.sf==C.of)) goto L_1219950c;
  /* 1219948c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219948f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199495 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12199498 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1219949c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121994a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121994a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121994a6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 121994aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121994ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121994b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121994b3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 121994b6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 121994ba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121994be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121994c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121994c4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 121994c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121994cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121994ce cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121994d3 jne 0x121994e2 */
  if (!C.zf) goto L_121994e2;
  /* 121994d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121994d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121994db cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121994e0 je 0x12199507 */
  if (C.zf) goto L_12199507;
L_121994e2:;
  /* 121994e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121994e6 je 0x12199507 */
  if (C.zf) goto L_12199507;
  /* 121994e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121994ec jne 0x12199500 */
  if (!C.zf) goto L_12199500;
  /* 121994ee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121994f2 jne 0x12199507 */
  if (!C.zf) goto L_12199507;
  /* 121994f4 mov eax, dword ptr [0x121c1a84] */
  EAX = (r32((uint32_t)(0x121c1a84)));
  /* 121994f9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 121994fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121994fe je 0x12199507 */
  if (C.zf) goto L_12199507;
L_12199500:;
  /* 12199500 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12199507:;
  /* 12199507 jmp 0x12199479 */
  goto L_12199479;
L_1219950c:;
  /* 1219950c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219950f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12199512 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12199515 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219951b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1219951e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199521 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12199524 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12199527 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219952a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219952d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12199530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199533 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12199539 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1219953c:;
  /* 1219953c pop edi */
  EDI = (pop32());
  /* 1219953d pop esi */
  ESI = (pop32());
  /* 1219953e pop ebx */
  EBX = (pop32());
  /* 1219953f mov esp, ebp */
  ESP = (EBP);
  /* 12199541 pop ebp */
  EBP = (pop32());
  /* 12199542 ret  */
  ESPCHK(0x12199420u, _esp0);
  ESP += 4; return;
}

/* FUN_10009550 @ 0x12199550 (697 bytes, 253 insns) */
void f_12199550(void) {
  FTRACE(0x12199550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199550 push ebp */
  push32((uint32_t)(EBP));
  /* 12199551 mov ebp, esp */
  EBP = (ESP);
  /* 12199553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199556 push ebx */
  push32((uint32_t)(EBX));
  /* 12199557 push esi */
  push32((uint32_t)(ESI));
  /* 12199558 push edi */
  push32((uint32_t)(EDI));
  /* 12199559 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12199560 push 9 */
  push32((uint32_t)(0x9u));
  /* 12199562 call 0x1219b510 */
  push32(0x12199567u); f_1219b510();
  /* 12199567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219956a:;
  /* 1219956a push 0x121beb8c */
  push32((uint32_t)(0x121beb8cu));
  /* 1219956f push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 12199574 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199576 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199578 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219957a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219957c call 0x12196bd0 */
  push32(0x12199581u); f_12196bd0();
  /* 12199581 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199584 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199587 jne 0x1219958a */
  if (!C.zf) goto L_1219958a;
  /* 12199589 int3  */
  x86_unimpl("int3 @ 0x12199589");
L_1219958a:;
  /* 1219958a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219958c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219958e jne 0x1219956a */
  if (!C.zf) goto L_1219956a;
  /* 12199590 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199594 je 0x1219959e */
  if (C.zf) goto L_1219959e;
  /* 12199596 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199599 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219959b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1219959e:;
  /* 1219959e mov eax, dword ptr [0x121c374c] */
  EAX = (r32((uint32_t)(0x121c374c)));
  /* 121995a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121995a6 jmp 0x121995b0 */
  goto L_121995b0;
L_121995a8:;
  /* 121995a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121995ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121995ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121995b0:;
  /* 121995b0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121995b4 je 0x121997d2 */
  if (C.zf) goto L_121997d2;
  /* 121995ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121995bd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121995c0 je 0x121997d2 */
  if (C.zf) goto L_121997d2;
  /* 121995c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121995c9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121995cc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121995d2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121995d5 je 0x12199604 */
  if (C.zf) goto L_12199604;
  /* 121995d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121995da mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121995dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121995e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121995e5 je 0x12199604 */
  if (C.zf) goto L_12199604;
  /* 121995e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121995ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121995ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121995f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121995f5 jne 0x12199609 */
  if (!C.zf) goto L_12199609;
  /* 121995f7 mov ecx, dword ptr [0x121c1a84] */
  ECX = (r32((uint32_t)(0x121c1a84)));
  /* 121995fd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12199600 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12199602 jne 0x12199609 */
  if (!C.zf) goto L_12199609;
L_12199604:;
  /* 12199604 jmp 0x121997cd */
  goto L_121997cd;
L_12199609:;
  /* 12199609 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219960c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199610 je 0x12199682 */
  if (C.zf) goto L_12199682;
  /* 12199612 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199614 push 1 */
  push32((uint32_t)(0x1u));
  /* 12199616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199619 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1219961c push ecx */
  push32((uint32_t)(ECX));
  /* 1219961d call 0x121990c0 */
  push32(0x12199622u); f_121990c0();
  /* 12199622 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199627 jne 0x12199653 */
  if (!C.zf) goto L_12199653;
L_12199629:;
  /* 12199629 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219962c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1219962f push eax */
  push32((uint32_t)(EAX));
  /* 12199630 push 0x121beb78 */
  push32((uint32_t)(0x121beb78u));
  /* 12199635 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199637 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219963b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219963d call 0x12196bd0 */
  push32(0x12199642u); f_12196bd0();
  /* 12199642 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199645 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199648 jne 0x1219964b */
  if (!C.zf) goto L_1219964b;
  /* 1219964a int3  */
  x86_unimpl("int3 @ 0x1219964a");
L_1219964b:;
  /* 1219964b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219964d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219964f jne 0x12199629 */
  if (!C.zf) goto L_12199629;
  /* 12199651 jmp 0x12199682 */
  goto L_12199682;
L_12199653:;
  /* 12199653 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199656 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12199659 push eax */
  push32((uint32_t)(EAX));
  /* 1219965a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219965d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12199660 push edx */
  push32((uint32_t)(EDX));
  /* 12199661 push 0x121beb6c */
  push32((uint32_t)(0x121beb6cu));
  /* 12199666 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219966a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219966c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219966e call 0x12196bd0 */
  push32(0x12199673u); f_12196bd0();
  /* 12199673 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199676 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199679 jne 0x1219967c */
  if (!C.zf) goto L_1219967c;
  /* 1219967b int3  */
  x86_unimpl("int3 @ 0x1219967b");
L_1219967c:;
  /* 1219967c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219967e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199680 jne 0x12199653 */
  if (!C.zf) goto L_12199653;
L_12199682:;
  /* 12199682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199685 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12199688 push edx */
  push32((uint32_t)(EDX));
  /* 12199689 push 0x121beb64 */
  push32((uint32_t)(0x121beb64u));
  /* 1219968e push 0 */
  push32((uint32_t)(0x0u));
  /* 12199690 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199692 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199694 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199696 call 0x12196bd0 */
  push32(0x1219969bu); f_12196bd0();
  /* 1219969b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219969e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121996a1 jne 0x121996a4 */
  if (!C.zf) goto L_121996a4;
  /* 121996a3 int3  */
  x86_unimpl("int3 @ 0x121996a3");
L_121996a4:;
  /* 121996a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121996a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121996a8 jne 0x12199682 */
  if (!C.zf) goto L_12199682;
  /* 121996aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121996ad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121996b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121996b6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121996b9 jne 0x1219972c */
  if (!C.zf) goto L_1219972c;
L_121996bb:;
  /* 121996bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121996be mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121996c1 push ecx */
  push32((uint32_t)(ECX));
  /* 121996c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121996c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121996c8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 121996cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121996d0 push eax */
  push32((uint32_t)(EAX));
  /* 121996d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121996d4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121996d7 push ecx */
  push32((uint32_t)(ECX));
  /* 121996d8 push 0x121beb30 */
  push32((uint32_t)(0x121beb30u));
  /* 121996dd push 0 */
  push32((uint32_t)(0x0u));
  /* 121996df push 0 */
  push32((uint32_t)(0x0u));
  /* 121996e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121996e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121996e5 call 0x12196bd0 */
  push32(0x121996eau); f_12196bd0();
  /* 121996ea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121996ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121996f0 jne 0x121996f3 */
  if (!C.zf) goto L_121996f3;
  /* 121996f2 int3  */
  x86_unimpl("int3 @ 0x121996f2");
L_121996f3:;
  /* 121996f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121996f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121996f7 jne 0x121996bb */
  if (!C.zf) goto L_121996bb;
  /* 121996f9 cmp dword ptr [0x121c50b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c50b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199700 je 0x1219971b */
  if (C.zf) goto L_1219971b;
  /* 12199702 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199705 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12199708 push ecx */
  push32((uint32_t)(ECX));
  /* 12199709 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219970c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219970f push edx */
  push32((uint32_t)(EDX));
  /* 12199710 call dword ptr [0x121c50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c50b8))), 0x12199716u);
  /* 12199716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199719 jmp 0x12199727 */
  goto L_12199727;
L_1219971b:;
  /* 1219971b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219971e push eax */
  push32((uint32_t)(EAX));
  /* 1219971f call 0x12199810 */
  push32(0x12199724u); f_12199810();
  /* 12199724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12199727:;
  /* 12199727 jmp 0x121997cd */
  goto L_121997cd;
L_1219972c:;
  /* 1219972c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219972f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199733 jne 0x12199772 */
  if (!C.zf) goto L_12199772;
L_12199735:;
  /* 12199735 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199738 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1219973b push eax */
  push32((uint32_t)(EAX));
  /* 1219973c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219973f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199742 push ecx */
  push32((uint32_t)(ECX));
  /* 12199743 push 0x121beb08 */
  push32((uint32_t)(0x121beb08u));
  /* 12199748 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219974a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219974c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219974e push 0 */
  push32((uint32_t)(0x0u));
  /* 12199750 call 0x12196bd0 */
  push32(0x12199755u); f_12196bd0();
  /* 12199755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199758 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219975b jne 0x1219975e */
  if (!C.zf) goto L_1219975e;
  /* 1219975d int3  */
  x86_unimpl("int3 @ 0x1219975d");
L_1219975e:;
  /* 1219975e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12199760 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12199762 jne 0x12199735 */
  if (!C.zf) goto L_12199735;
  /* 12199764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199767 push eax */
  push32((uint32_t)(EAX));
  /* 12199768 call 0x12199810 */
  push32(0x1219976du); f_12199810();
  /* 1219976d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199770 jmp 0x121997cd */
  goto L_121997cd;
L_12199772:;
  /* 12199772 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199775 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12199778 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1219977e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199781 jne 0x121997cd */
  if (!C.zf) goto L_121997cd;
L_12199783:;
  /* 12199783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199786 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12199789 push ecx */
  push32((uint32_t)(ECX));
  /* 1219978a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219978d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12199790 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12199793 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12199798 push eax */
  push32((uint32_t)(EAX));
  /* 12199799 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219979c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219979f push ecx */
  push32((uint32_t)(ECX));
  /* 121997a0 push 0x121bead4 */
  push32((uint32_t)(0x121bead4u));
  /* 121997a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121997a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121997a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121997ab push 0 */
  push32((uint32_t)(0x0u));
  /* 121997ad call 0x12196bd0 */
  push32(0x121997b2u); f_12196bd0();
  /* 121997b2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121997b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121997b8 jne 0x121997bb */
  if (!C.zf) goto L_121997bb;
  /* 121997ba int3  */
  x86_unimpl("int3 @ 0x121997ba");
L_121997bb:;
  /* 121997bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121997bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121997bf jne 0x12199783 */
  if (!C.zf) goto L_12199783;
  /* 121997c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121997c4 push eax */
  push32((uint32_t)(EAX));
  /* 121997c5 call 0x12199810 */
  push32(0x121997cau); f_12199810();
  /* 121997ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121997cd:;
  /* 121997cd jmp 0x121995a8 */
  goto L_121995a8;
L_121997d2:;
  /* 121997d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 121997d4 call 0x1219b5b0 */
  push32(0x121997d9u); f_1219b5b0();
  /* 121997d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121997dc:;
  /* 121997dc push 0x121beabc */
  push32((uint32_t)(0x121beabcu));
  /* 121997e1 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 121997e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121997e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121997ea push 0 */
  push32((uint32_t)(0x0u));
  /* 121997ec push 0 */
  push32((uint32_t)(0x0u));
  /* 121997ee call 0x12196bd0 */
  push32(0x121997f3u); f_12196bd0();
  /* 121997f3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121997f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121997f9 jne 0x121997fc */
  if (!C.zf) goto L_121997fc;
  /* 121997fb int3  */
  x86_unimpl("int3 @ 0x121997fb");
L_121997fc:;
  /* 121997fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121997fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12199800 jne 0x121997dc */
  if (!C.zf) goto L_121997dc;
  /* 12199802 pop edi */
  EDI = (pop32());
  /* 12199803 pop esi */
  ESI = (pop32());
  /* 12199804 pop ebx */
  EBX = (pop32());
  /* 12199805 mov esp, ebp */
  ESP = (EBP);
  /* 12199807 pop ebp */
  EBP = (pop32());
  /* 12199808 ret  */
  ESPCHK(0x12199550u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x12199810 (276 bytes, 89 insns) */
void f_12199810(void) {
  FTRACE(0x12199810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199810 push ebp */
  push32((uint32_t)(EBP));
  /* 12199811 mov ebp, esp */
  EBP = (ESP);
  /* 12199813 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199816 push ebx */
  push32((uint32_t)(EBX));
  /* 12199817 push esi */
  push32((uint32_t)(ESI));
  /* 12199818 push edi */
  push32((uint32_t)(EDI));
  /* 12199819 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12199820 jmp 0x1219982b */
  goto L_1219982b;
L_12199822:;
  /* 12199822 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12199825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199828 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1219982b:;
  /* 1219982b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219982e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199832 jge 0x1219983f */
  if ((C.sf==C.of)) goto L_1219983f;
  /* 12199834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199837 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1219983a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1219983d jmp 0x12199846 */
  goto L_12199846;
L_1219983f:;
  /* 1219983f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12199846:;
  /* 12199846 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12199849 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219984c jge 0x121998ec */
  if ((C.sf==C.of)) goto L_121998ec;
  /* 12199852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199855 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199858 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1219985b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1219985e cmp dword ptr [0x121c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199865 jle 0x12199883 */
  if ((C.zf||C.sf!=C.of)) goto L_12199883;
  /* 12199867 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1219986c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1219986f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12199875 push ecx */
  push32((uint32_t)(ECX));
  /* 12199876 call 0x1219db20 */
  push32(0x1219987bu); f_1219db20();
  /* 1219987b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219987e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12199881 jmp 0x121998a0 */
  goto L_121998a0;
L_12199883:;
  /* 12199883 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12199886 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1219988c mov eax, dword ptr [0x121c1c98] */
  EAX = (r32((uint32_t)(0x121c1c98)));
  /* 12199891 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12199893 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12199897 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1219989d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_121998a0:;
  /* 121998a0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121998a4 je 0x121998b4 */
  if (C.zf) goto L_121998b4;
  /* 121998a6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 121998a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121998af mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 121998b2 jmp 0x121998bb */
  goto L_121998bb;
L_121998b4:;
  /* 121998b4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_121998bb:;
  /* 121998bb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 121998be mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 121998c1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 121998c5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 121998c8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121998ce push edx */
  push32((uint32_t)(EDX));
  /* 121998cf push 0x121bebb0 */
  push32((uint32_t)(0x121bebb0u));
  /* 121998d4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 121998d7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121998da lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 121998de push ecx */
  push32((uint32_t)(ECX));
  /* 121998df call 0x1219da20 */
  push32(0x121998e4u); f_1219da20();
  /* 121998e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121998e7 jmp 0x12199822 */
  goto L_12199822;
L_121998ec:;
  /* 121998ec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 121998ef mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_121998f4:;
  /* 121998f4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 121998f7 push eax */
  push32((uint32_t)(EAX));
  /* 121998f8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 121998fb push ecx */
  push32((uint32_t)(ECX));
  /* 121998fc push 0x121beba0 */
  push32((uint32_t)(0x121beba0u));
  /* 12199901 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199903 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199905 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199907 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199909 call 0x12196bd0 */
  push32(0x1219990eu); f_12196bd0();
  /* 1219990e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199911 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199914 jne 0x12199917 */
  if (!C.zf) goto L_12199917;
  /* 12199916 int3  */
  x86_unimpl("int3 @ 0x12199916");
L_12199917:;
  /* 12199917 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12199919 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219991b jne 0x121998f4 */
  if (!C.zf) goto L_121998f4;
  /* 1219991d pop edi */
  EDI = (pop32());
  /* 1219991e pop esi */
  ESI = (pop32());
  /* 1219991f pop ebx */
  EBX = (pop32());
  /* 12199920 mov esp, ebp */
  ESP = (EBP);
  /* 12199922 pop ebp */
  EBP = (pop32());
  /* 12199923 ret  */
  ESPCHK(0x12199810u, _esp0);
  ESP += 4; return;
}

/* FUN_10009930 @ 0x12199930 (116 bytes, 46 insns) */
void f_12199930(void) {
  FTRACE(0x12199930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199930 push ebp */
  push32((uint32_t)(EBP));
  /* 12199931 mov ebp, esp */
  EBP = (ESP);
  /* 12199933 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199936 push ebx */
  push32((uint32_t)(EBX));
  /* 12199937 push esi */
  push32((uint32_t)(ESI));
  /* 12199938 push edi */
  push32((uint32_t)(EDI));
  /* 12199939 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1219993c push eax */
  push32((uint32_t)(EAX));
  /* 1219993d call 0x121992b0 */
  push32(0x12199942u); f_121992b0();
  /* 12199942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199945 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199949 jne 0x12199964 */
  if (!C.zf) goto L_12199964;
  /* 1219994b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219994f jne 0x12199964 */
  if (!C.zf) goto L_12199964;
  /* 12199951 mov ecx, dword ptr [0x121c1a84] */
  ECX = (r32((uint32_t)(0x121c1a84)));
  /* 12199957 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1219995a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219995c je 0x1219999b */
  if (C.zf) goto L_1219999b;
  /* 1219995e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199962 je 0x1219999b */
  if (C.zf) goto L_1219999b;
L_12199964:;
  /* 12199964 push 0x121bebb8 */
  push32((uint32_t)(0x121bebb8u));
  /* 12199969 push 0x121be584 */
  push32((uint32_t)(0x121be584u));
  /* 1219996e push 0 */
  push32((uint32_t)(0x0u));
  /* 12199970 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199972 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199974 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199976 call 0x12196bd0 */
  push32(0x1219997bu); f_12196bd0();
  /* 1219997b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219997e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199981 jne 0x12199984 */
  if (!C.zf) goto L_12199984;
  /* 12199983 int3  */
  x86_unimpl("int3 @ 0x12199983");
L_12199984:;
  /* 12199984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12199986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12199988 jne 0x12199964 */
  if (!C.zf) goto L_12199964;
  /* 1219998a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219998c call 0x12199550 */
  push32(0x12199991u); f_12199550();
  /* 12199991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199994 mov eax, 1 */
  EAX = (0x1u);
  /* 12199999 jmp 0x1219999d */
  goto L_1219999d;
L_1219999b:;
  /* 1219999b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219999d:;
  /* 1219999d pop edi */
  EDI = (pop32());
  /* 1219999e pop esi */
  ESI = (pop32());
  /* 1219999f pop ebx */
  EBX = (pop32());
  /* 121999a0 mov esp, ebp */
  ESP = (EBP);
  /* 121999a2 pop ebp */
  EBP = (pop32());
  /* 121999a3 ret  */
  ESPCHK(0x12199930u, _esp0);
  ESP += 4; return;
}

/* FUN_100099b0 @ 0x121999b0 (197 bytes, 79 insns) */
void f_121999b0(void) {
  FTRACE(0x121999b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121999b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121999b1 mov ebp, esp */
  EBP = (ESP);
  /* 121999b3 push ecx */
  push32((uint32_t)(ECX));
  /* 121999b4 push ebx */
  push32((uint32_t)(EBX));
  /* 121999b5 push esi */
  push32((uint32_t)(ESI));
  /* 121999b6 push edi */
  push32((uint32_t)(EDI));
  /* 121999b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121999bb jne 0x121999c2 */
  if (!C.zf) goto L_121999c2;
  /* 121999bd jmp 0x12199a6e */
  goto L_12199a6e;
L_121999c2:;
  /* 121999c2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121999c9 jmp 0x121999d4 */
  goto L_121999d4;
L_121999cb:;
  /* 121999cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121999ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121999d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121999d4:;
  /* 121999d4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121999d8 jge 0x12199a1e */
  if ((C.sf==C.of)) goto L_12199a1e;
L_121999da:;
  /* 121999da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121999dd mov edx, dword ptr [ecx*4 + 0x121c1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c1a94)));
  /* 121999e4 push edx */
  push32((uint32_t)(EDX));
  /* 121999e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121999e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121999eb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 121999ef push edx */
  push32((uint32_t)(EDX));
  /* 121999f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121999f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121999f6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 121999fa push edx */
  push32((uint32_t)(EDX));
  /* 121999fb push 0x121bec14 */
  push32((uint32_t)(0x121bec14u));
  /* 12199a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a08 call 0x12196bd0 */
  push32(0x12199a0du); f_12196bd0();
  /* 12199a0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199a10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199a13 jne 0x12199a16 */
  if (!C.zf) goto L_12199a16;
  /* 12199a15 int3  */
  x86_unimpl("int3 @ 0x12199a15");
L_12199a16:;
  /* 12199a16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12199a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199a1a jne 0x121999da */
  if (!C.zf) goto L_121999da;
  /* 12199a1c jmp 0x121999cb */
  goto L_121999cb;
L_12199a1e:;
  /* 12199a1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199a21 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12199a24 push edx */
  push32((uint32_t)(EDX));
  /* 12199a25 push 0x121bebf0 */
  push32((uint32_t)(0x121bebf0u));
  /* 12199a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a32 call 0x12196bd0 */
  push32(0x12199a37u); f_12196bd0();
  /* 12199a37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199a3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199a3d jne 0x12199a40 */
  if (!C.zf) goto L_12199a40;
  /* 12199a3f int3  */
  x86_unimpl("int3 @ 0x12199a3f");
L_12199a40:;
  /* 12199a40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12199a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199a44 jne 0x12199a1e */
  if (!C.zf) goto L_12199a1e;
L_12199a46:;
  /* 12199a46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199a49 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12199a4c push edx */
  push32((uint32_t)(EDX));
  /* 12199a4d push 0x121bebd0 */
  push32((uint32_t)(0x121bebd0u));
  /* 12199a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12199a5a call 0x12196bd0 */
  push32(0x12199a5fu); f_12196bd0();
  /* 12199a5f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199a62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199a65 jne 0x12199a68 */
  if (!C.zf) goto L_12199a68;
  /* 12199a67 int3  */
  x86_unimpl("int3 @ 0x12199a67");
L_12199a68:;
  /* 12199a68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12199a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199a6c jne 0x12199a46 */
  if (!C.zf) goto L_12199a46;
L_12199a6e:;
  /* 12199a6e pop edi */
  EDI = (pop32());
  /* 12199a6f pop esi */
  ESI = (pop32());
  /* 12199a70 pop ebx */
  EBX = (pop32());
  /* 12199a71 mov esp, ebp */
  ESP = (EBP);
  /* 12199a73 pop ebp */
  EBP = (pop32());
  /* 12199a74 ret  */
  ESPCHK(0x121999b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a80 @ 0x12199a80 (329 bytes, 102 insns) */
void f_12199a80(void) {
  FTRACE(0x12199a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12199a81 mov ebp, esp */
  EBP = (ESP);
  /* 12199a83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199a86 cmp dword ptr [0x121c5230], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c5230))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199a8d jne 0x12199a94 */
  if (!C.zf) goto L_12199a94;
  /* 12199a8f call 0x1219e3c0 */
  push32(0x12199a94u); f_1219e3c0();
L_12199a94:;
  /* 12199a94 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12199a9b mov eax, dword ptr [0x121c36e8] */
  EAX = (r32((uint32_t)(0x121c36e8)));
  /* 12199aa0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12199aa3:;
  /* 12199aa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199aa6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12199aa9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12199aab je 0x12199ad9 */
  if (C.zf) goto L_12199ad9;
  /* 12199aad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199ab0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12199ab3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199ab6 je 0x12199ac1 */
  if (C.zf) goto L_12199ac1;
  /* 12199ab8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12199abb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199abe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12199ac1:;
  /* 12199ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199ac4 push eax */
  push32((uint32_t)(EAX));
  /* 12199ac5 call 0x1219a940 */
  push32(0x12199acau); f_1219a940();
  /* 12199aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199acd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199ad0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12199ad4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12199ad7 jmp 0x12199aa3 */
  goto L_12199aa3;
L_12199ad9:;
  /* 12199ad9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12199adb push 0x121bec34 */
  push32((uint32_t)(0x121bec34u));
  /* 12199ae0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12199ae2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12199ae5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12199aec push ecx */
  push32((uint32_t)(ECX));
  /* 12199aed call 0x12197b10 */
  push32(0x12199af2u); f_12197b10();
  /* 12199af2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199af5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12199af8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199afb mov dword ptr [0x121c371c], edx */
  w32((uint32_t)(0x121c371c), (EDX));
  /* 12199b01 cmp dword ptr [0x121c371c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c371c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199b08 jne 0x12199b14 */
  if (!C.zf) goto L_12199b14;
  /* 12199b0a push 9 */
  push32((uint32_t)(0x9u));
  /* 12199b0c call 0x12196a80 */
  push32(0x12199b11u); f_12196a80();
  /* 12199b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12199b14:;
  /* 12199b14 mov eax, dword ptr [0x121c36e8] */
  EAX = (r32((uint32_t)(0x121c36e8)));
  /* 12199b19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12199b1c jmp 0x12199b27 */
  goto L_12199b27;
L_12199b1e:;
  /* 12199b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199b21 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199b24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12199b27:;
  /* 12199b27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199b2a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12199b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199b2f je 0x12199b97 */
  if (C.zf) goto L_12199b97;
  /* 12199b31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199b34 push ecx */
  push32((uint32_t)(ECX));
  /* 12199b35 call 0x1219a940 */
  push32(0x12199b3au); f_1219a940();
  /* 12199b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199b3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199b40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12199b43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199b46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12199b49 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199b4c je 0x12199b95 */
  if (C.zf) goto L_12199b95;
  /* 12199b4e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12199b50 push 0x121bec34 */
  push32((uint32_t)(0x121bec34u));
  /* 12199b55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12199b57 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12199b5a push ecx */
  push32((uint32_t)(ECX));
  /* 12199b5b call 0x12197b10 */
  push32(0x12199b60u); f_12197b10();
  /* 12199b60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199b63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199b66 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12199b68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199b6b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199b6e jne 0x12199b7a */
  if (!C.zf) goto L_12199b7a;
  /* 12199b70 push 9 */
  push32((uint32_t)(0x9u));
  /* 12199b72 call 0x12196a80 */
  push32(0x12199b77u); f_12196a80();
  /* 12199b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12199b7a:;
  /* 12199b7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199b7d push ecx */
  push32((uint32_t)(ECX));
  /* 12199b7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199b81 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12199b83 push eax */
  push32((uint32_t)(EAX));
  /* 12199b84 call 0x1219aac0 */
  push32(0x12199b89u); f_1219aac0();
  /* 12199b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199b8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199b8f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199b92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12199b95:;
  /* 12199b95 jmp 0x12199b1e */
  goto L_12199b1e;
L_12199b97:;
  /* 12199b97 push 2 */
  push32((uint32_t)(0x2u));
  /* 12199b99 mov edx, dword ptr [0x121c36e8] */
  EDX = (r32((uint32_t)(0x121c36e8)));
  /* 12199b9f push edx */
  push32((uint32_t)(EDX));
  /* 12199ba0 call 0x121985a0 */
  push32(0x12199ba5u); f_121985a0();
  /* 12199ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199ba8 mov dword ptr [0x121c36e8], 0 */
  w32((uint32_t)(0x121c36e8), (0x0u));
  /* 12199bb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199bb5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12199bbb mov dword ptr [0x121c5220], 1 */
  w32((uint32_t)(0x121c5220), (0x1u));
  /* 12199bc5 mov esp, ebp */
  ESP = (EBP);
  /* 12199bc7 pop ebp */
  EBP = (pop32());
  /* 12199bc8 ret  */
  ESPCHK(0x12199a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x12199bd0 (216 bytes, 69 insns) */
void f_12199bd0(void) {
  FTRACE(0x12199bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12199bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12199bd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199bd6 cmp dword ptr [0x121c5230], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c5230))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199bdd jne 0x12199be4 */
  if (!C.zf) goto L_12199be4;
  /* 12199bdf call 0x1219e3c0 */
  push32(0x12199be4u); f_1219e3c0();
L_12199be4:;
  /* 12199be4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12199be9 push 0x121c3758 */
  push32((uint32_t)(0x121c3758u));
  /* 12199bee push 0 */
  push32((uint32_t)(0x0u));
  /* 12199bf0 call dword ptr [0x121c6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6334))), 0x12199bf6u);
  /* 12199bf6 mov dword ptr [0x121c372c], 0x121c3758 */
  w32((uint32_t)(0x121c372c), (0x121c3758u));
  /* 12199c00 mov eax, dword ptr [0x121c524c] */
  EAX = (r32((uint32_t)(0x121c524c)));
  /* 12199c05 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12199c08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12199c0a jne 0x12199c17 */
  if (!C.zf) goto L_12199c17;
  /* 12199c0c mov edx, dword ptr [0x121c372c] */
  EDX = (r32((uint32_t)(0x121c372c)));
  /* 12199c12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12199c15 jmp 0x12199c1f */
  goto L_12199c1f;
L_12199c17:;
  /* 12199c17 mov eax, dword ptr [0x121c524c] */
  EAX = (r32((uint32_t)(0x121c524c)));
  /* 12199c1c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12199c1f:;
  /* 12199c1f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12199c22 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12199c25 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12199c28 push edx */
  push32((uint32_t)(EDX));
  /* 12199c29 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12199c2c push eax */
  push32((uint32_t)(EAX));
  /* 12199c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12199c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12199c31 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12199c34 push ecx */
  push32((uint32_t)(ECX));
  /* 12199c35 call 0x12199cb0 */
  push32(0x12199c3au); f_12199cb0();
  /* 12199c3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199c3d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12199c42 push 0x121bec40 */
  push32((uint32_t)(0x121bec40u));
  /* 12199c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12199c49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199c4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199c4f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12199c52 push ecx */
  push32((uint32_t)(ECX));
  /* 12199c53 call 0x12197b10 */
  push32(0x12199c58u); f_12197b10();
  /* 12199c58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199c5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12199c5e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199c62 jne 0x12199c6e */
  if (!C.zf) goto L_12199c6e;
  /* 12199c64 push 8 */
  push32((uint32_t)(0x8u));
  /* 12199c66 call 0x12196a80 */
  push32(0x12199c6bu); f_12196a80();
  /* 12199c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12199c6e:;
  /* 12199c6e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12199c71 push edx */
  push32((uint32_t)(EDX));
  /* 12199c72 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12199c75 push eax */
  push32((uint32_t)(EAX));
  /* 12199c76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199c79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12199c7c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12199c7f push eax */
  push32((uint32_t)(EAX));
  /* 12199c80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12199c83 push ecx */
  push32((uint32_t)(ECX));
  /* 12199c84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12199c87 push edx */
  push32((uint32_t)(EDX));
  /* 12199c88 call 0x12199cb0 */
  push32(0x12199c8du); f_12199cb0();
  /* 12199c8d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12199c90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199c93 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199c96 mov dword ptr [0x121c3710], eax */
  w32((uint32_t)(0x121c3710), (EAX));
  /* 12199c9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12199c9e mov dword ptr [0x121c3714], ecx */
  w32((uint32_t)(0x121c3714), (ECX));
  /* 12199ca4 mov esp, ebp */
  ESP = (EBP);
  /* 12199ca6 pop ebp */
  EBP = (pop32());
  /* 12199ca7 ret  */
  ESPCHK(0x12199bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cb0 @ 0x12199cb0 (1060 bytes, 360 insns) */
void f_12199cb0(void) {
  FTRACE(0x12199cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12199cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12199cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12199cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199cb6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199cb9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12199cbf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12199cc2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12199cc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12199ccb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12199cce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199cd2 je 0x12199ce5 */
  if (C.zf) goto L_12199ce5;
  /* 12199cd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12199cd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199cda mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12199cdc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12199cdf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199ce2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12199ce5:;
  /* 12199ce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199ce8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12199ceb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199cee jne 0x12199dbd */
  if (!C.zf) goto L_12199dbd;
L_12199cf4:;
  /* 12199cf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199cf7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199cfa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12199cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199d00 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12199d03 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199d06 je 0x12199d82 */
  if (C.zf) goto L_12199d82;
  /* 12199d08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199d0b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12199d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199d10 je 0x12199d82 */
  if (C.zf) goto L_12199d82;
  /* 12199d12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199d15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12199d17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12199d19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12199d1b mov al, byte ptr [edx + 0x121c4f81] */
  AL = (r8((uint32_t)(EDX + 0x121c4f81)));
  /* 12199d21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12199d24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199d26 je 0x12199d57 */
  if (C.zf) goto L_12199d57;
  /* 12199d28 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199d2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12199d2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199d30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199d33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12199d35 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199d39 je 0x12199d57 */
  if (C.zf) goto L_12199d57;
  /* 12199d3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199d41 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12199d43 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12199d45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199d48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199d4b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12199d4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199d51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199d54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12199d57:;
  /* 12199d57 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199d5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12199d5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199d5f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199d62 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12199d64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199d68 je 0x12199d7d */
  if (C.zf) goto L_12199d7d;
  /* 12199d6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199d6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199d70 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12199d72 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12199d74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199d77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199d7a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12199d7d:;
  /* 12199d7d jmp 0x12199cf4 */
  goto L_12199cf4;
L_12199d82:;
  /* 12199d82 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199d85 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12199d87 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199d8a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199d8d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12199d8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199d93 je 0x12199da4 */
  if (C.zf) goto L_12199da4;
  /* 12199d95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199d98 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12199d9b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199d9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199da1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12199da4:;
  /* 12199da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199da7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12199daa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199dad jne 0x12199db8 */
  if (!C.zf) goto L_12199db8;
  /* 12199daf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199db2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199db5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12199db8:;
  /* 12199db8 jmp 0x12199e8c */
  goto L_12199e8c;
L_12199dbd:;
  /* 12199dbd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199dc0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12199dc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199dc5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199dc8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12199dca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199dce je 0x12199de3 */
  if (C.zf) goto L_12199de3;
  /* 12199dd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199dd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12199dd8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12199dda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199ddd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199de0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12199de3:;
  /* 12199de3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199de6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12199de8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12199deb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199dee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199df1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12199df4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199df7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12199dfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12199dff mov dl, byte ptr [ecx + 0x121c4f81] */
  DL = (r8((uint32_t)(ECX + 0x121c4f81)));
  /* 12199e05 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12199e08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12199e0a je 0x12199e3b */
  if (C.zf) goto L_12199e3b;
  /* 12199e0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199e0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12199e11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199e14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199e17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12199e19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199e1d je 0x12199e32 */
  if (C.zf) goto L_12199e32;
  /* 12199e1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199e22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199e25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12199e27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12199e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199e2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199e2f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12199e32:;
  /* 12199e32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199e35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199e38 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12199e3b:;
  /* 12199e3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199e3e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12199e44 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199e47 je 0x12199e67 */
  if (C.zf) goto L_12199e67;
  /* 12199e49 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199e4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12199e51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199e53 je 0x12199e67 */
  if (C.zf) goto L_12199e67;
  /* 12199e55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199e58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12199e5e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199e61 jne 0x12199dbd */
  if (!C.zf) goto L_12199dbd;
L_12199e67:;
  /* 12199e67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12199e6a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12199e70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12199e72 jne 0x12199e7f */
  if (!C.zf) goto L_12199e7f;
  /* 12199e74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199e77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199e7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12199e7d jmp 0x12199e8c */
  goto L_12199e8c;
L_12199e7f:;
  /* 12199e7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199e83 je 0x12199e8c */
  if (C.zf) goto L_12199e8c;
  /* 12199e85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199e88 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12199e8c:;
  /* 12199e8c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12199e93:;
  /* 12199e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199e96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12199e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199e9b je 0x12199ebe */
  if (C.zf) goto L_12199ebe;
L_12199e9d:;
  /* 12199e9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199ea0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12199ea3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199ea6 je 0x12199eb3 */
  if (C.zf) goto L_12199eb3;
  /* 12199ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199eab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12199eae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199eb1 jne 0x12199ebe */
  if (!C.zf) goto L_12199ebe;
L_12199eb3:;
  /* 12199eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199eb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199eb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12199ebc jmp 0x12199e9d */
  goto L_12199e9d;
L_12199ebe:;
  /* 12199ebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199ec1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12199ec4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12199ec6 jne 0x12199ecd */
  if (!C.zf) goto L_12199ecd;
  /* 12199ec8 jmp 0x1219a0ab */
  goto L_1219a0ab;
L_12199ecd:;
  /* 12199ecd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199ed1 je 0x12199ee4 */
  if (C.zf) goto L_12199ee4;
  /* 12199ed3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12199ed6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199ed9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12199edb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12199ede add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199ee1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12199ee4:;
  /* 12199ee4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12199ee7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12199ee9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199eec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12199eef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12199ef1:;
  /* 12199ef1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12199ef8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12199eff:;
  /* 12199eff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199f02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12199f05 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199f08 jne 0x12199f1e */
  if (!C.zf) goto L_12199f1e;
  /* 12199f0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199f0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199f10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12199f13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12199f16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199f19 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12199f1c jmp 0x12199eff */
  goto L_12199eff;
L_12199f1e:;
  /* 12199f1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199f21 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12199f24 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199f27 jne 0x12199f7a */
  if (!C.zf) goto L_12199f7a;
  /* 12199f29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12199f2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12199f2e mov ecx, 2 */
  ECX = (0x2u);
  /* 12199f33 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12199f35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12199f37 jne 0x12199f72 */
  if (!C.zf) goto L_12199f72;
  /* 12199f39 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199f3d je 0x12199f5f */
  if (C.zf) goto L_12199f5f;
  /* 12199f3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199f42 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12199f46 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199f49 jne 0x12199f56 */
  if (!C.zf) goto L_12199f56;
  /* 12199f4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199f4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199f51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12199f54 jmp 0x12199f5d */
  goto L_12199f5d;
L_12199f56:;
  /* 12199f56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12199f5d:;
  /* 12199f5d jmp 0x12199f66 */
  goto L_12199f66;
L_12199f5f:;
  /* 12199f5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12199f66:;
  /* 12199f66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12199f68 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199f6c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12199f6f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12199f72:;
  /* 12199f72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12199f75 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12199f77 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12199f7a:;
  /* 12199f7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12199f7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12199f80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12199f83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12199f86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12199f88 je 0x12199fae */
  if (C.zf) goto L_12199fae;
  /* 12199f8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199f8e je 0x12199f9f */
  if (C.zf) goto L_12199f9f;
  /* 12199f90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199f93 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12199f96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12199f99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199f9c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12199f9f:;
  /* 12199f9f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199fa2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12199fa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12199fa7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12199faa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12199fac jmp 0x12199f7a */
  goto L_12199f7a;
L_12199fae:;
  /* 12199fae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199fb1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12199fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12199fb6 je 0x12199fd4 */
  if (C.zf) goto L_12199fd4;
  /* 12199fb8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199fbc jne 0x12199fd9 */
  if (!C.zf) goto L_12199fd9;
  /* 12199fbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199fc1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12199fc4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199fc7 je 0x12199fd4 */
  if (C.zf) goto L_12199fd4;
  /* 12199fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199fcc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12199fcf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199fd2 jne 0x12199fd9 */
  if (!C.zf) goto L_12199fd9;
L_12199fd4:;
  /* 12199fd4 jmp 0x1219a084 */
  goto L_1219a084;
L_12199fd9:;
  /* 12199fd9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199fdd je 0x1219a076 */
  if (C.zf) goto L_1219a076;
  /* 12199fe3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12199fe7 je 0x1219a03d */
  if (C.zf) goto L_1219a03d;
  /* 12199fe9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12199fec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12199fee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12199ff0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12199ff2 mov cl, byte ptr [eax + 0x121c4f81] */
  CL = (r8((uint32_t)(EAX + 0x121c4f81)));
  /* 12199ff8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12199ffb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12199ffd je 0x1219a028 */
  if (C.zf) goto L_1219a028;
  /* 12199fff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a005 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1219a007 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1219a009 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a00c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a00f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 1219a012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a015 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a018 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219a01b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219a01e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219a020 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a023 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219a026 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1219a028:;
  /* 1219a028 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a02b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a02e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1219a030 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1219a032 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a038 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1219a03b jmp 0x1219a069 */
  goto L_1219a069;
L_1219a03d:;
  /* 1219a03d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a042 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1219a044 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219a046 mov cl, byte ptr [eax + 0x121c4f81] */
  CL = (r8((uint32_t)(EAX + 0x121c4f81)));
  /* 1219a04c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1219a04f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219a051 je 0x1219a069 */
  if (C.zf) goto L_1219a069;
  /* 1219a053 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a056 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a059 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219a05c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219a05f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219a061 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a064 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219a067 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1219a069:;
  /* 1219a069 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219a06c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219a06e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a071 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219a074 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1219a076:;
  /* 1219a076 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a079 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a07c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219a07f jmp 0x12199ef1 */
  goto L_12199ef1;
L_1219a084:;
  /* 1219a084 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a088 je 0x1219a099 */
  if (C.zf) goto L_1219a099;
  /* 1219a08a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a08d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1219a090 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a093 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a096 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_1219a099:;
  /* 1219a099 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219a09c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219a09e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a0a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219a0a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1219a0a6 jmp 0x12199e93 */
  goto L_12199e93;
L_1219a0ab:;
  /* 1219a0ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a0af je 0x1219a0c3 */
  if (C.zf) goto L_1219a0c3;
  /* 1219a0b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a0b4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1219a0ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a0bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a0c0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1219a0c3:;
  /* 1219a0c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219a0c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219a0c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a0cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219a0ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1219a0d0 mov esp, ebp */
  ESP = (EBP);
  /* 1219a0d2 pop ebp */
  EBP = (pop32());
  /* 1219a0d3 ret  */
  ESPCHK(0x12199cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0e0 @ 0x1219a0e0 (537 bytes, 173 insns) */
void f_1219a0e0(void) {
  FTRACE(0x1219a0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1219a0e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a0e6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1219a0ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1219a0f4 cmp dword ptr [0x121c385c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c385c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a0fb jne 0x1219a13a */
  if (!C.zf) goto L_1219a13a;
  /* 1219a0fd call dword ptr [0x121c6390] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6390))), 0x1219a103u);
  /* 1219a103 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1219a106 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a10a je 0x1219a118 */
  if (C.zf) goto L_1219a118;
  /* 1219a10c mov dword ptr [0x121c385c], 1 */
  w32((uint32_t)(0x121c385c), (0x1u));
  /* 1219a116 jmp 0x1219a13a */
  goto L_1219a13a;
L_1219a118:;
  /* 1219a118 call dword ptr [0x121c638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c638c))), 0x1219a11eu);
  /* 1219a11e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219a121 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a125 je 0x1219a133 */
  if (C.zf) goto L_1219a133;
  /* 1219a127 mov dword ptr [0x121c385c], 2 */
  w32((uint32_t)(0x121c385c), (0x2u));
  /* 1219a131 jmp 0x1219a13a */
  goto L_1219a13a;
L_1219a133:;
  /* 1219a133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a135 jmp 0x1219a2f5 */
  goto L_1219a2f5;
L_1219a13a:;
  /* 1219a13a cmp dword ptr [0x121c385c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c385c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a141 jne 0x1219a23e */
  if (!C.zf) goto L_1219a23e;
  /* 1219a147 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a14b jne 0x1219a163 */
  if (!C.zf) goto L_1219a163;
  /* 1219a14d call dword ptr [0x121c6390] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6390))), 0x1219a153u);
  /* 1219a153 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1219a156 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a15a jne 0x1219a163 */
  if (!C.zf) goto L_1219a163;
  /* 1219a15c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a15e jmp 0x1219a2f5 */
  goto L_1219a2f5;
L_1219a163:;
  /* 1219a163 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219a166 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1219a169:;
  /* 1219a169 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a16c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219a16e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1219a171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219a173 je 0x1219a195 */
  if (C.zf) goto L_1219a195;
  /* 1219a175 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a178 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a17b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219a17e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a181 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219a183 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1219a186 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219a188 jne 0x1219a193 */
  if (!C.zf) goto L_1219a193;
  /* 1219a18a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a18d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a190 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1219a193:;
  /* 1219a193 jmp 0x1219a169 */
  goto L_1219a169;
L_1219a195:;
  /* 1219a195 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a198 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a19b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1219a19d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a1a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219a1a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a1a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a1a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a1a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a1ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a1ae push edx */
  push32((uint32_t)(EDX));
  /* 1219a1af mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219a1b2 push eax */
  push32((uint32_t)(EAX));
  /* 1219a1b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a1b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a1b7 call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x1219a1bdu);
  /* 1219a1bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1219a1c0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a1c4 je 0x1219a1e4 */
  if (C.zf) goto L_1219a1e4;
  /* 1219a1c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1219a1c8 push 0x121bec4c */
  push32((uint32_t)(0x121bec4cu));
  /* 1219a1cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1219a1cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219a1d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a1d3 call 0x12197b10 */
  push32(0x1219a1d8u); f_12197b10();
  /* 1219a1d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a1db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219a1de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a1e2 jne 0x1219a1f5 */
  if (!C.zf) goto L_1219a1f5;
L_1219a1e4:;
  /* 1219a1e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219a1e7 push edx */
  push32((uint32_t)(EDX));
  /* 1219a1e8 call dword ptr [0x121c6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6384))), 0x1219a1eeu);
  /* 1219a1ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a1f0 jmp 0x1219a2f5 */
  goto L_1219a2f5;
L_1219a1f5:;
  /* 1219a1f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a1f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a1f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219a1fc push eax */
  push32((uint32_t)(EAX));
  /* 1219a1fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219a200 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a201 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a204 push edx */
  push32((uint32_t)(EDX));
  /* 1219a205 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219a208 push eax */
  push32((uint32_t)(EAX));
  /* 1219a209 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a20b push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a20d call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x1219a213u);
  /* 1219a213 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219a215 jne 0x1219a22c */
  if (!C.zf) goto L_1219a22c;
  /* 1219a217 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219a219 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219a21c push ecx */
  push32((uint32_t)(ECX));
  /* 1219a21d call 0x121985a0 */
  push32(0x1219a222u); f_121985a0();
  /* 1219a222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a225 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1219a22c:;
  /* 1219a22c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219a22f push edx */
  push32((uint32_t)(EDX));
  /* 1219a230 call dword ptr [0x121c6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6384))), 0x1219a236u);
  /* 1219a236 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219a239 jmp 0x1219a2f5 */
  goto L_1219a2f5;
L_1219a23e:;
  /* 1219a23e cmp dword ptr [0x121c385c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121c385c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a245 jne 0x1219a2f3 */
  if (!C.zf) goto L_1219a2f3;
  /* 1219a24b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a24f jne 0x1219a267 */
  if (!C.zf) goto L_1219a267;
  /* 1219a251 call dword ptr [0x121c638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c638c))), 0x1219a257u);
  /* 1219a257 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219a25a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a25e jne 0x1219a267 */
  if (!C.zf) goto L_1219a267;
  /* 1219a260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a262 jmp 0x1219a2f5 */
  goto L_1219a2f5;
L_1219a267:;
  /* 1219a267 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219a26a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1219a26d:;
  /* 1219a26d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a270 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1219a273 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219a275 je 0x1219a295 */
  if (C.zf) goto L_1219a295;
  /* 1219a277 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a27a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a27d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219a280 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a283 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1219a286 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219a288 jne 0x1219a293 */
  if (!C.zf) goto L_1219a293;
  /* 1219a28a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a28d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a290 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1219a293:;
  /* 1219a293 jmp 0x1219a26d */
  goto L_1219a26d;
L_1219a295:;
  /* 1219a295 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a298 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a29b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a29e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1219a2a1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 1219a2a6 push 0x121bec4c */
  push32((uint32_t)(0x121bec4cu));
  /* 1219a2ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1219a2ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219a2b0 push edx */
  push32((uint32_t)(EDX));
  /* 1219a2b1 call 0x12197b10 */
  push32(0x1219a2b6u); f_12197b10();
  /* 1219a2b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a2b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219a2bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a2c0 jne 0x1219a2d0 */
  if (!C.zf) goto L_1219a2d0;
  /* 1219a2c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219a2c5 push eax */
  push32((uint32_t)(EAX));
  /* 1219a2c6 call dword ptr [0x121c6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6358))), 0x1219a2ccu);
  /* 1219a2cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a2ce jmp 0x1219a2f5 */
  goto L_1219a2f5;
L_1219a2d0:;
  /* 1219a2d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219a2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a2d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219a2d7 push edx */
  push32((uint32_t)(EDX));
  /* 1219a2d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a2db push eax */
  push32((uint32_t)(EAX));
  /* 1219a2dc call 0x1219e3f0 */
  push32(0x1219a2e1u); f_1219e3f0();
  /* 1219a2e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a2e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219a2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a2e8 call dword ptr [0x121c6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6358))), 0x1219a2eeu);
  /* 1219a2ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a2f1 jmp 0x1219a2f5 */
  goto L_1219a2f5;
L_1219a2f3:;
  /* 1219a2f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219a2f5:;
  /* 1219a2f5 mov esp, ebp */
  ESP = (EBP);
  /* 1219a2f7 pop ebp */
  EBP = (pop32());
  /* 1219a2f8 ret  */
  ESPCHK(0x1219a0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a300 @ 0x1219a300 (77 bytes, 25 insns) */
void f_1219a300(void) {
  FTRACE(0x1219a300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a300 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a301 mov ebp, esp */
  EBP = (ESP);
  /* 1219a303 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a305 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1219a30a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a30c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a310 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1219a313 push eax */
  push32((uint32_t)(EAX));
  /* 1219a314 call dword ptr [0x121c6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6394))), 0x1219a31au);
  /* 1219a31a mov dword ptr [0x121c50ac], eax */
  w32((uint32_t)(0x121c50ac), (EAX));
  /* 1219a31f cmp dword ptr [0x121c50ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c50ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a326 jne 0x1219a32c */
  if (!C.zf) goto L_1219a32c;
  /* 1219a328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a32a jmp 0x1219a34b */
  goto L_1219a34b;
L_1219a32c:;
  /* 1219a32c call 0x1219bdb0 */
  push32(0x1219a331u); f_1219bdb0();
  /* 1219a331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219a333 jne 0x1219a346 */
  if (!C.zf) goto L_1219a346;
  /* 1219a335 mov ecx, dword ptr [0x121c50ac] */
  ECX = (r32((uint32_t)(0x121c50ac)));
  /* 1219a33b push ecx */
  push32((uint32_t)(ECX));
  /* 1219a33c call dword ptr [0x121c6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6380))), 0x1219a342u);
  /* 1219a342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a344 jmp 0x1219a34b */
  goto L_1219a34b;
L_1219a346:;
  /* 1219a346 mov eax, 1 */
  EAX = (0x1u);
L_1219a34b:;
  /* 1219a34b pop ebp */
  EBP = (pop32());
  /* 1219a34c ret  */
  ESPCHK(0x1219a300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a350 @ 0x1219a350 (156 bytes, 48 insns) */
void f_1219a350(void) {
  FTRACE(0x1219a350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a350 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a351 mov ebp, esp */
  EBP = (ESP);
  /* 1219a353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a356 mov eax, dword ptr [0x121c50a8] */
  EAX = (r32((uint32_t)(0x121c50a8)));
  /* 1219a35b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219a35e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219a365 jmp 0x1219a370 */
  goto L_1219a370;
L_1219a367:;
  /* 1219a367 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a36a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a36d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1219a370:;
  /* 1219a370 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a373 cmp edx, dword ptr [0x121c50a4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c50a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a379 jge 0x1219a3c6 */
  if ((C.sf==C.of)) goto L_1219a3c6;
  /* 1219a37b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1219a380 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1219a385 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a388 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1219a38b push ecx */
  push32((uint32_t)(ECX));
  /* 1219a38c call dword ptr [0x121c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c639c))), 0x1219a392u);
  /* 1219a392 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1219a397 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a399 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a39c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1219a39f push eax */
  push32((uint32_t)(EAX));
  /* 1219a3a0 call dword ptr [0x121c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c639c))), 0x1219a3a6u);
  /* 1219a3a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a3a9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1219a3ac push edx */
  push32((uint32_t)(EDX));
  /* 1219a3ad push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a3af mov eax, dword ptr [0x121c50ac] */
  EAX = (r32((uint32_t)(0x121c50ac)));
  /* 1219a3b4 push eax */
  push32((uint32_t)(EAX));
  /* 1219a3b5 call dword ptr [0x121c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6398))), 0x1219a3bbu);
  /* 1219a3bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a3be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a3c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1219a3c4 jmp 0x1219a367 */
  goto L_1219a367;
L_1219a3c6:;
  /* 1219a3c6 mov edx, dword ptr [0x121c50a8] */
  EDX = (r32((uint32_t)(0x121c50a8)));
  /* 1219a3cc push edx */
  push32((uint32_t)(EDX));
  /* 1219a3cd push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a3cf mov eax, dword ptr [0x121c50ac] */
  EAX = (r32((uint32_t)(0x121c50ac)));
  /* 1219a3d4 push eax */
  push32((uint32_t)(EAX));
  /* 1219a3d5 call dword ptr [0x121c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6398))), 0x1219a3dbu);
  /* 1219a3db mov ecx, dword ptr [0x121c50ac] */
  ECX = (r32((uint32_t)(0x121c50ac)));
  /* 1219a3e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a3e2 call dword ptr [0x121c6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6380))), 0x1219a3e8u);
  /* 1219a3e8 mov esp, ebp */
  ESP = (EBP);
  /* 1219a3ea pop ebp */
  EBP = (pop32());
  /* 1219a3eb ret  */
  ESPCHK(0x1219a350u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x1219a3f0 (73 bytes, 19 insns) */
void f_1219a3f0(void) {
  FTRACE(0x1219a3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1219a3f3 cmp dword ptr [0x121c36f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a3fa je 0x1219a40e */
  if (C.zf) goto L_1219a40e;
  /* 1219a3fc cmp dword ptr [0x121c36f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a403 jne 0x1219a437 */
  if (!C.zf) goto L_1219a437;
  /* 1219a405 cmp dword ptr [0x121c36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a40c jne 0x1219a437 */
  if (!C.zf) goto L_1219a437;
L_1219a40e:;
  /* 1219a40e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1219a413 call 0x1219a440 */
  push32(0x1219a418u); f_1219a440();
  /* 1219a418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a41b cmp dword ptr [0x121c3860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a422 je 0x1219a42a */
  if (C.zf) goto L_1219a42a;
  /* 1219a424 call dword ptr [0x121c3860] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c3860))), 0x1219a42au);
L_1219a42a:;
  /* 1219a42a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1219a42f call 0x1219a440 */
  push32(0x1219a434u); f_1219a440();
  /* 1219a434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219a437:;
  /* 1219a437 pop ebp */
  EBP = (pop32());
  /* 1219a438 ret  */
  ESPCHK(0x1219a3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a440 @ 0x1219a440 (447 bytes, 131 insns) */
void f_1219a440(void) {
  FTRACE(0x1219a440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a440 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a441 mov ebp, esp */
  EBP = (ESP);
  /* 1219a443 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a449 push ebx */
  push32((uint32_t)(EBX));
  /* 1219a44a push esi */
  push32((uint32_t)(ESI));
  /* 1219a44b push edi */
  push32((uint32_t)(EDI));
  /* 1219a44c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1219a453 jmp 0x1219a45e */
  goto L_1219a45e;
L_1219a455:;
  /* 1219a455 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a458 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a45b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1219a45e:;
  /* 1219a45e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a462 jae 0x1219a477 */
  if (!C.cf) goto L_1219a477;
  /* 1219a464 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a467 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a46a cmp edx, dword ptr [ecx*8 + 0x121c1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x121c1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a471 jne 0x1219a475 */
  if (!C.zf) goto L_1219a475;
  /* 1219a473 jmp 0x1219a477 */
  goto L_1219a477;
L_1219a475:;
  /* 1219a475 jmp 0x1219a455 */
  goto L_1219a455;
L_1219a477:;
  /* 1219a477 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a47a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a47d cmp ecx, dword ptr [eax*8 + 0x121c1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x121c1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a484 jne 0x1219a5f8 */
  if (!C.zf) goto L_1219a5f8;
  /* 1219a48a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a491 je 0x1219a4b4 */
  if (C.zf) goto L_1219a4b4;
  /* 1219a493 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a496 mov eax, dword ptr [edx*8 + 0x121c1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x121c1ab4)));
  /* 1219a49d push eax */
  push32((uint32_t)(EAX));
  /* 1219a49e push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a4a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a4a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a4a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219a4a6 call 0x12196bd0 */
  push32(0x1219a4abu); f_12196bd0();
  /* 1219a4ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a4ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a4b1 jne 0x1219a4b4 */
  if (!C.zf) goto L_1219a4b4;
  /* 1219a4b3 int3  */
  x86_unimpl("int3 @ 0x1219a4b3");
L_1219a4b4:;
  /* 1219a4b4 cmp dword ptr [0x121c36f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a4bb je 0x1219a4cf */
  if (C.zf) goto L_1219a4cf;
  /* 1219a4bd cmp dword ptr [0x121c36f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a4c4 jne 0x1219a508 */
  if (!C.zf) goto L_1219a508;
  /* 1219a4c6 cmp dword ptr [0x121c36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a4cd jne 0x1219a508 */
  if (!C.zf) goto L_1219a508;
L_1219a4cf:;
  /* 1219a4cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a4d1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1219a4d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a4d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a4d8 mov eax, dword ptr [edx*8 + 0x121c1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x121c1ab4)));
  /* 1219a4df push eax */
  push32((uint32_t)(EAX));
  /* 1219a4e0 call 0x1219a940 */
  push32(0x1219a4e5u); f_1219a940();
  /* 1219a4e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a4e8 push eax */
  push32((uint32_t)(EAX));
  /* 1219a4e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a4ec mov edx, dword ptr [ecx*8 + 0x121c1ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x121c1ab4)));
  /* 1219a4f3 push edx */
  push32((uint32_t)(EDX));
  /* 1219a4f4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1219a4f6 call dword ptr [0x121c6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6318))), 0x1219a4fcu);
  /* 1219a4fc push eax */
  push32((uint32_t)(EAX));
  /* 1219a4fd call dword ptr [0x121c631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c631c))), 0x1219a503u);
  /* 1219a503 jmp 0x1219a5f8 */
  goto L_1219a5f8;
L_1219a508:;
  /* 1219a508 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a50f je 0x1219a5f8 */
  if (C.zf) goto L_1219a5f8;
  /* 1219a515 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1219a51a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 1219a520 push eax */
  push32((uint32_t)(EAX));
  /* 1219a521 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a523 call dword ptr [0x121c6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6334))), 0x1219a529u);
  /* 1219a529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219a52b jne 0x1219a541 */
  if (!C.zf) goto L_1219a541;
  /* 1219a52d push 0x121be4b4 */
  push32((uint32_t)(0x121be4b4u));
  /* 1219a532 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1219a538 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a539 call 0x1219aac0 */
  push32(0x1219a53eu); f_1219aac0();
  /* 1219a53e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219a541:;
  /* 1219a541 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 1219a547 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1219a54a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a54d push eax */
  push32((uint32_t)(EAX));
  /* 1219a54e call 0x1219a940 */
  push32(0x1219a553u); f_1219a940();
  /* 1219a553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a556 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a559 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a55c jbe 0x1219a58a */
  if ((C.cf||C.zf)) goto L_1219a58a;
  /* 1219a55e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1219a564 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a565 call 0x1219a940 */
  push32(0x1219a56au); f_1219a940();
  /* 1219a56a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a56d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a570 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 1219a574 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219a577 push 3 */
  push32((uint32_t)(0x3u));
  /* 1219a579 push 0x121be4b0 */
  push32((uint32_t)(0x121be4b0u));
  /* 1219a57e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a581 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a582 call 0x1219b330 */
  push32(0x1219a587u); f_1219b330();
  /* 1219a587 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219a58a:;
  /* 1219a58a push 0x121bef08 */
  push32((uint32_t)(0x121bef08u));
  /* 1219a58f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1219a595 push edx */
  push32((uint32_t)(EDX));
  /* 1219a596 call 0x1219aac0 */
  push32(0x1219a59bu); f_1219aac0();
  /* 1219a59b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a59e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a5a1 push eax */
  push32((uint32_t)(EAX));
  /* 1219a5a2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 1219a5a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a5a9 call 0x1219aad0 */
  push32(0x1219a5aeu); f_1219aad0();
  /* 1219a5ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a5b1 push 0x121be428 */
  push32((uint32_t)(0x121be428u));
  /* 1219a5b6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1219a5bc push edx */
  push32((uint32_t)(EDX));
  /* 1219a5bd call 0x1219aad0 */
  push32(0x1219a5c2u); f_1219aad0();
  /* 1219a5c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a5c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a5c8 mov ecx, dword ptr [eax*8 + 0x121c1ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x121c1ab4)));
  /* 1219a5cf push ecx */
  push32((uint32_t)(ECX));
  /* 1219a5d0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1219a5d6 push edx */
  push32((uint32_t)(EDX));
  /* 1219a5d7 call 0x1219aad0 */
  push32(0x1219a5dcu); f_1219aad0();
  /* 1219a5dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a5df push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1219a5e4 push 0x121beee0 */
  push32((uint32_t)(0x121beee0u));
  /* 1219a5e9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1219a5ef push eax */
  push32((uint32_t)(EAX));
  /* 1219a5f0 call 0x1219b270 */
  push32(0x1219a5f5u); f_1219b270();
  /* 1219a5f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219a5f8:;
  /* 1219a5f8 pop edi */
  EDI = (pop32());
  /* 1219a5f9 pop esi */
  ESI = (pop32());
  /* 1219a5fa pop ebx */
  EBX = (pop32());
  /* 1219a5fb mov esp, ebp */
  ESP = (EBP);
  /* 1219a5fd pop ebp */
  EBP = (pop32());
  /* 1219a5fe ret  */
  ESPCHK(0x1219a440u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x1219a600 (80 bytes, 27 insns) */
void f_1219a600(void) {
  FTRACE(0x1219a600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a600 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a601 mov ebp, esp */
  EBP = (ESP);
  /* 1219a603 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a604 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219a60b jmp 0x1219a616 */
  goto L_1219a616;
L_1219a60d:;
  /* 1219a60d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a610 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a613 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219a616:;
  /* 1219a616 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a61a jae 0x1219a62f */
  if (!C.cf) goto L_1219a62f;
  /* 1219a61c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a61f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a622 cmp edx, dword ptr [ecx*8 + 0x121c1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x121c1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a629 jne 0x1219a62d */
  if (!C.zf) goto L_1219a62d;
  /* 1219a62b jmp 0x1219a62f */
  goto L_1219a62f;
L_1219a62d:;
  /* 1219a62d jmp 0x1219a60d */
  goto L_1219a60d;
L_1219a62f:;
  /* 1219a62f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a632 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a635 cmp ecx, dword ptr [eax*8 + 0x121c1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x121c1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a63c jne 0x1219a64a */
  if (!C.zf) goto L_1219a64a;
  /* 1219a63e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a641 mov eax, dword ptr [edx*8 + 0x121c1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x121c1ab4)));
  /* 1219a648 jmp 0x1219a64c */
  goto L_1219a64c;
L_1219a64a:;
  /* 1219a64a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219a64c:;
  /* 1219a64c mov esp, ebp */
  ESP = (EBP);
  /* 1219a64e pop ebp */
  EBP = (pop32());
  /* 1219a64f ret  */
  ESPCHK(0x1219a600u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x1219a650 (66 bytes, 28 insns) */
void f_1219a650(void) {
  FTRACE(0x1219a650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a650 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a651 mov ebp, esp */
  EBP = (ESP);
  /* 1219a653 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a657 jne 0x1219a677 */
  if (!C.zf) goto L_1219a677;
  /* 1219a659 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a65d jge 0x1219a677 */
  if ((C.sf==C.of)) goto L_1219a677;
  /* 1219a65f push 1 */
  push32((uint32_t)(0x1u));
  /* 1219a661 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a664 push eax */
  push32((uint32_t)(EAX));
  /* 1219a665 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a668 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a66c push edx */
  push32((uint32_t)(EDX));
  /* 1219a66d call 0x1219a6a0 */
  push32(0x1219a672u); f_1219a6a0();
  /* 1219a672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a675 jmp 0x1219a68d */
  goto L_1219a68d;
L_1219a677:;
  /* 1219a677 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a679 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a67c push eax */
  push32((uint32_t)(EAX));
  /* 1219a67d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a680 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a684 push edx */
  push32((uint32_t)(EDX));
  /* 1219a685 call 0x1219a6a0 */
  push32(0x1219a68au); f_1219a6a0();
  /* 1219a68a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219a68d:;
  /* 1219a68d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a690 pop ebp */
  EBP = (pop32());
  /* 1219a691 ret  */
  ESPCHK(0x1219a650u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x1219a6a0 (194 bytes, 71 insns) */
void f_1219a6a0(void) {
  FTRACE(0x1219a6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1219a6a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a6a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a6a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219a6ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a6b0 je 0x1219a6c9 */
  if (C.zf) goto L_1219a6c9;
  /* 1219a6b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a6b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1219a6b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a6bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a6be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219a6c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a6c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219a6c6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1219a6c9:;
  /* 1219a6c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a6cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1219a6cf:;
  /* 1219a6cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a6d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219a6d4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1219a6d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1219a6da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a6dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219a6df div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1219a6e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1219a6e5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a6e9 jbe 0x1219a701 */
  if ((C.cf||C.zf)) goto L_1219a701;
  /* 1219a6eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a6ee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a6f4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1219a6f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a6f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a6fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219a6ff jmp 0x1219a715 */
  goto L_1219a715;
L_1219a701:;
  /* 1219a701 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a704 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a70a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1219a70c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a70f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a712 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1219a715:;
  /* 1219a715 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a719 ja 0x1219a6cf */
  if ((!C.cf&&!C.zf)) goto L_1219a6cf;
  /* 1219a71b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a71e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1219a721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a724 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a727 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219a72a:;
  /* 1219a72a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a72d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1219a72f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1219a732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a735 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a738 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1219a73a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1219a73c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a73f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1219a742 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1219a744 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a747 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a74a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219a74d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a750 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a753 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219a756 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a759 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a75c jb 0x1219a72a */
  if (C.cf) goto L_1219a72a;
  /* 1219a75e mov esp, ebp */
  ESP = (EBP);
  /* 1219a760 pop ebp */
  EBP = (pop32());
  /* 1219a761 ret  */
  ESPCHK(0x1219a6a0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x1219a770 (63 bytes, 24 insns) */
void f_1219a770(void) {
  FTRACE(0x1219a770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a770 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a771 mov ebp, esp */
  EBP = (ESP);
  /* 1219a773 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a774 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a778 jne 0x1219a789 */
  if (!C.zf) goto L_1219a789;
  /* 1219a77a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a77e jge 0x1219a789 */
  if ((C.sf==C.of)) goto L_1219a789;
  /* 1219a780 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1219a787 jmp 0x1219a790 */
  goto L_1219a790;
L_1219a789:;
  /* 1219a789 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1219a790:;
  /* 1219a790 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a793 push eax */
  push32((uint32_t)(EAX));
  /* 1219a794 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a797 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a798 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a79b push edx */
  push32((uint32_t)(EDX));
  /* 1219a79c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a79f push eax */
  push32((uint32_t)(EAX));
  /* 1219a7a0 call 0x1219a6a0 */
  push32(0x1219a7a5u); f_1219a6a0();
  /* 1219a7a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a7a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a7ab mov esp, ebp */
  ESP = (EBP);
  /* 1219a7ad pop ebp */
  EBP = (pop32());
  /* 1219a7ae ret  */
  ESPCHK(0x1219a770u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x1219a7b0 (30 bytes, 14 insns) */
void f_1219a7b0(void) {
  FTRACE(0x1219a7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1219a7b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a7b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a7b8 push eax */
  push32((uint32_t)(EAX));
  /* 1219a7b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a7bc push ecx */
  push32((uint32_t)(ECX));
  /* 1219a7bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a7c0 push edx */
  push32((uint32_t)(EDX));
  /* 1219a7c1 call 0x1219a6a0 */
  push32(0x1219a7c6u); f_1219a6a0();
  /* 1219a7c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a7c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a7cc pop ebp */
  EBP = (pop32());
  /* 1219a7cd ret  */
  ESPCHK(0x1219a7b0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x1219a7d0 (72 bytes, 28 insns) */
void f_1219a7d0(void) {
  FTRACE(0x1219a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1219a7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a7d4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a7d8 jne 0x1219a7f1 */
  if (!C.zf) goto L_1219a7f1;
  /* 1219a7da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a7de jg 0x1219a7f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1219a7f1;
  /* 1219a7e0 jl 0x1219a7e8 */
  if ((C.sf!=C.of)) goto L_1219a7e8;
  /* 1219a7e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a7e6 jae 0x1219a7f1 */
  if (!C.cf) goto L_1219a7f1;
L_1219a7e8:;
  /* 1219a7e8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1219a7ef jmp 0x1219a7f8 */
  goto L_1219a7f8;
L_1219a7f1:;
  /* 1219a7f1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1219a7f8:;
  /* 1219a7f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a7fb push eax */
  push32((uint32_t)(EAX));
  /* 1219a7fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219a7ff push ecx */
  push32((uint32_t)(ECX));
  /* 1219a800 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a803 push edx */
  push32((uint32_t)(EDX));
  /* 1219a804 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a807 push eax */
  push32((uint32_t)(EAX));
  /* 1219a808 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a80b push ecx */
  push32((uint32_t)(ECX));
  /* 1219a80c call 0x1219a820 */
  push32(0x1219a811u); f_1219a820();
  /* 1219a811 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a814 mov esp, ebp */
  ESP = (EBP);
  /* 1219a816 pop ebp */
  EBP = (pop32());
  /* 1219a817 ret  */
  ESPCHK(0x1219a7d0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x1219a820 (242 bytes, 91 insns) */
void f_1219a820(void) {
  FTRACE(0x1219a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a820 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a821 mov ebp, esp */
  EBP = (ESP);
  /* 1219a823 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a826 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219a82c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a830 je 0x1219a854 */
  if (C.zf) goto L_1219a854;
  /* 1219a832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a835 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1219a838 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a83b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a83e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219a841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a844 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219a846 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a849 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a84c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219a84e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1219a851 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1219a854:;
  /* 1219a854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a857 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1219a85a:;
  /* 1219a85a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219a85d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219a85f push ecx */
  push32((uint32_t)(ECX));
  /* 1219a860 push eax */
  push32((uint32_t)(EAX));
  /* 1219a861 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a864 push edx */
  push32((uint32_t)(EDX));
  /* 1219a865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a868 push eax */
  push32((uint32_t)(EAX));
  /* 1219a869 call 0x1219e7a0 */
  push32(0x1219a86eu); f_1219e7a0();
  /* 1219a86e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219a871 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219a874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219a876 push edx */
  push32((uint32_t)(EDX));
  /* 1219a877 push ecx */
  push32((uint32_t)(ECX));
  /* 1219a878 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a87b push eax */
  push32((uint32_t)(EAX));
  /* 1219a87c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a87f push ecx */
  push32((uint32_t)(ECX));
  /* 1219a880 call 0x1219e730 */
  push32(0x1219a885u); f_1219e730();
  /* 1219a885 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1219a888 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1219a88b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a88f jbe 0x1219a8a7 */
  if ((C.cf||C.zf)) goto L_1219a8a7;
  /* 1219a891 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a894 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a897 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a89a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1219a89c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a89f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a8a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219a8a5 jmp 0x1219a8bb */
  goto L_1219a8bb;
L_1219a8a7:;
  /* 1219a8a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219a8aa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a8ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a8b0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1219a8b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a8b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a8b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1219a8bb:;
  /* 1219a8bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a8bf ja 0x1219a85a */
  if ((!C.cf&&!C.zf)) goto L_1219a85a;
  /* 1219a8c1 jb 0x1219a8c9 */
  if (C.cf) goto L_1219a8c9;
  /* 1219a8c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a8c7 ja 0x1219a85a */
  if ((!C.cf&&!C.zf)) goto L_1219a85a;
L_1219a8c9:;
  /* 1219a8c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a8cc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1219a8cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a8d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a8d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219a8d8:;
  /* 1219a8d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a8db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1219a8dd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1219a8e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a8e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a8e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1219a8e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1219a8ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a8ed mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1219a8f0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1219a8f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219a8f5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a8f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219a8fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a8fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a901 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219a904 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219a907 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a90a jb 0x1219a8d8 */
  if (C.cf) goto L_1219a8d8;
  /* 1219a90c mov esp, ebp */
  ESP = (EBP);
  /* 1219a90e pop ebp */
  EBP = (pop32());
  /* 1219a90f ret 0x14 */
  ESPCHK(0x1219a820u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x1219a920 (31 bytes, 15 insns) */
void f_1219a920(void) {
  FTRACE(0x1219a920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a920 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a921 mov ebp, esp */
  EBP = (ESP);
  /* 1219a923 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a925 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219a928 push eax */
  push32((uint32_t)(EAX));
  /* 1219a929 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a92c push ecx */
  push32((uint32_t)(ECX));
  /* 1219a92d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219a930 push edx */
  push32((uint32_t)(EDX));
  /* 1219a931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219a934 push eax */
  push32((uint32_t)(EAX));
  /* 1219a935 call 0x1219a820 */
  push32(0x1219a93au); f_1219a820();
  /* 1219a93a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219a93d pop ebp */
  EBP = (pop32());
  /* 1219a93e ret  */
  ESPCHK(0x1219a920u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x1219a940 (123 bytes, 44 insns) */
void f_1219a940(void) {
  FTRACE(0x1219a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a940 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1219a944 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1219a94a je 0x1219a960 */
  if (C.zf) goto L_1219a960;
L_1219a94c:;
  /* 1219a94c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1219a94e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1219a94f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1219a951 je 0x1219a993 */
  if (C.zf) goto L_1219a993;
  /* 1219a953 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1219a959 jne 0x1219a94c */
  if (!C.zf) goto L_1219a94c;
  /* 1219a95b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1219a960:;
  /* 1219a960 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1219a962 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1219a967 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a969 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219a96c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219a96e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a971 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1219a976 je 0x1219a960 */
  if (C.zf) goto L_1219a960;
  /* 1219a978 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1219a97b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1219a97d je 0x1219a9b1 */
  if (C.zf) goto L_1219a9b1;
  /* 1219a97f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1219a981 je 0x1219a9a7 */
  if (C.zf) goto L_1219a9a7;
  /* 1219a983 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1219a988 je 0x1219a99d */
  if (C.zf) goto L_1219a99d;
  /* 1219a98a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1219a98f je 0x1219a993 */
  if (C.zf) goto L_1219a993;
  /* 1219a991 jmp 0x1219a960 */
  goto L_1219a960;
L_1219a993:;
  /* 1219a993 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 1219a996 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1219a99a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a99c ret  */
  ESPCHK(0x1219a940u, _esp0);
  ESP += 4; return;
L_1219a99d:;
  /* 1219a99d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 1219a9a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1219a9a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a9a6 ret  */
  ESPCHK(0x1219a940u, _esp0);
  ESP += 4; return;
L_1219a9a7:;
  /* 1219a9a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1219a9aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1219a9ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a9b0 ret  */
  ESPCHK(0x1219a940u, _esp0);
  ESP += 4; return;
L_1219a9b1:;
  /* 1219a9b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 1219a9b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1219a9b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a9ba ret  */
  ESPCHK(0x1219a940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c0 @ 0x1219a9c0 (249 bytes, 93 insns) */
void f_1219a9c0(void) {
  FTRACE(0x1219a9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219a9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219a9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1219a9c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219a9c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1219a9c7 push esi */
  push32((uint32_t)(ESI));
  /* 1219a9c8 push edi */
  push32((uint32_t)(EDI));
  /* 1219a9c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1219a9cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1219a9cf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 1219a9d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1219a9d5:;
  /* 1219a9d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a9d9 jne 0x1219a9f9 */
  if (!C.zf) goto L_1219a9f9;
  /* 1219a9db push 0x121bef40 */
  push32((uint32_t)(0x121bef40u));
  /* 1219a9e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219a9e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1219a9e4 push 0x121bef34 */
  push32((uint32_t)(0x121bef34u));
  /* 1219a9e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219a9eb call 0x12196bd0 */
  push32(0x1219a9f0u); f_12196bd0();
  /* 1219a9f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219a9f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219a9f6 jne 0x1219a9f9 */
  if (!C.zf) goto L_1219a9f9;
  /* 1219a9f8 int3  */
  x86_unimpl("int3 @ 0x1219a9f8");
L_1219a9f9:;
  /* 1219a9f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219a9fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219a9fd jne 0x1219a9d5 */
  if (!C.zf) goto L_1219a9d5;
L_1219a9ff:;
  /* 1219a9ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219aa03 jne 0x1219aa23 */
  if (!C.zf) goto L_1219aa23;
  /* 1219aa05 push 0x121bef24 */
  push32((uint32_t)(0x121bef24u));
  /* 1219aa0a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219aa0c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1219aa0e push 0x121bef34 */
  push32((uint32_t)(0x121bef34u));
  /* 1219aa13 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219aa15 call 0x12196bd0 */
  push32(0x1219aa1au); f_12196bd0();
  /* 1219aa1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219aa1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219aa20 jne 0x1219aa23 */
  if (!C.zf) goto L_1219aa23;
  /* 1219aa22 int3  */
  x86_unimpl("int3 @ 0x1219aa22");
L_1219aa23:;
  /* 1219aa23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219aa25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219aa27 jne 0x1219a9ff */
  if (!C.zf) goto L_1219a9ff;
  /* 1219aa29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa2c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1219aa33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219aa39 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1219aa3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219aa42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1219aa44 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219aa4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1219aa4d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219aa50 push edx */
  push32((uint32_t)(EDX));
  /* 1219aa51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219aa54 push eax */
  push32((uint32_t)(EAX));
  /* 1219aa55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa58 push ecx */
  push32((uint32_t)(ECX));
  /* 1219aa59 call 0x1219eaa0 */
  push32(0x1219aa5eu); f_1219eaa0();
  /* 1219aa5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219aa61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1219aa64 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa67 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219aa6a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219aa6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa70 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1219aa73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa76 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219aa7a jl 0x1219aa9e */
  if ((C.sf!=C.of)) goto L_1219aa9e;
  /* 1219aa7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219aa81 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1219aa84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219aa86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1219aa8c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1219aa8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa92 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219aa94 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219aa97 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aa9a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1219aa9c jmp 0x1219aaaf */
  goto L_1219aaaf;
L_1219aa9e:;
  /* 1219aa9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219aaa1 push eax */
  push32((uint32_t)(EAX));
  /* 1219aaa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219aaa4 call 0x1219e820 */
  push32(0x1219aaa9u); f_1219e820();
  /* 1219aaa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219aaac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1219aaaf:;
  /* 1219aaaf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219aab2 pop edi */
  EDI = (pop32());
  /* 1219aab3 pop esi */
  ESI = (pop32());
  /* 1219aab4 pop ebx */
  EBX = (pop32());
  /* 1219aab5 mov esp, ebp */
  ESP = (EBP);
  /* 1219aab7 pop ebp */
  EBP = (pop32());
  /* 1219aab8 ret  */
  ESPCHK(0x1219a9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aac0 @ 0x1219aac0 (7 bytes, 3 insns) */
void f_1219aac0(void) {
  FTRACE(0x1219aac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219aac0 push edi */
  push32((uint32_t)(EDI));
  /* 1219aac1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1219aac5 jmp 0x1219ab31 */
  jmp_ind(0x1219ab31u); return;
}

/* FUN_1000aad0 @ 0x1219aad0 (224 bytes, 84 insns) */
void f_1219aad0(void) {
  FTRACE(0x1219aad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219aad0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1219aad4 push edi */
  push32((uint32_t)(EDI));
  /* 1219aad5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1219aadb je 0x1219aaec */
  if (C.zf) goto L_1219aaec;
L_1219aadd:;
  /* 1219aadd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1219aadf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1219aae0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1219aae2 je 0x1219ab1f */
  if (C.zf) goto L_1219ab1f;
  /* 1219aae4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1219aaea jne 0x1219aadd */
  if (!C.zf) goto L_1219aadd;
L_1219aaec:;
  /* 1219aaec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1219aaee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1219aaf3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219aaf5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219aaf8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219aafa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219aafd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1219ab02 je 0x1219aaec */
  if (C.zf) goto L_1219aaec;
  /* 1219ab04 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1219ab07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1219ab09 je 0x1219ab2e */
  if (C.zf) goto L_1219ab2e;
  /* 1219ab0b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1219ab0d je 0x1219ab29 */
  if (C.zf) goto L_1219ab29;
  /* 1219ab0f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1219ab14 je 0x1219ab24 */
  if (C.zf) goto L_1219ab24;
  /* 1219ab16 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1219ab1b je 0x1219ab1f */
  if (C.zf) goto L_1219ab1f;
  /* 1219ab1d jmp 0x1219aaec */
  goto L_1219aaec;
L_1219ab1f:;
  /* 1219ab1f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1219ab22 jmp 0x1219ab31 */
  goto L_1219ab31;
L_1219ab24:;
  /* 1219ab24 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1219ab27 jmp 0x1219ab31 */
  goto L_1219ab31;
L_1219ab29:;
  /* 1219ab29 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1219ab2c jmp 0x1219ab31 */
  goto L_1219ab31;
L_1219ab2e:;
  /* 1219ab2e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1219ab31:;
  /* 1219ab31 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1219ab35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1219ab3b je 0x1219ab56 */
  if (C.zf) goto L_1219ab56;
L_1219ab3d:;
  /* 1219ab3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1219ab3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1219ab40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1219ab42 je 0x1219aba8 */
  if (C.zf) goto L_1219aba8;
  /* 1219ab44 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1219ab46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1219ab47 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1219ab4d jne 0x1219ab3d */
  if (!C.zf) goto L_1219ab3d;
  /* 1219ab4f jmp 0x1219ab56 */
  goto L_1219ab56;
L_1219ab51:;
  /* 1219ab51 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1219ab53 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1219ab56:;
  /* 1219ab56 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1219ab5b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1219ab5d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ab5f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219ab62 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219ab64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219ab66 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ab69 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1219ab6e je 0x1219ab51 */
  if (C.zf) goto L_1219ab51;
  /* 1219ab70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1219ab72 je 0x1219aba8 */
  if (C.zf) goto L_1219aba8;
  /* 1219ab74 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1219ab76 je 0x1219ab9f */
  if (C.zf) goto L_1219ab9f;
  /* 1219ab78 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1219ab7e je 0x1219ab92 */
  if (C.zf) goto L_1219ab92;
  /* 1219ab80 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1219ab86 je 0x1219ab8a */
  if (C.zf) goto L_1219ab8a;
  /* 1219ab88 jmp 0x1219ab51 */
  goto L_1219ab51;
L_1219ab8a:;
  /* 1219ab8a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1219ab8c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1219ab90 pop edi */
  EDI = (pop32());
  /* 1219ab91 ret  */
  ESPCHK(0x1219aad0u, _esp0);
  ESP += 4; return;
L_1219ab92:;
  /* 1219ab92 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1219ab95 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1219ab99 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1219ab9d pop edi */
  EDI = (pop32());
  /* 1219ab9e ret  */
  ESPCHK(0x1219aad0u, _esp0);
  ESP += 4; return;
L_1219ab9f:;
  /* 1219ab9f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1219aba2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1219aba6 pop edi */
  EDI = (pop32());
  /* 1219aba7 ret  */
  ESPCHK(0x1219aad0u, _esp0);
  ESP += 4; return;
L_1219aba8:;
  /* 1219aba8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1219abaa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1219abae pop edi */
  EDI = (pop32());
  /* 1219abaf ret  */
  ESPCHK(0x1219aad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abb0 @ 0x1219abb0 (243 bytes, 91 insns) */
void f_1219abb0(void) {
  FTRACE(0x1219abb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219abb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219abb1 mov ebp, esp */
  EBP = (ESP);
  /* 1219abb3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219abb6 push ebx */
  push32((uint32_t)(EBX));
  /* 1219abb7 push esi */
  push32((uint32_t)(ESI));
  /* 1219abb8 push edi */
  push32((uint32_t)(EDI));
  /* 1219abb9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1219abbc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1219abbf:;
  /* 1219abbf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219abc3 jne 0x1219abe3 */
  if (!C.zf) goto L_1219abe3;
  /* 1219abc5 push 0x121bef40 */
  push32((uint32_t)(0x121bef40u));
  /* 1219abca push 0 */
  push32((uint32_t)(0x0u));
  /* 1219abcc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1219abce push 0x121bef50 */
  push32((uint32_t)(0x121bef50u));
  /* 1219abd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219abd5 call 0x12196bd0 */
  push32(0x1219abdau); f_12196bd0();
  /* 1219abda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219abdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219abe0 jne 0x1219abe3 */
  if (!C.zf) goto L_1219abe3;
  /* 1219abe2 int3  */
  x86_unimpl("int3 @ 0x1219abe2");
L_1219abe3:;
  /* 1219abe3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219abe5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219abe7 jne 0x1219abbf */
  if (!C.zf) goto L_1219abbf;
L_1219abe9:;
  /* 1219abe9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219abed jne 0x1219ac0d */
  if (!C.zf) goto L_1219ac0d;
  /* 1219abef push 0x121bef24 */
  push32((uint32_t)(0x121bef24u));
  /* 1219abf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219abf6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1219abf8 push 0x121bef50 */
  push32((uint32_t)(0x121bef50u));
  /* 1219abfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1219abff call 0x12196bd0 */
  push32(0x1219ac04u); f_12196bd0();
  /* 1219ac04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ac07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ac0a jne 0x1219ac0d */
  if (!C.zf) goto L_1219ac0d;
  /* 1219ac0c int3  */
  x86_unimpl("int3 @ 0x1219ac0c");
L_1219ac0d:;
  /* 1219ac0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219ac0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219ac11 jne 0x1219abe9 */
  if (!C.zf) goto L_1219abe9;
  /* 1219ac13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac16 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1219ac1d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ac23 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1219ac26 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ac2c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1219ac2e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ac34 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1219ac37 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219ac3a push ecx */
  push32((uint32_t)(ECX));
  /* 1219ac3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219ac3e push edx */
  push32((uint32_t)(EDX));
  /* 1219ac3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac42 push eax */
  push32((uint32_t)(EAX));
  /* 1219ac43 call 0x1219eaa0 */
  push32(0x1219ac48u); f_1219eaa0();
  /* 1219ac48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ac4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1219ac4e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac51 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219ac54 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ac57 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac5a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1219ac5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac60 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ac64 jl 0x1219ac88 */
  if ((C.sf!=C.of)) goto L_1219ac88;
  /* 1219ac66 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219ac6b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1219ac6e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219ac70 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219ac76 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1219ac79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219ac7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ac81 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1219ac86 jmp 0x1219ac99 */
  goto L_1219ac99;
L_1219ac88:;
  /* 1219ac88 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ac8b push edx */
  push32((uint32_t)(EDX));
  /* 1219ac8c push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ac8e call 0x1219e820 */
  push32(0x1219ac93u); f_1219e820();
  /* 1219ac93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ac96 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1219ac99:;
  /* 1219ac99 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219ac9c pop edi */
  EDI = (pop32());
  /* 1219ac9d pop esi */
  ESI = (pop32());
  /* 1219ac9e pop ebx */
  EBX = (pop32());
  /* 1219ac9f mov esp, ebp */
  ESP = (EBP);
  /* 1219aca1 pop ebp */
  EBP = (pop32());
  /* 1219aca2 ret  */
  ESPCHK(0x1219abb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acb0 @ 0x1219acb0 (47 bytes, 17 insns) */
void f_1219acb0(void) {
  FTRACE(0x1219acb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219acb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1219acb1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219acb6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1219acba jb 0x1219acd0 */
  if (C.cf) goto L_1219acd0;
L_1219acbc:;
  /* 1219acbc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219acc2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219acc7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1219acc9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219acce jae 0x1219acbc */
  if (!C.cf) goto L_1219acbc;
L_1219acd0:;
  /* 1219acd0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219acd2 mov eax, esp */
  EAX = (ESP);
  /* 1219acd4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1219acd6 mov esp, ecx */
  ESP = (ECX);
  /* 1219acd8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219acda mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219acdd push eax */
  push32((uint32_t)(EAX));
  /* 1219acde ret  */
  ESPCHK(0x1219acb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ace0 @ 0x1219ace0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1219ace0(void) {
  FTRACE(0x1219ace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219ace0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219ace1 mov ebp, esp */
  EBP = (ESP);
  /* 1219ace3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ace6 push esi */
  push32((uint32_t)(ESI));
  /* 1219ace7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219aceb je 0x1219acf3 */
  if (C.zf) goto L_1219acf3;
  /* 1219aced cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219acf1 jne 0x1219acf8 */
  if (!C.zf) goto L_1219acf8;
L_1219acf3:;
  /* 1219acf3 jmp 0x1219aec8 */
  goto L_1219aec8;
L_1219acf8:;
  /* 1219acf8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219acfc je 0x1219ad14 */
  if (C.zf) goto L_1219ad14;
  /* 1219acfe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ad02 je 0x1219ad14 */
  if (C.zf) goto L_1219ad14;
  /* 1219ad04 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ad08 je 0x1219ad14 */
  if (C.zf) goto L_1219ad14;
  /* 1219ad0a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ad0e jne 0x1219adf1 */
  if (!C.zf) goto L_1219adf1;
L_1219ad14:;
  /* 1219ad14 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219ad16 call 0x1219b510 */
  push32(0x1219ad1bu); f_1219b510();
  /* 1219ad1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ad1e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ad22 je 0x1219ad2a */
  if (C.zf) goto L_1219ad2a;
  /* 1219ad24 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ad28 jne 0x1219ad6f */
  if (!C.zf) goto L_1219ad6f;
L_1219ad2a:;
  /* 1219ad2a cmp dword ptr [0x121c3874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ad31 jne 0x1219ad6f */
  if (!C.zf) goto L_1219ad6f;
  /* 1219ad33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219ad35 push 0x1219af10 */
  push32((uint32_t)(0x1219af10u));
  /* 1219ad3a call dword ptr [0x121c63a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c63a0))), 0x1219ad40u);
  /* 1219ad40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ad43 jne 0x1219ad51 */
  if (!C.zf) goto L_1219ad51;
  /* 1219ad45 mov dword ptr [0x121c3874], 1 */
  w32((uint32_t)(0x121c3874), (0x1u));
  /* 1219ad4f jmp 0x1219ad6f */
  goto L_1219ad6f;
L_1219ad51:;
  /* 1219ad51 call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x1219ad57u);
  /* 1219ad57 mov esi, eax */
  ESI = (EAX);
  /* 1219ad59 call 0x1219f9f0 */
  push32(0x1219ad5eu); f_1219f9f0();
  /* 1219ad5e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1219ad60 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219ad62 call 0x1219b5b0 */
  push32(0x1219ad67u); f_1219b5b0();
  /* 1219ad67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ad6a jmp 0x1219aec8 */
  goto L_1219aec8;
L_1219ad6f:;
  /* 1219ad6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ad72 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1219ad75 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219ad78 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ad7b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1219ad7e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ad82 ja 0x1219ade2 */
  if ((!C.cf&&!C.zf)) goto L_1219ade2;
  /* 1219ad84 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219ad87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219ad89 mov dl, byte ptr [eax + 0x1219aeef] */
  DL = (r8((uint32_t)(EAX + 0x1219aeef)));
  /* 1219ad8f jmp dword ptr [edx*4 + 0x1219aedb] */
  switch (EDX) {
    case 0: goto L_1219ad96;
    case 1: goto L_1219add0;
    case 2: goto L_1219adaa;
    case 3: goto L_1219adbd;
    case 4: goto L_1219ade2;
    default: x86_unimpl("switch@0x1219ad8f out of table"); return;
  }
L_1219ad96:;
  /* 1219ad96 mov ecx, dword ptr [0x121c3864] */
  ECX = (r32((uint32_t)(0x121c3864)));
  /* 1219ad9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1219ad9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ada2 mov dword ptr [0x121c3864], edx */
  w32((uint32_t)(0x121c3864), (EDX));
  /* 1219ada8 jmp 0x1219ade2 */
  goto L_1219ade2;
L_1219adaa:;
  /* 1219adaa mov eax, dword ptr [0x121c3868] */
  EAX = (r32((uint32_t)(0x121c3868)));
  /* 1219adaf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219adb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219adb5 mov dword ptr [0x121c3868], ecx */
  w32((uint32_t)(0x121c3868), (ECX));
  /* 1219adbb jmp 0x1219ade2 */
  goto L_1219ade2;
L_1219adbd:;
  /* 1219adbd mov edx, dword ptr [0x121c386c] */
  EDX = (r32((uint32_t)(0x121c386c)));
  /* 1219adc3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1219adc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219adc9 mov dword ptr [0x121c386c], eax */
  w32((uint32_t)(0x121c386c), (EAX));
  /* 1219adce jmp 0x1219ade2 */
  goto L_1219ade2;
L_1219add0:;
  /* 1219add0 mov ecx, dword ptr [0x121c3870] */
  ECX = (r32((uint32_t)(0x121c3870)));
  /* 1219add6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1219add9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219addc mov dword ptr [0x121c3870], edx */
  w32((uint32_t)(0x121c3870), (EDX));
L_1219ade2:;
  /* 1219ade2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219ade4 call 0x1219b5b0 */
  push32(0x1219ade9u); f_1219b5b0();
  /* 1219ade9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219adec jmp 0x1219aec3 */
  goto L_1219aec3;
L_1219adf1:;
  /* 1219adf1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219adf5 je 0x1219ae08 */
  if (C.zf) goto L_1219ae08;
  /* 1219adf7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219adfb je 0x1219ae08 */
  if (C.zf) goto L_1219ae08;
  /* 1219adfd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ae01 je 0x1219ae08 */
  if (C.zf) goto L_1219ae08;
  /* 1219ae03 jmp 0x1219aec8 */
  goto L_1219aec8;
L_1219ae08:;
  /* 1219ae08 call 0x12197550 */
  push32(0x1219ae0du); f_12197550();
  /* 1219ae0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219ae10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ae13 cmp dword ptr [eax + 0x50], 0x121c1c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x121c1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ae1a jne 0x1219ae65 */
  if (!C.zf) goto L_1219ae65;
  /* 1219ae1c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1219ae21 push 0x121bef5c */
  push32((uint32_t)(0x121bef5cu));
  /* 1219ae26 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219ae28 mov ecx, dword ptr [0x121c1c80] */
  ECX = (r32((uint32_t)(0x121c1c80)));
  /* 1219ae2e push ecx */
  push32((uint32_t)(ECX));
  /* 1219ae2f call 0x12197b10 */
  push32(0x1219ae34u); f_12197b10();
  /* 1219ae34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ae37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ae3a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1219ae3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ae40 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ae44 je 0x1219ae63 */
  if (C.zf) goto L_1219ae63;
  /* 1219ae46 mov ecx, dword ptr [0x121c1c80] */
  ECX = (r32((uint32_t)(0x121c1c80)));
  /* 1219ae4c push ecx */
  push32((uint32_t)(ECX));
  /* 1219ae4d push 0x121c1c00 */
  push32((uint32_t)(0x121c1c00u));
  /* 1219ae52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ae55 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1219ae58 push eax */
  push32((uint32_t)(EAX));
  /* 1219ae59 call 0x1219e3f0 */
  push32(0x1219ae5eu); f_1219e3f0();
  /* 1219ae5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ae61 jmp 0x1219ae65 */
  goto L_1219ae65;
L_1219ae63:;
  /* 1219ae63 jmp 0x1219aec8 */
  goto L_1219aec8;
L_1219ae65:;
  /* 1219ae65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ae68 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1219ae6b push edx */
  push32((uint32_t)(EDX));
  /* 1219ae6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ae6f push eax */
  push32((uint32_t)(EAX));
  /* 1219ae70 call 0x1219b1f0 */
  push32(0x1219ae75u); f_1219b1f0();
  /* 1219ae75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ae78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219ae7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ae7f jne 0x1219ae83 */
  if (!C.zf) goto L_1219ae83;
  /* 1219ae81 jmp 0x1219aec8 */
  goto L_1219aec8;
L_1219ae83:;
  /* 1219ae83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219ae86 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219ae89 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1219ae8c:;
  /* 1219ae8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219ae8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219ae92 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ae95 jne 0x1219aec3 */
  if (!C.zf) goto L_1219aec3;
  /* 1219ae97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219ae9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ae9d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1219aea0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219aea3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219aea6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1219aea9 mov edx, dword ptr [0x121c1c84] */
  EDX = (r32((uint32_t)(0x121c1c84)));
  /* 1219aeaf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219aeb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219aeb5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1219aeb8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219aeba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219aebd jb 0x1219aec1 */
  if (C.cf) goto L_1219aec1;
  /* 1219aebf jmp 0x1219aec3 */
  goto L_1219aec3;
L_1219aec1:;
  /* 1219aec1 jmp 0x1219ae8c */
  goto L_1219ae8c;
L_1219aec3:;
  /* 1219aec3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219aec6 jmp 0x1219aed6 */
  goto L_1219aed6;
L_1219aec8:;
  /* 1219aec8 call 0x1219f9e0 */
  push32(0x1219aecdu); f_1219f9e0();
  /* 1219aecd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1219aed3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1219aed6:;
  /* 1219aed6 pop esi */
  ESI = (pop32());
  /* 1219aed7 mov esp, ebp */
  ESP = (EBP);
  /* 1219aed9 pop ebp */
  EBP = (pop32());
  /* 1219aeda ret  */
  ESPCHK(0x1219ace0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af10 @ 0x1219af10 (146 bytes, 45 insns) */
void f_1219af10(void) {
  FTRACE(0x1219af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219af10 push ebp */
  push32((uint32_t)(EBP));
  /* 1219af11 mov ebp, esp */
  EBP = (ESP);
  /* 1219af13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219af16 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219af18 call 0x1219b510 */
  push32(0x1219af1du); f_1219b510();
  /* 1219af1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219af20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219af24 jne 0x1219af3e */
  if (!C.zf) goto L_1219af3e;
  /* 1219af26 mov dword ptr [ebp - 8], 0x121c3864 */
  w32((uint32_t)(EBP + -0x8), (0x121c3864u));
  /* 1219af2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219af30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219af32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1219af35 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1219af3c jmp 0x1219af54 */
  goto L_1219af54;
L_1219af3e:;
  /* 1219af3e mov dword ptr [ebp - 8], 0x121c3868 */
  w32((uint32_t)(EBP + -0x8), (0x121c3868u));
  /* 1219af45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219af48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219af4a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219af4d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1219af54:;
  /* 1219af54 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219af58 jne 0x1219af68 */
  if (!C.zf) goto L_1219af68;
  /* 1219af5a push 1 */
  push32((uint32_t)(0x1u));
  /* 1219af5c call 0x1219b5b0 */
  push32(0x1219af61u); f_1219b5b0();
  /* 1219af61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219af64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219af66 jmp 0x1219af9c */
  goto L_1219af9c;
L_1219af68:;
  /* 1219af68 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219af6c je 0x1219af8d */
  if (C.zf) goto L_1219af8d;
  /* 1219af6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219af71 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1219af77 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219af79 call 0x1219b5b0 */
  push32(0x1219af7eu); f_1219b5b0();
  /* 1219af7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219af81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219af84 push edx */
  push32((uint32_t)(EDX));
  /* 1219af85 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1219af88u);
  /* 1219af88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219af8b jmp 0x1219af97 */
  goto L_1219af97;
L_1219af8d:;
  /* 1219af8d push 1 */
  push32((uint32_t)(0x1u));
  /* 1219af8f call 0x1219b5b0 */
  push32(0x1219af94u); f_1219b5b0();
  /* 1219af94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219af97:;
  /* 1219af97 mov eax, 1 */
  EAX = (0x1u);
L_1219af9c:;
  /* 1219af9c mov esp, ebp */
  ESP = (EBP);
  /* 1219af9e pop ebp */
  EBP = (pop32());
  /* 1219af9f ret 4 */
  ESPCHK(0x1219af10u, _esp0);
  ESP += 8; return;
}

/* FUN_1000afb0 @ 0x1219afb0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1219afb0(void) {
  FTRACE(0x1219afb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219afb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219afb1 mov ebp, esp */
  EBP = (ESP);
  /* 1219afb3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219afb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1219afbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219afc0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1219afc3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219afc6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219afc9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1219afcc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219afd0 ja 0x1219b07e */
  if ((!C.cf&&!C.zf)) goto L_1219b07e;
  /* 1219afd6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219afd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219afdb mov dl, byte ptr [eax + 0x1219b1d2] */
  DL = (r8((uint32_t)(EAX + 0x1219b1d2)));
  /* 1219afe1 jmp dword ptr [edx*4 + 0x1219b1ba] */
  switch (EDX) {
    case 0: goto L_1219afe8;
    case 1: goto L_1219b053;
    case 2: goto L_1219b039;
    case 3: goto L_1219b005;
    case 4: goto L_1219b01f;
    case 5: goto L_1219b07e;
    default: x86_unimpl("switch@0x1219afe1 out of table"); return;
  }
L_1219afe8:;
  /* 1219afe8 mov dword ptr [ebp - 0x18], 0x121c3864 */
  w32((uint32_t)(EBP + -0x18), (0x121c3864u));
  /* 1219afef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219aff2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219aff4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1219aff7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219affa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219affd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219b000 jmp 0x1219b086 */
  goto L_1219b086;
L_1219b005:;
  /* 1219b005 mov dword ptr [ebp - 0x18], 0x121c3868 */
  w32((uint32_t)(EBP + -0x18), (0x121c3868u));
  /* 1219b00c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219b00f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219b011 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1219b014 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219b017 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b01a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219b01d jmp 0x1219b086 */
  goto L_1219b086;
L_1219b01f:;
  /* 1219b01f mov dword ptr [ebp - 0x18], 0x121c386c */
  w32((uint32_t)(EBP + -0x18), (0x121c386cu));
  /* 1219b026 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219b029 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219b02b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1219b02e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219b031 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b034 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219b037 jmp 0x1219b086 */
  goto L_1219b086;
L_1219b039:;
  /* 1219b039 mov dword ptr [ebp - 0x18], 0x121c3870 */
  w32((uint32_t)(EBP + -0x18), (0x121c3870u));
  /* 1219b040 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219b043 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219b045 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1219b048 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219b04b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b04e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219b051 jmp 0x1219b086 */
  goto L_1219b086;
L_1219b053:;
  /* 1219b053 call 0x12197550 */
  push32(0x1219b058u); f_12197550();
  /* 1219b058 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219b05b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b05e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1219b061 push edx */
  push32((uint32_t)(EDX));
  /* 1219b062 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b065 push eax */
  push32((uint32_t)(EAX));
  /* 1219b066 call 0x1219b1f0 */
  push32(0x1219b06bu); f_1219b1f0();
  /* 1219b06b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b06e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b071 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219b074 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219b077 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219b079 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1219b07c jmp 0x1219b086 */
  goto L_1219b086;
L_1219b07e:;
  /* 1219b07e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219b081 jmp 0x1219b1b6 */
  goto L_1219b1b6;
L_1219b086:;
  /* 1219b086 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b08a je 0x1219b096 */
  if (C.zf) goto L_1219b096;
  /* 1219b08c push 1 */
  push32((uint32_t)(0x1u));
  /* 1219b08e call 0x1219b510 */
  push32(0x1219b093u); f_1219b510();
  /* 1219b093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b096:;
  /* 1219b096 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b09a jne 0x1219b0b3 */
  if (!C.zf) goto L_1219b0b3;
  /* 1219b09c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b0a0 je 0x1219b0ac */
  if (C.zf) goto L_1219b0ac;
  /* 1219b0a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219b0a4 call 0x1219b5b0 */
  push32(0x1219b0a9u); f_1219b5b0();
  /* 1219b0a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b0ac:;
  /* 1219b0ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b0ae jmp 0x1219b1b6 */
  goto L_1219b1b6;
L_1219b0b3:;
  /* 1219b0b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b0b7 jne 0x1219b0d0 */
  if (!C.zf) goto L_1219b0d0;
  /* 1219b0b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b0bd je 0x1219b0c9 */
  if (C.zf) goto L_1219b0c9;
  /* 1219b0bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1219b0c1 call 0x1219b5b0 */
  push32(0x1219b0c6u); f_1219b5b0();
  /* 1219b0c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b0c9:;
  /* 1219b0c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 1219b0cb call 0x121972d0 */
  push32(0x1219b0d0u); f_121972d0();
L_1219b0d0:;
  /* 1219b0d0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b0d4 je 0x1219b0e2 */
  if (C.zf) goto L_1219b0e2;
  /* 1219b0d6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b0da je 0x1219b0e2 */
  if (C.zf) goto L_1219b0e2;
  /* 1219b0dc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b0e0 jne 0x1219b10e */
  if (!C.zf) goto L_1219b10e;
L_1219b0e2:;
  /* 1219b0e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b0e5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1219b0e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1219b0eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b0ee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1219b0f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b0f9 jne 0x1219b10e */
  if (!C.zf) goto L_1219b10e;
  /* 1219b0fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b0fe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1219b101 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1219b104 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b107 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1219b10e:;
  /* 1219b10e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b112 jne 0x1219b150 */
  if (!C.zf) goto L_1219b150;
  /* 1219b114 mov eax, dword ptr [0x121c1c78] */
  EAX = (r32((uint32_t)(0x121c1c78)));
  /* 1219b119 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1219b11c jmp 0x1219b127 */
  goto L_1219b127;
L_1219b11e:;
  /* 1219b11e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b124 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1219b127:;
  /* 1219b127 mov edx, dword ptr [0x121c1c78] */
  EDX = (r32((uint32_t)(0x121c1c78)));
  /* 1219b12d add edx, dword ptr [0x121c1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b133 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b136 jge 0x1219b14e */
  if ((C.sf==C.of)) goto L_1219b14e;
  /* 1219b138 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b13b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219b13e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b141 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1219b144 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1219b14c jmp 0x1219b11e */
  goto L_1219b11e;
L_1219b14e:;
  /* 1219b14e jmp 0x1219b159 */
  goto L_1219b159;
L_1219b150:;
  /* 1219b150 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219b153 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1219b159:;
  /* 1219b159 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b15d je 0x1219b169 */
  if (C.zf) goto L_1219b169;
  /* 1219b15f push 1 */
  push32((uint32_t)(0x1u));
  /* 1219b161 call 0x1219b5b0 */
  push32(0x1219b166u); f_1219b5b0();
  /* 1219b166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b169:;
  /* 1219b169 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b16d jne 0x1219b180 */
  if (!C.zf) goto L_1219b180;
  /* 1219b16f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b172 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1219b175 push edx */
  push32((uint32_t)(EDX));
  /* 1219b176 push 8 */
  push32((uint32_t)(0x8u));
  /* 1219b178 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1219b17bu);
  /* 1219b17b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b17e jmp 0x1219b18a */
  goto L_1219b18a;
L_1219b180:;
  /* 1219b180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b183 push eax */
  push32((uint32_t)(EAX));
  /* 1219b184 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1219b187u);
  /* 1219b187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b18a:;
  /* 1219b18a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b18e je 0x1219b19c */
  if (C.zf) goto L_1219b19c;
  /* 1219b190 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b194 je 0x1219b19c */
  if (C.zf) goto L_1219b19c;
  /* 1219b196 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b19a jne 0x1219b1b4 */
  if (!C.zf) goto L_1219b1b4;
L_1219b19c:;
  /* 1219b19c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b19f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219b1a2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1219b1a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b1a9 jne 0x1219b1b4 */
  if (!C.zf) goto L_1219b1b4;
  /* 1219b1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b1ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b1b1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1219b1b4:;
  /* 1219b1b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219b1b6:;
  /* 1219b1b6 mov esp, ebp */
  ESP = (EBP);
  /* 1219b1b8 pop ebp */
  EBP = (pop32());
  /* 1219b1b9 ret  */
  ESPCHK(0x1219afb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1f0 @ 0x1219b1f0 (91 bytes, 35 insns) */
void f_1219b1f0(void) {
  FTRACE(0x1219b1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1219b1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b1f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219b1f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219b1fa:;
  /* 1219b1fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b1fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219b200 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b203 je 0x1219b223 */
  if (C.zf) goto L_1219b223;
  /* 1219b205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b208 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b20b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219b20e mov ecx, dword ptr [0x121c1c84] */
  ECX = (r32((uint32_t)(0x121c1c84)));
  /* 1219b214 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219b217 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219b21a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b21c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b21f jae 0x1219b223 */
  if (!C.cf) goto L_1219b223;
  /* 1219b221 jmp 0x1219b1fa */
  goto L_1219b1fa;
L_1219b223:;
  /* 1219b223 mov eax, dword ptr [0x121c1c84] */
  EAX = (r32((uint32_t)(0x121c1c84)));
  /* 1219b228 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219b22b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219b22e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b230 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b233 jae 0x1219b245 */
  if (!C.cf) goto L_1219b245;
  /* 1219b235 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b238 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219b23b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b23e jne 0x1219b245 */
  if (!C.zf) goto L_1219b245;
  /* 1219b240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b243 jmp 0x1219b247 */
  goto L_1219b247;
L_1219b245:;
  /* 1219b245 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219b247:;
  /* 1219b247 mov esp, ebp */
  ESP = (EBP);
  /* 1219b249 pop ebp */
  EBP = (pop32());
  /* 1219b24a ret  */
  ESPCHK(0x1219b1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x1219b250 (13 bytes, 6 insns) */
void f_1219b250(void) {
  FTRACE(0x1219b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b250 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b251 mov ebp, esp */
  EBP = (ESP);
  /* 1219b253 call 0x12197550 */
  push32(0x1219b258u); f_12197550();
  /* 1219b258 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b25b pop ebp */
  EBP = (pop32());
  /* 1219b25c ret  */
  ESPCHK(0x1219b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b260 @ 0x1219b260 (13 bytes, 6 insns) */
void f_1219b260(void) {
  FTRACE(0x1219b260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b260 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b261 mov ebp, esp */
  EBP = (ESP);
  /* 1219b263 call 0x12197550 */
  push32(0x1219b268u); f_12197550();
  /* 1219b268 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b26b pop ebp */
  EBP = (pop32());
  /* 1219b26c ret  */
  ESPCHK(0x1219b260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b270 @ 0x1219b270 (187 bytes, 54 insns) */
void f_1219b270(void) {
  FTRACE(0x1219b270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b270 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b271 mov ebp, esp */
  EBP = (ESP);
  /* 1219b273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219b276 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219b27d cmp dword ptr [0x121c3878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b284 jne 0x1219b2e3 */
  if (!C.zf) goto L_1219b2e3;
  /* 1219b286 push 0x121be388 */
  push32((uint32_t)(0x121be388u));
  /* 1219b28b call dword ptr [0x121c632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c632c))), 0x1219b291u);
  /* 1219b291 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219b294 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b298 je 0x1219b2b7 */
  if (C.zf) goto L_1219b2b7;
  /* 1219b29a push 0x121bef8c */
  push32((uint32_t)(0x121bef8cu));
  /* 1219b29f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b2a2 push eax */
  push32((uint32_t)(EAX));
  /* 1219b2a3 call dword ptr [0x121c6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6328))), 0x1219b2a9u);
  /* 1219b2a9 mov dword ptr [0x121c3878], eax */
  w32((uint32_t)(0x121c3878), (EAX));
  /* 1219b2ae cmp dword ptr [0x121c3878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b2b5 jne 0x1219b2bb */
  if (!C.zf) goto L_1219b2bb;
L_1219b2b7:;
  /* 1219b2b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b2b9 jmp 0x1219b327 */
  goto L_1219b327;
L_1219b2bb:;
  /* 1219b2bb push 0x121bef7c */
  push32((uint32_t)(0x121bef7cu));
  /* 1219b2c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b2c4 call dword ptr [0x121c6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6328))), 0x1219b2cau);
  /* 1219b2ca mov dword ptr [0x121c387c], eax */
  w32((uint32_t)(0x121c387c), (EAX));
  /* 1219b2cf push 0x121bef68 */
  push32((uint32_t)(0x121bef68u));
  /* 1219b2d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b2d7 push edx */
  push32((uint32_t)(EDX));
  /* 1219b2d8 call dword ptr [0x121c6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6328))), 0x1219b2deu);
  /* 1219b2de mov dword ptr [0x121c3880], eax */
  w32((uint32_t)(0x121c3880), (EAX));
L_1219b2e3:;
  /* 1219b2e3 cmp dword ptr [0x121c387c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c387c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b2ea je 0x1219b2f5 */
  if (C.zf) goto L_1219b2f5;
  /* 1219b2ec call dword ptr [0x121c387c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c387c))), 0x1219b2f2u);
  /* 1219b2f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219b2f5:;
  /* 1219b2f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b2f9 je 0x1219b311 */
  if (C.zf) goto L_1219b311;
  /* 1219b2fb cmp dword ptr [0x121c3880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b302 je 0x1219b311 */
  if (C.zf) goto L_1219b311;
  /* 1219b304 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b307 push eax */
  push32((uint32_t)(EAX));
  /* 1219b308 call dword ptr [0x121c3880] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c3880))), 0x1219b30eu);
  /* 1219b30e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219b311:;
  /* 1219b311 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219b314 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b315 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219b318 push edx */
  push32((uint32_t)(EDX));
  /* 1219b319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b31c push eax */
  push32((uint32_t)(EAX));
  /* 1219b31d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b320 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b321 call dword ptr [0x121c3878] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c3878))), 0x1219b327u);
L_1219b327:;
  /* 1219b327 mov esp, ebp */
  ESP = (EBP);
  /* 1219b329 pop ebp */
  EBP = (pop32());
  /* 1219b32a ret  */
  ESPCHK(0x1219b270u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1219b330 (254 bytes, 109 insns) */
void f_1219b330(void) {
  FTRACE(0x1219b330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b330 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1219b334 push edi */
  push32((uint32_t)(EDI));
  /* 1219b335 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219b337 je 0x1219b3b3 */
  if (C.zf) goto L_1219b3b3;
  /* 1219b339 push esi */
  push32((uint32_t)(ESI));
  /* 1219b33a push ebx */
  push32((uint32_t)(EBX));
  /* 1219b33b mov ebx, ecx */
  EBX = (ECX);
  /* 1219b33d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1219b341 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1219b347 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1219b34b jne 0x1219b354 */
  if (!C.zf) goto L_1219b354;
  /* 1219b34d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219b350 jne 0x1219b3c1 */
  if (!C.zf) goto L_1219b3c1;
  /* 1219b352 jmp 0x1219b375 */
  goto L_1219b375;
L_1219b354:;
  /* 1219b354 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219b356 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1219b357 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219b359 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1219b35a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1219b35b je 0x1219b382 */
  if (C.zf) goto L_1219b382;
  /* 1219b35d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1219b35f je 0x1219b38a */
  if (C.zf) goto L_1219b38a;
  /* 1219b361 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1219b367 jne 0x1219b354 */
  if (!C.zf) goto L_1219b354;
  /* 1219b369 mov ebx, ecx */
  EBX = (ECX);
  /* 1219b36b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219b36e jne 0x1219b3c1 */
  if (!C.zf) goto L_1219b3c1;
L_1219b370:;
  /* 1219b370 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1219b373 je 0x1219b382 */
  if (C.zf) goto L_1219b382;
L_1219b375:;
  /* 1219b375 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219b377 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1219b378 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219b37a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1219b37b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1219b37d je 0x1219b3ae */
  if (C.zf) goto L_1219b3ae;
  /* 1219b37f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1219b380 jne 0x1219b375 */
  if (!C.zf) goto L_1219b375;
L_1219b382:;
  /* 1219b382 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1219b386 pop ebx */
  EBX = (pop32());
  /* 1219b387 pop esi */
  ESI = (pop32());
  /* 1219b388 pop edi */
  EDI = (pop32());
  /* 1219b389 ret  */
  ESPCHK(0x1219b330u, _esp0);
  ESP += 4; return;
L_1219b38a:;
  /* 1219b38a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1219b390 je 0x1219b3a4 */
  if (C.zf) goto L_1219b3a4;
L_1219b392:;
  /* 1219b392 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219b394 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1219b395 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1219b396 je 0x1219b426 */
  if (C.zf) goto L_1219b426;
  /* 1219b39c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1219b3a2 jne 0x1219b392 */
  if (!C.zf) goto L_1219b392;
L_1219b3a4:;
  /* 1219b3a4 mov ebx, ecx */
  EBX = (ECX);
  /* 1219b3a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219b3a9 jne 0x1219b417 */
  if (!C.zf) goto L_1219b417;
L_1219b3ab:;
  /* 1219b3ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219b3ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1219b3ae:;
  /* 1219b3ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1219b3af jne 0x1219b3ab */
  if (!C.zf) goto L_1219b3ab;
  /* 1219b3b1 pop ebx */
  EBX = (pop32());
  /* 1219b3b2 pop esi */
  ESI = (pop32());
L_1219b3b3:;
  /* 1219b3b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1219b3b7 pop edi */
  EDI = (pop32());
  /* 1219b3b8 ret  */
  ESPCHK(0x1219b330u, _esp0);
  ESP += 4; return;
L_1219b3b9:;
  /* 1219b3b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1219b3bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b3be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1219b3bf je 0x1219b370 */
  if (C.zf) goto L_1219b370;
L_1219b3c1:;
  /* 1219b3c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1219b3c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1219b3c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b3ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219b3cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b3cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1219b3d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b3d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1219b3d9 je 0x1219b3b9 */
  if (C.zf) goto L_1219b3b9;
  /* 1219b3db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1219b3dd je 0x1219b40b */
  if (C.zf) goto L_1219b40b;
  /* 1219b3df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1219b3e1 je 0x1219b401 */
  if (C.zf) goto L_1219b401;
  /* 1219b3e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1219b3e9 je 0x1219b3f7 */
  if (C.zf) goto L_1219b3f7;
  /* 1219b3eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1219b3f1 jne 0x1219b3b9 */
  if (!C.zf) goto L_1219b3b9;
  /* 1219b3f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1219b3f5 jmp 0x1219b40f */
  goto L_1219b40f;
L_1219b3f7:;
  /* 1219b3f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1219b3fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1219b3ff jmp 0x1219b40f */
  goto L_1219b40f;
L_1219b401:;
  /* 1219b401 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1219b407 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1219b409 jmp 0x1219b40f */
  goto L_1219b40f;
L_1219b40b:;
  /* 1219b40b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219b40d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1219b40f:;
  /* 1219b40f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b412 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b414 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1219b415 je 0x1219b421 */
  if (C.zf) goto L_1219b421;
L_1219b417:;
  /* 1219b417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219b419:;
  /* 1219b419 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1219b41b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b41e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1219b41f jne 0x1219b419 */
  if (!C.zf) goto L_1219b419;
L_1219b421:;
  /* 1219b421 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1219b424 jne 0x1219b3ab */
  if (!C.zf) goto L_1219b3ab;
L_1219b426:;
  /* 1219b426 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1219b42a pop ebx */
  EBX = (pop32());
  /* 1219b42b pop esi */
  ESI = (pop32());
  /* 1219b42c pop edi */
  EDI = (pop32());
  /* 1219b42d ret  */
  ESPCHK(0x1219b330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b430 @ 0x1219b430 (55 bytes, 16 insns) */
void f_1219b430(void) {
  FTRACE(0x1219b430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b430 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b431 mov ebp, esp */
  EBP = (ESP);
  /* 1219b433 mov eax, dword ptr [0x121c1b84] */
  EAX = (r32((uint32_t)(0x121c1b84)));
  /* 1219b438 push eax */
  push32((uint32_t)(EAX));
  /* 1219b439 call dword ptr [0x121c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c63a4))), 0x1219b43fu);
  /* 1219b43f mov ecx, dword ptr [0x121c1b74] */
  ECX = (r32((uint32_t)(0x121c1b74)));
  /* 1219b445 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b446 call dword ptr [0x121c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c63a4))), 0x1219b44cu);
  /* 1219b44c mov edx, dword ptr [0x121c1b64] */
  EDX = (r32((uint32_t)(0x121c1b64)));
  /* 1219b452 push edx */
  push32((uint32_t)(EDX));
  /* 1219b453 call dword ptr [0x121c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c63a4))), 0x1219b459u);
  /* 1219b459 mov eax, dword ptr [0x121c1b44] */
  EAX = (r32((uint32_t)(0x121c1b44)));
  /* 1219b45e push eax */
  push32((uint32_t)(EAX));
  /* 1219b45f call dword ptr [0x121c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c63a4))), 0x1219b465u);
  /* 1219b465 pop ebp */
  EBP = (pop32());
  /* 1219b466 ret  */
  ESPCHK(0x1219b430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b470 @ 0x1219b470 (159 bytes, 47 insns) */
void f_1219b470(void) {
  FTRACE(0x1219b470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b470 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b471 mov ebp, esp */
  EBP = (ESP);
  /* 1219b473 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b474 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219b47b jmp 0x1219b486 */
  goto L_1219b486;
L_1219b47d:;
  /* 1219b47d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b480 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b483 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219b486:;
  /* 1219b486 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b48a jge 0x1219b4d9 */
  if ((C.sf==C.of)) goto L_1219b4d9;
  /* 1219b48c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b48f cmp dword ptr [ecx*4 + 0x121c1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x121c1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b497 je 0x1219b4d7 */
  if (C.zf) goto L_1219b4d7;
  /* 1219b499 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b49d je 0x1219b4d7 */
  if (C.zf) goto L_1219b4d7;
  /* 1219b49f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b4a3 je 0x1219b4d7 */
  if (C.zf) goto L_1219b4d7;
  /* 1219b4a5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b4a9 je 0x1219b4d7 */
  if (C.zf) goto L_1219b4d7;
  /* 1219b4ab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b4af je 0x1219b4d7 */
  if (C.zf) goto L_1219b4d7;
  /* 1219b4b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b4b4 mov eax, dword ptr [edx*4 + 0x121c1b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c1b40)));
  /* 1219b4bb push eax */
  push32((uint32_t)(EAX));
  /* 1219b4bc call dword ptr [0x121c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6370))), 0x1219b4c2u);
  /* 1219b4c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219b4c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b4c7 mov edx, dword ptr [ecx*4 + 0x121c1b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c1b40)));
  /* 1219b4ce push edx */
  push32((uint32_t)(EDX));
  /* 1219b4cf call 0x121985a0 */
  push32(0x1219b4d4u); f_121985a0();
  /* 1219b4d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b4d7:;
  /* 1219b4d7 jmp 0x1219b47d */
  goto L_1219b47d;
L_1219b4d9:;
  /* 1219b4d9 mov eax, dword ptr [0x121c1b64] */
  EAX = (r32((uint32_t)(0x121c1b64)));
  /* 1219b4de push eax */
  push32((uint32_t)(EAX));
  /* 1219b4df call dword ptr [0x121c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6370))), 0x1219b4e5u);
  /* 1219b4e5 mov ecx, dword ptr [0x121c1b74] */
  ECX = (r32((uint32_t)(0x121c1b74)));
  /* 1219b4eb push ecx */
  push32((uint32_t)(ECX));
  /* 1219b4ec call dword ptr [0x121c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6370))), 0x1219b4f2u);
  /* 1219b4f2 mov edx, dword ptr [0x121c1b84] */
  EDX = (r32((uint32_t)(0x121c1b84)));
  /* 1219b4f8 push edx */
  push32((uint32_t)(EDX));
  /* 1219b4f9 call dword ptr [0x121c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6370))), 0x1219b4ffu);
  /* 1219b4ff mov eax, dword ptr [0x121c1b44] */
  EAX = (r32((uint32_t)(0x121c1b44)));
  /* 1219b504 push eax */
  push32((uint32_t)(EAX));
  /* 1219b505 call dword ptr [0x121c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6370))), 0x1219b50bu);
  /* 1219b50b mov esp, ebp */
  ESP = (EBP);
  /* 1219b50d pop ebp */
  EBP = (pop32());
  /* 1219b50e ret  */
  ESPCHK(0x1219b470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b510 @ 0x1219b510 (151 bytes, 46 insns) */
void f_1219b510(void) {
  FTRACE(0x1219b510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b510 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b511 mov ebp, esp */
  EBP = (ESP);
  /* 1219b513 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b517 cmp dword ptr [eax*4 + 0x121c1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x121c1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b51f jne 0x1219b592 */
  if (!C.zf) goto L_1219b592;
  /* 1219b521 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1219b526 push 0x121bef98 */
  push32((uint32_t)(0x121bef98u));
  /* 1219b52b push 2 */
  push32((uint32_t)(0x2u));
  /* 1219b52d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1219b52f call 0x12197b10 */
  push32(0x1219b534u); f_12197b10();
  /* 1219b534 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b537 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219b53a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b53e jne 0x1219b54a */
  if (!C.zf) goto L_1219b54a;
  /* 1219b540 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1219b542 call 0x12196a80 */
  push32(0x1219b547u); f_12196a80();
  /* 1219b547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b54a:;
  /* 1219b54a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1219b54c call 0x1219b510 */
  push32(0x1219b551u); f_1219b510();
  /* 1219b551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b554 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b557 cmp dword ptr [ecx*4 + 0x121c1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x121c1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b55f jne 0x1219b57a */
  if (!C.zf) goto L_1219b57a;
  /* 1219b561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b564 push edx */
  push32((uint32_t)(EDX));
  /* 1219b565 call dword ptr [0x121c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c63a4))), 0x1219b56bu);
  /* 1219b56b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b56e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b571 mov dword ptr [eax*4 + 0x121c1b40], ecx */
  w32((uint32_t)(EAX*4 + 0x121c1b40), (ECX));
  /* 1219b578 jmp 0x1219b588 */
  goto L_1219b588;
L_1219b57a:;
  /* 1219b57a push 2 */
  push32((uint32_t)(0x2u));
  /* 1219b57c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b57f push edx */
  push32((uint32_t)(EDX));
  /* 1219b580 call 0x121985a0 */
  push32(0x1219b585u); f_121985a0();
  /* 1219b585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b588:;
  /* 1219b588 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1219b58a call 0x1219b5b0 */
  push32(0x1219b58fu); f_1219b5b0();
  /* 1219b58f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b592:;
  /* 1219b592 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b595 mov ecx, dword ptr [eax*4 + 0x121c1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x121c1b40)));
  /* 1219b59c push ecx */
  push32((uint32_t)(ECX));
  /* 1219b59d call dword ptr [0x121c6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6308))), 0x1219b5a3u);
  /* 1219b5a3 mov esp, ebp */
  ESP = (EBP);
  /* 1219b5a5 pop ebp */
  EBP = (pop32());
  /* 1219b5a6 ret  */
  ESPCHK(0x1219b510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x1219b5b0 (22 bytes, 8 insns) */
void f_1219b5b0(void) {
  FTRACE(0x1219b5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1219b5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b5b6 mov ecx, dword ptr [eax*4 + 0x121c1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x121c1b40)));
  /* 1219b5bd push ecx */
  push32((uint32_t)(ECX));
  /* 1219b5be call dword ptr [0x121c6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6304))), 0x1219b5c4u);
  /* 1219b5c4 pop ebp */
  EBP = (pop32());
  /* 1219b5c5 ret  */
  ESPCHK(0x1219b5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5d0 @ 0x1219b5d0 (26 bytes, 10 insns) */
void f_1219b5d0(void) {
  FTRACE(0x1219b5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b5d1 mov ebp, esp */
  EBP = (ESP);
  /* 1219b5d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b5d6 push eax */
  push32((uint32_t)(EAX));
  /* 1219b5d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219b5d9 call dword ptr [0x121c635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c635c))), 0x1219b5dfu);
  /* 1219b5df push 0xff */
  push32((uint32_t)(0xffu));
  /* 1219b5e4 call dword ptr [0x121c6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6338))), 0x1219b5eau);
  /* 1219b5ea pop ebp */
  EBP = (pop32());
  /* 1219b5eb ret  */
  ESPCHK(0x1219b5d0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1219b5f0 (446 bytes, 130 insns) */
void f_1219b5f0(void) {
  FTRACE(0x1219b5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1219b5f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219b5f6 call 0x12197550 */
  push32(0x1219b5fbu); f_12197550();
  /* 1219b5fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219b5fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b601 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1219b604 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b605 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b608 push edx */
  push32((uint32_t)(EDX));
  /* 1219b609 call 0x1219b7b0 */
  push32(0x1219b60eu); f_1219b7b0();
  /* 1219b60e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b611 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1219b614 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b618 je 0x1219b623 */
  if (C.zf) goto L_1219b623;
  /* 1219b61a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b61d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b621 jne 0x1219b632 */
  if (!C.zf) goto L_1219b632;
L_1219b623:;
  /* 1219b623 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219b626 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b627 call dword ptr [0x121c62fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62fc))), 0x1219b62du);
  /* 1219b62d jmp 0x1219b7aa */
  goto L_1219b7aa;
L_1219b632:;
  /* 1219b632 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b635 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b639 jne 0x1219b64f */
  if (!C.zf) goto L_1219b64f;
  /* 1219b63b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b63e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1219b645 mov eax, 1 */
  EAX = (0x1u);
  /* 1219b64a jmp 0x1219b7aa */
  goto L_1219b7aa;
L_1219b64f:;
  /* 1219b64f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b652 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b656 jne 0x1219b660 */
  if (!C.zf) goto L_1219b660;
  /* 1219b658 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219b65b jmp 0x1219b7aa */
  goto L_1219b7aa;
L_1219b660:;
  /* 1219b660 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b663 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1219b666 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219b669 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b66c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1219b66f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1219b672 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b675 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219b678 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1219b67b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b67e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b682 jne 0x1219b787 */
  if (!C.zf) goto L_1219b787;
  /* 1219b688 mov eax, dword ptr [0x121c1c78] */
  EAX = (r32((uint32_t)(0x121c1c78)));
  /* 1219b68d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1219b690 jmp 0x1219b69b */
  goto L_1219b69b;
L_1219b692:;
  /* 1219b692 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219b695 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b698 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1219b69b:;
  /* 1219b69b mov edx, dword ptr [0x121c1c78] */
  EDX = (r32((uint32_t)(0x121c1c78)));
  /* 1219b6a1 add edx, dword ptr [0x121c1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b6a7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b6aa jge 0x1219b6c2 */
  if ((C.sf==C.of)) goto L_1219b6c2;
  /* 1219b6ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219b6af imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219b6b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b6b5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1219b6b8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1219b6c0 jmp 0x1219b692 */
  goto L_1219b692;
L_1219b6c2:;
  /* 1219b6c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b6c5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1219b6c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1219b6cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b6ce cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b6d4 jne 0x1219b6e5 */
  if (!C.zf) goto L_1219b6e5;
  /* 1219b6d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b6d9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1219b6e0 jmp 0x1219b76d */
  goto L_1219b76d;
L_1219b6e5:;
  /* 1219b6e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b6e8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b6ee jne 0x1219b6fc */
  if (!C.zf) goto L_1219b6fc;
  /* 1219b6f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b6f3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1219b6fa jmp 0x1219b76d */
  goto L_1219b76d;
L_1219b6fc:;
  /* 1219b6fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b6ff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b705 jne 0x1219b713 */
  if (!C.zf) goto L_1219b713;
  /* 1219b707 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b70a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1219b711 jmp 0x1219b76d */
  goto L_1219b76d;
L_1219b713:;
  /* 1219b713 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b716 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b71c jne 0x1219b72a */
  if (!C.zf) goto L_1219b72a;
  /* 1219b71e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b721 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1219b728 jmp 0x1219b76d */
  goto L_1219b76d;
L_1219b72a:;
  /* 1219b72a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b72d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b733 jne 0x1219b741 */
  if (!C.zf) goto L_1219b741;
  /* 1219b735 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b738 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1219b73f jmp 0x1219b76d */
  goto L_1219b76d;
L_1219b741:;
  /* 1219b741 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b744 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b74a jne 0x1219b758 */
  if (!C.zf) goto L_1219b758;
  /* 1219b74c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b74f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1219b756 jmp 0x1219b76d */
  goto L_1219b76d;
L_1219b758:;
  /* 1219b758 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b75b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b761 jne 0x1219b76d */
  if (!C.zf) goto L_1219b76d;
  /* 1219b763 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b766 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1219b76d:;
  /* 1219b76d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b770 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1219b773 push edx */
  push32((uint32_t)(EDX));
  /* 1219b774 push 8 */
  push32((uint32_t)(0x8u));
  /* 1219b776 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1219b779u);
  /* 1219b779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b77c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b77f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219b782 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1219b785 jmp 0x1219b79e */
  goto L_1219b79e;
L_1219b787:;
  /* 1219b787 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b78a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1219b791 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219b794 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219b797 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b798 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1219b79bu);
  /* 1219b79b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219b79e:;
  /* 1219b79e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219b7a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219b7a4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1219b7a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1219b7aa:;
  /* 1219b7aa mov esp, ebp */
  ESP = (EBP);
  /* 1219b7ac pop ebp */
  EBP = (pop32());
  /* 1219b7ad ret  */
  ESPCHK(0x1219b5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7b0 @ 0x1219b7b0 (89 bytes, 35 insns) */
void f_1219b7b0(void) {
  FTRACE(0x1219b7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1219b7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b7b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219b7b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219b7ba:;
  /* 1219b7ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b7bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219b7bf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b7c2 je 0x1219b7e2 */
  if (C.zf) goto L_1219b7e2;
  /* 1219b7c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b7c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b7ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219b7cd mov ecx, dword ptr [0x121c1c84] */
  ECX = (r32((uint32_t)(0x121c1c84)));
  /* 1219b7d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219b7d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219b7d9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b7db cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b7de jae 0x1219b7e2 */
  if (!C.cf) goto L_1219b7e2;
  /* 1219b7e0 jmp 0x1219b7ba */
  goto L_1219b7ba;
L_1219b7e2:;
  /* 1219b7e2 mov eax, dword ptr [0x121c1c84] */
  EAX = (r32((uint32_t)(0x121c1c84)));
  /* 1219b7e7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219b7ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219b7ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b7ef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b7f2 jae 0x1219b7fe */
  if (!C.cf) goto L_1219b7fe;
  /* 1219b7f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b7f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219b7f9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b7fc je 0x1219b802 */
  if (C.zf) goto L_1219b802;
L_1219b7fe:;
  /* 1219b7fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b800 jmp 0x1219b805 */
  goto L_1219b805;
L_1219b802:;
  /* 1219b802 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1219b805:;
  /* 1219b805 mov esp, ebp */
  ESP = (EBP);
  /* 1219b807 pop ebp */
  EBP = (pop32());
  /* 1219b808 ret  */
  ESPCHK(0x1219b7b0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1219b810 (48 bytes, 17 insns) */
void f_1219b810(void) {
  FTRACE(0x1219b810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b810 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b811 mov ebp, esp */
  EBP = (ESP);
  /* 1219b813 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b814 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219b816 call 0x1219b510 */
  push32(0x1219b81bu); f_1219b510();
  /* 1219b81b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b81e mov eax, dword ptr [0x121c38ec] */
  EAX = (r32((uint32_t)(0x121c38ec)));
  /* 1219b823 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219b826 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b829 mov dword ptr [0x121c38ec], ecx */
  w32((uint32_t)(0x121c38ec), (ECX));
  /* 1219b82f push 9 */
  push32((uint32_t)(0x9u));
  /* 1219b831 call 0x1219b5b0 */
  push32(0x1219b836u); f_1219b5b0();
  /* 1219b836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b83c mov esp, ebp */
  ESP = (EBP);
  /* 1219b83e pop ebp */
  EBP = (pop32());
  /* 1219b83f ret  */
  ESPCHK(0x1219b810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x1219b840 (10 bytes, 5 insns) */
void f_1219b840(void) {
  FTRACE(0x1219b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b840 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b841 mov ebp, esp */
  EBP = (ESP);
  /* 1219b843 mov eax, dword ptr [0x121c38ec] */
  EAX = (r32((uint32_t)(0x121c38ec)));
  /* 1219b848 pop ebp */
  EBP = (pop32());
  /* 1219b849 ret  */
  ESPCHK(0x1219b840u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1219b850 (45 bytes, 19 insns) */
void f_1219b850(void) {
  FTRACE(0x1219b850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b850 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b851 mov ebp, esp */
  EBP = (ESP);
  /* 1219b853 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b854 mov eax, dword ptr [0x121c38ec] */
  EAX = (r32((uint32_t)(0x121c38ec)));
  /* 1219b859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219b85c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b860 je 0x1219b870 */
  if (C.zf) goto L_1219b870;
  /* 1219b862 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b865 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b866 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1219b869u);
  /* 1219b869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b86c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219b86e jne 0x1219b874 */
  if (!C.zf) goto L_1219b874;
L_1219b870:;
  /* 1219b870 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b872 jmp 0x1219b879 */
  goto L_1219b879;
L_1219b874:;
  /* 1219b874 mov eax, 1 */
  EAX = (0x1u);
L_1219b879:;
  /* 1219b879 mov esp, ebp */
  ESP = (EBP);
  /* 1219b87b pop ebp */
  EBP = (pop32());
  /* 1219b87c ret  */
  ESPCHK(0x1219b850u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1219b880 (88 bytes, 40 insns) */
void f_1219b880(void) {
  FTRACE(0x1219b880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b880 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1219b884 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1219b888 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219b88a je 0x1219b8d3 */
  if (C.zf) goto L_1219b8d3;
  /* 1219b88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b88e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1219b892 push edi */
  push32((uint32_t)(EDI));
  /* 1219b893 mov edi, ecx */
  EDI = (ECX);
  /* 1219b895 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b898 jb 0x1219b8c7 */
  if (C.cf) goto L_1219b8c7;
  /* 1219b89a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219b89c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1219b89f je 0x1219b8a9 */
  if (C.zf) goto L_1219b8a9;
  /* 1219b8a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1219b8a3:;
  /* 1219b8a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219b8a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1219b8a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1219b8a7 jne 0x1219b8a3 */
  if (!C.zf) goto L_1219b8a3;
L_1219b8a9:;
  /* 1219b8a9 mov ecx, eax */
  ECX = (EAX);
  /* 1219b8ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1219b8ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b8b0 mov ecx, eax */
  ECX = (EAX);
  /* 1219b8b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1219b8b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b8b7 mov ecx, edx */
  ECX = (EDX);
  /* 1219b8b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1219b8bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219b8bf je 0x1219b8c7 */
  if (C.zf) goto L_1219b8c7;
  /* 1219b8c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1219b8c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219b8c5 je 0x1219b8cd */
  if (C.zf) goto L_1219b8cd;
L_1219b8c7:;
  /* 1219b8c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219b8c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1219b8ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1219b8cb jne 0x1219b8c7 */
  if (!C.zf) goto L_1219b8c7;
L_1219b8cd:;
  /* 1219b8cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1219b8d1 pop edi */
  EDI = (pop32());
  /* 1219b8d2 ret  */
  ESPCHK(0x1219b880u, _esp0);
  ESP += 4; return;
L_1219b8d3:;
  /* 1219b8d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1219b8d7 ret  */
  ESPCHK(0x1219b880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8e0 @ 0x1219b8e0 (23 bytes, 10 insns) */
void f_1219b8e0(void) {
  FTRACE(0x1219b8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1219b8e3 mov eax, dword ptr [0x121c38e8] */
  EAX = (r32((uint32_t)(0x121c38e8)));
  /* 1219b8e8 push eax */
  push32((uint32_t)(EAX));
  /* 1219b8e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b8ec push ecx */
  push32((uint32_t)(ECX));
  /* 1219b8ed call 0x1219b900 */
  push32(0x1219b8f2u); f_1219b900();
  /* 1219b8f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b8f5 pop ebp */
  EBP = (pop32());
  /* 1219b8f6 ret  */
  ESPCHK(0x1219b8e0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1219b900 (87 bytes, 34 insns) */
void f_1219b900(void) {
  FTRACE(0x1219b900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b900 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b901 mov ebp, esp */
  EBP = (ESP);
  /* 1219b903 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b904 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b908 jbe 0x1219b90e */
  if ((C.cf||C.zf)) goto L_1219b90e;
  /* 1219b90a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b90c jmp 0x1219b953 */
  goto L_1219b953;
L_1219b90e:;
  /* 1219b90e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b912 ja 0x1219b925 */
  if ((!C.cf&&!C.zf)) goto L_1219b925;
  /* 1219b914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b917 push eax */
  push32((uint32_t)(EAX));
  /* 1219b918 call 0x1219b960 */
  push32(0x1219b91du); f_1219b960();
  /* 1219b91d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b920 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219b923 jmp 0x1219b92c */
  goto L_1219b92c;
L_1219b925:;
  /* 1219b925 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1219b92c:;
  /* 1219b92c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b930 jne 0x1219b938 */
  if (!C.zf) goto L_1219b938;
  /* 1219b932 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b936 jne 0x1219b93d */
  if (!C.zf) goto L_1219b93d;
L_1219b938:;
  /* 1219b938 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b93b jmp 0x1219b953 */
  goto L_1219b953;
L_1219b93d:;
  /* 1219b93d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b940 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b941 call 0x1219b850 */
  push32(0x1219b946u); f_1219b850();
  /* 1219b946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219b94b jne 0x1219b951 */
  if (!C.zf) goto L_1219b951;
  /* 1219b94d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b94f jmp 0x1219b953 */
  goto L_1219b953;
L_1219b951:;
  /* 1219b951 jmp 0x1219b90e */
  goto L_1219b90e;
L_1219b953:;
  /* 1219b953 mov esp, ebp */
  ESP = (EBP);
  /* 1219b955 pop ebp */
  EBP = (pop32());
  /* 1219b956 ret  */
  ESPCHK(0x1219b900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b960 @ 0x1219b960 (109 bytes, 37 insns) */
void f_1219b960(void) {
  FTRACE(0x1219b960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b960 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b961 mov ebp, esp */
  EBP = (ESP);
  /* 1219b963 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b967 cmp eax, dword ptr [0x121c1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b96d ja 0x1219b99d */
  if ((!C.cf&&!C.zf)) goto L_1219b99d;
  /* 1219b96f push 9 */
  push32((uint32_t)(0x9u));
  /* 1219b971 call 0x1219b510 */
  push32(0x1219b976u); f_1219b510();
  /* 1219b976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b97c push ecx */
  push32((uint32_t)(ECX));
  /* 1219b97d call 0x1219c4a0 */
  push32(0x1219b982u); f_1219c4a0();
  /* 1219b982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b985 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219b988 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219b98a call 0x1219b5b0 */
  push32(0x1219b98fu); f_1219b5b0();
  /* 1219b98f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b992 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b996 je 0x1219b99d */
  if (C.zf) goto L_1219b99d;
  /* 1219b998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219b99b jmp 0x1219b9c9 */
  goto L_1219b9c9;
L_1219b99d:;
  /* 1219b99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b9a1 jne 0x1219b9aa */
  if (!C.zf) goto L_1219b9aa;
  /* 1219b9a3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1219b9aa:;
  /* 1219b9aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b9ad add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b9b0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1219b9b3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1219b9b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219b9b9 push eax */
  push32((uint32_t)(EAX));
  /* 1219b9ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1219b9bc mov ecx, dword ptr [0x121c50ac] */
  ECX = (r32((uint32_t)(0x121c50ac)));
  /* 1219b9c2 push ecx */
  push32((uint32_t)(ECX));
  /* 1219b9c3 call dword ptr [0x121c62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62f8))), 0x1219b9c9u);
L_1219b9c9:;
  /* 1219b9c9 mov esp, ebp */
  ESP = (EBP);
  /* 1219b9cb pop ebp */
  EBP = (pop32());
  /* 1219b9cc ret  */
  ESPCHK(0x1219b960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x1219b9d0 (10 bytes, 5 insns) */
void f_1219b9d0(void) {
  FTRACE(0x1219b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1219b9d3 mov eax, 1 */
  EAX = (0x1u);
  /* 1219b9d8 pop ebp */
  EBP = (pop32());
  /* 1219b9d9 ret  */
  ESPCHK(0x1219b9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e0 @ 0x1219b9e0 (173 bytes, 59 insns) */
void f_1219b9e0(void) {
  FTRACE(0x1219b9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219b9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219b9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1219b9e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219b9e6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219b9ea jbe 0x1219b9f3 */
  if ((C.cf||C.zf)) goto L_1219b9f3;
  /* 1219b9ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219b9ee jmp 0x1219ba89 */
  goto L_1219ba89;
L_1219b9f3:;
  /* 1219b9f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219b9f5 call 0x1219b510 */
  push32(0x1219b9fau); f_1219b510();
  /* 1219b9fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219b9fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ba00 push eax */
  push32((uint32_t)(EAX));
  /* 1219ba01 call 0x1219be10 */
  push32(0x1219ba06u); f_1219be10();
  /* 1219ba06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ba09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219ba0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ba10 je 0x1219ba51 */
  if (C.zf) goto L_1219ba51;
  /* 1219ba12 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219ba19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ba1c cmp ecx, dword ptr [0x121c1c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ba22 ja 0x1219ba42 */
  if ((!C.cf&&!C.zf)) goto L_1219ba42;
  /* 1219ba24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ba27 push edx */
  push32((uint32_t)(EDX));
  /* 1219ba28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ba2b push eax */
  push32((uint32_t)(EAX));
  /* 1219ba2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219ba2f push ecx */
  push32((uint32_t)(ECX));
  /* 1219ba30 call 0x1219cce0 */
  push32(0x1219ba35u); f_1219cce0();
  /* 1219ba35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ba38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219ba3a je 0x1219ba42 */
  if (C.zf) goto L_1219ba42;
  /* 1219ba3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ba3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1219ba42:;
  /* 1219ba42 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219ba44 call 0x1219b5b0 */
  push32(0x1219ba49u); f_1219b5b0();
  /* 1219ba49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ba4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ba4f jmp 0x1219ba89 */
  goto L_1219ba89;
L_1219ba51:;
  /* 1219ba51 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219ba53 call 0x1219b5b0 */
  push32(0x1219ba58u); f_1219b5b0();
  /* 1219ba58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ba5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ba5f jne 0x1219ba68 */
  if (!C.zf) goto L_1219ba68;
  /* 1219ba61 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1219ba68:;
  /* 1219ba68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ba6b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ba6e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1219ba70 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1219ba73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ba76 push ecx */
  push32((uint32_t)(ECX));
  /* 1219ba77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ba7a push edx */
  push32((uint32_t)(EDX));
  /* 1219ba7b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1219ba7d mov eax, dword ptr [0x121c50ac] */
  EAX = (r32((uint32_t)(0x121c50ac)));
  /* 1219ba82 push eax */
  push32((uint32_t)(EAX));
  /* 1219ba83 call dword ptr [0x121c6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6300))), 0x1219ba89u);
L_1219ba89:;
  /* 1219ba89 mov esp, ebp */
  ESP = (EBP);
  /* 1219ba8b pop ebp */
  EBP = (pop32());
  /* 1219ba8c ret  */
  ESPCHK(0x1219b9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba90 @ 0x1219ba90 (490 bytes, 165 insns) */
void f_1219ba90(void) {
  FTRACE(0x1219ba90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219ba90 push ebp */
  push32((uint32_t)(EBP));
  /* 1219ba91 mov ebp, esp */
  EBP = (ESP);
  /* 1219ba93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ba96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ba9a jne 0x1219baad */
  if (!C.zf) goto L_1219baad;
  /* 1219ba9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ba9f push eax */
  push32((uint32_t)(EAX));
  /* 1219baa0 call 0x1219b8e0 */
  push32(0x1219baa5u); f_1219b8e0();
  /* 1219baa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219baa8 jmp 0x1219bc76 */
  goto L_1219bc76;
L_1219baad:;
  /* 1219baad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bab1 jne 0x1219bac6 */
  if (!C.zf) goto L_1219bac6;
  /* 1219bab3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bab6 push ecx */
  push32((uint32_t)(ECX));
  /* 1219bab7 call 0x1219bc80 */
  push32(0x1219babcu); f_1219bc80();
  /* 1219babc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219babf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219bac1 jmp 0x1219bc76 */
  goto L_1219bc76;
L_1219bac6:;
  /* 1219bac6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1219bacd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bad1 ja 0x1219bc49 */
  if ((!C.cf&&!C.zf)) goto L_1219bc49;
  /* 1219bad7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219bad9 call 0x1219b510 */
  push32(0x1219badeu); f_1219b510();
  /* 1219bade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bae1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bae4 push edx */
  push32((uint32_t)(EDX));
  /* 1219bae5 call 0x1219be10 */
  push32(0x1219baeau); f_1219be10();
  /* 1219baea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219baed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219baf0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219baf4 je 0x1219bc0c */
  if (C.zf) goto L_1219bc0c;
  /* 1219bafa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bafd cmp eax, dword ptr [0x121c1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bb03 ja 0x1219bb80 */
  if ((!C.cf&&!C.zf)) goto L_1219bb80;
  /* 1219bb05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bb08 push ecx */
  push32((uint32_t)(ECX));
  /* 1219bb09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bb0c push edx */
  push32((uint32_t)(EDX));
  /* 1219bb0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219bb10 push eax */
  push32((uint32_t)(EAX));
  /* 1219bb11 call 0x1219cce0 */
  push32(0x1219bb16u); f_1219cce0();
  /* 1219bb16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bb19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219bb1b je 0x1219bb25 */
  if (C.zf) goto L_1219bb25;
  /* 1219bb1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bb20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1219bb23 jmp 0x1219bb80 */
  goto L_1219bb80;
L_1219bb25:;
  /* 1219bb25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bb28 push edx */
  push32((uint32_t)(EDX));
  /* 1219bb29 call 0x1219c4a0 */
  push32(0x1219bb2eu); f_1219c4a0();
  /* 1219bb2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bb31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219bb34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bb38 je 0x1219bb80 */
  if (C.zf) goto L_1219bb80;
  /* 1219bb3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bb3d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1219bb40 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219bb43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219bb46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bb49 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bb4c jae 0x1219bb56 */
  if (!C.cf) goto L_1219bb56;
  /* 1219bb4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bb51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1219bb54 jmp 0x1219bb5c */
  goto L_1219bb5c;
L_1219bb56:;
  /* 1219bb56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bb59 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1219bb5c:;
  /* 1219bb5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219bb5f push edx */
  push32((uint32_t)(EDX));
  /* 1219bb60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bb63 push eax */
  push32((uint32_t)(EAX));
  /* 1219bb64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219bb67 push ecx */
  push32((uint32_t)(ECX));
  /* 1219bb68 call 0x1219e3f0 */
  push32(0x1219bb6du); f_1219e3f0();
  /* 1219bb6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bb70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bb73 push edx */
  push32((uint32_t)(EDX));
  /* 1219bb74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219bb77 push eax */
  push32((uint32_t)(EAX));
  /* 1219bb78 call 0x1219bed0 */
  push32(0x1219bb7du); f_1219bed0();
  /* 1219bb7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219bb80:;
  /* 1219bb80 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bb84 jne 0x1219bc00 */
  if (!C.zf) goto L_1219bc00;
  /* 1219bb86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bb8a jne 0x1219bb93 */
  if (!C.zf) goto L_1219bb93;
  /* 1219bb8c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1219bb93:;
  /* 1219bb93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bb96 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bb99 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1219bb9c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1219bb9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bba2 push edx */
  push32((uint32_t)(EDX));
  /* 1219bba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219bba5 mov eax, dword ptr [0x121c50ac] */
  EAX = (r32((uint32_t)(0x121c50ac)));
  /* 1219bbaa push eax */
  push32((uint32_t)(EAX));
  /* 1219bbab call dword ptr [0x121c62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62f8))), 0x1219bbb1u);
  /* 1219bbb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219bbb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bbb8 je 0x1219bc00 */
  if (C.zf) goto L_1219bc00;
  /* 1219bbba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bbbd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1219bbc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219bbc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219bbc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bbc9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bbcc jae 0x1219bbd6 */
  if (!C.cf) goto L_1219bbd6;
  /* 1219bbce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bbd1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1219bbd4 jmp 0x1219bbdc */
  goto L_1219bbdc;
L_1219bbd6:;
  /* 1219bbd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bbd9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1219bbdc:;
  /* 1219bbdc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219bbdf push eax */
  push32((uint32_t)(EAX));
  /* 1219bbe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bbe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219bbe4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219bbe7 push edx */
  push32((uint32_t)(EDX));
  /* 1219bbe8 call 0x1219e3f0 */
  push32(0x1219bbedu); f_1219e3f0();
  /* 1219bbed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bbf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bbf3 push eax */
  push32((uint32_t)(EAX));
  /* 1219bbf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219bbf7 push ecx */
  push32((uint32_t)(ECX));
  /* 1219bbf8 call 0x1219bed0 */
  push32(0x1219bbfdu); f_1219bed0();
  /* 1219bbfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219bc00:;
  /* 1219bc00 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219bc02 call 0x1219b5b0 */
  push32(0x1219bc07u); f_1219b5b0();
  /* 1219bc07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bc0a jmp 0x1219bc49 */
  goto L_1219bc49;
L_1219bc0c:;
  /* 1219bc0c push 9 */
  push32((uint32_t)(0x9u));
  /* 1219bc0e call 0x1219b5b0 */
  push32(0x1219bc13u); f_1219b5b0();
  /* 1219bc13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bc16 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bc1a jne 0x1219bc23 */
  if (!C.zf) goto L_1219bc23;
  /* 1219bc1c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1219bc23:;
  /* 1219bc23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bc26 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bc29 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1219bc2c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1219bc2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bc32 push eax */
  push32((uint32_t)(EAX));
  /* 1219bc33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bc36 push ecx */
  push32((uint32_t)(ECX));
  /* 1219bc37 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219bc39 mov edx, dword ptr [0x121c50ac] */
  EDX = (r32((uint32_t)(0x121c50ac)));
  /* 1219bc3f push edx */
  push32((uint32_t)(EDX));
  /* 1219bc40 call dword ptr [0x121c6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6300))), 0x1219bc46u);
  /* 1219bc46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1219bc49:;
  /* 1219bc49 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bc4d jne 0x1219bc58 */
  if (!C.zf) goto L_1219bc58;
  /* 1219bc4f cmp dword ptr [0x121c38e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c38e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bc56 jne 0x1219bc5d */
  if (!C.zf) goto L_1219bc5d;
L_1219bc58:;
  /* 1219bc58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219bc5b jmp 0x1219bc76 */
  goto L_1219bc76;
L_1219bc5d:;
  /* 1219bc5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bc60 push eax */
  push32((uint32_t)(EAX));
  /* 1219bc61 call 0x1219b850 */
  push32(0x1219bc66u); f_1219b850();
  /* 1219bc66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bc69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219bc6b jne 0x1219bc71 */
  if (!C.zf) goto L_1219bc71;
  /* 1219bc6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219bc6f jmp 0x1219bc76 */
  goto L_1219bc76;
L_1219bc71:;
  /* 1219bc71 jmp 0x1219bac6 */
  goto L_1219bac6;
L_1219bc76:;
  /* 1219bc76 mov esp, ebp */
  ESP = (EBP);
  /* 1219bc78 pop ebp */
  EBP = (pop32());
  /* 1219bc79 ret  */
  ESPCHK(0x1219ba90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc80 @ 0x1219bc80 (104 bytes, 38 insns) */
void f_1219bc80(void) {
  FTRACE(0x1219bc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219bc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1219bc81 mov ebp, esp */
  EBP = (ESP);
  /* 1219bc83 push ecx */
  push32((uint32_t)(ECX));
  /* 1219bc84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bc88 jne 0x1219bc8c */
  if (!C.zf) goto L_1219bc8c;
  /* 1219bc8a jmp 0x1219bce4 */
  goto L_1219bce4;
L_1219bc8c:;
  /* 1219bc8c push 9 */
  push32((uint32_t)(0x9u));
  /* 1219bc8e call 0x1219b510 */
  push32(0x1219bc93u); f_1219b510();
  /* 1219bc93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bc96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bc99 push eax */
  push32((uint32_t)(EAX));
  /* 1219bc9a call 0x1219be10 */
  push32(0x1219bc9fu); f_1219be10();
  /* 1219bc9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bca2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219bca5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bca9 je 0x1219bcc7 */
  if (C.zf) goto L_1219bcc7;
  /* 1219bcab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bcae push ecx */
  push32((uint32_t)(ECX));
  /* 1219bcaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bcb2 push edx */
  push32((uint32_t)(EDX));
  /* 1219bcb3 call 0x1219bed0 */
  push32(0x1219bcb8u); f_1219bed0();
  /* 1219bcb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bcbb push 9 */
  push32((uint32_t)(0x9u));
  /* 1219bcbd call 0x1219b5b0 */
  push32(0x1219bcc2u); f_1219b5b0();
  /* 1219bcc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bcc5 jmp 0x1219bce4 */
  goto L_1219bce4;
L_1219bcc7:;
  /* 1219bcc7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219bcc9 call 0x1219b5b0 */
  push32(0x1219bcceu); f_1219b5b0();
  /* 1219bcce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bcd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bcd4 push eax */
  push32((uint32_t)(EAX));
  /* 1219bcd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219bcd7 mov ecx, dword ptr [0x121c50ac] */
  ECX = (r32((uint32_t)(0x121c50ac)));
  /* 1219bcdd push ecx */
  push32((uint32_t)(ECX));
  /* 1219bcde call dword ptr [0x121c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6398))), 0x1219bce4u);
L_1219bce4:;
  /* 1219bce4 mov esp, ebp */
  ESP = (EBP);
  /* 1219bce6 pop ebp */
  EBP = (pop32());
  /* 1219bce7 ret  */
  ESPCHK(0x1219bc80u, _esp0);
  ESP += 4; return;
}

