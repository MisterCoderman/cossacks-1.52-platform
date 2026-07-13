#include "recomp.h"

/* thunk_FUN_10003120 @ 0x10a41005 (5 bytes, 1 insns) */
void f_10a41005(void) {
  FTRACE(0x10a41005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a41005 jmp 0x10a43120 */
  f_10a43120(); return;
}

/* OnInit @ 0x10a4100a (5 bytes, 1 insns) */
void f_10a4100a(void) {
  FTRACE(0x10a4100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4100a jmp 0x10a41090 */
  f_10a41090(); return;
}

/* thunk_FUN_10001030 @ 0x10a4100f (5 bytes, 1 insns) */
void f_10a4100f(void) {
  FTRACE(0x10a4100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a4100f jmp 0x10a41030 */
  f_10a41030(); return;
}

/* ProcessScenary @ 0x10a41014 (5 bytes, 1 insns) */
void f_10a41014(void) {
  FTRACE(0x10a41014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a41014 jmp 0x10a415e0 */
  f_10a415e0(); return;
}

/* FUN_10001030 @ 0x10a41030 (67 bytes, 26 insns) */
void f_10a41030(void) {
  FTRACE(0x10a41030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a41030 push ebp */
  push32((uint32_t)(EBP));
  /* 10a41031 mov ebp, esp */
  EBP = (ESP);
  /* 10a41033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a41036 push ebx */
  push32((uint32_t)(EBX));
  /* 10a41037 push esi */
  push32((uint32_t)(ESI));
  /* 10a41038 push edi */
  push32((uint32_t)(EDI));
  /* 10a41039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10a4103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10a41041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a41046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a41048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41052 je 0x10a41056 */
  if (C.zf) goto L_10a41056;
  /* 10a41054 jmp 0x10a4105b */
  goto L_10a4105b;
L_10a41056:;
  /* 10a41056 call 0x10a4100a */
  push32(0x10a4105bu); f_10a4100a();
L_10a4105b:;
  /* 10a4105b mov eax, 1 */
  EAX = (0x1u);
  /* 10a41060 pop edi */
  EDI = (pop32());
  /* 10a41061 pop esi */
  ESI = (pop32());
  /* 10a41062 pop ebx */
  EBX = (pop32());
  /* 10a41063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41068 call 0x10a43210 */
  push32(0x10a4106du); f_10a43210();
  /* 10a4106d mov esp, ebp */
  ESP = (EBP);
  /* 10a4106f pop ebp */
  EBP = (pop32());
  /* 10a41070 ret 0xc */
  ESPCHK(0x10a41030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10a41090 (1084 bytes, 283 insns) */
void f_10a41090(void) {
  FTRACE(0x10a41090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a41090 push ebp */
  push32((uint32_t)(EBP));
  /* 10a41091 mov ebp, esp */
  EBP = (ESP);
  /* 10a41093 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a41096 push ebx */
  push32((uint32_t)(EBX));
  /* 10a41097 push esi */
  push32((uint32_t)(ESI));
  /* 10a41098 push edi */
  push32((uint32_t)(EDI));
  /* 10a41099 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10a4109c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10a410a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a410a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a410a8 mov esi, esp */
  ESI = (ESP);
  /* 10a410aa push 0x10a6b15c */
  push32((uint32_t)(0x10a6b15cu));
  /* 10a410af push 0x10a70460 */
  push32((uint32_t)(0x10a70460u));
  /* 10a410b4 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a410bau);
  /* 10a410ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a410bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a410bf call 0x10a43210 */
  push32(0x10a410c4u); f_10a43210();
  /* 10a410c4 mov esi, esp */
  ESI = (ESP);
  /* 10a410c6 push 0x10a6b154 */
  push32((uint32_t)(0x10a6b154u));
  /* 10a410cb push 0x10a70468 */
  push32((uint32_t)(0x10a70468u));
  /* 10a410d0 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a410d6u);
  /* 10a410d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a410d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a410db call 0x10a43210 */
  push32(0x10a410e0u); f_10a43210();
  /* 10a410e0 mov esi, esp */
  ESI = (ESP);
  /* 10a410e2 push 0x10a6b14c */
  push32((uint32_t)(0x10a6b14cu));
  /* 10a410e7 push 0x10a70470 */
  push32((uint32_t)(0x10a70470u));
  /* 10a410ec call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a410f2u);
  /* 10a410f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a410f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a410f7 call 0x10a43210 */
  push32(0x10a410fcu); f_10a43210();
  /* 10a410fc mov esi, esp */
  ESI = (ESP);
  /* 10a410fe push 0x10a6b144 */
  push32((uint32_t)(0x10a6b144u));
  /* 10a41103 push 0x10a70478 */
  push32((uint32_t)(0x10a70478u));
  /* 10a41108 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a4110eu);
  /* 10a4110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41113 call 0x10a43210 */
  push32(0x10a41118u); f_10a43210();
  /* 10a41118 mov esi, esp */
  ESI = (ESP);
  /* 10a4111a push 0x10a6b13c */
  push32((uint32_t)(0x10a6b13cu));
  /* 10a4111f push 0x10a70480 */
  push32((uint32_t)(0x10a70480u));
  /* 10a41124 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a4112au);
  /* 10a4112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4112f call 0x10a43210 */
  push32(0x10a41134u); f_10a43210();
  /* 10a41134 mov esi, esp */
  ESI = (ESP);
  /* 10a41136 push 0x10a6b134 */
  push32((uint32_t)(0x10a6b134u));
  /* 10a4113b push 0x10a70488 */
  push32((uint32_t)(0x10a70488u));
  /* 10a41140 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a41146u);
  /* 10a41146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4114b call 0x10a43210 */
  push32(0x10a41150u); f_10a43210();
  /* 10a41150 mov esi, esp */
  ESI = (ESP);
  /* 10a41152 push 0x10a6b12c */
  push32((uint32_t)(0x10a6b12cu));
  /* 10a41157 push 0x10a70490 */
  push32((uint32_t)(0x10a70490u));
  /* 10a4115c call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a41162u);
  /* 10a41162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41167 call 0x10a43210 */
  push32(0x10a4116cu); f_10a43210();
  /* 10a4116c mov esi, esp */
  ESI = (ESP);
  /* 10a4116e push 0x10a6b124 */
  push32((uint32_t)(0x10a6b124u));
  /* 10a41173 push 0x10a70498 */
  push32((uint32_t)(0x10a70498u));
  /* 10a41178 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a4117eu);
  /* 10a4117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41183 call 0x10a43210 */
  push32(0x10a41188u); f_10a43210();
  /* 10a41188 mov esi, esp */
  ESI = (ESP);
  /* 10a4118a push 0x10a6b11c */
  push32((uint32_t)(0x10a6b11cu));
  /* 10a4118f push 0x10a704a0 */
  push32((uint32_t)(0x10a704a0u));
  /* 10a41194 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a4119au);
  /* 10a4119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4119f call 0x10a43210 */
  push32(0x10a411a4u); f_10a43210();
  /* 10a411a4 mov esi, esp */
  ESI = (ESP);
  /* 10a411a6 push 0x10a6b114 */
  push32((uint32_t)(0x10a6b114u));
  /* 10a411ab push 0x10a70448 */
  push32((uint32_t)(0x10a70448u));
  /* 10a411b0 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a411b6u);
  /* 10a411b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a411b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a411bb call 0x10a43210 */
  push32(0x10a411c0u); f_10a43210();
  /* 10a411c0 mov esi, esp */
  ESI = (ESP);
  /* 10a411c2 push 0x10a6b10c */
  push32((uint32_t)(0x10a6b10cu));
  /* 10a411c7 push 0x10a70440 */
  push32((uint32_t)(0x10a70440u));
  /* 10a411cc call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a411d2u);
  /* 10a411d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a411d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a411d7 call 0x10a43210 */
  push32(0x10a411dcu); f_10a43210();
  /* 10a411dc mov esi, esp */
  ESI = (ESP);
  /* 10a411de push 0x10a6b104 */
  push32((uint32_t)(0x10a6b104u));
  /* 10a411e3 push 0x10a70458 */
  push32((uint32_t)(0x10a70458u));
  /* 10a411e8 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a411eeu);
  /* 10a411ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a411f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a411f3 call 0x10a43210 */
  push32(0x10a411f8u); f_10a43210();
  /* 10a411f8 mov esi, esp */
  ESI = (ESP);
  /* 10a411fa push 0x10a6b0fc */
  push32((uint32_t)(0x10a6b0fcu));
  /* 10a411ff push 0x10a70450 */
  push32((uint32_t)(0x10a70450u));
  /* 10a41204 call dword ptr [0x10a73448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73448))), 0x10a4120au);
  /* 10a4120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4120f call 0x10a43210 */
  push32(0x10a41214u); f_10a43210();
  /* 10a41214 mov esi, esp */
  ESI = (ESP);
  /* 10a41216 push 0x10a6b0f4 */
  push32((uint32_t)(0x10a6b0f4u));
  /* 10a4121b push 0x10a703f0 */
  push32((uint32_t)(0x10a703f0u));
  /* 10a41220 call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a41226u);
  /* 10a41226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4122b call 0x10a43210 */
  push32(0x10a41230u); f_10a43210();
  /* 10a41230 mov esi, esp */
  ESI = (ESP);
  /* 10a41232 push 0x10a6b0ec */
  push32((uint32_t)(0x10a6b0ecu));
  /* 10a41237 push 0x10a70400 */
  push32((uint32_t)(0x10a70400u));
  /* 10a4123c call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a41242u);
  /* 10a41242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41247 call 0x10a43210 */
  push32(0x10a4124cu); f_10a43210();
  /* 10a4124c mov esi, esp */
  ESI = (ESP);
  /* 10a4124e push 0x10a6b0e4 */
  push32((uint32_t)(0x10a6b0e4u));
  /* 10a41253 push 0x10a703f8 */
  push32((uint32_t)(0x10a703f8u));
  /* 10a41258 call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a4125eu);
  /* 10a4125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41263 call 0x10a43210 */
  push32(0x10a41268u); f_10a43210();
  /* 10a41268 mov esi, esp */
  ESI = (ESP);
  /* 10a4126a push 0x10a6b0dc */
  push32((uint32_t)(0x10a6b0dcu));
  /* 10a4126f push 0x10a70410 */
  push32((uint32_t)(0x10a70410u));
  /* 10a41274 call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a4127au);
  /* 10a4127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4127f call 0x10a43210 */
  push32(0x10a41284u); f_10a43210();
  /* 10a41284 mov esi, esp */
  ESI = (ESP);
  /* 10a41286 push 0x10a6b0d4 */
  push32((uint32_t)(0x10a6b0d4u));
  /* 10a4128b push 0x10a70408 */
  push32((uint32_t)(0x10a70408u));
  /* 10a41290 call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a41296u);
  /* 10a41296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4129b call 0x10a43210 */
  push32(0x10a412a0u); f_10a43210();
  /* 10a412a0 mov esi, esp */
  ESI = (ESP);
  /* 10a412a2 push 0x10a6b0cc */
  push32((uint32_t)(0x10a6b0ccu));
  /* 10a412a7 push 0x10a70420 */
  push32((uint32_t)(0x10a70420u));
  /* 10a412ac call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a412b2u);
  /* 10a412b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a412b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a412b7 call 0x10a43210 */
  push32(0x10a412bcu); f_10a43210();
  /* 10a412bc mov esi, esp */
  ESI = (ESP);
  /* 10a412be push 0x10a6b0c4 */
  push32((uint32_t)(0x10a6b0c4u));
  /* 10a412c3 push 0x10a70418 */
  push32((uint32_t)(0x10a70418u));
  /* 10a412c8 call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a412ceu);
  /* 10a412ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a412d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a412d3 call 0x10a43210 */
  push32(0x10a412d8u); f_10a43210();
  /* 10a412d8 mov esi, esp */
  ESI = (ESP);
  /* 10a412da push 0x10a6b0bc */
  push32((uint32_t)(0x10a6b0bcu));
  /* 10a412df push 0x10a70430 */
  push32((uint32_t)(0x10a70430u));
  /* 10a412e4 call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a412eau);
  /* 10a412ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a412ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a412ef call 0x10a43210 */
  push32(0x10a412f4u); f_10a43210();
  /* 10a412f4 mov esi, esp */
  ESI = (ESP);
  /* 10a412f6 push 0x10a6b0b4 */
  push32((uint32_t)(0x10a6b0b4u));
  /* 10a412fb push 0x10a70428 */
  push32((uint32_t)(0x10a70428u));
  /* 10a41300 call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a41306u);
  /* 10a41306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4130b call 0x10a43210 */
  push32(0x10a41310u); f_10a43210();
  /* 10a41310 mov esi, esp */
  ESI = (ESP);
  /* 10a41312 push 0x10a6b0a8 */
  push32((uint32_t)(0x10a6b0a8u));
  /* 10a41317 push 0x10a704a8 */
  push32((uint32_t)(0x10a704a8u));
  /* 10a4131c call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a41322u);
  /* 10a41322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41327 call 0x10a43210 */
  push32(0x10a4132cu); f_10a43210();
  /* 10a4132c mov esi, esp */
  ESI = (ESP);
  /* 10a4132e push 0x10a6b09c */
  push32((uint32_t)(0x10a6b09cu));
  /* 10a41333 push 0x10a704c0 */
  push32((uint32_t)(0x10a704c0u));
  /* 10a41338 call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a4133eu);
  /* 10a4133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41343 call 0x10a43210 */
  push32(0x10a41348u); f_10a43210();
  /* 10a41348 mov esi, esp */
  ESI = (ESP);
  /* 10a4134a push 0x10a6b090 */
  push32((uint32_t)(0x10a6b090u));
  /* 10a4134f push 0x10a704b0 */
  push32((uint32_t)(0x10a704b0u));
  /* 10a41354 call dword ptr [0x10a7344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7344c))), 0x10a4135au);
  /* 10a4135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4135f call 0x10a43210 */
  push32(0x10a41364u); f_10a43210();
  /* 10a41364 mov esi, esp */
  ESI = (ESP);
  /* 10a41366 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a41368 push 0x10a704b8 */
  push32((uint32_t)(0x10a704b8u));
  /* 10a4136d call dword ptr [0x10a73444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73444))), 0x10a41373u);
  /* 10a41373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41376 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41378 call 0x10a43210 */
  push32(0x10a4137du); f_10a43210();
  /* 10a4137d mov dword ptr [0x10a703e0], 0 */
  w32((uint32_t)(0x10a703e0), (0x0u));
  /* 10a41387 jmp 0x10a413bd */
  goto L_10a413bd;
L_10a41389:;
  /* 10a41389 mov esi, esp */
  ESI = (ESP);
  /* 10a4138b push 8 */
  push32((uint32_t)(0x8u));
  /* 10a4138d mov eax, dword ptr [0x10a703e0] */
  EAX = (r32((uint32_t)(0x10a703e0)));
  /* 10a41392 lea ecx, [eax*8 + 0x10a704e8] */
  ECX = ((uint32_t)(EAX*8 + 0x10a704e8));
  /* 10a41399 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4139c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4139f push edx */
  push32((uint32_t)(EDX));
  /* 10a413a0 mov eax, dword ptr [0x10a703e0] */
  EAX = (r32((uint32_t)(0x10a703e0)));
  /* 10a413a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a413a8 mov dword ptr [0x10a703e0], eax */
  w32((uint32_t)(0x10a703e0), (EAX));
  /* 10a413ad call dword ptr [0x10a73444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73444))), 0x10a413b3u);
  /* 10a413b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a413b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a413b8 call 0x10a43210 */
  push32(0x10a413bdu); f_10a43210();
L_10a413bd:;
  /* 10a413bd cmp dword ptr [0x10a703e0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10a703e0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a413c4 jge 0x10a413c8 */
  if ((C.sf==C.of)) goto L_10a413c8;
  /* 10a413c6 jmp 0x10a41389 */
  goto L_10a41389;
L_10a413c8:;
  /* 10a413c8 mov esi, esp */
  ESI = (ESP);
  /* 10a413ca push 4 */
  push32((uint32_t)(0x4u));
  /* 10a413cc push 0x10a703e4 */
  push32((uint32_t)(0x10a703e4u));
  /* 10a413d1 call dword ptr [0x10a73444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73444))), 0x10a413d7u);
  /* 10a413d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a413da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a413dc call 0x10a43210 */
  push32(0x10a413e1u); f_10a43210();
  /* 10a413e1 mov esi, esp */
  ESI = (ESP);
  /* 10a413e3 push 0x10a6b078 */
  push32((uint32_t)(0x10a6b078u));
  /* 10a413e8 push 0x10a703e8 */
  push32((uint32_t)(0x10a703e8u));
  /* 10a413ed call dword ptr [0x10a73454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73454))), 0x10a413f3u);
  /* 10a413f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a413f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a413f8 call 0x10a43210 */
  push32(0x10a413fdu); f_10a43210();
  /* 10a413fd mov esi, esp */
  ESI = (ESP);
  /* 10a413ff push 0x10a6b068 */
  push32((uint32_t)(0x10a6b068u));
  /* 10a41404 push 0x10a70438 */
  push32((uint32_t)(0x10a70438u));
  /* 10a41409 call dword ptr [0x10a73454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73454))), 0x10a4140fu);
  /* 10a4140f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41412 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41414 call 0x10a43210 */
  push32(0x10a41419u); f_10a43210();
  /* 10a41419 mov esi, esp */
  ESI = (ESP);
  /* 10a4141b push 0x10a6b05c */
  push32((uint32_t)(0x10a6b05cu));
  /* 10a41420 push 0x10a704c8 */
  push32((uint32_t)(0x10a704c8u));
  /* 10a41425 call dword ptr [0x10a73458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73458))), 0x10a4142bu);
  /* 10a4142b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4142e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41430 call 0x10a43210 */
  push32(0x10a41435u); f_10a43210();
  /* 10a41435 mov esi, esp */
  ESI = (ESP);
  /* 10a41437 push 0x10a6b050 */
  push32((uint32_t)(0x10a6b050u));
  /* 10a4143c push 0x10a704d0 */
  push32((uint32_t)(0x10a704d0u));
  /* 10a41441 call dword ptr [0x10a73458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73458))), 0x10a41447u);
  /* 10a41447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4144a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4144c call 0x10a43210 */
  push32(0x10a41451u); f_10a43210();
  /* 10a41451 mov esi, esp */
  ESI = (ESP);
  /* 10a41453 push 0x10a6b040 */
  push32((uint32_t)(0x10a6b040u));
  /* 10a41458 push 0x10a704d8 */
  push32((uint32_t)(0x10a704d8u));
  /* 10a4145d call dword ptr [0x10a73458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73458))), 0x10a41463u);
  /* 10a41463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41466 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41468 call 0x10a43210 */
  push32(0x10a4146du); f_10a43210();
  /* 10a4146d mov esi, esp */
  ESI = (ESP);
  /* 10a4146f push 0x10a6b030 */
  push32((uint32_t)(0x10a6b030u));
  /* 10a41474 push 0x10a704e0 */
  push32((uint32_t)(0x10a704e0u));
  /* 10a41479 call dword ptr [0x10a73458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73458))), 0x10a4147fu);
  /* 10a4147f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41482 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41484 call 0x10a43210 */
  push32(0x10a41489u); f_10a43210();
  /* 10a41489 mov esi, esp */
  ESI = (ESP);
  /* 10a4148b push 0x10a6b028 */
  push32((uint32_t)(0x10a6b028u));
  /* 10a41490 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a41492 call dword ptr [0x10a73450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73450))), 0x10a41498u);
  /* 10a41498 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4149b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4149d call 0x10a43210 */
  push32(0x10a414a2u); f_10a43210();
  /* 10a414a2 mov esi, esp */
  ESI = (ESP);
  /* 10a414a4 push 0x10a6b01c */
  push32((uint32_t)(0x10a6b01cu));
  /* 10a414a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a414ab call dword ptr [0x10a73450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73450))), 0x10a414b1u);
  /* 10a414b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a414b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a414b6 call 0x10a43210 */
  push32(0x10a414bbu); f_10a43210();
  /* 10a414bb pop edi */
  EDI = (pop32());
  /* 10a414bc pop esi */
  ESI = (pop32());
  /* 10a414bd pop ebx */
  EBX = (pop32());
  /* 10a414be add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a414c1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a414c3 call 0x10a43210 */
  push32(0x10a414c8u); f_10a43210();
  /* 10a414c8 mov esp, ebp */
  ESP = (EBP);
  /* 10a414ca pop ebp */
  EBP = (pop32());
  /* 10a414cb ret  */
  ESPCHK(0x10a41090u, _esp0);
  ESP += 4; return;
}

/* FUN_100015e0 @ 0x10a415e0 (5571 bytes, 1539 insns) */
void f_10a415e0(void) {
  FTRACE(0x10a415e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a415e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a415e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a415e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a415e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a415e7 push esi */
  push32((uint32_t)(ESI));
  /* 10a415e8 push edi */
  push32((uint32_t)(EDI));
  /* 10a415e9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10a415ec mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10a415f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a415f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a415f8 mov esi, esp */
  ESI = (ESP);
  /* 10a415fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10a415fc call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a41602u);
  /* 10a41602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41605 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41607 call 0x10a43210 */
  push32(0x10a4160cu); f_10a43210();
  /* 10a4160c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a41611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a41613 je 0x10a41efa */
  if (C.zf) goto L_10a41efa;
  /* 10a41619 mov esi, esp */
  ESI = (ESP);
  /* 10a4161b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4161d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4161f call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a41625u);
  /* 10a41625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41628 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4162a call 0x10a43210 */
  push32(0x10a4162fu); f_10a43210();
  /* 10a4162f mov esi, esp */
  ESI = (ESP);
  /* 10a41631 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10a41636 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a41638 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4163a call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a41640u);
  /* 10a41640 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41645 call 0x10a43210 */
  push32(0x10a4164au); f_10a43210();
  /* 10a4164a mov esi, esp */
  ESI = (ESP);
  /* 10a4164c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10a41651 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a41653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41655 call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a4165bu);
  /* 10a4165b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4165e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41660 call 0x10a43210 */
  push32(0x10a41665u); f_10a43210();
  /* 10a41665 mov esi, esp */
  ESI = (ESP);
  /* 10a41667 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10a4166c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4166e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41670 call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a41676u);
  /* 10a41676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4167b call 0x10a43210 */
  push32(0x10a41680u); f_10a43210();
  /* 10a41680 mov esi, esp */
  ESI = (ESP);
  /* 10a41682 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10a41687 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a41689 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4168b call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a41691u);
  /* 10a41691 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41694 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41696 call 0x10a43210 */
  push32(0x10a4169bu); f_10a43210();
  /* 10a4169b mov esi, esp */
  ESI = (ESP);
  /* 10a4169d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10a416a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a416a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a416a6 call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a416acu);
  /* 10a416ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a416af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a416b1 call 0x10a43210 */
  push32(0x10a416b6u); f_10a43210();
  /* 10a416b6 mov esi, esp */
  ESI = (ESP);
  /* 10a416b8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10a416bd push 4 */
  push32((uint32_t)(0x4u));
  /* 10a416bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a416c1 call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a416c7u);
  /* 10a416c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a416ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a416cc call 0x10a43210 */
  push32(0x10a416d1u); f_10a43210();
  /* 10a416d1 mov esi, esp */
  ESI = (ESP);
  /* 10a416d3 push 0x3b9aca00 */
  push32((uint32_t)(0x3b9aca00u));
  /* 10a416d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a416da push 1 */
  push32((uint32_t)(0x1u));
  /* 10a416dc call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a416e2u);
  /* 10a416e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a416e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a416e7 call 0x10a43210 */
  push32(0x10a416ecu); f_10a43210();
  /* 10a416ec mov esi, esp */
  ESI = (ESP);
  /* 10a416ee push 0x3b9aca00 */
  push32((uint32_t)(0x3b9aca00u));
  /* 10a416f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a416f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a416f7 call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a416fdu);
  /* 10a416fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41700 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41702 call 0x10a43210 */
  push32(0x10a41707u); f_10a43210();
  /* 10a41707 mov esi, esp */
  ESI = (ESP);
  /* 10a41709 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4170b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4170d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4170f call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a41715u);
  /* 10a41715 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41718 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4171a call 0x10a43210 */
  push32(0x10a4171fu); f_10a43210();
  /* 10a4171f mov esi, esp */
  ESI = (ESP);
  /* 10a41721 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a41725 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a41727 call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a4172du);
  /* 10a4172d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41730 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41732 call 0x10a43210 */
  push32(0x10a41737u); f_10a43210();
  /* 10a41737 mov esi, esp */
  ESI = (ESP);
  /* 10a41739 push 0x3b9aca00 */
  push32((uint32_t)(0x3b9aca00u));
  /* 10a4173e push 5 */
  push32((uint32_t)(0x5u));
  /* 10a41740 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a41742 call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a41748u);
  /* 10a41748 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4174b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4174d call 0x10a43210 */
  push32(0x10a41752u); f_10a43210();
  /* 10a41752 mov esi, esp */
  ESI = (ESP);
  /* 10a41754 push 0x3b9aca00 */
  push32((uint32_t)(0x3b9aca00u));
  /* 10a41759 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a4175b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4175d call dword ptr [0x10a73400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73400))), 0x10a41763u);
  /* 10a41763 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41766 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41768 call 0x10a43210 */
  push32(0x10a4176du); f_10a43210();
  /* 10a4176d mov esi, esp */
  ESI = (ESP);
  /* 10a4176f push 0x10a6b668 */
  push32((uint32_t)(0x10a6b668u));
  /* 10a41774 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41779 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a4177fu);
  /* 10a4177f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41782 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41784 call 0x10a43210 */
  push32(0x10a41789u); f_10a43210();
  /* 10a41789 mov esi, esp */
  ESI = (ESP);
  /* 10a4178b push 0x10a6b63c */
  push32((uint32_t)(0x10a6b63cu));
  /* 10a41790 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41795 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a4179bu);
  /* 10a4179b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4179e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a417a0 call 0x10a43210 */
  push32(0x10a417a5u); f_10a43210();
  /* 10a417a5 mov esi, esp */
  ESI = (ESP);
  /* 10a417a7 push 0x10a6b61c */
  push32((uint32_t)(0x10a6b61cu));
  /* 10a417ac push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a417b1 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a417b7u);
  /* 10a417b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a417ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a417bc call 0x10a43210 */
  push32(0x10a417c1u); f_10a43210();
  /* 10a417c1 mov esi, esp */
  ESI = (ESP);
  /* 10a417c3 push 0x10a6b5fc */
  push32((uint32_t)(0x10a6b5fcu));
  /* 10a417c8 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a417cd call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a417d3u);
  /* 10a417d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a417d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a417d8 call 0x10a43210 */
  push32(0x10a417ddu); f_10a43210();
  /* 10a417dd mov esi, esp */
  ESI = (ESP);
  /* 10a417df push 0x10a6b5dc */
  push32((uint32_t)(0x10a6b5dcu));
  /* 10a417e4 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a417e9 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a417efu);
  /* 10a417ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a417f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a417f4 call 0x10a43210 */
  push32(0x10a417f9u); f_10a43210();
  /* 10a417f9 mov esi, esp */
  ESI = (ESP);
  /* 10a417fb push 0x10a6b5bc */
  push32((uint32_t)(0x10a6b5bcu));
  /* 10a41800 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41805 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a4180bu);
  /* 10a4180b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4180e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41810 call 0x10a43210 */
  push32(0x10a41815u); f_10a43210();
  /* 10a41815 mov esi, esp */
  ESI = (ESP);
  /* 10a41817 push 0x10a6b5a0 */
  push32((uint32_t)(0x10a6b5a0u));
  /* 10a4181c push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41821 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41827u);
  /* 10a41827 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4182a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4182c call 0x10a43210 */
  push32(0x10a41831u); f_10a43210();
  /* 10a41831 mov esi, esp */
  ESI = (ESP);
  /* 10a41833 push 0x10a6b580 */
  push32((uint32_t)(0x10a6b580u));
  /* 10a41838 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a4183d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41843u);
  /* 10a41843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41846 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41848 call 0x10a43210 */
  push32(0x10a4184du); f_10a43210();
  /* 10a4184d mov esi, esp */
  ESI = (ESP);
  /* 10a4184f push 0x10a6b560 */
  push32((uint32_t)(0x10a6b560u));
  /* 10a41854 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41859 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a4185fu);
  /* 10a4185f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41864 call 0x10a43210 */
  push32(0x10a41869u); f_10a43210();
  /* 10a41869 mov esi, esp */
  ESI = (ESP);
  /* 10a4186b push 0x10a6b540 */
  push32((uint32_t)(0x10a6b540u));
  /* 10a41870 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41875 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a4187bu);
  /* 10a4187b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4187e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41880 call 0x10a43210 */
  push32(0x10a41885u); f_10a43210();
  /* 10a41885 mov esi, esp */
  ESI = (ESP);
  /* 10a41887 push 0x10a6b520 */
  push32((uint32_t)(0x10a6b520u));
  /* 10a4188c push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41891 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41897u);
  /* 10a41897 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4189a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4189c call 0x10a43210 */
  push32(0x10a418a1u); f_10a43210();
  /* 10a418a1 mov esi, esp */
  ESI = (ESP);
  /* 10a418a3 push 0x10a6b500 */
  push32((uint32_t)(0x10a6b500u));
  /* 10a418a8 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a418ad call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a418b3u);
  /* 10a418b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a418b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a418b8 call 0x10a43210 */
  push32(0x10a418bdu); f_10a43210();
  /* 10a418bd mov esi, esp */
  ESI = (ESP);
  /* 10a418bf push 0x10a6b4e8 */
  push32((uint32_t)(0x10a6b4e8u));
  /* 10a418c4 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a418c9 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a418cfu);
  /* 10a418cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a418d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a418d4 call 0x10a43210 */
  push32(0x10a418d9u); f_10a43210();
  /* 10a418d9 mov esi, esp */
  ESI = (ESP);
  /* 10a418db push 0x10a6b4cc */
  push32((uint32_t)(0x10a6b4ccu));
  /* 10a418e0 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a418e5 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a418ebu);
  /* 10a418eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a418ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a418f0 call 0x10a43210 */
  push32(0x10a418f5u); f_10a43210();
  /* 10a418f5 mov esi, esp */
  ESI = (ESP);
  /* 10a418f7 push 0x10a6b4b0 */
  push32((uint32_t)(0x10a6b4b0u));
  /* 10a418fc push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41901 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41907u);
  /* 10a41907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4190a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4190c call 0x10a43210 */
  push32(0x10a41911u); f_10a43210();
  /* 10a41911 mov esi, esp */
  ESI = (ESP);
  /* 10a41913 push 0x10a6b494 */
  push32((uint32_t)(0x10a6b494u));
  /* 10a41918 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a4191d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41923u);
  /* 10a41923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41926 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41928 call 0x10a43210 */
  push32(0x10a4192du); f_10a43210();
  /* 10a4192d mov esi, esp */
  ESI = (ESP);
  /* 10a4192f push 0x10a6b478 */
  push32((uint32_t)(0x10a6b478u));
  /* 10a41934 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41939 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a4193fu);
  /* 10a4193f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41942 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41944 call 0x10a43210 */
  push32(0x10a41949u); f_10a43210();
  /* 10a41949 mov esi, esp */
  ESI = (ESP);
  /* 10a4194b push 0x10a6b45c */
  push32((uint32_t)(0x10a6b45cu));
  /* 10a41950 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41955 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a4195bu);
  /* 10a4195b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4195e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41960 call 0x10a43210 */
  push32(0x10a41965u); f_10a43210();
  /* 10a41965 mov esi, esp */
  ESI = (ESP);
  /* 10a41967 push 0x10a6b444 */
  push32((uint32_t)(0x10a6b444u));
  /* 10a4196c push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a41971 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41977u);
  /* 10a41977 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4197a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4197c call 0x10a43210 */
  push32(0x10a41981u); f_10a43210();
  /* 10a41981 mov esi, esp */
  ESI = (ESP);
  /* 10a41983 push 0x10a6b428 */
  push32((uint32_t)(0x10a6b428u));
  /* 10a41988 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a4198d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41993u);
  /* 10a41993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41996 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41998 call 0x10a43210 */
  push32(0x10a4199du); f_10a43210();
  /* 10a4199d mov esi, esp */
  ESI = (ESP);
  /* 10a4199f push 0x10a6b40c */
  push32((uint32_t)(0x10a6b40cu));
  /* 10a419a4 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a419a9 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a419afu);
  /* 10a419af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a419b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a419b4 call 0x10a43210 */
  push32(0x10a419b9u); f_10a43210();
  /* 10a419b9 mov esi, esp */
  ESI = (ESP);
  /* 10a419bb push 0x10a6b3f0 */
  push32((uint32_t)(0x10a6b3f0u));
  /* 10a419c0 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a419c5 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a419cbu);
  /* 10a419cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a419ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a419d0 call 0x10a43210 */
  push32(0x10a419d5u); f_10a43210();
  /* 10a419d5 mov esi, esp */
  ESI = (ESP);
  /* 10a419d7 push 0x10a6b3d4 */
  push32((uint32_t)(0x10a6b3d4u));
  /* 10a419dc push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a419e1 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a419e7u);
  /* 10a419e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a419ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a419ec call 0x10a43210 */
  push32(0x10a419f1u); f_10a43210();
  /* 10a419f1 mov esi, esp */
  ESI = (ESP);
  /* 10a419f3 push 0x10a6b3b8 */
  push32((uint32_t)(0x10a6b3b8u));
  /* 10a419f8 push 0x10a6b65c */
  push32((uint32_t)(0x10a6b65cu));
  /* 10a419fd call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41a03u);
  /* 10a41a03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41a06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41a08 call 0x10a43210 */
  push32(0x10a41a0du); f_10a43210();
  /* 10a41a0d mov esi, esp */
  ESI = (ESP);
  /* 10a41a0f push 0x10a6b3ac */
  push32((uint32_t)(0x10a6b3acu));
  /* 10a41a14 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41a19 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41a1fu);
  /* 10a41a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41a24 call 0x10a43210 */
  push32(0x10a41a29u); f_10a43210();
  /* 10a41a29 mov esi, esp */
  ESI = (ESP);
  /* 10a41a2b push 0x10a6b394 */
  push32((uint32_t)(0x10a6b394u));
  /* 10a41a30 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41a35 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41a3bu);
  /* 10a41a3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41a3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41a40 call 0x10a43210 */
  push32(0x10a41a45u); f_10a43210();
  /* 10a41a45 mov esi, esp */
  ESI = (ESP);
  /* 10a41a47 push 0x10a6b388 */
  push32((uint32_t)(0x10a6b388u));
  /* 10a41a4c push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41a51 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41a57u);
  /* 10a41a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41a5c call 0x10a43210 */
  push32(0x10a41a61u); f_10a43210();
  /* 10a41a61 mov esi, esp */
  ESI = (ESP);
  /* 10a41a63 push 0x10a6b37c */
  push32((uint32_t)(0x10a6b37cu));
  /* 10a41a68 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41a6d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41a73u);
  /* 10a41a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41a76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41a78 call 0x10a43210 */
  push32(0x10a41a7du); f_10a43210();
  /* 10a41a7d mov esi, esp */
  ESI = (ESP);
  /* 10a41a7f push 0x10a6b370 */
  push32((uint32_t)(0x10a6b370u));
  /* 10a41a84 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41a89 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41a8fu);
  /* 10a41a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41a92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41a94 call 0x10a43210 */
  push32(0x10a41a99u); f_10a43210();
  /* 10a41a99 mov esi, esp */
  ESI = (ESP);
  /* 10a41a9b push 0x10a6b364 */
  push32((uint32_t)(0x10a6b364u));
  /* 10a41aa0 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41aa5 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41aabu);
  /* 10a41aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41aae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41ab0 call 0x10a43210 */
  push32(0x10a41ab5u); f_10a43210();
  /* 10a41ab5 mov esi, esp */
  ESI = (ESP);
  /* 10a41ab7 push 0x10a6b358 */
  push32((uint32_t)(0x10a6b358u));
  /* 10a41abc push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41ac1 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41ac7u);
  /* 10a41ac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41aca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41acc call 0x10a43210 */
  push32(0x10a41ad1u); f_10a43210();
  /* 10a41ad1 mov esi, esp */
  ESI = (ESP);
  /* 10a41ad3 push 0x10a6b34c */
  push32((uint32_t)(0x10a6b34cu));
  /* 10a41ad8 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41add call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41ae3u);
  /* 10a41ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41ae8 call 0x10a43210 */
  push32(0x10a41aedu); f_10a43210();
  /* 10a41aed mov esi, esp */
  ESI = (ESP);
  /* 10a41aef push 0x10a6b340 */
  push32((uint32_t)(0x10a6b340u));
  /* 10a41af4 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41af9 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41affu);
  /* 10a41aff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41b04 call 0x10a43210 */
  push32(0x10a41b09u); f_10a43210();
  /* 10a41b09 mov esi, esp */
  ESI = (ESP);
  /* 10a41b0b push 0x10a6b334 */
  push32((uint32_t)(0x10a6b334u));
  /* 10a41b10 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41b15 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41b1bu);
  /* 10a41b1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41b1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41b20 call 0x10a43210 */
  push32(0x10a41b25u); f_10a43210();
  /* 10a41b25 mov esi, esp */
  ESI = (ESP);
  /* 10a41b27 push 0x10a6b328 */
  push32((uint32_t)(0x10a6b328u));
  /* 10a41b2c push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41b31 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41b37u);
  /* 10a41b37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41b3c call 0x10a43210 */
  push32(0x10a41b41u); f_10a43210();
  /* 10a41b41 mov esi, esp */
  ESI = (ESP);
  /* 10a41b43 push 0x10a6b31c */
  push32((uint32_t)(0x10a6b31cu));
  /* 10a41b48 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41b4d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41b53u);
  /* 10a41b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41b56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41b58 call 0x10a43210 */
  push32(0x10a41b5du); f_10a43210();
  /* 10a41b5d mov esi, esp */
  ESI = (ESP);
  /* 10a41b5f push 0x10a6b310 */
  push32((uint32_t)(0x10a6b310u));
  /* 10a41b64 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41b69 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41b6fu);
  /* 10a41b6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41b72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41b74 call 0x10a43210 */
  push32(0x10a41b79u); f_10a43210();
  /* 10a41b79 mov esi, esp */
  ESI = (ESP);
  /* 10a41b7b push 0x10a6b304 */
  push32((uint32_t)(0x10a6b304u));
  /* 10a41b80 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41b85 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41b8bu);
  /* 10a41b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41b90 call 0x10a43210 */
  push32(0x10a41b95u); f_10a43210();
  /* 10a41b95 mov esi, esp */
  ESI = (ESP);
  /* 10a41b97 push 0x10a6b2f8 */
  push32((uint32_t)(0x10a6b2f8u));
  /* 10a41b9c push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41ba1 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41ba7u);
  /* 10a41ba7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41baa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41bac call 0x10a43210 */
  push32(0x10a41bb1u); f_10a43210();
  /* 10a41bb1 mov esi, esp */
  ESI = (ESP);
  /* 10a41bb3 push 0x10a6b2ec */
  push32((uint32_t)(0x10a6b2ecu));
  /* 10a41bb8 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41bbd call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41bc3u);
  /* 10a41bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41bc8 call 0x10a43210 */
  push32(0x10a41bcdu); f_10a43210();
  /* 10a41bcd mov esi, esp */
  ESI = (ESP);
  /* 10a41bcf push 0x10a6b2e0 */
  push32((uint32_t)(0x10a6b2e0u));
  /* 10a41bd4 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41bd9 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41bdfu);
  /* 10a41bdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41be2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41be4 call 0x10a43210 */
  push32(0x10a41be9u); f_10a43210();
  /* 10a41be9 mov esi, esp */
  ESI = (ESP);
  /* 10a41beb push 0x10a6b2d4 */
  push32((uint32_t)(0x10a6b2d4u));
  /* 10a41bf0 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41bf5 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41bfbu);
  /* 10a41bfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41bfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41c00 call 0x10a43210 */
  push32(0x10a41c05u); f_10a43210();
  /* 10a41c05 mov esi, esp */
  ESI = (ESP);
  /* 10a41c07 push 0x10a6b2c8 */
  push32((uint32_t)(0x10a6b2c8u));
  /* 10a41c0c push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41c11 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41c17u);
  /* 10a41c17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41c1c call 0x10a43210 */
  push32(0x10a41c21u); f_10a43210();
  /* 10a41c21 mov esi, esp */
  ESI = (ESP);
  /* 10a41c23 push 0x10a6b2bc */
  push32((uint32_t)(0x10a6b2bcu));
  /* 10a41c28 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41c2d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41c33u);
  /* 10a41c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41c36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41c38 call 0x10a43210 */
  push32(0x10a41c3du); f_10a43210();
  /* 10a41c3d mov esi, esp */
  ESI = (ESP);
  /* 10a41c3f push 0x10a6b2b0 */
  push32((uint32_t)(0x10a6b2b0u));
  /* 10a41c44 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41c49 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41c4fu);
  /* 10a41c4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41c52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41c54 call 0x10a43210 */
  push32(0x10a41c59u); f_10a43210();
  /* 10a41c59 mov esi, esp */
  ESI = (ESP);
  /* 10a41c5b push 0x10a6b2a4 */
  push32((uint32_t)(0x10a6b2a4u));
  /* 10a41c60 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41c65 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41c6bu);
  /* 10a41c6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41c70 call 0x10a43210 */
  push32(0x10a41c75u); f_10a43210();
  /* 10a41c75 mov esi, esp */
  ESI = (ESP);
  /* 10a41c77 push 0x10a6b298 */
  push32((uint32_t)(0x10a6b298u));
  /* 10a41c7c push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41c81 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41c87u);
  /* 10a41c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41c8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41c8c call 0x10a43210 */
  push32(0x10a41c91u); f_10a43210();
  /* 10a41c91 mov esi, esp */
  ESI = (ESP);
  /* 10a41c93 push 0x10a6b28c */
  push32((uint32_t)(0x10a6b28cu));
  /* 10a41c98 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41c9d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41ca3u);
  /* 10a41ca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41ca6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41ca8 call 0x10a43210 */
  push32(0x10a41cadu); f_10a43210();
  /* 10a41cad mov esi, esp */
  ESI = (ESP);
  /* 10a41caf push 0x10a6b280 */
  push32((uint32_t)(0x10a6b280u));
  /* 10a41cb4 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41cb9 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41cbfu);
  /* 10a41cbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41cc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41cc4 call 0x10a43210 */
  push32(0x10a41cc9u); f_10a43210();
  /* 10a41cc9 mov esi, esp */
  ESI = (ESP);
  /* 10a41ccb push 0x10a6b274 */
  push32((uint32_t)(0x10a6b274u));
  /* 10a41cd0 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41cd5 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41cdbu);
  /* 10a41cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41ce0 call 0x10a43210 */
  push32(0x10a41ce5u); f_10a43210();
  /* 10a41ce5 mov esi, esp */
  ESI = (ESP);
  /* 10a41ce7 push 0x10a6b268 */
  push32((uint32_t)(0x10a6b268u));
  /* 10a41cec push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41cf1 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41cf7u);
  /* 10a41cf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41cfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41cfc call 0x10a43210 */
  push32(0x10a41d01u); f_10a43210();
  /* 10a41d01 mov esi, esp */
  ESI = (ESP);
  /* 10a41d03 push 0x10a6b25c */
  push32((uint32_t)(0x10a6b25cu));
  /* 10a41d08 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41d0d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41d13u);
  /* 10a41d13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41d16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41d18 call 0x10a43210 */
  push32(0x10a41d1du); f_10a43210();
  /* 10a41d1d mov esi, esp */
  ESI = (ESP);
  /* 10a41d1f push 0x10a6b250 */
  push32((uint32_t)(0x10a6b250u));
  /* 10a41d24 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41d29 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41d2fu);
  /* 10a41d2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41d32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41d34 call 0x10a43210 */
  push32(0x10a41d39u); f_10a43210();
  /* 10a41d39 mov esi, esp */
  ESI = (ESP);
  /* 10a41d3b push 0x10a6b244 */
  push32((uint32_t)(0x10a6b244u));
  /* 10a41d40 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41d45 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41d4bu);
  /* 10a41d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41d4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41d50 call 0x10a43210 */
  push32(0x10a41d55u); f_10a43210();
  /* 10a41d55 mov esi, esp */
  ESI = (ESP);
  /* 10a41d57 push 0x10a6b238 */
  push32((uint32_t)(0x10a6b238u));
  /* 10a41d5c push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41d61 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41d67u);
  /* 10a41d67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41d6c call 0x10a43210 */
  push32(0x10a41d71u); f_10a43210();
  /* 10a41d71 mov esi, esp */
  ESI = (ESP);
  /* 10a41d73 push 0x10a6b22c */
  push32((uint32_t)(0x10a6b22cu));
  /* 10a41d78 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41d7d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41d83u);
  /* 10a41d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41d86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41d88 call 0x10a43210 */
  push32(0x10a41d8du); f_10a43210();
  /* 10a41d8d mov esi, esp */
  ESI = (ESP);
  /* 10a41d8f push 0x10a6b220 */
  push32((uint32_t)(0x10a6b220u));
  /* 10a41d94 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41d99 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41d9fu);
  /* 10a41d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41da2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41da4 call 0x10a43210 */
  push32(0x10a41da9u); f_10a43210();
  /* 10a41da9 mov esi, esp */
  ESI = (ESP);
  /* 10a41dab push 0x10a6b214 */
  push32((uint32_t)(0x10a6b214u));
  /* 10a41db0 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41db5 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41dbbu);
  /* 10a41dbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41dbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41dc0 call 0x10a43210 */
  push32(0x10a41dc5u); f_10a43210();
  /* 10a41dc5 mov esi, esp */
  ESI = (ESP);
  /* 10a41dc7 push 0x10a6b208 */
  push32((uint32_t)(0x10a6b208u));
  /* 10a41dcc push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41dd1 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41dd7u);
  /* 10a41dd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41dda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41ddc call 0x10a43210 */
  push32(0x10a41de1u); f_10a43210();
  /* 10a41de1 mov esi, esp */
  ESI = (ESP);
  /* 10a41de3 push 0x10a6b1fc */
  push32((uint32_t)(0x10a6b1fcu));
  /* 10a41de8 push 0x10a6b3a0 */
  push32((uint32_t)(0x10a6b3a0u));
  /* 10a41ded call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41df3u);
  /* 10a41df3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41df6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41df8 call 0x10a43210 */
  push32(0x10a41dfdu); f_10a43210();
  /* 10a41dfd mov esi, esp */
  ESI = (ESP);
  /* 10a41dff push 0x10a6b1f0 */
  push32((uint32_t)(0x10a6b1f0u));
  /* 10a41e04 push 0x10a6b1e4 */
  push32((uint32_t)(0x10a6b1e4u));
  /* 10a41e09 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41e0fu);
  /* 10a41e0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41e12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41e14 call 0x10a43210 */
  push32(0x10a41e19u); f_10a43210();
  /* 10a41e19 mov esi, esp */
  ESI = (ESP);
  /* 10a41e1b push 0x10a6b1d8 */
  push32((uint32_t)(0x10a6b1d8u));
  /* 10a41e20 push 0x10a6b1e4 */
  push32((uint32_t)(0x10a6b1e4u));
  /* 10a41e25 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41e2bu);
  /* 10a41e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41e30 call 0x10a43210 */
  push32(0x10a41e35u); f_10a43210();
  /* 10a41e35 mov esi, esp */
  ESI = (ESP);
  /* 10a41e37 push 0x10a6b1cc */
  push32((uint32_t)(0x10a6b1ccu));
  /* 10a41e3c push 0x10a6b1e4 */
  push32((uint32_t)(0x10a6b1e4u));
  /* 10a41e41 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41e47u);
  /* 10a41e47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41e4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41e4c call 0x10a43210 */
  push32(0x10a41e51u); f_10a43210();
  /* 10a41e51 mov esi, esp */
  ESI = (ESP);
  /* 10a41e53 push 0x10a6b1c0 */
  push32((uint32_t)(0x10a6b1c0u));
  /* 10a41e58 push 0x10a6b1e4 */
  push32((uint32_t)(0x10a6b1e4u));
  /* 10a41e5d call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41e63u);
  /* 10a41e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41e68 call 0x10a43210 */
  push32(0x10a41e6du); f_10a43210();
  /* 10a41e6d mov esi, esp */
  ESI = (ESP);
  /* 10a41e6f push 0x10a6b1b4 */
  push32((uint32_t)(0x10a6b1b4u));
  /* 10a41e74 push 0x10a6b1e4 */
  push32((uint32_t)(0x10a6b1e4u));
  /* 10a41e79 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41e7fu);
  /* 10a41e7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41e82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41e84 call 0x10a43210 */
  push32(0x10a41e89u); f_10a43210();
  /* 10a41e89 mov esi, esp */
  ESI = (ESP);
  /* 10a41e8b push 0x10a6b1a8 */
  push32((uint32_t)(0x10a6b1a8u));
  /* 10a41e90 push 0x10a6b1e4 */
  push32((uint32_t)(0x10a6b1e4u));
  /* 10a41e95 call dword ptr [0x10a73404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73404))), 0x10a41e9bu);
  /* 10a41e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41e9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41ea0 call 0x10a43210 */
  push32(0x10a41ea5u); f_10a43210();
  /* 10a41ea5 mov esi, esp */
  ESI = (ESP);
  /* 10a41ea7 push 0x10a6b1a0 */
  push32((uint32_t)(0x10a6b1a0u));
  /* 10a41eac call dword ptr [0x10a733fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733fc))), 0x10a41eb2u);
  /* 10a41eb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41eb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41eb7 call 0x10a43210 */
  push32(0x10a41ebcu); f_10a43210();
  /* 10a41ebc mov esi, esp */
  ESI = (ESP);
  /* 10a41ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41ec0 push 0x10a704b0 */
  push32((uint32_t)(0x10a704b0u));
  /* 10a41ec5 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a41ecbu);
  /* 10a41ecb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41ece cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41ed0 call 0x10a43210 */
  push32(0x10a41ed5u); f_10a43210();
  /* 10a41ed5 mov esi, esp */
  ESI = (ESP);
  /* 10a41ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41ed9 push 0x10a70498 */
  push32((uint32_t)(0x10a70498u));
  /* 10a41ede push 1 */
  push32((uint32_t)(0x1u));
  /* 10a41ee0 call dword ptr [0x10a73410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73410))), 0x10a41ee6u);
  /* 10a41ee6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41ee9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41eeb call 0x10a43210 */
  push32(0x10a41ef0u); f_10a43210();
  /* 10a41ef0 mov dword ptr [0x10a703e4], 0 */
  w32((uint32_t)(0x10a703e4), (0x0u));
L_10a41efa:;
  /* 10a41efa mov esi, esp */
  ESI = (ESP);
  /* 10a41efc push 2 */
  push32((uint32_t)(0x2u));
  /* 10a41efe call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a41f04u);
  /* 10a41f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41f09 call 0x10a43210 */
  push32(0x10a41f0eu); f_10a43210();
  /* 10a41f0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a41f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a41f15 je 0x10a42014 */
  if (C.zf) goto L_10a42014;
  /* 10a41f1b mov esi, esp */
  ESI = (ESP);
  /* 10a41f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41f1f push 0x10a70460 */
  push32((uint32_t)(0x10a70460u));
  /* 10a41f24 call dword ptr [0x10a73408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73408))), 0x10a41f2au);
  /* 10a41f2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41f2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41f2f call 0x10a43210 */
  push32(0x10a41f34u); f_10a43210();
  /* 10a41f34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a41f36 jle 0x10a42014 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42014;
  /* 10a41f3c mov esi, esp */
  ESI = (ESP);
  /* 10a41f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41f40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a41f42 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a41f48u);
  /* 10a41f48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41f4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41f4d call 0x10a43210 */
  push32(0x10a41f52u); f_10a43210();
  /* 10a41f52 mov esi, esp */
  ESI = (ESP);
  /* 10a41f54 push 0x10a6b198 */
  push32((uint32_t)(0x10a6b198u));
  /* 10a41f59 call dword ptr [0x10a733fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733fc))), 0x10a41f5fu);
  /* 10a41f5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41f64 call 0x10a43210 */
  push32(0x10a41f69u); f_10a43210();
  /* 10a41f69 mov esi, esp */
  ESI = (ESP);
  /* 10a41f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41f6d push 0x10a70400 */
  push32((uint32_t)(0x10a70400u));
  /* 10a41f72 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a41f78u);
  /* 10a41f78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41f7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41f7d call 0x10a43210 */
  push32(0x10a41f82u); f_10a43210();
  /* 10a41f82 mov esi, esp */
  ESI = (ESP);
  /* 10a41f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41f86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a41f88 push 0x10a70460 */
  push32((uint32_t)(0x10a70460u));
  /* 10a41f8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a41f8f call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a41f95u);
  /* 10a41f95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41f98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41f9a call 0x10a43210 */
  push32(0x10a41f9fu); f_10a43210();
  /* 10a41f9f push 0x10a703f8 */
  push32((uint32_t)(0x10a703f8u));
  /* 10a41fa4 call 0x10a41005 */
  push32(0x10a41fa9u); f_10a41005();
  /* 10a41fa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41fac cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41faf jle 0x10a42014 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42014;
  /* 10a41fb1 mov esi, esp */
  ESI = (ESP);
  /* 10a41fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41fb5 push 0x10a704a8 */
  push32((uint32_t)(0x10a704a8u));
  /* 10a41fba call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a41fc0u);
  /* 10a41fc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41fc5 call 0x10a43210 */
  push32(0x10a41fcau); f_10a43210();
  /* 10a41fca mov esi, esp */
  ESI = (ESP);
  /* 10a41fcc push 1 */
  push32((uint32_t)(0x1u));
  /* 10a41fce call dword ptr [0x10a7341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7341c))), 0x10a41fd4u);
  /* 10a41fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41fd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41fd9 call 0x10a43210 */
  push32(0x10a41fdeu); f_10a43210();
  /* 10a41fde mov esi, esp */
  ESI = (ESP);
  /* 10a41fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41fe2 push 0x10a703f8 */
  push32((uint32_t)(0x10a703f8u));
  /* 10a41fe7 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a41fedu);
  /* 10a41fed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a41ff0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a41ff2 call 0x10a43210 */
  push32(0x10a41ff7u); f_10a43210();
  /* 10a41ff7 mov esi, esp */
  ESI = (ESP);
  /* 10a41ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a41ffb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a41ffd push 0x10a70460 */
  push32((uint32_t)(0x10a70460u));
  /* 10a42002 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a42004 call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a4200au);
  /* 10a4200a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4200d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4200f call 0x10a43210 */
  push32(0x10a42014u); f_10a43210();
L_10a42014:;
  /* 10a42014 mov esi, esp */
  ESI = (ESP);
  /* 10a42016 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10a42018 call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a4201eu);
  /* 10a4201e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42021 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42023 call 0x10a43210 */
  push32(0x10a42028u); f_10a43210();
  /* 10a42028 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4202d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4202f je 0x10a420a3 */
  if (C.zf) goto L_10a420a3;
  /* 10a42031 mov esi, esp */
  ESI = (ESP);
  /* 10a42033 push 0x10a703f8 */
  push32((uint32_t)(0x10a703f8u));
  /* 10a42038 push 0x10a70460 */
  push32((uint32_t)(0x10a70460u));
  /* 10a4203d call dword ptr [0x10a73414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73414))), 0x10a42043u);
  /* 10a42043 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42046 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42048 call 0x10a43210 */
  push32(0x10a4204du); f_10a43210();
  /* 10a4204d mov esi, eax */
  ESI = (EAX);
  /* 10a4204f push 0x10a703f8 */
  push32((uint32_t)(0x10a703f8u));
  /* 10a42054 call 0x10a41005 */
  push32(0x10a42059u); f_10a41005();
  /* 10a42059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4205c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4205e jne 0x10a420a3 */
  if (!C.zf) goto L_10a420a3;
  /* 10a42060 mov esi, esp */
  ESI = (ESP);
  /* 10a42062 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42064 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10a42066 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a4206cu);
  /* 10a4206c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4206f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42071 call 0x10a43210 */
  push32(0x10a42076u); f_10a43210();
  /* 10a42076 mov esi, esp */
  ESI = (ESP);
  /* 10a42078 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4207a push 0x10a704a8 */
  push32((uint32_t)(0x10a704a8u));
  /* 10a4207f call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a42085u);
  /* 10a42085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42088 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4208a call 0x10a43210 */
  push32(0x10a4208fu); f_10a43210();
  /* 10a4208f mov esi, esp */
  ESI = (ESP);
  /* 10a42091 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a42093 call dword ptr [0x10a73424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73424))), 0x10a42099u);
  /* 10a42099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4209c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4209e call 0x10a43210 */
  push32(0x10a420a3u); f_10a43210();
L_10a420a3:;
  /* 10a420a3 mov esi, esp */
  ESI = (ESP);
  /* 10a420a5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10a420a7 call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a420adu);
  /* 10a420ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a420b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a420b2 call 0x10a43210 */
  push32(0x10a420b7u); f_10a43210();
  /* 10a420b7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a420bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a420be je 0x10a42164 */
  if (C.zf) goto L_10a42164;
  /* 10a420c4 mov esi, esp */
  ESI = (ESP);
  /* 10a420c6 call dword ptr [0x10a73428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73428))), 0x10a420ccu);
  /* 10a420cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a420ce call 0x10a43210 */
  push32(0x10a420d3u); f_10a43210();
  /* 10a420d3 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a420d8 jle 0x10a42164 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42164;
  /* 10a420de mov esi, esp */
  ESI = (ESP);
  /* 10a420e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a420e2 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10a420e4 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a420eau);
  /* 10a420ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a420ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a420ef call 0x10a43210 */
  push32(0x10a420f4u); f_10a43210();
  /* 10a420f4 mov esi, esp */
  ESI = (ESP);
  /* 10a420f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a420f8 push 0x10a70410 */
  push32((uint32_t)(0x10a70410u));
  /* 10a420fd call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a42103u);
  /* 10a42103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42106 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42108 call 0x10a43210 */
  push32(0x10a4210du); f_10a43210();
  /* 10a4210d mov esi, esp */
  ESI = (ESP);
  /* 10a4210f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a42111 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a42113 push 0x10a70468 */
  push32((uint32_t)(0x10a70468u));
  /* 10a42118 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4211a call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a42120u);
  /* 10a42120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42123 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42125 call 0x10a43210 */
  push32(0x10a4212au); f_10a43210();
  /* 10a4212a mov esi, esp */
  ESI = (ESP);
  /* 10a4212c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4212e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a42130 push 0x10a70470 */
  push32((uint32_t)(0x10a70470u));
  /* 10a42135 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a42137 call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a4213du);
  /* 10a4213d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42140 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42142 call 0x10a43210 */
  push32(0x10a42147u); f_10a43210();
  /* 10a42147 mov esi, esp */
  ESI = (ESP);
  /* 10a42149 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4214b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a4214d push 0x10a70478 */
  push32((uint32_t)(0x10a70478u));
  /* 10a42152 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a42154 call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a4215au);
  /* 10a4215a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4215d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4215f call 0x10a43210 */
  push32(0x10a42164u); f_10a43210();
L_10a42164:;
  /* 10a42164 mov esi, esp */
  ESI = (ESP);
  /* 10a42166 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10a42168 call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a4216eu);
  /* 10a4216e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42171 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42173 call 0x10a43210 */
  push32(0x10a42178u); f_10a43210();
  /* 10a42178 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4217d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4217f je 0x10a421eb */
  if (C.zf) goto L_10a421eb;
  /* 10a42181 mov esi, esp */
  ESI = (ESP);
  /* 10a42183 push 0x10a70410 */
  push32((uint32_t)(0x10a70410u));
  /* 10a42188 push 0x10a70478 */
  push32((uint32_t)(0x10a70478u));
  /* 10a4218d call dword ptr [0x10a73414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73414))), 0x10a42193u);
  /* 10a42193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42196 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42198 call 0x10a43210 */
  push32(0x10a4219du); f_10a43210();
  /* 10a4219d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4219f jle 0x10a421eb */
  if ((C.zf||C.sf!=C.of)) goto L_10a421eb;
  /* 10a421a1 mov esi, esp */
  ESI = (ESP);
  /* 10a421a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a421a5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10a421a7 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a421adu);
  /* 10a421ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a421b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a421b2 call 0x10a43210 */
  push32(0x10a421b7u); f_10a43210();
  /* 10a421b7 mov esi, esp */
  ESI = (ESP);
  /* 10a421b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a421bb push 0x10a70410 */
  push32((uint32_t)(0x10a70410u));
  /* 10a421c0 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a421c6u);
  /* 10a421c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a421c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a421cb call 0x10a43210 */
  push32(0x10a421d0u); f_10a43210();
  /* 10a421d0 mov esi, esp */
  ESI = (ESP);
  /* 10a421d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a421d4 push 0x10a70480 */
  push32((uint32_t)(0x10a70480u));
  /* 10a421d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a421db call dword ptr [0x10a73410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73410))), 0x10a421e1u);
  /* 10a421e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a421e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a421e6 call 0x10a43210 */
  push32(0x10a421ebu); f_10a43210();
L_10a421eb:;
  /* 10a421eb mov esi, esp */
  ESI = (ESP);
  /* 10a421ed push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a421ef call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a421f5u);
  /* 10a421f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a421f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a421fa call 0x10a43210 */
  push32(0x10a421ffu); f_10a43210();
  /* 10a421ff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a42204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42206 je 0x10a422ac */
  if (C.zf) goto L_10a422ac;
  /* 10a4220c mov esi, esp */
  ESI = (ESP);
  /* 10a4220e call dword ptr [0x10a73428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73428))), 0x10a42214u);
  /* 10a42214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42216 call 0x10a43210 */
  push32(0x10a4221bu); f_10a43210();
  /* 10a4221b cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42220 jle 0x10a422ac */
  if ((C.zf||C.sf!=C.of)) goto L_10a422ac;
  /* 10a42226 mov esi, esp */
  ESI = (ESP);
  /* 10a42228 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4222a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a4222c call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a42232u);
  /* 10a42232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42235 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42237 call 0x10a43210 */
  push32(0x10a4223cu); f_10a43210();
  /* 10a4223c mov esi, esp */
  ESI = (ESP);
  /* 10a4223e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42240 push 0x10a70408 */
  push32((uint32_t)(0x10a70408u));
  /* 10a42245 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a4224bu);
  /* 10a4224b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4224e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42250 call 0x10a43210 */
  push32(0x10a42255u); f_10a43210();
  /* 10a42255 mov esi, esp */
  ESI = (ESP);
  /* 10a42257 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a42259 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a4225b push 0x10a70468 */
  push32((uint32_t)(0x10a70468u));
  /* 10a42260 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a42262 call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a42268u);
  /* 10a42268 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4226b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4226d call 0x10a43210 */
  push32(0x10a42272u); f_10a43210();
  /* 10a42272 mov esi, esp */
  ESI = (ESP);
  /* 10a42274 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a42276 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a42278 push 0x10a70470 */
  push32((uint32_t)(0x10a70470u));
  /* 10a4227d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4227f call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a42285u);
  /* 10a42285 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42288 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4228a call 0x10a43210 */
  push32(0x10a4228fu); f_10a43210();
  /* 10a4228f mov esi, esp */
  ESI = (ESP);
  /* 10a42291 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a42293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a42295 push 0x10a70478 */
  push32((uint32_t)(0x10a70478u));
  /* 10a4229a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4229c call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a422a2u);
  /* 10a422a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a422a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a422a7 call 0x10a43210 */
  push32(0x10a422acu); f_10a43210();
L_10a422ac:;
  /* 10a422ac mov esi, esp */
  ESI = (ESP);
  /* 10a422ae push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a422b0 call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a422b6u);
  /* 10a422b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a422b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a422bb call 0x10a43210 */
  push32(0x10a422c0u); f_10a43210();
  /* 10a422c0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a422c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a422c7 je 0x10a42333 */
  if (C.zf) goto L_10a42333;
  /* 10a422c9 mov esi, esp */
  ESI = (ESP);
  /* 10a422cb push 0x10a70408 */
  push32((uint32_t)(0x10a70408u));
  /* 10a422d0 push 0x10a70478 */
  push32((uint32_t)(0x10a70478u));
  /* 10a422d5 call dword ptr [0x10a73414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73414))), 0x10a422dbu);
  /* 10a422db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a422de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a422e0 call 0x10a43210 */
  push32(0x10a422e5u); f_10a43210();
  /* 10a422e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a422e7 jle 0x10a42333 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42333;
  /* 10a422e9 mov esi, esp */
  ESI = (ESP);
  /* 10a422eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a422ed push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a422ef call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a422f5u);
  /* 10a422f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a422f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a422fa call 0x10a43210 */
  push32(0x10a422ffu); f_10a43210();
  /* 10a422ff mov esi, esp */
  ESI = (ESP);
  /* 10a42301 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42303 push 0x10a70408 */
  push32((uint32_t)(0x10a70408u));
  /* 10a42308 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a4230eu);
  /* 10a4230e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42311 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42313 call 0x10a43210 */
  push32(0x10a42318u); f_10a43210();
  /* 10a42318 mov esi, esp */
  ESI = (ESP);
  /* 10a4231a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4231c push 0x10a70480 */
  push32((uint32_t)(0x10a70480u));
  /* 10a42321 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a42323 call dword ptr [0x10a73410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73410))), 0x10a42329u);
  /* 10a42329 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4232c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4232e call 0x10a43210 */
  push32(0x10a42333u); f_10a43210();
L_10a42333:;
  /* 10a42333 mov esi, esp */
  ESI = (ESP);
  /* 10a42335 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10a42337 call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a4233du);
  /* 10a4233d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42340 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42342 call 0x10a43210 */
  push32(0x10a42347u); f_10a43210();
  /* 10a42347 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4234c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4234e je 0x10a423f4 */
  if (C.zf) goto L_10a423f4;
  /* 10a42354 mov esi, esp */
  ESI = (ESP);
  /* 10a42356 call dword ptr [0x10a73428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73428))), 0x10a4235cu);
  /* 10a4235c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4235e call 0x10a43210 */
  push32(0x10a42363u); f_10a43210();
  /* 10a42363 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42368 jle 0x10a423f4 */
  if ((C.zf||C.sf!=C.of)) goto L_10a423f4;
  /* 10a4236e mov esi, esp */
  ESI = (ESP);
  /* 10a42370 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42372 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10a42374 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a4237au);
  /* 10a4237a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4237d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4237f call 0x10a43210 */
  push32(0x10a42384u); f_10a43210();
  /* 10a42384 mov esi, esp */
  ESI = (ESP);
  /* 10a42386 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42388 push 0x10a70420 */
  push32((uint32_t)(0x10a70420u));
  /* 10a4238d call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a42393u);
  /* 10a42393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42396 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42398 call 0x10a43210 */
  push32(0x10a4239du); f_10a43210();
  /* 10a4239d mov esi, esp */
  ESI = (ESP);
  /* 10a4239f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a423a1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a423a3 push 0x10a70468 */
  push32((uint32_t)(0x10a70468u));
  /* 10a423a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a423aa call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a423b0u);
  /* 10a423b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a423b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a423b5 call 0x10a43210 */
  push32(0x10a423bau); f_10a43210();
  /* 10a423ba mov esi, esp */
  ESI = (ESP);
  /* 10a423bc push 2 */
  push32((uint32_t)(0x2u));
  /* 10a423be push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a423c0 push 0x10a70470 */
  push32((uint32_t)(0x10a70470u));
  /* 10a423c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a423c7 call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a423cdu);
  /* 10a423cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a423d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a423d2 call 0x10a43210 */
  push32(0x10a423d7u); f_10a43210();
  /* 10a423d7 mov esi, esp */
  ESI = (ESP);
  /* 10a423d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a423db push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a423dd push 0x10a70480 */
  push32((uint32_t)(0x10a70480u));
  /* 10a423e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a423e4 call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a423eau);
  /* 10a423ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a423ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a423ef call 0x10a43210 */
  push32(0x10a423f4u); f_10a43210();
L_10a423f4:;
  /* 10a423f4 mov esi, esp */
  ESI = (ESP);
  /* 10a423f6 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10a423f8 call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a423feu);
  /* 10a423fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42401 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42403 call 0x10a43210 */
  push32(0x10a42408u); f_10a43210();
  /* 10a42408 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4240d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4240f je 0x10a4247b */
  if (C.zf) goto L_10a4247b;
  /* 10a42411 mov esi, esp */
  ESI = (ESP);
  /* 10a42413 push 0x10a70420 */
  push32((uint32_t)(0x10a70420u));
  /* 10a42418 push 0x10a70480 */
  push32((uint32_t)(0x10a70480u));
  /* 10a4241d call dword ptr [0x10a73414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73414))), 0x10a42423u);
  /* 10a42423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42426 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42428 call 0x10a43210 */
  push32(0x10a4242du); f_10a43210();
  /* 10a4242d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4242f jle 0x10a4247b */
  if ((C.zf||C.sf!=C.of)) goto L_10a4247b;
  /* 10a42431 mov esi, esp */
  ESI = (ESP);
  /* 10a42433 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42435 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10a42437 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a4243du);
  /* 10a4243d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42440 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42442 call 0x10a43210 */
  push32(0x10a42447u); f_10a43210();
  /* 10a42447 mov esi, esp */
  ESI = (ESP);
  /* 10a42449 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4244b push 0x10a70420 */
  push32((uint32_t)(0x10a70420u));
  /* 10a42450 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a42456u);
  /* 10a42456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4245b call 0x10a43210 */
  push32(0x10a42460u); f_10a43210();
  /* 10a42460 mov esi, esp */
  ESI = (ESP);
  /* 10a42462 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42464 push 0x10a70478 */
  push32((uint32_t)(0x10a70478u));
  /* 10a42469 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4246b call dword ptr [0x10a73410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73410))), 0x10a42471u);
  /* 10a42471 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42474 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42476 call 0x10a43210 */
  push32(0x10a4247bu); f_10a43210();
L_10a4247b:;
  /* 10a4247b mov esi, esp */
  ESI = (ESP);
  /* 10a4247d call dword ptr [0x10a73428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73428))), 0x10a42483u);
  /* 10a42483 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42485 call 0x10a43210 */
  push32(0x10a4248au); f_10a43210();
  /* 10a4248a mov ecx, dword ptr [0x10a703e4] */
  ECX = (r32((uint32_t)(0x10a703e4)));
  /* 10a42490 imul ecx, ecx, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1388u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a42496 add ecx, 0x4e20 */
  { uint32_t _a=(ECX),_b=(0x4e20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4249c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4249e jle 0x10a42547 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42547;
  /* 10a424a4 cmp dword ptr [0x10a703e4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10a703e4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a424ab jge 0x10a42547 */
  if ((C.sf==C.of)) goto L_10a42547;
  /* 10a424b1 mov esi, esp */
  ESI = (ESP);
  /* 10a424b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a424b5 push 0x10a704a0 */
  push32((uint32_t)(0x10a704a0u));
  /* 10a424ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10a424bc push 0x10a70438 */
  push32((uint32_t)(0x10a70438u));
  /* 10a424c1 mov eax, dword ptr [0x10a703e4] */
  EAX = (r32((uint32_t)(0x10a703e4)));
  /* 10a424c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a424c7 mov ecx, 5 */
  ECX = (0x5u);
  /* 10a424cc idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a424ce lea edx, [eax*8 + 0x10a704c8] */
  EDX = ((uint32_t)(EAX*8 + 0x10a704c8));
  /* 10a424d5 push edx */
  push32((uint32_t)(EDX));
  /* 10a424d6 mov eax, dword ptr [0x10a703e4] */
  EAX = (r32((uint32_t)(0x10a703e4)));
  /* 10a424db lea ecx, [eax*8 + 0x10a704e8] */
  ECX = ((uint32_t)(EAX*8 + 0x10a704e8));
  /* 10a424e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a424e3 call dword ptr [0x10a73420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73420))), 0x10a424e9u);
  /* 10a424e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a424ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a424ee call 0x10a43210 */
  push32(0x10a424f3u); f_10a43210();
  /* 10a424f3 mov esi, esp */
  ESI = (ESP);
  /* 10a424f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a424f7 mov edx, dword ptr [0x10a703e4] */
  EDX = (r32((uint32_t)(0x10a703e4)));
  /* 10a424fd lea eax, [edx*8 + 0x10a704e8] */
  EAX = ((uint32_t)(EDX*8 + 0x10a704e8));
  /* 10a42504 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a42507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4250a push ecx */
  push32((uint32_t)(ECX));
  /* 10a4250b mov edx, dword ptr [0x10a703e4] */
  EDX = (r32((uint32_t)(0x10a703e4)));
  /* 10a42511 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42514 mov dword ptr [0x10a703e4], edx */
  w32((uint32_t)(0x10a703e4), (EDX));
  /* 10a4251a call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a42520u);
  /* 10a42520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42523 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42525 call 0x10a43210 */
  push32(0x10a4252au); f_10a43210();
  /* 10a4252a mov esi, esp */
  ESI = (ESP);
  /* 10a4252c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4252e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42530 push 0x10a70448 */
  push32((uint32_t)(0x10a70448u));
  /* 10a42535 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a42537 call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a4253du);
  /* 10a4253d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42540 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42542 call 0x10a43210 */
  push32(0x10a42547u); f_10a43210();
L_10a42547:;
  /* 10a42547 mov dword ptr [0x10a703e0], 0 */
  w32((uint32_t)(0x10a703e0), (0x0u));
  /* 10a42551 jmp 0x10a42560 */
  goto L_10a42560;
L_10a42553:;
  /* 10a42553 mov eax, dword ptr [0x10a703e0] */
  EAX = (r32((uint32_t)(0x10a703e0)));
  /* 10a42558 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4255b mov dword ptr [0x10a703e0], eax */
  w32((uint32_t)(0x10a703e0), (EAX));
L_10a42560:;
  /* 10a42560 mov ecx, dword ptr [0x10a703e0] */
  ECX = (r32((uint32_t)(0x10a703e0)));
  /* 10a42566 cmp ecx, dword ptr [0x10a703e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a703e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4256c jge 0x10a42667 */
  if ((C.sf==C.of)) goto L_10a42667;
  /* 10a42572 mov edx, dword ptr [0x10a703e0] */
  EDX = (r32((uint32_t)(0x10a703e0)));
  /* 10a42578 lea eax, [edx*8 + 0x10a704e8] */
  EAX = ((uint32_t)(EDX*8 + 0x10a704e8));
  /* 10a4257f push eax */
  push32((uint32_t)(EAX));
  /* 10a42580 call 0x10a41005 */
  push32(0x10a42585u); f_10a41005();
  /* 10a42585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4258a jle 0x10a42662 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42662;
  /* 10a42590 mov esi, esp */
  ESI = (ESP);
  /* 10a42592 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42594 push 0x10a70448 */
  push32((uint32_t)(0x10a70448u));
  /* 10a42599 call dword ptr [0x10a73408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73408))), 0x10a4259fu);
  /* 10a4259f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a425a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a425a4 call 0x10a43210 */
  push32(0x10a425a9u); f_10a43210();
  /* 10a425a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a425ab jle 0x10a425d9 */
  if ((C.zf||C.sf!=C.of)) goto L_10a425d9;
  /* 10a425ad mov esi, esp */
  ESI = (ESP);
  /* 10a425af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a425b1 push 0x10a70448 */
  push32((uint32_t)(0x10a70448u));
  /* 10a425b6 mov ecx, dword ptr [0x10a703e0] */
  ECX = (r32((uint32_t)(0x10a703e0)));
  /* 10a425bc lea edx, [ecx*8 + 0x10a704e8] */
  EDX = ((uint32_t)(ECX*8 + 0x10a704e8));
  /* 10a425c3 push edx */
  push32((uint32_t)(EDX));
  /* 10a425c4 call dword ptr [0x10a73430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73430))), 0x10a425cau);
  /* 10a425ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a425cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a425cf call 0x10a43210 */
  push32(0x10a425d4u); f_10a43210();
  /* 10a425d4 jmp 0x10a42662 */
  goto L_10a42662;
L_10a425d9:;
  /* 10a425d9 mov esi, esp */
  ESI = (ESP);
  /* 10a425db push 0 */
  push32((uint32_t)(0x0u));
  /* 10a425dd push 0x10a70440 */
  push32((uint32_t)(0x10a70440u));
  /* 10a425e2 call dword ptr [0x10a73408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73408))), 0x10a425e8u);
  /* 10a425e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a425eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a425ed call 0x10a43210 */
  push32(0x10a425f2u); f_10a43210();
  /* 10a425f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a425f4 jle 0x10a4261e */
  if ((C.zf||C.sf!=C.of)) goto L_10a4261e;
  /* 10a425f6 mov esi, esp */
  ESI = (ESP);
  /* 10a425f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a425fa push 0x10a70440 */
  push32((uint32_t)(0x10a70440u));
  /* 10a425ff mov eax, dword ptr [0x10a703e0] */
  EAX = (r32((uint32_t)(0x10a703e0)));
  /* 10a42604 lea ecx, [eax*8 + 0x10a704e8] */
  ECX = ((uint32_t)(EAX*8 + 0x10a704e8));
  /* 10a4260b push ecx */
  push32((uint32_t)(ECX));
  /* 10a4260c call dword ptr [0x10a73430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73430))), 0x10a42612u);
  /* 10a42612 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42615 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42617 call 0x10a43210 */
  push32(0x10a4261cu); f_10a43210();
  /* 10a4261c jmp 0x10a42662 */
  goto L_10a42662;
L_10a4261e:;
  /* 10a4261e mov esi, esp */
  ESI = (ESP);
  /* 10a42620 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42622 push 0x10a70458 */
  push32((uint32_t)(0x10a70458u));
  /* 10a42627 call dword ptr [0x10a73408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73408))), 0x10a4262du);
  /* 10a4262d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42630 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42632 call 0x10a43210 */
  push32(0x10a42637u); f_10a43210();
  /* 10a42637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42639 jle 0x10a42662 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42662;
  /* 10a4263b mov esi, esp */
  ESI = (ESP);
  /* 10a4263d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4263f push 0x10a70458 */
  push32((uint32_t)(0x10a70458u));
  /* 10a42644 mov edx, dword ptr [0x10a703e0] */
  EDX = (r32((uint32_t)(0x10a703e0)));
  /* 10a4264a lea eax, [edx*8 + 0x10a704e8] */
  EAX = ((uint32_t)(EDX*8 + 0x10a704e8));
  /* 10a42651 push eax */
  push32((uint32_t)(EAX));
  /* 10a42652 call dword ptr [0x10a73430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73430))), 0x10a42658u);
  /* 10a42658 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4265b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4265d call 0x10a43210 */
  push32(0x10a42662u); f_10a43210();
L_10a42662:;
  /* 10a42662 jmp 0x10a42553 */
  goto L_10a42553;
L_10a42667:;
  /* 10a42667 mov esi, esp */
  ESI = (ESP);
  /* 10a42669 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10a4266b call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a42671u);
  /* 10a42671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42674 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42676 call 0x10a43210 */
  push32(0x10a4267bu); f_10a43210();
  /* 10a4267b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a42680 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42682 je 0x10a42714 */
  if (C.zf) goto L_10a42714;
  /* 10a42688 mov esi, esp */
  ESI = (ESP);
  /* 10a4268a call dword ptr [0x10a73428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73428))), 0x10a42690u);
  /* 10a42690 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42692 call 0x10a43210 */
  push32(0x10a42697u); f_10a43210();
  /* 10a42697 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4269c jle 0x10a42714 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42714;
  /* 10a4269e mov esi, esp */
  ESI = (ESP);
  /* 10a426a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a426a2 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10a426a4 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a426aau);
  /* 10a426aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a426ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a426af call 0x10a43210 */
  push32(0x10a426b4u); f_10a43210();
  /* 10a426b4 mov esi, esp */
  ESI = (ESP);
  /* 10a426b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a426b8 push 0x10a70450 */
  push32((uint32_t)(0x10a70450u));
  /* 10a426bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a426bf push 0x10a703e8 */
  push32((uint32_t)(0x10a703e8u));
  /* 10a426c4 push 0x10a704c8 */
  push32((uint32_t)(0x10a704c8u));
  /* 10a426c9 push 0x10a704b8 */
  push32((uint32_t)(0x10a704b8u));
  /* 10a426ce call dword ptr [0x10a73420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73420))), 0x10a426d4u);
  /* 10a426d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a426d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a426d9 call 0x10a43210 */
  push32(0x10a426deu); f_10a43210();
  /* 10a426de mov esi, esp */
  ESI = (ESP);
  /* 10a426e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a426e2 push 0x10a704b8 */
  push32((uint32_t)(0x10a704b8u));
  /* 10a426e7 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a426edu);
  /* 10a426ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a426f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a426f2 call 0x10a43210 */
  push32(0x10a426f7u); f_10a43210();
  /* 10a426f7 mov esi, esp */
  ESI = (ESP);
  /* 10a426f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a426fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a426fd push 0x10a70458 */
  push32((uint32_t)(0x10a70458u));
  /* 10a42702 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a42704 call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a4270au);
  /* 10a4270a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4270d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4270f call 0x10a43210 */
  push32(0x10a42714u); f_10a43210();
L_10a42714:;
  /* 10a42714 mov esi, esp */
  ESI = (ESP);
  /* 10a42716 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10a42718 call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a4271eu);
  /* 10a4271e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42721 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42723 call 0x10a43210 */
  push32(0x10a42728u); f_10a43210();
  /* 10a42728 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4272d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4272f jne 0x10a4277d */
  if (!C.zf) goto L_10a4277d;
  /* 10a42731 mov esi, esp */
  ESI = (ESP);
  /* 10a42733 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42735 push 0x10a70458 */
  push32((uint32_t)(0x10a70458u));
  /* 10a4273a call dword ptr [0x10a73408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73408))), 0x10a42740u);
  /* 10a42740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42745 call 0x10a43210 */
  push32(0x10a4274au); f_10a43210();
  /* 10a4274a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4274c jle 0x10a4277d */
  if ((C.zf||C.sf!=C.of)) goto L_10a4277d;
  /* 10a4274e push 0x10a704b8 */
  push32((uint32_t)(0x10a704b8u));
  /* 10a42753 call 0x10a41005 */
  push32(0x10a42758u); f_10a41005();
  /* 10a42758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4275b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4275d jle 0x10a4277d */
  if ((C.zf||C.sf!=C.of)) goto L_10a4277d;
  /* 10a4275f mov esi, esp */
  ESI = (ESP);
  /* 10a42761 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42763 push 0x10a70458 */
  push32((uint32_t)(0x10a70458u));
  /* 10a42768 push 0x10a704b8 */
  push32((uint32_t)(0x10a704b8u));
  /* 10a4276d call dword ptr [0x10a73430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73430))), 0x10a42773u);
  /* 10a42773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42776 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42778 call 0x10a43210 */
  push32(0x10a4277du); f_10a43210();
L_10a4277d:;
  /* 10a4277d mov esi, esp */
  ESI = (ESP);
  /* 10a4277f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10a42781 call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a42787u);
  /* 10a42787 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4278a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4278c call 0x10a43210 */
  push32(0x10a42791u); f_10a43210();
  /* 10a42791 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a42796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42798 je 0x10a42803 */
  if (C.zf) goto L_10a42803;
  /* 10a4279a mov esi, esp */
  ESI = (ESP);
  /* 10a4279c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4279e push 0x10a70488 */
  push32((uint32_t)(0x10a70488u));
  /* 10a427a3 call dword ptr [0x10a73408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73408))), 0x10a427a9u);
  /* 10a427a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a427ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a427ae call 0x10a43210 */
  push32(0x10a427b3u); f_10a43210();
  /* 10a427b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a427b5 jle 0x10a42803 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42803;
  /* 10a427b7 mov esi, esp */
  ESI = (ESP);
  /* 10a427b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a427bb push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10a427bd call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a427c3u);
  /* 10a427c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a427c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a427c8 call 0x10a43210 */
  push32(0x10a427cdu); f_10a43210();
  /* 10a427cd mov esi, esp */
  ESI = (ESP);
  /* 10a427cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a427d1 push 0x10a70428 */
  push32((uint32_t)(0x10a70428u));
  /* 10a427d6 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a427dcu);
  /* 10a427dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a427df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a427e1 call 0x10a43210 */
  push32(0x10a427e6u); f_10a43210();
  /* 10a427e6 mov esi, esp */
  ESI = (ESP);
  /* 10a427e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a427ea push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a427ec push 0x10a70488 */
  push32((uint32_t)(0x10a70488u));
  /* 10a427f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a427f3 call dword ptr [0x10a73418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73418))), 0x10a427f9u);
  /* 10a427f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a427fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a427fe call 0x10a43210 */
  push32(0x10a42803u); f_10a43210();
L_10a42803:;
  /* 10a42803 mov esi, esp */
  ESI = (ESP);
  /* 10a42805 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10a42807 call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a4280du);
  /* 10a4280d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42810 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42812 call 0x10a43210 */
  push32(0x10a42817u); f_10a43210();
  /* 10a42817 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4281c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4281e je 0x10a4288a */
  if (C.zf) goto L_10a4288a;
  /* 10a42820 mov esi, esp */
  ESI = (ESP);
  /* 10a42822 push 0x10a70428 */
  push32((uint32_t)(0x10a70428u));
  /* 10a42827 push 0x10a70488 */
  push32((uint32_t)(0x10a70488u));
  /* 10a4282c call dword ptr [0x10a73414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73414))), 0x10a42832u);
  /* 10a42832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42835 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42837 call 0x10a43210 */
  push32(0x10a4283cu); f_10a43210();
  /* 10a4283c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4283e je 0x10a4288a */
  if (C.zf) goto L_10a4288a;
  /* 10a42840 mov esi, esp */
  ESI = (ESP);
  /* 10a42842 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42844 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10a42846 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a4284cu);
  /* 10a4284c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4284f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42851 call 0x10a43210 */
  push32(0x10a42856u); f_10a43210();
  /* 10a42856 mov esi, esp */
  ESI = (ESP);
  /* 10a42858 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4285a push 0x10a70428 */
  push32((uint32_t)(0x10a70428u));
  /* 10a4285f call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a42865u);
  /* 10a42865 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42868 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4286a call 0x10a43210 */
  push32(0x10a4286fu); f_10a43210();
  /* 10a4286f mov esi, esp */
  ESI = (ESP);
  /* 10a42871 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42873 push 0x10a70490 */
  push32((uint32_t)(0x10a70490u));
  /* 10a42878 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4287a call dword ptr [0x10a73410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73410))), 0x10a42880u);
  /* 10a42880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42885 call 0x10a43210 */
  push32(0x10a4288au); f_10a43210();
L_10a4288a:;
  /* 10a4288a mov esi, esp */
  ESI = (ESP);
  /* 10a4288c push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a4288e call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a42894u);
  /* 10a42894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42899 call 0x10a43210 */
  push32(0x10a4289eu); f_10a43210();
  /* 10a4289e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a428a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a428a5 je 0x10a42958 */
  if (C.zf) goto L_10a42958;
  /* 10a428ab push 0x10a70418 */
  push32((uint32_t)(0x10a70418u));
  /* 10a428b0 call 0x10a41005 */
  push32(0x10a428b5u); f_10a41005();
  /* 10a428b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a428b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a428ba jne 0x10a42958 */
  if (!C.zf) goto L_10a42958;
  /* 10a428c0 mov esi, esp */
  ESI = (ESP);
  /* 10a428c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a428c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a428c6 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a428ccu);
  /* 10a428cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a428cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a428d1 call 0x10a43210 */
  push32(0x10a428d6u); f_10a43210();
  /* 10a428d6 mov esi, esp */
  ESI = (ESP);
  /* 10a428d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a428da call dword ptr [0x10a73434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73434))), 0x10a428e0u);
  /* 10a428e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a428e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a428e5 call 0x10a43210 */
  push32(0x10a428eau); f_10a43210();
  /* 10a428ea mov esi, esp */
  ESI = (ESP);
  /* 10a428ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10a428ee push 0x10a70430 */
  push32((uint32_t)(0x10a70430u));
  /* 10a428f3 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a428f9u);
  /* 10a428f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a428fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a428fe call 0x10a43210 */
  push32(0x10a42903u); f_10a43210();
  /* 10a42903 mov esi, esp */
  ESI = (ESP);
  /* 10a42905 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42907 call dword ptr [0x10a7342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7342c))), 0x10a4290du);
  /* 10a4290d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42910 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42912 call 0x10a43210 */
  push32(0x10a42917u); f_10a43210();
  /* 10a42917 mov esi, esp */
  ESI = (ESP);
  /* 10a42919 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4291b call dword ptr [0x10a73434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73434))), 0x10a42921u);
  /* 10a42921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42924 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42926 call 0x10a43210 */
  push32(0x10a4292bu); f_10a43210();
  /* 10a4292b mov esi, esp */
  ESI = (ESP);
  /* 10a4292d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4292f push 0x10a70430 */
  push32((uint32_t)(0x10a70430u));
  /* 10a42934 call dword ptr [0x10a7340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7340c))), 0x10a4293au);
  /* 10a4293a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4293d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4293f call 0x10a43210 */
  push32(0x10a42944u); f_10a43210();
  /* 10a42944 mov esi, esp */
  ESI = (ESP);
  /* 10a42946 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a42948 call dword ptr [0x10a7342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7342c))), 0x10a4294eu);
  /* 10a4294e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42953 call 0x10a43210 */
  push32(0x10a42958u); f_10a43210();
L_10a42958:;
  /* 10a42958 mov esi, esp */
  ESI = (ESP);
  /* 10a4295a push 3 */
  push32((uint32_t)(0x3u));
  /* 10a4295c call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a42962u);
  /* 10a42962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42965 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42967 call 0x10a43210 */
  push32(0x10a4296cu); f_10a43210();
  /* 10a4296c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a42971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42973 je 0x10a429b8 */
  if (C.zf) goto L_10a429b8;
  /* 10a42975 mov esi, esp */
  ESI = (ESP);
  /* 10a42977 call dword ptr [0x10a73428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73428))), 0x10a4297du);
  /* 10a4297d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4297f call 0x10a43210 */
  push32(0x10a42984u); f_10a43210();
  /* 10a42984 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42989 jle 0x10a429b8 */
  if ((C.zf||C.sf!=C.of)) goto L_10a429b8;
  /* 10a4298b mov esi, esp */
  ESI = (ESP);
  /* 10a4298d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4298f push 3 */
  push32((uint32_t)(0x3u));
  /* 10a42991 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a42997u);
  /* 10a42997 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4299a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4299c call 0x10a43210 */
  push32(0x10a429a1u); f_10a43210();
  /* 10a429a1 mov esi, esp */
  ESI = (ESP);
  /* 10a429a3 push 0x10a6b190 */
  push32((uint32_t)(0x10a6b190u));
  /* 10a429a8 call dword ptr [0x10a733fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733fc))), 0x10a429aeu);
  /* 10a429ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a429b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a429b3 call 0x10a43210 */
  push32(0x10a429b8u); f_10a43210();
L_10a429b8:;
  /* 10a429b8 mov esi, esp */
  ESI = (ESP);
  /* 10a429ba push 4 */
  push32((uint32_t)(0x4u));
  /* 10a429bc call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a429c2u);
  /* 10a429c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a429c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a429c7 call 0x10a43210 */
  push32(0x10a429ccu); f_10a43210();
  /* 10a429cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a429d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a429d3 je 0x10a42a18 */
  if (C.zf) goto L_10a42a18;
  /* 10a429d5 mov esi, esp */
  ESI = (ESP);
  /* 10a429d7 call dword ptr [0x10a73428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73428))), 0x10a429ddu);
  /* 10a429dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a429df call 0x10a43210 */
  push32(0x10a429e4u); f_10a43210();
  /* 10a429e4 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a429e9 jle 0x10a42a18 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42a18;
  /* 10a429eb mov esi, esp */
  ESI = (ESP);
  /* 10a429ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10a429ef push 4 */
  push32((uint32_t)(0x4u));
  /* 10a429f1 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a429f7u);
  /* 10a429f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a429fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a429fc call 0x10a43210 */
  push32(0x10a42a01u); f_10a43210();
  /* 10a42a01 mov esi, esp */
  ESI = (ESP);
  /* 10a42a03 push 0x10a6b188 */
  push32((uint32_t)(0x10a6b188u));
  /* 10a42a08 call dword ptr [0x10a733fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733fc))), 0x10a42a0eu);
  /* 10a42a0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42a11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42a13 call 0x10a43210 */
  push32(0x10a42a18u); f_10a43210();
L_10a42a18:;
  /* 10a42a18 mov esi, esp */
  ESI = (ESP);
  /* 10a42a1a push 5 */
  push32((uint32_t)(0x5u));
  /* 10a42a1c call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a42a22u);
  /* 10a42a22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42a25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42a27 call 0x10a43210 */
  push32(0x10a42a2cu); f_10a43210();
  /* 10a42a2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a42a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42a33 je 0x10a42a87 */
  if (C.zf) goto L_10a42a87;
  /* 10a42a35 mov esi, esp */
  ESI = (ESP);
  /* 10a42a37 call dword ptr [0x10a73428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73428))), 0x10a42a3du);
  /* 10a42a3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42a3f call 0x10a43210 */
  push32(0x10a42a44u); f_10a43210();
  /* 10a42a44 cmp eax, 0x30d40 */
  { uint32_t _a=(EAX),_b=(0x30d40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42a49 jle 0x10a42a87 */
  if ((C.zf||C.sf!=C.of)) goto L_10a42a87;
  /* 10a42a4b mov esi, esp */
  ESI = (ESP);
  /* 10a42a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42a4f push 5 */
  push32((uint32_t)(0x5u));
  /* 10a42a51 call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a42a57u);
  /* 10a42a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42a5c call 0x10a43210 */
  push32(0x10a42a61u); f_10a43210();
  /* 10a42a61 mov esi, esp */
  ESI = (ESP);
  /* 10a42a63 push 0x10a6b180 */
  push32((uint32_t)(0x10a6b180u));
  /* 10a42a68 call dword ptr [0x10a733fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733fc))), 0x10a42a6eu);
  /* 10a42a6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42a71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42a73 call 0x10a43210 */
  push32(0x10a42a78u); f_10a43210();
  /* 10a42a78 mov esi, esp */
  ESI = (ESP);
  /* 10a42a7a call dword ptr [0x10a7343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7343c))), 0x10a42a80u);
  /* 10a42a80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42a82 call 0x10a43210 */
  push32(0x10a42a87u); f_10a43210();
L_10a42a87:;
  /* 10a42a87 mov esi, esp */
  ESI = (ESP);
  /* 10a42a89 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a42a8b call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a42a91u);
  /* 10a42a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42a96 call 0x10a43210 */
  push32(0x10a42a9bu); f_10a43210();
  /* 10a42a9b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a42aa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42aa2 je 0x10a42b28 */
  if (C.zf) goto L_10a42b28;
  /* 10a42aa8 push 0x10a703f0 */
  push32((uint32_t)(0x10a703f0u));
  /* 10a42aad call 0x10a41005 */
  push32(0x10a42ab2u); f_10a41005();
  /* 10a42ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42ab7 jne 0x10a42b28 */
  if (!C.zf) goto L_10a42b28;
  /* 10a42ab9 mov esi, esp */
  ESI = (ESP);
  /* 10a42abb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42abd push 5 */
  push32((uint32_t)(0x5u));
  /* 10a42abf call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a42ac5u);
  /* 10a42ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42ac8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42aca call 0x10a43210 */
  push32(0x10a42acfu); f_10a43210();
  /* 10a42acf mov esi, esp */
  ESI = (ESP);
  /* 10a42ad1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a42ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42ad5 call dword ptr [0x10a73440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73440))), 0x10a42adbu);
  /* 10a42adb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42ade cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42ae0 call 0x10a43210 */
  push32(0x10a42ae5u); f_10a43210();
  /* 10a42ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42ae7 jne 0x10a42b02 */
  if (!C.zf) goto L_10a42b02;
  /* 10a42ae9 mov esi, esp */
  ESI = (ESP);
  /* 10a42aeb push 0x10a6b174 */
  push32((uint32_t)(0x10a6b174u));
  /* 10a42af0 call dword ptr [0x10a733fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733fc))), 0x10a42af6u);
  /* 10a42af6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42af9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42afb call 0x10a43210 */
  push32(0x10a42b00u); f_10a43210();
  /* 10a42b00 jmp 0x10a42b19 */
  goto L_10a42b19;
L_10a42b02:;
  /* 10a42b02 mov esi, esp */
  ESI = (ESP);
  /* 10a42b04 push 0x10a6b16c */
  push32((uint32_t)(0x10a6b16cu));
  /* 10a42b09 call dword ptr [0x10a733fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733fc))), 0x10a42b0fu);
  /* 10a42b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42b12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42b14 call 0x10a43210 */
  push32(0x10a42b19u); f_10a43210();
L_10a42b19:;
  /* 10a42b19 mov esi, esp */
  ESI = (ESP);
  /* 10a42b1b call dword ptr [0x10a7343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7343c))), 0x10a42b21u);
  /* 10a42b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42b23 call 0x10a43210 */
  push32(0x10a42b28u); f_10a43210();
L_10a42b28:;
  /* 10a42b28 mov esi, esp */
  ESI = (ESP);
  /* 10a42b2a push 7 */
  push32((uint32_t)(0x7u));
  /* 10a42b2c call dword ptr [0x10a733f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f8))), 0x10a42b32u);
  /* 10a42b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42b35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42b37 call 0x10a43210 */
  push32(0x10a42b3cu); f_10a43210();
  /* 10a42b3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a42b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42b43 je 0x10a42b92 */
  if (C.zf) goto L_10a42b92;
  /* 10a42b45 push 0x10a704c0 */
  push32((uint32_t)(0x10a704c0u));
  /* 10a42b4a call 0x10a41005 */
  push32(0x10a42b4fu); f_10a41005();
  /* 10a42b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42b52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a42b54 jne 0x10a42b92 */
  if (!C.zf) goto L_10a42b92;
  /* 10a42b56 mov esi, esp */
  ESI = (ESP);
  /* 10a42b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a42b5a push 7 */
  push32((uint32_t)(0x7u));
  /* 10a42b5c call dword ptr [0x10a733f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f0))), 0x10a42b62u);
  /* 10a42b62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42b65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42b67 call 0x10a43210 */
  push32(0x10a42b6cu); f_10a43210();
  /* 10a42b6c mov esi, esp */
  ESI = (ESP);
  /* 10a42b6e push 0x10a6b164 */
  push32((uint32_t)(0x10a6b164u));
  /* 10a42b73 call dword ptr [0x10a733fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733fc))), 0x10a42b79u);
  /* 10a42b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42b7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42b7e call 0x10a43210 */
  push32(0x10a42b83u); f_10a43210();
  /* 10a42b83 mov esi, esp */
  ESI = (ESP);
  /* 10a42b85 call dword ptr [0x10a73438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73438))), 0x10a42b8bu);
  /* 10a42b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42b8d call 0x10a43210 */
  push32(0x10a42b92u); f_10a43210();
L_10a42b92:;
  /* 10a42b92 pop edi */
  EDI = (pop32());
  /* 10a42b93 pop esi */
  ESI = (pop32());
  /* 10a42b94 pop ebx */
  EBX = (pop32());
  /* 10a42b95 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a42b98 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a42b9a call 0x10a43210 */
  push32(0x10a42b9fu); f_10a43210();
  /* 10a42b9f mov esp, ebp */
  ESP = (EBP);
  /* 10a42ba1 pop ebp */
  EBP = (pop32());
  /* 10a42ba2 ret  */
  ESPCHK(0x10a415e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003120 @ 0x10a43120 (63 bytes, 26 insns) */
void f_10a43120(void) {
  FTRACE(0x10a43120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43120 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43121 mov ebp, esp */
  EBP = (ESP);
  /* 10a43123 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a43126 push ebx */
  push32((uint32_t)(EBX));
  /* 10a43127 push esi */
  push32((uint32_t)(ESI));
  /* 10a43128 push edi */
  push32((uint32_t)(EDI));
  /* 10a43129 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10a4312c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10a43131 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10a43136 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a43138 mov esi, esp */
  ESI = (ESP);
  /* 10a4313a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4313d push eax */
  push32((uint32_t)(EAX));
  /* 10a4313e call dword ptr [0x10a733f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a733f4))), 0x10a43144u);
  /* 10a43144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43147 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43149 call 0x10a43210 */
  push32(0x10a4314eu); f_10a43210();
  /* 10a4314e pop edi */
  EDI = (pop32());
  /* 10a4314f pop esi */
  ESI = (pop32());
  /* 10a43150 pop ebx */
  EBX = (pop32());
  /* 10a43151 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43154 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43156 call 0x10a43210 */
  push32(0x10a4315bu); f_10a43210();
  /* 10a4315b mov esp, ebp */
  ESP = (EBP);
  /* 10a4315d pop ebp */
  EBP = (pop32());
  /* 10a4315e ret  */
  ESPCHK(0x10a43120u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10a43210 (56 bytes, 28 insns) */
void f_10a43210(void) {
  FTRACE(0x10a43210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43210 jne 0x10a43213 */
  if (!C.zf) goto L_10a43213;
  /* 10a43212 ret  */
  ESPCHK(0x10a43210u, _esp0);
  ESP += 4; return;
L_10a43213:;
  /* 10a43213 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43214 mov ebp, esp */
  EBP = (ESP);
  /* 10a43216 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a43219 push eax */
  push32((uint32_t)(EAX));
  /* 10a4321a push edx */
  push32((uint32_t)(EDX));
  /* 10a4321b push ebx */
  push32((uint32_t)(EBX));
  /* 10a4321c push esi */
  push32((uint32_t)(ESI));
  /* 10a4321d push edi */
  push32((uint32_t)(EDI));
  /* 10a4321e push 0x10a6b698 */
  push32((uint32_t)(0x10a6b698u));
  /* 10a43223 push 0x10a6b694 */
  push32((uint32_t)(0x10a6b694u));
  /* 10a43228 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10a4322a push 0x10a6b684 */
  push32((uint32_t)(0x10a6b684u));
  /* 10a4322f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a43231 call 0x10a435e0 */
  push32(0x10a43236u); f_10a435e0();
  /* 10a43236 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43239 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4323c jne 0x10a4323f */
  if (!C.zf) goto L_10a4323f;
  /* 10a4323e int3  */
  x86_unimpl("int3 @ 0x10a4323e");
L_10a4323f:;
  /* 10a4323f pop edi */
  EDI = (pop32());
  /* 10a43240 pop esi */
  ESI = (pop32());
  /* 10a43241 pop ebx */
  EBX = (pop32());
  /* 10a43242 pop edx */
  EDX = (pop32());
  /* 10a43243 pop eax */
  EAX = (pop32());
  /* 10a43244 mov esp, ebp */
  ESP = (EBP);
  /* 10a43246 pop ebp */
  EBP = (pop32());
  /* 10a43247 ret  */
  ESPCHK(0x10a43210u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x10a43250 (313 bytes, 78 insns) */
void f_10a43250(void) {
  FTRACE(0x10a43250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43250 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43251 mov ebp, esp */
  EBP = (ESP);
  /* 10a43253 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43257 jne 0x10a43317 */
  if (!C.zf) goto L_10a43317;
  /* 10a4325d call dword ptr [0x10a732dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732dc))), 0x10a43263u);
  /* 10a43263 mov dword ptr [0x10a70600], eax */
  w32((uint32_t)(0x10a70600), (EAX));
  /* 10a43268 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4326a call 0x10a46d10 */
  push32(0x10a4326fu); f_10a46d10();
  /* 10a4326f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a43274 jne 0x10a4327d */
  if (!C.zf) goto L_10a4327d;
  /* 10a43276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a43278 jmp 0x10a43385 */
  goto L_10a43385;
L_10a4327d:;
  /* 10a4327d mov eax, dword ptr [0x10a70600] */
  EAX = (r32((uint32_t)(0x10a70600)));
  /* 10a43282 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10a43285 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4328a mov dword ptr [0x10a7060c], eax */
  w32((uint32_t)(0x10a7060c), (EAX));
  /* 10a4328f mov ecx, dword ptr [0x10a70600] */
  ECX = (r32((uint32_t)(0x10a70600)));
  /* 10a43295 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4329b mov dword ptr [0x10a70608], ecx */
  w32((uint32_t)(0x10a70608), (ECX));
  /* 10a432a1 mov edx, dword ptr [0x10a70608] */
  EDX = (r32((uint32_t)(0x10a70608)));
  /* 10a432a7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a432aa add edx, dword ptr [0x10a7060c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a7060c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a432b0 mov dword ptr [0x10a70604], edx */
  w32((uint32_t)(0x10a70604), (EDX));
  /* 10a432b6 mov eax, dword ptr [0x10a70600] */
  EAX = (r32((uint32_t)(0x10a70600)));
  /* 10a432bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a432be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a432c3 mov dword ptr [0x10a70600], eax */
  w32((uint32_t)(0x10a70600), (EAX));
  /* 10a432c8 call 0x10a43e80 */
  push32(0x10a432cdu); f_10a43e80();
  /* 10a432cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a432cf jne 0x10a432dd */
  if (!C.zf) goto L_10a432dd;
  /* 10a432d1 call 0x10a46d60 */
  push32(0x10a432d6u); f_10a46d60();
  /* 10a432d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a432d8 jmp 0x10a43385 */
  goto L_10a43385;
L_10a432dd:;
  /* 10a432dd call dword ptr [0x10a732d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732d8))), 0x10a432e3u);
  /* 10a432e3 mov dword ptr [0x10a7214c], eax */
  w32((uint32_t)(0x10a7214c), (EAX));
  /* 10a432e8 call 0x10a46af0 */
  push32(0x10a432edu); f_10a46af0();
  /* 10a432ed mov dword ptr [0x10a705e8], eax */
  w32((uint32_t)(0x10a705e8), (EAX));
  /* 10a432f2 call 0x10a44130 */
  push32(0x10a432f7u); f_10a44130();
  /* 10a432f7 call 0x10a465e0 */
  push32(0x10a432fcu); f_10a465e0();
  /* 10a432fc call 0x10a46490 */
  push32(0x10a43301u); f_10a46490();
  /* 10a43301 call 0x10a43c80 */
  push32(0x10a43306u); f_10a43c80();
  /* 10a43306 mov ecx, dword ptr [0x10a705e4] */
  ECX = (r32((uint32_t)(0x10a705e4)));
  /* 10a4330c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4330f mov dword ptr [0x10a705e4], ecx */
  w32((uint32_t)(0x10a705e4), (ECX));
  /* 10a43315 jmp 0x10a43380 */
  goto L_10a43380;
L_10a43317:;
  /* 10a43317 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4331b jne 0x10a43370 */
  if (!C.zf) goto L_10a43370;
  /* 10a4331d cmp dword ptr [0x10a705e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a705e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43324 jle 0x10a4336a */
  if ((C.zf||C.sf!=C.of)) goto L_10a4336a;
  /* 10a43326 mov edx, dword ptr [0x10a705e4] */
  EDX = (r32((uint32_t)(0x10a705e4)));
  /* 10a4332c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4332f mov dword ptr [0x10a705e4], edx */
  w32((uint32_t)(0x10a705e4), (EDX));
  /* 10a43335 cmp dword ptr [0x10a70638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4333c jne 0x10a43343 */
  if (!C.zf) goto L_10a43343;
  /* 10a4333e call 0x10a43d00 */
  push32(0x10a43343u); f_10a43d00();
L_10a43343:;
  /* 10a43343 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a43345 call 0x10a45a30 */
  push32(0x10a4334au); f_10a45a30();
  /* 10a4334a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4334d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a43350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a43352 je 0x10a43359 */
  if (C.zf) goto L_10a43359;
  /* 10a43354 call 0x10a46340 */
  push32(0x10a43359u); f_10a46340();
L_10a43359:;
  /* 10a43359 call 0x10a44460 */
  push32(0x10a4335eu); f_10a44460();
  /* 10a4335e call 0x10a43f10 */
  push32(0x10a43363u); f_10a43f10();
  /* 10a43363 call 0x10a46d60 */
  push32(0x10a43368u); f_10a46d60();
  /* 10a43368 jmp 0x10a4336e */
  goto L_10a4336e;
L_10a4336a:;
  /* 10a4336a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4336c jmp 0x10a43385 */
  goto L_10a43385;
L_10a4336e:;
  /* 10a4336e jmp 0x10a43380 */
  goto L_10a43380;
L_10a43370:;
  /* 10a43370 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43374 jne 0x10a43380 */
  if (!C.zf) goto L_10a43380;
  /* 10a43376 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a43378 call 0x10a44000 */
  push32(0x10a4337du); f_10a44000();
  /* 10a4337d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a43380:;
  /* 10a43380 mov eax, 1 */
  EAX = (0x1u);
L_10a43385:;
  /* 10a43385 pop ebp */
  EBP = (pop32());
  /* 10a43386 ret 0xc */
  ESPCHK(0x10a43250u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10a43390 (243 bytes, 86 insns) */
void f_10a43390(void) {
  FTRACE(0x10a43390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43390 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43391 mov ebp, esp */
  EBP = (ESP);
  /* 10a43393 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43394 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a4339b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4339f jne 0x10a433b1 */
  if (!C.zf) goto L_10a433b1;
  /* 10a433a1 cmp dword ptr [0x10a705e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a705e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a433a8 jne 0x10a433b1 */
  if (!C.zf) goto L_10a433b1;
  /* 10a433aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a433ac jmp 0x10a4347d */
  goto L_10a4347d;
L_10a433b1:;
  /* 10a433b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a433b5 je 0x10a433bd */
  if (C.zf) goto L_10a433bd;
  /* 10a433b7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a433bb jne 0x10a433ff */
  if (!C.zf) goto L_10a433ff;
L_10a433bd:;
  /* 10a433bd cmp dword ptr [0x10a7215c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7215c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a433c4 je 0x10a433db */
  if (C.zf) goto L_10a433db;
  /* 10a433c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a433c9 push eax */
  push32((uint32_t)(EAX));
  /* 10a433ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a433cd push ecx */
  push32((uint32_t)(ECX));
  /* 10a433ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a433d1 push edx */
  push32((uint32_t)(EDX));
  /* 10a433d2 call dword ptr [0x10a7215c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7215c))), 0x10a433d8u);
  /* 10a433d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a433db:;
  /* 10a433db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a433df je 0x10a433f5 */
  if (C.zf) goto L_10a433f5;
  /* 10a433e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a433e4 push eax */
  push32((uint32_t)(EAX));
  /* 10a433e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a433e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a433e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a433ec push edx */
  push32((uint32_t)(EDX));
  /* 10a433ed call 0x10a43250 */
  push32(0x10a433f2u); f_10a43250();
  /* 10a433f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a433f5:;
  /* 10a433f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a433f9 jne 0x10a433ff */
  if (!C.zf) goto L_10a433ff;
  /* 10a433fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a433fd jmp 0x10a4347d */
  goto L_10a4347d;
L_10a433ff:;
  /* 10a433ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a43402 push eax */
  push32((uint32_t)(EAX));
  /* 10a43403 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a43406 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43407 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4340a push edx */
  push32((uint32_t)(EDX));
  /* 10a4340b call 0x10a4100f */
  push32(0x10a43410u); f_10a4100f();
  /* 10a43410 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a43413 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43417 jne 0x10a4342e */
  if (!C.zf) goto L_10a4342e;
  /* 10a43419 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4341d jne 0x10a4342e */
  if (!C.zf) goto L_10a4342e;
  /* 10a4341f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a43422 push eax */
  push32((uint32_t)(EAX));
  /* 10a43423 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a43425 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43428 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43429 call 0x10a43250 */
  push32(0x10a4342eu); f_10a43250();
L_10a4342e:;
  /* 10a4342e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43432 je 0x10a4343a */
  if (C.zf) goto L_10a4343a;
  /* 10a43434 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43438 jne 0x10a4347a */
  if (!C.zf) goto L_10a4347a;
L_10a4343a:;
  /* 10a4343a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4343d push edx */
  push32((uint32_t)(EDX));
  /* 10a4343e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a43441 push eax */
  push32((uint32_t)(EAX));
  /* 10a43442 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43445 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43446 call 0x10a43250 */
  push32(0x10a4344bu); f_10a43250();
  /* 10a4344b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4344d jne 0x10a43456 */
  if (!C.zf) goto L_10a43456;
  /* 10a4344f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a43456:;
  /* 10a43456 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4345a je 0x10a4347a */
  if (C.zf) goto L_10a4347a;
  /* 10a4345c cmp dword ptr [0x10a7215c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7215c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43463 je 0x10a4347a */
  if (C.zf) goto L_10a4347a;
  /* 10a43465 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a43468 push edx */
  push32((uint32_t)(EDX));
  /* 10a43469 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4346c push eax */
  push32((uint32_t)(EAX));
  /* 10a4346d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43470 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43471 call dword ptr [0x10a7215c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7215c))), 0x10a43477u);
  /* 10a43477 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4347a:;
  /* 10a4347a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a4347d:;
  /* 10a4347d mov esp, ebp */
  ESP = (EBP);
  /* 10a4347f pop ebp */
  EBP = (pop32());
  /* 10a43480 ret 0xc */
  ESPCHK(0x10a43390u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10a43490 (58 bytes, 18 insns) */
void f_10a43490(void) {
  FTRACE(0x10a43490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43490 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43491 mov ebp, esp */
  EBP = (ESP);
  /* 10a43493 cmp dword ptr [0x10a705f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4349a je 0x10a434ae */
  if (C.zf) goto L_10a434ae;
  /* 10a4349c cmp dword ptr [0x10a705f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a434a3 jne 0x10a434b3 */
  if (!C.zf) goto L_10a434b3;
  /* 10a434a5 cmp dword ptr [0x10a705f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a434ac jne 0x10a434b3 */
  if (!C.zf) goto L_10a434b3;
L_10a434ae:;
  /* 10a434ae call 0x10a46e00 */
  push32(0x10a434b3u); f_10a46e00();
L_10a434b3:;
  /* 10a434b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a434b6 push eax */
  push32((uint32_t)(EAX));
  /* 10a434b7 call 0x10a46e50 */
  push32(0x10a434bcu); f_10a46e50();
  /* 10a434bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a434bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10a434c4 call dword ptr [0x10a6ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a6ea30))), 0x10a434cau);
  /* 10a434ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a434cd pop ebp */
  EBP = (pop32());
  /* 10a434ce ret  */
  ESPCHK(0x10a43490u, _esp0);
  ESP += 4; return;
}

/* FUN_100034d0 @ 0x10a434d0 (11 bytes, 5 insns) */
void f_10a434d0(void) {
  FTRACE(0x10a434d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a434d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a434d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a434d3 call dword ptr [0x10a732e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732e0))), 0x10a434d9u);
  /* 10a434d9 pop ebp */
  EBP = (pop32());
  /* 10a434da ret  */
  ESPCHK(0x10a434d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034e0 @ 0x10a434e0 (87 bytes, 30 insns) */
void f_10a434e0(void) {
  FTRACE(0x10a434e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a434e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a434e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a434e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a434e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a434e8 jl 0x10a434f0 */
  if ((C.sf!=C.of)) goto L_10a434f0;
  /* 10a434ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a434ee jl 0x10a434f5 */
  if ((C.sf!=C.of)) goto L_10a434f5;
L_10a434f0:;
  /* 10a434f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a434f3 jmp 0x10a43533 */
  goto L_10a43533;
L_10a434f5:;
  /* 10a434f5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a434f9 jne 0x10a43507 */
  if (!C.zf) goto L_10a43507;
  /* 10a434fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a434fe mov eax, dword ptr [eax*4 + 0x10a6ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10a6ea38)));
  /* 10a43505 jmp 0x10a43533 */
  goto L_10a43533;
L_10a43507:;
  /* 10a43507 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4350a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4350d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4350f je 0x10a43516 */
  if (C.zf) goto L_10a43516;
  /* 10a43511 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a43514 jmp 0x10a43533 */
  goto L_10a43533;
L_10a43516:;
  /* 10a43516 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43519 mov eax, dword ptr [edx*4 + 0x10a6ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a6ea38)));
  /* 10a43520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a43523 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43526 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a43529 mov dword ptr [ecx*4 + 0x10a6ea38], edx */
  w32((uint32_t)(ECX*4 + 0x10a6ea38), (EDX));
  /* 10a43530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a43533:;
  /* 10a43533 mov esp, ebp */
  ESP = (EBP);
  /* 10a43535 pop ebp */
  EBP = (pop32());
  /* 10a43536 ret  */
  ESPCHK(0x10a434e0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10a43540 (126 bytes, 38 insns) */
void f_10a43540(void) {
  FTRACE(0x10a43540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43540 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43541 mov ebp, esp */
  EBP = (ESP);
  /* 10a43543 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43544 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43548 jl 0x10a43550 */
  if ((C.sf!=C.of)) goto L_10a43550;
  /* 10a4354a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4354e jl 0x10a43557 */
  if ((C.sf!=C.of)) goto L_10a43557;
L_10a43550:;
  /* 10a43550 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10a43555 jmp 0x10a435ba */
  goto L_10a435ba;
L_10a43557:;
  /* 10a43557 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4355b jne 0x10a43569 */
  if (!C.zf) goto L_10a43569;
  /* 10a4355d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43560 mov eax, dword ptr [eax*4 + 0x10a6ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10a6ea44)));
  /* 10a43567 jmp 0x10a435ba */
  goto L_10a435ba;
L_10a43569:;
  /* 10a43569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4356c mov edx, dword ptr [ecx*4 + 0x10a6ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6ea44)));
  /* 10a43573 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a43576 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4357a jne 0x10a43590 */
  if (!C.zf) goto L_10a43590;
  /* 10a4357c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10a4357e call dword ptr [0x10a732e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732e4))), 0x10a43584u);
  /* 10a43584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43587 mov dword ptr [ecx*4 + 0x10a6ea44], eax */
  w32((uint32_t)(ECX*4 + 0x10a6ea44), (EAX));
  /* 10a4358e jmp 0x10a435b7 */
  goto L_10a435b7;
L_10a43590:;
  /* 10a43590 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43594 jne 0x10a435aa */
  if (!C.zf) goto L_10a435aa;
  /* 10a43596 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a43598 call dword ptr [0x10a732e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732e4))), 0x10a4359eu);
  /* 10a4359e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a435a1 mov dword ptr [edx*4 + 0x10a6ea44], eax */
  w32((uint32_t)(EDX*4 + 0x10a6ea44), (EAX));
  /* 10a435a8 jmp 0x10a435b7 */
  goto L_10a435b7;
L_10a435aa:;
  /* 10a435aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a435ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a435b0 mov dword ptr [eax*4 + 0x10a6ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x10a6ea44), (ECX));
L_10a435b7:;
  /* 10a435b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a435ba:;
  /* 10a435ba mov esp, ebp */
  ESP = (EBP);
  /* 10a435bc pop ebp */
  EBP = (pop32());
  /* 10a435bd ret  */
  ESPCHK(0x10a43540u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c0 @ 0x10a435c0 (28 bytes, 11 insns) */
void f_10a435c0(void) {
  FTRACE(0x10a435c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a435c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a435c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a435c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a435c4 mov eax, dword ptr [0x10a72140] */
  EAX = (r32((uint32_t)(0x10a72140)));
  /* 10a435c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a435cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a435cf mov dword ptr [0x10a72140], ecx */
  w32((uint32_t)(0x10a72140), (ECX));
  /* 10a435d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a435d8 mov esp, ebp */
  ESP = (EBP);
  /* 10a435da pop ebp */
  EBP = (pop32());
  /* 10a435db ret  */
  ESPCHK(0x10a435c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e0 @ 0x10a435e0 (912 bytes, 248 insns) */
void f_10a435e0(void) {
  FTRACE(0x10a435e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a435e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a435e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a435e3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10a435e8 call 0x10a476c0 */
  push32(0x10a435edu); f_10a476c0();
  /* 10a435ed push edi */
  push32((uint32_t)(EDI));
  /* 10a435ee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10a435f5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10a435fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a435fc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10a43602 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a43604 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10a43606 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10a43607 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10a4360e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10a43613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a43615 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10a4361b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a4361d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10a4361f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10a43620 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10a43627 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10a4362c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4362e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10a43634 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a43636 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10a43638 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10a43639 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10a4363c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10a43642 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43646 jl 0x10a4364e */
  if ((C.sf!=C.of)) goto L_10a4364e;
  /* 10a43648 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4364c jl 0x10a43656 */
  if ((C.sf!=C.of)) goto L_10a43656;
L_10a4364e:;
  /* 10a4364e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a43651 jmp 0x10a4396b */
  goto L_10a4396b;
L_10a43656:;
  /* 10a43656 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4365a jne 0x10a43700 */
  if (!C.zf) goto L_10a43700;
  /* 10a43660 push 0x10a6ea34 */
  push32((uint32_t)(0x10a6ea34u));
  /* 10a43665 call dword ptr [0x10a732fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732fc))), 0x10a4366bu);
  /* 10a4366b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4366d jle 0x10a43700 */
  if ((C.zf||C.sf!=C.of)) goto L_10a43700;
  /* 10a43673 cmp dword ptr [0x10a705f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4367a jne 0x10a436be */
  if (!C.zf) goto L_10a436be;
  /* 10a4367c push 0x10a6b840 */
  push32((uint32_t)(0x10a6b840u));
  /* 10a43681 call dword ptr [0x10a732f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732f8))), 0x10a43687u);
  /* 10a43687 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10a4368d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43694 je 0x10a436b6 */
  if (C.zf) goto L_10a436b6;
  /* 10a43696 push 0x10a6b834 */
  push32((uint32_t)(0x10a6b834u));
  /* 10a4369b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10a436a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a436a2 call dword ptr [0x10a732f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732f4))), 0x10a436a8u);
  /* 10a436a8 mov dword ptr [0x10a705f8], eax */
  w32((uint32_t)(0x10a705f8), (EAX));
  /* 10a436ad cmp dword ptr [0x10a705f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a436b4 jne 0x10a436be */
  if (!C.zf) goto L_10a436be;
L_10a436b6:;
  /* 10a436b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a436b9 jmp 0x10a4396b */
  goto L_10a4396b;
L_10a436be:;
  /* 10a436be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a436c1 push edx */
  push32((uint32_t)(EDX));
  /* 10a436c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a436c5 push eax */
  push32((uint32_t)(EAX));
  /* 10a436c6 push 0x10a6b800 */
  push32((uint32_t)(0x10a6b800u));
  /* 10a436cb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10a436d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a436d2 call dword ptr [0x10a705f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a705f8))), 0x10a436d8u);
  /* 10a436d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a436db lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a436e1 push edx */
  push32((uint32_t)(EDX));
  /* 10a436e2 call dword ptr [0x10a732f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732f0))), 0x10a436e8u);
  /* 10a436e8 push 0x10a6ea34 */
  push32((uint32_t)(0x10a6ea34u));
  /* 10a436ed call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a436f3u);
  /* 10a436f3 call 0x10a434d0 */
  push32(0x10a436f8u); f_10a434d0();
  /* 10a436f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a436fb jmp 0x10a4396b */
  goto L_10a4396b;
L_10a43700:;
  /* 10a43700 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43704 je 0x10a4373d */
  if (C.zf) goto L_10a4373d;
  /* 10a43706 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10a4370c push eax */
  push32((uint32_t)(EAX));
  /* 10a4370d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a43710 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43711 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10a43716 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10a4371c push edx */
  push32((uint32_t)(EDX));
  /* 10a4371d call 0x10a475c0 */
  push32(0x10a43722u); f_10a475c0();
  /* 10a43722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a43727 jge 0x10a4373d */
  if ((C.sf==C.of)) goto L_10a4373d;
  /* 10a43729 push 0x10a6b7d4 */
  push32((uint32_t)(0x10a6b7d4u));
  /* 10a4372e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10a43734 push eax */
  push32((uint32_t)(EAX));
  /* 10a43735 call 0x10a474d0 */
  push32(0x10a4373au); f_10a474d0();
  /* 10a4373a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4373d:;
  /* 10a4373d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43741 jne 0x10a43775 */
  if (!C.zf) goto L_10a43775;
  /* 10a43743 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43747 je 0x10a43755 */
  if (C.zf) goto L_10a43755;
  /* 10a43749 mov dword ptr [ebp - 0x3028], 0x10a6b7c0 */
  w32((uint32_t)(EBP + -0x3028), (0x10a6b7c0u));
  /* 10a43753 jmp 0x10a4375f */
  goto L_10a4375f;
L_10a43755:;
  /* 10a43755 mov dword ptr [ebp - 0x3028], 0x10a6b7ac */
  w32((uint32_t)(EBP + -0x3028), (0x10a6b7acu));
L_10a4375f:;
  /* 10a4375f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10a43765 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43766 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10a4376c push edx */
  push32((uint32_t)(EDX));
  /* 10a4376d call 0x10a474d0 */
  push32(0x10a43772u); f_10a474d0();
  /* 10a43772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a43775:;
  /* 10a43775 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10a4377b push eax */
  push32((uint32_t)(EAX));
  /* 10a4377c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10a43782 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43783 call 0x10a474e0 */
  push32(0x10a43788u); f_10a474e0();
  /* 10a43788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4378b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4378f jne 0x10a437ca */
  if (!C.zf) goto L_10a437ca;
  /* 10a43791 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43794 mov eax, dword ptr [edx*4 + 0x10a6ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a6ea38)));
  /* 10a4379b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4379e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a437a0 je 0x10a437b6 */
  if (C.zf) goto L_10a437b6;
  /* 10a437a2 push 0x10a6b7a8 */
  push32((uint32_t)(0x10a6b7a8u));
  /* 10a437a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10a437ad push ecx */
  push32((uint32_t)(ECX));
  /* 10a437ae call 0x10a474e0 */
  push32(0x10a437b3u); f_10a474e0();
  /* 10a437b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a437b6:;
  /* 10a437b6 push 0x10a6b7a4 */
  push32((uint32_t)(0x10a6b7a4u));
  /* 10a437bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10a437c1 push edx */
  push32((uint32_t)(EDX));
  /* 10a437c2 call 0x10a474e0 */
  push32(0x10a437c7u); f_10a474e0();
  /* 10a437c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a437ca:;
  /* 10a437ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a437ce je 0x10a43812 */
  if (C.zf) goto L_10a43812;
  /* 10a437d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10a437d6 push eax */
  push32((uint32_t)(EAX));
  /* 10a437d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a437da push ecx */
  push32((uint32_t)(ECX));
  /* 10a437db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a437de push edx */
  push32((uint32_t)(EDX));
  /* 10a437df push 0x10a6b798 */
  push32((uint32_t)(0x10a6b798u));
  /* 10a437e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a437e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10a437ef push eax */
  push32((uint32_t)(EAX));
  /* 10a437f0 call 0x10a473d0 */
  push32(0x10a437f5u); f_10a473d0();
  /* 10a437f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a437f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a437fa jge 0x10a43810 */
  if ((C.sf==C.of)) goto L_10a43810;
  /* 10a437fc push 0x10a6b7d4 */
  push32((uint32_t)(0x10a6b7d4u));
  /* 10a43801 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10a43807 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43808 call 0x10a474d0 */
  push32(0x10a4380du); f_10a474d0();
  /* 10a4380d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a43810:;
  /* 10a43810 jmp 0x10a43828 */
  goto L_10a43828;
L_10a43812:;
  /* 10a43812 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10a43818 push edx */
  push32((uint32_t)(EDX));
  /* 10a43819 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10a4381f push eax */
  push32((uint32_t)(EAX));
  /* 10a43820 call 0x10a474d0 */
  push32(0x10a43825u); f_10a474d0();
  /* 10a43825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a43828:;
  /* 10a43828 cmp dword ptr [0x10a72140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a72140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4382f je 0x10a4386c */
  if (C.zf) goto L_10a4386c;
  /* 10a43831 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10a43837 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43838 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a4383e push edx */
  push32((uint32_t)(EDX));
  /* 10a4383f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43842 push eax */
  push32((uint32_t)(EAX));
  /* 10a43843 call dword ptr [0x10a72140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a72140))), 0x10a43849u);
  /* 10a43849 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4384c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4384e je 0x10a4386c */
  if (C.zf) goto L_10a4386c;
  /* 10a43850 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43854 jne 0x10a43861 */
  if (!C.zf) goto L_10a43861;
  /* 10a43856 push 0x10a6ea34 */
  push32((uint32_t)(0x10a6ea34u));
  /* 10a4385b call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a43861u);
L_10a43861:;
  /* 10a43861 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10a43867 jmp 0x10a4396b */
  goto L_10a4396b;
L_10a4386c:;
  /* 10a4386c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4386f mov edx, dword ptr [ecx*4 + 0x10a6ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6ea38)));
  /* 10a43876 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a43879 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4387b je 0x10a438bb */
  if (C.zf) goto L_10a438bb;
  /* 10a4387d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43880 cmp dword ptr [eax*4 + 0x10a6ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10a6ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43888 je 0x10a438bb */
  if (C.zf) goto L_10a438bb;
  /* 10a4388a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4388c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10a43892 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43893 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a43899 push edx */
  push32((uint32_t)(EDX));
  /* 10a4389a call 0x10a47350 */
  push32(0x10a4389fu); f_10a47350();
  /* 10a4389f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a438a2 push eax */
  push32((uint32_t)(EAX));
  /* 10a438a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10a438a9 push eax */
  push32((uint32_t)(EAX));
  /* 10a438aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a438ad mov edx, dword ptr [ecx*4 + 0x10a6ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6ea44)));
  /* 10a438b4 push edx */
  push32((uint32_t)(EDX));
  /* 10a438b5 call dword ptr [0x10a732e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732e8))), 0x10a438bbu);
L_10a438bb:;
  /* 10a438bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a438be mov ecx, dword ptr [eax*4 + 0x10a6ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a6ea38)));
  /* 10a438c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a438c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a438ca je 0x10a438d9 */
  if (C.zf) goto L_10a438d9;
  /* 10a438cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10a438d2 push edx */
  push32((uint32_t)(EDX));
  /* 10a438d3 call dword ptr [0x10a732f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732f0))), 0x10a438d9u);
L_10a438d9:;
  /* 10a438d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a438dc mov ecx, dword ptr [eax*4 + 0x10a6ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a6ea38)));
  /* 10a438e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a438e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a438e8 je 0x10a43958 */
  if (C.zf) goto L_10a43958;
  /* 10a438ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a438ee je 0x10a4390d */
  if (C.zf) goto L_10a4390d;
  /* 10a438f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a438f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10a438f8 push edx */
  push32((uint32_t)(EDX));
  /* 10a438f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a438fc push eax */
  push32((uint32_t)(EAX));
  /* 10a438fd call 0x10a47060 */
  push32(0x10a43902u); f_10a47060();
  /* 10a43902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43905 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10a4390b jmp 0x10a43917 */
  goto L_10a43917;
L_10a4390d:;
  /* 10a4390d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10a43917:;
  /* 10a43917 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10a4391d push ecx */
  push32((uint32_t)(ECX));
  /* 10a4391e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a43921 push edx */
  push32((uint32_t)(EDX));
  /* 10a43922 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10a43928 push eax */
  push32((uint32_t)(EAX));
  /* 10a43929 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4392c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4392d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43930 push edx */
  push32((uint32_t)(EDX));
  /* 10a43931 call 0x10a43970 */
  push32(0x10a43936u); f_10a43970();
  /* 10a43936 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43939 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10a4393f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43943 jne 0x10a43950 */
  if (!C.zf) goto L_10a43950;
  /* 10a43945 push 0x10a6ea34 */
  push32((uint32_t)(0x10a6ea34u));
  /* 10a4394a call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a43950u);
L_10a43950:;
  /* 10a43950 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10a43956 jmp 0x10a4396b */
  goto L_10a4396b;
L_10a43958:;
  /* 10a43958 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4395c jne 0x10a43969 */
  if (!C.zf) goto L_10a43969;
  /* 10a4395e push 0x10a6ea34 */
  push32((uint32_t)(0x10a6ea34u));
  /* 10a43963 call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a43969u);
L_10a43969:;
  /* 10a43969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4396b:;
  /* 10a4396b pop edi */
  EDI = (pop32());
  /* 10a4396c mov esp, ebp */
  ESP = (EBP);
  /* 10a4396e pop ebp */
  EBP = (pop32());
  /* 10a4396f ret  */
  ESPCHK(0x10a435e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003970 @ 0x10a43970 (780 bytes, 197 insns) */
void f_10a43970(void) {
  FTRACE(0x10a43970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43970 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43971 mov ebp, esp */
  EBP = (ESP);
  /* 10a43973 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10a43978 call 0x10a476c0 */
  push32(0x10a4397du); f_10a476c0();
L_10a4397d:;
  /* 10a4397d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43981 jne 0x10a439a8 */
  if (!C.zf) goto L_10a439a8;
  /* 10a43983 push 0x10a6b990 */
  push32((uint32_t)(0x10a6b990u));
  /* 10a43988 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4398a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10a4398f push 0x10a6b984 */
  push32((uint32_t)(0x10a6b984u));
  /* 10a43994 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a43996 call 0x10a435e0 */
  push32(0x10a4399bu); f_10a435e0();
  /* 10a4399b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4399e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a439a1 jne 0x10a439a8 */
  if (!C.zf) goto L_10a439a8;
  /* 10a439a3 call 0x10a434d0 */
  push32(0x10a439a8u); f_10a434d0();
L_10a439a8:;
  /* 10a439a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a439aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a439ac jne 0x10a4397d */
  if (!C.zf) goto L_10a4397d;
  /* 10a439ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10a439b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10a439b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a439ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a439bc call dword ptr [0x10a73300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73300))), 0x10a439c2u);
  /* 10a439c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a439c4 jne 0x10a439da */
  if (!C.zf) goto L_10a439da;
  /* 10a439c6 push 0x10a6b96c */
  push32((uint32_t)(0x10a6b96cu));
  /* 10a439cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10a439d1 push edx */
  push32((uint32_t)(EDX));
  /* 10a439d2 call 0x10a474d0 */
  push32(0x10a439d7u); f_10a474d0();
  /* 10a439d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a439da:;
  /* 10a439da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10a439e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a439e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a439e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a439e7 call 0x10a47350 */
  push32(0x10a439ecu); f_10a47350();
  /* 10a439ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a439ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a439f2 jbe 0x10a43a1d */
  if ((C.cf||C.zf)) goto L_10a43a1d;
  /* 10a439f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a439f7 push edx */
  push32((uint32_t)(EDX));
  /* 10a439f8 call 0x10a47350 */
  push32(0x10a439fdu); f_10a47350();
  /* 10a439fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43a00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43a03 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10a43a07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a43a0a push 3 */
  push32((uint32_t)(0x3u));
  /* 10a43a0c push 0x10a6b968 */
  push32((uint32_t)(0x10a6b968u));
  /* 10a43a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43a14 push eax */
  push32((uint32_t)(EAX));
  /* 10a43a15 call 0x10a47d40 */
  push32(0x10a43a1au); f_10a47d40();
  /* 10a43a1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a43a1d:;
  /* 10a43a1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a43a20 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10a43a26 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43a2d je 0x10a43a78 */
  if (C.zf) goto L_10a43a78;
  /* 10a43a2f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a43a35 push edx */
  push32((uint32_t)(EDX));
  /* 10a43a36 call 0x10a47350 */
  push32(0x10a43a3bu); f_10a47350();
  /* 10a43a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43a3e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43a41 jbe 0x10a43a78 */
  if ((C.cf||C.zf)) goto L_10a43a78;
  /* 10a43a43 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a43a49 push eax */
  push32((uint32_t)(EAX));
  /* 10a43a4a call 0x10a47350 */
  push32(0x10a43a4fu); f_10a47350();
  /* 10a43a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43a52 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a43a58 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10a43a5c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10a43a62 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a43a64 push 0x10a6b968 */
  push32((uint32_t)(0x10a6b968u));
  /* 10a43a69 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a43a6f push eax */
  push32((uint32_t)(EAX));
  /* 10a43a70 call 0x10a47d40 */
  push32(0x10a43a75u); f_10a47d40();
  /* 10a43a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a43a78:;
  /* 10a43a78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43a7c jne 0x10a43a8a */
  if (!C.zf) goto L_10a43a8a;
  /* 10a43a7e mov dword ptr [ebp - 0x1114], 0x10a6b8f4 */
  w32((uint32_t)(EBP + -0x1114), (0x10a6b8f4u));
  /* 10a43a88 jmp 0x10a43a94 */
  goto L_10a43a94;
L_10a43a8a:;
  /* 10a43a8a mov dword ptr [ebp - 0x1114], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x1114), (0x10a6b694u));
L_10a43a94:;
  /* 10a43a94 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a43a97 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a43a9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a43a9c je 0x10a43aa9 */
  if (C.zf) goto L_10a43aa9;
  /* 10a43a9e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a43aa1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10a43aa7 jmp 0x10a43ab3 */
  goto L_10a43ab3;
L_10a43aa9:;
  /* 10a43aa9 mov dword ptr [ebp - 0x1118], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x1118), (0x10a6b694u));
L_10a43ab3:;
  /* 10a43ab3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a43ab6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a43ab9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a43abb je 0x10a43acf */
  if (C.zf) goto L_10a43acf;
  /* 10a43abd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43ac1 jne 0x10a43acf */
  if (!C.zf) goto L_10a43acf;
  /* 10a43ac3 mov dword ptr [ebp - 0x111c], 0x10a6b8e4 */
  w32((uint32_t)(EBP + -0x111c), (0x10a6b8e4u));
  /* 10a43acd jmp 0x10a43ad9 */
  goto L_10a43ad9;
L_10a43acf:;
  /* 10a43acf mov dword ptr [ebp - 0x111c], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x111c), (0x10a6b694u));
L_10a43ad9:;
  /* 10a43ad9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a43adc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a43adf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a43ae1 je 0x10a43aef */
  if (C.zf) goto L_10a43aef;
  /* 10a43ae3 mov dword ptr [ebp - 0x1120], 0x10a6b8e0 */
  w32((uint32_t)(EBP + -0x1120), (0x10a6b8e0u));
  /* 10a43aed jmp 0x10a43af9 */
  goto L_10a43af9;
L_10a43aef:;
  /* 10a43aef mov dword ptr [ebp - 0x1120], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x1120), (0x10a6b694u));
L_10a43af9:;
  /* 10a43af9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43afd je 0x10a43b0a */
  if (C.zf) goto L_10a43b0a;
  /* 10a43aff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a43b02 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10a43b08 jmp 0x10a43b14 */
  goto L_10a43b14;
L_10a43b0a:;
  /* 10a43b0a mov dword ptr [ebp - 0x1124], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x1124), (0x10a6b694u));
L_10a43b14:;
  /* 10a43b14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43b18 je 0x10a43b26 */
  if (C.zf) goto L_10a43b26;
  /* 10a43b1a mov dword ptr [ebp - 0x1128], 0x10a6b8d8 */
  w32((uint32_t)(EBP + -0x1128), (0x10a6b8d8u));
  /* 10a43b24 jmp 0x10a43b30 */
  goto L_10a43b30;
L_10a43b26:;
  /* 10a43b26 mov dword ptr [ebp - 0x1128], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x1128), (0x10a6b694u));
L_10a43b30:;
  /* 10a43b30 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43b34 je 0x10a43b41 */
  if (C.zf) goto L_10a43b41;
  /* 10a43b36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a43b39 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10a43b3f jmp 0x10a43b4b */
  goto L_10a43b4b;
L_10a43b41:;
  /* 10a43b41 mov dword ptr [ebp - 0x112c], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x112c), (0x10a6b694u));
L_10a43b4b:;
  /* 10a43b4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43b4f je 0x10a43b5d */
  if (C.zf) goto L_10a43b5d;
  /* 10a43b51 mov dword ptr [ebp - 0x1130], 0x10a6b8d0 */
  w32((uint32_t)(EBP + -0x1130), (0x10a6b8d0u));
  /* 10a43b5b jmp 0x10a43b67 */
  goto L_10a43b67;
L_10a43b5d:;
  /* 10a43b5d mov dword ptr [ebp - 0x1130], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x1130), (0x10a6b694u));
L_10a43b67:;
  /* 10a43b67 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43b6e je 0x10a43b7e */
  if (C.zf) goto L_10a43b7e;
  /* 10a43b70 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10a43b76 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10a43b7c jmp 0x10a43b88 */
  goto L_10a43b88;
L_10a43b7e:;
  /* 10a43b7e mov dword ptr [ebp - 0x1134], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x1134), (0x10a6b694u));
L_10a43b88:;
  /* 10a43b88 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43b8f je 0x10a43b9d */
  if (C.zf) goto L_10a43b9d;
  /* 10a43b91 mov dword ptr [ebp - 0x1138], 0x10a6b8c4 */
  w32((uint32_t)(EBP + -0x1138), (0x10a6b8c4u));
  /* 10a43b9b jmp 0x10a43ba7 */
  goto L_10a43ba7;
L_10a43b9d:;
  /* 10a43b9d mov dword ptr [ebp - 0x1138], 0x10a6b694 */
  w32((uint32_t)(EBP + -0x1138), (0x10a6b694u));
L_10a43ba7:;
  /* 10a43ba7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10a43bad push edx */
  push32((uint32_t)(EDX));
  /* 10a43bae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10a43bb4 push eax */
  push32((uint32_t)(EAX));
  /* 10a43bb5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10a43bbb push ecx */
  push32((uint32_t)(ECX));
  /* 10a43bbc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10a43bc2 push edx */
  push32((uint32_t)(EDX));
  /* 10a43bc3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10a43bc9 push eax */
  push32((uint32_t)(EAX));
  /* 10a43bca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10a43bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43bd1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10a43bd7 push edx */
  push32((uint32_t)(EDX));
  /* 10a43bd8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10a43bde push eax */
  push32((uint32_t)(EAX));
  /* 10a43bdf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10a43be5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43be6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10a43bec push edx */
  push32((uint32_t)(EDX));
  /* 10a43bed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43bf0 push eax */
  push32((uint32_t)(EAX));
  /* 10a43bf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43bf4 mov edx, dword ptr [ecx*4 + 0x10a6ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6ea50)));
  /* 10a43bfb push edx */
  push32((uint32_t)(EDX));
  /* 10a43bfc push 0x10a6b870 */
  push32((uint32_t)(0x10a6b870u));
  /* 10a43c01 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a43c06 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10a43c0c push eax */
  push32((uint32_t)(EAX));
  /* 10a43c0d call 0x10a473d0 */
  push32(0x10a43c12u); f_10a473d0();
  /* 10a43c12 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a43c17 jge 0x10a43c2d */
  if ((C.sf==C.of)) goto L_10a43c2d;
  /* 10a43c19 push 0x10a6b7d4 */
  push32((uint32_t)(0x10a6b7d4u));
  /* 10a43c1e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10a43c24 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43c25 call 0x10a474d0 */
  push32(0x10a43c2au); f_10a474d0();
  /* 10a43c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a43c2d:;
  /* 10a43c2d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10a43c32 push 0x10a6b84c */
  push32((uint32_t)(0x10a6b84cu));
  /* 10a43c37 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10a43c3d push edx */
  push32((uint32_t)(EDX));
  /* 10a43c3e call 0x10a47c80 */
  push32(0x10a43c43u); f_10a47c80();
  /* 10a43c43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43c46 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10a43c4c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43c53 jne 0x10a43c66 */
  if (!C.zf) goto L_10a43c66;
  /* 10a43c55 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a43c57 call 0x10a479c0 */
  push32(0x10a43c5cu); f_10a479c0();
  /* 10a43c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43c5f push 3 */
  push32((uint32_t)(0x3u));
  /* 10a43c61 call 0x10a43ce0 */
  push32(0x10a43c66u); f_10a43ce0();
L_10a43c66:;
  /* 10a43c66 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43c6d jne 0x10a43c76 */
  if (!C.zf) goto L_10a43c76;
  /* 10a43c6f mov eax, 1 */
  EAX = (0x1u);
  /* 10a43c74 jmp 0x10a43c78 */
  goto L_10a43c78;
L_10a43c76:;
  /* 10a43c76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a43c78:;
  /* 10a43c78 mov esp, ebp */
  ESP = (EBP);
  /* 10a43c7a pop ebp */
  EBP = (pop32());
  /* 10a43c7b ret  */
  ESPCHK(0x10a43970u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c80 @ 0x10a43c80 (56 bytes, 15 insns) */
void f_10a43c80(void) {
  FTRACE(0x10a43c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43c81 mov ebp, esp */
  EBP = (ESP);
  /* 10a43c83 cmp dword ptr [0x10a7213c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7213c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43c8a je 0x10a43c92 */
  if (C.zf) goto L_10a43c92;
  /* 10a43c8c call dword ptr [0x10a7213c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7213c))), 0x10a43c92u);
L_10a43c92:;
  /* 10a43c92 push 0x10a6e418 */
  push32((uint32_t)(0x10a6e418u));
  /* 10a43c97 push 0x10a6e208 */
  push32((uint32_t)(0x10a6e208u));
  /* 10a43c9c call 0x10a43e50 */
  push32(0x10a43ca1u); f_10a43e50();
  /* 10a43ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43ca4 push 0x10a6e104 */
  push32((uint32_t)(0x10a6e104u));
  /* 10a43ca9 push 0x10a6e000 */
  push32((uint32_t)(0x10a6e000u));
  /* 10a43cae call 0x10a43e50 */
  push32(0x10a43cb3u); f_10a43e50();
  /* 10a43cb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43cb6 pop ebp */
  EBP = (pop32());
  /* 10a43cb7 ret  */
  ESPCHK(0x10a43c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cc0 @ 0x10a43cc0 (21 bytes, 10 insns) */
void f_10a43cc0(void) {
  FTRACE(0x10a43cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a43cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a43cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a43cc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43cca push eax */
  push32((uint32_t)(EAX));
  /* 10a43ccb call 0x10a43d40 */
  push32(0x10a43cd0u); f_10a43d40();
  /* 10a43cd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43cd3 pop ebp */
  EBP = (pop32());
  /* 10a43cd4 ret  */
  ESPCHK(0x10a43cc0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10a43ce0 (21 bytes, 10 insns) */
void f_10a43ce0(void) {
  FTRACE(0x10a43ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10a43ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a43ce5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a43ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43cea push eax */
  push32((uint32_t)(EAX));
  /* 10a43ceb call 0x10a43d40 */
  push32(0x10a43cf0u); f_10a43d40();
  /* 10a43cf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43cf3 pop ebp */
  EBP = (pop32());
  /* 10a43cf4 ret  */
  ESPCHK(0x10a43ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d00 @ 0x10a43d00 (19 bytes, 9 insns) */
void f_10a43d00(void) {
  FTRACE(0x10a43d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43d01 mov ebp, esp */
  EBP = (ESP);
  /* 10a43d03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a43d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a43d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a43d09 call 0x10a43d40 */
  push32(0x10a43d0eu); f_10a43d40();
  /* 10a43d0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43d11 pop ebp */
  EBP = (pop32());
  /* 10a43d12 ret  */
  ESPCHK(0x10a43d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d20 @ 0x10a43d20 (19 bytes, 9 insns) */
void f_10a43d20(void) {
  FTRACE(0x10a43d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43d21 mov ebp, esp */
  EBP = (ESP);
  /* 10a43d23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a43d25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a43d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a43d29 call 0x10a43d40 */
  push32(0x10a43d2eu); f_10a43d40();
  /* 10a43d2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43d31 pop ebp */
  EBP = (pop32());
  /* 10a43d32 ret  */
  ESPCHK(0x10a43d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d40 @ 0x10a43d40 (227 bytes, 61 insns) */
void f_10a43d40(void) {
  FTRACE(0x10a43d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43d41 mov ebp, esp */
  EBP = (ESP);
  /* 10a43d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43d44 call 0x10a43e30 */
  push32(0x10a43d49u); f_10a43e30();
  /* 10a43d49 cmp dword ptr [0x10a7063c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a7063c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43d50 jne 0x10a43d63 */
  if (!C.zf) goto L_10a43d63;
  /* 10a43d52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43d55 push eax */
  push32((uint32_t)(EAX));
  /* 10a43d56 call dword ptr [0x10a7330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7330c))), 0x10a43d5cu);
  /* 10a43d5c push eax */
  push32((uint32_t)(EAX));
  /* 10a43d5d call dword ptr [0x10a73308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73308))), 0x10a43d63u);
L_10a43d63:;
  /* 10a43d63 mov dword ptr [0x10a70638], 1 */
  w32((uint32_t)(0x10a70638), (0x1u));
  /* 10a43d6d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10a43d70 mov byte ptr [0x10a70634], cl */
  w8((uint32_t)(0x10a70634), (CL));
  /* 10a43d76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43d7a jne 0x10a43dc3 */
  if (!C.zf) goto L_10a43dc3;
  /* 10a43d7c cmp dword ptr [0x10a72138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a72138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43d83 je 0x10a43db1 */
  if (C.zf) goto L_10a43db1;
  /* 10a43d85 mov edx, dword ptr [0x10a72134] */
  EDX = (r32((uint32_t)(0x10a72134)));
  /* 10a43d8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a43d8e:;
  /* 10a43d8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43d91 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a43d94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a43d97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43d9a cmp ecx, dword ptr [0x10a72138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a72138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43da0 jb 0x10a43db1 */
  if (C.cf) goto L_10a43db1;
  /* 10a43da2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43da5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43da8 je 0x10a43daf */
  if (C.zf) goto L_10a43daf;
  /* 10a43daa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43dad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10a43dafu);
L_10a43daf:;
  /* 10a43daf jmp 0x10a43d8e */
  goto L_10a43d8e;
L_10a43db1:;
  /* 10a43db1 push 0x10a6e724 */
  push32((uint32_t)(0x10a6e724u));
  /* 10a43db6 push 0x10a6e51c */
  push32((uint32_t)(0x10a6e51cu));
  /* 10a43dbb call 0x10a43e50 */
  push32(0x10a43dc0u); f_10a43e50();
  /* 10a43dc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a43dc3:;
  /* 10a43dc3 push 0x10a6e92c */
  push32((uint32_t)(0x10a6e92cu));
  /* 10a43dc8 push 0x10a6e828 */
  push32((uint32_t)(0x10a6e828u));
  /* 10a43dcd call 0x10a43e50 */
  push32(0x10a43dd2u); f_10a43e50();
  /* 10a43dd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43dd5 cmp dword ptr [0x10a70640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43ddc jne 0x10a43dfe */
  if (!C.zf) goto L_10a43dfe;
  /* 10a43dde push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a43de0 call 0x10a45a30 */
  push32(0x10a43de5u); f_10a45a30();
  /* 10a43de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43de8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a43deb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a43ded je 0x10a43dfe */
  if (C.zf) goto L_10a43dfe;
  /* 10a43def mov dword ptr [0x10a70640], 1 */
  w32((uint32_t)(0x10a70640), (0x1u));
  /* 10a43df9 call 0x10a46340 */
  push32(0x10a43dfeu); f_10a46340();
L_10a43dfe:;
  /* 10a43dfe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43e02 je 0x10a43e0b */
  if (C.zf) goto L_10a43e0b;
  /* 10a43e04 call 0x10a43e40 */
  push32(0x10a43e09u); f_10a43e40();
  /* 10a43e09 jmp 0x10a43e1f */
  goto L_10a43e1f;
L_10a43e0b:;
  /* 10a43e0b mov dword ptr [0x10a7063c], 1 */
  w32((uint32_t)(0x10a7063c), (0x1u));
  /* 10a43e15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43e18 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43e19 call dword ptr [0x10a73304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73304))), 0x10a43e1fu);
L_10a43e1f:;
  /* 10a43e1f mov esp, ebp */
  ESP = (EBP);
  /* 10a43e21 pop ebp */
  EBP = (pop32());
  /* 10a43e22 ret  */
  ESPCHK(0x10a43d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e30 @ 0x10a43e30 (15 bytes, 7 insns) */
void f_10a43e30(void) {
  FTRACE(0x10a43e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43e31 mov ebp, esp */
  EBP = (ESP);
  /* 10a43e33 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a43e35 call 0x10a47f20 */
  push32(0x10a43e3au); f_10a47f20();
  /* 10a43e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43e3d pop ebp */
  EBP = (pop32());
  /* 10a43e3e ret  */
  ESPCHK(0x10a43e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e40 @ 0x10a43e40 (15 bytes, 7 insns) */
void f_10a43e40(void) {
  FTRACE(0x10a43e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43e41 mov ebp, esp */
  EBP = (ESP);
  /* 10a43e43 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10a43e45 call 0x10a47fc0 */
  push32(0x10a43e4au); f_10a47fc0();
  /* 10a43e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43e4d pop ebp */
  EBP = (pop32());
  /* 10a43e4e ret  */
  ESPCHK(0x10a43e40u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10a43e50 (37 bytes, 16 insns) */
void f_10a43e50(void) {
  FTRACE(0x10a43e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43e51 mov ebp, esp */
  EBP = (ESP);
L_10a43e53:;
  /* 10a43e53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43e56 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43e59 jae 0x10a43e73 */
  if (!C.cf) goto L_10a43e73;
  /* 10a43e5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43e5e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43e61 je 0x10a43e68 */
  if (C.zf) goto L_10a43e68;
  /* 10a43e63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43e66 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10a43e68u);
L_10a43e68:;
  /* 10a43e68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43e6b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43e6e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a43e71 jmp 0x10a43e53 */
  goto L_10a43e53;
L_10a43e73:;
  /* 10a43e73 pop ebp */
  EBP = (pop32());
  /* 10a43e74 ret  */
  ESPCHK(0x10a43e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e80 @ 0x10a43e80 (130 bytes, 42 insns) */
void f_10a43e80(void) {
  FTRACE(0x10a43e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43e81 mov ebp, esp */
  EBP = (ESP);
  /* 10a43e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43e84 call 0x10a47e40 */
  push32(0x10a43e89u); f_10a47e40();
  /* 10a43e89 call dword ptr [0x10a73318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73318))), 0x10a43e8fu);
  /* 10a43e8f mov dword ptr [0x10a6ea5c], eax */
  w32((uint32_t)(0x10a6ea5c), (EAX));
  /* 10a43e94 cmp dword ptr [0x10a6ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43e9b jne 0x10a43ea1 */
  if (!C.zf) goto L_10a43ea1;
  /* 10a43e9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a43e9f jmp 0x10a43efe */
  goto L_10a43efe;
L_10a43ea1:;
  /* 10a43ea1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10a43ea3 push 0x10a6b9a8 */
  push32((uint32_t)(0x10a6b9a8u));
  /* 10a43ea8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a43eaa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10a43eac push 1 */
  push32((uint32_t)(0x1u));
  /* 10a43eae call 0x10a44930 */
  push32(0x10a43eb3u); f_10a44930();
  /* 10a43eb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43eb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a43eb9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43ebd je 0x10a43ed4 */
  if (C.zf) goto L_10a43ed4;
  /* 10a43ebf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43ec2 push eax */
  push32((uint32_t)(EAX));
  /* 10a43ec3 mov ecx, dword ptr [0x10a6ea5c] */
  ECX = (r32((uint32_t)(0x10a6ea5c)));
  /* 10a43ec9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43eca call dword ptr [0x10a73314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73314))), 0x10a43ed0u);
  /* 10a43ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a43ed2 jne 0x10a43ed8 */
  if (!C.zf) goto L_10a43ed8;
L_10a43ed4:;
  /* 10a43ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a43ed6 jmp 0x10a43efe */
  goto L_10a43efe;
L_10a43ed8:;
  /* 10a43ed8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43edb push edx */
  push32((uint32_t)(EDX));
  /* 10a43edc call 0x10a43f40 */
  push32(0x10a43ee1u); f_10a43f40();
  /* 10a43ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43ee4 call dword ptr [0x10a73310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73310))), 0x10a43eeau);
  /* 10a43eea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43eed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a43eef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43ef2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10a43ef9 mov eax, 1 */
  EAX = (0x1u);
L_10a43efe:;
  /* 10a43efe mov esp, ebp */
  ESP = (EBP);
  /* 10a43f00 pop ebp */
  EBP = (pop32());
  /* 10a43f01 ret  */
  ESPCHK(0x10a43e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f10 @ 0x10a43f10 (41 bytes, 11 insns) */
void f_10a43f10(void) {
  FTRACE(0x10a43f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43f11 mov ebp, esp */
  EBP = (ESP);
  /* 10a43f13 call 0x10a47e80 */
  push32(0x10a43f18u); f_10a47e80();
  /* 10a43f18 cmp dword ptr [0x10a6ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43f1f je 0x10a43f37 */
  if (C.zf) goto L_10a43f37;
  /* 10a43f21 mov eax, dword ptr [0x10a6ea5c] */
  EAX = (r32((uint32_t)(0x10a6ea5c)));
  /* 10a43f26 push eax */
  push32((uint32_t)(EAX));
  /* 10a43f27 call dword ptr [0x10a7331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7331c))), 0x10a43f2du);
  /* 10a43f2d mov dword ptr [0x10a6ea5c], 0xffffffff */
  w32((uint32_t)(0x10a6ea5c), (0xffffffffu));
L_10a43f37:;
  /* 10a43f37 pop ebp */
  EBP = (pop32());
  /* 10a43f38 ret  */
  ESPCHK(0x10a43f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f40 @ 0x10a43f40 (25 bytes, 8 insns) */
void f_10a43f40(void) {
  FTRACE(0x10a43f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43f41 mov ebp, esp */
  EBP = (ESP);
  /* 10a43f43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43f46 mov dword ptr [eax + 0x50], 0x10a6ec00 */
  w32((uint32_t)(EAX + 0x50), (0x10a6ec00u));
  /* 10a43f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a43f50 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10a43f57 pop ebp */
  EBP = (pop32());
  /* 10a43f58 ret  */
  ESPCHK(0x10a43f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f60 @ 0x10a43f60 (152 bytes, 48 insns) */
void f_10a43f60(void) {
  FTRACE(0x10a43f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a43f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a43f61 mov ebp, esp */
  EBP = (ESP);
  /* 10a43f63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a43f66 call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a43f6cu);
  /* 10a43f6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a43f6f mov eax, dword ptr [0x10a6ea5c] */
  EAX = (r32((uint32_t)(0x10a6ea5c)));
  /* 10a43f74 push eax */
  push32((uint32_t)(EAX));
  /* 10a43f75 call dword ptr [0x10a73324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73324))), 0x10a43f7bu);
  /* 10a43f7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a43f7e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43f82 jne 0x10a43fe7 */
  if (!C.zf) goto L_10a43fe7;
  /* 10a43f84 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10a43f89 push 0x10a6b9a8 */
  push32((uint32_t)(0x10a6b9a8u));
  /* 10a43f8e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a43f90 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10a43f92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a43f94 call 0x10a44930 */
  push32(0x10a43f99u); f_10a44930();
  /* 10a43f99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43f9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a43f9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a43fa3 je 0x10a43fdd */
  if (C.zf) goto L_10a43fdd;
  /* 10a43fa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a43fa9 mov edx, dword ptr [0x10a6ea5c] */
  EDX = (r32((uint32_t)(0x10a6ea5c)));
  /* 10a43faf push edx */
  push32((uint32_t)(EDX));
  /* 10a43fb0 call dword ptr [0x10a73314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73314))), 0x10a43fb6u);
  /* 10a43fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a43fb8 je 0x10a43fdd */
  if (C.zf) goto L_10a43fdd;
  /* 10a43fba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43fbd push eax */
  push32((uint32_t)(EAX));
  /* 10a43fbe call 0x10a43f40 */
  push32(0x10a43fc3u); f_10a43f40();
  /* 10a43fc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a43fc6 call dword ptr [0x10a73310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73310))), 0x10a43fccu);
  /* 10a43fcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43fcf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a43fd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43fd4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10a43fdb jmp 0x10a43fe7 */
  goto L_10a43fe7;
L_10a43fdd:;
  /* 10a43fdd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10a43fdf call 0x10a43490 */
  push32(0x10a43fe4u); f_10a43490();
  /* 10a43fe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a43fe7:;
  /* 10a43fe7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a43fea push eax */
  push32((uint32_t)(EAX));
  /* 10a43feb call dword ptr [0x10a73320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73320))), 0x10a43ff1u);
  /* 10a43ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a43ff4 mov esp, ebp */
  ESP = (EBP);
  /* 10a43ff6 pop ebp */
  EBP = (pop32());
  /* 10a43ff7 ret  */
  ESPCHK(0x10a43f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004000 @ 0x10a44000 (263 bytes, 86 insns) */
void f_10a44000(void) {
  FTRACE(0x10a44000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44000 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44001 mov ebp, esp */
  EBP = (ESP);
  /* 10a44003 cmp dword ptr [0x10a6ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4400a je 0x10a44105 */
  if (C.zf) goto L_10a44105;
  /* 10a44010 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44014 jne 0x10a44025 */
  if (!C.zf) goto L_10a44025;
  /* 10a44016 mov eax, dword ptr [0x10a6ea5c] */
  EAX = (r32((uint32_t)(0x10a6ea5c)));
  /* 10a4401b push eax */
  push32((uint32_t)(EAX));
  /* 10a4401c call dword ptr [0x10a73324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73324))), 0x10a44022u);
  /* 10a44022 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a44025:;
  /* 10a44025 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44029 je 0x10a440f6 */
  if (C.zf) goto L_10a440f6;
  /* 10a4402f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44032 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44036 je 0x10a44049 */
  if (C.zf) goto L_10a44049;
  /* 10a44038 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4403a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4403d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10a44040 push eax */
  push32((uint32_t)(EAX));
  /* 10a44041 call 0x10a44fb0 */
  push32(0x10a44046u); f_10a44fb0();
  /* 10a44046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a44049:;
  /* 10a44049 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4404c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44050 je 0x10a44063 */
  if (C.zf) goto L_10a44063;
  /* 10a44052 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44054 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44057 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10a4405a push eax */
  push32((uint32_t)(EAX));
  /* 10a4405b call 0x10a44fb0 */
  push32(0x10a44060u); f_10a44fb0();
  /* 10a44060 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a44063:;
  /* 10a44063 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44066 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4406a je 0x10a4407d */
  if (C.zf) goto L_10a4407d;
  /* 10a4406c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4406e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44071 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10a44074 push eax */
  push32((uint32_t)(EAX));
  /* 10a44075 call 0x10a44fb0 */
  push32(0x10a4407au); f_10a44fb0();
  /* 10a4407a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4407d:;
  /* 10a4407d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44080 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44084 je 0x10a44097 */
  if (C.zf) goto L_10a44097;
  /* 10a44086 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44088 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4408b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10a4408e push eax */
  push32((uint32_t)(EAX));
  /* 10a4408f call 0x10a44fb0 */
  push32(0x10a44094u); f_10a44fb0();
  /* 10a44094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a44097:;
  /* 10a44097 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4409a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4409e je 0x10a440b1 */
  if (C.zf) goto L_10a440b1;
  /* 10a440a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a440a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a440a5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10a440a8 push eax */
  push32((uint32_t)(EAX));
  /* 10a440a9 call 0x10a44fb0 */
  push32(0x10a440aeu); f_10a44fb0();
  /* 10a440ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a440b1:;
  /* 10a440b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a440b4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a440b8 je 0x10a440cb */
  if (C.zf) goto L_10a440cb;
  /* 10a440ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10a440bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a440bf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10a440c2 push eax */
  push32((uint32_t)(EAX));
  /* 10a440c3 call 0x10a44fb0 */
  push32(0x10a440c8u); f_10a44fb0();
  /* 10a440c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a440cb:;
  /* 10a440cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a440ce cmp dword ptr [ecx + 0x50], 0x10a6ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10a6ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a440d5 je 0x10a440e8 */
  if (C.zf) goto L_10a440e8;
  /* 10a440d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a440d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a440dc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10a440df push eax */
  push32((uint32_t)(EAX));
  /* 10a440e0 call 0x10a44fb0 */
  push32(0x10a440e5u); f_10a44fb0();
  /* 10a440e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a440e8:;
  /* 10a440e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a440ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a440ed push ecx */
  push32((uint32_t)(ECX));
  /* 10a440ee call 0x10a44fb0 */
  push32(0x10a440f3u); f_10a44fb0();
  /* 10a440f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a440f6:;
  /* 10a440f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a440f8 mov edx, dword ptr [0x10a6ea5c] */
  EDX = (r32((uint32_t)(0x10a6ea5c)));
  /* 10a440fe push edx */
  push32((uint32_t)(EDX));
  /* 10a440ff call dword ptr [0x10a73314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73314))), 0x10a44105u);
L_10a44105:;
  /* 10a44105 pop ebp */
  EBP = (pop32());
  /* 10a44106 ret  */
  ESPCHK(0x10a44000u, _esp0);
  ESP += 4; return;
}

/* FUN_10004110 @ 0x10a44110 (11 bytes, 5 insns) */
void f_10a44110(void) {
  FTRACE(0x10a44110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44110 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44111 mov ebp, esp */
  EBP = (ESP);
  /* 10a44113 call dword ptr [0x10a73310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73310))), 0x10a44119u);
  /* 10a44119 pop ebp */
  EBP = (pop32());
  /* 10a4411a ret  */
  ESPCHK(0x10a44110u, _esp0);
  ESP += 4; return;
}

/* FUN_10004120 @ 0x10a44120 (11 bytes, 5 insns) */
void f_10a44120(void) {
  FTRACE(0x10a44120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44120 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44121 mov ebp, esp */
  EBP = (ESP);
  /* 10a44123 call dword ptr [0x10a7332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7332c))), 0x10a44129u);
  /* 10a44129 pop ebp */
  EBP = (pop32());
  /* 10a4412a ret  */
  ESPCHK(0x10a44120u, _esp0);
  ESP += 4; return;
}

/* FUN_10004130 @ 0x10a44130 (804 bytes, 236 insns) */
void f_10a44130(void) {
  FTRACE(0x10a44130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44130 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44131 mov ebp, esp */
  EBP = (ESP);
  /* 10a44133 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a44136 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10a4413b push 0x10a6b9b4 */
  push32((uint32_t)(0x10a6b9b4u));
  /* 10a44140 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44142 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10a44147 call 0x10a44520 */
  push32(0x10a4414cu); f_10a44520();
  /* 10a4414c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4414f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10a44152 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44156 jne 0x10a44162 */
  if (!C.zf) goto L_10a44162;
  /* 10a44158 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10a4415a call 0x10a43490 */
  push32(0x10a4415fu); f_10a43490();
  /* 10a4415f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a44162:;
  /* 10a44162 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44165 mov dword ptr [0x10a71fe0], eax */
  w32((uint32_t)(0x10a71fe0), (EAX));
  /* 10a4416a mov dword ptr [0x10a7211c], 0x20 */
  w32((uint32_t)(0x10a7211c), (0x20u));
  /* 10a44174 jmp 0x10a4417f */
  goto L_10a4417f;
L_10a44176:;
  /* 10a44176 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44179 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4417c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10a4417f:;
  /* 10a4417f mov edx, dword ptr [0x10a71fe0] */
  EDX = (r32((uint32_t)(0x10a71fe0)));
  /* 10a44185 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4418b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4418e jae 0x10a441b3 */
  if (!C.cf) goto L_10a441b3;
  /* 10a44190 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44193 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a44197 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a4419a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a441a0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a441a3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10a441a7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a441aa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a441b1 jmp 0x10a44176 */
  goto L_10a44176;
L_10a441b3:;
  /* 10a441b3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10a441b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a441b7 call dword ptr [0x10a73338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73338))), 0x10a441bdu);
  /* 10a441bd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10a441c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a441c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a441c8 je 0x10a44355 */
  if (C.zf) goto L_10a44355;
  /* 10a441ce cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a441d2 je 0x10a44355 */
  if (C.zf) goto L_10a44355;
  /* 10a441d8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a441db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a441dd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10a441e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a441e3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a441e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a441e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a441ec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a441ef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10a441f2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a441f9 jge 0x10a44203 */
  if ((C.sf==C.of)) goto L_10a44203;
  /* 10a441fb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10a441fe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10a44201 jmp 0x10a4420a */
  goto L_10a4420a;
L_10a44203:;
  /* 10a44203 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10a4420a:;
  /* 10a4420a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10a4420d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10a44210 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10a44217 jmp 0x10a44222 */
  goto L_10a44222;
L_10a44219:;
  /* 10a44219 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10a4421c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4421f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10a44222:;
  /* 10a44222 mov ecx, dword ptr [0x10a7211c] */
  ECX = (r32((uint32_t)(0x10a7211c)));
  /* 10a44228 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4422b jge 0x10a442c2 */
  if ((C.sf==C.of)) goto L_10a442c2;
  /* 10a44231 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10a44236 push 0x10a6b9b4 */
  push32((uint32_t)(0x10a6b9b4u));
  /* 10a4423b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4423d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10a44242 call 0x10a44520 */
  push32(0x10a44247u); f_10a44520();
  /* 10a44247 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4424a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10a4424d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44251 jne 0x10a4425e */
  if (!C.zf) goto L_10a4425e;
  /* 10a44253 mov edx, dword ptr [0x10a7211c] */
  EDX = (r32((uint32_t)(0x10a7211c)));
  /* 10a44259 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10a4425c jmp 0x10a442c2 */
  goto L_10a442c2;
L_10a4425e:;
  /* 10a4425e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10a44261 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44264 mov dword ptr [eax*4 + 0x10a71fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x10a71fe0), (ECX));
  /* 10a4426b mov edx, dword ptr [0x10a7211c] */
  EDX = (r32((uint32_t)(0x10a7211c)));
  /* 10a44271 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44274 mov dword ptr [0x10a7211c], edx */
  w32((uint32_t)(0x10a7211c), (EDX));
  /* 10a4427a jmp 0x10a44285 */
  goto L_10a44285;
L_10a4427c:;
  /* 10a4427c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a4427f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44282 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10a44285:;
  /* 10a44285 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10a44288 mov edx, dword ptr [ecx*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a71fe0)));
  /* 10a4428f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44295 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44298 jae 0x10a442bd */
  if (!C.cf) goto L_10a442bd;
  /* 10a4429a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a4429d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a442a1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a442a4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a442aa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a442ad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10a442b1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a442b4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a442bb jmp 0x10a4427c */
  goto L_10a4427c;
L_10a442bd:;
  /* 10a442bd jmp 0x10a44219 */
  goto L_10a44219;
L_10a442c2:;
  /* 10a442c2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10a442c9 jmp 0x10a442e6 */
  goto L_10a442e6;
L_10a442cb:;
  /* 10a442cb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a442ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a442d1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10a442d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a442d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a442da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a442dd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a442e0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a442e3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10a442e6:;
  /* 10a442e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a442e9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a442ec jge 0x10a44355 */
  if ((C.sf==C.of)) goto L_10a44355;
  /* 10a442ee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a442f1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a442f4 je 0x10a44350 */
  if (C.zf) goto L_10a44350;
  /* 10a442f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a442f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a442fc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a442ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a44301 je 0x10a44350 */
  if (C.zf) goto L_10a44350;
  /* 10a44303 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44306 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a44309 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10a4430c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4430e jne 0x10a44320 */
  if (!C.zf) goto L_10a44320;
  /* 10a44310 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a44313 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a44315 push edx */
  push32((uint32_t)(EDX));
  /* 10a44316 call dword ptr [0x10a73270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73270))), 0x10a4431cu);
  /* 10a4431c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4431e je 0x10a44350 */
  if (C.zf) goto L_10a44350;
L_10a44320:;
  /* 10a44320 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a44323 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a44326 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a44329 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4432c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4432f mov edx, dword ptr [eax*4 + 0x10a71fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a44336 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44338 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10a4433b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a4433e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10a44341 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a44343 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a44345 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44348 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4434b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a4434d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10a44350:;
  /* 10a44350 jmp 0x10a442cb */
  goto L_10a442cb;
L_10a44355:;
  /* 10a44355 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10a4435c jmp 0x10a44367 */
  goto L_10a44367;
L_10a4435e:;
  /* 10a4435e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a44361 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44364 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10a44367:;
  /* 10a44367 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4436b jge 0x10a44444 */
  if ((C.sf==C.of)) goto L_10a44444;
  /* 10a44371 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a44374 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a44377 mov edx, dword ptr [0x10a71fe0] */
  EDX = (r32((uint32_t)(0x10a71fe0)));
  /* 10a4437d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4437f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10a44382 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44385 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44388 jne 0x10a44430 */
  if (!C.zf) goto L_10a44430;
  /* 10a4438e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44391 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10a44395 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44399 jne 0x10a443a4 */
  if (!C.zf) goto L_10a443a4;
  /* 10a4439b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10a443a2 jmp 0x10a443b4 */
  goto L_10a443b4;
L_10a443a4:;
  /* 10a443a4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10a443a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a443aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a443ac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a443ae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a443b1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10a443b4:;
  /* 10a443b4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10a443b7 push eax */
  push32((uint32_t)(EAX));
  /* 10a443b8 call dword ptr [0x10a732e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732e4))), 0x10a443beu);
  /* 10a443be mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10a443c1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a443c5 je 0x10a4441f */
  if (C.zf) goto L_10a4441f;
  /* 10a443c7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a443ca push ecx */
  push32((uint32_t)(ECX));
  /* 10a443cb call dword ptr [0x10a73270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73270))), 0x10a443d1u);
  /* 10a443d1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10a443d4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a443d8 je 0x10a4441f */
  if (C.zf) goto L_10a4441f;
  /* 10a443da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a443dd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a443e0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a443e2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10a443e5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a443eb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a443ee jne 0x10a44400 */
  if (!C.zf) goto L_10a44400;
  /* 10a443f0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a443f3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a443f6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10a443f8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a443fb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10a443fe jmp 0x10a4441d */
  goto L_10a4441d;
L_10a44400:;
  /* 10a44400 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10a44403 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a44409 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4440c jne 0x10a4441d */
  if (!C.zf) goto L_10a4441d;
  /* 10a4440e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44411 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a44414 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10a44417 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a4441a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10a4441d:;
  /* 10a4441d jmp 0x10a4442e */
  goto L_10a4442e;
L_10a4441f:;
  /* 10a4441f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44422 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a44425 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10a44428 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a4442b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10a4442e:;
  /* 10a4442e jmp 0x10a4443f */
  goto L_10a4443f;
L_10a44430:;
  /* 10a44430 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a44433 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a44436 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10a44439 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a4443c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10a4443f:;
  /* 10a4443f jmp 0x10a4435e */
  goto L_10a4435e;
L_10a44444:;
  /* 10a44444 mov eax, dword ptr [0x10a7211c] */
  EAX = (r32((uint32_t)(0x10a7211c)));
  /* 10a44449 push eax */
  push32((uint32_t)(EAX));
  /* 10a4444a call dword ptr [0x10a7326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7326c))), 0x10a44450u);
  /* 10a44450 mov esp, ebp */
  ESP = (EBP);
  /* 10a44452 pop ebp */
  EBP = (pop32());
  /* 10a44453 ret  */
  ESPCHK(0x10a44130u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10a44460 (155 bytes, 45 insns) */
void f_10a44460(void) {
  FTRACE(0x10a44460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44460 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44461 mov ebp, esp */
  EBP = (ESP);
  /* 10a44463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a44466 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a4446d jmp 0x10a44478 */
  goto L_10a44478;
L_10a4446f:;
  /* 10a4446f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44472 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44475 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a44478:;
  /* 10a44478 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4447c jge 0x10a444f7 */
  if ((C.sf==C.of)) goto L_10a444f7;
  /* 10a4447e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44481 cmp dword ptr [ecx*4 + 0x10a71fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10a71fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44489 je 0x10a444f2 */
  if (C.zf) goto L_10a444f2;
  /* 10a4448b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4448e mov eax, dword ptr [edx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a71fe0)));
  /* 10a44495 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a44498 jmp 0x10a444a3 */
  goto L_10a444a3;
L_10a4449a:;
  /* 10a4449a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4449d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a444a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a444a3:;
  /* 10a444a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a444a6 mov eax, dword ptr [edx*4 + 0x10a71fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a71fe0)));
  /* 10a444ad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a444b2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a444b5 jae 0x10a444cf */
  if (!C.cf) goto L_10a444cf;
  /* 10a444b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a444ba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a444be je 0x10a444cd */
  if (C.zf) goto L_10a444cd;
  /* 10a444c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a444c3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a444c6 push edx */
  push32((uint32_t)(EDX));
  /* 10a444c7 call dword ptr [0x10a7333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7333c))), 0x10a444cdu);
L_10a444cd:;
  /* 10a444cd jmp 0x10a4449a */
  goto L_10a4449a;
L_10a444cf:;
  /* 10a444cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10a444d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a444d4 mov ecx, dword ptr [eax*4 + 0x10a71fe0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a71fe0)));
  /* 10a444db push ecx */
  push32((uint32_t)(ECX));
  /* 10a444dc call 0x10a44fb0 */
  push32(0x10a444e1u); f_10a44fb0();
  /* 10a444e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a444e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a444e7 mov dword ptr [edx*4 + 0x10a71fe0], 0 */
  w32((uint32_t)(EDX*4 + 0x10a71fe0), (0x0u));
L_10a444f2:;
  /* 10a444f2 jmp 0x10a4446f */
  goto L_10a4446f;
L_10a444f7:;
  /* 10a444f7 mov esp, ebp */
  ESP = (EBP);
  /* 10a444f9 pop ebp */
  EBP = (pop32());
  /* 10a444fa ret  */
  ESPCHK(0x10a44460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004500 @ 0x10a44500 (29 bytes, 13 insns) */
void f_10a44500(void) {
  FTRACE(0x10a44500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44500 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44501 mov ebp, esp */
  EBP = (ESP);
  /* 10a44503 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44505 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44507 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44509 mov eax, dword ptr [0x10a707e8] */
  EAX = (r32((uint32_t)(0x10a707e8)));
  /* 10a4450e push eax */
  push32((uint32_t)(EAX));
  /* 10a4450f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44512 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44513 call 0x10a44570 */
  push32(0x10a44518u); f_10a44570();
  /* 10a44518 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4451b pop ebp */
  EBP = (pop32());
  /* 10a4451c ret  */
  ESPCHK(0x10a44500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004520 @ 0x10a44520 (35 bytes, 16 insns) */
void f_10a44520(void) {
  FTRACE(0x10a44520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44520 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44521 mov ebp, esp */
  EBP = (ESP);
  /* 10a44523 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a44526 push eax */
  push32((uint32_t)(EAX));
  /* 10a44527 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4452a push ecx */
  push32((uint32_t)(ECX));
  /* 10a4452b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4452e push edx */
  push32((uint32_t)(EDX));
  /* 10a4452f mov eax, dword ptr [0x10a707e8] */
  EAX = (r32((uint32_t)(0x10a707e8)));
  /* 10a44534 push eax */
  push32((uint32_t)(EAX));
  /* 10a44535 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44538 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44539 call 0x10a44570 */
  push32(0x10a4453eu); f_10a44570();
  /* 10a4453e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44541 pop ebp */
  EBP = (pop32());
  /* 10a44542 ret  */
  ESPCHK(0x10a44520u, _esp0);
  ESP += 4; return;
}

/* FUN_10004550 @ 0x10a44550 (27 bytes, 13 insns) */
void f_10a44550(void) {
  FTRACE(0x10a44550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44550 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44551 mov ebp, esp */
  EBP = (ESP);
  /* 10a44553 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44555 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44557 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44559 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4455c push eax */
  push32((uint32_t)(EAX));
  /* 10a4455d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44560 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44561 call 0x10a44570 */
  push32(0x10a44566u); f_10a44570();
  /* 10a44566 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44569 pop ebp */
  EBP = (pop32());
  /* 10a4456a ret  */
  ESPCHK(0x10a44550u, _esp0);
  ESP += 4; return;
}

/* FUN_10004570 @ 0x10a44570 (94 bytes, 38 insns) */
void f_10a44570(void) {
  FTRACE(0x10a44570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44570 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44571 mov ebp, esp */
  EBP = (ESP);
  /* 10a44573 push ecx */
  push32((uint32_t)(ECX));
L_10a44574:;
  /* 10a44574 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a44576 call 0x10a47f20 */
  push32(0x10a4457bu); f_10a47f20();
  /* 10a4457b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4457e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a44581 push eax */
  push32((uint32_t)(EAX));
  /* 10a44582 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a44585 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44586 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44589 push edx */
  push32((uint32_t)(EDX));
  /* 10a4458a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4458d push eax */
  push32((uint32_t)(EAX));
  /* 10a4458e call 0x10a445f0 */
  push32(0x10a44593u); f_10a445f0();
  /* 10a44593 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44596 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a44599 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a4459b call 0x10a47fc0 */
  push32(0x10a445a0u); f_10a47fc0();
  /* 10a445a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a445a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a445a7 jne 0x10a445af */
  if (!C.zf) goto L_10a445af;
  /* 10a445a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a445ad jne 0x10a445b4 */
  if (!C.zf) goto L_10a445b4;
L_10a445af:;
  /* 10a445af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a445b2 jmp 0x10a445ca */
  goto L_10a445ca;
L_10a445b4:;
  /* 10a445b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a445b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a445b8 call 0x10a48260 */
  push32(0x10a445bdu); f_10a48260();
  /* 10a445bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a445c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a445c2 jne 0x10a445c8 */
  if (!C.zf) goto L_10a445c8;
  /* 10a445c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a445c6 jmp 0x10a445ca */
  goto L_10a445ca;
L_10a445c8:;
  /* 10a445c8 jmp 0x10a44574 */
  goto L_10a44574;
L_10a445ca:;
  /* 10a445ca mov esp, ebp */
  ESP = (EBP);
  /* 10a445cc pop ebp */
  EBP = (pop32());
  /* 10a445cd ret  */
  ESPCHK(0x10a44570u, _esp0);
  ESP += 4; return;
}

/* FUN_100045d0 @ 0x10a445d0 (23 bytes, 11 insns) */
void f_10a445d0(void) {
  FTRACE(0x10a445d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a445d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a445d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a445d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a445d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a445d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a445d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a445dc push eax */
  push32((uint32_t)(EAX));
  /* 10a445dd call 0x10a445f0 */
  push32(0x10a445e2u); f_10a445f0();
  /* 10a445e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a445e5 pop ebp */
  EBP = (pop32());
  /* 10a445e6 ret  */
  ESPCHK(0x10a445d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045f0 @ 0x10a445f0 (787 bytes, 254 insns) */
void f_10a445f0(void) {
  FTRACE(0x10a445f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a445f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a445f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a445f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a445f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a445f7 push esi */
  push32((uint32_t)(ESI));
  /* 10a445f8 push edi */
  push32((uint32_t)(EDI));
  /* 10a445f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a44600 mov eax, dword ptr [0x10a6ea84] */
  EAX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a44605 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a44608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4460a je 0x10a4463c */
  if (C.zf) goto L_10a4463c;
L_10a4460c:;
  /* 10a4460c call 0x10a456c0 */
  push32(0x10a44611u); f_10a456c0();
  /* 10a44611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44613 jne 0x10a44636 */
  if (!C.zf) goto L_10a44636;
  /* 10a44615 push 0x10a6baa8 */
  push32((uint32_t)(0x10a6baa8u));
  /* 10a4461a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4461c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10a44621 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a44626 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44628 call 0x10a435e0 */
  push32(0x10a4462du); f_10a435e0();
  /* 10a4462d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44630 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44633 jne 0x10a44636 */
  if (!C.zf) goto L_10a44636;
  /* 10a44635 int3  */
  x86_unimpl("int3 @ 0x10a44635");
L_10a44636:;
  /* 10a44636 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a44638 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4463a jne 0x10a4460c */
  if (!C.zf) goto L_10a4460c;
L_10a4463c:;
  /* 10a4463c mov edx, dword ptr [0x10a6ea88] */
  EDX = (r32((uint32_t)(0x10a6ea88)));
  /* 10a44642 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a44645 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44648 cmp eax, dword ptr [0x10a6ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a6ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4464e jne 0x10a44651 */
  if (!C.zf) goto L_10a44651;
  /* 10a44650 int3  */
  x86_unimpl("int3 @ 0x10a44650");
L_10a44651:;
  /* 10a44651 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a44654 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44655 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44658 push edx */
  push32((uint32_t)(EDX));
  /* 10a44659 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4465c push eax */
  push32((uint32_t)(EAX));
  /* 10a4465d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44660 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44664 push edx */
  push32((uint32_t)(EDX));
  /* 10a44665 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44667 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44669 call dword ptr [0x10a6ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a6ec90))), 0x10a4466fu);
  /* 10a4466f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44674 jne 0x10a446d4 */
  if (!C.zf) goto L_10a446d4;
  /* 10a44676 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4467a je 0x10a446a7 */
  if (C.zf) goto L_10a446a7;
L_10a4467c:;
  /* 10a4467c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4467f push eax */
  push32((uint32_t)(EAX));
  /* 10a44680 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44683 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44684 push 0x10a6ba64 */
  push32((uint32_t)(0x10a6ba64u));
  /* 10a44689 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4468b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4468d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4468f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44691 call 0x10a435e0 */
  push32(0x10a44696u); f_10a435e0();
  /* 10a44696 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44699 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4469c jne 0x10a4469f */
  if (!C.zf) goto L_10a4469f;
  /* 10a4469e int3  */
  x86_unimpl("int3 @ 0x10a4469e");
L_10a4469f:;
  /* 10a4469f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a446a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a446a3 jne 0x10a4467c */
  if (!C.zf) goto L_10a4467c;
  /* 10a446a5 jmp 0x10a446cd */
  goto L_10a446cd;
L_10a446a7:;
  /* 10a446a7 push 0x10a6ba40 */
  push32((uint32_t)(0x10a6ba40u));
  /* 10a446ac push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a446b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a446b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a446b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a446b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a446b9 call 0x10a435e0 */
  push32(0x10a446beu); f_10a435e0();
  /* 10a446be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a446c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a446c4 jne 0x10a446c7 */
  if (!C.zf) goto L_10a446c7;
  /* 10a446c6 int3  */
  x86_unimpl("int3 @ 0x10a446c6");
L_10a446c7:;
  /* 10a446c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a446c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a446cb jne 0x10a446a7 */
  if (!C.zf) goto L_10a446a7;
L_10a446cd:;
  /* 10a446cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a446cf jmp 0x10a448fc */
  goto L_10a448fc;
L_10a446d4:;
  /* 10a446d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a446d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a446dd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a446e0 je 0x10a446f6 */
  if (C.zf) goto L_10a446f6;
  /* 10a446e2 mov edx, dword ptr [0x10a6ea84] */
  EDX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a446e8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a446eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a446ed jne 0x10a446f6 */
  if (!C.zf) goto L_10a446f6;
  /* 10a446ef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10a446f6:;
  /* 10a446f6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a446fa ja 0x10a44707 */
  if ((!C.cf&&!C.zf)) goto L_10a44707;
  /* 10a446fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a446ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44702 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44705 jbe 0x10a44733 */
  if ((C.cf||C.zf)) goto L_10a44733;
L_10a44707:;
  /* 10a44707 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4470a push ecx */
  push32((uint32_t)(ECX));
  /* 10a4470b push 0x10a6ba18 */
  push32((uint32_t)(0x10a6ba18u));
  /* 10a44710 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44712 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44714 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44716 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44718 call 0x10a435e0 */
  push32(0x10a4471du); f_10a435e0();
  /* 10a4471d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44720 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44723 jne 0x10a44726 */
  if (!C.zf) goto L_10a44726;
  /* 10a44725 int3  */
  x86_unimpl("int3 @ 0x10a44725");
L_10a44726:;
  /* 10a44726 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a44728 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4472a jne 0x10a44707 */
  if (!C.zf) goto L_10a44707;
  /* 10a4472c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4472e jmp 0x10a448fc */
  goto L_10a448fc;
L_10a44733:;
  /* 10a44733 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44736 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4473b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4473e je 0x10a44780 */
  if (C.zf) goto L_10a44780;
  /* 10a44740 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44744 je 0x10a44780 */
  if (C.zf) goto L_10a44780;
  /* 10a44746 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44749 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4474f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44752 je 0x10a44780 */
  if (C.zf) goto L_10a44780;
  /* 10a44754 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44758 je 0x10a44780 */
  if (C.zf) goto L_10a44780;
L_10a4475a:;
  /* 10a4475a push 0x10a6b9e4 */
  push32((uint32_t)(0x10a6b9e4u));
  /* 10a4475f push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a44764 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44766 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44768 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4476a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4476c call 0x10a435e0 */
  push32(0x10a44771u); f_10a435e0();
  /* 10a44771 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44774 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44777 jne 0x10a4477a */
  if (!C.zf) goto L_10a4477a;
  /* 10a44779 int3  */
  x86_unimpl("int3 @ 0x10a44779");
L_10a4477a:;
  /* 10a4477a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4477c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4477e jne 0x10a4475a */
  if (!C.zf) goto L_10a4475a;
L_10a44780:;
  /* 10a44780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44783 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44786 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a44789 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4478c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4478d call 0x10a48370 */
  push32(0x10a44792u); f_10a48370();
  /* 10a44792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44795 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a44798 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4479c jne 0x10a447a5 */
  if (!C.zf) goto L_10a447a5;
  /* 10a4479e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a447a0 jmp 0x10a448fc */
  goto L_10a448fc;
L_10a447a5:;
  /* 10a447a5 mov edx, dword ptr [0x10a6ea88] */
  EDX = (r32((uint32_t)(0x10a6ea88)));
  /* 10a447ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a447ae mov dword ptr [0x10a6ea88], edx */
  w32((uint32_t)(0x10a6ea88), (EDX));
  /* 10a447b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a447b8 je 0x10a44803 */
  if (C.zf) goto L_10a44803;
  /* 10a447ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a447bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a447c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a447c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a447cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a447d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10a447d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a447da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10a447e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a447e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a447e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10a447ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a447ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10a447f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a447f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10a447fe jmp 0x10a448a3 */
  goto L_10a448a3;
L_10a44803:;
  /* 10a44803 mov edx, dword ptr [0x10a70648] */
  EDX = (r32((uint32_t)(0x10a70648)));
  /* 10a44809 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4480c mov dword ptr [0x10a70648], edx */
  w32((uint32_t)(0x10a70648), (EDX));
  /* 10a44812 mov eax, dword ptr [0x10a70650] */
  EAX = (r32((uint32_t)(0x10a70650)));
  /* 10a44817 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4481a mov dword ptr [0x10a70650], eax */
  w32((uint32_t)(0x10a70650), (EAX));
  /* 10a4481f mov ecx, dword ptr [0x10a70650] */
  ECX = (r32((uint32_t)(0x10a70650)));
  /* 10a44825 cmp ecx, dword ptr [0x10a70654] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a70654))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4482b jbe 0x10a44839 */
  if ((C.cf||C.zf)) goto L_10a44839;
  /* 10a4482d mov edx, dword ptr [0x10a70650] */
  EDX = (r32((uint32_t)(0x10a70650)));
  /* 10a44833 mov dword ptr [0x10a70654], edx */
  w32((uint32_t)(0x10a70654), (EDX));
L_10a44839:;
  /* 10a44839 cmp dword ptr [0x10a7064c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7064c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44840 je 0x10a4484f */
  if (C.zf) goto L_10a4484f;
  /* 10a44842 mov eax, dword ptr [0x10a7064c] */
  EAX = (r32((uint32_t)(0x10a7064c)));
  /* 10a44847 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4484a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a4484d jmp 0x10a44858 */
  goto L_10a44858;
L_10a4484f:;
  /* 10a4484f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44852 mov dword ptr [0x10a70644], edx */
  w32((uint32_t)(0x10a70644), (EDX));
L_10a44858:;
  /* 10a44858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4485b mov ecx, dword ptr [0x10a7064c] */
  ECX = (r32((uint32_t)(0x10a7064c)));
  /* 10a44861 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a44863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44866 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10a4486d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44870 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44873 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10a44876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44879 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4487c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10a4487f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44882 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44885 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10a44888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4488b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4488e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10a44891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44894 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44897 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10a4489a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4489d mov dword ptr [0x10a7064c], ecx */
  w32((uint32_t)(0x10a7064c), (ECX));
L_10a448a3:;
  /* 10a448a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a448a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a448a7 mov dl, byte ptr [0x10a6ea90] */
  DL = (r8((uint32_t)(0x10a6ea90)));
  /* 10a448ad push edx */
  push32((uint32_t)(EDX));
  /* 10a448ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a448b1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a448b4 push eax */
  push32((uint32_t)(EAX));
  /* 10a448b5 call 0x10a48290 */
  push32(0x10a448bau); f_10a48290();
  /* 10a448ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a448bd push 4 */
  push32((uint32_t)(0x4u));
  /* 10a448bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a448c1 mov cl, byte ptr [0x10a6ea90] */
  CL = (r8((uint32_t)(0x10a6ea90)));
  /* 10a448c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a448c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a448cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a448ce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10a448d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a448d3 call 0x10a48290 */
  push32(0x10a448d8u); f_10a48290();
  /* 10a448d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a448db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a448de push edx */
  push32((uint32_t)(EDX));
  /* 10a448df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a448e1 mov al, byte ptr [0x10a6ea92] */
  AL = (r8((uint32_t)(0x10a6ea92)));
  /* 10a448e6 push eax */
  push32((uint32_t)(EAX));
  /* 10a448e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a448ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a448ed push ecx */
  push32((uint32_t)(ECX));
  /* 10a448ee call 0x10a48290 */
  push32(0x10a448f3u); f_10a48290();
  /* 10a448f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a448f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a448f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10a448fc:;
  /* 10a448fc pop edi */
  EDI = (pop32());
  /* 10a448fd pop esi */
  ESI = (pop32());
  /* 10a448fe pop ebx */
  EBX = (pop32());
  /* 10a448ff mov esp, ebp */
  ESP = (EBP);
  /* 10a44901 pop ebp */
  EBP = (pop32());
  /* 10a44902 ret  */
  ESPCHK(0x10a445f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004910 @ 0x10a44910 (27 bytes, 13 insns) */
void f_10a44910(void) {
  FTRACE(0x10a44910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44910 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44911 mov ebp, esp */
  EBP = (ESP);
  /* 10a44913 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44915 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44917 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44919 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4491c push eax */
  push32((uint32_t)(EAX));
  /* 10a4491d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44920 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44921 call 0x10a44930 */
  push32(0x10a44926u); f_10a44930();
  /* 10a44926 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44929 pop ebp */
  EBP = (pop32());
  /* 10a4492a ret  */
  ESPCHK(0x10a44910u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10a44930 (96 bytes, 37 insns) */
void f_10a44930(void) {
  FTRACE(0x10a44930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44930 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44931 mov ebp, esp */
  EBP = (ESP);
  /* 10a44933 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a44936 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44939 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a4493d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a44940 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a44943 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44944 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a44947 push edx */
  push32((uint32_t)(EDX));
  /* 10a44948 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4494b push eax */
  push32((uint32_t)(EAX));
  /* 10a4494c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4494f push ecx */
  push32((uint32_t)(ECX));
  /* 10a44950 call 0x10a44520 */
  push32(0x10a44955u); f_10a44520();
  /* 10a44955 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44958 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4495b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4495f je 0x10a44989 */
  if (C.zf) goto L_10a44989;
  /* 10a44961 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44964 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a44967 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4496a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4496d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a44970:;
  /* 10a44970 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44973 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44976 jae 0x10a44989 */
  if (!C.cf) goto L_10a44989;
  /* 10a44978 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4497b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a4497e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44981 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44984 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a44987 jmp 0x10a44970 */
  goto L_10a44970;
L_10a44989:;
  /* 10a44989 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4498c mov esp, ebp */
  ESP = (EBP);
  /* 10a4498e pop ebp */
  EBP = (pop32());
  /* 10a4498f ret  */
  ESPCHK(0x10a44930u, _esp0);
  ESP += 4; return;
}

/* FUN_10004990 @ 0x10a44990 (27 bytes, 13 insns) */
void f_10a44990(void) {
  FTRACE(0x10a44990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44990 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44991 mov ebp, esp */
  EBP = (ESP);
  /* 10a44993 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44995 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44997 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44999 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4499c push eax */
  push32((uint32_t)(EAX));
  /* 10a4499d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a449a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a449a1 call 0x10a449b0 */
  push32(0x10a449a6u); f_10a449b0();
  /* 10a449a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a449a9 pop ebp */
  EBP = (pop32());
  /* 10a449aa ret  */
  ESPCHK(0x10a44990u, _esp0);
  ESP += 4; return;
}

/* FUN_100049b0 @ 0x10a449b0 (64 bytes, 27 insns) */
void f_10a449b0(void) {
  FTRACE(0x10a449b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a449b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a449b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a449b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a449b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a449b6 call 0x10a47f20 */
  push32(0x10a449bbu); f_10a47f20();
  /* 10a449bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a449be push 1 */
  push32((uint32_t)(0x1u));
  /* 10a449c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a449c3 push eax */
  push32((uint32_t)(EAX));
  /* 10a449c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a449c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a449c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a449cb push edx */
  push32((uint32_t)(EDX));
  /* 10a449cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a449cf push eax */
  push32((uint32_t)(EAX));
  /* 10a449d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a449d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a449d4 call 0x10a449f0 */
  push32(0x10a449d9u); f_10a449f0();
  /* 10a449d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a449dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a449df push 9 */
  push32((uint32_t)(0x9u));
  /* 10a449e1 call 0x10a47fc0 */
  push32(0x10a449e6u); f_10a47fc0();
  /* 10a449e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a449e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a449ec mov esp, ebp */
  ESP = (EBP);
  /* 10a449ee pop ebp */
  EBP = (pop32());
  /* 10a449ef ret  */
  ESPCHK(0x10a449b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049f0 @ 0x10a449f0 (1297 bytes, 431 insns) */
void f_10a449f0(void) {
  FTRACE(0x10a449f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a449f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a449f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a449f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a449f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a449f7 push esi */
  push32((uint32_t)(ESI));
  /* 10a449f8 push edi */
  push32((uint32_t)(EDI));
  /* 10a449f9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10a44a00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44a04 jne 0x10a44a23 */
  if (!C.zf) goto L_10a44a23;
  /* 10a44a06 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a44a09 push eax */
  push32((uint32_t)(EAX));
  /* 10a44a0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a44a0d push ecx */
  push32((uint32_t)(ECX));
  /* 10a44a0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44a11 push edx */
  push32((uint32_t)(EDX));
  /* 10a44a12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44a15 push eax */
  push32((uint32_t)(EAX));
  /* 10a44a16 call 0x10a44520 */
  push32(0x10a44a1bu); f_10a44520();
  /* 10a44a1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44a1e jmp 0x10a44efa */
  goto L_10a44efa;
L_10a44a23:;
  /* 10a44a23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44a27 je 0x10a44a46 */
  if (C.zf) goto L_10a44a46;
  /* 10a44a29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44a2d jne 0x10a44a46 */
  if (!C.zf) goto L_10a44a46;
  /* 10a44a2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44a32 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44a33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44a36 push edx */
  push32((uint32_t)(EDX));
  /* 10a44a37 call 0x10a44fb0 */
  push32(0x10a44a3cu); f_10a44fb0();
  /* 10a44a3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44a3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44a41 jmp 0x10a44efa */
  goto L_10a44efa;
L_10a44a46:;
  /* 10a44a46 mov eax, dword ptr [0x10a6ea84] */
  EAX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a44a4b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a44a4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44a50 je 0x10a44a82 */
  if (C.zf) goto L_10a44a82;
L_10a44a52:;
  /* 10a44a52 call 0x10a456c0 */
  push32(0x10a44a57u); f_10a456c0();
  /* 10a44a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44a59 jne 0x10a44a7c */
  if (!C.zf) goto L_10a44a7c;
  /* 10a44a5b push 0x10a6baa8 */
  push32((uint32_t)(0x10a6baa8u));
  /* 10a44a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44a62 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10a44a67 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a44a6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44a6e call 0x10a435e0 */
  push32(0x10a44a73u); f_10a435e0();
  /* 10a44a73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44a76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44a79 jne 0x10a44a7c */
  if (!C.zf) goto L_10a44a7c;
  /* 10a44a7b int3  */
  x86_unimpl("int3 @ 0x10a44a7b");
L_10a44a7c:;
  /* 10a44a7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a44a7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a44a80 jne 0x10a44a52 */
  if (!C.zf) goto L_10a44a52;
L_10a44a82:;
  /* 10a44a82 mov edx, dword ptr [0x10a6ea88] */
  EDX = (r32((uint32_t)(0x10a6ea88)));
  /* 10a44a88 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a44a8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a44a8e cmp eax, dword ptr [0x10a6ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a6ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44a94 jne 0x10a44a97 */
  if (!C.zf) goto L_10a44a97;
  /* 10a44a96 int3  */
  x86_unimpl("int3 @ 0x10a44a96");
L_10a44a97:;
  /* 10a44a97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a44a9a push ecx */
  push32((uint32_t)(ECX));
  /* 10a44a9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a44a9e push edx */
  push32((uint32_t)(EDX));
  /* 10a44a9f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a44aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10a44aa3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44aa7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44aaa push edx */
  push32((uint32_t)(EDX));
  /* 10a44aab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44aae push eax */
  push32((uint32_t)(EAX));
  /* 10a44aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44ab1 call dword ptr [0x10a6ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a6ec90))), 0x10a44ab7u);
  /* 10a44ab7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44aba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44abc jne 0x10a44b1c */
  if (!C.zf) goto L_10a44b1c;
  /* 10a44abe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44ac2 je 0x10a44aef */
  if (C.zf) goto L_10a44aef;
L_10a44ac4:;
  /* 10a44ac4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a44ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44ac8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a44acb push edx */
  push32((uint32_t)(EDX));
  /* 10a44acc push 0x10a6bc24 */
  push32((uint32_t)(0x10a6bc24u));
  /* 10a44ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44ad9 call 0x10a435e0 */
  push32(0x10a44adeu); f_10a435e0();
  /* 10a44ade add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44ae1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44ae4 jne 0x10a44ae7 */
  if (!C.zf) goto L_10a44ae7;
  /* 10a44ae6 int3  */
  x86_unimpl("int3 @ 0x10a44ae6");
L_10a44ae7:;
  /* 10a44ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44aeb jne 0x10a44ac4 */
  if (!C.zf) goto L_10a44ac4;
  /* 10a44aed jmp 0x10a44b15 */
  goto L_10a44b15;
L_10a44aef:;
  /* 10a44aef push 0x10a6bc00 */
  push32((uint32_t)(0x10a6bc00u));
  /* 10a44af4 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a44af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44afb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44afd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44aff push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44b01 call 0x10a435e0 */
  push32(0x10a44b06u); f_10a435e0();
  /* 10a44b06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44b09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44b0c jne 0x10a44b0f */
  if (!C.zf) goto L_10a44b0f;
  /* 10a44b0e int3  */
  x86_unimpl("int3 @ 0x10a44b0e");
L_10a44b0f:;
  /* 10a44b0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a44b11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a44b13 jne 0x10a44aef */
  if (!C.zf) goto L_10a44aef;
L_10a44b15:;
  /* 10a44b15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44b17 jmp 0x10a44efa */
  goto L_10a44efa;
L_10a44b1c:;
  /* 10a44b1c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44b20 jbe 0x10a44b4e */
  if ((C.cf||C.zf)) goto L_10a44b4e;
L_10a44b22:;
  /* 10a44b22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44b25 push edx */
  push32((uint32_t)(EDX));
  /* 10a44b26 push 0x10a6bbd0 */
  push32((uint32_t)(0x10a6bbd0u));
  /* 10a44b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44b31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44b33 call 0x10a435e0 */
  push32(0x10a44b38u); f_10a435e0();
  /* 10a44b38 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44b3b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44b3e jne 0x10a44b41 */
  if (!C.zf) goto L_10a44b41;
  /* 10a44b40 int3  */
  x86_unimpl("int3 @ 0x10a44b40");
L_10a44b41:;
  /* 10a44b41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44b43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44b45 jne 0x10a44b22 */
  if (!C.zf) goto L_10a44b22;
  /* 10a44b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44b49 jmp 0x10a44efa */
  goto L_10a44efa;
L_10a44b4e:;
  /* 10a44b4e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44b52 je 0x10a44b96 */
  if (C.zf) goto L_10a44b96;
  /* 10a44b54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44b57 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a44b5d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44b60 je 0x10a44b96 */
  if (C.zf) goto L_10a44b96;
  /* 10a44b62 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44b65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a44b6b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44b6e je 0x10a44b96 */
  if (C.zf) goto L_10a44b96;
L_10a44b70:;
  /* 10a44b70 push 0x10a6b9e4 */
  push32((uint32_t)(0x10a6b9e4u));
  /* 10a44b75 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a44b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44b80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44b82 call 0x10a435e0 */
  push32(0x10a44b87u); f_10a435e0();
  /* 10a44b87 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44b8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44b8d jne 0x10a44b90 */
  if (!C.zf) goto L_10a44b90;
  /* 10a44b8f int3  */
  x86_unimpl("int3 @ 0x10a44b8f");
L_10a44b90:;
  /* 10a44b90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44b94 jne 0x10a44b70 */
  if (!C.zf) goto L_10a44b70;
L_10a44b96:;
  /* 10a44b96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44b99 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44b9a call 0x10a45b20 */
  push32(0x10a44b9fu); f_10a45b20();
  /* 10a44b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44ba2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44ba4 jne 0x10a44bc7 */
  if (!C.zf) goto L_10a44bc7;
  /* 10a44ba6 push 0x10a6bbac */
  push32((uint32_t)(0x10a6bbacu));
  /* 10a44bab push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44bad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10a44bb2 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a44bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44bb9 call 0x10a435e0 */
  push32(0x10a44bbeu); f_10a435e0();
  /* 10a44bbe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44bc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44bc4 jne 0x10a44bc7 */
  if (!C.zf) goto L_10a44bc7;
  /* 10a44bc6 int3  */
  x86_unimpl("int3 @ 0x10a44bc6");
L_10a44bc7:;
  /* 10a44bc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a44bc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a44bcb jne 0x10a44b96 */
  if (!C.zf) goto L_10a44b96;
  /* 10a44bcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44bd0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a44bd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a44bd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44bd9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44bdd jne 0x10a44be6 */
  if (!C.zf) goto L_10a44be6;
  /* 10a44bdf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10a44be6:;
  /* 10a44be6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44bea je 0x10a44c2a */
  if (C.zf) goto L_10a44c2a;
L_10a44bec:;
  /* 10a44bec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44bef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44bf6 jne 0x10a44c01 */
  if (!C.zf) goto L_10a44c01;
  /* 10a44bf8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44bfb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44bff je 0x10a44c22 */
  if (C.zf) goto L_10a44c22;
L_10a44c01:;
  /* 10a44c01 push 0x10a6bb64 */
  push32((uint32_t)(0x10a6bb64u));
  /* 10a44c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44c08 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10a44c0d push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a44c12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44c14 call 0x10a435e0 */
  push32(0x10a44c19u); f_10a435e0();
  /* 10a44c19 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44c1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44c1f jne 0x10a44c22 */
  if (!C.zf) goto L_10a44c22;
  /* 10a44c21 int3  */
  x86_unimpl("int3 @ 0x10a44c21");
L_10a44c22:;
  /* 10a44c22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a44c24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a44c26 jne 0x10a44bec */
  if (!C.zf) goto L_10a44bec;
  /* 10a44c28 jmp 0x10a44c8e */
  goto L_10a44c8e;
L_10a44c2a:;
  /* 10a44c2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44c2d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a44c30 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a44c35 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44c38 jne 0x10a44c4f */
  if (!C.zf) goto L_10a44c4f;
  /* 10a44c3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44c3d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a44c43 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44c46 jne 0x10a44c4f */
  if (!C.zf) goto L_10a44c4f;
  /* 10a44c48 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10a44c4f:;
  /* 10a44c4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44c52 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a44c55 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a44c5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44c5d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a44c63 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44c65 je 0x10a44c88 */
  if (C.zf) goto L_10a44c88;
  /* 10a44c67 push 0x10a6bb28 */
  push32((uint32_t)(0x10a6bb28u));
  /* 10a44c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44c6e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10a44c73 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a44c78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44c7a call 0x10a435e0 */
  push32(0x10a44c7fu); f_10a435e0();
  /* 10a44c7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44c82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44c85 jne 0x10a44c88 */
  if (!C.zf) goto L_10a44c88;
  /* 10a44c87 int3  */
  x86_unimpl("int3 @ 0x10a44c87");
L_10a44c88:;
  /* 10a44c88 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a44c8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a44c8c jne 0x10a44c4f */
  if (!C.zf) goto L_10a44c4f;
L_10a44c8e:;
  /* 10a44c8e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44c92 je 0x10a44cb9 */
  if (C.zf) goto L_10a44cb9;
  /* 10a44c94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44c97 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44c9a push eax */
  push32((uint32_t)(EAX));
  /* 10a44c9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10a44c9f call 0x10a484a0 */
  push32(0x10a44ca4u); f_10a484a0();
  /* 10a44ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44ca7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a44caa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44cae jne 0x10a44cb7 */
  if (!C.zf) goto L_10a44cb7;
  /* 10a44cb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44cb2 jmp 0x10a44efa */
  goto L_10a44efa;
L_10a44cb7:;
  /* 10a44cb7 jmp 0x10a44cdc */
  goto L_10a44cdc;
L_10a44cb9:;
  /* 10a44cb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44cbc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44cbf push edx */
  push32((uint32_t)(EDX));
  /* 10a44cc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a44cc3 push eax */
  push32((uint32_t)(EAX));
  /* 10a44cc4 call 0x10a483f0 */
  push32(0x10a44cc9u); f_10a483f0();
  /* 10a44cc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44ccc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a44ccf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44cd3 jne 0x10a44cdc */
  if (!C.zf) goto L_10a44cdc;
  /* 10a44cd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44cd7 jmp 0x10a44efa */
  goto L_10a44efa;
L_10a44cdc:;
  /* 10a44cdc mov ecx, dword ptr [0x10a6ea88] */
  ECX = (r32((uint32_t)(0x10a6ea88)));
  /* 10a44ce2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44ce5 mov dword ptr [0x10a6ea88], ecx */
  w32((uint32_t)(0x10a6ea88), (ECX));
  /* 10a44ceb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44cef jne 0x10a44d47 */
  if (!C.zf) goto L_10a44d47;
  /* 10a44cf1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44cf4 mov eax, dword ptr [0x10a70648] */
  EAX = (r32((uint32_t)(0x10a70648)));
  /* 10a44cf9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a44cfc mov dword ptr [0x10a70648], eax */
  w32((uint32_t)(0x10a70648), (EAX));
  /* 10a44d01 mov ecx, dword ptr [0x10a70648] */
  ECX = (r32((uint32_t)(0x10a70648)));
  /* 10a44d07 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44d0a mov dword ptr [0x10a70648], ecx */
  w32((uint32_t)(0x10a70648), (ECX));
  /* 10a44d10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44d13 mov eax, dword ptr [0x10a70650] */
  EAX = (r32((uint32_t)(0x10a70650)));
  /* 10a44d18 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a44d1b mov dword ptr [0x10a70650], eax */
  w32((uint32_t)(0x10a70650), (EAX));
  /* 10a44d20 mov ecx, dword ptr [0x10a70650] */
  ECX = (r32((uint32_t)(0x10a70650)));
  /* 10a44d26 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44d29 mov dword ptr [0x10a70650], ecx */
  w32((uint32_t)(0x10a70650), (ECX));
  /* 10a44d2f mov edx, dword ptr [0x10a70650] */
  EDX = (r32((uint32_t)(0x10a70650)));
  /* 10a44d35 cmp edx, dword ptr [0x10a70654] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a70654))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44d3b jbe 0x10a44d47 */
  if ((C.cf||C.zf)) goto L_10a44d47;
  /* 10a44d3d mov eax, dword ptr [0x10a70650] */
  EAX = (r32((uint32_t)(0x10a70650)));
  /* 10a44d42 mov dword ptr [0x10a70654], eax */
  w32((uint32_t)(0x10a70654), (EAX));
L_10a44d47:;
  /* 10a44d47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44d4a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44d4d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a44d50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44d53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44d56 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44d59 jbe 0x10a44d7f */
  if ((C.cf||C.zf)) goto L_10a44d7f;
  /* 10a44d5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44d5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44d61 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a44d64 push edx */
  push32((uint32_t)(EDX));
  /* 10a44d65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44d67 mov al, byte ptr [0x10a6ea92] */
  AL = (r8((uint32_t)(0x10a6ea92)));
  /* 10a44d6c push eax */
  push32((uint32_t)(EAX));
  /* 10a44d6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44d70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44d73 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44d76 push edx */
  push32((uint32_t)(EDX));
  /* 10a44d77 call 0x10a48290 */
  push32(0x10a44d7cu); f_10a48290();
  /* 10a44d7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a44d7f:;
  /* 10a44d7f push 4 */
  push32((uint32_t)(0x4u));
  /* 10a44d81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a44d83 mov al, byte ptr [0x10a6ea90] */
  AL = (r8((uint32_t)(0x10a6ea90)));
  /* 10a44d88 push eax */
  push32((uint32_t)(EAX));
  /* 10a44d89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44d8c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44d8f push ecx */
  push32((uint32_t)(ECX));
  /* 10a44d90 call 0x10a48290 */
  push32(0x10a44d95u); f_10a48290();
  /* 10a44d95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44d98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44d9c jne 0x10a44db9 */
  if (!C.zf) goto L_10a44db9;
  /* 10a44d9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44da1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a44da4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a44da7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44daa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a44dad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10a44db0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44db3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a44db6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10a44db9:;
  /* 10a44db9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44dbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44dbf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10a44dc2:;
  /* 10a44dc2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44dc6 jne 0x10a44df7 */
  if (!C.zf) goto L_10a44df7;
  /* 10a44dc8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44dcc jne 0x10a44dd6 */
  if (!C.zf) goto L_10a44dd6;
  /* 10a44dce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44dd1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44dd4 je 0x10a44df7 */
  if (C.zf) goto L_10a44df7;
L_10a44dd6:;
  /* 10a44dd6 push 0x10a6baf4 */
  push32((uint32_t)(0x10a6baf4u));
  /* 10a44ddb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44ddd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10a44de2 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a44de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44de9 call 0x10a435e0 */
  push32(0x10a44deeu); f_10a435e0();
  /* 10a44dee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44df1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44df4 jne 0x10a44df7 */
  if (!C.zf) goto L_10a44df7;
  /* 10a44df6 int3  */
  x86_unimpl("int3 @ 0x10a44df6");
L_10a44df7:;
  /* 10a44df7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a44df9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a44dfb jne 0x10a44dc2 */
  if (!C.zf) goto L_10a44dc2;
  /* 10a44dfd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44e00 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44e03 je 0x10a44e0b */
  if (C.zf) goto L_10a44e0b;
  /* 10a44e05 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44e09 je 0x10a44e13 */
  if (C.zf) goto L_10a44e13;
L_10a44e0b:;
  /* 10a44e0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44e0e jmp 0x10a44efa */
  goto L_10a44efa;
L_10a44e13:;
  /* 10a44e13 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44e16 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44e19 je 0x10a44e2b */
  if (C.zf) goto L_10a44e2b;
  /* 10a44e1b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44e1e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a44e20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44e23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a44e26 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a44e29 jmp 0x10a44e67 */
  goto L_10a44e67;
L_10a44e2b:;
  /* 10a44e2b mov eax, dword ptr [0x10a70644] */
  EAX = (r32((uint32_t)(0x10a70644)));
  /* 10a44e30 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44e33 je 0x10a44e56 */
  if (C.zf) goto L_10a44e56;
  /* 10a44e35 push 0x10a6bad8 */
  push32((uint32_t)(0x10a6bad8u));
  /* 10a44e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44e3c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10a44e41 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a44e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44e48 call 0x10a435e0 */
  push32(0x10a44e4du); f_10a435e0();
  /* 10a44e4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44e50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44e53 jne 0x10a44e56 */
  if (!C.zf) goto L_10a44e56;
  /* 10a44e55 int3  */
  x86_unimpl("int3 @ 0x10a44e55");
L_10a44e56:;
  /* 10a44e56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a44e58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a44e5a jne 0x10a44e2b */
  if (!C.zf) goto L_10a44e2b;
  /* 10a44e5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44e5f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a44e62 mov dword ptr [0x10a70644], eax */
  w32((uint32_t)(0x10a70644), (EAX));
L_10a44e67:;
  /* 10a44e67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44e6a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44e6e je 0x10a44e7f */
  if (C.zf) goto L_10a44e7f;
  /* 10a44e70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44e73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a44e76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44e79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a44e7b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a44e7d jmp 0x10a44eba */
  goto L_10a44eba;
L_10a44e7f:;
  /* 10a44e7f mov eax, dword ptr [0x10a7064c] */
  EAX = (r32((uint32_t)(0x10a7064c)));
  /* 10a44e84 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44e87 je 0x10a44eaa */
  if (C.zf) goto L_10a44eaa;
  /* 10a44e89 push 0x10a6babc */
  push32((uint32_t)(0x10a6babcu));
  /* 10a44e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44e90 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10a44e95 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a44e9a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a44e9c call 0x10a435e0 */
  push32(0x10a44ea1u); f_10a435e0();
  /* 10a44ea1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44ea4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44ea7 jne 0x10a44eaa */
  if (!C.zf) goto L_10a44eaa;
  /* 10a44ea9 int3  */
  x86_unimpl("int3 @ 0x10a44ea9");
L_10a44eaa:;
  /* 10a44eaa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a44eac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a44eae jne 0x10a44e7f */
  if (!C.zf) goto L_10a44e7f;
  /* 10a44eb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44eb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a44eb5 mov dword ptr [0x10a7064c], eax */
  w32((uint32_t)(0x10a7064c), (EAX));
L_10a44eba:;
  /* 10a44eba cmp dword ptr [0x10a7064c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7064c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a44ec1 je 0x10a44ed1 */
  if (C.zf) goto L_10a44ed1;
  /* 10a44ec3 mov ecx, dword ptr [0x10a7064c] */
  ECX = (r32((uint32_t)(0x10a7064c)));
  /* 10a44ec9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44ecc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a44ecf jmp 0x10a44ed9 */
  goto L_10a44ed9;
L_10a44ed1:;
  /* 10a44ed1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44ed4 mov dword ptr [0x10a70644], eax */
  w32((uint32_t)(0x10a70644), (EAX));
L_10a44ed9:;
  /* 10a44ed9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44edc mov edx, dword ptr [0x10a7064c] */
  EDX = (r32((uint32_t)(0x10a7064c)));
  /* 10a44ee2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a44ee4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44ee7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a44eee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a44ef1 mov dword ptr [0x10a7064c], ecx */
  w32((uint32_t)(0x10a7064c), (ECX));
  /* 10a44ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a44efa:;
  /* 10a44efa pop edi */
  EDI = (pop32());
  /* 10a44efb pop esi */
  ESI = (pop32());
  /* 10a44efc pop ebx */
  EBX = (pop32());
  /* 10a44efd mov esp, ebp */
  ESP = (EBP);
  /* 10a44eff pop ebp */
  EBP = (pop32());
  /* 10a44f00 ret  */
  ESPCHK(0x10a449f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f10 @ 0x10a44f10 (27 bytes, 13 insns) */
void f_10a44f10(void) {
  FTRACE(0x10a44f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44f11 mov ebp, esp */
  EBP = (ESP);
  /* 10a44f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44f17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44f19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44f1c push eax */
  push32((uint32_t)(EAX));
  /* 10a44f1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44f20 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44f21 call 0x10a44f30 */
  push32(0x10a44f26u); f_10a44f30();
  /* 10a44f26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44f29 pop ebp */
  EBP = (pop32());
  /* 10a44f2a ret  */
  ESPCHK(0x10a44f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f30 @ 0x10a44f30 (64 bytes, 27 insns) */
void f_10a44f30(void) {
  FTRACE(0x10a44f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44f31 mov ebp, esp */
  EBP = (ESP);
  /* 10a44f33 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44f34 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a44f36 call 0x10a47f20 */
  push32(0x10a44f3bu); f_10a47f20();
  /* 10a44f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a44f40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a44f43 push eax */
  push32((uint32_t)(EAX));
  /* 10a44f44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a44f47 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44f48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a44f4b push edx */
  push32((uint32_t)(EDX));
  /* 10a44f4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44f4f push eax */
  push32((uint32_t)(EAX));
  /* 10a44f50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44f54 call 0x10a449f0 */
  push32(0x10a44f59u); f_10a449f0();
  /* 10a44f59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44f5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a44f5f push 9 */
  push32((uint32_t)(0x9u));
  /* 10a44f61 call 0x10a47fc0 */
  push32(0x10a44f66u); f_10a47fc0();
  /* 10a44f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44f69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a44f6c mov esp, ebp */
  ESP = (EBP);
  /* 10a44f6e pop ebp */
  EBP = (pop32());
  /* 10a44f6f ret  */
  ESPCHK(0x10a44f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f70 @ 0x10a44f70 (19 bytes, 9 insns) */
void f_10a44f70(void) {
  FTRACE(0x10a44f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44f71 mov ebp, esp */
  EBP = (ESP);
  /* 10a44f73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44f75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44f78 push eax */
  push32((uint32_t)(EAX));
  /* 10a44f79 call 0x10a44fb0 */
  push32(0x10a44f7eu); f_10a44fb0();
  /* 10a44f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44f81 pop ebp */
  EBP = (pop32());
  /* 10a44f82 ret  */
  ESPCHK(0x10a44f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f90 @ 0x10a44f90 (19 bytes, 9 insns) */
void f_10a44f90(void) {
  FTRACE(0x10a44f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44f91 mov ebp, esp */
  EBP = (ESP);
  /* 10a44f93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a44f95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44f98 push eax */
  push32((uint32_t)(EAX));
  /* 10a44f99 call 0x10a44fe0 */
  push32(0x10a44f9eu); f_10a44fe0();
  /* 10a44f9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44fa1 pop ebp */
  EBP = (pop32());
  /* 10a44fa2 ret  */
  ESPCHK(0x10a44f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fb0 @ 0x10a44fb0 (41 bytes, 16 insns) */
void f_10a44fb0(void) {
  FTRACE(0x10a44fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a44fb3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a44fb5 call 0x10a47f20 */
  push32(0x10a44fbau); f_10a47f20();
  /* 10a44fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44fbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a44fc0 push eax */
  push32((uint32_t)(EAX));
  /* 10a44fc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a44fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44fc5 call 0x10a44fe0 */
  push32(0x10a44fcau); f_10a44fe0();
  /* 10a44fca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44fcd push 9 */
  push32((uint32_t)(0x9u));
  /* 10a44fcf call 0x10a47fc0 */
  push32(0x10a44fd4u); f_10a47fc0();
  /* 10a44fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a44fd7 pop ebp */
  EBP = (pop32());
  /* 10a44fd8 ret  */
  ESPCHK(0x10a44fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fe0 @ 0x10a44fe0 (1004 bytes, 342 insns) */
void f_10a44fe0(void) {
  FTRACE(0x10a44fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a44fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a44fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10a44fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a44fe4 push ebx */
  push32((uint32_t)(EBX));
  /* 10a44fe5 push esi */
  push32((uint32_t)(ESI));
  /* 10a44fe6 push edi */
  push32((uint32_t)(EDI));
  /* 10a44fe7 mov eax, dword ptr [0x10a6ea84] */
  EAX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a44fec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a44fef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44ff1 je 0x10a45023 */
  if (C.zf) goto L_10a45023;
L_10a44ff3:;
  /* 10a44ff3 call 0x10a456c0 */
  push32(0x10a44ff8u); f_10a456c0();
  /* 10a44ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a44ffa jne 0x10a4501d */
  if (!C.zf) goto L_10a4501d;
  /* 10a44ffc push 0x10a6baa8 */
  push32((uint32_t)(0x10a6baa8u));
  /* 10a45001 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45003 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10a45008 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a4500d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4500f call 0x10a435e0 */
  push32(0x10a45014u); f_10a435e0();
  /* 10a45014 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45017 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4501a jne 0x10a4501d */
  if (!C.zf) goto L_10a4501d;
  /* 10a4501c int3  */
  x86_unimpl("int3 @ 0x10a4501c");
L_10a4501d:;
  /* 10a4501d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4501f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a45021 jne 0x10a44ff3 */
  if (!C.zf) goto L_10a44ff3;
L_10a45023:;
  /* 10a45023 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45027 jne 0x10a4502e */
  if (!C.zf) goto L_10a4502e;
  /* 10a45029 jmp 0x10a453c5 */
  goto L_10a453c5;
L_10a4502e:;
  /* 10a4502e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45030 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45032 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45034 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45037 push edx */
  push32((uint32_t)(EDX));
  /* 10a45038 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4503a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4503d push eax */
  push32((uint32_t)(EAX));
  /* 10a4503e push 3 */
  push32((uint32_t)(0x3u));
  /* 10a45040 call dword ptr [0x10a6ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a6ec90))), 0x10a45046u);
  /* 10a45046 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4504b jne 0x10a45078 */
  if (!C.zf) goto L_10a45078;
L_10a4504d:;
  /* 10a4504d push 0x10a6bd6c */
  push32((uint32_t)(0x10a6bd6cu));
  /* 10a45052 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a45057 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45059 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4505b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4505d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4505f call 0x10a435e0 */
  push32(0x10a45064u); f_10a435e0();
  /* 10a45064 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45067 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4506a jne 0x10a4506d */
  if (!C.zf) goto L_10a4506d;
  /* 10a4506c int3  */
  x86_unimpl("int3 @ 0x10a4506c");
L_10a4506d:;
  /* 10a4506d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4506f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a45071 jne 0x10a4504d */
  if (!C.zf) goto L_10a4504d;
  /* 10a45073 jmp 0x10a453c5 */
  goto L_10a453c5;
L_10a45078:;
  /* 10a45078 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4507b push edx */
  push32((uint32_t)(EDX));
  /* 10a4507c call 0x10a45b20 */
  push32(0x10a45081u); f_10a45b20();
  /* 10a45081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45086 jne 0x10a450a9 */
  if (!C.zf) goto L_10a450a9;
  /* 10a45088 push 0x10a6bbac */
  push32((uint32_t)(0x10a6bbacu));
  /* 10a4508d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4508f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10a45094 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a45099 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4509b call 0x10a435e0 */
  push32(0x10a450a0u); f_10a435e0();
  /* 10a450a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a450a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a450a6 jne 0x10a450a9 */
  if (!C.zf) goto L_10a450a9;
  /* 10a450a8 int3  */
  x86_unimpl("int3 @ 0x10a450a8");
L_10a450a9:;
  /* 10a450a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a450ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a450ad jne 0x10a45078 */
  if (!C.zf) goto L_10a45078;
  /* 10a450af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a450b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a450b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a450b8:;
  /* 10a450b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a450bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a450be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a450c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a450c6 je 0x10a4510b */
  if (C.zf) goto L_10a4510b;
  /* 10a450c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a450cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a450cf je 0x10a4510b */
  if (C.zf) goto L_10a4510b;
  /* 10a450d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a450d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a450d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a450dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a450df je 0x10a4510b */
  if (C.zf) goto L_10a4510b;
  /* 10a450e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a450e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a450e8 je 0x10a4510b */
  if (C.zf) goto L_10a4510b;
  /* 10a450ea push 0x10a6bd44 */
  push32((uint32_t)(0x10a6bd44u));
  /* 10a450ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10a450f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10a450f6 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a450fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a450fd call 0x10a435e0 */
  push32(0x10a45102u); f_10a435e0();
  /* 10a45102 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45105 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45108 jne 0x10a4510b */
  if (!C.zf) goto L_10a4510b;
  /* 10a4510a int3  */
  x86_unimpl("int3 @ 0x10a4510a");
L_10a4510b:;
  /* 10a4510b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4510d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4510f jne 0x10a450b8 */
  if (!C.zf) goto L_10a450b8;
  /* 10a45111 mov eax, dword ptr [0x10a6ea84] */
  EAX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a45116 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a45119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4511b jne 0x10a451e6 */
  if (!C.zf) goto L_10a451e6;
  /* 10a45121 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a45123 mov cl, byte ptr [0x10a6ea90] */
  CL = (r8((uint32_t)(0x10a6ea90)));
  /* 10a45129 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4512a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4512d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45130 push edx */
  push32((uint32_t)(EDX));
  /* 10a45131 call 0x10a45630 */
  push32(0x10a45136u); f_10a45630();
  /* 10a45136 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4513b jne 0x10a45180 */
  if (!C.zf) goto L_10a45180;
L_10a4513d:;
  /* 10a4513d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45140 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45143 push eax */
  push32((uint32_t)(EAX));
  /* 10a45144 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45147 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a4514a push edx */
  push32((uint32_t)(EDX));
  /* 10a4514b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4514e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a45151 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a45157 mov edx, dword ptr [ecx*4 + 0x10a6ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6ea94)));
  /* 10a4515e push edx */
  push32((uint32_t)(EDX));
  /* 10a4515f push 0x10a6bd18 */
  push32((uint32_t)(0x10a6bd18u));
  /* 10a45164 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45166 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45168 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4516a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4516c call 0x10a435e0 */
  push32(0x10a45171u); f_10a435e0();
  /* 10a45171 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45174 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45177 jne 0x10a4517a */
  if (!C.zf) goto L_10a4517a;
  /* 10a45179 int3  */
  x86_unimpl("int3 @ 0x10a45179");
L_10a4517a:;
  /* 10a4517a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4517c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4517e jne 0x10a4513d */
  if (!C.zf) goto L_10a4513d;
L_10a45180:;
  /* 10a45180 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a45182 mov cl, byte ptr [0x10a6ea90] */
  CL = (r8((uint32_t)(0x10a6ea90)));
  /* 10a45188 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4518c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a4518f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45192 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10a45196 push edx */
  push32((uint32_t)(EDX));
  /* 10a45197 call 0x10a45630 */
  push32(0x10a4519cu); f_10a45630();
  /* 10a4519c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4519f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a451a1 jne 0x10a451e6 */
  if (!C.zf) goto L_10a451e6;
L_10a451a3:;
  /* 10a451a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a451a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a451a9 push eax */
  push32((uint32_t)(EAX));
  /* 10a451aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a451ad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a451b0 push edx */
  push32((uint32_t)(EDX));
  /* 10a451b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a451b4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a451b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a451bd mov edx, dword ptr [ecx*4 + 0x10a6ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6ea94)));
  /* 10a451c4 push edx */
  push32((uint32_t)(EDX));
  /* 10a451c5 push 0x10a6bcec */
  push32((uint32_t)(0x10a6bcecu));
  /* 10a451ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10a451cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a451ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10a451d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a451d2 call 0x10a435e0 */
  push32(0x10a451d7u); f_10a435e0();
  /* 10a451d7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a451da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a451dd jne 0x10a451e0 */
  if (!C.zf) goto L_10a451e0;
  /* 10a451df int3  */
  x86_unimpl("int3 @ 0x10a451df");
L_10a451e0:;
  /* 10a451e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a451e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a451e4 jne 0x10a451a3 */
  if (!C.zf) goto L_10a451a3;
L_10a451e6:;
  /* 10a451e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a451e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a451ed jne 0x10a4525b */
  if (!C.zf) goto L_10a4525b;
L_10a451ef:;
  /* 10a451ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a451f2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a451f9 jne 0x10a45204 */
  if (!C.zf) goto L_10a45204;
  /* 10a451fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a451fe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45202 je 0x10a45225 */
  if (C.zf) goto L_10a45225;
L_10a45204:;
  /* 10a45204 push 0x10a6bcac */
  push32((uint32_t)(0x10a6bcacu));
  /* 10a45209 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4520b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10a45210 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a45215 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a45217 call 0x10a435e0 */
  push32(0x10a4521cu); f_10a435e0();
  /* 10a4521c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4521f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45222 jne 0x10a45225 */
  if (!C.zf) goto L_10a45225;
  /* 10a45224 int3  */
  x86_unimpl("int3 @ 0x10a45224");
L_10a45225:;
  /* 10a45225 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a45227 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a45229 jne 0x10a451ef */
  if (!C.zf) goto L_10a451ef;
  /* 10a4522b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4522e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a45231 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45234 push eax */
  push32((uint32_t)(EAX));
  /* 10a45235 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a45237 mov cl, byte ptr [0x10a6ea91] */
  CL = (r8((uint32_t)(0x10a6ea91)));
  /* 10a4523d push ecx */
  push32((uint32_t)(ECX));
  /* 10a4523e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45241 push edx */
  push32((uint32_t)(EDX));
  /* 10a45242 call 0x10a48290 */
  push32(0x10a45247u); f_10a48290();
  /* 10a45247 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4524a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4524d push eax */
  push32((uint32_t)(EAX));
  /* 10a4524e call 0x10a48690 */
  push32(0x10a45253u); f_10a48690();
  /* 10a45253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45256 jmp 0x10a453c5 */
  goto L_10a453c5;
L_10a4525b:;
  /* 10a4525b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4525e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45262 jne 0x10a45271 */
  if (!C.zf) goto L_10a45271;
  /* 10a45264 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45268 jne 0x10a45271 */
  if (!C.zf) goto L_10a45271;
  /* 10a4526a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10a45271:;
  /* 10a45271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45274 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a45277 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4527a je 0x10a4529d */
  if (C.zf) goto L_10a4529d;
  /* 10a4527c push 0x10a6bc8c */
  push32((uint32_t)(0x10a6bc8cu));
  /* 10a45281 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45283 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10a45288 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a4528d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4528f call 0x10a435e0 */
  push32(0x10a45294u); f_10a435e0();
  /* 10a45294 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45297 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4529a jne 0x10a4529d */
  if (!C.zf) goto L_10a4529d;
  /* 10a4529c int3  */
  x86_unimpl("int3 @ 0x10a4529c");
L_10a4529d:;
  /* 10a4529d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4529f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a452a1 jne 0x10a45271 */
  if (!C.zf) goto L_10a45271;
  /* 10a452a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a452a6 mov eax, dword ptr [0x10a70650] */
  EAX = (r32((uint32_t)(0x10a70650)));
  /* 10a452ab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a452ae mov dword ptr [0x10a70650], eax */
  w32((uint32_t)(0x10a70650), (EAX));
  /* 10a452b3 mov ecx, dword ptr [0x10a6ea84] */
  ECX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a452b9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a452bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a452be jne 0x10a4539c */
  if (!C.zf) goto L_10a4539c;
  /* 10a452c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a452c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a452ca je 0x10a452dc */
  if (C.zf) goto L_10a452dc;
  /* 10a452cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a452cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a452d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a452d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a452d7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a452da jmp 0x10a4531a */
  goto L_10a4531a;
L_10a452dc:;
  /* 10a452dc mov ecx, dword ptr [0x10a70644] */
  ECX = (r32((uint32_t)(0x10a70644)));
  /* 10a452e2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a452e5 je 0x10a45308 */
  if (C.zf) goto L_10a45308;
  /* 10a452e7 push 0x10a6bc74 */
  push32((uint32_t)(0x10a6bc74u));
  /* 10a452ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10a452ee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10a452f3 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a452f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a452fa call 0x10a435e0 */
  push32(0x10a452ffu); f_10a435e0();
  /* 10a452ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45302 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45305 jne 0x10a45308 */
  if (!C.zf) goto L_10a45308;
  /* 10a45307 int3  */
  x86_unimpl("int3 @ 0x10a45307");
L_10a45308:;
  /* 10a45308 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4530a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4530c jne 0x10a452dc */
  if (!C.zf) goto L_10a452dc;
  /* 10a4530e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45311 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a45314 mov dword ptr [0x10a70644], ecx */
  w32((uint32_t)(0x10a70644), (ECX));
L_10a4531a:;
  /* 10a4531a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4531d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45321 je 0x10a45332 */
  if (C.zf) goto L_10a45332;
  /* 10a45323 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45326 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a45329 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4532c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4532e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a45330 jmp 0x10a4536f */
  goto L_10a4536f;
L_10a45332:;
  /* 10a45332 mov ecx, dword ptr [0x10a7064c] */
  ECX = (r32((uint32_t)(0x10a7064c)));
  /* 10a45338 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4533b je 0x10a4535e */
  if (C.zf) goto L_10a4535e;
  /* 10a4533d push 0x10a6bc5c */
  push32((uint32_t)(0x10a6bc5cu));
  /* 10a45342 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45344 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10a45349 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a4534e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a45350 call 0x10a435e0 */
  push32(0x10a45355u); f_10a435e0();
  /* 10a45355 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45358 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4535b jne 0x10a4535e */
  if (!C.zf) goto L_10a4535e;
  /* 10a4535d int3  */
  x86_unimpl("int3 @ 0x10a4535d");
L_10a4535e:;
  /* 10a4535e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a45360 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a45362 jne 0x10a45332 */
  if (!C.zf) goto L_10a45332;
  /* 10a45364 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45367 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a45369 mov dword ptr [0x10a7064c], ecx */
  w32((uint32_t)(0x10a7064c), (ECX));
L_10a4536f:;
  /* 10a4536f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45372 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a45375 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45378 push eax */
  push32((uint32_t)(EAX));
  /* 10a45379 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4537b mov cl, byte ptr [0x10a6ea91] */
  CL = (r8((uint32_t)(0x10a6ea91)));
  /* 10a45381 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45385 push edx */
  push32((uint32_t)(EDX));
  /* 10a45386 call 0x10a48290 */
  push32(0x10a4538bu); f_10a48290();
  /* 10a4538b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4538e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45391 push eax */
  push32((uint32_t)(EAX));
  /* 10a45392 call 0x10a48690 */
  push32(0x10a45397u); f_10a48690();
  /* 10a45397 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4539a jmp 0x10a453c5 */
  goto L_10a453c5;
L_10a4539c:;
  /* 10a4539c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4539f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10a453a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a453a9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a453ac push eax */
  push32((uint32_t)(EAX));
  /* 10a453ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a453af mov cl, byte ptr [0x10a6ea91] */
  CL = (r8((uint32_t)(0x10a6ea91)));
  /* 10a453b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a453b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a453b9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a453bc push edx */
  push32((uint32_t)(EDX));
  /* 10a453bd call 0x10a48290 */
  push32(0x10a453c2u); f_10a48290();
  /* 10a453c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a453c5:;
  /* 10a453c5 pop edi */
  EDI = (pop32());
  /* 10a453c6 pop esi */
  ESI = (pop32());
  /* 10a453c7 pop ebx */
  EBX = (pop32());
  /* 10a453c8 mov esp, ebp */
  ESP = (EBP);
  /* 10a453ca pop ebp */
  EBP = (pop32());
  /* 10a453cb ret  */
  ESPCHK(0x10a44fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053d0 @ 0x10a453d0 (19 bytes, 9 insns) */
void f_10a453d0(void) {
  FTRACE(0x10a453d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a453d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a453d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a453d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a453d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a453d8 push eax */
  push32((uint32_t)(EAX));
  /* 10a453d9 call 0x10a453f0 */
  push32(0x10a453deu); f_10a453f0();
  /* 10a453de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a453e1 pop ebp */
  EBP = (pop32());
  /* 10a453e2 ret  */
  ESPCHK(0x10a453d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x10a453f0 (342 bytes, 119 insns) */
void f_10a453f0(void) {
  FTRACE(0x10a453f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a453f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a453f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a453f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a453f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a453f7 push esi */
  push32((uint32_t)(ESI));
  /* 10a453f8 push edi */
  push32((uint32_t)(EDI));
  /* 10a453f9 mov eax, dword ptr [0x10a6ea84] */
  EAX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a453fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a45401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45403 je 0x10a45435 */
  if (C.zf) goto L_10a45435;
L_10a45405:;
  /* 10a45405 call 0x10a456c0 */
  push32(0x10a4540au); f_10a456c0();
  /* 10a4540a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4540c jne 0x10a4542f */
  if (!C.zf) goto L_10a4542f;
  /* 10a4540e push 0x10a6baa8 */
  push32((uint32_t)(0x10a6baa8u));
  /* 10a45413 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45415 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10a4541a push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a4541f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a45421 call 0x10a435e0 */
  push32(0x10a45426u); f_10a435e0();
  /* 10a45426 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45429 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4542c jne 0x10a4542f */
  if (!C.zf) goto L_10a4542f;
  /* 10a4542e int3  */
  x86_unimpl("int3 @ 0x10a4542e");
L_10a4542f:;
  /* 10a4542f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a45431 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a45433 jne 0x10a45405 */
  if (!C.zf) goto L_10a45405;
L_10a45435:;
  /* 10a45435 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45437 call 0x10a47f20 */
  push32(0x10a4543cu); f_10a47f20();
  /* 10a4543c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4543f:;
  /* 10a4543f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45442 push edx */
  push32((uint32_t)(EDX));
  /* 10a45443 call 0x10a45b20 */
  push32(0x10a45448u); f_10a45b20();
  /* 10a45448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4544b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4544d jne 0x10a45470 */
  if (!C.zf) goto L_10a45470;
  /* 10a4544f push 0x10a6bbac */
  push32((uint32_t)(0x10a6bbacu));
  /* 10a45454 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45456 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10a4545b push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a45460 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a45462 call 0x10a435e0 */
  push32(0x10a45467u); f_10a435e0();
  /* 10a45467 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4546a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4546d jne 0x10a45470 */
  if (!C.zf) goto L_10a45470;
  /* 10a4546f int3  */
  x86_unimpl("int3 @ 0x10a4546f");
L_10a45470:;
  /* 10a45470 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45474 jne 0x10a4543f */
  if (!C.zf) goto L_10a4543f;
  /* 10a45476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45479 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4547c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a4547f:;
  /* 10a4547f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45482 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a45485 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4548a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4548d je 0x10a454d2 */
  if (C.zf) goto L_10a454d2;
  /* 10a4548f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45492 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45496 je 0x10a454d2 */
  if (C.zf) goto L_10a454d2;
  /* 10a45498 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4549b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a4549e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a454a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a454a6 je 0x10a454d2 */
  if (C.zf) goto L_10a454d2;
  /* 10a454a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a454ab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a454af je 0x10a454d2 */
  if (C.zf) goto L_10a454d2;
  /* 10a454b1 push 0x10a6bd44 */
  push32((uint32_t)(0x10a6bd44u));
  /* 10a454b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a454b8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10a454bd push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a454c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a454c4 call 0x10a435e0 */
  push32(0x10a454c9u); f_10a435e0();
  /* 10a454c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a454cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a454cf jne 0x10a454d2 */
  if (!C.zf) goto L_10a454d2;
  /* 10a454d1 int3  */
  x86_unimpl("int3 @ 0x10a454d1");
L_10a454d2:;
  /* 10a454d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a454d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a454d6 jne 0x10a4547f */
  if (!C.zf) goto L_10a4547f;
  /* 10a454d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a454db cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a454df jne 0x10a454ee */
  if (!C.zf) goto L_10a454ee;
  /* 10a454e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a454e5 jne 0x10a454ee */
  if (!C.zf) goto L_10a454ee;
  /* 10a454e7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10a454ee:;
  /* 10a454ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a454f1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a454f5 je 0x10a45529 */
  if (C.zf) goto L_10a45529;
L_10a454f7:;
  /* 10a454f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a454fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a454fd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45500 je 0x10a45523 */
  if (C.zf) goto L_10a45523;
  /* 10a45502 push 0x10a6bc8c */
  push32((uint32_t)(0x10a6bc8cu));
  /* 10a45507 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45509 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10a4550e push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a45513 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a45515 call 0x10a435e0 */
  push32(0x10a4551au); f_10a435e0();
  /* 10a4551a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4551d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45520 jne 0x10a45523 */
  if (!C.zf) goto L_10a45523;
  /* 10a45522 int3  */
  x86_unimpl("int3 @ 0x10a45522");
L_10a45523:;
  /* 10a45523 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a45525 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a45527 jne 0x10a454f7 */
  if (!C.zf) goto L_10a454f7;
L_10a45529:;
  /* 10a45529 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4552c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a4552f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a45532 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45534 call 0x10a47fc0 */
  push32(0x10a45539u); f_10a47fc0();
  /* 10a45539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4553c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4553f pop edi */
  EDI = (pop32());
  /* 10a45540 pop esi */
  ESI = (pop32());
  /* 10a45541 pop ebx */
  EBX = (pop32());
  /* 10a45542 mov esp, ebp */
  ESP = (EBP);
  /* 10a45544 pop ebp */
  EBP = (pop32());
  /* 10a45545 ret  */
  ESPCHK(0x10a453f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005550 @ 0x10a45550 (28 bytes, 11 insns) */
void f_10a45550(void) {
  FTRACE(0x10a45550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45550 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45551 mov ebp, esp */
  EBP = (ESP);
  /* 10a45553 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45554 mov eax, dword ptr [0x10a6ea8c] */
  EAX = (r32((uint32_t)(0x10a6ea8c)));
  /* 10a45559 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4555c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4555f mov dword ptr [0x10a6ea8c], ecx */
  w32((uint32_t)(0x10a6ea8c), (ECX));
  /* 10a45565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45568 mov esp, ebp */
  ESP = (EBP);
  /* 10a4556a pop ebp */
  EBP = (pop32());
  /* 10a4556b ret  */
  ESPCHK(0x10a45550u, _esp0);
  ESP += 4; return;
}

/* FUN_10005570 @ 0x10a45570 (157 bytes, 59 insns) */
void f_10a45570(void) {
  FTRACE(0x10a45570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45570 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45571 mov ebp, esp */
  EBP = (ESP);
  /* 10a45573 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45574 push ebx */
  push32((uint32_t)(EBX));
  /* 10a45575 push esi */
  push32((uint32_t)(ESI));
  /* 10a45576 push edi */
  push32((uint32_t)(EDI));
  /* 10a45577 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45579 call 0x10a47f20 */
  push32(0x10a4557eu); f_10a47f20();
  /* 10a4557e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45581 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45584 push eax */
  push32((uint32_t)(EAX));
  /* 10a45585 call 0x10a45b20 */
  push32(0x10a4558au); f_10a45b20();
  /* 10a4558a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4558d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4558f je 0x10a455fc */
  if (C.zf) goto L_10a455fc;
  /* 10a45591 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45594 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45597 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a4559a:;
  /* 10a4559a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4559d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a455a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a455a5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a455a8 je 0x10a455ed */
  if (C.zf) goto L_10a455ed;
  /* 10a455aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a455ad cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a455b1 je 0x10a455ed */
  if (C.zf) goto L_10a455ed;
  /* 10a455b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a455b6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a455b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a455be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a455c1 je 0x10a455ed */
  if (C.zf) goto L_10a455ed;
  /* 10a455c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a455c6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a455ca je 0x10a455ed */
  if (C.zf) goto L_10a455ed;
  /* 10a455cc push 0x10a6bd44 */
  push32((uint32_t)(0x10a6bd44u));
  /* 10a455d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a455d3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10a455d8 push 0x10a6ba9c */
  push32((uint32_t)(0x10a6ba9cu));
  /* 10a455dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a455df call 0x10a435e0 */
  push32(0x10a455e4u); f_10a435e0();
  /* 10a455e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a455e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a455ea jne 0x10a455ed */
  if (!C.zf) goto L_10a455ed;
  /* 10a455ec int3  */
  x86_unimpl("int3 @ 0x10a455ec");
L_10a455ed:;
  /* 10a455ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a455ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a455f1 jne 0x10a4559a */
  if (!C.zf) goto L_10a4559a;
  /* 10a455f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a455f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a455f9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10a455fc:;
  /* 10a455fc push 9 */
  push32((uint32_t)(0x9u));
  /* 10a455fe call 0x10a47fc0 */
  push32(0x10a45603u); f_10a47fc0();
  /* 10a45603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45606 pop edi */
  EDI = (pop32());
  /* 10a45607 pop esi */
  ESI = (pop32());
  /* 10a45608 pop ebx */
  EBX = (pop32());
  /* 10a45609 mov esp, ebp */
  ESP = (EBP);
  /* 10a4560b pop ebp */
  EBP = (pop32());
  /* 10a4560c ret  */
  ESPCHK(0x10a45570u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x10a45610 (28 bytes, 11 insns) */
void f_10a45610(void) {
  FTRACE(0x10a45610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45610 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45611 mov ebp, esp */
  EBP = (ESP);
  /* 10a45613 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45614 mov eax, dword ptr [0x10a6ec90] */
  EAX = (r32((uint32_t)(0x10a6ec90)));
  /* 10a45619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4561c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4561f mov dword ptr [0x10a6ec90], ecx */
  w32((uint32_t)(0x10a6ec90), (ECX));
  /* 10a45625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45628 mov esp, ebp */
  ESP = (EBP);
  /* 10a4562a pop ebp */
  EBP = (pop32());
  /* 10a4562b ret  */
  ESPCHK(0x10a45610u, _esp0);
  ESP += 4; return;
}

/* FUN_10005630 @ 0x10a45630 (136 bytes, 55 insns) */
void f_10a45630(void) {
  FTRACE(0x10a45630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45630 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45631 mov ebp, esp */
  EBP = (ESP);
  /* 10a45633 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45634 push ebx */
  push32((uint32_t)(EBX));
  /* 10a45635 push esi */
  push32((uint32_t)(ESI));
  /* 10a45636 push edi */
  push32((uint32_t)(EDI));
  /* 10a45637 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10a4563e:;
  /* 10a4563e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a45641 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a45644 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45647 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a4564a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4564c je 0x10a456ae */
  if (C.zf) goto L_10a456ae;
  /* 10a4564e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45651 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45653 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a45655 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45658 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4565e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45661 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45664 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a45667 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45669 je 0x10a456ac */
  if (C.zf) goto L_10a456ac;
L_10a4566b:;
  /* 10a4566b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4566e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a45673 push eax */
  push32((uint32_t)(EAX));
  /* 10a45674 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45677 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a45679 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10a4567c push edx */
  push32((uint32_t)(EDX));
  /* 10a4567d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45680 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45683 push eax */
  push32((uint32_t)(EAX));
  /* 10a45684 push 0x10a6bd88 */
  push32((uint32_t)(0x10a6bd88u));
  /* 10a45689 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4568b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4568d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4568f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45691 call 0x10a435e0 */
  push32(0x10a45696u); f_10a435e0();
  /* 10a45696 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45699 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4569c jne 0x10a4569f */
  if (!C.zf) goto L_10a4569f;
  /* 10a4569e int3  */
  x86_unimpl("int3 @ 0x10a4569e");
L_10a4569f:;
  /* 10a4569f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a456a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a456a3 jne 0x10a4566b */
  if (!C.zf) goto L_10a4566b;
  /* 10a456a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a456ac:;
  /* 10a456ac jmp 0x10a4563e */
  goto L_10a4563e;
L_10a456ae:;
  /* 10a456ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a456b1 pop edi */
  EDI = (pop32());
  /* 10a456b2 pop esi */
  ESI = (pop32());
  /* 10a456b3 pop ebx */
  EBX = (pop32());
  /* 10a456b4 mov esp, ebp */
  ESP = (EBP);
  /* 10a456b6 pop ebp */
  EBP = (pop32());
  /* 10a456b7 ret  */
  ESPCHK(0x10a45630u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c0 @ 0x10a456c0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10a456c0(void) {
  FTRACE(0x10a456c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a456c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a456c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a456c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a456c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a456c7 push esi */
  push32((uint32_t)(ESI));
  /* 10a456c8 push edi */
  push32((uint32_t)(EDI));
  /* 10a456c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a456d0 mov eax, dword ptr [0x10a6ea84] */
  EAX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a456d5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a456d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a456da jne 0x10a456e6 */
  if (!C.zf) goto L_10a456e6;
  /* 10a456dc mov eax, 1 */
  EAX = (0x1u);
  /* 10a456e1 jmp 0x10a45a18 */
  goto L_10a45a18;
L_10a456e6:;
  /* 10a456e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a456e8 call 0x10a47f20 */
  push32(0x10a456edu); f_10a47f20();
  /* 10a456ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a456f0 call 0x10a48700 */
  push32(0x10a456f5u); f_10a48700();
  /* 10a456f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a456f8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a456fc je 0x10a45809 */
  if (C.zf) goto L_10a45809;
  /* 10a45702 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45706 je 0x10a45809 */
  if (C.zf) goto L_10a45809;
  /* 10a4570c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4570f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a45712 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a45715 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45718 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a4571b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4571f ja 0x10a457d2 */
  if ((!C.cf&&!C.zf)) goto L_10a457d2;
  /* 10a45725 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a45728 jmp dword ptr [eax*4 + 0x10a45a1f] */
  switch (EAX) {
    case 0: goto L_10a457aa;
    case 1: goto L_10a45782;
    case 2: goto L_10a4575a;
    case 3: goto L_10a4572f;
    default: x86_unimpl("switch@0x10a45728 out of table"); return;
  }
L_10a4572f:;
  /* 10a4572f push 0x10a6bedc */
  push32((uint32_t)(0x10a6bedcu));
  /* 10a45734 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a45739 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4573b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4573d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4573f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45741 call 0x10a435e0 */
  push32(0x10a45746u); f_10a435e0();
  /* 10a45746 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45749 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4574c jne 0x10a4574f */
  if (!C.zf) goto L_10a4574f;
  /* 10a4574e int3  */
  x86_unimpl("int3 @ 0x10a4574e");
L_10a4574f:;
  /* 10a4574f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a45751 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a45753 jne 0x10a4572f */
  if (!C.zf) goto L_10a4572f;
  /* 10a45755 jmp 0x10a457f8 */
  goto L_10a457f8;
L_10a4575a:;
  /* 10a4575a push 0x10a6beb8 */
  push32((uint32_t)(0x10a6beb8u));
  /* 10a4575f push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a45764 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45766 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45768 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4576a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4576c call 0x10a435e0 */
  push32(0x10a45771u); f_10a435e0();
  /* 10a45771 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45774 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45777 jne 0x10a4577a */
  if (!C.zf) goto L_10a4577a;
  /* 10a45779 int3  */
  x86_unimpl("int3 @ 0x10a45779");
L_10a4577a:;
  /* 10a4577a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4577c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4577e jne 0x10a4575a */
  if (!C.zf) goto L_10a4575a;
  /* 10a45780 jmp 0x10a457f8 */
  goto L_10a457f8;
L_10a45782:;
  /* 10a45782 push 0x10a6be94 */
  push32((uint32_t)(0x10a6be94u));
  /* 10a45787 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a4578c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4578e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45790 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45792 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45794 call 0x10a435e0 */
  push32(0x10a45799u); f_10a435e0();
  /* 10a45799 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4579c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4579f jne 0x10a457a2 */
  if (!C.zf) goto L_10a457a2;
  /* 10a457a1 int3  */
  x86_unimpl("int3 @ 0x10a457a1");
L_10a457a2:;
  /* 10a457a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a457a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a457a6 jne 0x10a45782 */
  if (!C.zf) goto L_10a45782;
  /* 10a457a8 jmp 0x10a457f8 */
  goto L_10a457f8;
L_10a457aa:;
  /* 10a457aa push 0x10a6be70 */
  push32((uint32_t)(0x10a6be70u));
  /* 10a457af push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a457b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a457b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a457b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a457ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a457bc call 0x10a435e0 */
  push32(0x10a457c1u); f_10a435e0();
  /* 10a457c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a457c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a457c7 jne 0x10a457ca */
  if (!C.zf) goto L_10a457ca;
  /* 10a457c9 int3  */
  x86_unimpl("int3 @ 0x10a457c9");
L_10a457ca:;
  /* 10a457ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a457cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a457ce jne 0x10a457aa */
  if (!C.zf) goto L_10a457aa;
  /* 10a457d0 jmp 0x10a457f8 */
  goto L_10a457f8;
L_10a457d2:;
  /* 10a457d2 push 0x10a6be44 */
  push32((uint32_t)(0x10a6be44u));
  /* 10a457d7 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a457dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a457de push 0 */
  push32((uint32_t)(0x0u));
  /* 10a457e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a457e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a457e4 call 0x10a435e0 */
  push32(0x10a457e9u); f_10a435e0();
  /* 10a457e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a457ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a457ef jne 0x10a457f2 */
  if (!C.zf) goto L_10a457f2;
  /* 10a457f1 int3  */
  x86_unimpl("int3 @ 0x10a457f1");
L_10a457f2:;
  /* 10a457f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a457f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a457f6 jne 0x10a457d2 */
  if (!C.zf) goto L_10a457d2;
L_10a457f8:;
  /* 10a457f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a457fa call 0x10a47fc0 */
  push32(0x10a457ffu); f_10a47fc0();
  /* 10a457ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45802 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45804 jmp 0x10a45a18 */
  goto L_10a45a18;
L_10a45809:;
  /* 10a45809 mov eax, dword ptr [0x10a7064c] */
  EAX = (r32((uint32_t)(0x10a7064c)));
  /* 10a4580e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a45811 jmp 0x10a4581b */
  goto L_10a4581b;
L_10a45813:;
  /* 10a45813 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45816 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a45818 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a4581b:;
  /* 10a4581b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4581f je 0x10a45a0b */
  if (C.zf) goto L_10a45a0b;
  /* 10a45825 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a4582c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4582f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a45832 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a45838 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4583b je 0x10a45860 */
  if (C.zf) goto L_10a45860;
  /* 10a4583d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45840 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45844 je 0x10a45860 */
  if (C.zf) goto L_10a45860;
  /* 10a45846 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45849 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a4584c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a45852 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45855 je 0x10a45860 */
  if (C.zf) goto L_10a45860;
  /* 10a45857 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4585a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4585e jne 0x10a45878 */
  if (!C.zf) goto L_10a45878;
L_10a45860:;
  /* 10a45860 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45863 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a45866 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4586c mov edx, dword ptr [ecx*4 + 0x10a6ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6ea94)));
  /* 10a45873 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a45876 jmp 0x10a4587f */
  goto L_10a4587f;
L_10a45878:;
  /* 10a45878 mov dword ptr [ebp - 0x14], 0x10a6be3c */
  w32((uint32_t)(EBP + -0x14), (0x10a6be3cu));
L_10a4587f:;
  /* 10a4587f push 4 */
  push32((uint32_t)(0x4u));
  /* 10a45881 mov al, byte ptr [0x10a6ea90] */
  AL = (r8((uint32_t)(0x10a6ea90)));
  /* 10a45886 push eax */
  push32((uint32_t)(EAX));
  /* 10a45887 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4588a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4588d push ecx */
  push32((uint32_t)(ECX));
  /* 10a4588e call 0x10a45630 */
  push32(0x10a45893u); f_10a45630();
  /* 10a45893 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45898 jne 0x10a458d4 */
  if (!C.zf) goto L_10a458d4;
L_10a4589a:;
  /* 10a4589a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4589d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a458a0 push edx */
  push32((uint32_t)(EDX));
  /* 10a458a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a458a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a458a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a458a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a458ab push edx */
  push32((uint32_t)(EDX));
  /* 10a458ac push 0x10a6bd18 */
  push32((uint32_t)(0x10a6bd18u));
  /* 10a458b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a458b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a458b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a458b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a458b9 call 0x10a435e0 */
  push32(0x10a458beu); f_10a435e0();
  /* 10a458be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a458c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a458c4 jne 0x10a458c7 */
  if (!C.zf) goto L_10a458c7;
  /* 10a458c6 int3  */
  x86_unimpl("int3 @ 0x10a458c6");
L_10a458c7:;
  /* 10a458c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a458c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a458cb jne 0x10a4589a */
  if (!C.zf) goto L_10a4589a;
  /* 10a458cd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a458d4:;
  /* 10a458d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a458d6 mov cl, byte ptr [0x10a6ea90] */
  CL = (r8((uint32_t)(0x10a6ea90)));
  /* 10a458dc push ecx */
  push32((uint32_t)(ECX));
  /* 10a458dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a458e0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a458e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a458e6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10a458ea push edx */
  push32((uint32_t)(EDX));
  /* 10a458eb call 0x10a45630 */
  push32(0x10a458f0u); f_10a45630();
  /* 10a458f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a458f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a458f5 jne 0x10a45931 */
  if (!C.zf) goto L_10a45931;
L_10a458f7:;
  /* 10a458f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a458fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a458fd push eax */
  push32((uint32_t)(EAX));
  /* 10a458fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45901 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a45904 push edx */
  push32((uint32_t)(EDX));
  /* 10a45905 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a45908 push eax */
  push32((uint32_t)(EAX));
  /* 10a45909 push 0x10a6bcec */
  push32((uint32_t)(0x10a6bcecu));
  /* 10a4590e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45910 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45912 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45914 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45916 call 0x10a435e0 */
  push32(0x10a4591bu); f_10a435e0();
  /* 10a4591b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4591e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45921 jne 0x10a45924 */
  if (!C.zf) goto L_10a45924;
  /* 10a45923 int3  */
  x86_unimpl("int3 @ 0x10a45923");
L_10a45924:;
  /* 10a45924 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a45926 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a45928 jne 0x10a458f7 */
  if (!C.zf) goto L_10a458f7;
  /* 10a4592a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a45931:;
  /* 10a45931 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45934 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45938 jne 0x10a4598a */
  if (!C.zf) goto L_10a4598a;
  /* 10a4593a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4593d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a45940 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45941 mov dl, byte ptr [0x10a6ea91] */
  DL = (r8((uint32_t)(0x10a6ea91)));
  /* 10a45947 push edx */
  push32((uint32_t)(EDX));
  /* 10a45948 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4594b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4594e push eax */
  push32((uint32_t)(EAX));
  /* 10a4594f call 0x10a45630 */
  push32(0x10a45954u); f_10a45630();
  /* 10a45954 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45959 jne 0x10a4598a */
  if (!C.zf) goto L_10a4598a;
L_10a4595b:;
  /* 10a4595b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4595e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45961 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45962 push 0x10a6be10 */
  push32((uint32_t)(0x10a6be10u));
  /* 10a45967 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45969 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4596b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4596d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4596f call 0x10a435e0 */
  push32(0x10a45974u); f_10a435e0();
  /* 10a45974 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45977 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4597a jne 0x10a4597d */
  if (!C.zf) goto L_10a4597d;
  /* 10a4597c int3  */
  x86_unimpl("int3 @ 0x10a4597c");
L_10a4597d:;
  /* 10a4597d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4597f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a45981 jne 0x10a4595b */
  if (!C.zf) goto L_10a4595b;
  /* 10a45983 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a4598a:;
  /* 10a4598a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4598e jne 0x10a45a06 */
  if (!C.zf) goto L_10a45a06;
  /* 10a45990 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45993 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45997 je 0x10a459cc */
  if (C.zf) goto L_10a459cc;
L_10a45999:;
  /* 10a45999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4599c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a4599f push edx */
  push32((uint32_t)(EDX));
  /* 10a459a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a459a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a459a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a459a7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a459aa push edx */
  push32((uint32_t)(EDX));
  /* 10a459ab push 0x10a6bdf0 */
  push32((uint32_t)(0x10a6bdf0u));
  /* 10a459b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a459b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a459b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a459b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a459b8 call 0x10a435e0 */
  push32(0x10a459bdu); f_10a435e0();
  /* 10a459bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a459c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a459c3 jne 0x10a459c6 */
  if (!C.zf) goto L_10a459c6;
  /* 10a459c5 int3  */
  x86_unimpl("int3 @ 0x10a459c5");
L_10a459c6:;
  /* 10a459c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a459c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a459ca jne 0x10a45999 */
  if (!C.zf) goto L_10a45999;
L_10a459cc:;
  /* 10a459cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a459cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a459d2 push edx */
  push32((uint32_t)(EDX));
  /* 10a459d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a459d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a459d9 push eax */
  push32((uint32_t)(EAX));
  /* 10a459da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a459dd push ecx */
  push32((uint32_t)(ECX));
  /* 10a459de push 0x10a6bdc4 */
  push32((uint32_t)(0x10a6bdc4u));
  /* 10a459e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a459e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a459e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a459e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a459eb call 0x10a435e0 */
  push32(0x10a459f0u); f_10a435e0();
  /* 10a459f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a459f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a459f6 jne 0x10a459f9 */
  if (!C.zf) goto L_10a459f9;
  /* 10a459f8 int3  */
  x86_unimpl("int3 @ 0x10a459f8");
L_10a459f9:;
  /* 10a459f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a459fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a459fd jne 0x10a459cc */
  if (!C.zf) goto L_10a459cc;
  /* 10a459ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a45a06:;
  /* 10a45a06 jmp 0x10a45813 */
  goto L_10a45813;
L_10a45a0b:;
  /* 10a45a0b push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45a0d call 0x10a47fc0 */
  push32(0x10a45a12u); f_10a47fc0();
  /* 10a45a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45a15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a45a18:;
  /* 10a45a18 pop edi */
  EDI = (pop32());
  /* 10a45a19 pop esi */
  ESI = (pop32());
  /* 10a45a1a pop ebx */
  EBX = (pop32());
  /* 10a45a1b mov esp, ebp */
  ESP = (EBP);
  /* 10a45a1d pop ebp */
  EBP = (pop32());
  /* 10a45a1e ret  */
  ESPCHK(0x10a456c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a30 @ 0x10a45a30 (34 bytes, 13 insns) */
void f_10a45a30(void) {
  FTRACE(0x10a45a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45a31 mov ebp, esp */
  EBP = (ESP);
  /* 10a45a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45a34 mov eax, dword ptr [0x10a6ea84] */
  EAX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a45a39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a45a3c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45a40 je 0x10a45a4b */
  if (C.zf) goto L_10a45a4b;
  /* 10a45a42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45a45 mov dword ptr [0x10a6ea84], ecx */
  w32((uint32_t)(0x10a6ea84), (ECX));
L_10a45a4b:;
  /* 10a45a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45a4e mov esp, ebp */
  ESP = (EBP);
  /* 10a45a50 pop ebp */
  EBP = (pop32());
  /* 10a45a51 ret  */
  ESPCHK(0x10a45a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a60 @ 0x10a45a60 (103 bytes, 38 insns) */
void f_10a45a60(void) {
  FTRACE(0x10a45a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45a61 mov ebp, esp */
  EBP = (ESP);
  /* 10a45a63 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45a64 mov eax, dword ptr [0x10a6ea84] */
  EAX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a45a69 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a45a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45a6e jne 0x10a45a72 */
  if (!C.zf) goto L_10a45a72;
  /* 10a45a70 jmp 0x10a45ac3 */
  goto L_10a45ac3;
L_10a45a72:;
  /* 10a45a72 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45a74 call 0x10a47f20 */
  push32(0x10a45a79u); f_10a47f20();
  /* 10a45a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45a7c mov ecx, dword ptr [0x10a7064c] */
  ECX = (r32((uint32_t)(0x10a7064c)));
  /* 10a45a82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a45a85 jmp 0x10a45a8f */
  goto L_10a45a8f;
L_10a45a87:;
  /* 10a45a87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45a8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a45a8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a45a8f:;
  /* 10a45a8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45a93 je 0x10a45ab9 */
  if (C.zf) goto L_10a45ab9;
  /* 10a45a95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45a98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a45a9b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a45aa1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45aa4 jne 0x10a45ab7 */
  if (!C.zf) goto L_10a45ab7;
  /* 10a45aa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45aa9 push eax */
  push32((uint32_t)(EAX));
  /* 10a45aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45aad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45ab0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45ab1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10a45ab4u);
  /* 10a45ab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a45ab7:;
  /* 10a45ab7 jmp 0x10a45a87 */
  goto L_10a45a87;
L_10a45ab9:;
  /* 10a45ab9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45abb call 0x10a47fc0 */
  push32(0x10a45ac0u); f_10a47fc0();
  /* 10a45ac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a45ac3:;
  /* 10a45ac3 mov esp, ebp */
  ESP = (EBP);
  /* 10a45ac5 pop ebp */
  EBP = (pop32());
  /* 10a45ac6 ret  */
  ESPCHK(0x10a45a60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10a45ad0 (75 bytes, 28 insns) */
void f_10a45ad0(void) {
  FTRACE(0x10a45ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10a45ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45ad4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45ad8 je 0x10a45b0d */
  if (C.zf) goto L_10a45b0d;
  /* 10a45ada mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45add push eax */
  push32((uint32_t)(EAX));
  /* 10a45ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45ae1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45ae2 call dword ptr [0x10a73344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73344))), 0x10a45ae8u);
  /* 10a45ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45aea jne 0x10a45b0d */
  if (!C.zf) goto L_10a45b0d;
  /* 10a45aec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45af0 je 0x10a45b04 */
  if (C.zf) goto L_10a45b04;
  /* 10a45af2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45af5 push edx */
  push32((uint32_t)(EDX));
  /* 10a45af6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45af9 push eax */
  push32((uint32_t)(EAX));
  /* 10a45afa call dword ptr [0x10a73340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73340))), 0x10a45b00u);
  /* 10a45b00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45b02 jne 0x10a45b0d */
  if (!C.zf) goto L_10a45b0d;
L_10a45b04:;
  /* 10a45b04 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a45b0b jmp 0x10a45b14 */
  goto L_10a45b14;
L_10a45b0d:;
  /* 10a45b0d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a45b14:;
  /* 10a45b14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45b17 mov esp, ebp */
  ESP = (EBP);
  /* 10a45b19 pop ebp */
  EBP = (pop32());
  /* 10a45b1a ret  */
  ESPCHK(0x10a45ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x10a45b20 (134 bytes, 50 insns) */
void f_10a45b20(void) {
  FTRACE(0x10a45b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45b21 mov ebp, esp */
  EBP = (ESP);
  /* 10a45b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45b24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45b28 jne 0x10a45b2e */
  if (!C.zf) goto L_10a45b2e;
  /* 10a45b2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45b2c jmp 0x10a45ba2 */
  goto L_10a45ba2;
L_10a45b2e:;
  /* 10a45b2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a45b30 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a45b32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45b35 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45b38 push eax */
  push32((uint32_t)(EAX));
  /* 10a45b39 call 0x10a45ad0 */
  push32(0x10a45b3eu); f_10a45ad0();
  /* 10a45b3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45b43 jne 0x10a45b49 */
  if (!C.zf) goto L_10a45b49;
  /* 10a45b45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45b47 jmp 0x10a45ba2 */
  goto L_10a45ba2;
L_10a45b49:;
  /* 10a45b49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45b4c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45b4f push ecx */
  push32((uint32_t)(ECX));
  /* 10a45b50 call 0x10a48820 */
  push32(0x10a45b55u); f_10a48820();
  /* 10a45b55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45b58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a45b5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45b5f je 0x10a45b76 */
  if (C.zf) goto L_10a45b76;
  /* 10a45b61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45b64 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45b67 push edx */
  push32((uint32_t)(EDX));
  /* 10a45b68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45b6b push eax */
  push32((uint32_t)(EAX));
  /* 10a45b6c call 0x10a48880 */
  push32(0x10a45b71u); f_10a48880();
  /* 10a45b71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45b74 jmp 0x10a45ba2 */
  goto L_10a45ba2;
L_10a45b76:;
  /* 10a45b76 mov ecx, dword ptr [0x10a70600] */
  ECX = (r32((uint32_t)(0x10a70600)));
  /* 10a45b7c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a45b82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a45b84 je 0x10a45b8d */
  if (C.zf) goto L_10a45b8d;
  /* 10a45b86 mov eax, 1 */
  EAX = (0x1u);
  /* 10a45b8b jmp 0x10a45ba2 */
  goto L_10a45ba2;
L_10a45b8d:;
  /* 10a45b8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45b90 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45b93 push edx */
  push32((uint32_t)(EDX));
  /* 10a45b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45b96 mov eax, dword ptr [0x10a71fac] */
  EAX = (r32((uint32_t)(0x10a71fac)));
  /* 10a45b9b push eax */
  push32((uint32_t)(EAX));
  /* 10a45b9c call dword ptr [0x10a73348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73348))), 0x10a45ba2u);
L_10a45ba2:;
  /* 10a45ba2 mov esp, ebp */
  ESP = (EBP);
  /* 10a45ba4 pop ebp */
  EBP = (pop32());
  /* 10a45ba5 ret  */
  ESPCHK(0x10a45b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bb0 @ 0x10a45bb0 (227 bytes, 80 insns) */
void f_10a45bb0(void) {
  FTRACE(0x10a45bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a45bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45bb7 push eax */
  push32((uint32_t)(EAX));
  /* 10a45bb8 call 0x10a45b20 */
  push32(0x10a45bbdu); f_10a45b20();
  /* 10a45bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45bc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45bc2 jne 0x10a45bcb */
  if (!C.zf) goto L_10a45bcb;
  /* 10a45bc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45bc6 jmp 0x10a45c8f */
  goto L_10a45c8f;
L_10a45bcb:;
  /* 10a45bcb push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45bcd call 0x10a47f20 */
  push32(0x10a45bd2u); f_10a47f20();
  /* 10a45bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45bd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45bd8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45bdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a45bde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45be1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a45be4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a45be9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45bec je 0x10a45c10 */
  if (C.zf) goto L_10a45c10;
  /* 10a45bee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45bf1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45bf5 je 0x10a45c10 */
  if (C.zf) goto L_10a45c10;
  /* 10a45bf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45bfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a45bfd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a45c02 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45c05 je 0x10a45c10 */
  if (C.zf) goto L_10a45c10;
  /* 10a45c07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45c0a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45c0e jne 0x10a45c83 */
  if (!C.zf) goto L_10a45c83;
L_10a45c10:;
  /* 10a45c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a45c12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45c15 push edx */
  push32((uint32_t)(EDX));
  /* 10a45c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45c19 push eax */
  push32((uint32_t)(EAX));
  /* 10a45c1a call 0x10a45ad0 */
  push32(0x10a45c1fu); f_10a45ad0();
  /* 10a45c1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45c24 je 0x10a45c83 */
  if (C.zf) goto L_10a45c83;
  /* 10a45c26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45c29 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a45c2c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45c2f jne 0x10a45c83 */
  if (!C.zf) goto L_10a45c83;
  /* 10a45c31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45c34 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a45c37 cmp ecx, dword ptr [0x10a6ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a6ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45c3d jg 0x10a45c83 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a45c83;
  /* 10a45c3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45c43 je 0x10a45c50 */
  if (C.zf) goto L_10a45c50;
  /* 10a45c45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a45c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45c4b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a45c4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a45c50:;
  /* 10a45c50 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45c54 je 0x10a45c61 */
  if (C.zf) goto L_10a45c61;
  /* 10a45c56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a45c59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45c5c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a45c5f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a45c61:;
  /* 10a45c61 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45c65 je 0x10a45c72 */
  if (C.zf) goto L_10a45c72;
  /* 10a45c67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a45c6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45c6d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a45c70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a45c72:;
  /* 10a45c72 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45c74 call 0x10a47fc0 */
  push32(0x10a45c79u); f_10a47fc0();
  /* 10a45c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45c7c mov eax, 1 */
  EAX = (0x1u);
  /* 10a45c81 jmp 0x10a45c8f */
  goto L_10a45c8f;
L_10a45c83:;
  /* 10a45c83 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45c85 call 0x10a47fc0 */
  push32(0x10a45c8au); f_10a47fc0();
  /* 10a45c8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45c8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a45c8f:;
  /* 10a45c8f mov esp, ebp */
  ESP = (EBP);
  /* 10a45c91 pop ebp */
  EBP = (pop32());
  /* 10a45c92 ret  */
  ESPCHK(0x10a45bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x10a45ca0 (28 bytes, 11 insns) */
void f_10a45ca0(void) {
  FTRACE(0x10a45ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10a45ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a45ca4 mov eax, dword ptr [0x10a71fb8] */
  EAX = (r32((uint32_t)(0x10a71fb8)));
  /* 10a45ca9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a45cac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45caf mov dword ptr [0x10a71fb8], ecx */
  w32((uint32_t)(0x10a71fb8), (ECX));
  /* 10a45cb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45cb8 mov esp, ebp */
  ESP = (EBP);
  /* 10a45cba pop ebp */
  EBP = (pop32());
  /* 10a45cbb ret  */
  ESPCHK(0x10a45ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cc0 @ 0x10a45cc0 (362 bytes, 116 insns) */
void f_10a45cc0(void) {
  FTRACE(0x10a45cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a45cc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a45cc7 push esi */
  push32((uint32_t)(ESI));
  /* 10a45cc8 push edi */
  push32((uint32_t)(EDI));
  /* 10a45cc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45ccd jne 0x10a45cfa */
  if (!C.zf) goto L_10a45cfa;
L_10a45ccf:;
  /* 10a45ccf push 0x10a6bf24 */
  push32((uint32_t)(0x10a6bf24u));
  /* 10a45cd4 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a45cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45ce1 call 0x10a435e0 */
  push32(0x10a45ce6u); f_10a435e0();
  /* 10a45ce6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45ce9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45cec jne 0x10a45cef */
  if (!C.zf) goto L_10a45cef;
  /* 10a45cee int3  */
  x86_unimpl("int3 @ 0x10a45cee");
L_10a45cef:;
  /* 10a45cef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45cf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45cf3 jne 0x10a45ccf */
  if (!C.zf) goto L_10a45ccf;
  /* 10a45cf5 jmp 0x10a45e23 */
  goto L_10a45e23;
L_10a45cfa:;
  /* 10a45cfa push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45cfc call 0x10a47f20 */
  push32(0x10a45d01u); f_10a47f20();
  /* 10a45d01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45d04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45d07 mov edx, dword ptr [0x10a7064c] */
  EDX = (r32((uint32_t)(0x10a7064c)));
  /* 10a45d0d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a45d0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a45d16 jmp 0x10a45d21 */
  goto L_10a45d21;
L_10a45d18:;
  /* 10a45d18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45d1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45d1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a45d21:;
  /* 10a45d21 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45d25 jge 0x10a45d45 */
  if ((C.sf==C.of)) goto L_10a45d45;
  /* 10a45d27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45d2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45d2d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10a45d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45d38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45d3b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10a45d43 jmp 0x10a45d18 */
  goto L_10a45d18;
L_10a45d45:;
  /* 10a45d45 mov edx, dword ptr [0x10a7064c] */
  EDX = (r32((uint32_t)(0x10a7064c)));
  /* 10a45d4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a45d4e jmp 0x10a45d58 */
  goto L_10a45d58;
L_10a45d50:;
  /* 10a45d50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45d53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a45d55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a45d58:;
  /* 10a45d58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45d5c je 0x10a45e01 */
  if (C.zf) goto L_10a45e01;
  /* 10a45d62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45d65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a45d68 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a45d6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45d6f jl 0x10a45dd7 */
  if ((C.sf!=C.of)) goto L_10a45dd7;
  /* 10a45d71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45d74 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a45d77 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a45d7d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45d80 jge 0x10a45dd7 */
  if ((C.sf==C.of)) goto L_10a45dd7;
  /* 10a45d82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45d85 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a45d88 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a45d8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45d91 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10a45d95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45d98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45d9b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a45d9e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a45da4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45da7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10a45dab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45dae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a45db1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a45db6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45db9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10a45dbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45dc0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45dc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45dc6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a45dc9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a45dce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45dd1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10a45dd5 jmp 0x10a45dfc */
  goto L_10a45dfc;
L_10a45dd7:;
  /* 10a45dd7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45dda push edx */
  push32((uint32_t)(EDX));
  /* 10a45ddb push 0x10a6bf00 */
  push32((uint32_t)(0x10a6bf00u));
  /* 10a45de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45de8 call 0x10a435e0 */
  push32(0x10a45dedu); f_10a435e0();
  /* 10a45ded add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45df0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45df3 jne 0x10a45df6 */
  if (!C.zf) goto L_10a45df6;
  /* 10a45df5 int3  */
  x86_unimpl("int3 @ 0x10a45df5");
L_10a45df6:;
  /* 10a45df6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45df8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45dfa jne 0x10a45dd7 */
  if (!C.zf) goto L_10a45dd7;
L_10a45dfc:;
  /* 10a45dfc jmp 0x10a45d50 */
  goto L_10a45d50;
L_10a45e01:;
  /* 10a45e01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45e04 mov edx, dword ptr [0x10a70654] */
  EDX = (r32((uint32_t)(0x10a70654)));
  /* 10a45e0a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10a45e0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45e10 mov ecx, dword ptr [0x10a70648] */
  ECX = (r32((uint32_t)(0x10a70648)));
  /* 10a45e16 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10a45e19 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45e1b call 0x10a47fc0 */
  push32(0x10a45e20u); f_10a47fc0();
  /* 10a45e20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a45e23:;
  /* 10a45e23 pop edi */
  EDI = (pop32());
  /* 10a45e24 pop esi */
  ESI = (pop32());
  /* 10a45e25 pop ebx */
  EBX = (pop32());
  /* 10a45e26 mov esp, ebp */
  ESP = (EBP);
  /* 10a45e28 pop ebp */
  EBP = (pop32());
  /* 10a45e29 ret  */
  ESPCHK(0x10a45cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e30 @ 0x10a45e30 (291 bytes, 95 insns) */
void f_10a45e30(void) {
  FTRACE(0x10a45e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45e31 mov ebp, esp */
  EBP = (ESP);
  /* 10a45e33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45e36 push ebx */
  push32((uint32_t)(EBX));
  /* 10a45e37 push esi */
  push32((uint32_t)(ESI));
  /* 10a45e38 push edi */
  push32((uint32_t)(EDI));
  /* 10a45e39 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a45e40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45e44 je 0x10a45e52 */
  if (C.zf) goto L_10a45e52;
  /* 10a45e46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45e4a je 0x10a45e52 */
  if (C.zf) goto L_10a45e52;
  /* 10a45e4c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45e50 jne 0x10a45e80 */
  if (!C.zf) goto L_10a45e80;
L_10a45e52:;
  /* 10a45e52 push 0x10a6bf4c */
  push32((uint32_t)(0x10a6bf4cu));
  /* 10a45e57 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a45e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45e64 call 0x10a435e0 */
  push32(0x10a45e69u); f_10a435e0();
  /* 10a45e69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45e6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45e6f jne 0x10a45e72 */
  if (!C.zf) goto L_10a45e72;
  /* 10a45e71 int3  */
  x86_unimpl("int3 @ 0x10a45e71");
L_10a45e72:;
  /* 10a45e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45e76 jne 0x10a45e52 */
  if (!C.zf) goto L_10a45e52;
  /* 10a45e78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a45e7b jmp 0x10a45f4c */
  goto L_10a45f4c;
L_10a45e80:;
  /* 10a45e80 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a45e87 jmp 0x10a45e92 */
  goto L_10a45e92;
L_10a45e89:;
  /* 10a45e89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45e8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45e8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a45e92:;
  /* 10a45e92 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45e96 jge 0x10a45f1c */
  if ((C.sf==C.of)) goto L_10a45f1c;
  /* 10a45e9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45e9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a45ea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45ea5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45ea8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10a45eac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45eb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45eb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45eb6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10a45eba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45ebd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a45ec0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45ec3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45ec6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10a45eca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45ece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45ed1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45ed4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10a45ed8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45edb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45ede cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45ee3 jne 0x10a45ef2 */
  if (!C.zf) goto L_10a45ef2;
  /* 10a45ee5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45ee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45eeb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45ef0 je 0x10a45f17 */
  if (C.zf) goto L_10a45f17;
L_10a45ef2:;
  /* 10a45ef2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45ef6 je 0x10a45f17 */
  if (C.zf) goto L_10a45f17;
  /* 10a45ef8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45efc jne 0x10a45f10 */
  if (!C.zf) goto L_10a45f10;
  /* 10a45efe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45f02 jne 0x10a45f17 */
  if (!C.zf) goto L_10a45f17;
  /* 10a45f04 mov eax, dword ptr [0x10a6ea84] */
  EAX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a45f09 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10a45f0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45f0e je 0x10a45f17 */
  if (C.zf) goto L_10a45f17;
L_10a45f10:;
  /* 10a45f10 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10a45f17:;
  /* 10a45f17 jmp 0x10a45e89 */
  goto L_10a45e89;
L_10a45f1c:;
  /* 10a45f1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a45f1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45f22 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10a45f25 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45f28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45f2b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10a45f2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a45f31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a45f34 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10a45f37 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45f3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45f3d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10a45f40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45f43 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a45f49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a45f4c:;
  /* 10a45f4c pop edi */
  EDI = (pop32());
  /* 10a45f4d pop esi */
  ESI = (pop32());
  /* 10a45f4e pop ebx */
  EBX = (pop32());
  /* 10a45f4f mov esp, ebp */
  ESP = (EBP);
  /* 10a45f51 pop ebp */
  EBP = (pop32());
  /* 10a45f52 ret  */
  ESPCHK(0x10a45e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f60 @ 0x10a45f60 (697 bytes, 253 insns) */
void f_10a45f60(void) {
  FTRACE(0x10a45f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a45f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a45f61 mov ebp, esp */
  EBP = (ESP);
  /* 10a45f63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a45f66 push ebx */
  push32((uint32_t)(EBX));
  /* 10a45f67 push esi */
  push32((uint32_t)(ESI));
  /* 10a45f68 push edi */
  push32((uint32_t)(EDI));
  /* 10a45f69 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a45f70 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a45f72 call 0x10a47f20 */
  push32(0x10a45f77u); f_10a47f20();
  /* 10a45f77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a45f7a:;
  /* 10a45f7a push 0x10a6c044 */
  push32((uint32_t)(0x10a6c044u));
  /* 10a45f7f push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a45f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a45f8c call 0x10a435e0 */
  push32(0x10a45f91u); f_10a435e0();
  /* 10a45f91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a45f94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45f97 jne 0x10a45f9a */
  if (!C.zf) goto L_10a45f9a;
  /* 10a45f99 int3  */
  x86_unimpl("int3 @ 0x10a45f99");
L_10a45f9a:;
  /* 10a45f9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a45f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a45f9e jne 0x10a45f7a */
  if (!C.zf) goto L_10a45f7a;
  /* 10a45fa0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45fa4 je 0x10a45fae */
  if (C.zf) goto L_10a45fae;
  /* 10a45fa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a45fa9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a45fab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a45fae:;
  /* 10a45fae mov eax, dword ptr [0x10a7064c] */
  EAX = (r32((uint32_t)(0x10a7064c)));
  /* 10a45fb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a45fb6 jmp 0x10a45fc0 */
  goto L_10a45fc0;
L_10a45fb8:;
  /* 10a45fb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45fbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a45fbd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a45fc0:;
  /* 10a45fc0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45fc4 je 0x10a461e2 */
  if (C.zf) goto L_10a461e2;
  /* 10a45fca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45fcd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45fd0 je 0x10a461e2 */
  if (C.zf) goto L_10a461e2;
  /* 10a45fd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45fd9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a45fdc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a45fe2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a45fe5 je 0x10a46014 */
  if (C.zf) goto L_10a46014;
  /* 10a45fe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45fea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a45fed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a45ff3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a45ff5 je 0x10a46014 */
  if (C.zf) goto L_10a46014;
  /* 10a45ff7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a45ffa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a45ffd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a46002 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46005 jne 0x10a46019 */
  if (!C.zf) goto L_10a46019;
  /* 10a46007 mov ecx, dword ptr [0x10a6ea84] */
  ECX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a4600d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10a46010 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a46012 jne 0x10a46019 */
  if (!C.zf) goto L_10a46019;
L_10a46014:;
  /* 10a46014 jmp 0x10a461dd */
  goto L_10a461dd;
L_10a46019:;
  /* 10a46019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4601c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46020 je 0x10a46092 */
  if (C.zf) goto L_10a46092;
  /* 10a46022 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46024 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a46026 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46029 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a4602c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4602d call 0x10a45ad0 */
  push32(0x10a46032u); f_10a45ad0();
  /* 10a46032 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46035 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a46037 jne 0x10a46063 */
  if (!C.zf) goto L_10a46063;
L_10a46039:;
  /* 10a46039 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4603c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a4603f push eax */
  push32((uint32_t)(EAX));
  /* 10a46040 push 0x10a6c030 */
  push32((uint32_t)(0x10a6c030u));
  /* 10a46045 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46047 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46049 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4604b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4604d call 0x10a435e0 */
  push32(0x10a46052u); f_10a435e0();
  /* 10a46052 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46055 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46058 jne 0x10a4605b */
  if (!C.zf) goto L_10a4605b;
  /* 10a4605a int3  */
  x86_unimpl("int3 @ 0x10a4605a");
L_10a4605b:;
  /* 10a4605b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4605d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4605f jne 0x10a46039 */
  if (!C.zf) goto L_10a46039;
  /* 10a46061 jmp 0x10a46092 */
  goto L_10a46092;
L_10a46063:;
  /* 10a46063 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46066 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a46069 push eax */
  push32((uint32_t)(EAX));
  /* 10a4606a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4606d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a46070 push edx */
  push32((uint32_t)(EDX));
  /* 10a46071 push 0x10a6c024 */
  push32((uint32_t)(0x10a6c024u));
  /* 10a46076 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46078 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4607a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4607c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4607e call 0x10a435e0 */
  push32(0x10a46083u); f_10a435e0();
  /* 10a46083 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46086 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46089 jne 0x10a4608c */
  if (!C.zf) goto L_10a4608c;
  /* 10a4608b int3  */
  x86_unimpl("int3 @ 0x10a4608b");
L_10a4608c:;
  /* 10a4608c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4608e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a46090 jne 0x10a46063 */
  if (!C.zf) goto L_10a46063;
L_10a46092:;
  /* 10a46092 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46095 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a46098 push edx */
  push32((uint32_t)(EDX));
  /* 10a46099 push 0x10a6c01c */
  push32((uint32_t)(0x10a6c01cu));
  /* 10a4609e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a460a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a460a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a460a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a460a6 call 0x10a435e0 */
  push32(0x10a460abu); f_10a435e0();
  /* 10a460ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a460ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a460b1 jne 0x10a460b4 */
  if (!C.zf) goto L_10a460b4;
  /* 10a460b3 int3  */
  x86_unimpl("int3 @ 0x10a460b3");
L_10a460b4:;
  /* 10a460b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a460b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a460b8 jne 0x10a46092 */
  if (!C.zf) goto L_10a46092;
  /* 10a460ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a460bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a460c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a460c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a460c9 jne 0x10a4613c */
  if (!C.zf) goto L_10a4613c;
L_10a460cb:;
  /* 10a460cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a460ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a460d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a460d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a460d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a460d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a460db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a460e0 push eax */
  push32((uint32_t)(EAX));
  /* 10a460e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a460e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a460e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a460e8 push 0x10a6bfe8 */
  push32((uint32_t)(0x10a6bfe8u));
  /* 10a460ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10a460ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10a460f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a460f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a460f5 call 0x10a435e0 */
  push32(0x10a460fau); f_10a435e0();
  /* 10a460fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a460fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46100 jne 0x10a46103 */
  if (!C.zf) goto L_10a46103;
  /* 10a46102 int3  */
  x86_unimpl("int3 @ 0x10a46102");
L_10a46103:;
  /* 10a46103 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a46105 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a46107 jne 0x10a460cb */
  if (!C.zf) goto L_10a460cb;
  /* 10a46109 cmp dword ptr [0x10a71fb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a71fb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46110 je 0x10a4612b */
  if (C.zf) goto L_10a4612b;
  /* 10a46112 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46115 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a46118 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4611c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4611f push edx */
  push32((uint32_t)(EDX));
  /* 10a46120 call dword ptr [0x10a71fb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a71fb8))), 0x10a46126u);
  /* 10a46126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46129 jmp 0x10a46137 */
  goto L_10a46137;
L_10a4612b:;
  /* 10a4612b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4612e push eax */
  push32((uint32_t)(EAX));
  /* 10a4612f call 0x10a46220 */
  push32(0x10a46134u); f_10a46220();
  /* 10a46134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a46137:;
  /* 10a46137 jmp 0x10a461dd */
  goto L_10a461dd;
L_10a4613c:;
  /* 10a4613c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4613f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46143 jne 0x10a46182 */
  if (!C.zf) goto L_10a46182;
L_10a46145:;
  /* 10a46145 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46148 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a4614b push eax */
  push32((uint32_t)(EAX));
  /* 10a4614c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4614f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46152 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46153 push 0x10a6bfc0 */
  push32((uint32_t)(0x10a6bfc0u));
  /* 10a46158 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4615a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4615c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4615e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46160 call 0x10a435e0 */
  push32(0x10a46165u); f_10a435e0();
  /* 10a46165 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46168 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4616b jne 0x10a4616e */
  if (!C.zf) goto L_10a4616e;
  /* 10a4616d int3  */
  x86_unimpl("int3 @ 0x10a4616d");
L_10a4616e:;
  /* 10a4616e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a46170 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a46172 jne 0x10a46145 */
  if (!C.zf) goto L_10a46145;
  /* 10a46174 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46177 push eax */
  push32((uint32_t)(EAX));
  /* 10a46178 call 0x10a46220 */
  push32(0x10a4617du); f_10a46220();
  /* 10a4617d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46180 jmp 0x10a461dd */
  goto L_10a461dd;
L_10a46182:;
  /* 10a46182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46185 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a46188 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4618e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46191 jne 0x10a461dd */
  if (!C.zf) goto L_10a461dd;
L_10a46193:;
  /* 10a46193 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46196 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a46199 push ecx */
  push32((uint32_t)(ECX));
  /* 10a4619a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4619d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a461a0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a461a3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a461a8 push eax */
  push32((uint32_t)(EAX));
  /* 10a461a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a461ac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a461af push ecx */
  push32((uint32_t)(ECX));
  /* 10a461b0 push 0x10a6bf8c */
  push32((uint32_t)(0x10a6bf8cu));
  /* 10a461b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a461b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a461b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a461bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a461bd call 0x10a435e0 */
  push32(0x10a461c2u); f_10a435e0();
  /* 10a461c2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a461c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a461c8 jne 0x10a461cb */
  if (!C.zf) goto L_10a461cb;
  /* 10a461ca int3  */
  x86_unimpl("int3 @ 0x10a461ca");
L_10a461cb:;
  /* 10a461cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a461cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a461cf jne 0x10a46193 */
  if (!C.zf) goto L_10a46193;
  /* 10a461d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a461d4 push eax */
  push32((uint32_t)(EAX));
  /* 10a461d5 call 0x10a46220 */
  push32(0x10a461dau); f_10a46220();
  /* 10a461da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a461dd:;
  /* 10a461dd jmp 0x10a45fb8 */
  goto L_10a45fb8;
L_10a461e2:;
  /* 10a461e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a461e4 call 0x10a47fc0 */
  push32(0x10a461e9u); f_10a47fc0();
  /* 10a461e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a461ec:;
  /* 10a461ec push 0x10a6bf74 */
  push32((uint32_t)(0x10a6bf74u));
  /* 10a461f1 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a461f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a461f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a461fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a461fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a461fe call 0x10a435e0 */
  push32(0x10a46203u); f_10a435e0();
  /* 10a46203 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46206 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46209 jne 0x10a4620c */
  if (!C.zf) goto L_10a4620c;
  /* 10a4620b int3  */
  x86_unimpl("int3 @ 0x10a4620b");
L_10a4620c:;
  /* 10a4620c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4620e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a46210 jne 0x10a461ec */
  if (!C.zf) goto L_10a461ec;
  /* 10a46212 pop edi */
  EDI = (pop32());
  /* 10a46213 pop esi */
  ESI = (pop32());
  /* 10a46214 pop ebx */
  EBX = (pop32());
  /* 10a46215 mov esp, ebp */
  ESP = (EBP);
  /* 10a46217 pop ebp */
  EBP = (pop32());
  /* 10a46218 ret  */
  ESPCHK(0x10a45f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x10a46220 (276 bytes, 89 insns) */
void f_10a46220(void) {
  FTRACE(0x10a46220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a46220 push ebp */
  push32((uint32_t)(EBP));
  /* 10a46221 mov ebp, esp */
  EBP = (ESP);
  /* 10a46223 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a46226 push ebx */
  push32((uint32_t)(EBX));
  /* 10a46227 push esi */
  push32((uint32_t)(ESI));
  /* 10a46228 push edi */
  push32((uint32_t)(EDI));
  /* 10a46229 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10a46230 jmp 0x10a4623b */
  goto L_10a4623b;
L_10a46232:;
  /* 10a46232 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a46235 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46238 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10a4623b:;
  /* 10a4623b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4623e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46242 jge 0x10a4624f */
  if ((C.sf==C.of)) goto L_10a4624f;
  /* 10a46244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a46247 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a4624a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10a4624d jmp 0x10a46256 */
  goto L_10a46256;
L_10a4624f:;
  /* 10a4624f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10a46256:;
  /* 10a46256 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a46259 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4625c jge 0x10a462fc */
  if ((C.sf==C.of)) goto L_10a462fc;
  /* 10a46262 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a46265 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46268 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10a4626b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10a4626e cmp dword ptr [0x10a6eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46275 jle 0x10a46293 */
  if ((C.zf||C.sf!=C.of)) goto L_10a46293;
  /* 10a46277 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10a4627c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a4627f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a46285 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46286 call 0x10a4a530 */
  push32(0x10a4628bu); f_10a4a530();
  /* 10a4628b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4628e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10a46291 jmp 0x10a462b0 */
  goto L_10a462b0;
L_10a46293:;
  /* 10a46293 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a46296 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4629c mov eax, dword ptr [0x10a6ec98] */
  EAX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a462a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a462a3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a462a7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10a462ad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10a462b0:;
  /* 10a462b0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a462b4 je 0x10a462c4 */
  if (C.zf) goto L_10a462c4;
  /* 10a462b6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a462b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a462bf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10a462c2 jmp 0x10a462cb */
  goto L_10a462cb;
L_10a462c4:;
  /* 10a462c4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10a462cb:;
  /* 10a462cb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a462ce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10a462d1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10a462d5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10a462d8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a462de push edx */
  push32((uint32_t)(EDX));
  /* 10a462df push 0x10a6c068 */
  push32((uint32_t)(0x10a6c068u));
  /* 10a462e4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a462e7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a462ea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10a462ee push ecx */
  push32((uint32_t)(ECX));
  /* 10a462ef call 0x10a4a430 */
  push32(0x10a462f4u); f_10a4a430();
  /* 10a462f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a462f7 jmp 0x10a46232 */
  goto L_10a46232;
L_10a462fc:;
  /* 10a462fc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10a462ff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10a46304:;
  /* 10a46304 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10a46307 push eax */
  push32((uint32_t)(EAX));
  /* 10a46308 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10a4630b push ecx */
  push32((uint32_t)(ECX));
  /* 10a4630c push 0x10a6c058 */
  push32((uint32_t)(0x10a6c058u));
  /* 10a46311 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46313 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46315 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46317 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46319 call 0x10a435e0 */
  push32(0x10a4631eu); f_10a435e0();
  /* 10a4631e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46321 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46324 jne 0x10a46327 */
  if (!C.zf) goto L_10a46327;
  /* 10a46326 int3  */
  x86_unimpl("int3 @ 0x10a46326");
L_10a46327:;
  /* 10a46327 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a46329 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4632b jne 0x10a46304 */
  if (!C.zf) goto L_10a46304;
  /* 10a4632d pop edi */
  EDI = (pop32());
  /* 10a4632e pop esi */
  ESI = (pop32());
  /* 10a4632f pop ebx */
  EBX = (pop32());
  /* 10a46330 mov esp, ebp */
  ESP = (EBP);
  /* 10a46332 pop ebp */
  EBP = (pop32());
  /* 10a46333 ret  */
  ESPCHK(0x10a46220u, _esp0);
  ESP += 4; return;
}

/* FUN_10006340 @ 0x10a46340 (116 bytes, 46 insns) */
void f_10a46340(void) {
  FTRACE(0x10a46340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a46340 push ebp */
  push32((uint32_t)(EBP));
  /* 10a46341 mov ebp, esp */
  EBP = (ESP);
  /* 10a46343 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a46346 push ebx */
  push32((uint32_t)(EBX));
  /* 10a46347 push esi */
  push32((uint32_t)(ESI));
  /* 10a46348 push edi */
  push32((uint32_t)(EDI));
  /* 10a46349 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10a4634c push eax */
  push32((uint32_t)(EAX));
  /* 10a4634d call 0x10a45cc0 */
  push32(0x10a46352u); f_10a45cc0();
  /* 10a46352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46355 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46359 jne 0x10a46374 */
  if (!C.zf) goto L_10a46374;
  /* 10a4635b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4635f jne 0x10a46374 */
  if (!C.zf) goto L_10a46374;
  /* 10a46361 mov ecx, dword ptr [0x10a6ea84] */
  ECX = (r32((uint32_t)(0x10a6ea84)));
  /* 10a46367 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10a4636a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4636c je 0x10a463ab */
  if (C.zf) goto L_10a463ab;
  /* 10a4636e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46372 je 0x10a463ab */
  if (C.zf) goto L_10a463ab;
L_10a46374:;
  /* 10a46374 push 0x10a6c070 */
  push32((uint32_t)(0x10a6c070u));
  /* 10a46379 push 0x10a6ba3c */
  push32((uint32_t)(0x10a6ba3cu));
  /* 10a4637e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46382 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46384 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46386 call 0x10a435e0 */
  push32(0x10a4638bu); f_10a435e0();
  /* 10a4638b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4638e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46391 jne 0x10a46394 */
  if (!C.zf) goto L_10a46394;
  /* 10a46393 int3  */
  x86_unimpl("int3 @ 0x10a46393");
L_10a46394:;
  /* 10a46394 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a46396 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a46398 jne 0x10a46374 */
  if (!C.zf) goto L_10a46374;
  /* 10a4639a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4639c call 0x10a45f60 */
  push32(0x10a463a1u); f_10a45f60();
  /* 10a463a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a463a4 mov eax, 1 */
  EAX = (0x1u);
  /* 10a463a9 jmp 0x10a463ad */
  goto L_10a463ad;
L_10a463ab:;
  /* 10a463ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a463ad:;
  /* 10a463ad pop edi */
  EDI = (pop32());
  /* 10a463ae pop esi */
  ESI = (pop32());
  /* 10a463af pop ebx */
  EBX = (pop32());
  /* 10a463b0 mov esp, ebp */
  ESP = (EBP);
  /* 10a463b2 pop ebp */
  EBP = (pop32());
  /* 10a463b3 ret  */
  ESPCHK(0x10a46340u, _esp0);
  ESP += 4; return;
}

/* FUN_100063c0 @ 0x10a463c0 (197 bytes, 79 insns) */
void f_10a463c0(void) {
  FTRACE(0x10a463c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a463c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a463c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a463c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a463c4 push ebx */
  push32((uint32_t)(EBX));
  /* 10a463c5 push esi */
  push32((uint32_t)(ESI));
  /* 10a463c6 push edi */
  push32((uint32_t)(EDI));
  /* 10a463c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a463cb jne 0x10a463d2 */
  if (!C.zf) goto L_10a463d2;
  /* 10a463cd jmp 0x10a4647e */
  goto L_10a4647e;
L_10a463d2:;
  /* 10a463d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a463d9 jmp 0x10a463e4 */
  goto L_10a463e4;
L_10a463db:;
  /* 10a463db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a463de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a463e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a463e4:;
  /* 10a463e4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a463e8 jge 0x10a4642e */
  if ((C.sf==C.of)) goto L_10a4642e;
L_10a463ea:;
  /* 10a463ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a463ed mov edx, dword ptr [ecx*4 + 0x10a6ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6ea94)));
  /* 10a463f4 push edx */
  push32((uint32_t)(EDX));
  /* 10a463f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a463f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a463fb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10a463ff push edx */
  push32((uint32_t)(EDX));
  /* 10a46400 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46403 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a46406 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10a4640a push edx */
  push32((uint32_t)(EDX));
  /* 10a4640b push 0x10a6c0cc */
  push32((uint32_t)(0x10a6c0ccu));
  /* 10a46410 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46412 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46414 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46416 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46418 call 0x10a435e0 */
  push32(0x10a4641du); f_10a435e0();
  /* 10a4641d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46420 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46423 jne 0x10a46426 */
  if (!C.zf) goto L_10a46426;
  /* 10a46425 int3  */
  x86_unimpl("int3 @ 0x10a46425");
L_10a46426:;
  /* 10a46426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4642a jne 0x10a463ea */
  if (!C.zf) goto L_10a463ea;
  /* 10a4642c jmp 0x10a463db */
  goto L_10a463db;
L_10a4642e:;
  /* 10a4642e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a46431 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10a46434 push edx */
  push32((uint32_t)(EDX));
  /* 10a46435 push 0x10a6c0a8 */
  push32((uint32_t)(0x10a6c0a8u));
  /* 10a4643a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4643c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4643e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46440 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46442 call 0x10a435e0 */
  push32(0x10a46447u); f_10a435e0();
  /* 10a46447 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4644a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4644d jne 0x10a46450 */
  if (!C.zf) goto L_10a46450;
  /* 10a4644f int3  */
  x86_unimpl("int3 @ 0x10a4644f");
L_10a46450:;
  /* 10a46450 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a46454 jne 0x10a4642e */
  if (!C.zf) goto L_10a4642e;
L_10a46456:;
  /* 10a46456 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a46459 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10a4645c push edx */
  push32((uint32_t)(EDX));
  /* 10a4645d push 0x10a6c088 */
  push32((uint32_t)(0x10a6c088u));
  /* 10a46462 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46464 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46466 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46468 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4646a call 0x10a435e0 */
  push32(0x10a4646fu); f_10a435e0();
  /* 10a4646f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46472 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46475 jne 0x10a46478 */
  if (!C.zf) goto L_10a46478;
  /* 10a46477 int3  */
  x86_unimpl("int3 @ 0x10a46477");
L_10a46478:;
  /* 10a46478 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4647a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4647c jne 0x10a46456 */
  if (!C.zf) goto L_10a46456;
L_10a4647e:;
  /* 10a4647e pop edi */
  EDI = (pop32());
  /* 10a4647f pop esi */
  ESI = (pop32());
  /* 10a46480 pop ebx */
  EBX = (pop32());
  /* 10a46481 mov esp, ebp */
  ESP = (EBP);
  /* 10a46483 pop ebp */
  EBP = (pop32());
  /* 10a46484 ret  */
  ESPCHK(0x10a463c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006490 @ 0x10a46490 (329 bytes, 102 insns) */
void f_10a46490(void) {
  FTRACE(0x10a46490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a46490 push ebp */
  push32((uint32_t)(EBP));
  /* 10a46491 mov ebp, esp */
  EBP = (ESP);
  /* 10a46493 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a46496 cmp dword ptr [0x10a72130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a72130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4649d jne 0x10a464a4 */
  if (!C.zf) goto L_10a464a4;
  /* 10a4649f call 0x10a4add0 */
  push32(0x10a464a4u); f_10a4add0();
L_10a464a4:;
  /* 10a464a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a464ab mov eax, dword ptr [0x10a705e8] */
  EAX = (r32((uint32_t)(0x10a705e8)));
  /* 10a464b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a464b3:;
  /* 10a464b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a464b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a464b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a464bb je 0x10a464e9 */
  if (C.zf) goto L_10a464e9;
  /* 10a464bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a464c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a464c3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a464c6 je 0x10a464d1 */
  if (C.zf) goto L_10a464d1;
  /* 10a464c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a464cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a464ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a464d1:;
  /* 10a464d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a464d4 push eax */
  push32((uint32_t)(EAX));
  /* 10a464d5 call 0x10a47350 */
  push32(0x10a464dau); f_10a47350();
  /* 10a464da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a464dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a464e0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a464e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a464e7 jmp 0x10a464b3 */
  goto L_10a464b3;
L_10a464e9:;
  /* 10a464e9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10a464eb push 0x10a6c0ec */
  push32((uint32_t)(0x10a6c0ecu));
  /* 10a464f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a464f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a464f5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10a464fc push ecx */
  push32((uint32_t)(ECX));
  /* 10a464fd call 0x10a44520 */
  push32(0x10a46502u); f_10a44520();
  /* 10a46502 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46505 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a46508 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4650b mov dword ptr [0x10a7061c], edx */
  w32((uint32_t)(0x10a7061c), (EDX));
  /* 10a46511 cmp dword ptr [0x10a7061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46518 jne 0x10a46524 */
  if (!C.zf) goto L_10a46524;
  /* 10a4651a push 9 */
  push32((uint32_t)(0x9u));
  /* 10a4651c call 0x10a43490 */
  push32(0x10a46521u); f_10a43490();
  /* 10a46521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a46524:;
  /* 10a46524 mov eax, dword ptr [0x10a705e8] */
  EAX = (r32((uint32_t)(0x10a705e8)));
  /* 10a46529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4652c jmp 0x10a46537 */
  goto L_10a46537;
L_10a4652e:;
  /* 10a4652e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46531 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46534 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a46537:;
  /* 10a46537 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4653a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a4653d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4653f je 0x10a465a7 */
  if (C.zf) goto L_10a465a7;
  /* 10a46541 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46544 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46545 call 0x10a47350 */
  push32(0x10a4654au); f_10a47350();
  /* 10a4654a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4654d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46550 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a46553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46556 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a46559 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4655c je 0x10a465a5 */
  if (C.zf) goto L_10a465a5;
  /* 10a4655e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10a46560 push 0x10a6c0ec */
  push32((uint32_t)(0x10a6c0ecu));
  /* 10a46565 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a46567 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4656a push ecx */
  push32((uint32_t)(ECX));
  /* 10a4656b call 0x10a44520 */
  push32(0x10a46570u); f_10a44520();
  /* 10a46570 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46573 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46576 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a46578 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4657b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4657e jne 0x10a4658a */
  if (!C.zf) goto L_10a4658a;
  /* 10a46580 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a46582 call 0x10a43490 */
  push32(0x10a46587u); f_10a43490();
  /* 10a46587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4658a:;
  /* 10a4658a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4658d push ecx */
  push32((uint32_t)(ECX));
  /* 10a4658e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46591 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a46593 push eax */
  push32((uint32_t)(EAX));
  /* 10a46594 call 0x10a474d0 */
  push32(0x10a46599u); f_10a474d0();
  /* 10a46599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4659c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4659f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a465a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a465a5:;
  /* 10a465a5 jmp 0x10a4652e */
  goto L_10a4652e;
L_10a465a7:;
  /* 10a465a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a465a9 mov edx, dword ptr [0x10a705e8] */
  EDX = (r32((uint32_t)(0x10a705e8)));
  /* 10a465af push edx */
  push32((uint32_t)(EDX));
  /* 10a465b0 call 0x10a44fb0 */
  push32(0x10a465b5u); f_10a44fb0();
  /* 10a465b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a465b8 mov dword ptr [0x10a705e8], 0 */
  w32((uint32_t)(0x10a705e8), (0x0u));
  /* 10a465c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a465c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a465cb mov dword ptr [0x10a72120], 1 */
  w32((uint32_t)(0x10a72120), (0x1u));
  /* 10a465d5 mov esp, ebp */
  ESP = (EBP);
  /* 10a465d7 pop ebp */
  EBP = (pop32());
  /* 10a465d8 ret  */
  ESPCHK(0x10a46490u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x10a465e0 (216 bytes, 69 insns) */
void f_10a465e0(void) {
  FTRACE(0x10a465e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a465e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a465e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a465e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a465e6 cmp dword ptr [0x10a72130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a72130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a465ed jne 0x10a465f4 */
  if (!C.zf) goto L_10a465f4;
  /* 10a465ef call 0x10a4add0 */
  push32(0x10a465f4u); f_10a4add0();
L_10a465f4:;
  /* 10a465f4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10a465f9 push 0x10a70658 */
  push32((uint32_t)(0x10a70658u));
  /* 10a465fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46600 call dword ptr [0x10a73300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73300))), 0x10a46606u);
  /* 10a46606 mov dword ptr [0x10a7062c], 0x10a70658 */
  w32((uint32_t)(0x10a7062c), (0x10a70658u));
  /* 10a46610 mov eax, dword ptr [0x10a7214c] */
  EAX = (r32((uint32_t)(0x10a7214c)));
  /* 10a46615 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a46618 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a4661a jne 0x10a46627 */
  if (!C.zf) goto L_10a46627;
  /* 10a4661c mov edx, dword ptr [0x10a7062c] */
  EDX = (r32((uint32_t)(0x10a7062c)));
  /* 10a46622 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a46625 jmp 0x10a4662f */
  goto L_10a4662f;
L_10a46627:;
  /* 10a46627 mov eax, dword ptr [0x10a7214c] */
  EAX = (r32((uint32_t)(0x10a7214c)));
  /* 10a4662c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10a4662f:;
  /* 10a4662f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a46632 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a46635 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10a46638 push edx */
  push32((uint32_t)(EDX));
  /* 10a46639 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10a4663c push eax */
  push32((uint32_t)(EAX));
  /* 10a4663d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4663f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46641 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a46644 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46645 call 0x10a466c0 */
  push32(0x10a4664au); f_10a466c0();
  /* 10a4664a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4664d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10a46652 push 0x10a6c0f8 */
  push32((uint32_t)(0x10a6c0f8u));
  /* 10a46657 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a46659 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4665c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4665f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10a46662 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46663 call 0x10a44520 */
  push32(0x10a46668u); f_10a44520();
  /* 10a46668 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4666b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4666e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46672 jne 0x10a4667e */
  if (!C.zf) goto L_10a4667e;
  /* 10a46674 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a46676 call 0x10a43490 */
  push32(0x10a4667bu); f_10a43490();
  /* 10a4667b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4667e:;
  /* 10a4667e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10a46681 push edx */
  push32((uint32_t)(EDX));
  /* 10a46682 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10a46685 push eax */
  push32((uint32_t)(EAX));
  /* 10a46686 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46689 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4668c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10a4668f push eax */
  push32((uint32_t)(EAX));
  /* 10a46690 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46693 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46694 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a46697 push edx */
  push32((uint32_t)(EDX));
  /* 10a46698 call 0x10a466c0 */
  push32(0x10a4669du); f_10a466c0();
  /* 10a4669d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a466a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a466a3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a466a6 mov dword ptr [0x10a70610], eax */
  w32((uint32_t)(0x10a70610), (EAX));
  /* 10a466ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a466ae mov dword ptr [0x10a70614], ecx */
  w32((uint32_t)(0x10a70614), (ECX));
  /* 10a466b4 mov esp, ebp */
  ESP = (EBP);
  /* 10a466b6 pop ebp */
  EBP = (pop32());
  /* 10a466b7 ret  */
  ESPCHK(0x10a465e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c0 @ 0x10a466c0 (1060 bytes, 360 insns) */
void f_10a466c0(void) {
  FTRACE(0x10a466c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a466c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a466c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a466c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a466c6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a466c9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a466cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a466d2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10a466d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a466db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a466de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a466e2 je 0x10a466f5 */
  if (C.zf) goto L_10a466f5;
  /* 10a466e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a466e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a466ea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a466ec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a466ef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a466f2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10a466f5:;
  /* 10a466f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a466f8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a466fb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a466fe jne 0x10a467cd */
  if (!C.zf) goto L_10a467cd;
L_10a46704:;
  /* 10a46704 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46707 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4670a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4670d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46710 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a46713 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46716 je 0x10a46792 */
  if (C.zf) goto L_10a46792;
  /* 10a46718 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4671b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a4671e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a46720 je 0x10a46792 */
  if (C.zf) goto L_10a46792;
  /* 10a46722 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46725 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a46727 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a46729 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4672b mov al, byte ptr [edx + 0x10a71e81] */
  AL = (r8((uint32_t)(EDX + 0x10a71e81)));
  /* 10a46731 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a46734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a46736 je 0x10a46767 */
  if (C.zf) goto L_10a46767;
  /* 10a46738 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a4673b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a4673d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46740 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46743 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a46745 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46749 je 0x10a46767 */
  if (C.zf) goto L_10a46767;
  /* 10a4674b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4674e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46751 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a46753 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a46755 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46758 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4675b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a4675e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46761 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46764 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a46767:;
  /* 10a46767 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a4676a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a4676c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4676f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46772 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a46774 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46778 je 0x10a4678d */
  if (C.zf) goto L_10a4678d;
  /* 10a4677a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4677d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46780 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a46782 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a46784 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46787 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4678a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a4678d:;
  /* 10a4678d jmp 0x10a46704 */
  goto L_10a46704;
L_10a46792:;
  /* 10a46792 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46795 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a46797 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4679a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a4679d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a4679f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a467a3 je 0x10a467b4 */
  if (C.zf) goto L_10a467b4;
  /* 10a467a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a467a8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a467ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a467ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a467b1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10a467b4:;
  /* 10a467b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a467b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a467ba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a467bd jne 0x10a467c8 */
  if (!C.zf) goto L_10a467c8;
  /* 10a467bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a467c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a467c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a467c8:;
  /* 10a467c8 jmp 0x10a4689c */
  goto L_10a4689c;
L_10a467cd:;
  /* 10a467cd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a467d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a467d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a467d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a467d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a467da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a467de je 0x10a467f3 */
  if (C.zf) goto L_10a467f3;
  /* 10a467e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a467e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a467e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a467e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a467ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a467ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a467f0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a467f3:;
  /* 10a467f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a467f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a467f8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10a467fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a467fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46801 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a46804 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46807 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4680d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4680f mov dl, byte ptr [ecx + 0x10a71e81] */
  DL = (r8((uint32_t)(ECX + 0x10a71e81)));
  /* 10a46815 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a46818 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4681a je 0x10a4684b */
  if (C.zf) goto L_10a4684b;
  /* 10a4681c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a4681f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a46821 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46824 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46827 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a46829 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4682d je 0x10a46842 */
  if (C.zf) goto L_10a46842;
  /* 10a4682f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46835 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a46837 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a46839 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4683c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4683f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a46842:;
  /* 10a46842 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46845 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46848 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a4684b:;
  /* 10a4684b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4684e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a46854 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46857 je 0x10a46877 */
  if (C.zf) goto L_10a46877;
  /* 10a46859 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4685c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a46861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a46863 je 0x10a46877 */
  if (C.zf) goto L_10a46877;
  /* 10a46865 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46868 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a4686e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46871 jne 0x10a467cd */
  if (!C.zf) goto L_10a467cd;
L_10a46877:;
  /* 10a46877 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a4687a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a46880 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a46882 jne 0x10a4688f */
  if (!C.zf) goto L_10a4688f;
  /* 10a46884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46887 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4688a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4688d jmp 0x10a4689c */
  goto L_10a4689c;
L_10a4688f:;
  /* 10a4688f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46893 je 0x10a4689c */
  if (C.zf) goto L_10a4689c;
  /* 10a46895 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46898 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10a4689c:;
  /* 10a4689c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10a468a3:;
  /* 10a468a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a468a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a468a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a468ab je 0x10a468ce */
  if (C.zf) goto L_10a468ce;
L_10a468ad:;
  /* 10a468ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a468b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a468b3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a468b6 je 0x10a468c3 */
  if (C.zf) goto L_10a468c3;
  /* 10a468b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a468bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a468be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a468c1 jne 0x10a468ce */
  if (!C.zf) goto L_10a468ce;
L_10a468c3:;
  /* 10a468c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a468c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a468c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a468cc jmp 0x10a468ad */
  goto L_10a468ad;
L_10a468ce:;
  /* 10a468ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a468d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a468d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a468d6 jne 0x10a468dd */
  if (!C.zf) goto L_10a468dd;
  /* 10a468d8 jmp 0x10a46abb */
  goto L_10a46abb;
L_10a468dd:;
  /* 10a468dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a468e1 je 0x10a468f4 */
  if (C.zf) goto L_10a468f4;
  /* 10a468e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a468e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a468e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a468eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a468ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a468f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a468f4:;
  /* 10a468f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a468f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a468f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a468fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a468ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10a46901:;
  /* 10a46901 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a46908 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a4690f:;
  /* 10a4690f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46912 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a46915 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46918 jne 0x10a4692e */
  if (!C.zf) goto L_10a4692e;
  /* 10a4691a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4691d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46920 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a46923 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a46926 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46929 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a4692c jmp 0x10a4690f */
  goto L_10a4690f;
L_10a4692e:;
  /* 10a4692e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46931 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a46934 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46937 jne 0x10a4698a */
  if (!C.zf) goto L_10a4698a;
  /* 10a46939 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4693c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4693e mov ecx, 2 */
  ECX = (0x2u);
  /* 10a46943 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a46945 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a46947 jne 0x10a46982 */
  if (!C.zf) goto L_10a46982;
  /* 10a46949 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4694d je 0x10a4696f */
  if (C.zf) goto L_10a4696f;
  /* 10a4694f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46952 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a46956 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46959 jne 0x10a46966 */
  if (!C.zf) goto L_10a46966;
  /* 10a4695b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4695e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46961 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a46964 jmp 0x10a4696d */
  goto L_10a4696d;
L_10a46966:;
  /* 10a46966 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a4696d:;
  /* 10a4696d jmp 0x10a46976 */
  goto L_10a46976;
L_10a4696f:;
  /* 10a4696f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a46976:;
  /* 10a46976 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a46978 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4697c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10a4697f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a46982:;
  /* 10a46982 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a46985 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a46987 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a4698a:;
  /* 10a4698a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4698d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a46990 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a46993 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a46996 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a46998 je 0x10a469be */
  if (C.zf) goto L_10a469be;
  /* 10a4699a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4699e je 0x10a469af */
  if (C.zf) goto L_10a469af;
  /* 10a469a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a469a3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10a469a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a469a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a469ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10a469af:;
  /* 10a469af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a469b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a469b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a469b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a469ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a469bc jmp 0x10a4698a */
  goto L_10a4698a;
L_10a469be:;
  /* 10a469be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a469c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a469c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a469c6 je 0x10a469e4 */
  if (C.zf) goto L_10a469e4;
  /* 10a469c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a469cc jne 0x10a469e9 */
  if (!C.zf) goto L_10a469e9;
  /* 10a469ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a469d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a469d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a469d7 je 0x10a469e4 */
  if (C.zf) goto L_10a469e4;
  /* 10a469d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a469dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a469df cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a469e2 jne 0x10a469e9 */
  if (!C.zf) goto L_10a469e9;
L_10a469e4:;
  /* 10a469e4 jmp 0x10a46a94 */
  goto L_10a46a94;
L_10a469e9:;
  /* 10a469e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a469ed je 0x10a46a86 */
  if (C.zf) goto L_10a46a86;
  /* 10a469f3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a469f7 je 0x10a46a4d */
  if (C.zf) goto L_10a46a4d;
  /* 10a469f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a469fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a469fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a46a00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a46a02 mov cl, byte ptr [eax + 0x10a71e81] */
  CL = (r8((uint32_t)(EAX + 0x10a71e81)));
  /* 10a46a08 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a46a0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a46a0d je 0x10a46a38 */
  if (C.zf) goto L_10a46a38;
  /* 10a46a0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46a15 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a46a17 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a46a19 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46a1c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46a1f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10a46a22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46a25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46a28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a46a2b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46a2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a46a30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46a33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46a36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a46a38:;
  /* 10a46a38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46a3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46a3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a46a40 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a46a42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46a45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46a48 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a46a4b jmp 0x10a46a79 */
  goto L_10a46a79;
L_10a46a4d:;
  /* 10a46a4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46a52 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a46a54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a46a56 mov cl, byte ptr [eax + 0x10a71e81] */
  CL = (r8((uint32_t)(EAX + 0x10a71e81)));
  /* 10a46a5c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a46a5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a46a61 je 0x10a46a79 */
  if (C.zf) goto L_10a46a79;
  /* 10a46a63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46a66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46a69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a46a6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46a6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a46a71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46a74 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46a77 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a46a79:;
  /* 10a46a79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46a7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a46a7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46a81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46a84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a46a86:;
  /* 10a46a86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46a89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46a8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a46a8f jmp 0x10a46901 */
  goto L_10a46901;
L_10a46a94:;
  /* 10a46a94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46a98 je 0x10a46aa9 */
  if (C.zf) goto L_10a46aa9;
  /* 10a46a9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46a9d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a46aa0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a46aa3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46aa6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10a46aa9:;
  /* 10a46aa9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46aac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a46aae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46ab1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a46ab4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a46ab6 jmp 0x10a468a3 */
  goto L_10a468a3;
L_10a46abb:;
  /* 10a46abb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46abf je 0x10a46ad3 */
  if (C.zf) goto L_10a46ad3;
  /* 10a46ac1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a46ac4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a46aca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a46acd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46ad0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a46ad3:;
  /* 10a46ad3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a46ad6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a46ad8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46adb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a46ade mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a46ae0 mov esp, ebp */
  ESP = (EBP);
  /* 10a46ae2 pop ebp */
  EBP = (pop32());
  /* 10a46ae3 ret  */
  ESPCHK(0x10a466c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006af0 @ 0x10a46af0 (537 bytes, 173 insns) */
void f_10a46af0(void) {
  FTRACE(0x10a46af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a46af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a46af1 mov ebp, esp */
  EBP = (ESP);
  /* 10a46af3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a46af6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10a46afd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10a46b04 cmp dword ptr [0x10a7075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46b0b jne 0x10a46b4a */
  if (!C.zf) goto L_10a46b4a;
  /* 10a46b0d call dword ptr [0x10a7335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7335c))), 0x10a46b13u);
  /* 10a46b13 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a46b16 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46b1a je 0x10a46b28 */
  if (C.zf) goto L_10a46b28;
  /* 10a46b1c mov dword ptr [0x10a7075c], 1 */
  w32((uint32_t)(0x10a7075c), (0x1u));
  /* 10a46b26 jmp 0x10a46b4a */
  goto L_10a46b4a;
L_10a46b28:;
  /* 10a46b28 call dword ptr [0x10a73358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73358))), 0x10a46b2eu);
  /* 10a46b2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a46b31 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46b35 je 0x10a46b43 */
  if (C.zf) goto L_10a46b43;
  /* 10a46b37 mov dword ptr [0x10a7075c], 2 */
  w32((uint32_t)(0x10a7075c), (0x2u));
  /* 10a46b41 jmp 0x10a46b4a */
  goto L_10a46b4a;
L_10a46b43:;
  /* 10a46b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46b45 jmp 0x10a46d05 */
  goto L_10a46d05;
L_10a46b4a:;
  /* 10a46b4a cmp dword ptr [0x10a7075c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a7075c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46b51 jne 0x10a46c4e */
  if (!C.zf) goto L_10a46c4e;
  /* 10a46b57 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46b5b jne 0x10a46b73 */
  if (!C.zf) goto L_10a46b73;
  /* 10a46b5d call dword ptr [0x10a7335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7335c))), 0x10a46b63u);
  /* 10a46b63 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a46b66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46b6a jne 0x10a46b73 */
  if (!C.zf) goto L_10a46b73;
  /* 10a46b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46b6e jmp 0x10a46d05 */
  goto L_10a46d05;
L_10a46b73:;
  /* 10a46b73 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a46b76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a46b79:;
  /* 10a46b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46b7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a46b7e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10a46b81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a46b83 je 0x10a46ba5 */
  if (C.zf) goto L_10a46ba5;
  /* 10a46b85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46b88 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46b8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a46b8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46b91 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a46b93 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10a46b96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a46b98 jne 0x10a46ba3 */
  if (!C.zf) goto L_10a46ba3;
  /* 10a46b9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46b9d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46ba0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a46ba3:;
  /* 10a46ba3 jmp 0x10a46b79 */
  goto L_10a46b79;
L_10a46ba5:;
  /* 10a46ba5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46ba8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a46bab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a46bad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46bb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a46bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46bbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46bbe push edx */
  push32((uint32_t)(EDX));
  /* 10a46bbf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a46bc2 push eax */
  push32((uint32_t)(EAX));
  /* 10a46bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46bc7 call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a46bcdu);
  /* 10a46bcd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a46bd0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46bd4 je 0x10a46bf4 */
  if (C.zf) goto L_10a46bf4;
  /* 10a46bd6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10a46bd8 push 0x10a6c104 */
  push32((uint32_t)(0x10a6c104u));
  /* 10a46bdd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a46bdf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a46be2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46be3 call 0x10a44520 */
  push32(0x10a46be8u); f_10a44520();
  /* 10a46be8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46beb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a46bee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46bf2 jne 0x10a46c05 */
  if (!C.zf) goto L_10a46c05;
L_10a46bf4:;
  /* 10a46bf4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a46bf7 push edx */
  push32((uint32_t)(EDX));
  /* 10a46bf8 call dword ptr [0x10a73350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73350))), 0x10a46bfeu);
  /* 10a46bfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46c00 jmp 0x10a46d05 */
  goto L_10a46d05;
L_10a46c05:;
  /* 10a46c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46c09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a46c0c push eax */
  push32((uint32_t)(EAX));
  /* 10a46c0d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a46c10 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46c14 push edx */
  push32((uint32_t)(EDX));
  /* 10a46c15 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a46c18 push eax */
  push32((uint32_t)(EAX));
  /* 10a46c19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46c1d call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a46c23u);
  /* 10a46c23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a46c25 jne 0x10a46c3c */
  if (!C.zf) goto L_10a46c3c;
  /* 10a46c27 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a46c29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a46c2c push ecx */
  push32((uint32_t)(ECX));
  /* 10a46c2d call 0x10a44fb0 */
  push32(0x10a46c32u); f_10a44fb0();
  /* 10a46c32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46c35 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10a46c3c:;
  /* 10a46c3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a46c3f push edx */
  push32((uint32_t)(EDX));
  /* 10a46c40 call dword ptr [0x10a73350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73350))), 0x10a46c46u);
  /* 10a46c46 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a46c49 jmp 0x10a46d05 */
  goto L_10a46d05;
L_10a46c4e:;
  /* 10a46c4e cmp dword ptr [0x10a7075c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a7075c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46c55 jne 0x10a46d03 */
  if (!C.zf) goto L_10a46d03;
  /* 10a46c5b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46c5f jne 0x10a46c77 */
  if (!C.zf) goto L_10a46c77;
  /* 10a46c61 call dword ptr [0x10a73358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73358))), 0x10a46c67u);
  /* 10a46c67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a46c6a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46c6e jne 0x10a46c77 */
  if (!C.zf) goto L_10a46c77;
  /* 10a46c70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46c72 jmp 0x10a46d05 */
  goto L_10a46d05;
L_10a46c77:;
  /* 10a46c77 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a46c7a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a46c7d:;
  /* 10a46c7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46c80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a46c83 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a46c85 je 0x10a46ca5 */
  if (C.zf) goto L_10a46ca5;
  /* 10a46c87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46c8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46c8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a46c90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46c93 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a46c96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a46c98 jne 0x10a46ca3 */
  if (!C.zf) goto L_10a46ca3;
  /* 10a46c9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46c9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46ca0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a46ca3:;
  /* 10a46ca3 jmp 0x10a46c7d */
  goto L_10a46c7d;
L_10a46ca5:;
  /* 10a46ca5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46ca8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a46cab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46cae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a46cb1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10a46cb6 push 0x10a6c104 */
  push32((uint32_t)(0x10a6c104u));
  /* 10a46cbb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a46cbd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a46cc0 push edx */
  push32((uint32_t)(EDX));
  /* 10a46cc1 call 0x10a44520 */
  push32(0x10a46cc6u); f_10a44520();
  /* 10a46cc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46cc9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a46ccc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46cd0 jne 0x10a46ce0 */
  if (!C.zf) goto L_10a46ce0;
  /* 10a46cd2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a46cd5 push eax */
  push32((uint32_t)(EAX));
  /* 10a46cd6 call dword ptr [0x10a7334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7334c))), 0x10a46cdcu);
  /* 10a46cdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46cde jmp 0x10a46d05 */
  goto L_10a46d05;
L_10a46ce0:;
  /* 10a46ce0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a46ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46ce4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a46ce7 push edx */
  push32((uint32_t)(EDX));
  /* 10a46ce8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46ceb push eax */
  push32((uint32_t)(EAX));
  /* 10a46cec call 0x10a4ae00 */
  push32(0x10a46cf1u); f_10a4ae00();
  /* 10a46cf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46cf4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a46cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46cf8 call dword ptr [0x10a7334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7334c))), 0x10a46cfeu);
  /* 10a46cfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46d01 jmp 0x10a46d05 */
  goto L_10a46d05;
L_10a46d03:;
  /* 10a46d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a46d05:;
  /* 10a46d05 mov esp, ebp */
  ESP = (EBP);
  /* 10a46d07 pop ebp */
  EBP = (pop32());
  /* 10a46d08 ret  */
  ESPCHK(0x10a46af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d10 @ 0x10a46d10 (77 bytes, 25 insns) */
void f_10a46d10(void) {
  FTRACE(0x10a46d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a46d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a46d11 mov ebp, esp */
  EBP = (ESP);
  /* 10a46d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46d15 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a46d1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46d1c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46d20 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10a46d23 push eax */
  push32((uint32_t)(EAX));
  /* 10a46d24 call dword ptr [0x10a73364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73364))), 0x10a46d2au);
  /* 10a46d2a mov dword ptr [0x10a71fac], eax */
  w32((uint32_t)(0x10a71fac), (EAX));
  /* 10a46d2f cmp dword ptr [0x10a71fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a71fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46d36 jne 0x10a46d3c */
  if (!C.zf) goto L_10a46d3c;
  /* 10a46d38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46d3a jmp 0x10a46d5b */
  goto L_10a46d5b;
L_10a46d3c:;
  /* 10a46d3c call 0x10a487c0 */
  push32(0x10a46d41u); f_10a487c0();
  /* 10a46d41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a46d43 jne 0x10a46d56 */
  if (!C.zf) goto L_10a46d56;
  /* 10a46d45 mov ecx, dword ptr [0x10a71fac] */
  ECX = (r32((uint32_t)(0x10a71fac)));
  /* 10a46d4b push ecx */
  push32((uint32_t)(ECX));
  /* 10a46d4c call dword ptr [0x10a73330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73330))), 0x10a46d52u);
  /* 10a46d52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a46d54 jmp 0x10a46d5b */
  goto L_10a46d5b;
L_10a46d56:;
  /* 10a46d56 mov eax, 1 */
  EAX = (0x1u);
L_10a46d5b:;
  /* 10a46d5b pop ebp */
  EBP = (pop32());
  /* 10a46d5c ret  */
  ESPCHK(0x10a46d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d60 @ 0x10a46d60 (156 bytes, 48 insns) */
void f_10a46d60(void) {
  FTRACE(0x10a46d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a46d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a46d61 mov ebp, esp */
  EBP = (ESP);
  /* 10a46d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a46d66 mov eax, dword ptr [0x10a71fa8] */
  EAX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a46d6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a46d6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a46d75 jmp 0x10a46d80 */
  goto L_10a46d80;
L_10a46d77:;
  /* 10a46d77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46d7a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46d7d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a46d80:;
  /* 10a46d80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a46d83 cmp edx, dword ptr [0x10a71fa4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a71fa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46d89 jge 0x10a46dd6 */
  if ((C.sf==C.of)) goto L_10a46dd6;
  /* 10a46d8b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10a46d90 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10a46d95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46d98 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a46d9b push ecx */
  push32((uint32_t)(ECX));
  /* 10a46d9c call dword ptr [0x10a7336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7336c))), 0x10a46da2u);
  /* 10a46da2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a46da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46da9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46dac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a46daf push eax */
  push32((uint32_t)(EAX));
  /* 10a46db0 call dword ptr [0x10a7336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7336c))), 0x10a46db6u);
  /* 10a46db6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46db9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a46dbc push edx */
  push32((uint32_t)(EDX));
  /* 10a46dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46dbf mov eax, dword ptr [0x10a71fac] */
  EAX = (r32((uint32_t)(0x10a71fac)));
  /* 10a46dc4 push eax */
  push32((uint32_t)(EAX));
  /* 10a46dc5 call dword ptr [0x10a73368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73368))), 0x10a46dcbu);
  /* 10a46dcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46dce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46dd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a46dd4 jmp 0x10a46d77 */
  goto L_10a46d77;
L_10a46dd6:;
  /* 10a46dd6 mov edx, dword ptr [0x10a71fa8] */
  EDX = (r32((uint32_t)(0x10a71fa8)));
  /* 10a46ddc push edx */
  push32((uint32_t)(EDX));
  /* 10a46ddd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46ddf mov eax, dword ptr [0x10a71fac] */
  EAX = (r32((uint32_t)(0x10a71fac)));
  /* 10a46de4 push eax */
  push32((uint32_t)(EAX));
  /* 10a46de5 call dword ptr [0x10a73368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73368))), 0x10a46debu);
  /* 10a46deb mov ecx, dword ptr [0x10a71fac] */
  ECX = (r32((uint32_t)(0x10a71fac)));
  /* 10a46df1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46df2 call dword ptr [0x10a73330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73330))), 0x10a46df8u);
  /* 10a46df8 mov esp, ebp */
  ESP = (EBP);
  /* 10a46dfa pop ebp */
  EBP = (pop32());
  /* 10a46dfb ret  */
  ESPCHK(0x10a46d60u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10a46e00 (73 bytes, 19 insns) */
void f_10a46e00(void) {
  FTRACE(0x10a46e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a46e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a46e01 mov ebp, esp */
  EBP = (ESP);
  /* 10a46e03 cmp dword ptr [0x10a705f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46e0a je 0x10a46e1e */
  if (C.zf) goto L_10a46e1e;
  /* 10a46e0c cmp dword ptr [0x10a705f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46e13 jne 0x10a46e47 */
  if (!C.zf) goto L_10a46e47;
  /* 10a46e15 cmp dword ptr [0x10a705f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46e1c jne 0x10a46e47 */
  if (!C.zf) goto L_10a46e47;
L_10a46e1e:;
  /* 10a46e1e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10a46e23 call 0x10a46e50 */
  push32(0x10a46e28u); f_10a46e50();
  /* 10a46e28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46e2b cmp dword ptr [0x10a70760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46e32 je 0x10a46e3a */
  if (C.zf) goto L_10a46e3a;
  /* 10a46e34 call dword ptr [0x10a70760] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a70760))), 0x10a46e3au);
L_10a46e3a:;
  /* 10a46e3a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10a46e3f call 0x10a46e50 */
  push32(0x10a46e44u); f_10a46e50();
  /* 10a46e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a46e47:;
  /* 10a46e47 pop ebp */
  EBP = (pop32());
  /* 10a46e48 ret  */
  ESPCHK(0x10a46e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e50 @ 0x10a46e50 (447 bytes, 131 insns) */
void f_10a46e50(void) {
  FTRACE(0x10a46e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a46e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a46e51 mov ebp, esp */
  EBP = (ESP);
  /* 10a46e53 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a46e59 push ebx */
  push32((uint32_t)(EBX));
  /* 10a46e5a push esi */
  push32((uint32_t)(ESI));
  /* 10a46e5b push edi */
  push32((uint32_t)(EDI));
  /* 10a46e5c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a46e63 jmp 0x10a46e6e */
  goto L_10a46e6e;
L_10a46e65:;
  /* 10a46e65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46e68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46e6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a46e6e:;
  /* 10a46e6e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46e72 jae 0x10a46e87 */
  if (!C.cf) goto L_10a46e87;
  /* 10a46e74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a46e7a cmp edx, dword ptr [ecx*8 + 0x10a6eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10a6eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46e81 jne 0x10a46e85 */
  if (!C.zf) goto L_10a46e85;
  /* 10a46e83 jmp 0x10a46e87 */
  goto L_10a46e87;
L_10a46e85:;
  /* 10a46e85 jmp 0x10a46e65 */
  goto L_10a46e65;
L_10a46e87:;
  /* 10a46e87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46e8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a46e8d cmp ecx, dword ptr [eax*8 + 0x10a6eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10a6eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46e94 jne 0x10a47008 */
  if (!C.zf) goto L_10a47008;
  /* 10a46e9a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46ea1 je 0x10a46ec4 */
  if (C.zf) goto L_10a46ec4;
  /* 10a46ea3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46ea6 mov eax, dword ptr [edx*8 + 0x10a6eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10a6eab4)));
  /* 10a46ead push eax */
  push32((uint32_t)(EAX));
  /* 10a46eae push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a46eb6 call 0x10a435e0 */
  push32(0x10a46ebbu); f_10a435e0();
  /* 10a46ebb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46ebe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46ec1 jne 0x10a46ec4 */
  if (!C.zf) goto L_10a46ec4;
  /* 10a46ec3 int3  */
  x86_unimpl("int3 @ 0x10a46ec3");
L_10a46ec4:;
  /* 10a46ec4 cmp dword ptr [0x10a705f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46ecb je 0x10a46edf */
  if (C.zf) goto L_10a46edf;
  /* 10a46ecd cmp dword ptr [0x10a705f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46ed4 jne 0x10a46f18 */
  if (!C.zf) goto L_10a46f18;
  /* 10a46ed6 cmp dword ptr [0x10a705f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a705f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46edd jne 0x10a46f18 */
  if (!C.zf) goto L_10a46f18;
L_10a46edf:;
  /* 10a46edf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46ee1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10a46ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46ee5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46ee8 mov eax, dword ptr [edx*8 + 0x10a6eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10a6eab4)));
  /* 10a46eef push eax */
  push32((uint32_t)(EAX));
  /* 10a46ef0 call 0x10a47350 */
  push32(0x10a46ef5u); f_10a47350();
  /* 10a46ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46ef8 push eax */
  push32((uint32_t)(EAX));
  /* 10a46ef9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46efc mov edx, dword ptr [ecx*8 + 0x10a6eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10a6eab4)));
  /* 10a46f03 push edx */
  push32((uint32_t)(EDX));
  /* 10a46f04 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a46f06 call dword ptr [0x10a732e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732e4))), 0x10a46f0cu);
  /* 10a46f0c push eax */
  push32((uint32_t)(EAX));
  /* 10a46f0d call dword ptr [0x10a732e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732e8))), 0x10a46f13u);
  /* 10a46f13 jmp 0x10a47008 */
  goto L_10a47008;
L_10a46f18:;
  /* 10a46f18 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46f1f je 0x10a47008 */
  if (C.zf) goto L_10a47008;
  /* 10a46f25 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10a46f2a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10a46f30 push eax */
  push32((uint32_t)(EAX));
  /* 10a46f31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a46f33 call dword ptr [0x10a73300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73300))), 0x10a46f39u);
  /* 10a46f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a46f3b jne 0x10a46f51 */
  if (!C.zf) goto L_10a46f51;
  /* 10a46f3d push 0x10a6b96c */
  push32((uint32_t)(0x10a6b96cu));
  /* 10a46f42 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10a46f48 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46f49 call 0x10a474d0 */
  push32(0x10a46f4eu); f_10a474d0();
  /* 10a46f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a46f51:;
  /* 10a46f51 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10a46f57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a46f5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46f5d push eax */
  push32((uint32_t)(EAX));
  /* 10a46f5e call 0x10a47350 */
  push32(0x10a46f63u); f_10a47350();
  /* 10a46f63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46f66 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46f69 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a46f6c jbe 0x10a46f9a */
  if ((C.cf||C.zf)) goto L_10a46f9a;
  /* 10a46f6e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10a46f74 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46f75 call 0x10a47350 */
  push32(0x10a46f7au); f_10a47350();
  /* 10a46f7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46f7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46f80 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10a46f84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a46f87 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a46f89 push 0x10a6b968 */
  push32((uint32_t)(0x10a6b968u));
  /* 10a46f8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46f91 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46f92 call 0x10a47d40 */
  push32(0x10a46f97u); f_10a47d40();
  /* 10a46f97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a46f9a:;
  /* 10a46f9a push 0x10a6c3c0 */
  push32((uint32_t)(0x10a6c3c0u));
  /* 10a46f9f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10a46fa5 push edx */
  push32((uint32_t)(EDX));
  /* 10a46fa6 call 0x10a474d0 */
  push32(0x10a46fabu); f_10a474d0();
  /* 10a46fab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a46fb1 push eax */
  push32((uint32_t)(EAX));
  /* 10a46fb2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10a46fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a46fb9 call 0x10a474e0 */
  push32(0x10a46fbeu); f_10a474e0();
  /* 10a46fbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46fc1 push 0x10a6b8e0 */
  push32((uint32_t)(0x10a6b8e0u));
  /* 10a46fc6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10a46fcc push edx */
  push32((uint32_t)(EDX));
  /* 10a46fcd call 0x10a474e0 */
  push32(0x10a46fd2u); f_10a474e0();
  /* 10a46fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46fd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a46fd8 mov ecx, dword ptr [eax*8 + 0x10a6eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10a6eab4)));
  /* 10a46fdf push ecx */
  push32((uint32_t)(ECX));
  /* 10a46fe0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10a46fe6 push edx */
  push32((uint32_t)(EDX));
  /* 10a46fe7 call 0x10a474e0 */
  push32(0x10a46fecu); f_10a474e0();
  /* 10a46fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a46fef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10a46ff4 push 0x10a6c398 */
  push32((uint32_t)(0x10a6c398u));
  /* 10a46ff9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10a46fff push eax */
  push32((uint32_t)(EAX));
  /* 10a47000 call 0x10a47c80 */
  push32(0x10a47005u); f_10a47c80();
  /* 10a47005 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47008:;
  /* 10a47008 pop edi */
  EDI = (pop32());
  /* 10a47009 pop esi */
  ESI = (pop32());
  /* 10a4700a pop ebx */
  EBX = (pop32());
  /* 10a4700b mov esp, ebp */
  ESP = (EBP);
  /* 10a4700d pop ebp */
  EBP = (pop32());
  /* 10a4700e ret  */
  ESPCHK(0x10a46e50u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10a47010 (80 bytes, 27 insns) */
void f_10a47010(void) {
  FTRACE(0x10a47010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47010 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47011 mov ebp, esp */
  EBP = (ESP);
  /* 10a47013 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a4701b jmp 0x10a47026 */
  goto L_10a47026;
L_10a4701d:;
  /* 10a4701d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47020 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47023 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a47026:;
  /* 10a47026 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4702a jae 0x10a4703f */
  if (!C.cf) goto L_10a4703f;
  /* 10a4702c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4702f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47032 cmp edx, dword ptr [ecx*8 + 0x10a6eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10a6eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47039 jne 0x10a4703d */
  if (!C.zf) goto L_10a4703d;
  /* 10a4703b jmp 0x10a4703f */
  goto L_10a4703f;
L_10a4703d:;
  /* 10a4703d jmp 0x10a4701d */
  goto L_10a4701d;
L_10a4703f:;
  /* 10a4703f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47045 cmp ecx, dword ptr [eax*8 + 0x10a6eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10a6eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4704c jne 0x10a4705a */
  if (!C.zf) goto L_10a4705a;
  /* 10a4704e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47051 mov eax, dword ptr [edx*8 + 0x10a6eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10a6eab4)));
  /* 10a47058 jmp 0x10a4705c */
  goto L_10a4705c;
L_10a4705a:;
  /* 10a4705a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a4705c:;
  /* 10a4705c mov esp, ebp */
  ESP = (EBP);
  /* 10a4705e pop ebp */
  EBP = (pop32());
  /* 10a4705f ret  */
  ESPCHK(0x10a47010u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10a47060 (66 bytes, 28 insns) */
void f_10a47060(void) {
  FTRACE(0x10a47060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47060 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47061 mov ebp, esp */
  EBP = (ESP);
  /* 10a47063 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47067 jne 0x10a47087 */
  if (!C.zf) goto L_10a47087;
  /* 10a47069 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4706d jge 0x10a47087 */
  if ((C.sf==C.of)) goto L_10a47087;
  /* 10a4706f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47071 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a47074 push eax */
  push32((uint32_t)(EAX));
  /* 10a47075 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47078 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47079 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4707c push edx */
  push32((uint32_t)(EDX));
  /* 10a4707d call 0x10a470b0 */
  push32(0x10a47082u); f_10a470b0();
  /* 10a47082 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47085 jmp 0x10a4709d */
  goto L_10a4709d;
L_10a47087:;
  /* 10a47087 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a47089 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4708c push eax */
  push32((uint32_t)(EAX));
  /* 10a4708d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47090 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47094 push edx */
  push32((uint32_t)(EDX));
  /* 10a47095 call 0x10a470b0 */
  push32(0x10a4709au); f_10a470b0();
  /* 10a4709a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a4709d:;
  /* 10a4709d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a470a0 pop ebp */
  EBP = (pop32());
  /* 10a470a1 ret  */
  ESPCHK(0x10a47060u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10a470b0 (194 bytes, 71 insns) */
void f_10a470b0(void) {
  FTRACE(0x10a470b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a470b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a470b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a470b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a470b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a470b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a470bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a470c0 je 0x10a470d9 */
  if (C.zf) goto L_10a470d9;
  /* 10a470c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a470c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10a470c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a470cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a470ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a470d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a470d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a470d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a470d9:;
  /* 10a470d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a470dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a470df:;
  /* 10a470df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a470e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a470e4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a470e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a470ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a470ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a470ef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a470f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a470f5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a470f9 jbe 0x10a47111 */
  if ((C.cf||C.zf)) goto L_10a47111;
  /* 10a470fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a470fe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47104 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a47106 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47109 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4710c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a4710f jmp 0x10a47125 */
  goto L_10a47125;
L_10a47111:;
  /* 10a47111 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a47114 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47117 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4711a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a4711c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4711f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47122 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a47125:;
  /* 10a47125 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47129 ja 0x10a470df */
  if ((!C.cf&&!C.zf)) goto L_10a470df;
  /* 10a4712b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4712e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a47131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47134 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a47137 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a4713a:;
  /* 10a4713a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4713d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a4713f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10a47142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47145 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47148 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a4714a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a4714c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4714f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10a47152 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a47154 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47157 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4715a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4715d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47160 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47163 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a47166 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47169 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4716c jb 0x10a4713a */
  if (C.cf) goto L_10a4713a;
  /* 10a4716e mov esp, ebp */
  ESP = (EBP);
  /* 10a47170 pop ebp */
  EBP = (pop32());
  /* 10a47171 ret  */
  ESPCHK(0x10a470b0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10a47180 (63 bytes, 24 insns) */
void f_10a47180(void) {
  FTRACE(0x10a47180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47180 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47181 mov ebp, esp */
  EBP = (ESP);
  /* 10a47183 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47184 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47188 jne 0x10a47199 */
  if (!C.zf) goto L_10a47199;
  /* 10a4718a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4718e jge 0x10a47199 */
  if ((C.sf==C.of)) goto L_10a47199;
  /* 10a47190 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a47197 jmp 0x10a471a0 */
  goto L_10a471a0;
L_10a47199:;
  /* 10a47199 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a471a0:;
  /* 10a471a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a471a3 push eax */
  push32((uint32_t)(EAX));
  /* 10a471a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a471a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a471a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a471ab push edx */
  push32((uint32_t)(EDX));
  /* 10a471ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a471af push eax */
  push32((uint32_t)(EAX));
  /* 10a471b0 call 0x10a470b0 */
  push32(0x10a471b5u); f_10a470b0();
  /* 10a471b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a471b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a471bb mov esp, ebp */
  ESP = (EBP);
  /* 10a471bd pop ebp */
  EBP = (pop32());
  /* 10a471be ret  */
  ESPCHK(0x10a47180u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10a471c0 (30 bytes, 14 insns) */
void f_10a471c0(void) {
  FTRACE(0x10a471c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a471c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a471c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a471c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a471c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a471c8 push eax */
  push32((uint32_t)(EAX));
  /* 10a471c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a471cc push ecx */
  push32((uint32_t)(ECX));
  /* 10a471cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a471d0 push edx */
  push32((uint32_t)(EDX));
  /* 10a471d1 call 0x10a470b0 */
  push32(0x10a471d6u); f_10a470b0();
  /* 10a471d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a471d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a471dc pop ebp */
  EBP = (pop32());
  /* 10a471dd ret  */
  ESPCHK(0x10a471c0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10a471e0 (72 bytes, 28 insns) */
void f_10a471e0(void) {
  FTRACE(0x10a471e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a471e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a471e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a471e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a471e4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a471e8 jne 0x10a47201 */
  if (!C.zf) goto L_10a47201;
  /* 10a471ea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a471ee jg 0x10a47201 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a47201;
  /* 10a471f0 jl 0x10a471f8 */
  if ((C.sf!=C.of)) goto L_10a471f8;
  /* 10a471f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a471f6 jae 0x10a47201 */
  if (!C.cf) goto L_10a47201;
L_10a471f8:;
  /* 10a471f8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a471ff jmp 0x10a47208 */
  goto L_10a47208;
L_10a47201:;
  /* 10a47201 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a47208:;
  /* 10a47208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4720b push eax */
  push32((uint32_t)(EAX));
  /* 10a4720c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4720f push ecx */
  push32((uint32_t)(ECX));
  /* 10a47210 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a47213 push edx */
  push32((uint32_t)(EDX));
  /* 10a47214 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47217 push eax */
  push32((uint32_t)(EAX));
  /* 10a47218 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4721b push ecx */
  push32((uint32_t)(ECX));
  /* 10a4721c call 0x10a47230 */
  push32(0x10a47221u); f_10a47230();
  /* 10a47221 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a47224 mov esp, ebp */
  ESP = (EBP);
  /* 10a47226 pop ebp */
  EBP = (pop32());
  /* 10a47227 ret  */
  ESPCHK(0x10a471e0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10a47230 (242 bytes, 91 insns) */
void f_10a47230(void) {
  FTRACE(0x10a47230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47230 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47231 mov ebp, esp */
  EBP = (ESP);
  /* 10a47233 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a47236 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a47239 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4723c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47240 je 0x10a47264 */
  if (C.zf) goto L_10a47264;
  /* 10a47242 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47245 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10a47248 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4724b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4724e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a47251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47254 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a47256 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47259 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4725c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a4725e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a47261 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a47264:;
  /* 10a47264 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47267 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a4726a:;
  /* 10a4726a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4726d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a4726f push ecx */
  push32((uint32_t)(ECX));
  /* 10a47270 push eax */
  push32((uint32_t)(EAX));
  /* 10a47271 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47274 push edx */
  push32((uint32_t)(EDX));
  /* 10a47275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47278 push eax */
  push32((uint32_t)(EAX));
  /* 10a47279 call 0x10a4b1b0 */
  push32(0x10a4727eu); f_10a4b1b0();
  /* 10a4727e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a47281 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a47284 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a47286 push edx */
  push32((uint32_t)(EDX));
  /* 10a47287 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47288 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4728b push eax */
  push32((uint32_t)(EAX));
  /* 10a4728c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4728f push ecx */
  push32((uint32_t)(ECX));
  /* 10a47290 call 0x10a4b140 */
  push32(0x10a47295u); f_10a4b140();
  /* 10a47295 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a47298 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10a4729b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4729f jbe 0x10a472b7 */
  if ((C.cf||C.zf)) goto L_10a472b7;
  /* 10a472a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a472a4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a472a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a472aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a472ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a472af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a472b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a472b5 jmp 0x10a472cb */
  goto L_10a472cb;
L_10a472b7:;
  /* 10a472b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a472ba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a472bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a472c0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a472c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a472c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a472c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a472cb:;
  /* 10a472cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a472cf ja 0x10a4726a */
  if ((!C.cf&&!C.zf)) goto L_10a4726a;
  /* 10a472d1 jb 0x10a472d9 */
  if (C.cf) goto L_10a472d9;
  /* 10a472d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a472d7 ja 0x10a4726a */
  if ((!C.cf&&!C.zf)) goto L_10a4726a;
L_10a472d9:;
  /* 10a472d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a472dc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a472df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a472e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a472e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a472e8:;
  /* 10a472e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a472eb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a472ed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10a472f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a472f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a472f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a472f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a472fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a472fd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10a47300 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a47302 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47305 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a47308 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a4730b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4730e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47311 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a47314 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47317 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4731a jb 0x10a472e8 */
  if (C.cf) goto L_10a472e8;
  /* 10a4731c mov esp, ebp */
  ESP = (EBP);
  /* 10a4731e pop ebp */
  EBP = (pop32());
  /* 10a4731f ret 0x14 */
  ESPCHK(0x10a47230u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10a47330 (31 bytes, 15 insns) */
void f_10a47330(void) {
  FTRACE(0x10a47330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47330 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47331 mov ebp, esp */
  EBP = (ESP);
  /* 10a47333 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a47335 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a47338 push eax */
  push32((uint32_t)(EAX));
  /* 10a47339 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4733c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4733d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47340 push edx */
  push32((uint32_t)(EDX));
  /* 10a47341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47344 push eax */
  push32((uint32_t)(EAX));
  /* 10a47345 call 0x10a47230 */
  push32(0x10a4734au); f_10a47230();
  /* 10a4734a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4734d pop ebp */
  EBP = (pop32());
  /* 10a4734e ret  */
  ESPCHK(0x10a47330u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10a47350 (123 bytes, 44 insns) */
void f_10a47350(void) {
  FTRACE(0x10a47350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47350 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a47354 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a4735a je 0x10a47370 */
  if (C.zf) goto L_10a47370;
L_10a4735c:;
  /* 10a4735c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10a4735e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a4735f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a47361 je 0x10a473a3 */
  if (C.zf) goto L_10a473a3;
  /* 10a47363 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a47369 jne 0x10a4735c */
  if (!C.zf) goto L_10a4735c;
  /* 10a4736b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10a47370:;
  /* 10a47370 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a47372 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a47377 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47379 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4737c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4737e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47381 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a47386 je 0x10a47370 */
  if (C.zf) goto L_10a47370;
  /* 10a47388 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a4738b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a4738d je 0x10a473c1 */
  if (C.zf) goto L_10a473c1;
  /* 10a4738f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a47391 je 0x10a473b7 */
  if (C.zf) goto L_10a473b7;
  /* 10a47393 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a47398 je 0x10a473ad */
  if (C.zf) goto L_10a473ad;
  /* 10a4739a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a4739f je 0x10a473a3 */
  if (C.zf) goto L_10a473a3;
  /* 10a473a1 jmp 0x10a47370 */
  goto L_10a47370;
L_10a473a3:;
  /* 10a473a3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10a473a6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a473aa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a473ac ret  */
  ESPCHK(0x10a47350u, _esp0);
  ESP += 4; return;
L_10a473ad:;
  /* 10a473ad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10a473b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a473b4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a473b6 ret  */
  ESPCHK(0x10a47350u, _esp0);
  ESP += 4; return;
L_10a473b7:;
  /* 10a473b7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10a473ba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a473be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a473c0 ret  */
  ESPCHK(0x10a47350u, _esp0);
  ESP += 4; return;
L_10a473c1:;
  /* 10a473c1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10a473c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a473c8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a473ca ret  */
  ESPCHK(0x10a47350u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x10a473d0 (249 bytes, 93 insns) */
void f_10a473d0(void) {
  FTRACE(0x10a473d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a473d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a473d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a473d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a473d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a473d7 push esi */
  push32((uint32_t)(ESI));
  /* 10a473d8 push edi */
  push32((uint32_t)(EDI));
  /* 10a473d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10a473dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a473df lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10a473e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10a473e5:;
  /* 10a473e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a473e9 jne 0x10a47409 */
  if (!C.zf) goto L_10a47409;
  /* 10a473eb push 0x10a6c3f8 */
  push32((uint32_t)(0x10a6c3f8u));
  /* 10a473f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a473f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10a473f4 push 0x10a6c3ec */
  push32((uint32_t)(0x10a6c3ecu));
  /* 10a473f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a473fb call 0x10a435e0 */
  push32(0x10a47400u); f_10a435e0();
  /* 10a47400 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47403 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47406 jne 0x10a47409 */
  if (!C.zf) goto L_10a47409;
  /* 10a47408 int3  */
  x86_unimpl("int3 @ 0x10a47408");
L_10a47409:;
  /* 10a47409 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4740b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4740d jne 0x10a473e5 */
  if (!C.zf) goto L_10a473e5;
L_10a4740f:;
  /* 10a4740f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47413 jne 0x10a47433 */
  if (!C.zf) goto L_10a47433;
  /* 10a47415 push 0x10a6c3dc */
  push32((uint32_t)(0x10a6c3dcu));
  /* 10a4741a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4741c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10a4741e push 0x10a6c3ec */
  push32((uint32_t)(0x10a6c3ecu));
  /* 10a47423 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a47425 call 0x10a435e0 */
  push32(0x10a4742au); f_10a435e0();
  /* 10a4742a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4742d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47430 jne 0x10a47433 */
  if (!C.zf) goto L_10a47433;
  /* 10a47432 int3  */
  x86_unimpl("int3 @ 0x10a47432");
L_10a47433:;
  /* 10a47433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a47435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a47437 jne 0x10a4740f */
  if (!C.zf) goto L_10a4740f;
  /* 10a47439 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4743c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10a47443 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47449 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a4744c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4744f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47452 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a47454 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47457 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4745a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a4745d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a47460 push edx */
  push32((uint32_t)(EDX));
  /* 10a47461 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a47464 push eax */
  push32((uint32_t)(EAX));
  /* 10a47465 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47468 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47469 call 0x10a4b4b0 */
  push32(0x10a4746eu); f_10a4b4b0();
  /* 10a4746e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47471 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a47474 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47477 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a4747a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4747d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47480 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a47483 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47486 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4748a jl 0x10a474ae */
  if ((C.sf!=C.of)) goto L_10a474ae;
  /* 10a4748c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4748f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a47491 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a47494 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a47496 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a4749c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10a4749f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a474a2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a474a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a474a7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a474aa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a474ac jmp 0x10a474bf */
  goto L_10a474bf;
L_10a474ae:;
  /* 10a474ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a474b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a474b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a474b4 call 0x10a4b230 */
  push32(0x10a474b9u); f_10a4b230();
  /* 10a474b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a474bc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10a474bf:;
  /* 10a474bf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a474c2 pop edi */
  EDI = (pop32());
  /* 10a474c3 pop esi */
  ESI = (pop32());
  /* 10a474c4 pop ebx */
  EBX = (pop32());
  /* 10a474c5 mov esp, ebp */
  ESP = (EBP);
  /* 10a474c7 pop ebp */
  EBP = (pop32());
  /* 10a474c8 ret  */
  ESPCHK(0x10a473d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x10a474d0 (7 bytes, 3 insns) */
void f_10a474d0(void) {
  FTRACE(0x10a474d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a474d0 push edi */
  push32((uint32_t)(EDI));
  /* 10a474d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10a474d5 jmp 0x10a47541 */
  jmp_ind(0x10a47541u); return;
}

/* FUN_100074e0 @ 0x10a474e0 (224 bytes, 84 insns) */
void f_10a474e0(void) {
  FTRACE(0x10a474e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a474e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a474e4 push edi */
  push32((uint32_t)(EDI));
  /* 10a474e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a474eb je 0x10a474fc */
  if (C.zf) goto L_10a474fc;
L_10a474ed:;
  /* 10a474ed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10a474ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a474f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a474f2 je 0x10a4752f */
  if (C.zf) goto L_10a4752f;
  /* 10a474f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a474fa jne 0x10a474ed */
  if (!C.zf) goto L_10a474ed;
L_10a474fc:;
  /* 10a474fc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a474fe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a47503 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47505 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a47508 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4750a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4750d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a47512 je 0x10a474fc */
  if (C.zf) goto L_10a474fc;
  /* 10a47514 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a47517 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a47519 je 0x10a4753e */
  if (C.zf) goto L_10a4753e;
  /* 10a4751b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a4751d je 0x10a47539 */
  if (C.zf) goto L_10a47539;
  /* 10a4751f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a47524 je 0x10a47534 */
  if (C.zf) goto L_10a47534;
  /* 10a47526 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a4752b je 0x10a4752f */
  if (C.zf) goto L_10a4752f;
  /* 10a4752d jmp 0x10a474fc */
  goto L_10a474fc;
L_10a4752f:;
  /* 10a4752f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10a47532 jmp 0x10a47541 */
  goto L_10a47541;
L_10a47534:;
  /* 10a47534 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10a47537 jmp 0x10a47541 */
  goto L_10a47541;
L_10a47539:;
  /* 10a47539 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10a4753c jmp 0x10a47541 */
  goto L_10a47541;
L_10a4753e:;
  /* 10a4753e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10a47541:;
  /* 10a47541 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a47545 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a4754b je 0x10a47566 */
  if (C.zf) goto L_10a47566;
L_10a4754d:;
  /* 10a4754d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a4754f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a47550 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10a47552 je 0x10a475b8 */
  if (C.zf) goto L_10a475b8;
  /* 10a47554 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10a47556 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a47557 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10a4755d jne 0x10a4754d */
  if (!C.zf) goto L_10a4754d;
  /* 10a4755f jmp 0x10a47566 */
  goto L_10a47566;
L_10a47561:;
  /* 10a47561 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a47563 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a47566:;
  /* 10a47566 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a4756b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a4756d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4756f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a47572 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a47574 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a47576 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47579 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a4757e je 0x10a47561 */
  if (C.zf) goto L_10a47561;
  /* 10a47580 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10a47582 je 0x10a475b8 */
  if (C.zf) goto L_10a475b8;
  /* 10a47584 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10a47586 je 0x10a475af */
  if (C.zf) goto L_10a475af;
  /* 10a47588 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a4758e je 0x10a475a2 */
  if (C.zf) goto L_10a475a2;
  /* 10a47590 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a47596 je 0x10a4759a */
  if (C.zf) goto L_10a4759a;
  /* 10a47598 jmp 0x10a47561 */
  goto L_10a47561;
L_10a4759a:;
  /* 10a4759a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a4759c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a475a0 pop edi */
  EDI = (pop32());
  /* 10a475a1 ret  */
  ESPCHK(0x10a474e0u, _esp0);
  ESP += 4; return;
L_10a475a2:;
  /* 10a475a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10a475a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a475a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10a475ad pop edi */
  EDI = (pop32());
  /* 10a475ae ret  */
  ESPCHK(0x10a474e0u, _esp0);
  ESP += 4; return;
L_10a475af:;
  /* 10a475af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10a475b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a475b6 pop edi */
  EDI = (pop32());
  /* 10a475b7 ret  */
  ESPCHK(0x10a474e0u, _esp0);
  ESP += 4; return;
L_10a475b8:;
  /* 10a475b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10a475ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a475be pop edi */
  EDI = (pop32());
  /* 10a475bf ret  */
  ESPCHK(0x10a474e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075c0 @ 0x10a475c0 (243 bytes, 91 insns) */
void f_10a475c0(void) {
  FTRACE(0x10a475c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a475c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a475c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a475c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a475c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a475c7 push esi */
  push32((uint32_t)(ESI));
  /* 10a475c8 push edi */
  push32((uint32_t)(EDI));
  /* 10a475c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10a475cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a475cf:;
  /* 10a475cf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a475d3 jne 0x10a475f3 */
  if (!C.zf) goto L_10a475f3;
  /* 10a475d5 push 0x10a6c3f8 */
  push32((uint32_t)(0x10a6c3f8u));
  /* 10a475da push 0 */
  push32((uint32_t)(0x0u));
  /* 10a475dc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10a475de push 0x10a6c408 */
  push32((uint32_t)(0x10a6c408u));
  /* 10a475e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a475e5 call 0x10a435e0 */
  push32(0x10a475eau); f_10a435e0();
  /* 10a475ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a475ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a475f0 jne 0x10a475f3 */
  if (!C.zf) goto L_10a475f3;
  /* 10a475f2 int3  */
  x86_unimpl("int3 @ 0x10a475f2");
L_10a475f3:;
  /* 10a475f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a475f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a475f7 jne 0x10a475cf */
  if (!C.zf) goto L_10a475cf;
L_10a475f9:;
  /* 10a475f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a475fd jne 0x10a4761d */
  if (!C.zf) goto L_10a4761d;
  /* 10a475ff push 0x10a6c3dc */
  push32((uint32_t)(0x10a6c3dcu));
  /* 10a47604 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a47606 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10a47608 push 0x10a6c408 */
  push32((uint32_t)(0x10a6c408u));
  /* 10a4760d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a4760f call 0x10a435e0 */
  push32(0x10a47614u); f_10a435e0();
  /* 10a47614 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47617 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4761a jne 0x10a4761d */
  if (!C.zf) goto L_10a4761d;
  /* 10a4761c int3  */
  x86_unimpl("int3 @ 0x10a4761c");
L_10a4761d:;
  /* 10a4761d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a4761f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a47621 jne 0x10a475f9 */
  if (!C.zf) goto L_10a475f9;
  /* 10a47623 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47626 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10a4762d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47630 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47633 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a47636 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4763c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a4763e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47641 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47644 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a47647 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a4764a push ecx */
  push32((uint32_t)(ECX));
  /* 10a4764b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a4764e push edx */
  push32((uint32_t)(EDX));
  /* 10a4764f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47652 push eax */
  push32((uint32_t)(EAX));
  /* 10a47653 call 0x10a4b4b0 */
  push32(0x10a47658u); f_10a4b4b0();
  /* 10a47658 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4765b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a4765e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47661 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a47664 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a47667 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4766a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a4766d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47670 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47674 jl 0x10a47698 */
  if ((C.sf!=C.of)) goto L_10a47698;
  /* 10a47676 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47679 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4767b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a4767e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a47680 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a47686 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a47689 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4768c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4768e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47691 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a47694 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a47696 jmp 0x10a476a9 */
  goto L_10a476a9;
L_10a47698:;
  /* 10a47698 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a4769b push edx */
  push32((uint32_t)(EDX));
  /* 10a4769c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a4769e call 0x10a4b230 */
  push32(0x10a476a3u); f_10a4b230();
  /* 10a476a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a476a6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10a476a9:;
  /* 10a476a9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a476ac pop edi */
  EDI = (pop32());
  /* 10a476ad pop esi */
  ESI = (pop32());
  /* 10a476ae pop ebx */
  EBX = (pop32());
  /* 10a476af mov esp, ebp */
  ESP = (EBP);
  /* 10a476b1 pop ebp */
  EBP = (pop32());
  /* 10a476b2 ret  */
  ESPCHK(0x10a475c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076c0 @ 0x10a476c0 (47 bytes, 17 insns) */
void f_10a476c0(void) {
  FTRACE(0x10a476c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a476c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a476c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a476c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10a476ca jb 0x10a476e0 */
  if (C.cf) goto L_10a476e0;
L_10a476cc:;
  /* 10a476cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a476d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a476d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10a476d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a476de jae 0x10a476cc */
  if (!C.cf) goto L_10a476cc;
L_10a476e0:;
  /* 10a476e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a476e2 mov eax, esp */
  EAX = (ESP);
  /* 10a476e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10a476e6 mov esp, ecx */
  ESP = (ECX);
  /* 10a476e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a476ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a476ed push eax */
  push32((uint32_t)(EAX));
  /* 10a476ee ret  */
  ESPCHK(0x10a476c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076f0 @ 0x10a476f0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10a476f0(void) {
  FTRACE(0x10a476f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a476f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a476f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a476f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a476f6 push esi */
  push32((uint32_t)(ESI));
  /* 10a476f7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a476fb je 0x10a47703 */
  if (C.zf) goto L_10a47703;
  /* 10a476fd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47701 jne 0x10a47708 */
  if (!C.zf) goto L_10a47708;
L_10a47703:;
  /* 10a47703 jmp 0x10a478d8 */
  goto L_10a478d8;
L_10a47708:;
  /* 10a47708 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4770c je 0x10a47724 */
  if (C.zf) goto L_10a47724;
  /* 10a4770e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47712 je 0x10a47724 */
  if (C.zf) goto L_10a47724;
  /* 10a47714 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47718 je 0x10a47724 */
  if (C.zf) goto L_10a47724;
  /* 10a4771a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4771e jne 0x10a47801 */
  if (!C.zf) goto L_10a47801;
L_10a47724:;
  /* 10a47724 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47726 call 0x10a47f20 */
  push32(0x10a4772bu); f_10a47f20();
  /* 10a4772b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4772e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47732 je 0x10a4773a */
  if (C.zf) goto L_10a4773a;
  /* 10a47734 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47738 jne 0x10a4777f */
  if (!C.zf) goto L_10a4777f;
L_10a4773a:;
  /* 10a4773a cmp dword ptr [0x10a70774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47741 jne 0x10a4777f */
  if (!C.zf) goto L_10a4777f;
  /* 10a47743 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47745 push 0x10a47920 */
  push32((uint32_t)(0x10a47920u));
  /* 10a4774a call dword ptr [0x10a73370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73370))), 0x10a47750u);
  /* 10a47750 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47753 jne 0x10a47761 */
  if (!C.zf) goto L_10a47761;
  /* 10a47755 mov dword ptr [0x10a70774], 1 */
  w32((uint32_t)(0x10a70774), (0x1u));
  /* 10a4775f jmp 0x10a4777f */
  goto L_10a4777f;
L_10a47761:;
  /* 10a47761 call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a47767u);
  /* 10a47767 mov esi, eax */
  ESI = (EAX);
  /* 10a47769 call 0x10a4c400 */
  push32(0x10a4776eu); f_10a4c400();
  /* 10a4776e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10a47770 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47772 call 0x10a47fc0 */
  push32(0x10a47777u); f_10a47fc0();
  /* 10a47777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4777a jmp 0x10a478d8 */
  goto L_10a478d8;
L_10a4777f:;
  /* 10a4777f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47782 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a47785 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a47788 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a4778b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a4778e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47792 ja 0x10a477f2 */
  if ((!C.cf&&!C.zf)) goto L_10a477f2;
  /* 10a47794 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a47797 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a47799 mov dl, byte ptr [eax + 0x10a478ff] */
  DL = (r8((uint32_t)(EAX + 0x10a478ff)));
  /* 10a4779f jmp dword ptr [edx*4 + 0x10a478eb] */
  switch (EDX) {
    case 0: goto L_10a477a6;
    case 1: goto L_10a477e0;
    case 2: goto L_10a477ba;
    case 3: goto L_10a477cd;
    case 4: goto L_10a477f2;
    default: x86_unimpl("switch@0x10a4779f out of table"); return;
  }
L_10a477a6:;
  /* 10a477a6 mov ecx, dword ptr [0x10a70764] */
  ECX = (r32((uint32_t)(0x10a70764)));
  /* 10a477ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a477af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a477b2 mov dword ptr [0x10a70764], edx */
  w32((uint32_t)(0x10a70764), (EDX));
  /* 10a477b8 jmp 0x10a477f2 */
  goto L_10a477f2;
L_10a477ba:;
  /* 10a477ba mov eax, dword ptr [0x10a70768] */
  EAX = (r32((uint32_t)(0x10a70768)));
  /* 10a477bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a477c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a477c5 mov dword ptr [0x10a70768], ecx */
  w32((uint32_t)(0x10a70768), (ECX));
  /* 10a477cb jmp 0x10a477f2 */
  goto L_10a477f2;
L_10a477cd:;
  /* 10a477cd mov edx, dword ptr [0x10a7076c] */
  EDX = (r32((uint32_t)(0x10a7076c)));
  /* 10a477d3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a477d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a477d9 mov dword ptr [0x10a7076c], eax */
  w32((uint32_t)(0x10a7076c), (EAX));
  /* 10a477de jmp 0x10a477f2 */
  goto L_10a477f2;
L_10a477e0:;
  /* 10a477e0 mov ecx, dword ptr [0x10a70770] */
  ECX = (r32((uint32_t)(0x10a70770)));
  /* 10a477e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a477e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a477ec mov dword ptr [0x10a70770], edx */
  w32((uint32_t)(0x10a70770), (EDX));
L_10a477f2:;
  /* 10a477f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a477f4 call 0x10a47fc0 */
  push32(0x10a477f9u); f_10a47fc0();
  /* 10a477f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a477fc jmp 0x10a478d3 */
  goto L_10a478d3;
L_10a47801:;
  /* 10a47801 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47805 je 0x10a47818 */
  if (C.zf) goto L_10a47818;
  /* 10a47807 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4780b je 0x10a47818 */
  if (C.zf) goto L_10a47818;
  /* 10a4780d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47811 je 0x10a47818 */
  if (C.zf) goto L_10a47818;
  /* 10a47813 jmp 0x10a478d8 */
  goto L_10a478d8;
L_10a47818:;
  /* 10a47818 call 0x10a43f60 */
  push32(0x10a4781du); f_10a43f60();
  /* 10a4781d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a47820 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47823 cmp dword ptr [eax + 0x50], 0x10a6ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10a6ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4782a jne 0x10a47875 */
  if (!C.zf) goto L_10a47875;
  /* 10a4782c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10a47831 push 0x10a6c414 */
  push32((uint32_t)(0x10a6c414u));
  /* 10a47836 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a47838 mov ecx, dword ptr [0x10a6ec80] */
  ECX = (r32((uint32_t)(0x10a6ec80)));
  /* 10a4783e push ecx */
  push32((uint32_t)(ECX));
  /* 10a4783f call 0x10a44520 */
  push32(0x10a47844u); f_10a44520();
  /* 10a47844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47847 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4784a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10a4784d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47850 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47854 je 0x10a47873 */
  if (C.zf) goto L_10a47873;
  /* 10a47856 mov ecx, dword ptr [0x10a6ec80] */
  ECX = (r32((uint32_t)(0x10a6ec80)));
  /* 10a4785c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4785d push 0x10a6ec00 */
  push32((uint32_t)(0x10a6ec00u));
  /* 10a47862 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47865 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10a47868 push eax */
  push32((uint32_t)(EAX));
  /* 10a47869 call 0x10a4ae00 */
  push32(0x10a4786eu); f_10a4ae00();
  /* 10a4786e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47871 jmp 0x10a47875 */
  goto L_10a47875;
L_10a47873:;
  /* 10a47873 jmp 0x10a478d8 */
  goto L_10a478d8;
L_10a47875:;
  /* 10a47875 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47878 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a4787b push edx */
  push32((uint32_t)(EDX));
  /* 10a4787c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4787f push eax */
  push32((uint32_t)(EAX));
  /* 10a47880 call 0x10a47c00 */
  push32(0x10a47885u); f_10a47c00();
  /* 10a47885 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47888 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4788b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4788f jne 0x10a47893 */
  if (!C.zf) goto L_10a47893;
  /* 10a47891 jmp 0x10a478d8 */
  goto L_10a478d8;
L_10a47893:;
  /* 10a47893 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47896 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a47899 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a4789c:;
  /* 10a4789c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4789f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a478a2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a478a5 jne 0x10a478d3 */
  if (!C.zf) goto L_10a478d3;
  /* 10a478a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a478aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a478ad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a478b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a478b3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a478b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a478b9 mov edx, dword ptr [0x10a6ec84] */
  EDX = (r32((uint32_t)(0x10a6ec84)));
  /* 10a478bf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a478c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a478c5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10a478c8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a478ca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a478cd jb 0x10a478d1 */
  if (C.cf) goto L_10a478d1;
  /* 10a478cf jmp 0x10a478d3 */
  goto L_10a478d3;
L_10a478d1:;
  /* 10a478d1 jmp 0x10a4789c */
  goto L_10a4789c;
L_10a478d3:;
  /* 10a478d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a478d6 jmp 0x10a478e6 */
  goto L_10a478e6;
L_10a478d8:;
  /* 10a478d8 call 0x10a4c3f0 */
  push32(0x10a478ddu); f_10a4c3f0();
  /* 10a478dd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10a478e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a478e6:;
  /* 10a478e6 pop esi */
  ESI = (pop32());
  /* 10a478e7 mov esp, ebp */
  ESP = (EBP);
  /* 10a478e9 pop ebp */
  EBP = (pop32());
  /* 10a478ea ret  */
  ESPCHK(0x10a476f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007920 @ 0x10a47920 (146 bytes, 45 insns) */
void f_10a47920(void) {
  FTRACE(0x10a47920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47920 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47921 mov ebp, esp */
  EBP = (ESP);
  /* 10a47923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a47926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47928 call 0x10a47f20 */
  push32(0x10a4792du); f_10a47f20();
  /* 10a4792d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47930 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47934 jne 0x10a4794e */
  if (!C.zf) goto L_10a4794e;
  /* 10a47936 mov dword ptr [ebp - 8], 0x10a70764 */
  w32((uint32_t)(EBP + -0x8), (0x10a70764u));
  /* 10a4793d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47940 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a47942 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a47945 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a4794c jmp 0x10a47964 */
  goto L_10a47964;
L_10a4794e:;
  /* 10a4794e mov dword ptr [ebp - 8], 0x10a70768 */
  w32((uint32_t)(EBP + -0x8), (0x10a70768u));
  /* 10a47955 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47958 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a4795a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a4795d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10a47964:;
  /* 10a47964 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47968 jne 0x10a47978 */
  if (!C.zf) goto L_10a47978;
  /* 10a4796a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4796c call 0x10a47fc0 */
  push32(0x10a47971u); f_10a47fc0();
  /* 10a47971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a47976 jmp 0x10a479ac */
  goto L_10a479ac;
L_10a47978:;
  /* 10a47978 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4797c je 0x10a4799d */
  if (C.zf) goto L_10a4799d;
  /* 10a4797e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47981 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10a47987 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47989 call 0x10a47fc0 */
  push32(0x10a4798eu); f_10a47fc0();
  /* 10a4798e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47991 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47994 push edx */
  push32((uint32_t)(EDX));
  /* 10a47995 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10a47998u);
  /* 10a47998 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4799b jmp 0x10a479a7 */
  goto L_10a479a7;
L_10a4799d:;
  /* 10a4799d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a4799f call 0x10a47fc0 */
  push32(0x10a479a4u); f_10a47fc0();
  /* 10a479a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a479a7:;
  /* 10a479a7 mov eax, 1 */
  EAX = (0x1u);
L_10a479ac:;
  /* 10a479ac mov esp, ebp */
  ESP = (EBP);
  /* 10a479ae pop ebp */
  EBP = (pop32());
  /* 10a479af ret 4 */
  ESPCHK(0x10a47920u, _esp0);
  ESP += 8; return;
}

/* FUN_100079c0 @ 0x10a479c0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10a479c0(void) {
  FTRACE(0x10a479c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a479c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a479c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a479c3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a479c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a479cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a479d0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a479d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a479d6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a479d9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a479dc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a479e0 ja 0x10a47a8e */
  if ((!C.cf&&!C.zf)) goto L_10a47a8e;
  /* 10a479e6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a479e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a479eb mov dl, byte ptr [eax + 0x10a47be2] */
  DL = (r8((uint32_t)(EAX + 0x10a47be2)));
  /* 10a479f1 jmp dword ptr [edx*4 + 0x10a47bca] */
  switch (EDX) {
    case 0: goto L_10a479f8;
    case 1: goto L_10a47a63;
    case 2: goto L_10a47a49;
    case 3: goto L_10a47a15;
    case 4: goto L_10a47a2f;
    case 5: goto L_10a47a8e;
    default: x86_unimpl("switch@0x10a479f1 out of table"); return;
  }
L_10a479f8:;
  /* 10a479f8 mov dword ptr [ebp - 0x18], 0x10a70764 */
  w32((uint32_t)(EBP + -0x18), (0x10a70764u));
  /* 10a479ff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a47a02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a47a04 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a47a07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a47a0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47a0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a47a10 jmp 0x10a47a96 */
  goto L_10a47a96;
L_10a47a15:;
  /* 10a47a15 mov dword ptr [ebp - 0x18], 0x10a70768 */
  w32((uint32_t)(EBP + -0x18), (0x10a70768u));
  /* 10a47a1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a47a1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a47a21 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a47a24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a47a27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47a2a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a47a2d jmp 0x10a47a96 */
  goto L_10a47a96;
L_10a47a2f:;
  /* 10a47a2f mov dword ptr [ebp - 0x18], 0x10a7076c */
  w32((uint32_t)(EBP + -0x18), (0x10a7076cu));
  /* 10a47a36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a47a39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a47a3b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a47a3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a47a41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47a44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a47a47 jmp 0x10a47a96 */
  goto L_10a47a96;
L_10a47a49:;
  /* 10a47a49 mov dword ptr [ebp - 0x18], 0x10a70770 */
  w32((uint32_t)(EBP + -0x18), (0x10a70770u));
  /* 10a47a50 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a47a53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a47a55 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a47a58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a47a5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47a5e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a47a61 jmp 0x10a47a96 */
  goto L_10a47a96;
L_10a47a63:;
  /* 10a47a63 call 0x10a43f60 */
  push32(0x10a47a68u); f_10a43f60();
  /* 10a47a68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a47a6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47a6e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a47a71 push edx */
  push32((uint32_t)(EDX));
  /* 10a47a72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47a75 push eax */
  push32((uint32_t)(EAX));
  /* 10a47a76 call 0x10a47c00 */
  push32(0x10a47a7bu); f_10a47c00();
  /* 10a47a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47a7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47a81 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a47a84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a47a87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a47a89 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a47a8c jmp 0x10a47a96 */
  goto L_10a47a96;
L_10a47a8e:;
  /* 10a47a8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a47a91 jmp 0x10a47bc6 */
  goto L_10a47bc6;
L_10a47a96:;
  /* 10a47a96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47a9a je 0x10a47aa6 */
  if (C.zf) goto L_10a47aa6;
  /* 10a47a9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47a9e call 0x10a47f20 */
  push32(0x10a47aa3u); f_10a47f20();
  /* 10a47aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47aa6:;
  /* 10a47aa6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47aaa jne 0x10a47ac3 */
  if (!C.zf) goto L_10a47ac3;
  /* 10a47aac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47ab0 je 0x10a47abc */
  if (C.zf) goto L_10a47abc;
  /* 10a47ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47ab4 call 0x10a47fc0 */
  push32(0x10a47ab9u); f_10a47fc0();
  /* 10a47ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47abc:;
  /* 10a47abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a47abe jmp 0x10a47bc6 */
  goto L_10a47bc6;
L_10a47ac3:;
  /* 10a47ac3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47ac7 jne 0x10a47ae0 */
  if (!C.zf) goto L_10a47ae0;
  /* 10a47ac9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47acd je 0x10a47ad9 */
  if (C.zf) goto L_10a47ad9;
  /* 10a47acf push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47ad1 call 0x10a47fc0 */
  push32(0x10a47ad6u); f_10a47fc0();
  /* 10a47ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47ad9:;
  /* 10a47ad9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a47adb call 0x10a43ce0 */
  push32(0x10a47ae0u); f_10a43ce0();
L_10a47ae0:;
  /* 10a47ae0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47ae4 je 0x10a47af2 */
  if (C.zf) goto L_10a47af2;
  /* 10a47ae6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47aea je 0x10a47af2 */
  if (C.zf) goto L_10a47af2;
  /* 10a47aec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47af0 jne 0x10a47b1e */
  if (!C.zf) goto L_10a47b1e;
L_10a47af2:;
  /* 10a47af2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47af5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10a47af8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a47afb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47afe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10a47b05 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47b09 jne 0x10a47b1e */
  if (!C.zf) goto L_10a47b1e;
  /* 10a47b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47b0e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10a47b11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a47b14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47b17 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10a47b1e:;
  /* 10a47b1e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47b22 jne 0x10a47b60 */
  if (!C.zf) goto L_10a47b60;
  /* 10a47b24 mov eax, dword ptr [0x10a6ec78] */
  EAX = (r32((uint32_t)(0x10a6ec78)));
  /* 10a47b29 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a47b2c jmp 0x10a47b37 */
  goto L_10a47b37;
L_10a47b2e:;
  /* 10a47b2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a47b31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47b34 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a47b37:;
  /* 10a47b37 mov edx, dword ptr [0x10a6ec78] */
  EDX = (r32((uint32_t)(0x10a6ec78)));
  /* 10a47b3d add edx, dword ptr [0x10a6ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a6ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47b43 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47b46 jge 0x10a47b5e */
  if ((C.sf==C.of)) goto L_10a47b5e;
  /* 10a47b48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a47b4b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a47b4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47b51 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a47b54 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10a47b5c jmp 0x10a47b2e */
  goto L_10a47b2e;
L_10a47b5e:;
  /* 10a47b5e jmp 0x10a47b69 */
  goto L_10a47b69;
L_10a47b60:;
  /* 10a47b60 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a47b63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a47b69:;
  /* 10a47b69 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47b6d je 0x10a47b79 */
  if (C.zf) goto L_10a47b79;
  /* 10a47b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a47b71 call 0x10a47fc0 */
  push32(0x10a47b76u); f_10a47fc0();
  /* 10a47b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47b79:;
  /* 10a47b79 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47b7d jne 0x10a47b90 */
  if (!C.zf) goto L_10a47b90;
  /* 10a47b7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47b82 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10a47b85 push edx */
  push32((uint32_t)(EDX));
  /* 10a47b86 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a47b88 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10a47b8bu);
  /* 10a47b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47b8e jmp 0x10a47b9a */
  goto L_10a47b9a;
L_10a47b90:;
  /* 10a47b90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47b93 push eax */
  push32((uint32_t)(EAX));
  /* 10a47b94 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10a47b97u);
  /* 10a47b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47b9a:;
  /* 10a47b9a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47b9e je 0x10a47bac */
  if (C.zf) goto L_10a47bac;
  /* 10a47ba0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47ba4 je 0x10a47bac */
  if (C.zf) goto L_10a47bac;
  /* 10a47ba6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47baa jne 0x10a47bc4 */
  if (!C.zf) goto L_10a47bc4;
L_10a47bac:;
  /* 10a47bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47baf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a47bb2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10a47bb5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47bb9 jne 0x10a47bc4 */
  if (!C.zf) goto L_10a47bc4;
  /* 10a47bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47bbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47bc1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10a47bc4:;
  /* 10a47bc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a47bc6:;
  /* 10a47bc6 mov esp, ebp */
  ESP = (EBP);
  /* 10a47bc8 pop ebp */
  EBP = (pop32());
  /* 10a47bc9 ret  */
  ESPCHK(0x10a479c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c00 @ 0x10a47c00 (91 bytes, 35 insns) */
void f_10a47c00(void) {
  FTRACE(0x10a47c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47c01 mov ebp, esp */
  EBP = (ESP);
  /* 10a47c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47c04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47c07 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a47c0a:;
  /* 10a47c0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47c0d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a47c10 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47c13 je 0x10a47c33 */
  if (C.zf) goto L_10a47c33;
  /* 10a47c15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47c18 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47c1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a47c1e mov ecx, dword ptr [0x10a6ec84] */
  ECX = (r32((uint32_t)(0x10a6ec84)));
  /* 10a47c24 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a47c27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47c2a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47c2c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47c2f jae 0x10a47c33 */
  if (!C.cf) goto L_10a47c33;
  /* 10a47c31 jmp 0x10a47c0a */
  goto L_10a47c0a;
L_10a47c33:;
  /* 10a47c33 mov eax, dword ptr [0x10a6ec84] */
  EAX = (r32((uint32_t)(0x10a6ec84)));
  /* 10a47c38 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a47c3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47c3e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47c40 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47c43 jae 0x10a47c55 */
  if (!C.cf) goto L_10a47c55;
  /* 10a47c45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47c48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a47c4b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47c4e jne 0x10a47c55 */
  if (!C.zf) goto L_10a47c55;
  /* 10a47c50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47c53 jmp 0x10a47c57 */
  goto L_10a47c57;
L_10a47c55:;
  /* 10a47c55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a47c57:;
  /* 10a47c57 mov esp, ebp */
  ESP = (EBP);
  /* 10a47c59 pop ebp */
  EBP = (pop32());
  /* 10a47c5a ret  */
  ESPCHK(0x10a47c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c60 @ 0x10a47c60 (13 bytes, 6 insns) */
void f_10a47c60(void) {
  FTRACE(0x10a47c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47c61 mov ebp, esp */
  EBP = (ESP);
  /* 10a47c63 call 0x10a43f60 */
  push32(0x10a47c68u); f_10a43f60();
  /* 10a47c68 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47c6b pop ebp */
  EBP = (pop32());
  /* 10a47c6c ret  */
  ESPCHK(0x10a47c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x10a47c70 (13 bytes, 6 insns) */
void f_10a47c70(void) {
  FTRACE(0x10a47c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47c71 mov ebp, esp */
  EBP = (ESP);
  /* 10a47c73 call 0x10a43f60 */
  push32(0x10a47c78u); f_10a43f60();
  /* 10a47c78 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47c7b pop ebp */
  EBP = (pop32());
  /* 10a47c7c ret  */
  ESPCHK(0x10a47c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c80 @ 0x10a47c80 (187 bytes, 54 insns) */
void f_10a47c80(void) {
  FTRACE(0x10a47c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47c81 mov ebp, esp */
  EBP = (ESP);
  /* 10a47c83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a47c86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a47c8d cmp dword ptr [0x10a70778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47c94 jne 0x10a47cf3 */
  if (!C.zf) goto L_10a47cf3;
  /* 10a47c96 push 0x10a6b840 */
  push32((uint32_t)(0x10a6b840u));
  /* 10a47c9b call dword ptr [0x10a732f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732f8))), 0x10a47ca1u);
  /* 10a47ca1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a47ca4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47ca8 je 0x10a47cc7 */
  if (C.zf) goto L_10a47cc7;
  /* 10a47caa push 0x10a6c444 */
  push32((uint32_t)(0x10a6c444u));
  /* 10a47caf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47cb2 push eax */
  push32((uint32_t)(EAX));
  /* 10a47cb3 call dword ptr [0x10a732f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732f4))), 0x10a47cb9u);
  /* 10a47cb9 mov dword ptr [0x10a70778], eax */
  w32((uint32_t)(0x10a70778), (EAX));
  /* 10a47cbe cmp dword ptr [0x10a70778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47cc5 jne 0x10a47ccb */
  if (!C.zf) goto L_10a47ccb;
L_10a47cc7:;
  /* 10a47cc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a47cc9 jmp 0x10a47d37 */
  goto L_10a47d37;
L_10a47ccb:;
  /* 10a47ccb push 0x10a6c434 */
  push32((uint32_t)(0x10a6c434u));
  /* 10a47cd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47cd4 call dword ptr [0x10a732f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732f4))), 0x10a47cdau);
  /* 10a47cda mov dword ptr [0x10a7077c], eax */
  w32((uint32_t)(0x10a7077c), (EAX));
  /* 10a47cdf push 0x10a6c420 */
  push32((uint32_t)(0x10a6c420u));
  /* 10a47ce4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a47ce7 push edx */
  push32((uint32_t)(EDX));
  /* 10a47ce8 call dword ptr [0x10a732f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732f4))), 0x10a47ceeu);
  /* 10a47cee mov dword ptr [0x10a70780], eax */
  w32((uint32_t)(0x10a70780), (EAX));
L_10a47cf3:;
  /* 10a47cf3 cmp dword ptr [0x10a7077c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7077c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47cfa je 0x10a47d05 */
  if (C.zf) goto L_10a47d05;
  /* 10a47cfc call dword ptr [0x10a7077c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7077c))), 0x10a47d02u);
  /* 10a47d02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a47d05:;
  /* 10a47d05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47d09 je 0x10a47d21 */
  if (C.zf) goto L_10a47d21;
  /* 10a47d0b cmp dword ptr [0x10a70780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47d12 je 0x10a47d21 */
  if (C.zf) goto L_10a47d21;
  /* 10a47d14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47d17 push eax */
  push32((uint32_t)(EAX));
  /* 10a47d18 call dword ptr [0x10a70780] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a70780))), 0x10a47d1eu);
  /* 10a47d1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a47d21:;
  /* 10a47d21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a47d24 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47d25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a47d28 push edx */
  push32((uint32_t)(EDX));
  /* 10a47d29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47d2c push eax */
  push32((uint32_t)(EAX));
  /* 10a47d2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47d30 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47d31 call dword ptr [0x10a70778] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a70778))), 0x10a47d37u);
L_10a47d37:;
  /* 10a47d37 mov esp, ebp */
  ESP = (EBP);
  /* 10a47d39 pop ebp */
  EBP = (pop32());
  /* 10a47d3a ret  */
  ESPCHK(0x10a47c80u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10a47d40 (254 bytes, 109 insns) */
void f_10a47d40(void) {
  FTRACE(0x10a47d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47d40 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a47d44 push edi */
  push32((uint32_t)(EDI));
  /* 10a47d45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a47d47 je 0x10a47dc3 */
  if (C.zf) goto L_10a47dc3;
  /* 10a47d49 push esi */
  push32((uint32_t)(ESI));
  /* 10a47d4a push ebx */
  push32((uint32_t)(EBX));
  /* 10a47d4b mov ebx, ecx */
  EBX = (ECX);
  /* 10a47d4d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10a47d51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10a47d57 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10a47d5b jne 0x10a47d64 */
  if (!C.zf) goto L_10a47d64;
  /* 10a47d5d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a47d60 jne 0x10a47dd1 */
  if (!C.zf) goto L_10a47dd1;
  /* 10a47d62 jmp 0x10a47d85 */
  goto L_10a47d85;
L_10a47d64:;
  /* 10a47d64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a47d66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a47d67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a47d69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a47d6a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a47d6b je 0x10a47d92 */
  if (C.zf) goto L_10a47d92;
  /* 10a47d6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a47d6f je 0x10a47d9a */
  if (C.zf) goto L_10a47d9a;
  /* 10a47d71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10a47d77 jne 0x10a47d64 */
  if (!C.zf) goto L_10a47d64;
  /* 10a47d79 mov ebx, ecx */
  EBX = (ECX);
  /* 10a47d7b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a47d7e jne 0x10a47dd1 */
  if (!C.zf) goto L_10a47dd1;
L_10a47d80:;
  /* 10a47d80 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10a47d83 je 0x10a47d92 */
  if (C.zf) goto L_10a47d92;
L_10a47d85:;
  /* 10a47d85 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a47d87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a47d88 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a47d8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a47d8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a47d8d je 0x10a47dbe */
  if (C.zf) goto L_10a47dbe;
  /* 10a47d8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10a47d90 jne 0x10a47d85 */
  if (!C.zf) goto L_10a47d85;
L_10a47d92:;
  /* 10a47d92 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a47d96 pop ebx */
  EBX = (pop32());
  /* 10a47d97 pop esi */
  ESI = (pop32());
  /* 10a47d98 pop edi */
  EDI = (pop32());
  /* 10a47d99 ret  */
  ESPCHK(0x10a47d40u, _esp0);
  ESP += 4; return;
L_10a47d9a:;
  /* 10a47d9a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a47da0 je 0x10a47db4 */
  if (C.zf) goto L_10a47db4;
L_10a47da2:;
  /* 10a47da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a47da4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a47da5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a47da6 je 0x10a47e36 */
  if (C.zf) goto L_10a47e36;
  /* 10a47dac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a47db2 jne 0x10a47da2 */
  if (!C.zf) goto L_10a47da2;
L_10a47db4:;
  /* 10a47db4 mov ebx, ecx */
  EBX = (ECX);
  /* 10a47db6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a47db9 jne 0x10a47e27 */
  if (!C.zf) goto L_10a47e27;
L_10a47dbb:;
  /* 10a47dbb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a47dbd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10a47dbe:;
  /* 10a47dbe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10a47dbf jne 0x10a47dbb */
  if (!C.zf) goto L_10a47dbb;
  /* 10a47dc1 pop ebx */
  EBX = (pop32());
  /* 10a47dc2 pop esi */
  ESI = (pop32());
L_10a47dc3:;
  /* 10a47dc3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a47dc7 pop edi */
  EDI = (pop32());
  /* 10a47dc8 ret  */
  ESPCHK(0x10a47d40u, _esp0);
  ESP += 4; return;
L_10a47dc9:;
  /* 10a47dc9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a47dcb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47dce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a47dcf je 0x10a47d80 */
  if (C.zf) goto L_10a47d80;
L_10a47dd1:;
  /* 10a47dd1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10a47dd6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10a47dd8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47dda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a47ddd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a47ddf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10a47de1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47de4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10a47de9 je 0x10a47dc9 */
  if (C.zf) goto L_10a47dc9;
  /* 10a47deb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10a47ded je 0x10a47e1b */
  if (C.zf) goto L_10a47e1b;
  /* 10a47def test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10a47df1 je 0x10a47e11 */
  if (C.zf) goto L_10a47e11;
  /* 10a47df3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10a47df9 je 0x10a47e07 */
  if (C.zf) goto L_10a47e07;
  /* 10a47dfb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10a47e01 jne 0x10a47dc9 */
  if (!C.zf) goto L_10a47dc9;
  /* 10a47e03 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a47e05 jmp 0x10a47e1f */
  goto L_10a47e1f;
L_10a47e07:;
  /* 10a47e07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a47e0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a47e0f jmp 0x10a47e1f */
  goto L_10a47e1f;
L_10a47e11:;
  /* 10a47e11 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a47e17 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10a47e19 jmp 0x10a47e1f */
  goto L_10a47e1f;
L_10a47e1b:;
  /* 10a47e1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a47e1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10a47e1f:;
  /* 10a47e1f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47e22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a47e24 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a47e25 je 0x10a47e31 */
  if (C.zf) goto L_10a47e31;
L_10a47e27:;
  /* 10a47e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a47e29:;
  /* 10a47e29 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10a47e2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47e2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a47e2f jne 0x10a47e29 */
  if (!C.zf) goto L_10a47e29;
L_10a47e31:;
  /* 10a47e31 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10a47e34 jne 0x10a47dbb */
  if (!C.zf) goto L_10a47dbb;
L_10a47e36:;
  /* 10a47e36 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a47e3a pop ebx */
  EBX = (pop32());
  /* 10a47e3b pop esi */
  ESI = (pop32());
  /* 10a47e3c pop edi */
  EDI = (pop32());
  /* 10a47e3d ret  */
  ESPCHK(0x10a47d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e40 @ 0x10a47e40 (55 bytes, 16 insns) */
void f_10a47e40(void) {
  FTRACE(0x10a47e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47e41 mov ebp, esp */
  EBP = (ESP);
  /* 10a47e43 mov eax, dword ptr [0x10a6eb84] */
  EAX = (r32((uint32_t)(0x10a6eb84)));
  /* 10a47e48 push eax */
  push32((uint32_t)(EAX));
  /* 10a47e49 call dword ptr [0x10a73374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73374))), 0x10a47e4fu);
  /* 10a47e4f mov ecx, dword ptr [0x10a6eb74] */
  ECX = (r32((uint32_t)(0x10a6eb74)));
  /* 10a47e55 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47e56 call dword ptr [0x10a73374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73374))), 0x10a47e5cu);
  /* 10a47e5c mov edx, dword ptr [0x10a6eb64] */
  EDX = (r32((uint32_t)(0x10a6eb64)));
  /* 10a47e62 push edx */
  push32((uint32_t)(EDX));
  /* 10a47e63 call dword ptr [0x10a73374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73374))), 0x10a47e69u);
  /* 10a47e69 mov eax, dword ptr [0x10a6eb44] */
  EAX = (r32((uint32_t)(0x10a6eb44)));
  /* 10a47e6e push eax */
  push32((uint32_t)(EAX));
  /* 10a47e6f call dword ptr [0x10a73374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73374))), 0x10a47e75u);
  /* 10a47e75 pop ebp */
  EBP = (pop32());
  /* 10a47e76 ret  */
  ESPCHK(0x10a47e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10a47e80 (159 bytes, 47 insns) */
void f_10a47e80(void) {
  FTRACE(0x10a47e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47e81 mov ebp, esp */
  EBP = (ESP);
  /* 10a47e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47e84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a47e8b jmp 0x10a47e96 */
  goto L_10a47e96;
L_10a47e8d:;
  /* 10a47e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47e90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47e93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a47e96:;
  /* 10a47e96 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47e9a jge 0x10a47ee9 */
  if ((C.sf==C.of)) goto L_10a47ee9;
  /* 10a47e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47e9f cmp dword ptr [ecx*4 + 0x10a6eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10a6eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47ea7 je 0x10a47ee7 */
  if (C.zf) goto L_10a47ee7;
  /* 10a47ea9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47ead je 0x10a47ee7 */
  if (C.zf) goto L_10a47ee7;
  /* 10a47eaf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47eb3 je 0x10a47ee7 */
  if (C.zf) goto L_10a47ee7;
  /* 10a47eb5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47eb9 je 0x10a47ee7 */
  if (C.zf) goto L_10a47ee7;
  /* 10a47ebb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47ebf je 0x10a47ee7 */
  if (C.zf) goto L_10a47ee7;
  /* 10a47ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47ec4 mov eax, dword ptr [edx*4 + 0x10a6eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a6eb40)));
  /* 10a47ecb push eax */
  push32((uint32_t)(EAX));
  /* 10a47ecc call dword ptr [0x10a7333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7333c))), 0x10a47ed2u);
  /* 10a47ed2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a47ed4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47ed7 mov edx, dword ptr [ecx*4 + 0x10a6eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6eb40)));
  /* 10a47ede push edx */
  push32((uint32_t)(EDX));
  /* 10a47edf call 0x10a44fb0 */
  push32(0x10a47ee4u); f_10a44fb0();
  /* 10a47ee4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47ee7:;
  /* 10a47ee7 jmp 0x10a47e8d */
  goto L_10a47e8d;
L_10a47ee9:;
  /* 10a47ee9 mov eax, dword ptr [0x10a6eb64] */
  EAX = (r32((uint32_t)(0x10a6eb64)));
  /* 10a47eee push eax */
  push32((uint32_t)(EAX));
  /* 10a47eef call dword ptr [0x10a7333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7333c))), 0x10a47ef5u);
  /* 10a47ef5 mov ecx, dword ptr [0x10a6eb74] */
  ECX = (r32((uint32_t)(0x10a6eb74)));
  /* 10a47efb push ecx */
  push32((uint32_t)(ECX));
  /* 10a47efc call dword ptr [0x10a7333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7333c))), 0x10a47f02u);
  /* 10a47f02 mov edx, dword ptr [0x10a6eb84] */
  EDX = (r32((uint32_t)(0x10a6eb84)));
  /* 10a47f08 push edx */
  push32((uint32_t)(EDX));
  /* 10a47f09 call dword ptr [0x10a7333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7333c))), 0x10a47f0fu);
  /* 10a47f0f mov eax, dword ptr [0x10a6eb44] */
  EAX = (r32((uint32_t)(0x10a6eb44)));
  /* 10a47f14 push eax */
  push32((uint32_t)(EAX));
  /* 10a47f15 call dword ptr [0x10a7333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7333c))), 0x10a47f1bu);
  /* 10a47f1b mov esp, ebp */
  ESP = (EBP);
  /* 10a47f1d pop ebp */
  EBP = (pop32());
  /* 10a47f1e ret  */
  ESPCHK(0x10a47e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f20 @ 0x10a47f20 (151 bytes, 46 insns) */
void f_10a47f20(void) {
  FTRACE(0x10a47f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47f21 mov ebp, esp */
  EBP = (ESP);
  /* 10a47f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10a47f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47f27 cmp dword ptr [eax*4 + 0x10a6eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10a6eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47f2f jne 0x10a47fa2 */
  if (!C.zf) goto L_10a47fa2;
  /* 10a47f31 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10a47f36 push 0x10a6c450 */
  push32((uint32_t)(0x10a6c450u));
  /* 10a47f3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a47f3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10a47f3f call 0x10a44520 */
  push32(0x10a47f44u); f_10a44520();
  /* 10a47f44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47f47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a47f4a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47f4e jne 0x10a47f5a */
  if (!C.zf) goto L_10a47f5a;
  /* 10a47f50 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a47f52 call 0x10a43490 */
  push32(0x10a47f57u); f_10a43490();
  /* 10a47f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47f5a:;
  /* 10a47f5a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a47f5c call 0x10a47f20 */
  push32(0x10a47f61u); f_10a47f20();
  /* 10a47f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a47f64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47f67 cmp dword ptr [ecx*4 + 0x10a6eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10a6eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a47f6f jne 0x10a47f8a */
  if (!C.zf) goto L_10a47f8a;
  /* 10a47f71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47f74 push edx */
  push32((uint32_t)(EDX));
  /* 10a47f75 call dword ptr [0x10a73374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73374))), 0x10a47f7bu);
  /* 10a47f7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47f7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47f81 mov dword ptr [eax*4 + 0x10a6eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10a6eb40), (ECX));
  /* 10a47f88 jmp 0x10a47f98 */
  goto L_10a47f98;
L_10a47f8a:;
  /* 10a47f8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a47f8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a47f8f push edx */
  push32((uint32_t)(EDX));
  /* 10a47f90 call 0x10a44fb0 */
  push32(0x10a47f95u); f_10a44fb0();
  /* 10a47f95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47f98:;
  /* 10a47f98 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a47f9a call 0x10a47fc0 */
  push32(0x10a47f9fu); f_10a47fc0();
  /* 10a47f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a47fa2:;
  /* 10a47fa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47fa5 mov ecx, dword ptr [eax*4 + 0x10a6eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a6eb40)));
  /* 10a47fac push ecx */
  push32((uint32_t)(ECX));
  /* 10a47fad call dword ptr [0x10a73360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73360))), 0x10a47fb3u);
  /* 10a47fb3 mov esp, ebp */
  ESP = (EBP);
  /* 10a47fb5 pop ebp */
  EBP = (pop32());
  /* 10a47fb6 ret  */
  ESPCHK(0x10a47f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc0 @ 0x10a47fc0 (22 bytes, 8 insns) */
void f_10a47fc0(void) {
  FTRACE(0x10a47fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a47fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47fc6 mov ecx, dword ptr [eax*4 + 0x10a6eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a6eb40)));
  /* 10a47fcd push ecx */
  push32((uint32_t)(ECX));
  /* 10a47fce call dword ptr [0x10a73378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73378))), 0x10a47fd4u);
  /* 10a47fd4 pop ebp */
  EBP = (pop32());
  /* 10a47fd5 ret  */
  ESPCHK(0x10a47fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe0 @ 0x10a47fe0 (26 bytes, 10 insns) */
void f_10a47fe0(void) {
  FTRACE(0x10a47fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a47fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a47fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10a47fe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a47fe6 push eax */
  push32((uint32_t)(EAX));
  /* 10a47fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a47fe9 call dword ptr [0x10a7337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7337c))), 0x10a47fefu);
  /* 10a47fef push 0xff */
  push32((uint32_t)(0xffu));
  /* 10a47ff4 call dword ptr [0x10a73304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73304))), 0x10a47ffau);
  /* 10a47ffa pop ebp */
  EBP = (pop32());
  /* 10a47ffb ret  */
  ESPCHK(0x10a47fe0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10a48000 (446 bytes, 130 insns) */
void f_10a48000(void) {
  FTRACE(0x10a48000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48000 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48001 mov ebp, esp */
  EBP = (ESP);
  /* 10a48003 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48006 call 0x10a43f60 */
  push32(0x10a4800bu); f_10a43f60();
  /* 10a4800b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4800e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48011 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10a48014 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48018 push edx */
  push32((uint32_t)(EDX));
  /* 10a48019 call 0x10a481c0 */
  push32(0x10a4801eu); f_10a481c0();
  /* 10a4801e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48021 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a48024 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48028 je 0x10a48033 */
  if (C.zf) goto L_10a48033;
  /* 10a4802a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4802d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48031 jne 0x10a48042 */
  if (!C.zf) goto L_10a48042;
L_10a48033:;
  /* 10a48033 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48036 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48037 call dword ptr [0x10a73380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73380))), 0x10a4803du);
  /* 10a4803d jmp 0x10a481ba */
  goto L_10a481ba;
L_10a48042:;
  /* 10a48042 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a48045 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48049 jne 0x10a4805f */
  if (!C.zf) goto L_10a4805f;
  /* 10a4804b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4804e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a48055 mov eax, 1 */
  EAX = (0x1u);
  /* 10a4805a jmp 0x10a481ba */
  goto L_10a481ba;
L_10a4805f:;
  /* 10a4805f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a48062 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48066 jne 0x10a48070 */
  if (!C.zf) goto L_10a48070;
  /* 10a48068 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a4806b jmp 0x10a481ba */
  goto L_10a481ba;
L_10a48070:;
  /* 10a48070 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a48073 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a48076 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a48079 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4807c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10a4807f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a48082 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48085 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48088 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10a4808b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4808e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48092 jne 0x10a48197 */
  if (!C.zf) goto L_10a48197;
  /* 10a48098 mov eax, dword ptr [0x10a6ec78] */
  EAX = (r32((uint32_t)(0x10a6ec78)));
  /* 10a4809d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a480a0 jmp 0x10a480ab */
  goto L_10a480ab;
L_10a480a2:;
  /* 10a480a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a480a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a480a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a480ab:;
  /* 10a480ab mov edx, dword ptr [0x10a6ec78] */
  EDX = (r32((uint32_t)(0x10a6ec78)));
  /* 10a480b1 add edx, dword ptr [0x10a6ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a6ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a480b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a480ba jge 0x10a480d2 */
  if ((C.sf==C.of)) goto L_10a480d2;
  /* 10a480bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a480bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a480c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a480c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a480c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10a480d0 jmp 0x10a480a2 */
  goto L_10a480a2;
L_10a480d2:;
  /* 10a480d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a480d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10a480d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a480db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a480de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a480e4 jne 0x10a480f5 */
  if (!C.zf) goto L_10a480f5;
  /* 10a480e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a480e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10a480f0 jmp 0x10a4817d */
  goto L_10a4817d;
L_10a480f5:;
  /* 10a480f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a480f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a480fe jne 0x10a4810c */
  if (!C.zf) goto L_10a4810c;
  /* 10a48100 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48103 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10a4810a jmp 0x10a4817d */
  goto L_10a4817d;
L_10a4810c:;
  /* 10a4810c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4810f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48115 jne 0x10a48123 */
  if (!C.zf) goto L_10a48123;
  /* 10a48117 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4811a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10a48121 jmp 0x10a4817d */
  goto L_10a4817d;
L_10a48123:;
  /* 10a48123 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a48126 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4812c jne 0x10a4813a */
  if (!C.zf) goto L_10a4813a;
  /* 10a4812e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48131 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10a48138 jmp 0x10a4817d */
  goto L_10a4817d;
L_10a4813a:;
  /* 10a4813a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4813d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48143 jne 0x10a48151 */
  if (!C.zf) goto L_10a48151;
  /* 10a48145 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48148 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10a4814f jmp 0x10a4817d */
  goto L_10a4817d;
L_10a48151:;
  /* 10a48151 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a48154 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4815a jne 0x10a48168 */
  if (!C.zf) goto L_10a48168;
  /* 10a4815c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4815f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10a48166 jmp 0x10a4817d */
  goto L_10a4817d;
L_10a48168:;
  /* 10a48168 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4816b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48171 jne 0x10a4817d */
  if (!C.zf) goto L_10a4817d;
  /* 10a48173 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48176 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10a4817d:;
  /* 10a4817d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48180 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10a48183 push edx */
  push32((uint32_t)(EDX));
  /* 10a48184 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a48186 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10a48189u);
  /* 10a48189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4818c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4818f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a48192 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10a48195 jmp 0x10a481ae */
  goto L_10a481ae;
L_10a48197:;
  /* 10a48197 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4819a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10a481a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a481a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a481a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a481a8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10a481abu);
  /* 10a481ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a481ae:;
  /* 10a481ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a481b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a481b4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10a481b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a481ba:;
  /* 10a481ba mov esp, ebp */
  ESP = (EBP);
  /* 10a481bc pop ebp */
  EBP = (pop32());
  /* 10a481bd ret  */
  ESPCHK(0x10a48000u, _esp0);
  ESP += 4; return;
}

/* FUN_100081c0 @ 0x10a481c0 (89 bytes, 35 insns) */
void f_10a481c0(void) {
  FTRACE(0x10a481c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a481c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a481c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a481c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a481c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a481c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a481ca:;
  /* 10a481ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a481cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a481cf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a481d2 je 0x10a481f2 */
  if (C.zf) goto L_10a481f2;
  /* 10a481d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a481d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a481da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a481dd mov ecx, dword ptr [0x10a6ec84] */
  ECX = (r32((uint32_t)(0x10a6ec84)));
  /* 10a481e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a481e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a481e9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a481eb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a481ee jae 0x10a481f2 */
  if (!C.cf) goto L_10a481f2;
  /* 10a481f0 jmp 0x10a481ca */
  goto L_10a481ca;
L_10a481f2:;
  /* 10a481f2 mov eax, dword ptr [0x10a6ec84] */
  EAX = (r32((uint32_t)(0x10a6ec84)));
  /* 10a481f7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a481fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a481fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a481ff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48202 jae 0x10a4820e */
  if (!C.cf) goto L_10a4820e;
  /* 10a48204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48207 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a48209 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4820c je 0x10a48212 */
  if (C.zf) goto L_10a48212;
L_10a4820e:;
  /* 10a4820e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a48210 jmp 0x10a48215 */
  goto L_10a48215;
L_10a48212:;
  /* 10a48212 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a48215:;
  /* 10a48215 mov esp, ebp */
  ESP = (EBP);
  /* 10a48217 pop ebp */
  EBP = (pop32());
  /* 10a48218 ret  */
  ESPCHK(0x10a481c0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10a48220 (48 bytes, 17 insns) */
void f_10a48220(void) {
  FTRACE(0x10a48220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48220 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48221 mov ebp, esp */
  EBP = (ESP);
  /* 10a48223 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48224 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a48226 call 0x10a47f20 */
  push32(0x10a4822bu); f_10a47f20();
  /* 10a4822b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4822e mov eax, dword ptr [0x10a707ec] */
  EAX = (r32((uint32_t)(0x10a707ec)));
  /* 10a48233 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a48236 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48239 mov dword ptr [0x10a707ec], ecx */
  w32((uint32_t)(0x10a707ec), (ECX));
  /* 10a4823f push 9 */
  push32((uint32_t)(0x9u));
  /* 10a48241 call 0x10a47fc0 */
  push32(0x10a48246u); f_10a47fc0();
  /* 10a48246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4824c mov esp, ebp */
  ESP = (EBP);
  /* 10a4824e pop ebp */
  EBP = (pop32());
  /* 10a4824f ret  */
  ESPCHK(0x10a48220u, _esp0);
  ESP += 4; return;
}

/* FUN_10008250 @ 0x10a48250 (10 bytes, 5 insns) */
void f_10a48250(void) {
  FTRACE(0x10a48250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48250 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48251 mov ebp, esp */
  EBP = (ESP);
  /* 10a48253 mov eax, dword ptr [0x10a707ec] */
  EAX = (r32((uint32_t)(0x10a707ec)));
  /* 10a48258 pop ebp */
  EBP = (pop32());
  /* 10a48259 ret  */
  ESPCHK(0x10a48250u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10a48260 (45 bytes, 19 insns) */
void f_10a48260(void) {
  FTRACE(0x10a48260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48260 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48261 mov ebp, esp */
  EBP = (ESP);
  /* 10a48263 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48264 mov eax, dword ptr [0x10a707ec] */
  EAX = (r32((uint32_t)(0x10a707ec)));
  /* 10a48269 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a4826c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48270 je 0x10a48280 */
  if (C.zf) goto L_10a48280;
  /* 10a48272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48275 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48276 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10a48279u);
  /* 10a48279 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4827c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4827e jne 0x10a48284 */
  if (!C.zf) goto L_10a48284;
L_10a48280:;
  /* 10a48280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a48282 jmp 0x10a48289 */
  goto L_10a48289;
L_10a48284:;
  /* 10a48284 mov eax, 1 */
  EAX = (0x1u);
L_10a48289:;
  /* 10a48289 mov esp, ebp */
  ESP = (EBP);
  /* 10a4828b pop ebp */
  EBP = (pop32());
  /* 10a4828c ret  */
  ESPCHK(0x10a48260u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10a48290 (88 bytes, 40 insns) */
void f_10a48290(void) {
  FTRACE(0x10a48290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48290 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a48294 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a48298 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a4829a je 0x10a482e3 */
  if (C.zf) goto L_10a482e3;
  /* 10a4829c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4829e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10a482a2 push edi */
  push32((uint32_t)(EDI));
  /* 10a482a3 mov edi, ecx */
  EDI = (ECX);
  /* 10a482a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a482a8 jb 0x10a482d7 */
  if (C.cf) goto L_10a482d7;
  /* 10a482aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a482ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10a482af je 0x10a482b9 */
  if (C.zf) goto L_10a482b9;
  /* 10a482b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10a482b3:;
  /* 10a482b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a482b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a482b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a482b7 jne 0x10a482b3 */
  if (!C.zf) goto L_10a482b3;
L_10a482b9:;
  /* 10a482b9 mov ecx, eax */
  ECX = (EAX);
  /* 10a482bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10a482be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a482c0 mov ecx, eax */
  ECX = (EAX);
  /* 10a482c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a482c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a482c7 mov ecx, edx */
  ECX = (EDX);
  /* 10a482c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a482cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a482cf je 0x10a482d7 */
  if (C.zf) goto L_10a482d7;
  /* 10a482d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10a482d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a482d5 je 0x10a482dd */
  if (C.zf) goto L_10a482dd;
L_10a482d7:;
  /* 10a482d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a482d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a482da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10a482db jne 0x10a482d7 */
  if (!C.zf) goto L_10a482d7;
L_10a482dd:;
  /* 10a482dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a482e1 pop edi */
  EDI = (pop32());
  /* 10a482e2 ret  */
  ESPCHK(0x10a48290u, _esp0);
  ESP += 4; return;
L_10a482e3:;
  /* 10a482e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a482e7 ret  */
  ESPCHK(0x10a48290u, _esp0);
  ESP += 4; return;
}

/* FUN_100082f0 @ 0x10a482f0 (23 bytes, 10 insns) */
void f_10a482f0(void) {
  FTRACE(0x10a482f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a482f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a482f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a482f3 mov eax, dword ptr [0x10a707e8] */
  EAX = (r32((uint32_t)(0x10a707e8)));
  /* 10a482f8 push eax */
  push32((uint32_t)(EAX));
  /* 10a482f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a482fc push ecx */
  push32((uint32_t)(ECX));
  /* 10a482fd call 0x10a48310 */
  push32(0x10a48302u); f_10a48310();
  /* 10a48302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48305 pop ebp */
  EBP = (pop32());
  /* 10a48306 ret  */
  ESPCHK(0x10a482f0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10a48310 (87 bytes, 34 insns) */
void f_10a48310(void) {
  FTRACE(0x10a48310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48310 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48311 mov ebp, esp */
  EBP = (ESP);
  /* 10a48313 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48314 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48318 jbe 0x10a4831e */
  if ((C.cf||C.zf)) goto L_10a4831e;
  /* 10a4831a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4831c jmp 0x10a48363 */
  goto L_10a48363;
L_10a4831e:;
  /* 10a4831e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48322 ja 0x10a48335 */
  if ((!C.cf&&!C.zf)) goto L_10a48335;
  /* 10a48324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48327 push eax */
  push32((uint32_t)(EAX));
  /* 10a48328 call 0x10a48370 */
  push32(0x10a4832du); f_10a48370();
  /* 10a4832d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48330 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a48333 jmp 0x10a4833c */
  goto L_10a4833c;
L_10a48335:;
  /* 10a48335 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a4833c:;
  /* 10a4833c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48340 jne 0x10a48348 */
  if (!C.zf) goto L_10a48348;
  /* 10a48342 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48346 jne 0x10a4834d */
  if (!C.zf) goto L_10a4834d;
L_10a48348:;
  /* 10a48348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4834b jmp 0x10a48363 */
  goto L_10a48363;
L_10a4834d:;
  /* 10a4834d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48350 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48351 call 0x10a48260 */
  push32(0x10a48356u); f_10a48260();
  /* 10a48356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4835b jne 0x10a48361 */
  if (!C.zf) goto L_10a48361;
  /* 10a4835d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4835f jmp 0x10a48363 */
  goto L_10a48363;
L_10a48361:;
  /* 10a48361 jmp 0x10a4831e */
  goto L_10a4831e;
L_10a48363:;
  /* 10a48363 mov esp, ebp */
  ESP = (EBP);
  /* 10a48365 pop ebp */
  EBP = (pop32());
  /* 10a48366 ret  */
  ESPCHK(0x10a48310u, _esp0);
  ESP += 4; return;
}

/* FUN_10008370 @ 0x10a48370 (109 bytes, 37 insns) */
void f_10a48370(void) {
  FTRACE(0x10a48370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48370 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48371 mov ebp, esp */
  EBP = (ESP);
  /* 10a48373 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48377 cmp eax, dword ptr [0x10a6ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a6ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4837d ja 0x10a483ad */
  if ((!C.cf&&!C.zf)) goto L_10a483ad;
  /* 10a4837f push 9 */
  push32((uint32_t)(0x9u));
  /* 10a48381 call 0x10a47f20 */
  push32(0x10a48386u); f_10a47f20();
  /* 10a48386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4838c push ecx */
  push32((uint32_t)(ECX));
  /* 10a4838d call 0x10a48eb0 */
  push32(0x10a48392u); f_10a48eb0();
  /* 10a48392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48395 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a48398 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a4839a call 0x10a47fc0 */
  push32(0x10a4839fu); f_10a47fc0();
  /* 10a4839f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a483a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a483a6 je 0x10a483ad */
  if (C.zf) goto L_10a483ad;
  /* 10a483a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a483ab jmp 0x10a483d9 */
  goto L_10a483d9;
L_10a483ad:;
  /* 10a483ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a483b1 jne 0x10a483ba */
  if (!C.zf) goto L_10a483ba;
  /* 10a483b3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10a483ba:;
  /* 10a483ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a483bd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a483c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10a483c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a483c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a483c9 push eax */
  push32((uint32_t)(EAX));
  /* 10a483ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10a483cc mov ecx, dword ptr [0x10a71fac] */
  ECX = (r32((uint32_t)(0x10a71fac)));
  /* 10a483d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a483d3 call dword ptr [0x10a73384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73384))), 0x10a483d9u);
L_10a483d9:;
  /* 10a483d9 mov esp, ebp */
  ESP = (EBP);
  /* 10a483db pop ebp */
  EBP = (pop32());
  /* 10a483dc ret  */
  ESPCHK(0x10a48370u, _esp0);
  ESP += 4; return;
}

/* FUN_100083e0 @ 0x10a483e0 (10 bytes, 5 insns) */
void f_10a483e0(void) {
  FTRACE(0x10a483e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a483e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a483e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a483e3 mov eax, 1 */
  EAX = (0x1u);
  /* 10a483e8 pop ebp */
  EBP = (pop32());
  /* 10a483e9 ret  */
  ESPCHK(0x10a483e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x10a483f0 (173 bytes, 59 insns) */
void f_10a483f0(void) {
  FTRACE(0x10a483f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a483f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a483f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a483f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a483f6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a483fa jbe 0x10a48403 */
  if ((C.cf||C.zf)) goto L_10a48403;
  /* 10a483fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a483fe jmp 0x10a48499 */
  goto L_10a48499;
L_10a48403:;
  /* 10a48403 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a48405 call 0x10a47f20 */
  push32(0x10a4840au); f_10a47f20();
  /* 10a4840a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4840d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48410 push eax */
  push32((uint32_t)(EAX));
  /* 10a48411 call 0x10a48820 */
  push32(0x10a48416u); f_10a48820();
  /* 10a48416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48419 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a4841c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48420 je 0x10a48461 */
  if (C.zf) goto L_10a48461;
  /* 10a48422 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a48429 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4842c cmp ecx, dword ptr [0x10a6ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a6ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48432 ja 0x10a48452 */
  if ((!C.cf&&!C.zf)) goto L_10a48452;
  /* 10a48434 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48437 push edx */
  push32((uint32_t)(EDX));
  /* 10a48438 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4843b push eax */
  push32((uint32_t)(EAX));
  /* 10a4843c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4843f push ecx */
  push32((uint32_t)(ECX));
  /* 10a48440 call 0x10a496f0 */
  push32(0x10a48445u); f_10a496f0();
  /* 10a48445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4844a je 0x10a48452 */
  if (C.zf) goto L_10a48452;
  /* 10a4844c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4844f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a48452:;
  /* 10a48452 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a48454 call 0x10a47fc0 */
  push32(0x10a48459u); f_10a47fc0();
  /* 10a48459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4845c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a4845f jmp 0x10a48499 */
  goto L_10a48499;
L_10a48461:;
  /* 10a48461 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a48463 call 0x10a47fc0 */
  push32(0x10a48468u); f_10a47fc0();
  /* 10a48468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4846b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4846f jne 0x10a48478 */
  if (!C.zf) goto L_10a48478;
  /* 10a48471 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10a48478:;
  /* 10a48478 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4847b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4847e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10a48480 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a48483 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48486 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4848a push edx */
  push32((uint32_t)(EDX));
  /* 10a4848b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10a4848d mov eax, dword ptr [0x10a71fac] */
  EAX = (r32((uint32_t)(0x10a71fac)));
  /* 10a48492 push eax */
  push32((uint32_t)(EAX));
  /* 10a48493 call dword ptr [0x10a73388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73388))), 0x10a48499u);
L_10a48499:;
  /* 10a48499 mov esp, ebp */
  ESP = (EBP);
  /* 10a4849b pop ebp */
  EBP = (pop32());
  /* 10a4849c ret  */
  ESPCHK(0x10a483f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100084a0 @ 0x10a484a0 (490 bytes, 165 insns) */
void f_10a484a0(void) {
  FTRACE(0x10a484a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a484a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a484a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a484a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a484a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a484aa jne 0x10a484bd */
  if (!C.zf) goto L_10a484bd;
  /* 10a484ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a484af push eax */
  push32((uint32_t)(EAX));
  /* 10a484b0 call 0x10a482f0 */
  push32(0x10a484b5u); f_10a482f0();
  /* 10a484b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a484b8 jmp 0x10a48686 */
  goto L_10a48686;
L_10a484bd:;
  /* 10a484bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a484c1 jne 0x10a484d6 */
  if (!C.zf) goto L_10a484d6;
  /* 10a484c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a484c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a484c7 call 0x10a48690 */
  push32(0x10a484ccu); f_10a48690();
  /* 10a484cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a484cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a484d1 jmp 0x10a48686 */
  goto L_10a48686;
L_10a484d6:;
  /* 10a484d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a484dd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a484e1 ja 0x10a48659 */
  if ((!C.cf&&!C.zf)) goto L_10a48659;
  /* 10a484e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a484e9 call 0x10a47f20 */
  push32(0x10a484eeu); f_10a47f20();
  /* 10a484ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a484f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a484f4 push edx */
  push32((uint32_t)(EDX));
  /* 10a484f5 call 0x10a48820 */
  push32(0x10a484fau); f_10a48820();
  /* 10a484fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a484fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a48500 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48504 je 0x10a4861c */
  if (C.zf) goto L_10a4861c;
  /* 10a4850a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a4850d cmp eax, dword ptr [0x10a6ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a6ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48513 ja 0x10a48590 */
  if ((!C.cf&&!C.zf)) goto L_10a48590;
  /* 10a48515 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48518 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48519 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4851c push edx */
  push32((uint32_t)(EDX));
  /* 10a4851d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a48520 push eax */
  push32((uint32_t)(EAX));
  /* 10a48521 call 0x10a496f0 */
  push32(0x10a48526u); f_10a496f0();
  /* 10a48526 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4852b je 0x10a48535 */
  if (C.zf) goto L_10a48535;
  /* 10a4852d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48530 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a48533 jmp 0x10a48590 */
  goto L_10a48590;
L_10a48535:;
  /* 10a48535 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48538 push edx */
  push32((uint32_t)(EDX));
  /* 10a48539 call 0x10a48eb0 */
  push32(0x10a4853eu); f_10a48eb0();
  /* 10a4853e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48541 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a48544 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48548 je 0x10a48590 */
  if (C.zf) goto L_10a48590;
  /* 10a4854a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a4854d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10a48550 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a48553 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a48556 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48559 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4855c jae 0x10a48566 */
  if (!C.cf) goto L_10a48566;
  /* 10a4855e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a48561 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a48564 jmp 0x10a4856c */
  goto L_10a4856c;
L_10a48566:;
  /* 10a48566 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48569 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a4856c:;
  /* 10a4856c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a4856f push edx */
  push32((uint32_t)(EDX));
  /* 10a48570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48573 push eax */
  push32((uint32_t)(EAX));
  /* 10a48574 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a48577 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48578 call 0x10a4ae00 */
  push32(0x10a4857du); f_10a4ae00();
  /* 10a4857d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48580 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48583 push edx */
  push32((uint32_t)(EDX));
  /* 10a48584 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a48587 push eax */
  push32((uint32_t)(EAX));
  /* 10a48588 call 0x10a488e0 */
  push32(0x10a4858du); f_10a488e0();
  /* 10a4858d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a48590:;
  /* 10a48590 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48594 jne 0x10a48610 */
  if (!C.zf) goto L_10a48610;
  /* 10a48596 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4859a jne 0x10a485a3 */
  if (!C.zf) goto L_10a485a3;
  /* 10a4859c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10a485a3:;
  /* 10a485a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a485a6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a485a9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10a485ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a485af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a485b2 push edx */
  push32((uint32_t)(EDX));
  /* 10a485b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a485b5 mov eax, dword ptr [0x10a71fac] */
  EAX = (r32((uint32_t)(0x10a71fac)));
  /* 10a485ba push eax */
  push32((uint32_t)(EAX));
  /* 10a485bb call dword ptr [0x10a73384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73384))), 0x10a485c1u);
  /* 10a485c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a485c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a485c8 je 0x10a48610 */
  if (C.zf) goto L_10a48610;
  /* 10a485ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a485cd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a485d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a485d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a485d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a485d9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a485dc jae 0x10a485e6 */
  if (!C.cf) goto L_10a485e6;
  /* 10a485de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a485e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a485e4 jmp 0x10a485ec */
  goto L_10a485ec;
L_10a485e6:;
  /* 10a485e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a485e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a485ec:;
  /* 10a485ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a485ef push eax */
  push32((uint32_t)(EAX));
  /* 10a485f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a485f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a485f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a485f7 push edx */
  push32((uint32_t)(EDX));
  /* 10a485f8 call 0x10a4ae00 */
  push32(0x10a485fdu); f_10a4ae00();
  /* 10a485fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48603 push eax */
  push32((uint32_t)(EAX));
  /* 10a48604 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a48607 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48608 call 0x10a488e0 */
  push32(0x10a4860du); f_10a488e0();
  /* 10a4860d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a48610:;
  /* 10a48610 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a48612 call 0x10a47fc0 */
  push32(0x10a48617u); f_10a47fc0();
  /* 10a48617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a4861a jmp 0x10a48659 */
  goto L_10a48659;
L_10a4861c:;
  /* 10a4861c push 9 */
  push32((uint32_t)(0x9u));
  /* 10a4861e call 0x10a47fc0 */
  push32(0x10a48623u); f_10a47fc0();
  /* 10a48623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48626 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4862a jne 0x10a48633 */
  if (!C.zf) goto L_10a48633;
  /* 10a4862c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10a48633:;
  /* 10a48633 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48636 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48639 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10a4863c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10a4863f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48642 push eax */
  push32((uint32_t)(EAX));
  /* 10a48643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a48646 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48647 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a48649 mov edx, dword ptr [0x10a71fac] */
  EDX = (r32((uint32_t)(0x10a71fac)));
  /* 10a4864f push edx */
  push32((uint32_t)(EDX));
  /* 10a48650 call dword ptr [0x10a73388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73388))), 0x10a48656u);
  /* 10a48656 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a48659:;
  /* 10a48659 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a4865d jne 0x10a48668 */
  if (!C.zf) goto L_10a48668;
  /* 10a4865f cmp dword ptr [0x10a707e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a707e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48666 jne 0x10a4866d */
  if (!C.zf) goto L_10a4866d;
L_10a48668:;
  /* 10a48668 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a4866b jmp 0x10a48686 */
  goto L_10a48686;
L_10a4866d:;
  /* 10a4866d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a48670 push eax */
  push32((uint32_t)(EAX));
  /* 10a48671 call 0x10a48260 */
  push32(0x10a48676u); f_10a48260();
  /* 10a48676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a48679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a4867b jne 0x10a48681 */
  if (!C.zf) goto L_10a48681;
  /* 10a4867d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a4867f jmp 0x10a48686 */
  goto L_10a48686;
L_10a48681:;
  /* 10a48681 jmp 0x10a484d6 */
  goto L_10a484d6;
L_10a48686:;
  /* 10a48686 mov esp, ebp */
  ESP = (EBP);
  /* 10a48688 pop ebp */
  EBP = (pop32());
  /* 10a48689 ret  */
  ESPCHK(0x10a484a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008690 @ 0x10a48690 (104 bytes, 38 insns) */
void f_10a48690(void) {
  FTRACE(0x10a48690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a48690 push ebp */
  push32((uint32_t)(EBP));
  /* 10a48691 mov ebp, esp */
  EBP = (ESP);
  /* 10a48693 push ecx */
  push32((uint32_t)(ECX));
  /* 10a48694 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a48698 jne 0x10a4869c */
  if (!C.zf) goto L_10a4869c;
  /* 10a4869a jmp 0x10a486f4 */
  goto L_10a486f4;
L_10a4869c:;
  /* 10a4869c push 9 */
  push32((uint32_t)(0x9u));
  /* 10a4869e call 0x10a47f20 */
  push32(0x10a486a3u); f_10a47f20();
  /* 10a486a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a486a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a486a9 push eax */
  push32((uint32_t)(EAX));
  /* 10a486aa call 0x10a48820 */
  push32(0x10a486afu); f_10a48820();
  /* 10a486af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a486b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a486b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a486b9 je 0x10a486d7 */
  if (C.zf) goto L_10a486d7;
  /* 10a486bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a486be push ecx */
  push32((uint32_t)(ECX));
  /* 10a486bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a486c2 push edx */
  push32((uint32_t)(EDX));
  /* 10a486c3 call 0x10a488e0 */
  push32(0x10a486c8u); f_10a488e0();
  /* 10a486c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a486cb push 9 */
  push32((uint32_t)(0x9u));
  /* 10a486cd call 0x10a47fc0 */
  push32(0x10a486d2u); f_10a47fc0();
  /* 10a486d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a486d5 jmp 0x10a486f4 */
  goto L_10a486f4;
L_10a486d7:;
  /* 10a486d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a486d9 call 0x10a47fc0 */
  push32(0x10a486deu); f_10a47fc0();
  /* 10a486de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a486e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a486e4 push eax */
  push32((uint32_t)(EAX));
  /* 10a486e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a486e7 mov ecx, dword ptr [0x10a71fac] */
  ECX = (r32((uint32_t)(0x10a71fac)));
  /* 10a486ed push ecx */
  push32((uint32_t)(ECX));
  /* 10a486ee call dword ptr [0x10a73368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73368))), 0x10a486f4u);
L_10a486f4:;
  /* 10a486f4 mov esp, ebp */
  ESP = (EBP);
  /* 10a486f6 pop ebp */
  EBP = (pop32());
  /* 10a486f7 ret  */
  ESPCHK(0x10a48690u, _esp0);
  ESP += 4; return;
}

