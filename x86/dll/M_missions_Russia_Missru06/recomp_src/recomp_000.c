#include "recomp.h"

/* thunk_FUN_10002c20 @ 0x10ac1005 (5 bytes, 1 insns) */
void f_10ac1005(void) {
  FTRACE(0x10ac1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac1005 jmp 0x10ac2c20 */
  f_10ac2c20(); return;
}

/* OnInit @ 0x10ac100a (5 bytes, 1 insns) */
void f_10ac100a(void) {
  FTRACE(0x10ac100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac100a jmp 0x10ac1090 */
  f_10ac1090(); return;
}

/* thunk_FUN_10001030 @ 0x10ac100f (5 bytes, 1 insns) */
void f_10ac100f(void) {
  FTRACE(0x10ac100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac100f jmp 0x10ac1030 */
  f_10ac1030(); return;
}

/* ProcessScenary @ 0x10ac1014 (5 bytes, 1 insns) */
void f_10ac1014(void) {
  FTRACE(0x10ac1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac1014 jmp 0x10ac1810 */
  f_10ac1810(); return;
}

/* FUN_10001030 @ 0x10ac1030 (67 bytes, 26 insns) */
void f_10ac1030(void) {
  FTRACE(0x10ac1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac1030 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac1031 mov ebp, esp */
  EBP = (ESP);
  /* 10ac1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac1036 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac1037 push esi */
  push32((uint32_t)(ESI));
  /* 10ac1038 push edi */
  push32((uint32_t)(EDI));
  /* 10ac1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ac103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ac1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ac1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ac1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1052 je 0x10ac1056 */
  if (C.zf) goto L_10ac1056;
  /* 10ac1054 jmp 0x10ac105b */
  goto L_10ac105b;
L_10ac1056:;
  /* 10ac1056 call 0x10ac100a */
  push32(0x10ac105bu); f_10ac100a();
L_10ac105b:;
  /* 10ac105b mov eax, 1 */
  EAX = (0x1u);
  /* 10ac1060 pop edi */
  EDI = (pop32());
  /* 10ac1061 pop esi */
  ESI = (pop32());
  /* 10ac1062 pop ebx */
  EBX = (pop32());
  /* 10ac1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1068 call 0x10ac2d20 */
  push32(0x10ac106du); f_10ac2d20();
  /* 10ac106d mov esp, ebp */
  ESP = (EBP);
  /* 10ac106f pop ebp */
  EBP = (pop32());
  /* 10ac1070 ret 0xc */
  ESPCHK(0x10ac1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10ac1090 (1529 bytes, 397 insns) */
void f_10ac1090(void) {
  FTRACE(0x10ac1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac1090 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac1091 mov ebp, esp */
  EBP = (ESP);
  /* 10ac1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac1096 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac1097 push esi */
  push32((uint32_t)(ESI));
  /* 10ac1098 push edi */
  push32((uint32_t)(EDI));
  /* 10ac1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10ac109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10ac10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ac10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ac10a8 mov esi, esp */
  ESI = (ESP);
  /* 10ac10aa push 0x10aea20c */
  push32((uint32_t)(0x10aea20cu));
  /* 10ac10af push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac10b4 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac10bau);
  /* 10ac10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac10bf call 0x10ac2d20 */
  push32(0x10ac10c4u); f_10ac2d20();
  /* 10ac10c4 mov esi, esp */
  ESI = (ESP);
  /* 10ac10c6 push 0x10aea204 */
  push32((uint32_t)(0x10aea204u));
  /* 10ac10cb push 0x10aef4a0 */
  push32((uint32_t)(0x10aef4a0u));
  /* 10ac10d0 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac10d6u);
  /* 10ac10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac10db call 0x10ac2d20 */
  push32(0x10ac10e0u); f_10ac2d20();
  /* 10ac10e0 mov esi, esp */
  ESI = (ESP);
  /* 10ac10e2 push 0x10aea1fc */
  push32((uint32_t)(0x10aea1fcu));
  /* 10ac10e7 push 0x10aef4a8 */
  push32((uint32_t)(0x10aef4a8u));
  /* 10ac10ec call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac10f2u);
  /* 10ac10f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac10f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac10f7 call 0x10ac2d20 */
  push32(0x10ac10fcu); f_10ac2d20();
  /* 10ac10fc mov esi, esp */
  ESI = (ESP);
  /* 10ac10fe push 0x10aea1f4 */
  push32((uint32_t)(0x10aea1f4u));
  /* 10ac1103 push 0x10aef4b0 */
  push32((uint32_t)(0x10aef4b0u));
  /* 10ac1108 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac110eu);
  /* 10ac110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1113 call 0x10ac2d20 */
  push32(0x10ac1118u); f_10ac2d20();
  /* 10ac1118 mov esi, esp */
  ESI = (ESP);
  /* 10ac111a push 0x10aea1ec */
  push32((uint32_t)(0x10aea1ecu));
  /* 10ac111f push 0x10aef4b8 */
  push32((uint32_t)(0x10aef4b8u));
  /* 10ac1124 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac112au);
  /* 10ac112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac112f call 0x10ac2d20 */
  push32(0x10ac1134u); f_10ac2d20();
  /* 10ac1134 mov esi, esp */
  ESI = (ESP);
  /* 10ac1136 push 0x10aea1e4 */
  push32((uint32_t)(0x10aea1e4u));
  /* 10ac113b push 0x10aef4c8 */
  push32((uint32_t)(0x10aef4c8u));
  /* 10ac1140 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac1146u);
  /* 10ac1146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac114b call 0x10ac2d20 */
  push32(0x10ac1150u); f_10ac2d20();
  /* 10ac1150 mov esi, esp */
  ESI = (ESP);
  /* 10ac1152 push 0x10aea1dc */
  push32((uint32_t)(0x10aea1dcu));
  /* 10ac1157 push 0x10aef4d0 */
  push32((uint32_t)(0x10aef4d0u));
  /* 10ac115c call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac1162u);
  /* 10ac1162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1167 call 0x10ac2d20 */
  push32(0x10ac116cu); f_10ac2d20();
  /* 10ac116c mov esi, esp */
  ESI = (ESP);
  /* 10ac116e push 0x10aea1d4 */
  push32((uint32_t)(0x10aea1d4u));
  /* 10ac1173 push 0x10aef490 */
  push32((uint32_t)(0x10aef490u));
  /* 10ac1178 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac117eu);
  /* 10ac117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1183 call 0x10ac2d20 */
  push32(0x10ac1188u); f_10ac2d20();
  /* 10ac1188 mov esi, esp */
  ESI = (ESP);
  /* 10ac118a push 0x10aea1cc */
  push32((uint32_t)(0x10aea1ccu));
  /* 10ac118f push 0x10aef4d8 */
  push32((uint32_t)(0x10aef4d8u));
  /* 10ac1194 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac119au);
  /* 10ac119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac119f call 0x10ac2d20 */
  push32(0x10ac11a4u); f_10ac2d20();
  /* 10ac11a4 mov esi, esp */
  ESI = (ESP);
  /* 10ac11a6 push 0x10aea1c4 */
  push32((uint32_t)(0x10aea1c4u));
  /* 10ac11ab push 0x10aef450 */
  push32((uint32_t)(0x10aef450u));
  /* 10ac11b0 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac11b6u);
  /* 10ac11b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac11b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac11bb call 0x10ac2d20 */
  push32(0x10ac11c0u); f_10ac2d20();
  /* 10ac11c0 mov esi, esp */
  ESI = (ESP);
  /* 10ac11c2 push 0x10aea1bc */
  push32((uint32_t)(0x10aea1bcu));
  /* 10ac11c7 push 0x10aef448 */
  push32((uint32_t)(0x10aef448u));
  /* 10ac11cc call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac11d2u);
  /* 10ac11d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac11d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac11d7 call 0x10ac2d20 */
  push32(0x10ac11dcu); f_10ac2d20();
  /* 10ac11dc mov esi, esp */
  ESI = (ESP);
  /* 10ac11de push 0x10aea1b4 */
  push32((uint32_t)(0x10aea1b4u));
  /* 10ac11e3 push 0x10aef460 */
  push32((uint32_t)(0x10aef460u));
  /* 10ac11e8 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac11eeu);
  /* 10ac11ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac11f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac11f3 call 0x10ac2d20 */
  push32(0x10ac11f8u); f_10ac2d20();
  /* 10ac11f8 mov esi, esp */
  ESI = (ESP);
  /* 10ac11fa push 0x10aea1ac */
  push32((uint32_t)(0x10aea1acu));
  /* 10ac11ff push 0x10aef458 */
  push32((uint32_t)(0x10aef458u));
  /* 10ac1204 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac120au);
  /* 10ac120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac120f call 0x10ac2d20 */
  push32(0x10ac1214u); f_10ac2d20();
  /* 10ac1214 mov esi, esp */
  ESI = (ESP);
  /* 10ac1216 push 0x10aea1a4 */
  push32((uint32_t)(0x10aea1a4u));
  /* 10ac121b push 0x10aef470 */
  push32((uint32_t)(0x10aef470u));
  /* 10ac1220 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac1226u);
  /* 10ac1226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac122b call 0x10ac2d20 */
  push32(0x10ac1230u); f_10ac2d20();
  /* 10ac1230 mov esi, esp */
  ESI = (ESP);
  /* 10ac1232 push 0x10aea19c */
  push32((uint32_t)(0x10aea19cu));
  /* 10ac1237 push 0x10aef468 */
  push32((uint32_t)(0x10aef468u));
  /* 10ac123c call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac1242u);
  /* 10ac1242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1247 call 0x10ac2d20 */
  push32(0x10ac124cu); f_10ac2d20();
  /* 10ac124c mov esi, esp */
  ESI = (ESP);
  /* 10ac124e push 0x10aea194 */
  push32((uint32_t)(0x10aea194u));
  /* 10ac1253 push 0x10aef480 */
  push32((uint32_t)(0x10aef480u));
  /* 10ac1258 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac125eu);
  /* 10ac125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1263 call 0x10ac2d20 */
  push32(0x10ac1268u); f_10ac2d20();
  /* 10ac1268 mov esi, esp */
  ESI = (ESP);
  /* 10ac126a push 0x10aea18c */
  push32((uint32_t)(0x10aea18cu));
  /* 10ac126f push 0x10aef478 */
  push32((uint32_t)(0x10aef478u));
  /* 10ac1274 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac127au);
  /* 10ac127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac127f call 0x10ac2d20 */
  push32(0x10ac1284u); f_10ac2d20();
  /* 10ac1284 mov esi, esp */
  ESI = (ESP);
  /* 10ac1286 push 0x10aea184 */
  push32((uint32_t)(0x10aea184u));
  /* 10ac128b push 0x10aef488 */
  push32((uint32_t)(0x10aef488u));
  /* 10ac1290 call dword ptr [0x10af2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2448))), 0x10ac1296u);
  /* 10ac1296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac129b call 0x10ac2d20 */
  push32(0x10ac12a0u); f_10ac2d20();
  /* 10ac12a0 mov esi, esp */
  ESI = (ESP);
  /* 10ac12a2 push 0x10aea17c */
  push32((uint32_t)(0x10aea17cu));
  /* 10ac12a7 push 0x10aef400 */
  push32((uint32_t)(0x10aef400u));
  /* 10ac12ac call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac12b2u);
  /* 10ac12b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac12b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac12b7 call 0x10ac2d20 */
  push32(0x10ac12bcu); f_10ac2d20();
  /* 10ac12bc mov esi, esp */
  ESI = (ESP);
  /* 10ac12be push 0x10aea174 */
  push32((uint32_t)(0x10aea174u));
  /* 10ac12c3 push 0x10aef410 */
  push32((uint32_t)(0x10aef410u));
  /* 10ac12c8 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac12ceu);
  /* 10ac12ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac12d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac12d3 call 0x10ac2d20 */
  push32(0x10ac12d8u); f_10ac2d20();
  /* 10ac12d8 mov esi, esp */
  ESI = (ESP);
  /* 10ac12da push 0x10aea16c */
  push32((uint32_t)(0x10aea16cu));
  /* 10ac12df push 0x10aef408 */
  push32((uint32_t)(0x10aef408u));
  /* 10ac12e4 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac12eau);
  /* 10ac12ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac12ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac12ef call 0x10ac2d20 */
  push32(0x10ac12f4u); f_10ac2d20();
  /* 10ac12f4 mov esi, esp */
  ESI = (ESP);
  /* 10ac12f6 push 0x10aea164 */
  push32((uint32_t)(0x10aea164u));
  /* 10ac12fb push 0x10aef420 */
  push32((uint32_t)(0x10aef420u));
  /* 10ac1300 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac1306u);
  /* 10ac1306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac130b call 0x10ac2d20 */
  push32(0x10ac1310u); f_10ac2d20();
  /* 10ac1310 mov esi, esp */
  ESI = (ESP);
  /* 10ac1312 push 0x10aea15c */
  push32((uint32_t)(0x10aea15cu));
  /* 10ac1317 push 0x10aef428 */
  push32((uint32_t)(0x10aef428u));
  /* 10ac131c call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac1322u);
  /* 10ac1322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1327 call 0x10ac2d20 */
  push32(0x10ac132cu); f_10ac2d20();
  /* 10ac132c mov esi, esp */
  ESI = (ESP);
  /* 10ac132e push 0x10aea150 */
  push32((uint32_t)(0x10aea150u));
  /* 10ac1333 push 0x10aef558 */
  push32((uint32_t)(0x10aef558u));
  /* 10ac1338 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac133eu);
  /* 10ac133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1343 call 0x10ac2d20 */
  push32(0x10ac1348u); f_10ac2d20();
  /* 10ac1348 mov esi, esp */
  ESI = (ESP);
  /* 10ac134a push 0x10aea144 */
  push32((uint32_t)(0x10aea144u));
  /* 10ac134f push 0x10aef560 */
  push32((uint32_t)(0x10aef560u));
  /* 10ac1354 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac135au);
  /* 10ac135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac135f call 0x10ac2d20 */
  push32(0x10ac1364u); f_10ac2d20();
  /* 10ac1364 mov esi, esp */
  ESI = (ESP);
  /* 10ac1366 push 0x10aea13c */
  push32((uint32_t)(0x10aea13cu));
  /* 10ac136b push 0x10aef440 */
  push32((uint32_t)(0x10aef440u));
  /* 10ac1370 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac1376u);
  /* 10ac1376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac137b call 0x10ac2d20 */
  push32(0x10ac1380u); f_10ac2d20();
  /* 10ac1380 mov esi, esp */
  ESI = (ESP);
  /* 10ac1382 push 0x10aea130 */
  push32((uint32_t)(0x10aea130u));
  /* 10ac1387 push 0x10aef550 */
  push32((uint32_t)(0x10aef550u));
  /* 10ac138c call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac1392u);
  /* 10ac1392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1397 call 0x10ac2d20 */
  push32(0x10ac139cu); f_10ac2d20();
  /* 10ac139c mov esi, esp */
  ESI = (ESP);
  /* 10ac139e push 0x10aea128 */
  push32((uint32_t)(0x10aea128u));
  /* 10ac13a3 push 0x10aef438 */
  push32((uint32_t)(0x10aef438u));
  /* 10ac13a8 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac13aeu);
  /* 10ac13ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac13b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac13b3 call 0x10ac2d20 */
  push32(0x10ac13b8u); f_10ac2d20();
  /* 10ac13b8 mov esi, esp */
  ESI = (ESP);
  /* 10ac13ba push 0x10aea11c */
  push32((uint32_t)(0x10aea11cu));
  /* 10ac13bf push 0x10aef4e8 */
  push32((uint32_t)(0x10aef4e8u));
  /* 10ac13c4 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac13cau);
  /* 10ac13ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac13cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac13cf call 0x10ac2d20 */
  push32(0x10ac13d4u); f_10ac2d20();
  /* 10ac13d4 mov esi, esp */
  ESI = (ESP);
  /* 10ac13d6 push 0x10aea110 */
  push32((uint32_t)(0x10aea110u));
  /* 10ac13db push 0x10aef3e0 */
  push32((uint32_t)(0x10aef3e0u));
  /* 10ac13e0 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac13e6u);
  /* 10ac13e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac13e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac13eb call 0x10ac2d20 */
  push32(0x10ac13f0u); f_10ac2d20();
  /* 10ac13f0 mov esi, esp */
  ESI = (ESP);
  /* 10ac13f2 push 0x10aea104 */
  push32((uint32_t)(0x10aea104u));
  /* 10ac13f7 push 0x10aef538 */
  push32((uint32_t)(0x10aef538u));
  /* 10ac13fc call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac1402u);
  /* 10ac1402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1407 call 0x10ac2d20 */
  push32(0x10ac140cu); f_10ac2d20();
  /* 10ac140c mov esi, esp */
  ESI = (ESP);
  /* 10ac140e push 0x10aea0f8 */
  push32((uint32_t)(0x10aea0f8u));
  /* 10ac1413 push 0x10aef3e8 */
  push32((uint32_t)(0x10aef3e8u));
  /* 10ac1418 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac141eu);
  /* 10ac141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1423 call 0x10ac2d20 */
  push32(0x10ac1428u); f_10ac2d20();
  /* 10ac1428 mov esi, esp */
  ESI = (ESP);
  /* 10ac142a push 0x10aea0ec */
  push32((uint32_t)(0x10aea0ecu));
  /* 10ac142f push 0x10aef540 */
  push32((uint32_t)(0x10aef540u));
  /* 10ac1434 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac143au);
  /* 10ac143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac143f call 0x10ac2d20 */
  push32(0x10ac1444u); f_10ac2d20();
  /* 10ac1444 mov esi, esp */
  ESI = (ESP);
  /* 10ac1446 push 0x10aea0e0 */
  push32((uint32_t)(0x10aea0e0u));
  /* 10ac144b push 0x10aef520 */
  push32((uint32_t)(0x10aef520u));
  /* 10ac1450 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac1456u);
  /* 10ac1456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac145b call 0x10ac2d20 */
  push32(0x10ac1460u); f_10ac2d20();
  /* 10ac1460 mov esi, esp */
  ESI = (ESP);
  /* 10ac1462 push 0x10aea0d4 */
  push32((uint32_t)(0x10aea0d4u));
  /* 10ac1467 push 0x10aef530 */
  push32((uint32_t)(0x10aef530u));
  /* 10ac146c call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac1472u);
  /* 10ac1472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1477 call 0x10ac2d20 */
  push32(0x10ac147cu); f_10ac2d20();
  /* 10ac147c mov esi, esp */
  ESI = (ESP);
  /* 10ac147e push 0x10aea0c8 */
  push32((uint32_t)(0x10aea0c8u));
  /* 10ac1483 push 0x10aef508 */
  push32((uint32_t)(0x10aef508u));
  /* 10ac1488 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac148eu);
  /* 10ac148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1493 call 0x10ac2d20 */
  push32(0x10ac1498u); f_10ac2d20();
  /* 10ac1498 mov esi, esp */
  ESI = (ESP);
  /* 10ac149a push 0x10aea0bc */
  push32((uint32_t)(0x10aea0bcu));
  /* 10ac149f push 0x10aef518 */
  push32((uint32_t)(0x10aef518u));
  /* 10ac14a4 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac14aau);
  /* 10ac14aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac14ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac14af call 0x10ac2d20 */
  push32(0x10ac14b4u); f_10ac2d20();
  /* 10ac14b4 mov esi, esp */
  ESI = (ESP);
  /* 10ac14b6 push 0x10aea0b0 */
  push32((uint32_t)(0x10aea0b0u));
  /* 10ac14bb push 0x10aef4f0 */
  push32((uint32_t)(0x10aef4f0u));
  /* 10ac14c0 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac14c6u);
  /* 10ac14c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac14c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac14cb call 0x10ac2d20 */
  push32(0x10ac14d0u); f_10ac2d20();
  /* 10ac14d0 mov esi, esp */
  ESI = (ESP);
  /* 10ac14d2 push 0x10aea0a4 */
  push32((uint32_t)(0x10aea0a4u));
  /* 10ac14d7 push 0x10aef4f8 */
  push32((uint32_t)(0x10aef4f8u));
  /* 10ac14dc call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac14e2u);
  /* 10ac14e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac14e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac14e7 call 0x10ac2d20 */
  push32(0x10ac14ecu); f_10ac2d20();
  /* 10ac14ec mov esi, esp */
  ESI = (ESP);
  /* 10ac14ee push 0x10aea098 */
  push32((uint32_t)(0x10aea098u));
  /* 10ac14f3 push 0x10aef548 */
  push32((uint32_t)(0x10aef548u));
  /* 10ac14f8 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac14feu);
  /* 10ac14fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1503 call 0x10ac2d20 */
  push32(0x10ac1508u); f_10ac2d20();
  /* 10ac1508 mov esi, esp */
  ESI = (ESP);
  /* 10ac150a push 0x10aea08c */
  push32((uint32_t)(0x10aea08cu));
  /* 10ac150f push 0x10aef3f0 */
  push32((uint32_t)(0x10aef3f0u));
  /* 10ac1514 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac151au);
  /* 10ac151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac151f call 0x10ac2d20 */
  push32(0x10ac1524u); f_10ac2d20();
  /* 10ac1524 mov esi, esp */
  ESI = (ESP);
  /* 10ac1526 push 0x10aea080 */
  push32((uint32_t)(0x10aea080u));
  /* 10ac152b push 0x10aef528 */
  push32((uint32_t)(0x10aef528u));
  /* 10ac1530 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac1536u);
  /* 10ac1536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac153b call 0x10ac2d20 */
  push32(0x10ac1540u); f_10ac2d20();
  /* 10ac1540 mov esi, esp */
  ESI = (ESP);
  /* 10ac1542 push 0x10aea074 */
  push32((uint32_t)(0x10aea074u));
  /* 10ac1547 push 0x10aef500 */
  push32((uint32_t)(0x10aef500u));
  /* 10ac154c call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac1552u);
  /* 10ac1552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1557 call 0x10ac2d20 */
  push32(0x10ac155cu); f_10ac2d20();
  /* 10ac155c mov esi, esp */
  ESI = (ESP);
  /* 10ac155e push 0x10aea068 */
  push32((uint32_t)(0x10aea068u));
  /* 10ac1563 push 0x10aef510 */
  push32((uint32_t)(0x10aef510u));
  /* 10ac1568 call dword ptr [0x10af2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2458))), 0x10ac156eu);
  /* 10ac156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1573 call 0x10ac2d20 */
  push32(0x10ac1578u); f_10ac2d20();
  /* 10ac1578 mov esi, esp */
  ESI = (ESP);
  /* 10ac157a push 8 */
  push32((uint32_t)(0x8u));
  /* 10ac157c push 0x10aef418 */
  push32((uint32_t)(0x10aef418u));
  /* 10ac1581 call dword ptr [0x10af245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af245c))), 0x10ac1587u);
  /* 10ac1587 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac158a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac158c call 0x10ac2d20 */
  push32(0x10ac1591u); f_10ac2d20();
  /* 10ac1591 mov esi, esp */
  ESI = (ESP);
  /* 10ac1593 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ac1595 push 0x10aef430 */
  push32((uint32_t)(0x10aef430u));
  /* 10ac159a call dword ptr [0x10af245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af245c))), 0x10ac15a0u);
  /* 10ac15a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac15a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac15a5 call 0x10ac2d20 */
  push32(0x10ac15aau); f_10ac2d20();
  /* 10ac15aa mov esi, esp */
  ESI = (ESP);
  /* 10ac15ac push 0x10aea058 */
  push32((uint32_t)(0x10aea058u));
  /* 10ac15b1 push 0x10aef4e0 */
  push32((uint32_t)(0x10aef4e0u));
  /* 10ac15b6 call dword ptr [0x10af2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2454))), 0x10ac15bcu);
  /* 10ac15bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac15bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac15c1 call 0x10ac2d20 */
  push32(0x10ac15c6u); f_10ac2d20();
  /* 10ac15c6 mov esi, esp */
  ESI = (ESP);
  /* 10ac15c8 push 0x10aea048 */
  push32((uint32_t)(0x10aea048u));
  /* 10ac15cd push 0x10aef3f8 */
  push32((uint32_t)(0x10aef3f8u));
  /* 10ac15d2 call dword ptr [0x10af2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2454))), 0x10ac15d8u);
  /* 10ac15d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac15db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac15dd call 0x10ac2d20 */
  push32(0x10ac15e2u); f_10ac2d20();
  /* 10ac15e2 mov esi, esp */
  ESI = (ESP);
  /* 10ac15e4 push 0x10aea03c */
  push32((uint32_t)(0x10aea03cu));
  /* 10ac15e9 push 0x10aef4c0 */
  push32((uint32_t)(0x10aef4c0u));
  /* 10ac15ee call dword ptr [0x10af2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2464))), 0x10ac15f4u);
  /* 10ac15f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac15f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac15f9 call 0x10ac2d20 */
  push32(0x10ac15feu); f_10ac2d20();
  /* 10ac15fe mov esi, esp */
  ESI = (ESP);
  /* 10ac1600 push 0x99 */
  push32((uint32_t)(0x99u));
  /* 10ac1605 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1607 call dword ptr [0x10af2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2468))), 0x10ac160du);
  /* 10ac160d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1610 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1612 call 0x10ac2d20 */
  push32(0x10ac1617u); f_10ac2d20();
  /* 10ac1617 mov esi, esp */
  ESI = (ESP);
  /* 10ac1619 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ac161b push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac161d call dword ptr [0x10af2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2468))), 0x10ac1623u);
  /* 10ac1623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1626 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1628 call 0x10ac2d20 */
  push32(0x10ac162du); f_10ac2d20();
  /* 10ac162d mov esi, esp */
  ESI = (ESP);
  /* 10ac162f push 0x10aea034 */
  push32((uint32_t)(0x10aea034u));
  /* 10ac1634 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1636 call dword ptr [0x10af2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2460))), 0x10ac163cu);
  /* 10ac163c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac163f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1641 call 0x10ac2d20 */
  push32(0x10ac1646u); f_10ac2d20();
  /* 10ac1646 mov esi, esp */
  ESI = (ESP);
  /* 10ac1648 push 0x10aea028 */
  push32((uint32_t)(0x10aea028u));
  /* 10ac164d push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac164f call dword ptr [0x10af2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2460))), 0x10ac1655u);
  /* 10ac1655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1658 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac165a call 0x10ac2d20 */
  push32(0x10ac165fu); f_10ac2d20();
  /* 10ac165f mov esi, esp */
  ESI = (ESP);
  /* 10ac1661 push 0x10aea01c */
  push32((uint32_t)(0x10aea01cu));
  /* 10ac1666 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac1668 call dword ptr [0x10af2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2460))), 0x10ac166eu);
  /* 10ac166e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1671 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1673 call 0x10ac2d20 */
  push32(0x10ac1678u); f_10ac2d20();
  /* 10ac1678 pop edi */
  EDI = (pop32());
  /* 10ac1679 pop esi */
  ESI = (pop32());
  /* 10ac167a pop ebx */
  EBX = (pop32());
  /* 10ac167b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac167e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1680 call 0x10ac2d20 */
  push32(0x10ac1685u); f_10ac2d20();
  /* 10ac1685 mov esp, ebp */
  ESP = (EBP);
  /* 10ac1687 pop ebp */
  EBP = (pop32());
  /* 10ac1688 ret  */
  ESPCHK(0x10ac1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001810 @ 0x10ac1810 (4101 bytes, 1187 insns) */
void f_10ac1810(void) {
  FTRACE(0x10ac1810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac1810 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac1811 mov ebp, esp */
  EBP = (ESP);
  /* 10ac1813 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac1816 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac1817 push esi */
  push32((uint32_t)(ESI));
  /* 10ac1818 push edi */
  push32((uint32_t)(EDI));
  /* 10ac1819 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10ac181c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10ac1821 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ac1826 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ac1828 mov esi, esp */
  ESI = (ESP);
  /* 10ac182a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac182c call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac1832u);
  /* 10ac1832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1835 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1837 call 0x10ac2d20 */
  push32(0x10ac183cu); f_10ac2d20();
  /* 10ac183c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac1841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1843 je 0x10ac1a5c */
  if (C.zf) goto L_10ac1a5c;
  /* 10ac1849 mov esi, esp */
  ESI = (ESP);
  /* 10ac184b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac184d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac184f call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac1855u);
  /* 10ac1855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1858 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac185a call 0x10ac2d20 */
  push32(0x10ac185fu); f_10ac2d20();
  /* 10ac185f mov esi, esp */
  ESI = (ESP);
  /* 10ac1861 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac1866 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac1868 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac186a call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac1870u);
  /* 10ac1870 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1873 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1875 call 0x10ac2d20 */
  push32(0x10ac187au); f_10ac2d20();
  /* 10ac187a mov esi, esp */
  ESI = (ESP);
  /* 10ac187c push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac1881 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1883 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1885 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac188bu);
  /* 10ac188b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac188e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1890 call 0x10ac2d20 */
  push32(0x10ac1895u); f_10ac2d20();
  /* 10ac1895 mov esi, esp */
  ESI = (ESP);
  /* 10ac1897 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac189c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac189e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac18a0 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac18a6u);
  /* 10ac18a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac18a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac18ab call 0x10ac2d20 */
  push32(0x10ac18b0u); f_10ac2d20();
  /* 10ac18b0 mov esi, esp */
  ESI = (ESP);
  /* 10ac18b2 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac18b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac18b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac18bb call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac18c1u);
  /* 10ac18c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac18c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac18c6 call 0x10ac2d20 */
  push32(0x10ac18cbu); f_10ac2d20();
  /* 10ac18cb mov esi, esp */
  ESI = (ESP);
  /* 10ac18cd push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac18d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ac18d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac18d6 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac18dcu);
  /* 10ac18dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac18df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac18e1 call 0x10ac2d20 */
  push32(0x10ac18e6u); f_10ac2d20();
  /* 10ac18e6 mov esi, esp */
  ESI = (ESP);
  /* 10ac18e8 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac18ed push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac18ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac18f1 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac18f7u);
  /* 10ac18f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac18fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac18fc call 0x10ac2d20 */
  push32(0x10ac1901u); f_10ac2d20();
  /* 10ac1901 mov esi, esp */
  ESI = (ESP);
  /* 10ac1903 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac1908 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac190a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac190c call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac1912u);
  /* 10ac1912 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1915 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1917 call 0x10ac2d20 */
  push32(0x10ac191cu); f_10ac2d20();
  /* 10ac191c mov esi, esp */
  ESI = (ESP);
  /* 10ac191e push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac1923 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1925 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1927 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac192du);
  /* 10ac192d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1930 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1932 call 0x10ac2d20 */
  push32(0x10ac1937u); f_10ac2d20();
  /* 10ac1937 mov esi, esp */
  ESI = (ESP);
  /* 10ac1939 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac193e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1940 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1942 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac1948u);
  /* 10ac1948 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac194b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac194d call 0x10ac2d20 */
  push32(0x10ac1952u); f_10ac2d20();
  /* 10ac1952 mov esi, esp */
  ESI = (ESP);
  /* 10ac1954 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac1959 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac195b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac195d call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac1963u);
  /* 10ac1963 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1966 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1968 call 0x10ac2d20 */
  push32(0x10ac196du); f_10ac2d20();
  /* 10ac196d mov esi, esp */
  ESI = (ESP);
  /* 10ac196f push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac1974 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ac1976 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1978 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac197eu);
  /* 10ac197e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1981 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1983 call 0x10ac2d20 */
  push32(0x10ac1988u); f_10ac2d20();
  /* 10ac1988 mov esi, esp */
  ESI = (ESP);
  /* 10ac198a push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac198f push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac1991 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1993 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac1999u);
  /* 10ac1999 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac199c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac199e call 0x10ac2d20 */
  push32(0x10ac19a3u); f_10ac2d20();
  /* 10ac19a3 mov esi, esp */
  ESI = (ESP);
  /* 10ac19a5 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac19aa push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac19ac push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac19ae call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac19b4u);
  /* 10ac19b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac19b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac19b9 call 0x10ac2d20 */
  push32(0x10ac19beu); f_10ac2d20();
  /* 10ac19be mov esi, esp */
  ESI = (ESP);
  /* 10ac19c0 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac19c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac19c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac19c9 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac19cfu);
  /* 10ac19cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac19d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac19d4 call 0x10ac2d20 */
  push32(0x10ac19d9u); f_10ac2d20();
  /* 10ac19d9 mov esi, esp */
  ESI = (ESP);
  /* 10ac19db push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac19e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac19e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac19e4 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac19eau);
  /* 10ac19ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac19ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac19ef call 0x10ac2d20 */
  push32(0x10ac19f4u); f_10ac2d20();
  /* 10ac19f4 mov esi, esp */
  ESI = (ESP);
  /* 10ac19f6 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac19fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac19fd push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac19ff call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac1a05u);
  /* 10ac1a05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1a08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1a0a call 0x10ac2d20 */
  push32(0x10ac1a0fu); f_10ac2d20();
  /* 10ac1a0f mov esi, esp */
  ESI = (ESP);
  /* 10ac1a11 push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac1a16 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ac1a18 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac1a1a call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac1a20u);
  /* 10ac1a20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1a25 call 0x10ac2d20 */
  push32(0x10ac1a2au); f_10ac2d20();
  /* 10ac1a2a mov esi, esp */
  ESI = (ESP);
  /* 10ac1a2c push 0x2faf080 */
  push32((uint32_t)(0x2faf080u));
  /* 10ac1a31 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac1a33 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac1a35 call dword ptr [0x10af2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2408))), 0x10ac1a3bu);
  /* 10ac1a3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1a3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1a40 call 0x10ac2d20 */
  push32(0x10ac1a45u); f_10ac2d20();
  /* 10ac1a45 mov esi, esp */
  ESI = (ESP);
  /* 10ac1a47 push 0x10aea254 */
  push32((uint32_t)(0x10aea254u));
  /* 10ac1a4c call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac1a52u);
  /* 10ac1a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1a55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1a57 call 0x10ac2d20 */
  push32(0x10ac1a5cu); f_10ac2d20();
L_10ac1a5c:;
  /* 10ac1a5c mov esi, esp */
  ESI = (ESP);
  /* 10ac1a5e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac1a60 call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac1a66u);
  /* 10ac1a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1a69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1a6b call 0x10ac2d20 */
  push32(0x10ac1a70u); f_10ac2d20();
  /* 10ac1a70 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac1a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1a77 je 0x10ac1b12 */
  if (C.zf) goto L_10ac1b12;
  /* 10ac1a7d mov esi, esp */
  ESI = (ESP);
  /* 10ac1a7f call dword ptr [0x10af2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2410))), 0x10ac1a85u);
  /* 10ac1a85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1a87 call 0x10ac2d20 */
  push32(0x10ac1a8cu); f_10ac2d20();
  /* 10ac1a8c cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1a91 jle 0x10ac1b12 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1b12;
  /* 10ac1a93 mov esi, esp */
  ESI = (ESP);
  /* 10ac1a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1a97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac1a99 call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac1a9fu);
  /* 10ac1a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1aa4 call 0x10ac2d20 */
  push32(0x10ac1aa9u); f_10ac2d20();
  /* 10ac1aa9 mov esi, esp */
  ESI = (ESP);
  /* 10ac1aab push 0x10aea24c */
  push32((uint32_t)(0x10aea24cu));
  /* 10ac1ab0 call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac1ab6u);
  /* 10ac1ab6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1ab9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1abb call 0x10ac2d20 */
  push32(0x10ac1ac0u); f_10ac2d20();
  /* 10ac1ac0 mov esi, esp */
  ESI = (ESP);
  /* 10ac1ac2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1ac4 push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac1ac9 push 0x10aef410 */
  push32((uint32_t)(0x10aef410u));
  /* 10ac1ace call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac1ad4u);
  /* 10ac1ad4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1ad7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1ad9 call 0x10ac2d20 */
  push32(0x10ac1adeu); f_10ac2d20();
  /* 10ac1ade mov esi, esp */
  ESI = (ESP);
  /* 10ac1ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1ae2 push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac1ae7 push 0x10aef408 */
  push32((uint32_t)(0x10aef408u));
  /* 10ac1aec call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac1af2u);
  /* 10ac1af2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1af5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1af7 call 0x10ac2d20 */
  push32(0x10ac1afcu); f_10ac2d20();
  /* 10ac1afc mov esi, esp */
  ESI = (ESP);
  /* 10ac1afe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10ac1b00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1b02 call dword ptr [0x10af240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af240c))), 0x10ac1b08u);
  /* 10ac1b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1b0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1b0d call 0x10ac2d20 */
  push32(0x10ac1b12u); f_10ac2d20();
L_10ac1b12:;
  /* 10ac1b12 mov esi, esp */
  ESI = (ESP);
  /* 10ac1b14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1b16 call dword ptr [0x10af241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af241c))), 0x10ac1b1cu);
  /* 10ac1b1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1b21 call 0x10ac2d20 */
  push32(0x10ac1b26u); f_10ac2d20();
  /* 10ac1b26 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac1b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1b2d je 0x10ac1b81 */
  if (C.zf) goto L_10ac1b81;
  /* 10ac1b2f mov esi, esp */
  ESI = (ESP);
  /* 10ac1b31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1b33 push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac1b38 push 0x10aef410 */
  push32((uint32_t)(0x10aef410u));
  /* 10ac1b3d call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac1b43u);
  /* 10ac1b43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1b46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1b48 call 0x10ac2d20 */
  push32(0x10ac1b4du); f_10ac2d20();
  /* 10ac1b4d mov esi, esp */
  ESI = (ESP);
  /* 10ac1b4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1b51 push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac1b56 push 0x10aef408 */
  push32((uint32_t)(0x10aef408u));
  /* 10ac1b5b call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac1b61u);
  /* 10ac1b61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1b64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1b66 call 0x10ac2d20 */
  push32(0x10ac1b6bu); f_10ac2d20();
  /* 10ac1b6b mov esi, esp */
  ESI = (ESP);
  /* 10ac1b6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10ac1b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1b71 call dword ptr [0x10af240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af240c))), 0x10ac1b77u);
  /* 10ac1b77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1b7c call 0x10ac2d20 */
  push32(0x10ac1b81u); f_10ac2d20();
L_10ac1b81:;
  /* 10ac1b81 mov esi, esp */
  ESI = (ESP);
  /* 10ac1b83 push 6 */
  push32((uint32_t)(0x6u));
  /* 10ac1b85 call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac1b8bu);
  /* 10ac1b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1b90 call 0x10ac2d20 */
  push32(0x10ac1b95u); f_10ac2d20();
  /* 10ac1b95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac1b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1b9c je 0x10ac1c53 */
  if (C.zf) goto L_10ac1c53;
  /* 10ac1ba2 mov esi, esp */
  ESI = (ESP);
  /* 10ac1ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1ba6 push 0x10aef4a8 */
  push32((uint32_t)(0x10aef4a8u));
  /* 10ac1bab call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac1bb1u);
  /* 10ac1bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1bb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1bb6 call 0x10ac2d20 */
  push32(0x10ac1bbbu); f_10ac2d20();
  /* 10ac1bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1bbd jle 0x10ac1c53 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1c53;
  /* 10ac1bc3 mov esi, esp */
  ESI = (ESP);
  /* 10ac1bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1bc7 push 6 */
  push32((uint32_t)(0x6u));
  /* 10ac1bc9 call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac1bcfu);
  /* 10ac1bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1bd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1bd4 call 0x10ac2d20 */
  push32(0x10ac1bd9u); f_10ac2d20();
  /* 10ac1bd9 mov esi, esp */
  ESI = (ESP);
  /* 10ac1bdb push 0x10aea244 */
  push32((uint32_t)(0x10aea244u));
  /* 10ac1be0 call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac1be6u);
  /* 10ac1be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1be9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1beb call 0x10ac2d20 */
  push32(0x10ac1bf0u); f_10ac2d20();
  /* 10ac1bf0 mov esi, esp */
  ESI = (ESP);
  /* 10ac1bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1bf4 push 0x10aef548 */
  push32((uint32_t)(0x10aef548u));
  /* 10ac1bf9 call dword ptr [0x10af2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2418))), 0x10ac1bffu);
  /* 10ac1bff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1c02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1c04 call 0x10ac2d20 */
  push32(0x10ac1c09u); f_10ac2d20();
  /* 10ac1c09 mov esi, esp */
  ESI = (ESP);
  /* 10ac1c0b push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac1c0d call dword ptr [0x10af2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2428))), 0x10ac1c13u);
  /* 10ac1c13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1c16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1c18 call 0x10ac2d20 */
  push32(0x10ac1c1du); f_10ac2d20();
  /* 10ac1c1d mov esi, esp */
  ESI = (ESP);
  /* 10ac1c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1c21 push 0x10aef3f0 */
  push32((uint32_t)(0x10aef3f0u));
  /* 10ac1c26 call dword ptr [0x10af2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2418))), 0x10ac1c2cu);
  /* 10ac1c2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1c31 call 0x10ac2d20 */
  push32(0x10ac1c36u); f_10ac2d20();
  /* 10ac1c36 mov esi, esp */
  ESI = (ESP);
  /* 10ac1c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1c3c push 0x10aef4b0 */
  push32((uint32_t)(0x10aef4b0u));
  /* 10ac1c41 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac1c43 call dword ptr [0x10af242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af242c))), 0x10ac1c49u);
  /* 10ac1c49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1c4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1c4e call 0x10ac2d20 */
  push32(0x10ac1c53u); f_10ac2d20();
L_10ac1c53:;
  /* 10ac1c53 mov esi, esp */
  ESI = (ESP);
  /* 10ac1c55 push 7 */
  push32((uint32_t)(0x7u));
  /* 10ac1c57 call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac1c5du);
  /* 10ac1c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1c62 call 0x10ac2d20 */
  push32(0x10ac1c67u); f_10ac2d20();
  /* 10ac1c67 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac1c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1c6e je 0x10ac1d08 */
  if (C.zf) goto L_10ac1d08;
  /* 10ac1c74 mov esi, esp */
  ESI = (ESP);
  /* 10ac1c76 push 0x10aef528 */
  push32((uint32_t)(0x10aef528u));
  /* 10ac1c7b push 0x10aef4b8 */
  push32((uint32_t)(0x10aef4b8u));
  /* 10ac1c80 call dword ptr [0x10af2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2424))), 0x10ac1c86u);
  /* 10ac1c86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1c89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1c8b call 0x10ac2d20 */
  push32(0x10ac1c90u); f_10ac2d20();
  /* 10ac1c90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1c92 jle 0x10ac1d08 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1d08;
  /* 10ac1c94 push 0x10aef500 */
  push32((uint32_t)(0x10aef500u));
  /* 10ac1c99 call 0x10ac1005 */
  push32(0x10ac1c9eu); f_10ac1005();
  /* 10ac1c9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1ca1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1ca3 jle 0x10ac1d08 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1d08;
  /* 10ac1ca5 mov esi, esp */
  ESI = (ESP);
  /* 10ac1ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1ca9 push 7 */
  push32((uint32_t)(0x7u));
  /* 10ac1cab call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac1cb1u);
  /* 10ac1cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1cb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1cb6 call 0x10ac2d20 */
  push32(0x10ac1cbbu); f_10ac2d20();
  /* 10ac1cbb mov esi, esp */
  ESI = (ESP);
  /* 10ac1cbd push 0x10aea23c */
  push32((uint32_t)(0x10aea23cu));
  /* 10ac1cc2 call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac1cc8u);
  /* 10ac1cc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1ccb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1ccd call 0x10ac2d20 */
  push32(0x10ac1cd2u); f_10ac2d20();
  /* 10ac1cd2 mov esi, esp */
  ESI = (ESP);
  /* 10ac1cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1cd6 push 0x10aef500 */
  push32((uint32_t)(0x10aef500u));
  /* 10ac1cdb call dword ptr [0x10af2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2418))), 0x10ac1ce1u);
  /* 10ac1ce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1ce4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1ce6 call 0x10ac2d20 */
  push32(0x10ac1cebu); f_10ac2d20();
  /* 10ac1ceb mov esi, esp */
  ESI = (ESP);
  /* 10ac1ced push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1cef push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1cf1 push 0x10aef4b8 */
  push32((uint32_t)(0x10aef4b8u));
  /* 10ac1cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1cf8 call dword ptr [0x10af2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2434))), 0x10ac1cfeu);
  /* 10ac1cfe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1d01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1d03 call 0x10ac2d20 */
  push32(0x10ac1d08u); f_10ac2d20();
L_10ac1d08:;
  /* 10ac1d08 mov esi, esp */
  ESI = (ESP);
  /* 10ac1d0a push 7 */
  push32((uint32_t)(0x7u));
  /* 10ac1d0c call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac1d12u);
  /* 10ac1d12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1d15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1d17 call 0x10ac2d20 */
  push32(0x10ac1d1cu); f_10ac2d20();
  /* 10ac1d1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac1d21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1d23 jne 0x10ac1d68 */
  if (!C.zf) goto L_10ac1d68;
  /* 10ac1d25 push 0x10aef500 */
  push32((uint32_t)(0x10aef500u));
  /* 10ac1d2a call 0x10ac1005 */
  push32(0x10ac1d2fu); f_10ac1005();
  /* 10ac1d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1d34 jle 0x10ac1d68 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1d68;
  /* 10ac1d36 mov esi, esp */
  ESI = (ESP);
  /* 10ac1d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1d3a push 0x10aef500 */
  push32((uint32_t)(0x10aef500u));
  /* 10ac1d3f call dword ptr [0x10af2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2418))), 0x10ac1d45u);
  /* 10ac1d45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1d48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1d4a call 0x10ac2d20 */
  push32(0x10ac1d4fu); f_10ac2d20();
  /* 10ac1d4f mov esi, esp */
  ESI = (ESP);
  /* 10ac1d51 push 0x10aef528 */
  push32((uint32_t)(0x10aef528u));
  /* 10ac1d56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1d58 call dword ptr [0x10af2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2438))), 0x10ac1d5eu);
  /* 10ac1d5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1d61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1d63 call 0x10ac2d20 */
  push32(0x10ac1d68u); f_10ac2d20();
L_10ac1d68:;
  /* 10ac1d68 mov esi, esp */
  ESI = (ESP);
  /* 10ac1d6a push 8 */
  push32((uint32_t)(0x8u));
  /* 10ac1d6c call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac1d72u);
  /* 10ac1d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1d75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1d77 call 0x10ac2d20 */
  push32(0x10ac1d7cu); f_10ac2d20();
  /* 10ac1d7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac1d81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1d83 je 0x10ac1dfe */
  if (C.zf) goto L_10ac1dfe;
  /* 10ac1d85 mov esi, esp */
  ESI = (ESP);
  /* 10ac1d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1d89 push 0x10aef4c8 */
  push32((uint32_t)(0x10aef4c8u));
  /* 10ac1d8e call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac1d94u);
  /* 10ac1d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1d99 call 0x10ac2d20 */
  push32(0x10ac1d9eu); f_10ac2d20();
  /* 10ac1d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1da0 jle 0x10ac1dfe */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1dfe;
  /* 10ac1da2 push 0x10aef510 */
  push32((uint32_t)(0x10aef510u));
  /* 10ac1da7 call 0x10ac1005 */
  push32(0x10ac1dacu); f_10ac1005();
  /* 10ac1dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1db1 jle 0x10ac1dfe */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1dfe;
  /* 10ac1db3 mov esi, esp */
  ESI = (ESP);
  /* 10ac1db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1db7 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ac1db9 call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac1dbfu);
  /* 10ac1dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1dc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1dc4 call 0x10ac2d20 */
  push32(0x10ac1dc9u); f_10ac2d20();
  /* 10ac1dc9 mov esi, esp */
  ESI = (ESP);
  /* 10ac1dcb push 0x10aea234 */
  push32((uint32_t)(0x10aea234u));
  /* 10ac1dd0 call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac1dd6u);
  /* 10ac1dd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1dd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1ddb call 0x10ac2d20 */
  push32(0x10ac1de0u); f_10ac2d20();
  /* 10ac1de0 mov esi, esp */
  ESI = (ESP);
  /* 10ac1de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1de4 push 0x10aef4c8 */
  push32((uint32_t)(0x10aef4c8u));
  /* 10ac1de9 push 0x10aef510 */
  push32((uint32_t)(0x10aef510u));
  /* 10ac1dee call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac1df4u);
  /* 10ac1df4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1df9 call 0x10ac2d20 */
  push32(0x10ac1dfeu); f_10ac2d20();
L_10ac1dfe:;
  /* 10ac1dfe mov esi, esp */
  ESI = (ESP);
  /* 10ac1e00 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ac1e02 call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac1e08u);
  /* 10ac1e08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1e0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1e0d call 0x10ac2d20 */
  push32(0x10ac1e12u); f_10ac2d20();
  /* 10ac1e12 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac1e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1e19 jne 0x10ac1e67 */
  if (!C.zf) goto L_10ac1e67;
  /* 10ac1e1b mov esi, esp */
  ESI = (ESP);
  /* 10ac1e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1e1f push 0x10aef4c8 */
  push32((uint32_t)(0x10aef4c8u));
  /* 10ac1e24 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac1e2au);
  /* 10ac1e2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1e2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1e2f call 0x10ac2d20 */
  push32(0x10ac1e34u); f_10ac2d20();
  /* 10ac1e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1e36 jle 0x10ac1e67 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1e67;
  /* 10ac1e38 push 0x10aef510 */
  push32((uint32_t)(0x10aef510u));
  /* 10ac1e3d call 0x10ac1005 */
  push32(0x10ac1e42u); f_10ac1005();
  /* 10ac1e42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1e45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1e47 jle 0x10ac1e67 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1e67;
  /* 10ac1e49 mov esi, esp */
  ESI = (ESP);
  /* 10ac1e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1e4d push 0x10aef4c8 */
  push32((uint32_t)(0x10aef4c8u));
  /* 10ac1e52 push 0x10aef510 */
  push32((uint32_t)(0x10aef510u));
  /* 10ac1e57 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac1e5du);
  /* 10ac1e5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1e60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1e62 call 0x10ac2d20 */
  push32(0x10ac1e67u); f_10ac2d20();
L_10ac1e67:;
  /* 10ac1e67 mov esi, esp */
  ESI = (ESP);
  /* 10ac1e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1e6b push 0x10aef3f0 */
  push32((uint32_t)(0x10aef3f0u));
  /* 10ac1e70 call dword ptr [0x10af2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2430))), 0x10ac1e76u);
  /* 10ac1e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1e7b call 0x10ac2d20 */
  push32(0x10ac1e80u); f_10ac2d20();
  /* 10ac1e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1e82 jle 0x10ac1ec7 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1ec7;
  /* 10ac1e84 mov esi, esp */
  ESI = (ESP);
  /* 10ac1e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1e88 call dword ptr [0x10af2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2440))), 0x10ac1e8eu);
  /* 10ac1e8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1e91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1e93 call 0x10ac2d20 */
  push32(0x10ac1e98u); f_10ac2d20();
  /* 10ac1e98 mov esi, esp */
  ESI = (ESP);
  /* 10ac1e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1e9c push 0x10aef3f0 */
  push32((uint32_t)(0x10aef3f0u));
  /* 10ac1ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1ea3 call dword ptr [0x10af2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2444))), 0x10ac1ea9u);
  /* 10ac1ea9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1eae call 0x10ac2d20 */
  push32(0x10ac1eb3u); f_10ac2d20();
  /* 10ac1eb3 mov esi, esp */
  ESI = (ESP);
  /* 10ac1eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1eb7 call dword ptr [0x10af2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2428))), 0x10ac1ebdu);
  /* 10ac1ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1ec0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1ec2 call 0x10ac2d20 */
  push32(0x10ac1ec7u); f_10ac2d20();
L_10ac1ec7:;
  /* 10ac1ec7 mov esi, esp */
  ESI = (ESP);
  /* 10ac1ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1ecb push 0x10aef510 */
  push32((uint32_t)(0x10aef510u));
  /* 10ac1ed0 call dword ptr [0x10af2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2430))), 0x10ac1ed6u);
  /* 10ac1ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1ed9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1edb call 0x10ac2d20 */
  push32(0x10ac1ee0u); f_10ac2d20();
  /* 10ac1ee0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1ee2 jle 0x10ac1f27 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac1f27;
  /* 10ac1ee4 mov esi, esp */
  ESI = (ESP);
  /* 10ac1ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1ee8 call dword ptr [0x10af2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2440))), 0x10ac1eeeu);
  /* 10ac1eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1ef1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1ef3 call 0x10ac2d20 */
  push32(0x10ac1ef8u); f_10ac2d20();
  /* 10ac1ef8 mov esi, esp */
  ESI = (ESP);
  /* 10ac1efa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1efc push 0x10aef510 */
  push32((uint32_t)(0x10aef510u));
  /* 10ac1f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1f03 call dword ptr [0x10af2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2444))), 0x10ac1f09u);
  /* 10ac1f09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1f0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1f0e call 0x10ac2d20 */
  push32(0x10ac1f13u); f_10ac2d20();
  /* 10ac1f13 mov esi, esp */
  ESI = (ESP);
  /* 10ac1f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1f17 call dword ptr [0x10af2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2428))), 0x10ac1f1du);
  /* 10ac1f1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1f20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1f22 call 0x10ac2d20 */
  push32(0x10ac1f27u); f_10ac2d20();
L_10ac1f27:;
  /* 10ac1f27 mov esi, esp */
  ESI = (ESP);
  /* 10ac1f29 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac1f2b call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac1f31u);
  /* 10ac1f31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1f34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1f36 call 0x10ac2d20 */
  push32(0x10ac1f3bu); f_10ac2d20();
  /* 10ac1f3b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac1f40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac1f42 je 0x10ac203b */
  if (C.zf) goto L_10ac203b;
  /* 10ac1f48 mov esi, esp */
  ESI = (ESP);
  /* 10ac1f4a call dword ptr [0x10af2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2410))), 0x10ac1f50u);
  /* 10ac1f50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1f52 call 0x10ac2d20 */
  push32(0x10ac1f57u); f_10ac2d20();
  /* 10ac1f57 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1f5c jle 0x10ac203b */
  if ((C.zf||C.sf!=C.of)) goto L_10ac203b;
  /* 10ac1f62 mov esi, esp */
  ESI = (ESP);
  /* 10ac1f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac1f66 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac1f68 call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac1f6eu);
  /* 10ac1f6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1f71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1f73 call 0x10ac2d20 */
  push32(0x10ac1f78u); f_10ac2d20();
  /* 10ac1f78 mov esi, esp */
  ESI = (ESP);
  /* 10ac1f7a push 0x10aea22c */
  push32((uint32_t)(0x10aea22cu));
  /* 10ac1f7f call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac1f85u);
  /* 10ac1f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1f88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1f8a call 0x10ac2d20 */
  push32(0x10ac1f8fu); f_10ac2d20();
  /* 10ac1f8f mov esi, esp */
  ESI = (ESP);
  /* 10ac1f91 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10ac1f96 push 0x10aef4a0 */
  push32((uint32_t)(0x10aef4a0u));
  /* 10ac1f9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1f9d push 0x10aef4e0 */
  push32((uint32_t)(0x10aef4e0u));
  /* 10ac1fa2 push 0x10aef4c0 */
  push32((uint32_t)(0x10aef4c0u));
  /* 10ac1fa7 push 0x10aef418 */
  push32((uint32_t)(0x10aef418u));
  /* 10ac1fac call dword ptr [0x10af243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af243c))), 0x10ac1fb2u);
  /* 10ac1fb2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1fb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1fb7 call 0x10ac2d20 */
  push32(0x10ac1fbcu); f_10ac2d20();
  /* 10ac1fbc mov esi, esp */
  ESI = (ESP);
  /* 10ac1fbe push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10ac1fc3 push 0x10aef4a0 */
  push32((uint32_t)(0x10aef4a0u));
  /* 10ac1fc8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac1fca push 0x10aef3f8 */
  push32((uint32_t)(0x10aef3f8u));
  /* 10ac1fcf push 0x10aef4c0 */
  push32((uint32_t)(0x10aef4c0u));
  /* 10ac1fd4 push 0x10aef430 */
  push32((uint32_t)(0x10aef430u));
  /* 10ac1fd9 call dword ptr [0x10af243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af243c))), 0x10ac1fdfu);
  /* 10ac1fdf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1fe2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1fe4 call 0x10ac2d20 */
  push32(0x10ac1fe9u); f_10ac2d20();
  /* 10ac1fe9 mov esi, esp */
  ESI = (ESP);
  /* 10ac1feb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10ac1fed push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac1fef call dword ptr [0x10af240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af240c))), 0x10ac1ff5u);
  /* 10ac1ff5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac1ff8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac1ffa call 0x10ac2d20 */
  push32(0x10ac1fffu); f_10ac2d20();
  /* 10ac1fff mov esi, esp */
  ESI = (ESP);
  /* 10ac2001 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2003 push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac2008 push 0x10aef418 */
  push32((uint32_t)(0x10aef418u));
  /* 10ac200d call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2013u);
  /* 10ac2013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2016 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2018 call 0x10ac2d20 */
  push32(0x10ac201du); f_10ac2d20();
  /* 10ac201d mov esi, esp */
  ESI = (ESP);
  /* 10ac201f push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2021 push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac2026 push 0x10aef430 */
  push32((uint32_t)(0x10aef430u));
  /* 10ac202b call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2031u);
  /* 10ac2031 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2034 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2036 call 0x10ac2d20 */
  push32(0x10ac203bu); f_10ac2d20();
L_10ac203b:;
  /* 10ac203b mov esi, esp */
  ESI = (ESP);
  /* 10ac203d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac203f call dword ptr [0x10af241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af241c))), 0x10ac2045u);
  /* 10ac2045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2048 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac204a call 0x10ac2d20 */
  push32(0x10ac204fu); f_10ac2d20();
  /* 10ac204f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac2054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2056 je 0x10ac20aa */
  if (C.zf) goto L_10ac20aa;
  /* 10ac2058 mov esi, esp */
  ESI = (ESP);
  /* 10ac205a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10ac205c push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac205e call dword ptr [0x10af240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af240c))), 0x10ac2064u);
  /* 10ac2064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2067 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2069 call 0x10ac2d20 */
  push32(0x10ac206eu); f_10ac2d20();
  /* 10ac206e mov esi, esp */
  ESI = (ESP);
  /* 10ac2070 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2072 push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac2077 push 0x10aef418 */
  push32((uint32_t)(0x10aef418u));
  /* 10ac207c call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2082u);
  /* 10ac2082 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2085 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2087 call 0x10ac2d20 */
  push32(0x10ac208cu); f_10ac2d20();
  /* 10ac208c mov esi, esp */
  ESI = (ESP);
  /* 10ac208e push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2090 push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac2095 push 0x10aef430 */
  push32((uint32_t)(0x10aef430u));
  /* 10ac209a call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac20a0u);
  /* 10ac20a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac20a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac20a5 call 0x10ac2d20 */
  push32(0x10ac20aau); f_10ac2d20();
L_10ac20aa:;
  /* 10ac20aa mov esi, esp */
  ESI = (ESP);
  /* 10ac20ac push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac20ae call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac20b4u);
  /* 10ac20b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac20b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac20b9 call 0x10ac2d20 */
  push32(0x10ac20beu); f_10ac2d20();
  /* 10ac20be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac20c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac20c5 je 0x10ac2199 */
  if (C.zf) goto L_10ac2199;
  /* 10ac20cb push 0x10aef420 */
  push32((uint32_t)(0x10aef420u));
  /* 10ac20d0 call 0x10ac1005 */
  push32(0x10ac20d5u); f_10ac1005();
  /* 10ac20d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac20d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac20da jne 0x10ac2199 */
  if (!C.zf) goto L_10ac2199;
  /* 10ac20e0 mov esi, esp */
  ESI = (ESP);
  /* 10ac20e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac20e4 call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac20eau);
  /* 10ac20ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac20ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac20ef call 0x10ac2d20 */
  push32(0x10ac20f4u); f_10ac2d20();
  /* 10ac20f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac20f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac20fb je 0x10ac213b */
  if (C.zf) goto L_10ac213b;
  /* 10ac20fd mov esi, esp */
  ESI = (ESP);
  /* 10ac20ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2101 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2103 call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac2109u);
  /* 10ac2109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac210c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac210e call 0x10ac2d20 */
  push32(0x10ac2113u); f_10ac2d20();
  /* 10ac2113 mov esi, esp */
  ESI = (ESP);
  /* 10ac2115 push 0x10aea224 */
  push32((uint32_t)(0x10aea224u));
  /* 10ac211a call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac2120u);
  /* 10ac2120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2123 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2125 call 0x10ac2d20 */
  push32(0x10ac212au); f_10ac2d20();
  /* 10ac212a mov esi, esp */
  ESI = (ESP);
  /* 10ac212c call dword ptr [0x10af244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af244c))), 0x10ac2132u);
  /* 10ac2132 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2134 call 0x10ac2d20 */
  push32(0x10ac2139u); f_10ac2d20();
  /* 10ac2139 jmp 0x10ac2199 */
  goto L_10ac2199;
L_10ac213b:;
  /* 10ac213b push 0x10aef418 */
  push32((uint32_t)(0x10aef418u));
  /* 10ac2140 call 0x10ac1005 */
  push32(0x10ac2145u); f_10ac1005();
  /* 10ac2145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac214a jne 0x10ac2199 */
  if (!C.zf) goto L_10ac2199;
  /* 10ac214c push 0x10aef430 */
  push32((uint32_t)(0x10aef430u));
  /* 10ac2151 call 0x10ac1005 */
  push32(0x10ac2156u); f_10ac1005();
  /* 10ac2156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac215b jne 0x10ac2199 */
  if (!C.zf) goto L_10ac2199;
  /* 10ac215d mov esi, esp */
  ESI = (ESP);
  /* 10ac215f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2161 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2163 call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac2169u);
  /* 10ac2169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac216c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac216e call 0x10ac2d20 */
  push32(0x10ac2173u); f_10ac2d20();
  /* 10ac2173 mov esi, esp */
  ESI = (ESP);
  /* 10ac2175 push 0x10aea224 */
  push32((uint32_t)(0x10aea224u));
  /* 10ac217a call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac2180u);
  /* 10ac2180 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2183 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2185 call 0x10ac2d20 */
  push32(0x10ac218au); f_10ac2d20();
  /* 10ac218a mov esi, esp */
  ESI = (ESP);
  /* 10ac218c call dword ptr [0x10af244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af244c))), 0x10ac2192u);
  /* 10ac2192 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2194 call 0x10ac2d20 */
  push32(0x10ac2199u); f_10ac2d20();
L_10ac2199:;
  /* 10ac2199 mov esi, esp */
  ESI = (ESP);
  /* 10ac219b push 5 */
  push32((uint32_t)(0x5u));
  /* 10ac219d call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac21a3u);
  /* 10ac21a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac21a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac21a8 call 0x10ac2d20 */
  push32(0x10ac21adu); f_10ac2d20();
  /* 10ac21ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac21b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac21b4 je 0x10ac2203 */
  if (C.zf) goto L_10ac2203;
  /* 10ac21b6 push 0x10aef400 */
  push32((uint32_t)(0x10aef400u));
  /* 10ac21bb call 0x10ac1005 */
  push32(0x10ac21c0u); f_10ac1005();
  /* 10ac21c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac21c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac21c5 jne 0x10ac2203 */
  if (!C.zf) goto L_10ac2203;
  /* 10ac21c7 mov esi, esp */
  ESI = (ESP);
  /* 10ac21c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac21cb push 5 */
  push32((uint32_t)(0x5u));
  /* 10ac21cd call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac21d3u);
  /* 10ac21d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac21d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac21d8 call 0x10ac2d20 */
  push32(0x10ac21ddu); f_10ac2d20();
  /* 10ac21dd mov esi, esp */
  ESI = (ESP);
  /* 10ac21df push 0x10aea21c */
  push32((uint32_t)(0x10aea21cu));
  /* 10ac21e4 call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac21eau);
  /* 10ac21ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac21ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac21ef call 0x10ac2d20 */
  push32(0x10ac21f4u); f_10ac2d20();
  /* 10ac21f4 mov esi, esp */
  ESI = (ESP);
  /* 10ac21f6 call dword ptr [0x10af2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2450))), 0x10ac21fcu);
  /* 10ac21fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac21fe call 0x10ac2d20 */
  push32(0x10ac2203u); f_10ac2d20();
L_10ac2203:;
  /* 10ac2203 mov esi, esp */
  ESI = (ESP);
  /* 10ac2205 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac2207 call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac220du);
  /* 10ac220d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2210 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2212 call 0x10ac2d20 */
  push32(0x10ac2217u); f_10ac2d20();
  /* 10ac2217 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac221c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac221e jne 0x10ac2804 */
  if (!C.zf) goto L_10ac2804;
  /* 10ac2224 push 0x10aef428 */
  push32((uint32_t)(0x10aef428u));
  /* 10ac2229 call 0x10ac1005 */
  push32(0x10ac222eu); f_10ac1005();
  /* 10ac222e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2233 jle 0x10ac22b9 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac22b9;
  /* 10ac2239 push 0x10aef558 */
  push32((uint32_t)(0x10aef558u));
  /* 10ac223e call 0x10ac1005 */
  push32(0x10ac2243u); f_10ac1005();
  /* 10ac2243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2248 jle 0x10ac226a */
  if ((C.zf||C.sf!=C.of)) goto L_10ac226a;
  /* 10ac224a mov esi, esp */
  ESI = (ESP);
  /* 10ac224c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac224e push 0x10aef4d0 */
  push32((uint32_t)(0x10aef4d0u));
  /* 10ac2253 push 0x10aef428 */
  push32((uint32_t)(0x10aef428u));
  /* 10ac2258 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac225eu);
  /* 10ac225e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2263 call 0x10ac2d20 */
  push32(0x10ac2268u); f_10ac2d20();
  /* 10ac2268 jmp 0x10ac22b9 */
  goto L_10ac22b9;
L_10ac226a:;
  /* 10ac226a push 0x10aef560 */
  push32((uint32_t)(0x10aef560u));
  /* 10ac226f call 0x10ac1005 */
  push32(0x10ac2274u); f_10ac1005();
  /* 10ac2274 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2277 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2279 jle 0x10ac229b */
  if ((C.zf||C.sf!=C.of)) goto L_10ac229b;
  /* 10ac227b mov esi, esp */
  ESI = (ESP);
  /* 10ac227d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac227f push 0x10aef490 */
  push32((uint32_t)(0x10aef490u));
  /* 10ac2284 push 0x10aef428 */
  push32((uint32_t)(0x10aef428u));
  /* 10ac2289 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac228fu);
  /* 10ac228f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2292 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2294 call 0x10ac2d20 */
  push32(0x10ac2299u); f_10ac2d20();
  /* 10ac2299 jmp 0x10ac22b9 */
  goto L_10ac22b9;
L_10ac229b:;
  /* 10ac229b mov esi, esp */
  ESI = (ESP);
  /* 10ac229d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac229f push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac22a4 push 0x10aef428 */
  push32((uint32_t)(0x10aef428u));
  /* 10ac22a9 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac22afu);
  /* 10ac22af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac22b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac22b4 call 0x10ac2d20 */
  push32(0x10ac22b9u); f_10ac2d20();
L_10ac22b9:;
  /* 10ac22b9 push 0x10aef440 */
  push32((uint32_t)(0x10aef440u));
  /* 10ac22be call 0x10ac1005 */
  push32(0x10ac22c3u); f_10ac1005();
  /* 10ac22c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac22c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac22c8 jle 0x10ac2323 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2323;
  /* 10ac22ca push 0x10aef550 */
  push32((uint32_t)(0x10aef550u));
  /* 10ac22cf call 0x10ac1005 */
  push32(0x10ac22d4u); f_10ac1005();
  /* 10ac22d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac22d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac22d9 jle 0x10ac2323 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2323;
  /* 10ac22db mov esi, esp */
  ESI = (ESP);
  /* 10ac22dd push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac22df call dword ptr [0x10af2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2440))), 0x10ac22e5u);
  /* 10ac22e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac22e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac22ea call 0x10ac2d20 */
  push32(0x10ac22efu); f_10ac2d20();
  /* 10ac22ef mov esi, esp */
  ESI = (ESP);
  /* 10ac22f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac22f3 push 0x10aef440 */
  push32((uint32_t)(0x10aef440u));
  /* 10ac22f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac22fa call dword ptr [0x10af2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2444))), 0x10ac2300u);
  /* 10ac2300 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2303 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2305 call 0x10ac2d20 */
  push32(0x10ac230au); f_10ac2d20();
  /* 10ac230a mov esi, esp */
  ESI = (ESP);
  /* 10ac230c push 0x10aef550 */
  push32((uint32_t)(0x10aef550u));
  /* 10ac2311 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2313 call dword ptr [0x10af2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2438))), 0x10ac2319u);
  /* 10ac2319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac231c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac231e call 0x10ac2d20 */
  push32(0x10ac2323u); f_10ac2d20();
L_10ac2323:;
  /* 10ac2323 mov esi, esp */
  ESI = (ESP);
  /* 10ac2325 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2327 push 0x10aef4d8 */
  push32((uint32_t)(0x10aef4d8u));
  /* 10ac232c call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac2332u);
  /* 10ac2332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2337 call 0x10ac2d20 */
  push32(0x10ac233cu); f_10ac2d20();
  /* 10ac233c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac233e jle 0x10ac235e */
  if ((C.zf||C.sf!=C.of)) goto L_10ac235e;
  /* 10ac2340 mov esi, esp */
  ESI = (ESP);
  /* 10ac2342 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2344 push 0x10aef4d8 */
  push32((uint32_t)(0x10aef4d8u));
  /* 10ac2349 push 0x10aef438 */
  push32((uint32_t)(0x10aef438u));
  /* 10ac234e call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2354u);
  /* 10ac2354 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2357 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2359 call 0x10ac2d20 */
  push32(0x10ac235eu); f_10ac2d20();
L_10ac235e:;
  /* 10ac235e mov esi, esp */
  ESI = (ESP);
  /* 10ac2360 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2362 push 0x10aef4d8 */
  push32((uint32_t)(0x10aef4d8u));
  /* 10ac2367 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac236du);
  /* 10ac236d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2370 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2372 call 0x10ac2d20 */
  push32(0x10ac2377u); f_10ac2d20();
  /* 10ac2377 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2379 jle 0x10ac2399 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2399;
  /* 10ac237b mov esi, esp */
  ESI = (ESP);
  /* 10ac237d push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac237f push 0x10aef4d8 */
  push32((uint32_t)(0x10aef4d8u));
  /* 10ac2384 push 0x10aef438 */
  push32((uint32_t)(0x10aef438u));
  /* 10ac2389 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac238fu);
  /* 10ac238f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2392 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2394 call 0x10ac2d20 */
  push32(0x10ac2399u); f_10ac2d20();
L_10ac2399:;
  /* 10ac2399 push 0x10aef4e8 */
  push32((uint32_t)(0x10aef4e8u));
  /* 10ac239e call 0x10ac1005 */
  push32(0x10ac23a3u); f_10ac1005();
  /* 10ac23a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac23a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac23a8 jle 0x10ac2403 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2403;
  /* 10ac23aa push 0x10aef3e0 */
  push32((uint32_t)(0x10aef3e0u));
  /* 10ac23af call 0x10ac1005 */
  push32(0x10ac23b4u); f_10ac1005();
  /* 10ac23b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac23b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac23b9 jle 0x10ac2403 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2403;
  /* 10ac23bb mov esi, esp */
  ESI = (ESP);
  /* 10ac23bd push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac23bf call dword ptr [0x10af2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2440))), 0x10ac23c5u);
  /* 10ac23c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac23c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac23ca call 0x10ac2d20 */
  push32(0x10ac23cfu); f_10ac2d20();
  /* 10ac23cf mov esi, esp */
  ESI = (ESP);
  /* 10ac23d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac23d3 push 0x10aef4e8 */
  push32((uint32_t)(0x10aef4e8u));
  /* 10ac23d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac23da call dword ptr [0x10af2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2444))), 0x10ac23e0u);
  /* 10ac23e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac23e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac23e5 call 0x10ac2d20 */
  push32(0x10ac23eau); f_10ac2d20();
  /* 10ac23ea mov esi, esp */
  ESI = (ESP);
  /* 10ac23ec push 0x10aef3e0 */
  push32((uint32_t)(0x10aef3e0u));
  /* 10ac23f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac23f3 call dword ptr [0x10af2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2438))), 0x10ac23f9u);
  /* 10ac23f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac23fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac23fe call 0x10ac2d20 */
  push32(0x10ac2403u); f_10ac2d20();
L_10ac2403:;
  /* 10ac2403 push 0x10aef538 */
  push32((uint32_t)(0x10aef538u));
  /* 10ac2408 call 0x10ac1005 */
  push32(0x10ac240du); f_10ac1005();
  /* 10ac240d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2412 jle 0x10ac2463 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2463;
  /* 10ac2414 push 0x10aef3e8 */
  push32((uint32_t)(0x10aef3e8u));
  /* 10ac2419 call 0x10ac1005 */
  push32(0x10ac241eu); f_10ac1005();
  /* 10ac241e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2423 jle 0x10ac2445 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2445;
  /* 10ac2425 mov esi, esp */
  ESI = (ESP);
  /* 10ac2427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac2429 push 0x10aef448 */
  push32((uint32_t)(0x10aef448u));
  /* 10ac242e push 0x10aef538 */
  push32((uint32_t)(0x10aef538u));
  /* 10ac2433 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2439u);
  /* 10ac2439 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac243c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac243e call 0x10ac2d20 */
  push32(0x10ac2443u); f_10ac2d20();
  /* 10ac2443 jmp 0x10ac2463 */
  goto L_10ac2463;
L_10ac2445:;
  /* 10ac2445 mov esi, esp */
  ESI = (ESP);
  /* 10ac2447 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac2449 push 0x10aef498 */
  push32((uint32_t)(0x10aef498u));
  /* 10ac244e push 0x10aef538 */
  push32((uint32_t)(0x10aef538u));
  /* 10ac2453 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2459u);
  /* 10ac2459 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac245c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac245e call 0x10ac2d20 */
  push32(0x10ac2463u); f_10ac2d20();
L_10ac2463:;
  /* 10ac2463 mov esi, esp */
  ESI = (ESP);
  /* 10ac2465 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2467 push 0x10aef460 */
  push32((uint32_t)(0x10aef460u));
  /* 10ac246c call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac2472u);
  /* 10ac2472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2477 call 0x10ac2d20 */
  push32(0x10ac247cu); f_10ac2d20();
  /* 10ac247c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac247e jle 0x10ac249e */
  if ((C.zf||C.sf!=C.of)) goto L_10ac249e;
  /* 10ac2480 mov esi, esp */
  ESI = (ESP);
  /* 10ac2482 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2484 push 0x10aef460 */
  push32((uint32_t)(0x10aef460u));
  /* 10ac2489 push 0x10aef540 */
  push32((uint32_t)(0x10aef540u));
  /* 10ac248e call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2494u);
  /* 10ac2494 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2497 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2499 call 0x10ac2d20 */
  push32(0x10ac249eu); f_10ac2d20();
L_10ac249e:;
  /* 10ac249e mov esi, esp */
  ESI = (ESP);
  /* 10ac24a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac24a2 push 0x10aef460 */
  push32((uint32_t)(0x10aef460u));
  /* 10ac24a7 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac24adu);
  /* 10ac24ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac24b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac24b2 call 0x10ac2d20 */
  push32(0x10ac24b7u); f_10ac2d20();
  /* 10ac24b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac24b9 jle 0x10ac24d9 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac24d9;
  /* 10ac24bb mov esi, esp */
  ESI = (ESP);
  /* 10ac24bd push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac24bf push 0x10aef460 */
  push32((uint32_t)(0x10aef460u));
  /* 10ac24c4 push 0x10aef540 */
  push32((uint32_t)(0x10aef540u));
  /* 10ac24c9 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac24cfu);
  /* 10ac24cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac24d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac24d4 call 0x10ac2d20 */
  push32(0x10ac24d9u); f_10ac2d20();
L_10ac24d9:;
  /* 10ac24d9 mov esi, esp */
  ESI = (ESP);
  /* 10ac24db push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac24dd push 0x10aef458 */
  push32((uint32_t)(0x10aef458u));
  /* 10ac24e2 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac24e8u);
  /* 10ac24e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac24eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac24ed call 0x10ac2d20 */
  push32(0x10ac24f2u); f_10ac2d20();
  /* 10ac24f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac24f4 jle 0x10ac2514 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2514;
  /* 10ac24f6 mov esi, esp */
  ESI = (ESP);
  /* 10ac24f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac24fa push 0x10aef458 */
  push32((uint32_t)(0x10aef458u));
  /* 10ac24ff push 0x10aef520 */
  push32((uint32_t)(0x10aef520u));
  /* 10ac2504 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac250au);
  /* 10ac250a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac250d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac250f call 0x10ac2d20 */
  push32(0x10ac2514u); f_10ac2d20();
L_10ac2514:;
  /* 10ac2514 mov esi, esp */
  ESI = (ESP);
  /* 10ac2516 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2518 push 0x10aef458 */
  push32((uint32_t)(0x10aef458u));
  /* 10ac251d call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac2523u);
  /* 10ac2523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2526 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2528 call 0x10ac2d20 */
  push32(0x10ac252du); f_10ac2d20();
  /* 10ac252d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac252f jle 0x10ac254f */
  if ((C.zf||C.sf!=C.of)) goto L_10ac254f;
  /* 10ac2531 mov esi, esp */
  ESI = (ESP);
  /* 10ac2533 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2535 push 0x10aef458 */
  push32((uint32_t)(0x10aef458u));
  /* 10ac253a push 0x10aef520 */
  push32((uint32_t)(0x10aef520u));
  /* 10ac253f call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2545u);
  /* 10ac2545 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac254a call 0x10ac2d20 */
  push32(0x10ac254fu); f_10ac2d20();
L_10ac254f:;
  /* 10ac254f mov esi, esp */
  ESI = (ESP);
  /* 10ac2551 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2553 push 0x10aef470 */
  push32((uint32_t)(0x10aef470u));
  /* 10ac2558 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac255eu);
  /* 10ac255e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2563 call 0x10ac2d20 */
  push32(0x10ac2568u); f_10ac2d20();
  /* 10ac2568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac256a jle 0x10ac258a */
  if ((C.zf||C.sf!=C.of)) goto L_10ac258a;
  /* 10ac256c mov esi, esp */
  ESI = (ESP);
  /* 10ac256e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2570 push 0x10aef470 */
  push32((uint32_t)(0x10aef470u));
  /* 10ac2575 push 0x10aef530 */
  push32((uint32_t)(0x10aef530u));
  /* 10ac257a call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2580u);
  /* 10ac2580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2585 call 0x10ac2d20 */
  push32(0x10ac258au); f_10ac2d20();
L_10ac258a:;
  /* 10ac258a mov esi, esp */
  ESI = (ESP);
  /* 10ac258c push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac258e push 0x10aef470 */
  push32((uint32_t)(0x10aef470u));
  /* 10ac2593 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac2599u);
  /* 10ac2599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac259c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac259e call 0x10ac2d20 */
  push32(0x10ac25a3u); f_10ac2d20();
  /* 10ac25a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac25a5 jle 0x10ac25c5 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac25c5;
  /* 10ac25a7 mov esi, esp */
  ESI = (ESP);
  /* 10ac25a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac25ab push 0x10aef470 */
  push32((uint32_t)(0x10aef470u));
  /* 10ac25b0 push 0x10aef530 */
  push32((uint32_t)(0x10aef530u));
  /* 10ac25b5 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac25bbu);
  /* 10ac25bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac25be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac25c0 call 0x10ac2d20 */
  push32(0x10ac25c5u); f_10ac2d20();
L_10ac25c5:;
  /* 10ac25c5 mov esi, esp */
  ESI = (ESP);
  /* 10ac25c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac25c9 push 0x10aef468 */
  push32((uint32_t)(0x10aef468u));
  /* 10ac25ce call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac25d4u);
  /* 10ac25d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac25d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac25d9 call 0x10ac2d20 */
  push32(0x10ac25deu); f_10ac2d20();
  /* 10ac25de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac25e0 jle 0x10ac2600 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2600;
  /* 10ac25e2 mov esi, esp */
  ESI = (ESP);
  /* 10ac25e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac25e6 push 0x10aef468 */
  push32((uint32_t)(0x10aef468u));
  /* 10ac25eb push 0x10aef508 */
  push32((uint32_t)(0x10aef508u));
  /* 10ac25f0 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac25f6u);
  /* 10ac25f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac25f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac25fb call 0x10ac2d20 */
  push32(0x10ac2600u); f_10ac2d20();
L_10ac2600:;
  /* 10ac2600 mov esi, esp */
  ESI = (ESP);
  /* 10ac2602 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2604 push 0x10aef470 */
  push32((uint32_t)(0x10aef470u));
  /* 10ac2609 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac260fu);
  /* 10ac260f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2612 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2614 call 0x10ac2d20 */
  push32(0x10ac2619u); f_10ac2d20();
  /* 10ac2619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac261b jle 0x10ac263b */
  if ((C.zf||C.sf!=C.of)) goto L_10ac263b;
  /* 10ac261d mov esi, esp */
  ESI = (ESP);
  /* 10ac261f push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2621 push 0x10aef468 */
  push32((uint32_t)(0x10aef468u));
  /* 10ac2626 push 0x10aef508 */
  push32((uint32_t)(0x10aef508u));
  /* 10ac262b call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2631u);
  /* 10ac2631 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2634 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2636 call 0x10ac2d20 */
  push32(0x10ac263bu); f_10ac2d20();
L_10ac263b:;
  /* 10ac263b mov esi, esp */
  ESI = (ESP);
  /* 10ac263d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac263f push 0x10aef480 */
  push32((uint32_t)(0x10aef480u));
  /* 10ac2644 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac264au);
  /* 10ac264a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac264d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac264f call 0x10ac2d20 */
  push32(0x10ac2654u); f_10ac2d20();
  /* 10ac2654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2656 jle 0x10ac2676 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2676;
  /* 10ac2658 mov esi, esp */
  ESI = (ESP);
  /* 10ac265a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac265c push 0x10aef480 */
  push32((uint32_t)(0x10aef480u));
  /* 10ac2661 push 0x10aef518 */
  push32((uint32_t)(0x10aef518u));
  /* 10ac2666 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac266cu);
  /* 10ac266c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac266f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2671 call 0x10ac2d20 */
  push32(0x10ac2676u); f_10ac2d20();
L_10ac2676:;
  /* 10ac2676 mov esi, esp */
  ESI = (ESP);
  /* 10ac2678 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac267a push 0x10aef480 */
  push32((uint32_t)(0x10aef480u));
  /* 10ac267f call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac2685u);
  /* 10ac2685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2688 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac268a call 0x10ac2d20 */
  push32(0x10ac268fu); f_10ac2d20();
  /* 10ac268f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2691 jle 0x10ac26b1 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac26b1;
  /* 10ac2693 mov esi, esp */
  ESI = (ESP);
  /* 10ac2695 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2697 push 0x10aef480 */
  push32((uint32_t)(0x10aef480u));
  /* 10ac269c push 0x10aef518 */
  push32((uint32_t)(0x10aef518u));
  /* 10ac26a1 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac26a7u);
  /* 10ac26a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac26aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac26ac call 0x10ac2d20 */
  push32(0x10ac26b1u); f_10ac2d20();
L_10ac26b1:;
  /* 10ac26b1 mov esi, esp */
  ESI = (ESP);
  /* 10ac26b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac26b5 push 0x10aef478 */
  push32((uint32_t)(0x10aef478u));
  /* 10ac26ba call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac26c0u);
  /* 10ac26c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac26c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac26c5 call 0x10ac2d20 */
  push32(0x10ac26cau); f_10ac2d20();
  /* 10ac26ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac26cc jle 0x10ac26ec */
  if ((C.zf||C.sf!=C.of)) goto L_10ac26ec;
  /* 10ac26ce mov esi, esp */
  ESI = (ESP);
  /* 10ac26d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac26d2 push 0x10aef478 */
  push32((uint32_t)(0x10aef478u));
  /* 10ac26d7 push 0x10aef4f0 */
  push32((uint32_t)(0x10aef4f0u));
  /* 10ac26dc call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac26e2u);
  /* 10ac26e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac26e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac26e7 call 0x10ac2d20 */
  push32(0x10ac26ecu); f_10ac2d20();
L_10ac26ec:;
  /* 10ac26ec mov esi, esp */
  ESI = (ESP);
  /* 10ac26ee push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac26f0 push 0x10aef478 */
  push32((uint32_t)(0x10aef478u));
  /* 10ac26f5 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac26fbu);
  /* 10ac26fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac26fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2700 call 0x10ac2d20 */
  push32(0x10ac2705u); f_10ac2d20();
  /* 10ac2705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2707 jle 0x10ac2727 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2727;
  /* 10ac2709 mov esi, esp */
  ESI = (ESP);
  /* 10ac270b push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac270d push 0x10aef478 */
  push32((uint32_t)(0x10aef478u));
  /* 10ac2712 push 0x10aef4f0 */
  push32((uint32_t)(0x10aef4f0u));
  /* 10ac2717 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac271du);
  /* 10ac271d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2720 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2722 call 0x10ac2d20 */
  push32(0x10ac2727u); f_10ac2d20();
L_10ac2727:;
  /* 10ac2727 mov esi, esp */
  ESI = (ESP);
  /* 10ac2729 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac272b push 0x10aef488 */
  push32((uint32_t)(0x10aef488u));
  /* 10ac2730 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac2736u);
  /* 10ac2736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac273b call 0x10ac2d20 */
  push32(0x10ac2740u); f_10ac2d20();
  /* 10ac2740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2742 jle 0x10ac2762 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2762;
  /* 10ac2744 mov esi, esp */
  ESI = (ESP);
  /* 10ac2746 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2748 push 0x10aef488 */
  push32((uint32_t)(0x10aef488u));
  /* 10ac274d push 0x10aef4f8 */
  push32((uint32_t)(0x10aef4f8u));
  /* 10ac2752 call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2758u);
  /* 10ac2758 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac275b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac275d call 0x10ac2d20 */
  push32(0x10ac2762u); f_10ac2d20();
L_10ac2762:;
  /* 10ac2762 mov esi, esp */
  ESI = (ESP);
  /* 10ac2764 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2766 push 0x10aef488 */
  push32((uint32_t)(0x10aef488u));
  /* 10ac276b call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac2771u);
  /* 10ac2771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2774 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2776 call 0x10ac2d20 */
  push32(0x10ac277bu); f_10ac2d20();
  /* 10ac277b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac277d jle 0x10ac279d */
  if ((C.zf||C.sf!=C.of)) goto L_10ac279d;
  /* 10ac277f mov esi, esp */
  ESI = (ESP);
  /* 10ac2781 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac2783 push 0x10aef488 */
  push32((uint32_t)(0x10aef488u));
  /* 10ac2788 push 0x10aef4f8 */
  push32((uint32_t)(0x10aef4f8u));
  /* 10ac278d call dword ptr [0x10af2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2414))), 0x10ac2793u);
  /* 10ac2793 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2796 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2798 call 0x10ac2d20 */
  push32(0x10ac279du); f_10ac2d20();
L_10ac279d:;
  /* 10ac279d mov esi, esp */
  ESI = (ESP);
  /* 10ac279f push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac27a1 call dword ptr [0x10af23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23f8))), 0x10ac27a7u);
  /* 10ac27a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac27aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac27ac call 0x10ac2d20 */
  push32(0x10ac27b1u); f_10ac2d20();
  /* 10ac27b1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac27b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac27b8 je 0x10ac2804 */
  if (C.zf) goto L_10ac2804;
  /* 10ac27ba mov esi, esp */
  ESI = (ESP);
  /* 10ac27bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac27be push 0x10aef450 */
  push32((uint32_t)(0x10aef450u));
  /* 10ac27c3 call dword ptr [0x10af2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2420))), 0x10ac27c9u);
  /* 10ac27c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac27cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac27ce call 0x10ac2d20 */
  push32(0x10ac27d3u); f_10ac2d20();
  /* 10ac27d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac27d5 jle 0x10ac2804 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2804;
  /* 10ac27d7 mov esi, esp */
  ESI = (ESP);
  /* 10ac27d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac27db push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac27dd call dword ptr [0x10af2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2404))), 0x10ac27e3u);
  /* 10ac27e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac27e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac27e8 call 0x10ac2d20 */
  push32(0x10ac27edu); f_10ac2d20();
  /* 10ac27ed mov esi, esp */
  ESI = (ESP);
  /* 10ac27ef push 0x10aea214 */
  push32((uint32_t)(0x10aea214u));
  /* 10ac27f4 call dword ptr [0x10af2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2400))), 0x10ac27fau);
  /* 10ac27fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac27fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac27ff call 0x10ac2d20 */
  push32(0x10ac2804u); f_10ac2d20();
L_10ac2804:;
  /* 10ac2804 pop edi */
  EDI = (pop32());
  /* 10ac2805 pop esi */
  ESI = (pop32());
  /* 10ac2806 pop ebx */
  EBX = (pop32());
  /* 10ac2807 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac280a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac280c call 0x10ac2d20 */
  push32(0x10ac2811u); f_10ac2d20();
  /* 10ac2811 mov esp, ebp */
  ESP = (EBP);
  /* 10ac2813 pop ebp */
  EBP = (pop32());
  /* 10ac2814 ret  */
  ESPCHK(0x10ac1810u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c20 @ 0x10ac2c20 (63 bytes, 26 insns) */
void f_10ac2c20(void) {
  FTRACE(0x10ac2c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac2c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac2c21 mov ebp, esp */
  EBP = (ESP);
  /* 10ac2c23 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac2c26 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac2c27 push esi */
  push32((uint32_t)(ESI));
  /* 10ac2c28 push edi */
  push32((uint32_t)(EDI));
  /* 10ac2c29 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10ac2c2c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10ac2c31 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ac2c36 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ac2c38 mov esi, esp */
  ESI = (ESP);
  /* 10ac2c3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac2c3d push eax */
  push32((uint32_t)(EAX));
  /* 10ac2c3e call dword ptr [0x10af23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af23fc))), 0x10ac2c44u);
  /* 10ac2c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2c47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2c49 call 0x10ac2d20 */
  push32(0x10ac2c4eu); f_10ac2d20();
  /* 10ac2c4e pop edi */
  EDI = (pop32());
  /* 10ac2c4f pop esi */
  ESI = (pop32());
  /* 10ac2c50 pop ebx */
  EBX = (pop32());
  /* 10ac2c51 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2c54 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2c56 call 0x10ac2d20 */
  push32(0x10ac2c5bu); f_10ac2d20();
  /* 10ac2c5b mov esp, ebp */
  ESP = (EBP);
  /* 10ac2c5d pop ebp */
  EBP = (pop32());
  /* 10ac2c5e ret  */
  ESPCHK(0x10ac2c20u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10ac2d20 (56 bytes, 28 insns) */
void f_10ac2d20(void) {
  FTRACE(0x10ac2d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac2d20 jne 0x10ac2d23 */
  if (!C.zf) goto L_10ac2d23;
  /* 10ac2d22 ret  */
  ESPCHK(0x10ac2d20u, _esp0);
  ESP += 4; return;
L_10ac2d23:;
  /* 10ac2d23 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac2d24 mov ebp, esp */
  EBP = (ESP);
  /* 10ac2d26 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac2d29 push eax */
  push32((uint32_t)(EAX));
  /* 10ac2d2a push edx */
  push32((uint32_t)(EDX));
  /* 10ac2d2b push ebx */
  push32((uint32_t)(EBX));
  /* 10ac2d2c push esi */
  push32((uint32_t)(ESI));
  /* 10ac2d2d push edi */
  push32((uint32_t)(EDI));
  /* 10ac2d2e push 0x10aea270 */
  push32((uint32_t)(0x10aea270u));
  /* 10ac2d33 push 0x10aea26c */
  push32((uint32_t)(0x10aea26cu));
  /* 10ac2d38 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10ac2d3a push 0x10aea25c */
  push32((uint32_t)(0x10aea25cu));
  /* 10ac2d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac2d41 call 0x10ac30f0 */
  push32(0x10ac2d46u); f_10ac30f0();
  /* 10ac2d46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2d49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2d4c jne 0x10ac2d4f */
  if (!C.zf) goto L_10ac2d4f;
  /* 10ac2d4e int3  */
  x86_unimpl("int3 @ 0x10ac2d4e");
L_10ac2d4f:;
  /* 10ac2d4f pop edi */
  EDI = (pop32());
  /* 10ac2d50 pop esi */
  ESI = (pop32());
  /* 10ac2d51 pop ebx */
  EBX = (pop32());
  /* 10ac2d52 pop edx */
  EDX = (pop32());
  /* 10ac2d53 pop eax */
  EAX = (pop32());
  /* 10ac2d54 mov esp, ebp */
  ESP = (EBP);
  /* 10ac2d56 pop ebp */
  EBP = (pop32());
  /* 10ac2d57 ret  */
  ESPCHK(0x10ac2d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d60 @ 0x10ac2d60 (313 bytes, 78 insns) */
void f_10ac2d60(void) {
  FTRACE(0x10ac2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac2d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac2d61 mov ebp, esp */
  EBP = (ESP);
  /* 10ac2d63 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2d67 jne 0x10ac2e27 */
  if (!C.zf) goto L_10ac2e27;
  /* 10ac2d6d call dword ptr [0x10af22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22ec))), 0x10ac2d73u);
  /* 10ac2d73 mov dword ptr [0x10aef5d8], eax */
  w32((uint32_t)(0x10aef5d8), (EAX));
  /* 10ac2d78 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac2d7a call 0x10ac6820 */
  push32(0x10ac2d7fu); f_10ac6820();
  /* 10ac2d7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2d82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2d84 jne 0x10ac2d8d */
  if (!C.zf) goto L_10ac2d8d;
  /* 10ac2d86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac2d88 jmp 0x10ac2e95 */
  goto L_10ac2e95;
L_10ac2d8d:;
  /* 10ac2d8d mov eax, dword ptr [0x10aef5d8] */
  EAX = (r32((uint32_t)(0x10aef5d8)));
  /* 10ac2d92 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ac2d95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac2d9a mov dword ptr [0x10aef5e4], eax */
  w32((uint32_t)(0x10aef5e4), (EAX));
  /* 10ac2d9f mov ecx, dword ptr [0x10aef5d8] */
  ECX = (r32((uint32_t)(0x10aef5d8)));
  /* 10ac2da5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac2dab mov dword ptr [0x10aef5e0], ecx */
  w32((uint32_t)(0x10aef5e0), (ECX));
  /* 10ac2db1 mov edx, dword ptr [0x10aef5e0] */
  EDX = (r32((uint32_t)(0x10aef5e0)));
  /* 10ac2db7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ac2dba add edx, dword ptr [0x10aef5e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aef5e4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2dc0 mov dword ptr [0x10aef5dc], edx */
  w32((uint32_t)(0x10aef5dc), (EDX));
  /* 10ac2dc6 mov eax, dword ptr [0x10aef5d8] */
  EAX = (r32((uint32_t)(0x10aef5d8)));
  /* 10ac2dcb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ac2dce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac2dd3 mov dword ptr [0x10aef5d8], eax */
  w32((uint32_t)(0x10aef5d8), (EAX));
  /* 10ac2dd8 call 0x10ac3990 */
  push32(0x10ac2dddu); f_10ac3990();
  /* 10ac2ddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2ddf jne 0x10ac2ded */
  if (!C.zf) goto L_10ac2ded;
  /* 10ac2de1 call 0x10ac6870 */
  push32(0x10ac2de6u); f_10ac6870();
  /* 10ac2de6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac2de8 jmp 0x10ac2e95 */
  goto L_10ac2e95;
L_10ac2ded:;
  /* 10ac2ded call dword ptr [0x10af22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22e8))), 0x10ac2df3u);
  /* 10ac2df3 mov dword ptr [0x10af112c], eax */
  w32((uint32_t)(0x10af112c), (EAX));
  /* 10ac2df8 call 0x10ac6600 */
  push32(0x10ac2dfdu); f_10ac6600();
  /* 10ac2dfd mov dword ptr [0x10aef5c0], eax */
  w32((uint32_t)(0x10aef5c0), (EAX));
  /* 10ac2e02 call 0x10ac3c40 */
  push32(0x10ac2e07u); f_10ac3c40();
  /* 10ac2e07 call 0x10ac60f0 */
  push32(0x10ac2e0cu); f_10ac60f0();
  /* 10ac2e0c call 0x10ac5fa0 */
  push32(0x10ac2e11u); f_10ac5fa0();
  /* 10ac2e11 call 0x10ac3790 */
  push32(0x10ac2e16u); f_10ac3790();
  /* 10ac2e16 mov ecx, dword ptr [0x10aef5bc] */
  ECX = (r32((uint32_t)(0x10aef5bc)));
  /* 10ac2e1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2e1f mov dword ptr [0x10aef5bc], ecx */
  w32((uint32_t)(0x10aef5bc), (ECX));
  /* 10ac2e25 jmp 0x10ac2e90 */
  goto L_10ac2e90;
L_10ac2e27:;
  /* 10ac2e27 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2e2b jne 0x10ac2e80 */
  if (!C.zf) goto L_10ac2e80;
  /* 10ac2e2d cmp dword ptr [0x10aef5bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2e34 jle 0x10ac2e7a */
  if ((C.zf||C.sf!=C.of)) goto L_10ac2e7a;
  /* 10ac2e36 mov edx, dword ptr [0x10aef5bc] */
  EDX = (r32((uint32_t)(0x10aef5bc)));
  /* 10ac2e3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac2e3f mov dword ptr [0x10aef5bc], edx */
  w32((uint32_t)(0x10aef5bc), (EDX));
  /* 10ac2e45 cmp dword ptr [0x10aef610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2e4c jne 0x10ac2e53 */
  if (!C.zf) goto L_10ac2e53;
  /* 10ac2e4e call 0x10ac3810 */
  push32(0x10ac2e53u); f_10ac3810();
L_10ac2e53:;
  /* 10ac2e53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ac2e55 call 0x10ac5540 */
  push32(0x10ac2e5au); f_10ac5540();
  /* 10ac2e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2e5d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac2e60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2e62 je 0x10ac2e69 */
  if (C.zf) goto L_10ac2e69;
  /* 10ac2e64 call 0x10ac5e50 */
  push32(0x10ac2e69u); f_10ac5e50();
L_10ac2e69:;
  /* 10ac2e69 call 0x10ac3f70 */
  push32(0x10ac2e6eu); f_10ac3f70();
  /* 10ac2e6e call 0x10ac3a20 */
  push32(0x10ac2e73u); f_10ac3a20();
  /* 10ac2e73 call 0x10ac6870 */
  push32(0x10ac2e78u); f_10ac6870();
  /* 10ac2e78 jmp 0x10ac2e7e */
  goto L_10ac2e7e;
L_10ac2e7a:;
  /* 10ac2e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac2e7c jmp 0x10ac2e95 */
  goto L_10ac2e95;
L_10ac2e7e:;
  /* 10ac2e7e jmp 0x10ac2e90 */
  goto L_10ac2e90;
L_10ac2e80:;
  /* 10ac2e80 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2e84 jne 0x10ac2e90 */
  if (!C.zf) goto L_10ac2e90;
  /* 10ac2e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2e88 call 0x10ac3b10 */
  push32(0x10ac2e8du); f_10ac3b10();
  /* 10ac2e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac2e90:;
  /* 10ac2e90 mov eax, 1 */
  EAX = (0x1u);
L_10ac2e95:;
  /* 10ac2e95 pop ebp */
  EBP = (pop32());
  /* 10ac2e96 ret 0xc */
  ESPCHK(0x10ac2d60u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10ac2ea0 (243 bytes, 86 insns) */
void f_10ac2ea0(void) {
  FTRACE(0x10ac2ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac2ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac2ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac2ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac2ea4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ac2eab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2eaf jne 0x10ac2ec1 */
  if (!C.zf) goto L_10ac2ec1;
  /* 10ac2eb1 cmp dword ptr [0x10aef5bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2eb8 jne 0x10ac2ec1 */
  if (!C.zf) goto L_10ac2ec1;
  /* 10ac2eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac2ebc jmp 0x10ac2f8d */
  goto L_10ac2f8d;
L_10ac2ec1:;
  /* 10ac2ec1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2ec5 je 0x10ac2ecd */
  if (C.zf) goto L_10ac2ecd;
  /* 10ac2ec7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2ecb jne 0x10ac2f0f */
  if (!C.zf) goto L_10ac2f0f;
L_10ac2ecd:;
  /* 10ac2ecd cmp dword ptr [0x10af113c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af113c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2ed4 je 0x10ac2eeb */
  if (C.zf) goto L_10ac2eeb;
  /* 10ac2ed6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac2ed9 push eax */
  push32((uint32_t)(EAX));
  /* 10ac2eda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac2edd push ecx */
  push32((uint32_t)(ECX));
  /* 10ac2ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac2ee1 push edx */
  push32((uint32_t)(EDX));
  /* 10ac2ee2 call dword ptr [0x10af113c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af113c))), 0x10ac2ee8u);
  /* 10ac2ee8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac2eeb:;
  /* 10ac2eeb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2eef je 0x10ac2f05 */
  if (C.zf) goto L_10ac2f05;
  /* 10ac2ef1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac2ef4 push eax */
  push32((uint32_t)(EAX));
  /* 10ac2ef5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac2ef8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac2ef9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac2efc push edx */
  push32((uint32_t)(EDX));
  /* 10ac2efd call 0x10ac2d60 */
  push32(0x10ac2f02u); f_10ac2d60();
  /* 10ac2f02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac2f05:;
  /* 10ac2f05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2f09 jne 0x10ac2f0f */
  if (!C.zf) goto L_10ac2f0f;
  /* 10ac2f0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac2f0d jmp 0x10ac2f8d */
  goto L_10ac2f8d;
L_10ac2f0f:;
  /* 10ac2f0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac2f12 push eax */
  push32((uint32_t)(EAX));
  /* 10ac2f13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac2f16 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac2f17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac2f1a push edx */
  push32((uint32_t)(EDX));
  /* 10ac2f1b call 0x10ac100f */
  push32(0x10ac2f20u); f_10ac100f();
  /* 10ac2f20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac2f23 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2f27 jne 0x10ac2f3e */
  if (!C.zf) goto L_10ac2f3e;
  /* 10ac2f29 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2f2d jne 0x10ac2f3e */
  if (!C.zf) goto L_10ac2f3e;
  /* 10ac2f2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac2f32 push eax */
  push32((uint32_t)(EAX));
  /* 10ac2f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac2f35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac2f38 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac2f39 call 0x10ac2d60 */
  push32(0x10ac2f3eu); f_10ac2d60();
L_10ac2f3e:;
  /* 10ac2f3e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2f42 je 0x10ac2f4a */
  if (C.zf) goto L_10ac2f4a;
  /* 10ac2f44 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2f48 jne 0x10ac2f8a */
  if (!C.zf) goto L_10ac2f8a;
L_10ac2f4a:;
  /* 10ac2f4a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac2f4d push edx */
  push32((uint32_t)(EDX));
  /* 10ac2f4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac2f51 push eax */
  push32((uint32_t)(EAX));
  /* 10ac2f52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac2f55 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac2f56 call 0x10ac2d60 */
  push32(0x10ac2f5bu); f_10ac2d60();
  /* 10ac2f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac2f5d jne 0x10ac2f66 */
  if (!C.zf) goto L_10ac2f66;
  /* 10ac2f5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ac2f66:;
  /* 10ac2f66 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2f6a je 0x10ac2f8a */
  if (C.zf) goto L_10ac2f8a;
  /* 10ac2f6c cmp dword ptr [0x10af113c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af113c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2f73 je 0x10ac2f8a */
  if (C.zf) goto L_10ac2f8a;
  /* 10ac2f75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac2f78 push edx */
  push32((uint32_t)(EDX));
  /* 10ac2f79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac2f7c push eax */
  push32((uint32_t)(EAX));
  /* 10ac2f7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac2f80 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac2f81 call dword ptr [0x10af113c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af113c))), 0x10ac2f87u);
  /* 10ac2f87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac2f8a:;
  /* 10ac2f8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ac2f8d:;
  /* 10ac2f8d mov esp, ebp */
  ESP = (EBP);
  /* 10ac2f8f pop ebp */
  EBP = (pop32());
  /* 10ac2f90 ret 0xc */
  ESPCHK(0x10ac2ea0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10ac2fa0 (58 bytes, 18 insns) */
void f_10ac2fa0(void) {
  FTRACE(0x10ac2fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac2fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac2fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac2fa3 cmp dword ptr [0x10aef5c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2faa je 0x10ac2fbe */
  if (C.zf) goto L_10ac2fbe;
  /* 10ac2fac cmp dword ptr [0x10aef5c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2fb3 jne 0x10ac2fc3 */
  if (!C.zf) goto L_10ac2fc3;
  /* 10ac2fb5 cmp dword ptr [0x10aef5cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2fbc jne 0x10ac2fc3 */
  if (!C.zf) goto L_10ac2fc3;
L_10ac2fbe:;
  /* 10ac2fbe call 0x10ac6910 */
  push32(0x10ac2fc3u); f_10ac6910();
L_10ac2fc3:;
  /* 10ac2fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac2fc6 push eax */
  push32((uint32_t)(EAX));
  /* 10ac2fc7 call 0x10ac6960 */
  push32(0x10ac2fccu); f_10ac6960();
  /* 10ac2fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2fcf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10ac2fd4 call dword ptr [0x10aeda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aeda30))), 0x10ac2fdau);
  /* 10ac2fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac2fdd pop ebp */
  EBP = (pop32());
  /* 10ac2fde ret  */
  ESPCHK(0x10ac2fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fe0 @ 0x10ac2fe0 (11 bytes, 5 insns) */
void f_10ac2fe0(void) {
  FTRACE(0x10ac2fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac2fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac2fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac2fe3 call dword ptr [0x10af22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22f0))), 0x10ac2fe9u);
  /* 10ac2fe9 pop ebp */
  EBP = (pop32());
  /* 10ac2fea ret  */
  ESPCHK(0x10ac2fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ff0 @ 0x10ac2ff0 (87 bytes, 30 insns) */
void f_10ac2ff0(void) {
  FTRACE(0x10ac2ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac2ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac2ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac2ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac2ff4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2ff8 jl 0x10ac3000 */
  if ((C.sf!=C.of)) goto L_10ac3000;
  /* 10ac2ffa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac2ffe jl 0x10ac3005 */
  if ((C.sf!=C.of)) goto L_10ac3005;
L_10ac3000:;
  /* 10ac3000 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac3003 jmp 0x10ac3043 */
  goto L_10ac3043;
L_10ac3005:;
  /* 10ac3005 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3009 jne 0x10ac3017 */
  if (!C.zf) goto L_10ac3017;
  /* 10ac300b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac300e mov eax, dword ptr [eax*4 + 0x10aeda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10aeda38)));
  /* 10ac3015 jmp 0x10ac3043 */
  goto L_10ac3043;
L_10ac3017:;
  /* 10ac3017 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac301a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac301d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac301f je 0x10ac3026 */
  if (C.zf) goto L_10ac3026;
  /* 10ac3021 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac3024 jmp 0x10ac3043 */
  goto L_10ac3043;
L_10ac3026:;
  /* 10ac3026 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3029 mov eax, dword ptr [edx*4 + 0x10aeda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aeda38)));
  /* 10ac3030 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac3033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3036 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac3039 mov dword ptr [ecx*4 + 0x10aeda38], edx */
  w32((uint32_t)(ECX*4 + 0x10aeda38), (EDX));
  /* 10ac3040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ac3043:;
  /* 10ac3043 mov esp, ebp */
  ESP = (EBP);
  /* 10ac3045 pop ebp */
  EBP = (pop32());
  /* 10ac3046 ret  */
  ESPCHK(0x10ac2ff0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10ac3050 (126 bytes, 38 insns) */
void f_10ac3050(void) {
  FTRACE(0x10ac3050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3050 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3051 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3053 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3054 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3058 jl 0x10ac3060 */
  if ((C.sf!=C.of)) goto L_10ac3060;
  /* 10ac305a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac305e jl 0x10ac3067 */
  if ((C.sf!=C.of)) goto L_10ac3067;
L_10ac3060:;
  /* 10ac3060 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10ac3065 jmp 0x10ac30ca */
  goto L_10ac30ca;
L_10ac3067:;
  /* 10ac3067 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac306b jne 0x10ac3079 */
  if (!C.zf) goto L_10ac3079;
  /* 10ac306d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3070 mov eax, dword ptr [eax*4 + 0x10aeda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10aeda44)));
  /* 10ac3077 jmp 0x10ac30ca */
  goto L_10ac30ca;
L_10ac3079:;
  /* 10ac3079 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac307c mov edx, dword ptr [ecx*4 + 0x10aeda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeda44)));
  /* 10ac3083 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac3086 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac308a jne 0x10ac30a0 */
  if (!C.zf) goto L_10ac30a0;
  /* 10ac308c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10ac308e call dword ptr [0x10af22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22f4))), 0x10ac3094u);
  /* 10ac3094 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3097 mov dword ptr [ecx*4 + 0x10aeda44], eax */
  w32((uint32_t)(ECX*4 + 0x10aeda44), (EAX));
  /* 10ac309e jmp 0x10ac30c7 */
  goto L_10ac30c7;
L_10ac30a0:;
  /* 10ac30a0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac30a4 jne 0x10ac30ba */
  if (!C.zf) goto L_10ac30ba;
  /* 10ac30a6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10ac30a8 call dword ptr [0x10af22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22f4))), 0x10ac30aeu);
  /* 10ac30ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac30b1 mov dword ptr [edx*4 + 0x10aeda44], eax */
  w32((uint32_t)(EDX*4 + 0x10aeda44), (EAX));
  /* 10ac30b8 jmp 0x10ac30c7 */
  goto L_10ac30c7;
L_10ac30ba:;
  /* 10ac30ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac30bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac30c0 mov dword ptr [eax*4 + 0x10aeda44], ecx */
  w32((uint32_t)(EAX*4 + 0x10aeda44), (ECX));
L_10ac30c7:;
  /* 10ac30c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ac30ca:;
  /* 10ac30ca mov esp, ebp */
  ESP = (EBP);
  /* 10ac30cc pop ebp */
  EBP = (pop32());
  /* 10ac30cd ret  */
  ESPCHK(0x10ac3050u, _esp0);
  ESP += 4; return;
}

/* FUN_100030d0 @ 0x10ac30d0 (28 bytes, 11 insns) */
void f_10ac30d0(void) {
  FTRACE(0x10ac30d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac30d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac30d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac30d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac30d4 mov eax, dword ptr [0x10af1120] */
  EAX = (r32((uint32_t)(0x10af1120)));
  /* 10ac30d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac30dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac30df mov dword ptr [0x10af1120], ecx */
  w32((uint32_t)(0x10af1120), (ECX));
  /* 10ac30e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac30e8 mov esp, ebp */
  ESP = (EBP);
  /* 10ac30ea pop ebp */
  EBP = (pop32());
  /* 10ac30eb ret  */
  ESPCHK(0x10ac30d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030f0 @ 0x10ac30f0 (912 bytes, 248 insns) */
void f_10ac30f0(void) {
  FTRACE(0x10ac30f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac30f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac30f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac30f3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10ac30f8 call 0x10ac71d0 */
  push32(0x10ac30fdu); f_10ac71d0();
  /* 10ac30fd push edi */
  push32((uint32_t)(EDI));
  /* 10ac30fe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10ac3105 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10ac310a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac310c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10ac3112 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ac3114 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10ac3116 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10ac3117 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10ac311e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10ac3123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac3125 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10ac312b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ac312d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10ac312f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10ac3130 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10ac3137 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10ac313c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac313e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10ac3144 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ac3146 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10ac3148 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10ac3149 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10ac314c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10ac3152 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3156 jl 0x10ac315e */
  if ((C.sf!=C.of)) goto L_10ac315e;
  /* 10ac3158 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac315c jl 0x10ac3166 */
  if ((C.sf!=C.of)) goto L_10ac3166;
L_10ac315e:;
  /* 10ac315e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac3161 jmp 0x10ac347b */
  goto L_10ac347b;
L_10ac3166:;
  /* 10ac3166 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac316a jne 0x10ac3210 */
  if (!C.zf) goto L_10ac3210;
  /* 10ac3170 push 0x10aeda34 */
  push32((uint32_t)(0x10aeda34u));
  /* 10ac3175 call dword ptr [0x10af230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af230c))), 0x10ac317bu);
  /* 10ac317b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac317d jle 0x10ac3210 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac3210;
  /* 10ac3183 cmp dword ptr [0x10aef5d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac318a jne 0x10ac31ce */
  if (!C.zf) goto L_10ac31ce;
  /* 10ac318c push 0x10aea418 */
  push32((uint32_t)(0x10aea418u));
  /* 10ac3191 call dword ptr [0x10af2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2308))), 0x10ac3197u);
  /* 10ac3197 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10ac319d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac31a4 je 0x10ac31c6 */
  if (C.zf) goto L_10ac31c6;
  /* 10ac31a6 push 0x10aea40c */
  push32((uint32_t)(0x10aea40cu));
  /* 10ac31ab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10ac31b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac31b2 call dword ptr [0x10af2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2304))), 0x10ac31b8u);
  /* 10ac31b8 mov dword ptr [0x10aef5d0], eax */
  w32((uint32_t)(0x10aef5d0), (EAX));
  /* 10ac31bd cmp dword ptr [0x10aef5d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac31c4 jne 0x10ac31ce */
  if (!C.zf) goto L_10ac31ce;
L_10ac31c6:;
  /* 10ac31c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac31c9 jmp 0x10ac347b */
  goto L_10ac347b;
L_10ac31ce:;
  /* 10ac31ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac31d1 push edx */
  push32((uint32_t)(EDX));
  /* 10ac31d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac31d5 push eax */
  push32((uint32_t)(EAX));
  /* 10ac31d6 push 0x10aea3d8 */
  push32((uint32_t)(0x10aea3d8u));
  /* 10ac31db lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10ac31e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac31e2 call dword ptr [0x10aef5d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef5d0))), 0x10ac31e8u);
  /* 10ac31e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac31eb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10ac31f1 push edx */
  push32((uint32_t)(EDX));
  /* 10ac31f2 call dword ptr [0x10af2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2300))), 0x10ac31f8u);
  /* 10ac31f8 push 0x10aeda34 */
  push32((uint32_t)(0x10aeda34u));
  /* 10ac31fd call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10ac3203u);
  /* 10ac3203 call 0x10ac2fe0 */
  push32(0x10ac3208u); f_10ac2fe0();
  /* 10ac3208 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac320b jmp 0x10ac347b */
  goto L_10ac347b;
L_10ac3210:;
  /* 10ac3210 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3214 je 0x10ac324d */
  if (C.zf) goto L_10ac324d;
  /* 10ac3216 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10ac321c push eax */
  push32((uint32_t)(EAX));
  /* 10ac321d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac3220 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3221 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10ac3226 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10ac322c push edx */
  push32((uint32_t)(EDX));
  /* 10ac322d call 0x10ac70d0 */
  push32(0x10ac3232u); f_10ac70d0();
  /* 10ac3232 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac3237 jge 0x10ac324d */
  if ((C.sf==C.of)) goto L_10ac324d;
  /* 10ac3239 push 0x10aea3ac */
  push32((uint32_t)(0x10aea3acu));
  /* 10ac323e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10ac3244 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3245 call 0x10ac6fe0 */
  push32(0x10ac324au); f_10ac6fe0();
  /* 10ac324a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac324d:;
  /* 10ac324d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3251 jne 0x10ac3285 */
  if (!C.zf) goto L_10ac3285;
  /* 10ac3253 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3257 je 0x10ac3265 */
  if (C.zf) goto L_10ac3265;
  /* 10ac3259 mov dword ptr [ebp - 0x3028], 0x10aea398 */
  w32((uint32_t)(EBP + -0x3028), (0x10aea398u));
  /* 10ac3263 jmp 0x10ac326f */
  goto L_10ac326f;
L_10ac3265:;
  /* 10ac3265 mov dword ptr [ebp - 0x3028], 0x10aea384 */
  w32((uint32_t)(EBP + -0x3028), (0x10aea384u));
L_10ac326f:;
  /* 10ac326f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10ac3275 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3276 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10ac327c push edx */
  push32((uint32_t)(EDX));
  /* 10ac327d call 0x10ac6fe0 */
  push32(0x10ac3282u); f_10ac6fe0();
  /* 10ac3282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3285:;
  /* 10ac3285 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10ac328b push eax */
  push32((uint32_t)(EAX));
  /* 10ac328c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10ac3292 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3293 call 0x10ac6ff0 */
  push32(0x10ac3298u); f_10ac6ff0();
  /* 10ac3298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac329b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac329f jne 0x10ac32da */
  if (!C.zf) goto L_10ac32da;
  /* 10ac32a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac32a4 mov eax, dword ptr [edx*4 + 0x10aeda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aeda38)));
  /* 10ac32ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac32ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac32b0 je 0x10ac32c6 */
  if (C.zf) goto L_10ac32c6;
  /* 10ac32b2 push 0x10aea380 */
  push32((uint32_t)(0x10aea380u));
  /* 10ac32b7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10ac32bd push ecx */
  push32((uint32_t)(ECX));
  /* 10ac32be call 0x10ac6ff0 */
  push32(0x10ac32c3u); f_10ac6ff0();
  /* 10ac32c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac32c6:;
  /* 10ac32c6 push 0x10aea37c */
  push32((uint32_t)(0x10aea37cu));
  /* 10ac32cb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10ac32d1 push edx */
  push32((uint32_t)(EDX));
  /* 10ac32d2 call 0x10ac6ff0 */
  push32(0x10ac32d7u); f_10ac6ff0();
  /* 10ac32d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac32da:;
  /* 10ac32da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac32de je 0x10ac3322 */
  if (C.zf) goto L_10ac3322;
  /* 10ac32e0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10ac32e6 push eax */
  push32((uint32_t)(EAX));
  /* 10ac32e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac32ea push ecx */
  push32((uint32_t)(ECX));
  /* 10ac32eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac32ee push edx */
  push32((uint32_t)(EDX));
  /* 10ac32ef push 0x10aea370 */
  push32((uint32_t)(0x10aea370u));
  /* 10ac32f4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10ac32f9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10ac32ff push eax */
  push32((uint32_t)(EAX));
  /* 10ac3300 call 0x10ac6ee0 */
  push32(0x10ac3305u); f_10ac6ee0();
  /* 10ac3305 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac330a jge 0x10ac3320 */
  if ((C.sf==C.of)) goto L_10ac3320;
  /* 10ac330c push 0x10aea3ac */
  push32((uint32_t)(0x10aea3acu));
  /* 10ac3311 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10ac3317 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3318 call 0x10ac6fe0 */
  push32(0x10ac331du); f_10ac6fe0();
  /* 10ac331d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3320:;
  /* 10ac3320 jmp 0x10ac3338 */
  goto L_10ac3338;
L_10ac3322:;
  /* 10ac3322 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10ac3328 push edx */
  push32((uint32_t)(EDX));
  /* 10ac3329 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10ac332f push eax */
  push32((uint32_t)(EAX));
  /* 10ac3330 call 0x10ac6fe0 */
  push32(0x10ac3335u); f_10ac6fe0();
  /* 10ac3335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3338:;
  /* 10ac3338 cmp dword ptr [0x10af1120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af1120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac333f je 0x10ac337c */
  if (C.zf) goto L_10ac337c;
  /* 10ac3341 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10ac3347 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3348 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10ac334e push edx */
  push32((uint32_t)(EDX));
  /* 10ac334f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3352 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3353 call dword ptr [0x10af1120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af1120))), 0x10ac3359u);
  /* 10ac3359 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac335c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac335e je 0x10ac337c */
  if (C.zf) goto L_10ac337c;
  /* 10ac3360 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3364 jne 0x10ac3371 */
  if (!C.zf) goto L_10ac3371;
  /* 10ac3366 push 0x10aeda34 */
  push32((uint32_t)(0x10aeda34u));
  /* 10ac336b call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10ac3371u);
L_10ac3371:;
  /* 10ac3371 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10ac3377 jmp 0x10ac347b */
  goto L_10ac347b;
L_10ac337c:;
  /* 10ac337c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac337f mov edx, dword ptr [ecx*4 + 0x10aeda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeda38)));
  /* 10ac3386 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac3389 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac338b je 0x10ac33cb */
  if (C.zf) goto L_10ac33cb;
  /* 10ac338d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3390 cmp dword ptr [eax*4 + 0x10aeda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10aeda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3398 je 0x10ac33cb */
  if (C.zf) goto L_10ac33cb;
  /* 10ac339a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac339c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10ac33a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac33a3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10ac33a9 push edx */
  push32((uint32_t)(EDX));
  /* 10ac33aa call 0x10ac6e60 */
  push32(0x10ac33afu); f_10ac6e60();
  /* 10ac33af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac33b2 push eax */
  push32((uint32_t)(EAX));
  /* 10ac33b3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10ac33b9 push eax */
  push32((uint32_t)(EAX));
  /* 10ac33ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac33bd mov edx, dword ptr [ecx*4 + 0x10aeda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeda44)));
  /* 10ac33c4 push edx */
  push32((uint32_t)(EDX));
  /* 10ac33c5 call dword ptr [0x10af22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22f8))), 0x10ac33cbu);
L_10ac33cb:;
  /* 10ac33cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac33ce mov ecx, dword ptr [eax*4 + 0x10aeda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aeda38)));
  /* 10ac33d5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac33d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac33da je 0x10ac33e9 */
  if (C.zf) goto L_10ac33e9;
  /* 10ac33dc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10ac33e2 push edx */
  push32((uint32_t)(EDX));
  /* 10ac33e3 call dword ptr [0x10af2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2300))), 0x10ac33e9u);
L_10ac33e9:;
  /* 10ac33e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac33ec mov ecx, dword ptr [eax*4 + 0x10aeda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aeda38)));
  /* 10ac33f3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac33f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac33f8 je 0x10ac3468 */
  if (C.zf) goto L_10ac3468;
  /* 10ac33fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac33fe je 0x10ac341d */
  if (C.zf) goto L_10ac341d;
  /* 10ac3400 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ac3402 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10ac3408 push edx */
  push32((uint32_t)(EDX));
  /* 10ac3409 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac340c push eax */
  push32((uint32_t)(EAX));
  /* 10ac340d call 0x10ac6b70 */
  push32(0x10ac3412u); f_10ac6b70();
  /* 10ac3412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3415 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10ac341b jmp 0x10ac3427 */
  goto L_10ac3427;
L_10ac341d:;
  /* 10ac341d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10ac3427:;
  /* 10ac3427 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10ac342d push ecx */
  push32((uint32_t)(ECX));
  /* 10ac342e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac3431 push edx */
  push32((uint32_t)(EDX));
  /* 10ac3432 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10ac3438 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3439 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac343c push ecx */
  push32((uint32_t)(ECX));
  /* 10ac343d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3440 push edx */
  push32((uint32_t)(EDX));
  /* 10ac3441 call 0x10ac3480 */
  push32(0x10ac3446u); f_10ac3480();
  /* 10ac3446 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3449 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10ac344f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3453 jne 0x10ac3460 */
  if (!C.zf) goto L_10ac3460;
  /* 10ac3455 push 0x10aeda34 */
  push32((uint32_t)(0x10aeda34u));
  /* 10ac345a call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10ac3460u);
L_10ac3460:;
  /* 10ac3460 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10ac3466 jmp 0x10ac347b */
  goto L_10ac347b;
L_10ac3468:;
  /* 10ac3468 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac346c jne 0x10ac3479 */
  if (!C.zf) goto L_10ac3479;
  /* 10ac346e push 0x10aeda34 */
  push32((uint32_t)(0x10aeda34u));
  /* 10ac3473 call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10ac3479u);
L_10ac3479:;
  /* 10ac3479 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac347b:;
  /* 10ac347b pop edi */
  EDI = (pop32());
  /* 10ac347c mov esp, ebp */
  ESP = (EBP);
  /* 10ac347e pop ebp */
  EBP = (pop32());
  /* 10ac347f ret  */
  ESPCHK(0x10ac30f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003480 @ 0x10ac3480 (780 bytes, 197 insns) */
void f_10ac3480(void) {
  FTRACE(0x10ac3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3480 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3481 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3483 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10ac3488 call 0x10ac71d0 */
  push32(0x10ac348du); f_10ac71d0();
L_10ac348d:;
  /* 10ac348d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3491 jne 0x10ac34b8 */
  if (!C.zf) goto L_10ac34b8;
  /* 10ac3493 push 0x10aea568 */
  push32((uint32_t)(0x10aea568u));
  /* 10ac3498 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac349a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10ac349f push 0x10aea55c */
  push32((uint32_t)(0x10aea55cu));
  /* 10ac34a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac34a6 call 0x10ac30f0 */
  push32(0x10ac34abu); f_10ac30f0();
  /* 10ac34ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac34ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac34b1 jne 0x10ac34b8 */
  if (!C.zf) goto L_10ac34b8;
  /* 10ac34b3 call 0x10ac2fe0 */
  push32(0x10ac34b8u); f_10ac2fe0();
L_10ac34b8:;
  /* 10ac34b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac34ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac34bc jne 0x10ac348d */
  if (!C.zf) goto L_10ac348d;
  /* 10ac34be push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10ac34c3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10ac34c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac34ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac34cc call dword ptr [0x10af2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2310))), 0x10ac34d2u);
  /* 10ac34d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac34d4 jne 0x10ac34ea */
  if (!C.zf) goto L_10ac34ea;
  /* 10ac34d6 push 0x10aea544 */
  push32((uint32_t)(0x10aea544u));
  /* 10ac34db lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10ac34e1 push edx */
  push32((uint32_t)(EDX));
  /* 10ac34e2 call 0x10ac6fe0 */
  push32(0x10ac34e7u); f_10ac6fe0();
  /* 10ac34e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac34ea:;
  /* 10ac34ea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10ac34f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac34f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac34f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac34f7 call 0x10ac6e60 */
  push32(0x10ac34fcu); f_10ac6e60();
  /* 10ac34fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac34ff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3502 jbe 0x10ac352d */
  if ((C.cf||C.zf)) goto L_10ac352d;
  /* 10ac3504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3507 push edx */
  push32((uint32_t)(EDX));
  /* 10ac3508 call 0x10ac6e60 */
  push32(0x10ac350du); f_10ac6e60();
  /* 10ac350d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3510 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3513 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10ac3517 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac351a push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac351c push 0x10aea540 */
  push32((uint32_t)(0x10aea540u));
  /* 10ac3521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3524 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3525 call 0x10ac7850 */
  push32(0x10ac352au); f_10ac7850();
  /* 10ac352a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac352d:;
  /* 10ac352d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac3530 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10ac3536 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac353d je 0x10ac3588 */
  if (C.zf) goto L_10ac3588;
  /* 10ac353f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10ac3545 push edx */
  push32((uint32_t)(EDX));
  /* 10ac3546 call 0x10ac6e60 */
  push32(0x10ac354bu); f_10ac6e60();
  /* 10ac354b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac354e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3551 jbe 0x10ac3588 */
  if ((C.cf||C.zf)) goto L_10ac3588;
  /* 10ac3553 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10ac3559 push eax */
  push32((uint32_t)(EAX));
  /* 10ac355a call 0x10ac6e60 */
  push32(0x10ac355fu); f_10ac6e60();
  /* 10ac355f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3562 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10ac3568 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10ac356c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10ac3572 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac3574 push 0x10aea540 */
  push32((uint32_t)(0x10aea540u));
  /* 10ac3579 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10ac357f push eax */
  push32((uint32_t)(EAX));
  /* 10ac3580 call 0x10ac7850 */
  push32(0x10ac3585u); f_10ac7850();
  /* 10ac3585 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3588:;
  /* 10ac3588 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac358c jne 0x10ac359a */
  if (!C.zf) goto L_10ac359a;
  /* 10ac358e mov dword ptr [ebp - 0x1114], 0x10aea4cc */
  w32((uint32_t)(EBP + -0x1114), (0x10aea4ccu));
  /* 10ac3598 jmp 0x10ac35a4 */
  goto L_10ac35a4;
L_10ac359a:;
  /* 10ac359a mov dword ptr [ebp - 0x1114], 0x10aea26c */
  w32((uint32_t)(EBP + -0x1114), (0x10aea26cu));
L_10ac35a4:;
  /* 10ac35a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac35a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ac35aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac35ac je 0x10ac35b9 */
  if (C.zf) goto L_10ac35b9;
  /* 10ac35ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac35b1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10ac35b7 jmp 0x10ac35c3 */
  goto L_10ac35c3;
L_10ac35b9:;
  /* 10ac35b9 mov dword ptr [ebp - 0x1118], 0x10aea26c */
  w32((uint32_t)(EBP + -0x1118), (0x10aea26cu));
L_10ac35c3:;
  /* 10ac35c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac35c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ac35c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac35cb je 0x10ac35df */
  if (C.zf) goto L_10ac35df;
  /* 10ac35cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac35d1 jne 0x10ac35df */
  if (!C.zf) goto L_10ac35df;
  /* 10ac35d3 mov dword ptr [ebp - 0x111c], 0x10aea4bc */
  w32((uint32_t)(EBP + -0x111c), (0x10aea4bcu));
  /* 10ac35dd jmp 0x10ac35e9 */
  goto L_10ac35e9;
L_10ac35df:;
  /* 10ac35df mov dword ptr [ebp - 0x111c], 0x10aea26c */
  w32((uint32_t)(EBP + -0x111c), (0x10aea26cu));
L_10ac35e9:;
  /* 10ac35e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac35ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac35ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac35f1 je 0x10ac35ff */
  if (C.zf) goto L_10ac35ff;
  /* 10ac35f3 mov dword ptr [ebp - 0x1120], 0x10aea4b8 */
  w32((uint32_t)(EBP + -0x1120), (0x10aea4b8u));
  /* 10ac35fd jmp 0x10ac3609 */
  goto L_10ac3609;
L_10ac35ff:;
  /* 10ac35ff mov dword ptr [ebp - 0x1120], 0x10aea26c */
  w32((uint32_t)(EBP + -0x1120), (0x10aea26cu));
L_10ac3609:;
  /* 10ac3609 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac360d je 0x10ac361a */
  if (C.zf) goto L_10ac361a;
  /* 10ac360f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac3612 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10ac3618 jmp 0x10ac3624 */
  goto L_10ac3624;
L_10ac361a:;
  /* 10ac361a mov dword ptr [ebp - 0x1124], 0x10aea26c */
  w32((uint32_t)(EBP + -0x1124), (0x10aea26cu));
L_10ac3624:;
  /* 10ac3624 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3628 je 0x10ac3636 */
  if (C.zf) goto L_10ac3636;
  /* 10ac362a mov dword ptr [ebp - 0x1128], 0x10aea4b0 */
  w32((uint32_t)(EBP + -0x1128), (0x10aea4b0u));
  /* 10ac3634 jmp 0x10ac3640 */
  goto L_10ac3640;
L_10ac3636:;
  /* 10ac3636 mov dword ptr [ebp - 0x1128], 0x10aea26c */
  w32((uint32_t)(EBP + -0x1128), (0x10aea26cu));
L_10ac3640:;
  /* 10ac3640 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3644 je 0x10ac3651 */
  if (C.zf) goto L_10ac3651;
  /* 10ac3646 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac3649 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10ac364f jmp 0x10ac365b */
  goto L_10ac365b;
L_10ac3651:;
  /* 10ac3651 mov dword ptr [ebp - 0x112c], 0x10aea26c */
  w32((uint32_t)(EBP + -0x112c), (0x10aea26cu));
L_10ac365b:;
  /* 10ac365b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac365f je 0x10ac366d */
  if (C.zf) goto L_10ac366d;
  /* 10ac3661 mov dword ptr [ebp - 0x1130], 0x10aea4a8 */
  w32((uint32_t)(EBP + -0x1130), (0x10aea4a8u));
  /* 10ac366b jmp 0x10ac3677 */
  goto L_10ac3677;
L_10ac366d:;
  /* 10ac366d mov dword ptr [ebp - 0x1130], 0x10aea26c */
  w32((uint32_t)(EBP + -0x1130), (0x10aea26cu));
L_10ac3677:;
  /* 10ac3677 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac367e je 0x10ac368e */
  if (C.zf) goto L_10ac368e;
  /* 10ac3680 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10ac3686 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10ac368c jmp 0x10ac3698 */
  goto L_10ac3698;
L_10ac368e:;
  /* 10ac368e mov dword ptr [ebp - 0x1134], 0x10aea26c */
  w32((uint32_t)(EBP + -0x1134), (0x10aea26cu));
L_10ac3698:;
  /* 10ac3698 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac369f je 0x10ac36ad */
  if (C.zf) goto L_10ac36ad;
  /* 10ac36a1 mov dword ptr [ebp - 0x1138], 0x10aea49c */
  w32((uint32_t)(EBP + -0x1138), (0x10aea49cu));
  /* 10ac36ab jmp 0x10ac36b7 */
  goto L_10ac36b7;
L_10ac36ad:;
  /* 10ac36ad mov dword ptr [ebp - 0x1138], 0x10aea26c */
  w32((uint32_t)(EBP + -0x1138), (0x10aea26cu));
L_10ac36b7:;
  /* 10ac36b7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10ac36bd push edx */
  push32((uint32_t)(EDX));
  /* 10ac36be mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10ac36c4 push eax */
  push32((uint32_t)(EAX));
  /* 10ac36c5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10ac36cb push ecx */
  push32((uint32_t)(ECX));
  /* 10ac36cc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10ac36d2 push edx */
  push32((uint32_t)(EDX));
  /* 10ac36d3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10ac36d9 push eax */
  push32((uint32_t)(EAX));
  /* 10ac36da mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10ac36e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac36e1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10ac36e7 push edx */
  push32((uint32_t)(EDX));
  /* 10ac36e8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10ac36ee push eax */
  push32((uint32_t)(EAX));
  /* 10ac36ef mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10ac36f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac36f6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10ac36fc push edx */
  push32((uint32_t)(EDX));
  /* 10ac36fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3700 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3704 mov edx, dword ptr [ecx*4 + 0x10aeda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeda50)));
  /* 10ac370b push edx */
  push32((uint32_t)(EDX));
  /* 10ac370c push 0x10aea448 */
  push32((uint32_t)(0x10aea448u));
  /* 10ac3711 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10ac3716 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10ac371c push eax */
  push32((uint32_t)(EAX));
  /* 10ac371d call 0x10ac6ee0 */
  push32(0x10ac3722u); f_10ac6ee0();
  /* 10ac3722 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac3727 jge 0x10ac373d */
  if ((C.sf==C.of)) goto L_10ac373d;
  /* 10ac3729 push 0x10aea3ac */
  push32((uint32_t)(0x10aea3acu));
  /* 10ac372e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10ac3734 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3735 call 0x10ac6fe0 */
  push32(0x10ac373au); f_10ac6fe0();
  /* 10ac373a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac373d:;
  /* 10ac373d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10ac3742 push 0x10aea424 */
  push32((uint32_t)(0x10aea424u));
  /* 10ac3747 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10ac374d push edx */
  push32((uint32_t)(EDX));
  /* 10ac374e call 0x10ac7790 */
  push32(0x10ac3753u); f_10ac7790();
  /* 10ac3753 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3756 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10ac375c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3763 jne 0x10ac3776 */
  if (!C.zf) goto L_10ac3776;
  /* 10ac3765 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10ac3767 call 0x10ac74d0 */
  push32(0x10ac376cu); f_10ac74d0();
  /* 10ac376c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac376f push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac3771 call 0x10ac37f0 */
  push32(0x10ac3776u); f_10ac37f0();
L_10ac3776:;
  /* 10ac3776 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac377d jne 0x10ac3786 */
  if (!C.zf) goto L_10ac3786;
  /* 10ac377f mov eax, 1 */
  EAX = (0x1u);
  /* 10ac3784 jmp 0x10ac3788 */
  goto L_10ac3788;
L_10ac3786:;
  /* 10ac3786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac3788:;
  /* 10ac3788 mov esp, ebp */
  ESP = (EBP);
  /* 10ac378a pop ebp */
  EBP = (pop32());
  /* 10ac378b ret  */
  ESPCHK(0x10ac3480u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x10ac3790 (56 bytes, 15 insns) */
void f_10ac3790(void) {
  FTRACE(0x10ac3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3790 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3791 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3793 cmp dword ptr [0x10af111c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af111c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac379a je 0x10ac37a2 */
  if (C.zf) goto L_10ac37a2;
  /* 10ac379c call dword ptr [0x10af111c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af111c))), 0x10ac37a2u);
L_10ac37a2:;
  /* 10ac37a2 push 0x10aed418 */
  push32((uint32_t)(0x10aed418u));
  /* 10ac37a7 push 0x10aed208 */
  push32((uint32_t)(0x10aed208u));
  /* 10ac37ac call 0x10ac3960 */
  push32(0x10ac37b1u); f_10ac3960();
  /* 10ac37b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac37b4 push 0x10aed104 */
  push32((uint32_t)(0x10aed104u));
  /* 10ac37b9 push 0x10aed000 */
  push32((uint32_t)(0x10aed000u));
  /* 10ac37be call 0x10ac3960 */
  push32(0x10ac37c3u); f_10ac3960();
  /* 10ac37c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac37c6 pop ebp */
  EBP = (pop32());
  /* 10ac37c7 ret  */
  ESPCHK(0x10ac3790u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x10ac37d0 (21 bytes, 10 insns) */
void f_10ac37d0(void) {
  FTRACE(0x10ac37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac37d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac37d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac37d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac37d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac37da push eax */
  push32((uint32_t)(EAX));
  /* 10ac37db call 0x10ac3850 */
  push32(0x10ac37e0u); f_10ac3850();
  /* 10ac37e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac37e3 pop ebp */
  EBP = (pop32());
  /* 10ac37e4 ret  */
  ESPCHK(0x10ac37d0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10ac37f0 (21 bytes, 10 insns) */
void f_10ac37f0(void) {
  FTRACE(0x10ac37f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac37f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac37f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac37f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac37f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac37f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac37fa push eax */
  push32((uint32_t)(EAX));
  /* 10ac37fb call 0x10ac3850 */
  push32(0x10ac3800u); f_10ac3850();
  /* 10ac3800 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3803 pop ebp */
  EBP = (pop32());
  /* 10ac3804 ret  */
  ESPCHK(0x10ac37f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x10ac3810 (19 bytes, 9 insns) */
void f_10ac3810(void) {
  FTRACE(0x10ac3810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3810 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3811 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3813 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac3815 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac3817 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac3819 call 0x10ac3850 */
  push32(0x10ac381eu); f_10ac3850();
  /* 10ac381e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3821 pop ebp */
  EBP = (pop32());
  /* 10ac3822 ret  */
  ESPCHK(0x10ac3810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003830 @ 0x10ac3830 (19 bytes, 9 insns) */
void f_10ac3830(void) {
  FTRACE(0x10ac3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3830 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3831 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3833 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac3835 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac3837 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac3839 call 0x10ac3850 */
  push32(0x10ac383eu); f_10ac3850();
  /* 10ac383e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3841 pop ebp */
  EBP = (pop32());
  /* 10ac3842 ret  */
  ESPCHK(0x10ac3830u, _esp0);
  ESP += 4; return;
}

/* FUN_10003850 @ 0x10ac3850 (227 bytes, 61 insns) */
void f_10ac3850(void) {
  FTRACE(0x10ac3850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3850 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3851 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3853 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3854 call 0x10ac3940 */
  push32(0x10ac3859u); f_10ac3940();
  /* 10ac3859 cmp dword ptr [0x10aef614], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef614))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3860 jne 0x10ac3873 */
  if (!C.zf) goto L_10ac3873;
  /* 10ac3862 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3865 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3866 call dword ptr [0x10af231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af231c))), 0x10ac386cu);
  /* 10ac386c push eax */
  push32((uint32_t)(EAX));
  /* 10ac386d call dword ptr [0x10af2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2318))), 0x10ac3873u);
L_10ac3873:;
  /* 10ac3873 mov dword ptr [0x10aef610], 1 */
  w32((uint32_t)(0x10aef610), (0x1u));
  /* 10ac387d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10ac3880 mov byte ptr [0x10aef60c], cl */
  w8((uint32_t)(0x10aef60c), (CL));
  /* 10ac3886 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac388a jne 0x10ac38d3 */
  if (!C.zf) goto L_10ac38d3;
  /* 10ac388c cmp dword ptr [0x10af1118], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af1118))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3893 je 0x10ac38c1 */
  if (C.zf) goto L_10ac38c1;
  /* 10ac3895 mov edx, dword ptr [0x10af1114] */
  EDX = (r32((uint32_t)(0x10af1114)));
  /* 10ac389b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ac389e:;
  /* 10ac389e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac38a1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac38a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac38a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac38aa cmp ecx, dword ptr [0x10af1118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af1118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac38b0 jb 0x10ac38c1 */
  if (C.cf) goto L_10ac38c1;
  /* 10ac38b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac38b5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac38b8 je 0x10ac38bf */
  if (C.zf) goto L_10ac38bf;
  /* 10ac38ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac38bd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10ac38bfu);
L_10ac38bf:;
  /* 10ac38bf jmp 0x10ac389e */
  goto L_10ac389e;
L_10ac38c1:;
  /* 10ac38c1 push 0x10aed724 */
  push32((uint32_t)(0x10aed724u));
  /* 10ac38c6 push 0x10aed51c */
  push32((uint32_t)(0x10aed51cu));
  /* 10ac38cb call 0x10ac3960 */
  push32(0x10ac38d0u); f_10ac3960();
  /* 10ac38d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac38d3:;
  /* 10ac38d3 push 0x10aed92c */
  push32((uint32_t)(0x10aed92cu));
  /* 10ac38d8 push 0x10aed828 */
  push32((uint32_t)(0x10aed828u));
  /* 10ac38dd call 0x10ac3960 */
  push32(0x10ac38e2u); f_10ac3960();
  /* 10ac38e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac38e5 cmp dword ptr [0x10aef618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac38ec jne 0x10ac390e */
  if (!C.zf) goto L_10ac390e;
  /* 10ac38ee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ac38f0 call 0x10ac5540 */
  push32(0x10ac38f5u); f_10ac5540();
  /* 10ac38f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac38f8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac38fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac38fd je 0x10ac390e */
  if (C.zf) goto L_10ac390e;
  /* 10ac38ff mov dword ptr [0x10aef618], 1 */
  w32((uint32_t)(0x10aef618), (0x1u));
  /* 10ac3909 call 0x10ac5e50 */
  push32(0x10ac390eu); f_10ac5e50();
L_10ac390e:;
  /* 10ac390e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3912 je 0x10ac391b */
  if (C.zf) goto L_10ac391b;
  /* 10ac3914 call 0x10ac3950 */
  push32(0x10ac3919u); f_10ac3950();
  /* 10ac3919 jmp 0x10ac392f */
  goto L_10ac392f;
L_10ac391b:;
  /* 10ac391b mov dword ptr [0x10aef614], 1 */
  w32((uint32_t)(0x10aef614), (0x1u));
  /* 10ac3925 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3928 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3929 call dword ptr [0x10af2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2314))), 0x10ac392fu);
L_10ac392f:;
  /* 10ac392f mov esp, ebp */
  ESP = (EBP);
  /* 10ac3931 pop ebp */
  EBP = (pop32());
  /* 10ac3932 ret  */
  ESPCHK(0x10ac3850u, _esp0);
  ESP += 4; return;
}

/* FUN_10003940 @ 0x10ac3940 (15 bytes, 7 insns) */
void f_10ac3940(void) {
  FTRACE(0x10ac3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3940 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3941 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3943 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ac3945 call 0x10ac7a30 */
  push32(0x10ac394au); f_10ac7a30();
  /* 10ac394a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac394d pop ebp */
  EBP = (pop32());
  /* 10ac394e ret  */
  ESPCHK(0x10ac3940u, _esp0);
  ESP += 4; return;
}

/* FUN_10003950 @ 0x10ac3950 (15 bytes, 7 insns) */
void f_10ac3950(void) {
  FTRACE(0x10ac3950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3950 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3951 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3953 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10ac3955 call 0x10ac7ad0 */
  push32(0x10ac395au); f_10ac7ad0();
  /* 10ac395a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac395d pop ebp */
  EBP = (pop32());
  /* 10ac395e ret  */
  ESPCHK(0x10ac3950u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10ac3960 (37 bytes, 16 insns) */
void f_10ac3960(void) {
  FTRACE(0x10ac3960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3960 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3961 mov ebp, esp */
  EBP = (ESP);
L_10ac3963:;
  /* 10ac3963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3966 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3969 jae 0x10ac3983 */
  if (!C.cf) goto L_10ac3983;
  /* 10ac396b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac396e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3971 je 0x10ac3978 */
  if (C.zf) goto L_10ac3978;
  /* 10ac3973 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3976 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10ac3978u);
L_10ac3978:;
  /* 10ac3978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac397b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac397e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ac3981 jmp 0x10ac3963 */
  goto L_10ac3963;
L_10ac3983:;
  /* 10ac3983 pop ebp */
  EBP = (pop32());
  /* 10ac3984 ret  */
  ESPCHK(0x10ac3960u, _esp0);
  ESP += 4; return;
}

/* FUN_10003990 @ 0x10ac3990 (130 bytes, 42 insns) */
void f_10ac3990(void) {
  FTRACE(0x10ac3990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3990 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3991 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3993 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3994 call 0x10ac7950 */
  push32(0x10ac3999u); f_10ac7950();
  /* 10ac3999 call dword ptr [0x10af2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2328))), 0x10ac399fu);
  /* 10ac399f mov dword ptr [0x10aeda5c], eax */
  w32((uint32_t)(0x10aeda5c), (EAX));
  /* 10ac39a4 cmp dword ptr [0x10aeda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10aeda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac39ab jne 0x10ac39b1 */
  if (!C.zf) goto L_10ac39b1;
  /* 10ac39ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac39af jmp 0x10ac3a0e */
  goto L_10ac3a0e;
L_10ac39b1:;
  /* 10ac39b1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10ac39b3 push 0x10aea580 */
  push32((uint32_t)(0x10aea580u));
  /* 10ac39b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac39ba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10ac39bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac39be call 0x10ac4440 */
  push32(0x10ac39c3u); f_10ac4440();
  /* 10ac39c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac39c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac39c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac39cd je 0x10ac39e4 */
  if (C.zf) goto L_10ac39e4;
  /* 10ac39cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac39d2 push eax */
  push32((uint32_t)(EAX));
  /* 10ac39d3 mov ecx, dword ptr [0x10aeda5c] */
  ECX = (r32((uint32_t)(0x10aeda5c)));
  /* 10ac39d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac39da call dword ptr [0x10af2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2324))), 0x10ac39e0u);
  /* 10ac39e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac39e2 jne 0x10ac39e8 */
  if (!C.zf) goto L_10ac39e8;
L_10ac39e4:;
  /* 10ac39e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac39e6 jmp 0x10ac3a0e */
  goto L_10ac3a0e;
L_10ac39e8:;
  /* 10ac39e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac39eb push edx */
  push32((uint32_t)(EDX));
  /* 10ac39ec call 0x10ac3a50 */
  push32(0x10ac39f1u); f_10ac3a50();
  /* 10ac39f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac39f4 call dword ptr [0x10af2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2320))), 0x10ac39fau);
  /* 10ac39fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac39fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ac39ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3a02 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10ac3a09 mov eax, 1 */
  EAX = (0x1u);
L_10ac3a0e:;
  /* 10ac3a0e mov esp, ebp */
  ESP = (EBP);
  /* 10ac3a10 pop ebp */
  EBP = (pop32());
  /* 10ac3a11 ret  */
  ESPCHK(0x10ac3990u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x10ac3a20 (41 bytes, 11 insns) */
void f_10ac3a20(void) {
  FTRACE(0x10ac3a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3a21 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3a23 call 0x10ac7990 */
  push32(0x10ac3a28u); f_10ac7990();
  /* 10ac3a28 cmp dword ptr [0x10aeda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10aeda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3a2f je 0x10ac3a47 */
  if (C.zf) goto L_10ac3a47;
  /* 10ac3a31 mov eax, dword ptr [0x10aeda5c] */
  EAX = (r32((uint32_t)(0x10aeda5c)));
  /* 10ac3a36 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3a37 call dword ptr [0x10af232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af232c))), 0x10ac3a3du);
  /* 10ac3a3d mov dword ptr [0x10aeda5c], 0xffffffff */
  w32((uint32_t)(0x10aeda5c), (0xffffffffu));
L_10ac3a47:;
  /* 10ac3a47 pop ebp */
  EBP = (pop32());
  /* 10ac3a48 ret  */
  ESPCHK(0x10ac3a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a50 @ 0x10ac3a50 (25 bytes, 8 insns) */
void f_10ac3a50(void) {
  FTRACE(0x10ac3a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3a51 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3a53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3a56 mov dword ptr [eax + 0x50], 0x10aedc00 */
  w32((uint32_t)(EAX + 0x50), (0x10aedc00u));
  /* 10ac3a5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3a60 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10ac3a67 pop ebp */
  EBP = (pop32());
  /* 10ac3a68 ret  */
  ESPCHK(0x10ac3a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a70 @ 0x10ac3a70 (152 bytes, 48 insns) */
void f_10ac3a70(void) {
  FTRACE(0x10ac3a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3a71 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3a73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac3a76 call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10ac3a7cu);
  /* 10ac3a7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac3a7f mov eax, dword ptr [0x10aeda5c] */
  EAX = (r32((uint32_t)(0x10aeda5c)));
  /* 10ac3a84 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3a85 call dword ptr [0x10af2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2334))), 0x10ac3a8bu);
  /* 10ac3a8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac3a8e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3a92 jne 0x10ac3af7 */
  if (!C.zf) goto L_10ac3af7;
  /* 10ac3a94 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10ac3a99 push 0x10aea580 */
  push32((uint32_t)(0x10aea580u));
  /* 10ac3a9e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3aa0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10ac3aa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac3aa4 call 0x10ac4440 */
  push32(0x10ac3aa9u); f_10ac4440();
  /* 10ac3aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3aac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac3aaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3ab3 je 0x10ac3aed */
  if (C.zf) goto L_10ac3aed;
  /* 10ac3ab5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3ab9 mov edx, dword ptr [0x10aeda5c] */
  EDX = (r32((uint32_t)(0x10aeda5c)));
  /* 10ac3abf push edx */
  push32((uint32_t)(EDX));
  /* 10ac3ac0 call dword ptr [0x10af2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2324))), 0x10ac3ac6u);
  /* 10ac3ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac3ac8 je 0x10ac3aed */
  if (C.zf) goto L_10ac3aed;
  /* 10ac3aca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3acd push eax */
  push32((uint32_t)(EAX));
  /* 10ac3ace call 0x10ac3a50 */
  push32(0x10ac3ad3u); f_10ac3a50();
  /* 10ac3ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3ad6 call dword ptr [0x10af2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2320))), 0x10ac3adcu);
  /* 10ac3adc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3adf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ac3ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3ae4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10ac3aeb jmp 0x10ac3af7 */
  goto L_10ac3af7;
L_10ac3aed:;
  /* 10ac3aed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10ac3aef call 0x10ac2fa0 */
  push32(0x10ac3af4u); f_10ac2fa0();
  /* 10ac3af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3af7:;
  /* 10ac3af7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac3afa push eax */
  push32((uint32_t)(EAX));
  /* 10ac3afb call dword ptr [0x10af2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2330))), 0x10ac3b01u);
  /* 10ac3b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3b04 mov esp, ebp */
  ESP = (EBP);
  /* 10ac3b06 pop ebp */
  EBP = (pop32());
  /* 10ac3b07 ret  */
  ESPCHK(0x10ac3a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b10 @ 0x10ac3b10 (263 bytes, 86 insns) */
void f_10ac3b10(void) {
  FTRACE(0x10ac3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3b11 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3b13 cmp dword ptr [0x10aeda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10aeda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3b1a je 0x10ac3c15 */
  if (C.zf) goto L_10ac3c15;
  /* 10ac3b20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3b24 jne 0x10ac3b35 */
  if (!C.zf) goto L_10ac3b35;
  /* 10ac3b26 mov eax, dword ptr [0x10aeda5c] */
  EAX = (r32((uint32_t)(0x10aeda5c)));
  /* 10ac3b2b push eax */
  push32((uint32_t)(EAX));
  /* 10ac3b2c call dword ptr [0x10af2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2334))), 0x10ac3b32u);
  /* 10ac3b32 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ac3b35:;
  /* 10ac3b35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3b39 je 0x10ac3c06 */
  if (C.zf) goto L_10ac3c06;
  /* 10ac3b3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3b42 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3b46 je 0x10ac3b59 */
  if (C.zf) goto L_10ac3b59;
  /* 10ac3b48 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3b4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3b4d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10ac3b50 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3b51 call 0x10ac4ac0 */
  push32(0x10ac3b56u); f_10ac4ac0();
  /* 10ac3b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3b59:;
  /* 10ac3b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3b5c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3b60 je 0x10ac3b73 */
  if (C.zf) goto L_10ac3b73;
  /* 10ac3b62 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3b64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3b67 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10ac3b6a push eax */
  push32((uint32_t)(EAX));
  /* 10ac3b6b call 0x10ac4ac0 */
  push32(0x10ac3b70u); f_10ac4ac0();
  /* 10ac3b70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3b73:;
  /* 10ac3b73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3b76 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3b7a je 0x10ac3b8d */
  if (C.zf) goto L_10ac3b8d;
  /* 10ac3b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3b81 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10ac3b84 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3b85 call 0x10ac4ac0 */
  push32(0x10ac3b8au); f_10ac4ac0();
  /* 10ac3b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3b8d:;
  /* 10ac3b8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3b90 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3b94 je 0x10ac3ba7 */
  if (C.zf) goto L_10ac3ba7;
  /* 10ac3b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3b98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3b9b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10ac3b9e push eax */
  push32((uint32_t)(EAX));
  /* 10ac3b9f call 0x10ac4ac0 */
  push32(0x10ac3ba4u); f_10ac4ac0();
  /* 10ac3ba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3ba7:;
  /* 10ac3ba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3baa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3bae je 0x10ac3bc1 */
  if (C.zf) goto L_10ac3bc1;
  /* 10ac3bb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3bb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3bb5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10ac3bb8 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3bb9 call 0x10ac4ac0 */
  push32(0x10ac3bbeu); f_10ac4ac0();
  /* 10ac3bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3bc1:;
  /* 10ac3bc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3bc4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3bc8 je 0x10ac3bdb */
  if (C.zf) goto L_10ac3bdb;
  /* 10ac3bca push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3bcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3bcf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10ac3bd2 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3bd3 call 0x10ac4ac0 */
  push32(0x10ac3bd8u); f_10ac4ac0();
  /* 10ac3bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3bdb:;
  /* 10ac3bdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3bde cmp dword ptr [ecx + 0x50], 0x10aedc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10aedc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3be5 je 0x10ac3bf8 */
  if (C.zf) goto L_10ac3bf8;
  /* 10ac3be7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3be9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3bec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10ac3bef push eax */
  push32((uint32_t)(EAX));
  /* 10ac3bf0 call 0x10ac4ac0 */
  push32(0x10ac3bf5u); f_10ac4ac0();
  /* 10ac3bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3bf8:;
  /* 10ac3bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3bfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac3bfd push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3bfe call 0x10ac4ac0 */
  push32(0x10ac3c03u); f_10ac4ac0();
  /* 10ac3c03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3c06:;
  /* 10ac3c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac3c08 mov edx, dword ptr [0x10aeda5c] */
  EDX = (r32((uint32_t)(0x10aeda5c)));
  /* 10ac3c0e push edx */
  push32((uint32_t)(EDX));
  /* 10ac3c0f call dword ptr [0x10af2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2324))), 0x10ac3c15u);
L_10ac3c15:;
  /* 10ac3c15 pop ebp */
  EBP = (pop32());
  /* 10ac3c16 ret  */
  ESPCHK(0x10ac3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c20 @ 0x10ac3c20 (11 bytes, 5 insns) */
void f_10ac3c20(void) {
  FTRACE(0x10ac3c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3c21 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3c23 call dword ptr [0x10af2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2320))), 0x10ac3c29u);
  /* 10ac3c29 pop ebp */
  EBP = (pop32());
  /* 10ac3c2a ret  */
  ESPCHK(0x10ac3c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c30 @ 0x10ac3c30 (11 bytes, 5 insns) */
void f_10ac3c30(void) {
  FTRACE(0x10ac3c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3c31 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3c33 call dword ptr [0x10af2274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2274))), 0x10ac3c39u);
  /* 10ac3c39 pop ebp */
  EBP = (pop32());
  /* 10ac3c3a ret  */
  ESPCHK(0x10ac3c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c40 @ 0x10ac3c40 (804 bytes, 236 insns) */
void f_10ac3c40(void) {
  FTRACE(0x10ac3c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3c41 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3c43 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac3c46 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10ac3c4b push 0x10aea58c */
  push32((uint32_t)(0x10aea58cu));
  /* 10ac3c50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3c52 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10ac3c57 call 0x10ac4030 */
  push32(0x10ac3c5cu); f_10ac4030();
  /* 10ac3c5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3c5f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10ac3c62 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3c66 jne 0x10ac3c72 */
  if (!C.zf) goto L_10ac3c72;
  /* 10ac3c68 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10ac3c6a call 0x10ac2fa0 */
  push32(0x10ac3c6fu); f_10ac2fa0();
  /* 10ac3c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac3c72:;
  /* 10ac3c72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3c75 mov dword ptr [0x10af0fc0], eax */
  w32((uint32_t)(0x10af0fc0), (EAX));
  /* 10ac3c7a mov dword ptr [0x10af10fc], 0x20 */
  w32((uint32_t)(0x10af10fc), (0x20u));
  /* 10ac3c84 jmp 0x10ac3c8f */
  goto L_10ac3c8f;
L_10ac3c86:;
  /* 10ac3c86 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3c89 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3c8c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10ac3c8f:;
  /* 10ac3c8f mov edx, dword ptr [0x10af0fc0] */
  EDX = (r32((uint32_t)(0x10af0fc0)));
  /* 10ac3c95 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3c9b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3c9e jae 0x10ac3cc3 */
  if (!C.cf) goto L_10ac3cc3;
  /* 10ac3ca0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3ca3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10ac3ca7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3caa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10ac3cb0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3cb3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10ac3cb7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3cba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10ac3cc1 jmp 0x10ac3c86 */
  goto L_10ac3c86;
L_10ac3cc3:;
  /* 10ac3cc3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10ac3cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3cc7 call dword ptr [0x10af2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2348))), 0x10ac3ccdu);
  /* 10ac3ccd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10ac3cd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac3cd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac3cd8 je 0x10ac3e65 */
  if (C.zf) goto L_10ac3e65;
  /* 10ac3cde cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3ce2 je 0x10ac3e65 */
  if (C.zf) goto L_10ac3e65;
  /* 10ac3ce8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac3ceb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac3ced mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10ac3cf0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac3cf3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3cf6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac3cf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3cfc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3cff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10ac3d02 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3d09 jge 0x10ac3d13 */
  if ((C.sf==C.of)) goto L_10ac3d13;
  /* 10ac3d0b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10ac3d0e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10ac3d11 jmp 0x10ac3d1a */
  goto L_10ac3d1a;
L_10ac3d13:;
  /* 10ac3d13 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10ac3d1a:;
  /* 10ac3d1a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ac3d1d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10ac3d20 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10ac3d27 jmp 0x10ac3d32 */
  goto L_10ac3d32;
L_10ac3d29:;
  /* 10ac3d29 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10ac3d2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3d2f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10ac3d32:;
  /* 10ac3d32 mov ecx, dword ptr [0x10af10fc] */
  ECX = (r32((uint32_t)(0x10af10fc)));
  /* 10ac3d38 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3d3b jge 0x10ac3dd2 */
  if ((C.sf==C.of)) goto L_10ac3dd2;
  /* 10ac3d41 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10ac3d46 push 0x10aea58c */
  push32((uint32_t)(0x10aea58cu));
  /* 10ac3d4b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3d4d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10ac3d52 call 0x10ac4030 */
  push32(0x10ac3d57u); f_10ac4030();
  /* 10ac3d57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3d5a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10ac3d5d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3d61 jne 0x10ac3d6e */
  if (!C.zf) goto L_10ac3d6e;
  /* 10ac3d63 mov edx, dword ptr [0x10af10fc] */
  EDX = (r32((uint32_t)(0x10af10fc)));
  /* 10ac3d69 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10ac3d6c jmp 0x10ac3dd2 */
  goto L_10ac3dd2;
L_10ac3d6e:;
  /* 10ac3d6e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10ac3d71 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3d74 mov dword ptr [eax*4 + 0x10af0fc0], ecx */
  w32((uint32_t)(EAX*4 + 0x10af0fc0), (ECX));
  /* 10ac3d7b mov edx, dword ptr [0x10af10fc] */
  EDX = (r32((uint32_t)(0x10af10fc)));
  /* 10ac3d81 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3d84 mov dword ptr [0x10af10fc], edx */
  w32((uint32_t)(0x10af10fc), (EDX));
  /* 10ac3d8a jmp 0x10ac3d95 */
  goto L_10ac3d95;
L_10ac3d8c:;
  /* 10ac3d8c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3d8f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3d92 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10ac3d95:;
  /* 10ac3d95 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10ac3d98 mov edx, dword ptr [ecx*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10ac3d9f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3da5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3da8 jae 0x10ac3dcd */
  if (!C.cf) goto L_10ac3dcd;
  /* 10ac3daa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3dad mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10ac3db1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3db4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10ac3dba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3dbd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10ac3dc1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3dc4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10ac3dcb jmp 0x10ac3d8c */
  goto L_10ac3d8c;
L_10ac3dcd:;
  /* 10ac3dcd jmp 0x10ac3d29 */
  goto L_10ac3d29;
L_10ac3dd2:;
  /* 10ac3dd2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10ac3dd9 jmp 0x10ac3df6 */
  goto L_10ac3df6;
L_10ac3ddb:;
  /* 10ac3ddb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10ac3dde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3de1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10ac3de4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3de7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3dea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac3ded mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10ac3df0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3df3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10ac3df6:;
  /* 10ac3df6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10ac3df9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3dfc jge 0x10ac3e65 */
  if ((C.sf==C.of)) goto L_10ac3e65;
  /* 10ac3dfe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10ac3e01 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3e04 je 0x10ac3e60 */
  if (C.zf) goto L_10ac3e60;
  /* 10ac3e06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3e09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac3e0c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac3e0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac3e11 je 0x10ac3e60 */
  if (C.zf) goto L_10ac3e60;
  /* 10ac3e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3e16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ac3e19 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac3e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac3e1e jne 0x10ac3e30 */
  if (!C.zf) goto L_10ac3e30;
  /* 10ac3e20 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10ac3e23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac3e25 push edx */
  push32((uint32_t)(EDX));
  /* 10ac3e26 call dword ptr [0x10af2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2344))), 0x10ac3e2cu);
  /* 10ac3e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac3e2e je 0x10ac3e60 */
  if (C.zf) goto L_10ac3e60;
L_10ac3e30:;
  /* 10ac3e30 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10ac3e33 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ac3e36 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10ac3e39 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac3e3c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac3e3f mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10ac3e46 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3e48 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10ac3e4b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3e4e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10ac3e51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac3e53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ac3e55 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3e58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3e5b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac3e5d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10ac3e60:;
  /* 10ac3e60 jmp 0x10ac3ddb */
  goto L_10ac3ddb;
L_10ac3e65:;
  /* 10ac3e65 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10ac3e6c jmp 0x10ac3e77 */
  goto L_10ac3e77;
L_10ac3e6e:;
  /* 10ac3e6e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10ac3e71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3e74 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10ac3e77:;
  /* 10ac3e77 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3e7b jge 0x10ac3f54 */
  if ((C.sf==C.of)) goto L_10ac3f54;
  /* 10ac3e81 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10ac3e84 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac3e87 mov edx, dword ptr [0x10af0fc0] */
  EDX = (r32((uint32_t)(0x10af0fc0)));
  /* 10ac3e8d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3e8f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10ac3e92 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3e95 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3e98 jne 0x10ac3f40 */
  if (!C.zf) goto L_10ac3f40;
  /* 10ac3e9e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3ea1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10ac3ea5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3ea9 jne 0x10ac3eb4 */
  if (!C.zf) goto L_10ac3eb4;
  /* 10ac3eab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10ac3eb2 jmp 0x10ac3ec4 */
  goto L_10ac3ec4;
L_10ac3eb4:;
  /* 10ac3eb4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10ac3eb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac3eba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ac3ebc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac3ebe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3ec1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10ac3ec4:;
  /* 10ac3ec4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10ac3ec7 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3ec8 call dword ptr [0x10af22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22f4))), 0x10ac3eceu);
  /* 10ac3ece mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10ac3ed1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3ed5 je 0x10ac3f2f */
  if (C.zf) goto L_10ac3f2f;
  /* 10ac3ed7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10ac3eda push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3edb call dword ptr [0x10af2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2344))), 0x10ac3ee1u);
  /* 10ac3ee1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10ac3ee4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3ee8 je 0x10ac3f2f */
  if (C.zf) goto L_10ac3f2f;
  /* 10ac3eea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3eed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10ac3ef0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ac3ef2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10ac3ef5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac3efb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3efe jne 0x10ac3f10 */
  if (!C.zf) goto L_10ac3f10;
  /* 10ac3f00 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3f03 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10ac3f06 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10ac3f08 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3f0b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10ac3f0e jmp 0x10ac3f2d */
  goto L_10ac3f2d;
L_10ac3f10:;
  /* 10ac3f10 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10ac3f13 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac3f19 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3f1c jne 0x10ac3f2d */
  if (!C.zf) goto L_10ac3f2d;
  /* 10ac3f1e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3f21 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac3f24 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10ac3f27 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3f2a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10ac3f2d:;
  /* 10ac3f2d jmp 0x10ac3f3e */
  goto L_10ac3f3e;
L_10ac3f2f:;
  /* 10ac3f2f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3f32 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac3f35 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10ac3f38 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3f3b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10ac3f3e:;
  /* 10ac3f3e jmp 0x10ac3f4f */
  goto L_10ac3f4f;
L_10ac3f40:;
  /* 10ac3f40 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3f43 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac3f46 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10ac3f49 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac3f4c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10ac3f4f:;
  /* 10ac3f4f jmp 0x10ac3e6e */
  goto L_10ac3e6e;
L_10ac3f54:;
  /* 10ac3f54 mov eax, dword ptr [0x10af10fc] */
  EAX = (r32((uint32_t)(0x10af10fc)));
  /* 10ac3f59 push eax */
  push32((uint32_t)(EAX));
  /* 10ac3f5a call dword ptr [0x10af2278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2278))), 0x10ac3f60u);
  /* 10ac3f60 mov esp, ebp */
  ESP = (EBP);
  /* 10ac3f62 pop ebp */
  EBP = (pop32());
  /* 10ac3f63 ret  */
  ESPCHK(0x10ac3c40u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10ac3f70 (155 bytes, 45 insns) */
void f_10ac3f70(void) {
  FTRACE(0x10ac3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac3f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac3f71 mov ebp, esp */
  EBP = (ESP);
  /* 10ac3f73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac3f76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ac3f7d jmp 0x10ac3f88 */
  goto L_10ac3f88;
L_10ac3f7f:;
  /* 10ac3f7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac3f82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3f85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ac3f88:;
  /* 10ac3f88 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3f8c jge 0x10ac4007 */
  if ((C.sf==C.of)) goto L_10ac4007;
  /* 10ac3f8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac3f91 cmp dword ptr [ecx*4 + 0x10af0fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10af0fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3f99 je 0x10ac4002 */
  if (C.zf) goto L_10ac4002;
  /* 10ac3f9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac3f9e mov eax, dword ptr [edx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10af0fc0)));
  /* 10ac3fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac3fa8 jmp 0x10ac3fb3 */
  goto L_10ac3fb3;
L_10ac3faa:;
  /* 10ac3faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3fad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3fb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ac3fb3:;
  /* 10ac3fb3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac3fb6 mov eax, dword ptr [edx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10af0fc0)));
  /* 10ac3fbd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3fc2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3fc5 jae 0x10ac3fdf */
  if (!C.cf) goto L_10ac3fdf;
  /* 10ac3fc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3fca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac3fce je 0x10ac3fdd */
  if (C.zf) goto L_10ac3fdd;
  /* 10ac3fd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac3fd3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3fd6 push edx */
  push32((uint32_t)(EDX));
  /* 10ac3fd7 call dword ptr [0x10af234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af234c))), 0x10ac3fddu);
L_10ac3fdd:;
  /* 10ac3fdd jmp 0x10ac3faa */
  goto L_10ac3faa;
L_10ac3fdf:;
  /* 10ac3fdf push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac3fe1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac3fe4 mov ecx, dword ptr [eax*4 + 0x10af0fc0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10ac3feb push ecx */
  push32((uint32_t)(ECX));
  /* 10ac3fec call 0x10ac4ac0 */
  push32(0x10ac3ff1u); f_10ac4ac0();
  /* 10ac3ff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac3ff4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac3ff7 mov dword ptr [edx*4 + 0x10af0fc0], 0 */
  w32((uint32_t)(EDX*4 + 0x10af0fc0), (0x0u));
L_10ac4002:;
  /* 10ac4002 jmp 0x10ac3f7f */
  goto L_10ac3f7f;
L_10ac4007:;
  /* 10ac4007 mov esp, ebp */
  ESP = (EBP);
  /* 10ac4009 pop ebp */
  EBP = (pop32());
  /* 10ac400a ret  */
  ESPCHK(0x10ac3f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004010 @ 0x10ac4010 (29 bytes, 13 insns) */
void f_10ac4010(void) {
  FTRACE(0x10ac4010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4010 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4011 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4013 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4015 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4017 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4019 mov eax, dword ptr [0x10aef7c0] */
  EAX = (r32((uint32_t)(0x10aef7c0)));
  /* 10ac401e push eax */
  push32((uint32_t)(EAX));
  /* 10ac401f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4022 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4023 call 0x10ac4080 */
  push32(0x10ac4028u); f_10ac4080();
  /* 10ac4028 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac402b pop ebp */
  EBP = (pop32());
  /* 10ac402c ret  */
  ESPCHK(0x10ac4010u, _esp0);
  ESP += 4; return;
}

/* FUN_10004030 @ 0x10ac4030 (35 bytes, 16 insns) */
void f_10ac4030(void) {
  FTRACE(0x10ac4030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4030 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4031 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4033 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac4036 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4037 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac403a push ecx */
  push32((uint32_t)(ECX));
  /* 10ac403b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac403e push edx */
  push32((uint32_t)(EDX));
  /* 10ac403f mov eax, dword ptr [0x10aef7c0] */
  EAX = (r32((uint32_t)(0x10aef7c0)));
  /* 10ac4044 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4045 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4048 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4049 call 0x10ac4080 */
  push32(0x10ac404eu); f_10ac4080();
  /* 10ac404e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4051 pop ebp */
  EBP = (pop32());
  /* 10ac4052 ret  */
  ESPCHK(0x10ac4030u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x10ac4060 (27 bytes, 13 insns) */
void f_10ac4060(void) {
  FTRACE(0x10ac4060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4060 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4061 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4063 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4065 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4067 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac406c push eax */
  push32((uint32_t)(EAX));
  /* 10ac406d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4070 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4071 call 0x10ac4080 */
  push32(0x10ac4076u); f_10ac4080();
  /* 10ac4076 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4079 pop ebp */
  EBP = (pop32());
  /* 10ac407a ret  */
  ESPCHK(0x10ac4060u, _esp0);
  ESP += 4; return;
}

/* FUN_10004080 @ 0x10ac4080 (94 bytes, 38 insns) */
void f_10ac4080(void) {
  FTRACE(0x10ac4080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4080 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4081 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4083 push ecx */
  push32((uint32_t)(ECX));
L_10ac4084:;
  /* 10ac4084 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac4086 call 0x10ac7a30 */
  push32(0x10ac408bu); f_10ac7a30();
  /* 10ac408b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac408e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac4091 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4092 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac4095 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4096 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac4099 push edx */
  push32((uint32_t)(EDX));
  /* 10ac409a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac409d push eax */
  push32((uint32_t)(EAX));
  /* 10ac409e call 0x10ac4100 */
  push32(0x10ac40a3u); f_10ac4100();
  /* 10ac40a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac40a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac40a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac40ab call 0x10ac7ad0 */
  push32(0x10ac40b0u); f_10ac7ad0();
  /* 10ac40b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac40b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac40b7 jne 0x10ac40bf */
  if (!C.zf) goto L_10ac40bf;
  /* 10ac40b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac40bd jne 0x10ac40c4 */
  if (!C.zf) goto L_10ac40c4;
L_10ac40bf:;
  /* 10ac40bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac40c2 jmp 0x10ac40da */
  goto L_10ac40da;
L_10ac40c4:;
  /* 10ac40c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac40c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac40c8 call 0x10ac7d70 */
  push32(0x10ac40cdu); f_10ac7d70();
  /* 10ac40cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac40d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac40d2 jne 0x10ac40d8 */
  if (!C.zf) goto L_10ac40d8;
  /* 10ac40d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac40d6 jmp 0x10ac40da */
  goto L_10ac40da;
L_10ac40d8:;
  /* 10ac40d8 jmp 0x10ac4084 */
  goto L_10ac4084;
L_10ac40da:;
  /* 10ac40da mov esp, ebp */
  ESP = (EBP);
  /* 10ac40dc pop ebp */
  EBP = (pop32());
  /* 10ac40dd ret  */
  ESPCHK(0x10ac4080u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x10ac40e0 (23 bytes, 11 insns) */
void f_10ac40e0(void) {
  FTRACE(0x10ac40e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac40e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac40e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac40e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac40e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac40e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac40e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac40ec push eax */
  push32((uint32_t)(EAX));
  /* 10ac40ed call 0x10ac4100 */
  push32(0x10ac40f2u); f_10ac4100();
  /* 10ac40f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac40f5 pop ebp */
  EBP = (pop32());
  /* 10ac40f6 ret  */
  ESPCHK(0x10ac40e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004100 @ 0x10ac4100 (787 bytes, 254 insns) */
void f_10ac4100(void) {
  FTRACE(0x10ac4100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4100 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4101 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4103 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac4106 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac4107 push esi */
  push32((uint32_t)(ESI));
  /* 10ac4108 push edi */
  push32((uint32_t)(EDI));
  /* 10ac4109 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ac4110 mov eax, dword ptr [0x10aeda84] */
  EAX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac4115 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac411a je 0x10ac414c */
  if (C.zf) goto L_10ac414c;
L_10ac411c:;
  /* 10ac411c call 0x10ac51d0 */
  push32(0x10ac4121u); f_10ac51d0();
  /* 10ac4121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4123 jne 0x10ac4146 */
  if (!C.zf) goto L_10ac4146;
  /* 10ac4125 push 0x10aea680 */
  push32((uint32_t)(0x10aea680u));
  /* 10ac412a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac412c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10ac4131 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4136 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4138 call 0x10ac30f0 */
  push32(0x10ac413du); f_10ac30f0();
  /* 10ac413d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4140 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4143 jne 0x10ac4146 */
  if (!C.zf) goto L_10ac4146;
  /* 10ac4145 int3  */
  x86_unimpl("int3 @ 0x10ac4145");
L_10ac4146:;
  /* 10ac4146 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4148 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac414a jne 0x10ac411c */
  if (!C.zf) goto L_10ac411c;
L_10ac414c:;
  /* 10ac414c mov edx, dword ptr [0x10aeda88] */
  EDX = (r32((uint32_t)(0x10aeda88)));
  /* 10ac4152 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ac4155 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac4158 cmp eax, dword ptr [0x10aeda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aeda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac415e jne 0x10ac4161 */
  if (!C.zf) goto L_10ac4161;
  /* 10ac4160 int3  */
  x86_unimpl("int3 @ 0x10ac4160");
L_10ac4161:;
  /* 10ac4161 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac4164 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4165 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac4168 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4169 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac416c push eax */
  push32((uint32_t)(EAX));
  /* 10ac416d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4170 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4174 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4175 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4177 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4179 call dword ptr [0x10aedc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aedc90))), 0x10ac417fu);
  /* 10ac417f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4184 jne 0x10ac41e4 */
  if (!C.zf) goto L_10ac41e4;
  /* 10ac4186 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac418a je 0x10ac41b7 */
  if (C.zf) goto L_10ac41b7;
L_10ac418c:;
  /* 10ac418c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac418f push eax */
  push32((uint32_t)(EAX));
  /* 10ac4190 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac4193 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4194 push 0x10aea63c */
  push32((uint32_t)(0x10aea63cu));
  /* 10ac4199 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac419b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac419d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac419f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac41a1 call 0x10ac30f0 */
  push32(0x10ac41a6u); f_10ac30f0();
  /* 10ac41a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac41a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac41ac jne 0x10ac41af */
  if (!C.zf) goto L_10ac41af;
  /* 10ac41ae int3  */
  x86_unimpl("int3 @ 0x10ac41ae");
L_10ac41af:;
  /* 10ac41af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac41b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac41b3 jne 0x10ac418c */
  if (!C.zf) goto L_10ac418c;
  /* 10ac41b5 jmp 0x10ac41dd */
  goto L_10ac41dd;
L_10ac41b7:;
  /* 10ac41b7 push 0x10aea618 */
  push32((uint32_t)(0x10aea618u));
  /* 10ac41bc push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac41c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac41c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac41c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac41c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac41c9 call 0x10ac30f0 */
  push32(0x10ac41ceu); f_10ac30f0();
  /* 10ac41ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac41d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac41d4 jne 0x10ac41d7 */
  if (!C.zf) goto L_10ac41d7;
  /* 10ac41d6 int3  */
  x86_unimpl("int3 @ 0x10ac41d6");
L_10ac41d7:;
  /* 10ac41d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac41d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac41db jne 0x10ac41b7 */
  if (!C.zf) goto L_10ac41b7;
L_10ac41dd:;
  /* 10ac41dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac41df jmp 0x10ac440c */
  goto L_10ac440c;
L_10ac41e4:;
  /* 10ac41e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac41e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac41ed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac41f0 je 0x10ac4206 */
  if (C.zf) goto L_10ac4206;
  /* 10ac41f2 mov edx, dword ptr [0x10aeda84] */
  EDX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac41f8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac41fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac41fd jne 0x10ac4206 */
  if (!C.zf) goto L_10ac4206;
  /* 10ac41ff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10ac4206:;
  /* 10ac4206 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac420a ja 0x10ac4217 */
  if ((!C.cf&&!C.zf)) goto L_10ac4217;
  /* 10ac420c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac420f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4212 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4215 jbe 0x10ac4243 */
  if ((C.cf||C.zf)) goto L_10ac4243;
L_10ac4217:;
  /* 10ac4217 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac421a push ecx */
  push32((uint32_t)(ECX));
  /* 10ac421b push 0x10aea5f0 */
  push32((uint32_t)(0x10aea5f0u));
  /* 10ac4220 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4222 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4224 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4226 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4228 call 0x10ac30f0 */
  push32(0x10ac422du); f_10ac30f0();
  /* 10ac422d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4230 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4233 jne 0x10ac4236 */
  if (!C.zf) goto L_10ac4236;
  /* 10ac4235 int3  */
  x86_unimpl("int3 @ 0x10ac4235");
L_10ac4236:;
  /* 10ac4236 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac4238 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac423a jne 0x10ac4217 */
  if (!C.zf) goto L_10ac4217;
  /* 10ac423c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac423e jmp 0x10ac440c */
  goto L_10ac440c;
L_10ac4243:;
  /* 10ac4243 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4246 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac424b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac424e je 0x10ac4290 */
  if (C.zf) goto L_10ac4290;
  /* 10ac4250 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4254 je 0x10ac4290 */
  if (C.zf) goto L_10ac4290;
  /* 10ac4256 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4259 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac425f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4262 je 0x10ac4290 */
  if (C.zf) goto L_10ac4290;
  /* 10ac4264 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4268 je 0x10ac4290 */
  if (C.zf) goto L_10ac4290;
L_10ac426a:;
  /* 10ac426a push 0x10aea5bc */
  push32((uint32_t)(0x10aea5bcu));
  /* 10ac426f push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac4274 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4276 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4278 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac427a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac427c call 0x10ac30f0 */
  push32(0x10ac4281u); f_10ac30f0();
  /* 10ac4281 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4284 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4287 jne 0x10ac428a */
  if (!C.zf) goto L_10ac428a;
  /* 10ac4289 int3  */
  x86_unimpl("int3 @ 0x10ac4289");
L_10ac428a:;
  /* 10ac428a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac428c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac428e jne 0x10ac426a */
  if (!C.zf) goto L_10ac426a;
L_10ac4290:;
  /* 10ac4290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4293 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4296 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ac4299 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac429c push ecx */
  push32((uint32_t)(ECX));
  /* 10ac429d call 0x10ac7e80 */
  push32(0x10ac42a2u); f_10ac7e80();
  /* 10ac42a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac42a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac42a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac42ac jne 0x10ac42b5 */
  if (!C.zf) goto L_10ac42b5;
  /* 10ac42ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac42b0 jmp 0x10ac440c */
  goto L_10ac440c;
L_10ac42b5:;
  /* 10ac42b5 mov edx, dword ptr [0x10aeda88] */
  EDX = (r32((uint32_t)(0x10aeda88)));
  /* 10ac42bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac42be mov dword ptr [0x10aeda88], edx */
  w32((uint32_t)(0x10aeda88), (EDX));
  /* 10ac42c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac42c8 je 0x10ac4313 */
  if (C.zf) goto L_10ac4313;
  /* 10ac42ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac42cd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ac42d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac42d6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10ac42dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac42e0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10ac42e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac42ea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10ac42f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac42f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac42f7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10ac42fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac42fd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10ac4304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4307 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10ac430e jmp 0x10ac43b3 */
  goto L_10ac43b3;
L_10ac4313:;
  /* 10ac4313 mov edx, dword ptr [0x10aef620] */
  EDX = (r32((uint32_t)(0x10aef620)));
  /* 10ac4319 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac431c mov dword ptr [0x10aef620], edx */
  w32((uint32_t)(0x10aef620), (EDX));
  /* 10ac4322 mov eax, dword ptr [0x10aef628] */
  EAX = (r32((uint32_t)(0x10aef628)));
  /* 10ac4327 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac432a mov dword ptr [0x10aef628], eax */
  w32((uint32_t)(0x10aef628), (EAX));
  /* 10ac432f mov ecx, dword ptr [0x10aef628] */
  ECX = (r32((uint32_t)(0x10aef628)));
  /* 10ac4335 cmp ecx, dword ptr [0x10aef62c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aef62c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac433b jbe 0x10ac4349 */
  if ((C.cf||C.zf)) goto L_10ac4349;
  /* 10ac433d mov edx, dword ptr [0x10aef628] */
  EDX = (r32((uint32_t)(0x10aef628)));
  /* 10ac4343 mov dword ptr [0x10aef62c], edx */
  w32((uint32_t)(0x10aef62c), (EDX));
L_10ac4349:;
  /* 10ac4349 cmp dword ptr [0x10aef624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4350 je 0x10ac435f */
  if (C.zf) goto L_10ac435f;
  /* 10ac4352 mov eax, dword ptr [0x10aef624] */
  EAX = (r32((uint32_t)(0x10aef624)));
  /* 10ac4357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac435a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ac435d jmp 0x10ac4368 */
  goto L_10ac4368;
L_10ac435f:;
  /* 10ac435f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4362 mov dword ptr [0x10aef61c], edx */
  w32((uint32_t)(0x10aef61c), (EDX));
L_10ac4368:;
  /* 10ac4368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac436b mov ecx, dword ptr [0x10aef624] */
  ECX = (r32((uint32_t)(0x10aef624)));
  /* 10ac4371 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ac4373 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4376 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10ac437d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4380 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac4383 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10ac4386 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4389 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac438c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10ac438f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4392 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4395 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10ac4398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac439b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac439e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10ac43a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac43a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac43a7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10ac43aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac43ad mov dword ptr [0x10aef624], ecx */
  w32((uint32_t)(0x10aef624), (ECX));
L_10ac43b3:;
  /* 10ac43b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac43b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac43b7 mov dl, byte ptr [0x10aeda90] */
  DL = (r8((uint32_t)(0x10aeda90)));
  /* 10ac43bd push edx */
  push32((uint32_t)(EDX));
  /* 10ac43be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac43c1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac43c4 push eax */
  push32((uint32_t)(EAX));
  /* 10ac43c5 call 0x10ac7da0 */
  push32(0x10ac43cau); f_10ac7da0();
  /* 10ac43ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac43cd push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac43cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac43d1 mov cl, byte ptr [0x10aeda90] */
  CL = (r8((uint32_t)(0x10aeda90)));
  /* 10ac43d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac43d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac43db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac43de lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10ac43e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac43e3 call 0x10ac7da0 */
  push32(0x10ac43e8u); f_10ac7da0();
  /* 10ac43e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac43eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac43ee push edx */
  push32((uint32_t)(EDX));
  /* 10ac43ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac43f1 mov al, byte ptr [0x10aeda92] */
  AL = (r8((uint32_t)(0x10aeda92)));
  /* 10ac43f6 push eax */
  push32((uint32_t)(EAX));
  /* 10ac43f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac43fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac43fd push ecx */
  push32((uint32_t)(ECX));
  /* 10ac43fe call 0x10ac7da0 */
  push32(0x10ac4403u); f_10ac7da0();
  /* 10ac4403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4409 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10ac440c:;
  /* 10ac440c pop edi */
  EDI = (pop32());
  /* 10ac440d pop esi */
  ESI = (pop32());
  /* 10ac440e pop ebx */
  EBX = (pop32());
  /* 10ac440f mov esp, ebp */
  ESP = (EBP);
  /* 10ac4411 pop ebp */
  EBP = (pop32());
  /* 10ac4412 ret  */
  ESPCHK(0x10ac4100u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x10ac4420 (27 bytes, 13 insns) */
void f_10ac4420(void) {
  FTRACE(0x10ac4420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4420 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4421 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4423 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4425 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4429 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac442c push eax */
  push32((uint32_t)(EAX));
  /* 10ac442d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4430 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4431 call 0x10ac4440 */
  push32(0x10ac4436u); f_10ac4440();
  /* 10ac4436 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4439 pop ebp */
  EBP = (pop32());
  /* 10ac443a ret  */
  ESPCHK(0x10ac4420u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10ac4440 (96 bytes, 37 insns) */
void f_10ac4440(void) {
  FTRACE(0x10ac4440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4440 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4441 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac4446 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4449 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac444d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10ac4450 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac4453 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4454 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac4457 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4458 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac445b push eax */
  push32((uint32_t)(EAX));
  /* 10ac445c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac445f push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4460 call 0x10ac4030 */
  push32(0x10ac4465u); f_10ac4030();
  /* 10ac4465 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4468 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac446b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac446f je 0x10ac4499 */
  if (C.zf) goto L_10ac4499;
  /* 10ac4471 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac4474 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ac4477 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac447a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac447d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac4480:;
  /* 10ac4480 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4483 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4486 jae 0x10ac4499 */
  if (!C.cf) goto L_10ac4499;
  /* 10ac4488 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac448b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ac448e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4491 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4494 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac4497 jmp 0x10ac4480 */
  goto L_10ac4480;
L_10ac4499:;
  /* 10ac4499 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac449c mov esp, ebp */
  ESP = (EBP);
  /* 10ac449e pop ebp */
  EBP = (pop32());
  /* 10ac449f ret  */
  ESPCHK(0x10ac4440u, _esp0);
  ESP += 4; return;
}

/* FUN_100044a0 @ 0x10ac44a0 (27 bytes, 13 insns) */
void f_10ac44a0(void) {
  FTRACE(0x10ac44a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac44a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac44a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac44a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac44a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac44a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac44a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac44ac push eax */
  push32((uint32_t)(EAX));
  /* 10ac44ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac44b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac44b1 call 0x10ac44c0 */
  push32(0x10ac44b6u); f_10ac44c0();
  /* 10ac44b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac44b9 pop ebp */
  EBP = (pop32());
  /* 10ac44ba ret  */
  ESPCHK(0x10ac44a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044c0 @ 0x10ac44c0 (64 bytes, 27 insns) */
void f_10ac44c0(void) {
  FTRACE(0x10ac44c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac44c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac44c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac44c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac44c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac44c6 call 0x10ac7a30 */
  push32(0x10ac44cbu); f_10ac7a30();
  /* 10ac44cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac44ce push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac44d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac44d3 push eax */
  push32((uint32_t)(EAX));
  /* 10ac44d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac44d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac44d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac44db push edx */
  push32((uint32_t)(EDX));
  /* 10ac44dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac44df push eax */
  push32((uint32_t)(EAX));
  /* 10ac44e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac44e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac44e4 call 0x10ac4500 */
  push32(0x10ac44e9u); f_10ac4500();
  /* 10ac44e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac44ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac44ef push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac44f1 call 0x10ac7ad0 */
  push32(0x10ac44f6u); f_10ac7ad0();
  /* 10ac44f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac44f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac44fc mov esp, ebp */
  ESP = (EBP);
  /* 10ac44fe pop ebp */
  EBP = (pop32());
  /* 10ac44ff ret  */
  ESPCHK(0x10ac44c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004500 @ 0x10ac4500 (1297 bytes, 431 insns) */
void f_10ac4500(void) {
  FTRACE(0x10ac4500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4500 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4501 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4503 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac4506 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac4507 push esi */
  push32((uint32_t)(ESI));
  /* 10ac4508 push edi */
  push32((uint32_t)(EDI));
  /* 10ac4509 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10ac4510 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4514 jne 0x10ac4533 */
  if (!C.zf) goto L_10ac4533;
  /* 10ac4516 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac4519 push eax */
  push32((uint32_t)(EAX));
  /* 10ac451a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac451d push ecx */
  push32((uint32_t)(ECX));
  /* 10ac451e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac4521 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4522 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4525 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4526 call 0x10ac4030 */
  push32(0x10ac452bu); f_10ac4030();
  /* 10ac452b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac452e jmp 0x10ac4a0a */
  goto L_10ac4a0a;
L_10ac4533:;
  /* 10ac4533 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4537 je 0x10ac4556 */
  if (C.zf) goto L_10ac4556;
  /* 10ac4539 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac453d jne 0x10ac4556 */
  if (!C.zf) goto L_10ac4556;
  /* 10ac453f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac4542 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4543 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4546 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4547 call 0x10ac4ac0 */
  push32(0x10ac454cu); f_10ac4ac0();
  /* 10ac454c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac454f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4551 jmp 0x10ac4a0a */
  goto L_10ac4a0a;
L_10ac4556:;
  /* 10ac4556 mov eax, dword ptr [0x10aeda84] */
  EAX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac455b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac455e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4560 je 0x10ac4592 */
  if (C.zf) goto L_10ac4592;
L_10ac4562:;
  /* 10ac4562 call 0x10ac51d0 */
  push32(0x10ac4567u); f_10ac51d0();
  /* 10ac4567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4569 jne 0x10ac458c */
  if (!C.zf) goto L_10ac458c;
  /* 10ac456b push 0x10aea680 */
  push32((uint32_t)(0x10aea680u));
  /* 10ac4570 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4572 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10ac4577 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac457c push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac457e call 0x10ac30f0 */
  push32(0x10ac4583u); f_10ac30f0();
  /* 10ac4583 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4586 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4589 jne 0x10ac458c */
  if (!C.zf) goto L_10ac458c;
  /* 10ac458b int3  */
  x86_unimpl("int3 @ 0x10ac458b");
L_10ac458c:;
  /* 10ac458c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac458e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac4590 jne 0x10ac4562 */
  if (!C.zf) goto L_10ac4562;
L_10ac4592:;
  /* 10ac4592 mov edx, dword ptr [0x10aeda88] */
  EDX = (r32((uint32_t)(0x10aeda88)));
  /* 10ac4598 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ac459b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac459e cmp eax, dword ptr [0x10aeda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aeda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac45a4 jne 0x10ac45a7 */
  if (!C.zf) goto L_10ac45a7;
  /* 10ac45a6 int3  */
  x86_unimpl("int3 @ 0x10ac45a6");
L_10ac45a7:;
  /* 10ac45a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac45aa push ecx */
  push32((uint32_t)(ECX));
  /* 10ac45ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac45ae push edx */
  push32((uint32_t)(EDX));
  /* 10ac45af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac45b2 push eax */
  push32((uint32_t)(EAX));
  /* 10ac45b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac45b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac45b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac45ba push edx */
  push32((uint32_t)(EDX));
  /* 10ac45bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac45be push eax */
  push32((uint32_t)(EAX));
  /* 10ac45bf push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac45c1 call dword ptr [0x10aedc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aedc90))), 0x10ac45c7u);
  /* 10ac45c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac45ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac45cc jne 0x10ac462c */
  if (!C.zf) goto L_10ac462c;
  /* 10ac45ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac45d2 je 0x10ac45ff */
  if (C.zf) goto L_10ac45ff;
L_10ac45d4:;
  /* 10ac45d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac45d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac45d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac45db push edx */
  push32((uint32_t)(EDX));
  /* 10ac45dc push 0x10aea7fc */
  push32((uint32_t)(0x10aea7fcu));
  /* 10ac45e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac45e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac45e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac45e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac45e9 call 0x10ac30f0 */
  push32(0x10ac45eeu); f_10ac30f0();
  /* 10ac45ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac45f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac45f4 jne 0x10ac45f7 */
  if (!C.zf) goto L_10ac45f7;
  /* 10ac45f6 int3  */
  x86_unimpl("int3 @ 0x10ac45f6");
L_10ac45f7:;
  /* 10ac45f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac45f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac45fb jne 0x10ac45d4 */
  if (!C.zf) goto L_10ac45d4;
  /* 10ac45fd jmp 0x10ac4625 */
  goto L_10ac4625;
L_10ac45ff:;
  /* 10ac45ff push 0x10aea7d8 */
  push32((uint32_t)(0x10aea7d8u));
  /* 10ac4604 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac4609 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac460b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac460d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac460f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4611 call 0x10ac30f0 */
  push32(0x10ac4616u); f_10ac30f0();
  /* 10ac4616 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4619 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac461c jne 0x10ac461f */
  if (!C.zf) goto L_10ac461f;
  /* 10ac461e int3  */
  x86_unimpl("int3 @ 0x10ac461e");
L_10ac461f:;
  /* 10ac461f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4621 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac4623 jne 0x10ac45ff */
  if (!C.zf) goto L_10ac45ff;
L_10ac4625:;
  /* 10ac4625 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4627 jmp 0x10ac4a0a */
  goto L_10ac4a0a;
L_10ac462c:;
  /* 10ac462c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4630 jbe 0x10ac465e */
  if ((C.cf||C.zf)) goto L_10ac465e;
L_10ac4632:;
  /* 10ac4632 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4635 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4636 push 0x10aea7a8 */
  push32((uint32_t)(0x10aea7a8u));
  /* 10ac463b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac463d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac463f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4641 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4643 call 0x10ac30f0 */
  push32(0x10ac4648u); f_10ac30f0();
  /* 10ac4648 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac464b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac464e jne 0x10ac4651 */
  if (!C.zf) goto L_10ac4651;
  /* 10ac4650 int3  */
  x86_unimpl("int3 @ 0x10ac4650");
L_10ac4651:;
  /* 10ac4651 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4653 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4655 jne 0x10ac4632 */
  if (!C.zf) goto L_10ac4632;
  /* 10ac4657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4659 jmp 0x10ac4a0a */
  goto L_10ac4a0a;
L_10ac465e:;
  /* 10ac465e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4662 je 0x10ac46a6 */
  if (C.zf) goto L_10ac46a6;
  /* 10ac4664 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac4667 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac466d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4670 je 0x10ac46a6 */
  if (C.zf) goto L_10ac46a6;
  /* 10ac4672 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac4675 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac467b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac467e je 0x10ac46a6 */
  if (C.zf) goto L_10ac46a6;
L_10ac4680:;
  /* 10ac4680 push 0x10aea5bc */
  push32((uint32_t)(0x10aea5bcu));
  /* 10ac4685 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac468a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac468c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac468e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4690 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4692 call 0x10ac30f0 */
  push32(0x10ac4697u); f_10ac30f0();
  /* 10ac4697 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac469a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac469d jne 0x10ac46a0 */
  if (!C.zf) goto L_10ac46a0;
  /* 10ac469f int3  */
  x86_unimpl("int3 @ 0x10ac469f");
L_10ac46a0:;
  /* 10ac46a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac46a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac46a4 jne 0x10ac4680 */
  if (!C.zf) goto L_10ac4680;
L_10ac46a6:;
  /* 10ac46a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac46a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac46aa call 0x10ac5630 */
  push32(0x10ac46afu); f_10ac5630();
  /* 10ac46af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac46b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac46b4 jne 0x10ac46d7 */
  if (!C.zf) goto L_10ac46d7;
  /* 10ac46b6 push 0x10aea784 */
  push32((uint32_t)(0x10aea784u));
  /* 10ac46bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac46bd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10ac46c2 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac46c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac46c9 call 0x10ac30f0 */
  push32(0x10ac46ceu); f_10ac30f0();
  /* 10ac46ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac46d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac46d4 jne 0x10ac46d7 */
  if (!C.zf) goto L_10ac46d7;
  /* 10ac46d6 int3  */
  x86_unimpl("int3 @ 0x10ac46d6");
L_10ac46d7:;
  /* 10ac46d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac46d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac46db jne 0x10ac46a6 */
  if (!C.zf) goto L_10ac46a6;
  /* 10ac46dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac46e0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac46e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac46e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac46e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac46ed jne 0x10ac46f6 */
  if (!C.zf) goto L_10ac46f6;
  /* 10ac46ef mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10ac46f6:;
  /* 10ac46f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac46fa je 0x10ac473a */
  if (C.zf) goto L_10ac473a;
L_10ac46fc:;
  /* 10ac46fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac46ff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4706 jne 0x10ac4711 */
  if (!C.zf) goto L_10ac4711;
  /* 10ac4708 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac470b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac470f je 0x10ac4732 */
  if (C.zf) goto L_10ac4732;
L_10ac4711:;
  /* 10ac4711 push 0x10aea73c */
  push32((uint32_t)(0x10aea73cu));
  /* 10ac4716 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4718 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10ac471d push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4722 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4724 call 0x10ac30f0 */
  push32(0x10ac4729u); f_10ac30f0();
  /* 10ac4729 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac472c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac472f jne 0x10ac4732 */
  if (!C.zf) goto L_10ac4732;
  /* 10ac4731 int3  */
  x86_unimpl("int3 @ 0x10ac4731");
L_10ac4732:;
  /* 10ac4732 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4734 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac4736 jne 0x10ac46fc */
  if (!C.zf) goto L_10ac46fc;
  /* 10ac4738 jmp 0x10ac479e */
  goto L_10ac479e;
L_10ac473a:;
  /* 10ac473a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac473d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac4740 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4745 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4748 jne 0x10ac475f */
  if (!C.zf) goto L_10ac475f;
  /* 10ac474a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac474d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4753 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4756 jne 0x10ac475f */
  if (!C.zf) goto L_10ac475f;
  /* 10ac4758 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10ac475f:;
  /* 10ac475f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac4762 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac4765 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac476a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac476d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4773 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4775 je 0x10ac4798 */
  if (C.zf) goto L_10ac4798;
  /* 10ac4777 push 0x10aea700 */
  push32((uint32_t)(0x10aea700u));
  /* 10ac477c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac477e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10ac4783 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4788 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac478a call 0x10ac30f0 */
  push32(0x10ac478fu); f_10ac30f0();
  /* 10ac478f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4792 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4795 jne 0x10ac4798 */
  if (!C.zf) goto L_10ac4798;
  /* 10ac4797 int3  */
  x86_unimpl("int3 @ 0x10ac4797");
L_10ac4798:;
  /* 10ac4798 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac479a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac479c jne 0x10ac475f */
  if (!C.zf) goto L_10ac475f;
L_10ac479e:;
  /* 10ac479e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac47a2 je 0x10ac47c9 */
  if (C.zf) goto L_10ac47c9;
  /* 10ac47a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac47a7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac47aa push eax */
  push32((uint32_t)(EAX));
  /* 10ac47ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac47ae push ecx */
  push32((uint32_t)(ECX));
  /* 10ac47af call 0x10ac7fb0 */
  push32(0x10ac47b4u); f_10ac7fb0();
  /* 10ac47b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac47b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac47ba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac47be jne 0x10ac47c7 */
  if (!C.zf) goto L_10ac47c7;
  /* 10ac47c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac47c2 jmp 0x10ac4a0a */
  goto L_10ac4a0a;
L_10ac47c7:;
  /* 10ac47c7 jmp 0x10ac47ec */
  goto L_10ac47ec;
L_10ac47c9:;
  /* 10ac47c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac47cc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac47cf push edx */
  push32((uint32_t)(EDX));
  /* 10ac47d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac47d3 push eax */
  push32((uint32_t)(EAX));
  /* 10ac47d4 call 0x10ac7f00 */
  push32(0x10ac47d9u); f_10ac7f00();
  /* 10ac47d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac47dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac47df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac47e3 jne 0x10ac47ec */
  if (!C.zf) goto L_10ac47ec;
  /* 10ac47e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac47e7 jmp 0x10ac4a0a */
  goto L_10ac4a0a;
L_10ac47ec:;
  /* 10ac47ec mov ecx, dword ptr [0x10aeda88] */
  ECX = (r32((uint32_t)(0x10aeda88)));
  /* 10ac47f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac47f5 mov dword ptr [0x10aeda88], ecx */
  w32((uint32_t)(0x10aeda88), (ECX));
  /* 10ac47fb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac47ff jne 0x10ac4857 */
  if (!C.zf) goto L_10ac4857;
  /* 10ac4801 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4804 mov eax, dword ptr [0x10aef620] */
  EAX = (r32((uint32_t)(0x10aef620)));
  /* 10ac4809 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac480c mov dword ptr [0x10aef620], eax */
  w32((uint32_t)(0x10aef620), (EAX));
  /* 10ac4811 mov ecx, dword ptr [0x10aef620] */
  ECX = (r32((uint32_t)(0x10aef620)));
  /* 10ac4817 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac481a mov dword ptr [0x10aef620], ecx */
  w32((uint32_t)(0x10aef620), (ECX));
  /* 10ac4820 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4823 mov eax, dword ptr [0x10aef628] */
  EAX = (r32((uint32_t)(0x10aef628)));
  /* 10ac4828 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac482b mov dword ptr [0x10aef628], eax */
  w32((uint32_t)(0x10aef628), (EAX));
  /* 10ac4830 mov ecx, dword ptr [0x10aef628] */
  ECX = (r32((uint32_t)(0x10aef628)));
  /* 10ac4836 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4839 mov dword ptr [0x10aef628], ecx */
  w32((uint32_t)(0x10aef628), (ECX));
  /* 10ac483f mov edx, dword ptr [0x10aef628] */
  EDX = (r32((uint32_t)(0x10aef628)));
  /* 10ac4845 cmp edx, dword ptr [0x10aef62c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aef62c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac484b jbe 0x10ac4857 */
  if ((C.cf||C.zf)) goto L_10ac4857;
  /* 10ac484d mov eax, dword ptr [0x10aef628] */
  EAX = (r32((uint32_t)(0x10aef628)));
  /* 10ac4852 mov dword ptr [0x10aef62c], eax */
  w32((uint32_t)(0x10aef62c), (EAX));
L_10ac4857:;
  /* 10ac4857 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac485a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac485d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac4860 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4863 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4866 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4869 jbe 0x10ac488f */
  if ((C.cf||C.zf)) goto L_10ac488f;
  /* 10ac486b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac486e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4871 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac4874 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4875 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4877 mov al, byte ptr [0x10aeda92] */
  AL = (r8((uint32_t)(0x10aeda92)));
  /* 10ac487c push eax */
  push32((uint32_t)(EAX));
  /* 10ac487d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4880 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4883 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4886 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4887 call 0x10ac7da0 */
  push32(0x10ac488cu); f_10ac7da0();
  /* 10ac488c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac488f:;
  /* 10ac488f push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac4891 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4893 mov al, byte ptr [0x10aeda90] */
  AL = (r8((uint32_t)(0x10aeda90)));
  /* 10ac4898 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4899 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac489c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac489f push ecx */
  push32((uint32_t)(ECX));
  /* 10ac48a0 call 0x10ac7da0 */
  push32(0x10ac48a5u); f_10ac7da0();
  /* 10ac48a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac48a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac48ac jne 0x10ac48c9 */
  if (!C.zf) goto L_10ac48c9;
  /* 10ac48ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac48b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac48b4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ac48b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac48ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac48bd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10ac48c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac48c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac48c6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10ac48c9:;
  /* 10ac48c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac48cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac48cf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10ac48d2:;
  /* 10ac48d2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac48d6 jne 0x10ac4907 */
  if (!C.zf) goto L_10ac4907;
  /* 10ac48d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac48dc jne 0x10ac48e6 */
  if (!C.zf) goto L_10ac48e6;
  /* 10ac48de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac48e1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac48e4 je 0x10ac4907 */
  if (C.zf) goto L_10ac4907;
L_10ac48e6:;
  /* 10ac48e6 push 0x10aea6cc */
  push32((uint32_t)(0x10aea6ccu));
  /* 10ac48eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac48ed push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10ac48f2 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac48f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac48f9 call 0x10ac30f0 */
  push32(0x10ac48feu); f_10ac30f0();
  /* 10ac48fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4901 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4904 jne 0x10ac4907 */
  if (!C.zf) goto L_10ac4907;
  /* 10ac4906 int3  */
  x86_unimpl("int3 @ 0x10ac4906");
L_10ac4907:;
  /* 10ac4907 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac4909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac490b jne 0x10ac48d2 */
  if (!C.zf) goto L_10ac48d2;
  /* 10ac490d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4910 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4913 je 0x10ac491b */
  if (C.zf) goto L_10ac491b;
  /* 10ac4915 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4919 je 0x10ac4923 */
  if (C.zf) goto L_10ac4923;
L_10ac491b:;
  /* 10ac491b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac491e jmp 0x10ac4a0a */
  goto L_10ac4a0a;
L_10ac4923:;
  /* 10ac4923 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4926 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4929 je 0x10ac493b */
  if (C.zf) goto L_10ac493b;
  /* 10ac492b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac492e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac4930 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4933 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac4936 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ac4939 jmp 0x10ac4977 */
  goto L_10ac4977;
L_10ac493b:;
  /* 10ac493b mov eax, dword ptr [0x10aef61c] */
  EAX = (r32((uint32_t)(0x10aef61c)));
  /* 10ac4940 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4943 je 0x10ac4966 */
  if (C.zf) goto L_10ac4966;
  /* 10ac4945 push 0x10aea6b0 */
  push32((uint32_t)(0x10aea6b0u));
  /* 10ac494a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac494c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10ac4951 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4956 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4958 call 0x10ac30f0 */
  push32(0x10ac495du); f_10ac30f0();
  /* 10ac495d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4960 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4963 jne 0x10ac4966 */
  if (!C.zf) goto L_10ac4966;
  /* 10ac4965 int3  */
  x86_unimpl("int3 @ 0x10ac4965");
L_10ac4966:;
  /* 10ac4966 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4968 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac496a jne 0x10ac493b */
  if (!C.zf) goto L_10ac493b;
  /* 10ac496c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac496f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac4972 mov dword ptr [0x10aef61c], eax */
  w32((uint32_t)(0x10aef61c), (EAX));
L_10ac4977:;
  /* 10ac4977 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac497a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac497e je 0x10ac498f */
  if (C.zf) goto L_10ac498f;
  /* 10ac4980 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4983 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac4986 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4989 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac498b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ac498d jmp 0x10ac49ca */
  goto L_10ac49ca;
L_10ac498f:;
  /* 10ac498f mov eax, dword ptr [0x10aef624] */
  EAX = (r32((uint32_t)(0x10aef624)));
  /* 10ac4994 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4997 je 0x10ac49ba */
  if (C.zf) goto L_10ac49ba;
  /* 10ac4999 push 0x10aea694 */
  push32((uint32_t)(0x10aea694u));
  /* 10ac499e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac49a0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10ac49a5 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac49aa push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac49ac call 0x10ac30f0 */
  push32(0x10ac49b1u); f_10ac30f0();
  /* 10ac49b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac49b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac49b7 jne 0x10ac49ba */
  if (!C.zf) goto L_10ac49ba;
  /* 10ac49b9 int3  */
  x86_unimpl("int3 @ 0x10ac49b9");
L_10ac49ba:;
  /* 10ac49ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac49bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac49be jne 0x10ac498f */
  if (!C.zf) goto L_10ac498f;
  /* 10ac49c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac49c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac49c5 mov dword ptr [0x10aef624], eax */
  w32((uint32_t)(0x10aef624), (EAX));
L_10ac49ca:;
  /* 10ac49ca cmp dword ptr [0x10aef624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac49d1 je 0x10ac49e1 */
  if (C.zf) goto L_10ac49e1;
  /* 10ac49d3 mov ecx, dword ptr [0x10aef624] */
  ECX = (r32((uint32_t)(0x10aef624)));
  /* 10ac49d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac49dc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ac49df jmp 0x10ac49e9 */
  goto L_10ac49e9;
L_10ac49e1:;
  /* 10ac49e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac49e4 mov dword ptr [0x10aef61c], eax */
  w32((uint32_t)(0x10aef61c), (EAX));
L_10ac49e9:;
  /* 10ac49e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac49ec mov edx, dword ptr [0x10aef624] */
  EDX = (r32((uint32_t)(0x10aef624)));
  /* 10ac49f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ac49f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac49f7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10ac49fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac4a01 mov dword ptr [0x10aef624], ecx */
  w32((uint32_t)(0x10aef624), (ECX));
  /* 10ac4a07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ac4a0a:;
  /* 10ac4a0a pop edi */
  EDI = (pop32());
  /* 10ac4a0b pop esi */
  ESI = (pop32());
  /* 10ac4a0c pop ebx */
  EBX = (pop32());
  /* 10ac4a0d mov esp, ebp */
  ESP = (EBP);
  /* 10ac4a0f pop ebp */
  EBP = (pop32());
  /* 10ac4a10 ret  */
  ESPCHK(0x10ac4500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a20 @ 0x10ac4a20 (27 bytes, 13 insns) */
void f_10ac4a20(void) {
  FTRACE(0x10ac4a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4a21 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4a29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4a2c push eax */
  push32((uint32_t)(EAX));
  /* 10ac4a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4a30 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4a31 call 0x10ac4a40 */
  push32(0x10ac4a36u); f_10ac4a40();
  /* 10ac4a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4a39 pop ebp */
  EBP = (pop32());
  /* 10ac4a3a ret  */
  ESPCHK(0x10ac4a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x10ac4a40 (64 bytes, 27 insns) */
void f_10ac4a40(void) {
  FTRACE(0x10ac4a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4a41 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4a44 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac4a46 call 0x10ac7a30 */
  push32(0x10ac4a4bu); f_10ac7a30();
  /* 10ac4a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4a50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac4a53 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4a54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac4a57 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4a58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac4a5b push edx */
  push32((uint32_t)(EDX));
  /* 10ac4a5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4a5f push eax */
  push32((uint32_t)(EAX));
  /* 10ac4a60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4a63 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4a64 call 0x10ac4500 */
  push32(0x10ac4a69u); f_10ac4500();
  /* 10ac4a69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4a6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac4a6f push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac4a71 call 0x10ac7ad0 */
  push32(0x10ac4a76u); f_10ac7ad0();
  /* 10ac4a76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4a79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4a7c mov esp, ebp */
  ESP = (EBP);
  /* 10ac4a7e pop ebp */
  EBP = (pop32());
  /* 10ac4a7f ret  */
  ESPCHK(0x10ac4a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a80 @ 0x10ac4a80 (19 bytes, 9 insns) */
void f_10ac4a80(void) {
  FTRACE(0x10ac4a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4a81 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4a85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4a88 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4a89 call 0x10ac4ac0 */
  push32(0x10ac4a8eu); f_10ac4ac0();
  /* 10ac4a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4a91 pop ebp */
  EBP = (pop32());
  /* 10ac4a92 ret  */
  ESPCHK(0x10ac4a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004aa0 @ 0x10ac4aa0 (19 bytes, 9 insns) */
void f_10ac4aa0(void) {
  FTRACE(0x10ac4aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4aa9 call 0x10ac4af0 */
  push32(0x10ac4aaeu); f_10ac4af0();
  /* 10ac4aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4ab1 pop ebp */
  EBP = (pop32());
  /* 10ac4ab2 ret  */
  ESPCHK(0x10ac4aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x10ac4ac0 (41 bytes, 16 insns) */
void f_10ac4ac0(void) {
  FTRACE(0x10ac4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4ac3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac4ac5 call 0x10ac7a30 */
  push32(0x10ac4acau); f_10ac7a30();
  /* 10ac4aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4acd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4ad0 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4ad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4ad4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4ad5 call 0x10ac4af0 */
  push32(0x10ac4adau); f_10ac4af0();
  /* 10ac4ada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4add push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac4adf call 0x10ac7ad0 */
  push32(0x10ac4ae4u); f_10ac7ad0();
  /* 10ac4ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4ae7 pop ebp */
  EBP = (pop32());
  /* 10ac4ae8 ret  */
  ESPCHK(0x10ac4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004af0 @ 0x10ac4af0 (1004 bytes, 342 insns) */
void f_10ac4af0(void) {
  FTRACE(0x10ac4af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4af1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4af3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4af4 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac4af5 push esi */
  push32((uint32_t)(ESI));
  /* 10ac4af6 push edi */
  push32((uint32_t)(EDI));
  /* 10ac4af7 mov eax, dword ptr [0x10aeda84] */
  EAX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac4afc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4b01 je 0x10ac4b33 */
  if (C.zf) goto L_10ac4b33;
L_10ac4b03:;
  /* 10ac4b03 call 0x10ac51d0 */
  push32(0x10ac4b08u); f_10ac51d0();
  /* 10ac4b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4b0a jne 0x10ac4b2d */
  if (!C.zf) goto L_10ac4b2d;
  /* 10ac4b0c push 0x10aea680 */
  push32((uint32_t)(0x10aea680u));
  /* 10ac4b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b13 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10ac4b18 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4b1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4b1f call 0x10ac30f0 */
  push32(0x10ac4b24u); f_10ac30f0();
  /* 10ac4b24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4b27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4b2a jne 0x10ac4b2d */
  if (!C.zf) goto L_10ac4b2d;
  /* 10ac4b2c int3  */
  x86_unimpl("int3 @ 0x10ac4b2c");
L_10ac4b2d:;
  /* 10ac4b2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4b2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac4b31 jne 0x10ac4b03 */
  if (!C.zf) goto L_10ac4b03;
L_10ac4b33:;
  /* 10ac4b33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4b37 jne 0x10ac4b3e */
  if (!C.zf) goto L_10ac4b3e;
  /* 10ac4b39 jmp 0x10ac4ed5 */
  goto L_10ac4ed5;
L_10ac4b3e:;
  /* 10ac4b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac4b47 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4b4d push eax */
  push32((uint32_t)(EAX));
  /* 10ac4b4e push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac4b50 call dword ptr [0x10aedc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aedc90))), 0x10ac4b56u);
  /* 10ac4b56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4b5b jne 0x10ac4b88 */
  if (!C.zf) goto L_10ac4b88;
L_10ac4b5d:;
  /* 10ac4b5d push 0x10aea944 */
  push32((uint32_t)(0x10aea944u));
  /* 10ac4b62 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac4b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b6f call 0x10ac30f0 */
  push32(0x10ac4b74u); f_10ac30f0();
  /* 10ac4b74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4b77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4b7a jne 0x10ac4b7d */
  if (!C.zf) goto L_10ac4b7d;
  /* 10ac4b7c int3  */
  x86_unimpl("int3 @ 0x10ac4b7c");
L_10ac4b7d:;
  /* 10ac4b7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4b7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac4b81 jne 0x10ac4b5d */
  if (!C.zf) goto L_10ac4b5d;
  /* 10ac4b83 jmp 0x10ac4ed5 */
  goto L_10ac4ed5;
L_10ac4b88:;
  /* 10ac4b88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4b8b push edx */
  push32((uint32_t)(EDX));
  /* 10ac4b8c call 0x10ac5630 */
  push32(0x10ac4b91u); f_10ac5630();
  /* 10ac4b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4b94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4b96 jne 0x10ac4bb9 */
  if (!C.zf) goto L_10ac4bb9;
  /* 10ac4b98 push 0x10aea784 */
  push32((uint32_t)(0x10aea784u));
  /* 10ac4b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4b9f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10ac4ba4 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4ba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4bab call 0x10ac30f0 */
  push32(0x10ac4bb0u); f_10ac30f0();
  /* 10ac4bb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4bb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4bb6 jne 0x10ac4bb9 */
  if (!C.zf) goto L_10ac4bb9;
  /* 10ac4bb8 int3  */
  x86_unimpl("int3 @ 0x10ac4bb8");
L_10ac4bb9:;
  /* 10ac4bb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4bbd jne 0x10ac4b88 */
  if (!C.zf) goto L_10ac4b88;
  /* 10ac4bbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4bc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac4bc5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ac4bc8:;
  /* 10ac4bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4bcb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac4bce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4bd3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4bd6 je 0x10ac4c1b */
  if (C.zf) goto L_10ac4c1b;
  /* 10ac4bd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4bdb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4bdf je 0x10ac4c1b */
  if (C.zf) goto L_10ac4c1b;
  /* 10ac4be1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4be4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac4be7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4bec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4bef je 0x10ac4c1b */
  if (C.zf) goto L_10ac4c1b;
  /* 10ac4bf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4bf4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4bf8 je 0x10ac4c1b */
  if (C.zf) goto L_10ac4c1b;
  /* 10ac4bfa push 0x10aea91c */
  push32((uint32_t)(0x10aea91cu));
  /* 10ac4bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4c01 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10ac4c06 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4c0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4c0d call 0x10ac30f0 */
  push32(0x10ac4c12u); f_10ac30f0();
  /* 10ac4c12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4c15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4c18 jne 0x10ac4c1b */
  if (!C.zf) goto L_10ac4c1b;
  /* 10ac4c1a int3  */
  x86_unimpl("int3 @ 0x10ac4c1a");
L_10ac4c1b:;
  /* 10ac4c1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac4c1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac4c1f jne 0x10ac4bc8 */
  if (!C.zf) goto L_10ac4bc8;
  /* 10ac4c21 mov eax, dword ptr [0x10aeda84] */
  EAX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac4c26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4c2b jne 0x10ac4cf6 */
  if (!C.zf) goto L_10ac4cf6;
  /* 10ac4c31 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac4c33 mov cl, byte ptr [0x10aeda90] */
  CL = (r8((uint32_t)(0x10aeda90)));
  /* 10ac4c39 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4c3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4c3d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4c40 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4c41 call 0x10ac5140 */
  push32(0x10ac4c46u); f_10ac5140();
  /* 10ac4c46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4c4b jne 0x10ac4c90 */
  if (!C.zf) goto L_10ac4c90;
L_10ac4c4d:;
  /* 10ac4c4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4c50 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4c53 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4c54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4c57 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ac4c5a push edx */
  push32((uint32_t)(EDX));
  /* 10ac4c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4c5e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ac4c61 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4c67 mov edx, dword ptr [ecx*4 + 0x10aeda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeda94)));
  /* 10ac4c6e push edx */
  push32((uint32_t)(EDX));
  /* 10ac4c6f push 0x10aea8f0 */
  push32((uint32_t)(0x10aea8f0u));
  /* 10ac4c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4c7c call 0x10ac30f0 */
  push32(0x10ac4c81u); f_10ac30f0();
  /* 10ac4c81 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4c84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4c87 jne 0x10ac4c8a */
  if (!C.zf) goto L_10ac4c8a;
  /* 10ac4c89 int3  */
  x86_unimpl("int3 @ 0x10ac4c89");
L_10ac4c8a:;
  /* 10ac4c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4c8e jne 0x10ac4c4d */
  if (!C.zf) goto L_10ac4c4d;
L_10ac4c90:;
  /* 10ac4c90 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac4c92 mov cl, byte ptr [0x10aeda90] */
  CL = (r8((uint32_t)(0x10aeda90)));
  /* 10ac4c98 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4c99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4c9c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac4c9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4ca2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10ac4ca6 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4ca7 call 0x10ac5140 */
  push32(0x10ac4cacu); f_10ac5140();
  /* 10ac4cac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4caf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4cb1 jne 0x10ac4cf6 */
  if (!C.zf) goto L_10ac4cf6;
L_10ac4cb3:;
  /* 10ac4cb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4cb6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4cb9 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4cba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4cbd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ac4cc0 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4cc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4cc4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ac4cc7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4ccd mov edx, dword ptr [ecx*4 + 0x10aeda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeda94)));
  /* 10ac4cd4 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4cd5 push 0x10aea8c4 */
  push32((uint32_t)(0x10aea8c4u));
  /* 10ac4cda push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4cdc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4cde push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4ce2 call 0x10ac30f0 */
  push32(0x10ac4ce7u); f_10ac30f0();
  /* 10ac4ce7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4cea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4ced jne 0x10ac4cf0 */
  if (!C.zf) goto L_10ac4cf0;
  /* 10ac4cef int3  */
  x86_unimpl("int3 @ 0x10ac4cef");
L_10ac4cf0:;
  /* 10ac4cf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4cf4 jne 0x10ac4cb3 */
  if (!C.zf) goto L_10ac4cb3;
L_10ac4cf6:;
  /* 10ac4cf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4cf9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4cfd jne 0x10ac4d6b */
  if (!C.zf) goto L_10ac4d6b;
L_10ac4cff:;
  /* 10ac4cff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4d02 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4d09 jne 0x10ac4d14 */
  if (!C.zf) goto L_10ac4d14;
  /* 10ac4d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4d0e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4d12 je 0x10ac4d35 */
  if (C.zf) goto L_10ac4d35;
L_10ac4d14:;
  /* 10ac4d14 push 0x10aea884 */
  push32((uint32_t)(0x10aea884u));
  /* 10ac4d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4d1b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10ac4d20 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4d25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4d27 call 0x10ac30f0 */
  push32(0x10ac4d2cu); f_10ac30f0();
  /* 10ac4d2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4d2f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4d32 jne 0x10ac4d35 */
  if (!C.zf) goto L_10ac4d35;
  /* 10ac4d34 int3  */
  x86_unimpl("int3 @ 0x10ac4d34");
L_10ac4d35:;
  /* 10ac4d35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4d37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac4d39 jne 0x10ac4cff */
  if (!C.zf) goto L_10ac4cff;
  /* 10ac4d3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4d3e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac4d41 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4d44 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4d45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4d47 mov cl, byte ptr [0x10aeda91] */
  CL = (r8((uint32_t)(0x10aeda91)));
  /* 10ac4d4d push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4d4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4d51 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4d52 call 0x10ac7da0 */
  push32(0x10ac4d57u); f_10ac7da0();
  /* 10ac4d57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4d5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4d5d push eax */
  push32((uint32_t)(EAX));
  /* 10ac4d5e call 0x10ac81a0 */
  push32(0x10ac4d63u); f_10ac81a0();
  /* 10ac4d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4d66 jmp 0x10ac4ed5 */
  goto L_10ac4ed5;
L_10ac4d6b:;
  /* 10ac4d6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4d6e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4d72 jne 0x10ac4d81 */
  if (!C.zf) goto L_10ac4d81;
  /* 10ac4d74 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4d78 jne 0x10ac4d81 */
  if (!C.zf) goto L_10ac4d81;
  /* 10ac4d7a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10ac4d81:;
  /* 10ac4d81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4d84 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac4d87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4d8a je 0x10ac4dad */
  if (C.zf) goto L_10ac4dad;
  /* 10ac4d8c push 0x10aea864 */
  push32((uint32_t)(0x10aea864u));
  /* 10ac4d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4d93 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10ac4d98 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4d9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4d9f call 0x10ac30f0 */
  push32(0x10ac4da4u); f_10ac30f0();
  /* 10ac4da4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4da7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4daa jne 0x10ac4dad */
  if (!C.zf) goto L_10ac4dad;
  /* 10ac4dac int3  */
  x86_unimpl("int3 @ 0x10ac4dac");
L_10ac4dad:;
  /* 10ac4dad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4daf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac4db1 jne 0x10ac4d81 */
  if (!C.zf) goto L_10ac4d81;
  /* 10ac4db3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4db6 mov eax, dword ptr [0x10aef628] */
  EAX = (r32((uint32_t)(0x10aef628)));
  /* 10ac4dbb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac4dbe mov dword ptr [0x10aef628], eax */
  w32((uint32_t)(0x10aef628), (EAX));
  /* 10ac4dc3 mov ecx, dword ptr [0x10aeda84] */
  ECX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac4dc9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4dcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac4dce jne 0x10ac4eac */
  if (!C.zf) goto L_10ac4eac;
  /* 10ac4dd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4dd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4dda je 0x10ac4dec */
  if (C.zf) goto L_10ac4dec;
  /* 10ac4ddc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4ddf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac4de1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4de4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac4de7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ac4dea jmp 0x10ac4e2a */
  goto L_10ac4e2a;
L_10ac4dec:;
  /* 10ac4dec mov ecx, dword ptr [0x10aef61c] */
  ECX = (r32((uint32_t)(0x10aef61c)));
  /* 10ac4df2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4df5 je 0x10ac4e18 */
  if (C.zf) goto L_10ac4e18;
  /* 10ac4df7 push 0x10aea84c */
  push32((uint32_t)(0x10aea84cu));
  /* 10ac4dfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4dfe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10ac4e03 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4e08 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4e0a call 0x10ac30f0 */
  push32(0x10ac4e0fu); f_10ac30f0();
  /* 10ac4e0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4e12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4e15 jne 0x10ac4e18 */
  if (!C.zf) goto L_10ac4e18;
  /* 10ac4e17 int3  */
  x86_unimpl("int3 @ 0x10ac4e17");
L_10ac4e18:;
  /* 10ac4e18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac4e1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac4e1c jne 0x10ac4dec */
  if (!C.zf) goto L_10ac4dec;
  /* 10ac4e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4e21 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac4e24 mov dword ptr [0x10aef61c], ecx */
  w32((uint32_t)(0x10aef61c), (ECX));
L_10ac4e2a:;
  /* 10ac4e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4e2d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4e31 je 0x10ac4e42 */
  if (C.zf) goto L_10ac4e42;
  /* 10ac4e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4e36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac4e39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4e3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac4e3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ac4e40 jmp 0x10ac4e7f */
  goto L_10ac4e7f;
L_10ac4e42:;
  /* 10ac4e42 mov ecx, dword ptr [0x10aef624] */
  ECX = (r32((uint32_t)(0x10aef624)));
  /* 10ac4e48 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4e4b je 0x10ac4e6e */
  if (C.zf) goto L_10ac4e6e;
  /* 10ac4e4d push 0x10aea834 */
  push32((uint32_t)(0x10aea834u));
  /* 10ac4e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4e54 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10ac4e59 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4e5e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4e60 call 0x10ac30f0 */
  push32(0x10ac4e65u); f_10ac30f0();
  /* 10ac4e65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4e68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4e6b jne 0x10ac4e6e */
  if (!C.zf) goto L_10ac4e6e;
  /* 10ac4e6d int3  */
  x86_unimpl("int3 @ 0x10ac4e6d");
L_10ac4e6e:;
  /* 10ac4e6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac4e70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac4e72 jne 0x10ac4e42 */
  if (!C.zf) goto L_10ac4e42;
  /* 10ac4e74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4e77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac4e79 mov dword ptr [0x10aef624], ecx */
  w32((uint32_t)(0x10aef624), (ECX));
L_10ac4e7f:;
  /* 10ac4e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4e82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac4e85 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4e88 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4e89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4e8b mov cl, byte ptr [0x10aeda91] */
  CL = (r8((uint32_t)(0x10aeda91)));
  /* 10ac4e91 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4e92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4e95 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4e96 call 0x10ac7da0 */
  push32(0x10ac4e9bu); f_10ac7da0();
  /* 10ac4e9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4e9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4ea1 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4ea2 call 0x10ac81a0 */
  push32(0x10ac4ea7u); f_10ac81a0();
  /* 10ac4ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4eaa jmp 0x10ac4ed5 */
  goto L_10ac4ed5;
L_10ac4eac:;
  /* 10ac4eac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4eaf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10ac4eb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4eb9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac4ebc push eax */
  push32((uint32_t)(EAX));
  /* 10ac4ebd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4ebf mov cl, byte ptr [0x10aeda91] */
  CL = (r8((uint32_t)(0x10aeda91)));
  /* 10ac4ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac4ec6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac4ec9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4ecc push edx */
  push32((uint32_t)(EDX));
  /* 10ac4ecd call 0x10ac7da0 */
  push32(0x10ac4ed2u); f_10ac7da0();
  /* 10ac4ed2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac4ed5:;
  /* 10ac4ed5 pop edi */
  EDI = (pop32());
  /* 10ac4ed6 pop esi */
  ESI = (pop32());
  /* 10ac4ed7 pop ebx */
  EBX = (pop32());
  /* 10ac4ed8 mov esp, ebp */
  ESP = (EBP);
  /* 10ac4eda pop ebp */
  EBP = (pop32());
  /* 10ac4edb ret  */
  ESPCHK(0x10ac4af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee0 @ 0x10ac4ee0 (19 bytes, 9 insns) */
void f_10ac4ee0(void) {
  FTRACE(0x10ac4ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac4ee5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10ac4ee9 call 0x10ac4f00 */
  push32(0x10ac4eeeu); f_10ac4f00();
  /* 10ac4eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4ef1 pop ebp */
  EBP = (pop32());
  /* 10ac4ef2 ret  */
  ESPCHK(0x10ac4ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f00 @ 0x10ac4f00 (342 bytes, 119 insns) */
void f_10ac4f00(void) {
  FTRACE(0x10ac4f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac4f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac4f01 mov ebp, esp */
  EBP = (ESP);
  /* 10ac4f03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac4f06 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac4f07 push esi */
  push32((uint32_t)(ESI));
  /* 10ac4f08 push edi */
  push32((uint32_t)(EDI));
  /* 10ac4f09 mov eax, dword ptr [0x10aeda84] */
  EAX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac4f0e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4f13 je 0x10ac4f45 */
  if (C.zf) goto L_10ac4f45;
L_10ac4f15:;
  /* 10ac4f15 call 0x10ac51d0 */
  push32(0x10ac4f1au); f_10ac51d0();
  /* 10ac4f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4f1c jne 0x10ac4f3f */
  if (!C.zf) goto L_10ac4f3f;
  /* 10ac4f1e push 0x10aea680 */
  push32((uint32_t)(0x10aea680u));
  /* 10ac4f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4f25 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10ac4f2a push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4f2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4f31 call 0x10ac30f0 */
  push32(0x10ac4f36u); f_10ac30f0();
  /* 10ac4f36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4f39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4f3c jne 0x10ac4f3f */
  if (!C.zf) goto L_10ac4f3f;
  /* 10ac4f3e int3  */
  x86_unimpl("int3 @ 0x10ac4f3e");
L_10ac4f3f:;
  /* 10ac4f3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac4f41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac4f43 jne 0x10ac4f15 */
  if (!C.zf) goto L_10ac4f15;
L_10ac4f45:;
  /* 10ac4f45 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac4f47 call 0x10ac7a30 */
  push32(0x10ac4f4cu); f_10ac7a30();
  /* 10ac4f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac4f4f:;
  /* 10ac4f4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4f52 push edx */
  push32((uint32_t)(EDX));
  /* 10ac4f53 call 0x10ac5630 */
  push32(0x10ac4f58u); f_10ac5630();
  /* 10ac4f58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4f5d jne 0x10ac4f80 */
  if (!C.zf) goto L_10ac4f80;
  /* 10ac4f5f push 0x10aea784 */
  push32((uint32_t)(0x10aea784u));
  /* 10ac4f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4f66 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10ac4f6b push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4f70 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4f72 call 0x10ac30f0 */
  push32(0x10ac4f77u); f_10ac30f0();
  /* 10ac4f77 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4f7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4f7d jne 0x10ac4f80 */
  if (!C.zf) goto L_10ac4f80;
  /* 10ac4f7f int3  */
  x86_unimpl("int3 @ 0x10ac4f7f");
L_10ac4f80:;
  /* 10ac4f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4f82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac4f84 jne 0x10ac4f4f */
  if (!C.zf) goto L_10ac4f4f;
  /* 10ac4f86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac4f89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac4f8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ac4f8f:;
  /* 10ac4f8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac4f92 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac4f95 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4f9a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4f9d je 0x10ac4fe2 */
  if (C.zf) goto L_10ac4fe2;
  /* 10ac4f9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac4fa2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4fa6 je 0x10ac4fe2 */
  if (C.zf) goto L_10ac4fe2;
  /* 10ac4fa8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac4fab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac4fae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac4fb3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4fb6 je 0x10ac4fe2 */
  if (C.zf) goto L_10ac4fe2;
  /* 10ac4fb8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac4fbb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4fbf je 0x10ac4fe2 */
  if (C.zf) goto L_10ac4fe2;
  /* 10ac4fc1 push 0x10aea91c */
  push32((uint32_t)(0x10aea91cu));
  /* 10ac4fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac4fc8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10ac4fcd push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac4fd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac4fd4 call 0x10ac30f0 */
  push32(0x10ac4fd9u); f_10ac30f0();
  /* 10ac4fd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac4fdc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4fdf jne 0x10ac4fe2 */
  if (!C.zf) goto L_10ac4fe2;
  /* 10ac4fe1 int3  */
  x86_unimpl("int3 @ 0x10ac4fe1");
L_10ac4fe2:;
  /* 10ac4fe2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac4fe4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac4fe6 jne 0x10ac4f8f */
  if (!C.zf) goto L_10ac4f8f;
  /* 10ac4fe8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac4feb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4fef jne 0x10ac4ffe */
  if (!C.zf) goto L_10ac4ffe;
  /* 10ac4ff1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac4ff5 jne 0x10ac4ffe */
  if (!C.zf) goto L_10ac4ffe;
  /* 10ac4ff7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10ac4ffe:;
  /* 10ac4ffe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5001 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5005 je 0x10ac5039 */
  if (C.zf) goto L_10ac5039;
L_10ac5007:;
  /* 10ac5007 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac500a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac500d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5010 je 0x10ac5033 */
  if (C.zf) goto L_10ac5033;
  /* 10ac5012 push 0x10aea864 */
  push32((uint32_t)(0x10aea864u));
  /* 10ac5017 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5019 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10ac501e push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac5023 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac5025 call 0x10ac30f0 */
  push32(0x10ac502au); f_10ac30f0();
  /* 10ac502a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac502d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5030 jne 0x10ac5033 */
  if (!C.zf) goto L_10ac5033;
  /* 10ac5032 int3  */
  x86_unimpl("int3 @ 0x10ac5032");
L_10ac5033:;
  /* 10ac5033 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5035 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac5037 jne 0x10ac5007 */
  if (!C.zf) goto L_10ac5007;
L_10ac5039:;
  /* 10ac5039 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac503c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac503f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac5042 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac5044 call 0x10ac7ad0 */
  push32(0x10ac5049u); f_10ac7ad0();
  /* 10ac5049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac504c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac504f pop edi */
  EDI = (pop32());
  /* 10ac5050 pop esi */
  ESI = (pop32());
  /* 10ac5051 pop ebx */
  EBX = (pop32());
  /* 10ac5052 mov esp, ebp */
  ESP = (EBP);
  /* 10ac5054 pop ebp */
  EBP = (pop32());
  /* 10ac5055 ret  */
  ESPCHK(0x10ac4f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005060 @ 0x10ac5060 (28 bytes, 11 insns) */
void f_10ac5060(void) {
  FTRACE(0x10ac5060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5060 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5061 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5063 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5064 mov eax, dword ptr [0x10aeda8c] */
  EAX = (r32((uint32_t)(0x10aeda8c)));
  /* 10ac5069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac506c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac506f mov dword ptr [0x10aeda8c], ecx */
  w32((uint32_t)(0x10aeda8c), (ECX));
  /* 10ac5075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5078 mov esp, ebp */
  ESP = (EBP);
  /* 10ac507a pop ebp */
  EBP = (pop32());
  /* 10ac507b ret  */
  ESPCHK(0x10ac5060u, _esp0);
  ESP += 4; return;
}

/* FUN_10005080 @ 0x10ac5080 (157 bytes, 59 insns) */
void f_10ac5080(void) {
  FTRACE(0x10ac5080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5080 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5081 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5083 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5084 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac5085 push esi */
  push32((uint32_t)(ESI));
  /* 10ac5086 push edi */
  push32((uint32_t)(EDI));
  /* 10ac5087 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac5089 call 0x10ac7a30 */
  push32(0x10ac508eu); f_10ac7a30();
  /* 10ac508e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5094 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5095 call 0x10ac5630 */
  push32(0x10ac509au); f_10ac5630();
  /* 10ac509a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac509d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac509f je 0x10ac510c */
  if (C.zf) goto L_10ac510c;
  /* 10ac50a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac50a4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac50a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ac50aa:;
  /* 10ac50aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac50ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac50b0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac50b5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac50b8 je 0x10ac50fd */
  if (C.zf) goto L_10ac50fd;
  /* 10ac50ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac50bd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac50c1 je 0x10ac50fd */
  if (C.zf) goto L_10ac50fd;
  /* 10ac50c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac50c6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac50c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac50ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac50d1 je 0x10ac50fd */
  if (C.zf) goto L_10ac50fd;
  /* 10ac50d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac50d6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac50da je 0x10ac50fd */
  if (C.zf) goto L_10ac50fd;
  /* 10ac50dc push 0x10aea91c */
  push32((uint32_t)(0x10aea91cu));
  /* 10ac50e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac50e3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10ac50e8 push 0x10aea674 */
  push32((uint32_t)(0x10aea674u));
  /* 10ac50ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac50ef call 0x10ac30f0 */
  push32(0x10ac50f4u); f_10ac30f0();
  /* 10ac50f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac50f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac50fa jne 0x10ac50fd */
  if (!C.zf) goto L_10ac50fd;
  /* 10ac50fc int3  */
  x86_unimpl("int3 @ 0x10ac50fc");
L_10ac50fd:;
  /* 10ac50fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac50ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac5101 jne 0x10ac50aa */
  if (!C.zf) goto L_10ac50aa;
  /* 10ac5103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5106 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac5109 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10ac510c:;
  /* 10ac510c push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac510e call 0x10ac7ad0 */
  push32(0x10ac5113u); f_10ac7ad0();
  /* 10ac5113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5116 pop edi */
  EDI = (pop32());
  /* 10ac5117 pop esi */
  ESI = (pop32());
  /* 10ac5118 pop ebx */
  EBX = (pop32());
  /* 10ac5119 mov esp, ebp */
  ESP = (EBP);
  /* 10ac511b pop ebp */
  EBP = (pop32());
  /* 10ac511c ret  */
  ESPCHK(0x10ac5080u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x10ac5120 (28 bytes, 11 insns) */
void f_10ac5120(void) {
  FTRACE(0x10ac5120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5120 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5121 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5123 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5124 mov eax, dword ptr [0x10aedc90] */
  EAX = (r32((uint32_t)(0x10aedc90)));
  /* 10ac5129 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac512c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac512f mov dword ptr [0x10aedc90], ecx */
  w32((uint32_t)(0x10aedc90), (ECX));
  /* 10ac5135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5138 mov esp, ebp */
  ESP = (EBP);
  /* 10ac513a pop ebp */
  EBP = (pop32());
  /* 10ac513b ret  */
  ESPCHK(0x10ac5120u, _esp0);
  ESP += 4; return;
}

/* FUN_10005140 @ 0x10ac5140 (136 bytes, 55 insns) */
void f_10ac5140(void) {
  FTRACE(0x10ac5140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5140 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5141 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5143 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5144 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac5145 push esi */
  push32((uint32_t)(ESI));
  /* 10ac5146 push edi */
  push32((uint32_t)(EDI));
  /* 10ac5147 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10ac514e:;
  /* 10ac514e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac5151 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac5154 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5157 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10ac515a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac515c je 0x10ac51be */
  if (C.zf) goto L_10ac51be;
  /* 10ac515e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5161 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5163 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ac5165 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac5168 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac516e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5171 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5174 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ac5177 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5179 je 0x10ac51bc */
  if (C.zf) goto L_10ac51bc;
L_10ac517b:;
  /* 10ac517b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac517e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5183 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5184 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5187 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5189 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10ac518c push edx */
  push32((uint32_t)(EDX));
  /* 10ac518d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5190 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5193 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5194 push 0x10aea960 */
  push32((uint32_t)(0x10aea960u));
  /* 10ac5199 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac519b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac519d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac519f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac51a1 call 0x10ac30f0 */
  push32(0x10ac51a6u); f_10ac30f0();
  /* 10ac51a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac51a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac51ac jne 0x10ac51af */
  if (!C.zf) goto L_10ac51af;
  /* 10ac51ae int3  */
  x86_unimpl("int3 @ 0x10ac51ae");
L_10ac51af:;
  /* 10ac51af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac51b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac51b3 jne 0x10ac517b */
  if (!C.zf) goto L_10ac517b;
  /* 10ac51b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ac51bc:;
  /* 10ac51bc jmp 0x10ac514e */
  goto L_10ac514e;
L_10ac51be:;
  /* 10ac51be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac51c1 pop edi */
  EDI = (pop32());
  /* 10ac51c2 pop esi */
  ESI = (pop32());
  /* 10ac51c3 pop ebx */
  EBX = (pop32());
  /* 10ac51c4 mov esp, ebp */
  ESP = (EBP);
  /* 10ac51c6 pop ebp */
  EBP = (pop32());
  /* 10ac51c7 ret  */
  ESPCHK(0x10ac5140u, _esp0);
  ESP += 4; return;
}

/* FUN_100051d0 @ 0x10ac51d0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10ac51d0(void) {
  FTRACE(0x10ac51d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac51d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac51d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac51d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac51d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac51d7 push esi */
  push32((uint32_t)(ESI));
  /* 10ac51d8 push edi */
  push32((uint32_t)(EDI));
  /* 10ac51d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ac51e0 mov eax, dword ptr [0x10aeda84] */
  EAX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac51e5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac51e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac51ea jne 0x10ac51f6 */
  if (!C.zf) goto L_10ac51f6;
  /* 10ac51ec mov eax, 1 */
  EAX = (0x1u);
  /* 10ac51f1 jmp 0x10ac5528 */
  goto L_10ac5528;
L_10ac51f6:;
  /* 10ac51f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac51f8 call 0x10ac7a30 */
  push32(0x10ac51fdu); f_10ac7a30();
  /* 10ac51fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5200 call 0x10ac8210 */
  push32(0x10ac5205u); f_10ac8210();
  /* 10ac5205 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac5208 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac520c je 0x10ac5319 */
  if (C.zf) goto L_10ac5319;
  /* 10ac5212 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5216 je 0x10ac5319 */
  if (C.zf) goto L_10ac5319;
  /* 10ac521c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac521f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ac5222 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac5225 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5228 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ac522b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac522f ja 0x10ac52e2 */
  if ((!C.cf&&!C.zf)) goto L_10ac52e2;
  /* 10ac5235 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac5238 jmp dword ptr [eax*4 + 0x10ac552f] */
  switch (EAX) {
    case 0: goto L_10ac52ba;
    case 1: goto L_10ac5292;
    case 2: goto L_10ac526a;
    case 3: goto L_10ac523f;
    default: x86_unimpl("switch@0x10ac5238 out of table"); return;
  }
L_10ac523f:;
  /* 10ac523f push 0x10aeaab4 */
  push32((uint32_t)(0x10aeaab4u));
  /* 10ac5244 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac5249 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac524b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac524d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac524f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5251 call 0x10ac30f0 */
  push32(0x10ac5256u); f_10ac30f0();
  /* 10ac5256 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5259 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac525c jne 0x10ac525f */
  if (!C.zf) goto L_10ac525f;
  /* 10ac525e int3  */
  x86_unimpl("int3 @ 0x10ac525e");
L_10ac525f:;
  /* 10ac525f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5261 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac5263 jne 0x10ac523f */
  if (!C.zf) goto L_10ac523f;
  /* 10ac5265 jmp 0x10ac5308 */
  goto L_10ac5308;
L_10ac526a:;
  /* 10ac526a push 0x10aeaa90 */
  push32((uint32_t)(0x10aeaa90u));
  /* 10ac526f push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac5274 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5276 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5278 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac527a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac527c call 0x10ac30f0 */
  push32(0x10ac5281u); f_10ac30f0();
  /* 10ac5281 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5284 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5287 jne 0x10ac528a */
  if (!C.zf) goto L_10ac528a;
  /* 10ac5289 int3  */
  x86_unimpl("int3 @ 0x10ac5289");
L_10ac528a:;
  /* 10ac528a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac528c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac528e jne 0x10ac526a */
  if (!C.zf) goto L_10ac526a;
  /* 10ac5290 jmp 0x10ac5308 */
  goto L_10ac5308;
L_10ac5292:;
  /* 10ac5292 push 0x10aeaa6c */
  push32((uint32_t)(0x10aeaa6cu));
  /* 10ac5297 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac529c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac529e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52a4 call 0x10ac30f0 */
  push32(0x10ac52a9u); f_10ac30f0();
  /* 10ac52a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac52ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac52af jne 0x10ac52b2 */
  if (!C.zf) goto L_10ac52b2;
  /* 10ac52b1 int3  */
  x86_unimpl("int3 @ 0x10ac52b1");
L_10ac52b2:;
  /* 10ac52b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac52b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac52b6 jne 0x10ac5292 */
  if (!C.zf) goto L_10ac5292;
  /* 10ac52b8 jmp 0x10ac5308 */
  goto L_10ac5308;
L_10ac52ba:;
  /* 10ac52ba push 0x10aeaa48 */
  push32((uint32_t)(0x10aeaa48u));
  /* 10ac52bf push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac52c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52cc call 0x10ac30f0 */
  push32(0x10ac52d1u); f_10ac30f0();
  /* 10ac52d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac52d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac52d7 jne 0x10ac52da */
  if (!C.zf) goto L_10ac52da;
  /* 10ac52d9 int3  */
  x86_unimpl("int3 @ 0x10ac52d9");
L_10ac52da:;
  /* 10ac52da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac52dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac52de jne 0x10ac52ba */
  if (!C.zf) goto L_10ac52ba;
  /* 10ac52e0 jmp 0x10ac5308 */
  goto L_10ac5308;
L_10ac52e2:;
  /* 10ac52e2 push 0x10aeaa1c */
  push32((uint32_t)(0x10aeaa1cu));
  /* 10ac52e7 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac52ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac52f4 call 0x10ac30f0 */
  push32(0x10ac52f9u); f_10ac30f0();
  /* 10ac52f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac52fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac52ff jne 0x10ac5302 */
  if (!C.zf) goto L_10ac5302;
  /* 10ac5301 int3  */
  x86_unimpl("int3 @ 0x10ac5301");
L_10ac5302:;
  /* 10ac5302 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5304 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac5306 jne 0x10ac52e2 */
  if (!C.zf) goto L_10ac52e2;
L_10ac5308:;
  /* 10ac5308 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac530a call 0x10ac7ad0 */
  push32(0x10ac530fu); f_10ac7ad0();
  /* 10ac530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5312 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5314 jmp 0x10ac5528 */
  goto L_10ac5528;
L_10ac5319:;
  /* 10ac5319 mov eax, dword ptr [0x10aef624] */
  EAX = (r32((uint32_t)(0x10aef624)));
  /* 10ac531e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac5321 jmp 0x10ac532b */
  goto L_10ac532b;
L_10ac5323:;
  /* 10ac5323 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5326 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac5328 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ac532b:;
  /* 10ac532b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac532f je 0x10ac551b */
  if (C.zf) goto L_10ac551b;
  /* 10ac5335 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10ac533c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac533f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ac5342 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5348 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac534b je 0x10ac5370 */
  if (C.zf) goto L_10ac5370;
  /* 10ac534d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5350 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5354 je 0x10ac5370 */
  if (C.zf) goto L_10ac5370;
  /* 10ac5356 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5359 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ac535c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5362 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5365 je 0x10ac5370 */
  if (C.zf) goto L_10ac5370;
  /* 10ac5367 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac536a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac536e jne 0x10ac5388 */
  if (!C.zf) goto L_10ac5388;
L_10ac5370:;
  /* 10ac5370 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5373 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ac5376 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac537c mov edx, dword ptr [ecx*4 + 0x10aeda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeda94)));
  /* 10ac5383 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ac5386 jmp 0x10ac538f */
  goto L_10ac538f;
L_10ac5388:;
  /* 10ac5388 mov dword ptr [ebp - 0x14], 0x10aeaa14 */
  w32((uint32_t)(EBP + -0x14), (0x10aeaa14u));
L_10ac538f:;
  /* 10ac538f push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac5391 mov al, byte ptr [0x10aeda90] */
  AL = (r8((uint32_t)(0x10aeda90)));
  /* 10ac5396 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5397 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac539a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac539d push ecx */
  push32((uint32_t)(ECX));
  /* 10ac539e call 0x10ac5140 */
  push32(0x10ac53a3u); f_10ac5140();
  /* 10ac53a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac53a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac53a8 jne 0x10ac53e4 */
  if (!C.zf) goto L_10ac53e4;
L_10ac53aa:;
  /* 10ac53aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac53ad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac53b0 push edx */
  push32((uint32_t)(EDX));
  /* 10ac53b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac53b4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ac53b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac53b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac53bb push edx */
  push32((uint32_t)(EDX));
  /* 10ac53bc push 0x10aea8f0 */
  push32((uint32_t)(0x10aea8f0u));
  /* 10ac53c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac53c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac53c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac53c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac53c9 call 0x10ac30f0 */
  push32(0x10ac53ceu); f_10ac30f0();
  /* 10ac53ce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac53d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac53d4 jne 0x10ac53d7 */
  if (!C.zf) goto L_10ac53d7;
  /* 10ac53d6 int3  */
  x86_unimpl("int3 @ 0x10ac53d6");
L_10ac53d7:;
  /* 10ac53d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac53d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac53db jne 0x10ac53aa */
  if (!C.zf) goto L_10ac53aa;
  /* 10ac53dd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10ac53e4:;
  /* 10ac53e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac53e6 mov cl, byte ptr [0x10aeda90] */
  CL = (r8((uint32_t)(0x10aeda90)));
  /* 10ac53ec push ecx */
  push32((uint32_t)(ECX));
  /* 10ac53ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac53f0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac53f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac53f6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10ac53fa push edx */
  push32((uint32_t)(EDX));
  /* 10ac53fb call 0x10ac5140 */
  push32(0x10ac5400u); f_10ac5140();
  /* 10ac5400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5405 jne 0x10ac5441 */
  if (!C.zf) goto L_10ac5441;
L_10ac5407:;
  /* 10ac5407 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac540a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac540d push eax */
  push32((uint32_t)(EAX));
  /* 10ac540e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5411 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ac5414 push edx */
  push32((uint32_t)(EDX));
  /* 10ac5415 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac5418 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5419 push 0x10aea8c4 */
  push32((uint32_t)(0x10aea8c4u));
  /* 10ac541e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5420 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5422 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5426 call 0x10ac30f0 */
  push32(0x10ac542bu); f_10ac30f0();
  /* 10ac542b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac542e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5431 jne 0x10ac5434 */
  if (!C.zf) goto L_10ac5434;
  /* 10ac5433 int3  */
  x86_unimpl("int3 @ 0x10ac5433");
L_10ac5434:;
  /* 10ac5434 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5436 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac5438 jne 0x10ac5407 */
  if (!C.zf) goto L_10ac5407;
  /* 10ac543a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10ac5441:;
  /* 10ac5441 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5444 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5448 jne 0x10ac549a */
  if (!C.zf) goto L_10ac549a;
  /* 10ac544a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac544d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac5450 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5451 mov dl, byte ptr [0x10aeda91] */
  DL = (r8((uint32_t)(0x10aeda91)));
  /* 10ac5457 push edx */
  push32((uint32_t)(EDX));
  /* 10ac5458 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac545b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac545e push eax */
  push32((uint32_t)(EAX));
  /* 10ac545f call 0x10ac5140 */
  push32(0x10ac5464u); f_10ac5140();
  /* 10ac5464 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5469 jne 0x10ac549a */
  if (!C.zf) goto L_10ac549a;
L_10ac546b:;
  /* 10ac546b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac546e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5471 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5472 push 0x10aea9e8 */
  push32((uint32_t)(0x10aea9e8u));
  /* 10ac5477 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5479 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac547b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac547d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac547f call 0x10ac30f0 */
  push32(0x10ac5484u); f_10ac30f0();
  /* 10ac5484 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5487 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac548a jne 0x10ac548d */
  if (!C.zf) goto L_10ac548d;
  /* 10ac548c int3  */
  x86_unimpl("int3 @ 0x10ac548c");
L_10ac548d:;
  /* 10ac548d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac548f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac5491 jne 0x10ac546b */
  if (!C.zf) goto L_10ac546b;
  /* 10ac5493 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10ac549a:;
  /* 10ac549a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac549e jne 0x10ac5516 */
  if (!C.zf) goto L_10ac5516;
  /* 10ac54a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac54a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac54a7 je 0x10ac54dc */
  if (C.zf) goto L_10ac54dc;
L_10ac54a9:;
  /* 10ac54a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac54ac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ac54af push edx */
  push32((uint32_t)(EDX));
  /* 10ac54b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac54b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac54b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac54b7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac54ba push edx */
  push32((uint32_t)(EDX));
  /* 10ac54bb push 0x10aea9c8 */
  push32((uint32_t)(0x10aea9c8u));
  /* 10ac54c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac54c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac54c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac54c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac54c8 call 0x10ac30f0 */
  push32(0x10ac54cdu); f_10ac30f0();
  /* 10ac54cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac54d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac54d3 jne 0x10ac54d6 */
  if (!C.zf) goto L_10ac54d6;
  /* 10ac54d5 int3  */
  x86_unimpl("int3 @ 0x10ac54d5");
L_10ac54d6:;
  /* 10ac54d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac54d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac54da jne 0x10ac54a9 */
  if (!C.zf) goto L_10ac54a9;
L_10ac54dc:;
  /* 10ac54dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac54df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ac54e2 push edx */
  push32((uint32_t)(EDX));
  /* 10ac54e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac54e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac54e9 push eax */
  push32((uint32_t)(EAX));
  /* 10ac54ea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac54ed push ecx */
  push32((uint32_t)(ECX));
  /* 10ac54ee push 0x10aea99c */
  push32((uint32_t)(0x10aea99cu));
  /* 10ac54f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac54f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac54f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac54f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac54fb call 0x10ac30f0 */
  push32(0x10ac5500u); f_10ac30f0();
  /* 10ac5500 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5503 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5506 jne 0x10ac5509 */
  if (!C.zf) goto L_10ac5509;
  /* 10ac5508 int3  */
  x86_unimpl("int3 @ 0x10ac5508");
L_10ac5509:;
  /* 10ac5509 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac550b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac550d jne 0x10ac54dc */
  if (!C.zf) goto L_10ac54dc;
  /* 10ac550f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ac5516:;
  /* 10ac5516 jmp 0x10ac5323 */
  goto L_10ac5323;
L_10ac551b:;
  /* 10ac551b push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac551d call 0x10ac7ad0 */
  push32(0x10ac5522u); f_10ac7ad0();
  /* 10ac5522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ac5528:;
  /* 10ac5528 pop edi */
  EDI = (pop32());
  /* 10ac5529 pop esi */
  ESI = (pop32());
  /* 10ac552a pop ebx */
  EBX = (pop32());
  /* 10ac552b mov esp, ebp */
  ESP = (EBP);
  /* 10ac552d pop ebp */
  EBP = (pop32());
  /* 10ac552e ret  */
  ESPCHK(0x10ac51d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005540 @ 0x10ac5540 (34 bytes, 13 insns) */
void f_10ac5540(void) {
  FTRACE(0x10ac5540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5540 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5541 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5543 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5544 mov eax, dword ptr [0x10aeda84] */
  EAX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac5549 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac554c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5550 je 0x10ac555b */
  if (C.zf) goto L_10ac555b;
  /* 10ac5552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5555 mov dword ptr [0x10aeda84], ecx */
  w32((uint32_t)(0x10aeda84), (ECX));
L_10ac555b:;
  /* 10ac555b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac555e mov esp, ebp */
  ESP = (EBP);
  /* 10ac5560 pop ebp */
  EBP = (pop32());
  /* 10ac5561 ret  */
  ESPCHK(0x10ac5540u, _esp0);
  ESP += 4; return;
}

/* FUN_10005570 @ 0x10ac5570 (103 bytes, 38 insns) */
void f_10ac5570(void) {
  FTRACE(0x10ac5570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5570 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5571 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5573 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5574 mov eax, dword ptr [0x10aeda84] */
  EAX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac5579 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac557c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac557e jne 0x10ac5582 */
  if (!C.zf) goto L_10ac5582;
  /* 10ac5580 jmp 0x10ac55d3 */
  goto L_10ac55d3;
L_10ac5582:;
  /* 10ac5582 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac5584 call 0x10ac7a30 */
  push32(0x10ac5589u); f_10ac7a30();
  /* 10ac5589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac558c mov ecx, dword ptr [0x10aef624] */
  ECX = (r32((uint32_t)(0x10aef624)));
  /* 10ac5592 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac5595 jmp 0x10ac559f */
  goto L_10ac559f;
L_10ac5597:;
  /* 10ac5597 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac559a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac559c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac559f:;
  /* 10ac559f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac55a3 je 0x10ac55c9 */
  if (C.zf) goto L_10ac55c9;
  /* 10ac55a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac55a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ac55ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac55b1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac55b4 jne 0x10ac55c7 */
  if (!C.zf) goto L_10ac55c7;
  /* 10ac55b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac55b9 push eax */
  push32((uint32_t)(EAX));
  /* 10ac55ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac55bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac55c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac55c1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10ac55c4u);
  /* 10ac55c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac55c7:;
  /* 10ac55c7 jmp 0x10ac5597 */
  goto L_10ac5597;
L_10ac55c9:;
  /* 10ac55c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac55cb call 0x10ac7ad0 */
  push32(0x10ac55d0u); f_10ac7ad0();
  /* 10ac55d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac55d3:;
  /* 10ac55d3 mov esp, ebp */
  ESP = (EBP);
  /* 10ac55d5 pop ebp */
  EBP = (pop32());
  /* 10ac55d6 ret  */
  ESPCHK(0x10ac5570u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10ac55e0 (75 bytes, 28 insns) */
void f_10ac55e0(void) {
  FTRACE(0x10ac55e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac55e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac55e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac55e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac55e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac55e8 je 0x10ac561d */
  if (C.zf) goto L_10ac561d;
  /* 10ac55ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac55ed push eax */
  push32((uint32_t)(EAX));
  /* 10ac55ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac55f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac55f2 call dword ptr [0x10af2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2354))), 0x10ac55f8u);
  /* 10ac55f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac55fa jne 0x10ac561d */
  if (!C.zf) goto L_10ac561d;
  /* 10ac55fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5600 je 0x10ac5614 */
  if (C.zf) goto L_10ac5614;
  /* 10ac5602 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac5605 push edx */
  push32((uint32_t)(EDX));
  /* 10ac5606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5609 push eax */
  push32((uint32_t)(EAX));
  /* 10ac560a call dword ptr [0x10af2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2350))), 0x10ac5610u);
  /* 10ac5610 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5612 jne 0x10ac561d */
  if (!C.zf) goto L_10ac561d;
L_10ac5614:;
  /* 10ac5614 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ac561b jmp 0x10ac5624 */
  goto L_10ac5624;
L_10ac561d:;
  /* 10ac561d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ac5624:;
  /* 10ac5624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5627 mov esp, ebp */
  ESP = (EBP);
  /* 10ac5629 pop ebp */
  EBP = (pop32());
  /* 10ac562a ret  */
  ESPCHK(0x10ac55e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005630 @ 0x10ac5630 (134 bytes, 50 insns) */
void f_10ac5630(void) {
  FTRACE(0x10ac5630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5630 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5631 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5633 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5634 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5638 jne 0x10ac563e */
  if (!C.zf) goto L_10ac563e;
  /* 10ac563a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac563c jmp 0x10ac56b2 */
  goto L_10ac56b2;
L_10ac563e:;
  /* 10ac563e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac5640 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10ac5642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5645 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5648 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5649 call 0x10ac55e0 */
  push32(0x10ac564eu); f_10ac55e0();
  /* 10ac564e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5653 jne 0x10ac5659 */
  if (!C.zf) goto L_10ac5659;
  /* 10ac5655 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5657 jmp 0x10ac56b2 */
  goto L_10ac56b2;
L_10ac5659:;
  /* 10ac5659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac565c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac565f push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5660 call 0x10ac8330 */
  push32(0x10ac5665u); f_10ac8330();
  /* 10ac5665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5668 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac566b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac566f je 0x10ac5686 */
  if (C.zf) goto L_10ac5686;
  /* 10ac5671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5674 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5677 push edx */
  push32((uint32_t)(EDX));
  /* 10ac5678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac567b push eax */
  push32((uint32_t)(EAX));
  /* 10ac567c call 0x10ac8390 */
  push32(0x10ac5681u); f_10ac8390();
  /* 10ac5681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5684 jmp 0x10ac56b2 */
  goto L_10ac56b2;
L_10ac5686:;
  /* 10ac5686 mov ecx, dword ptr [0x10aef5d8] */
  ECX = (r32((uint32_t)(0x10aef5d8)));
  /* 10ac568c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5692 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac5694 je 0x10ac569d */
  if (C.zf) goto L_10ac569d;
  /* 10ac5696 mov eax, 1 */
  EAX = (0x1u);
  /* 10ac569b jmp 0x10ac56b2 */
  goto L_10ac56b2;
L_10ac569d:;
  /* 10ac569d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac56a0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac56a3 push edx */
  push32((uint32_t)(EDX));
  /* 10ac56a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac56a6 mov eax, dword ptr [0x10af0f8c] */
  EAX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac56ab push eax */
  push32((uint32_t)(EAX));
  /* 10ac56ac call dword ptr [0x10af2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2358))), 0x10ac56b2u);
L_10ac56b2:;
  /* 10ac56b2 mov esp, ebp */
  ESP = (EBP);
  /* 10ac56b4 pop ebp */
  EBP = (pop32());
  /* 10ac56b5 ret  */
  ESPCHK(0x10ac5630u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c0 @ 0x10ac56c0 (227 bytes, 80 insns) */
void f_10ac56c0(void) {
  FTRACE(0x10ac56c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac56c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac56c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac56c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac56c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac56c7 push eax */
  push32((uint32_t)(EAX));
  /* 10ac56c8 call 0x10ac5630 */
  push32(0x10ac56cdu); f_10ac5630();
  /* 10ac56cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac56d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac56d2 jne 0x10ac56db */
  if (!C.zf) goto L_10ac56db;
  /* 10ac56d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac56d6 jmp 0x10ac579f */
  goto L_10ac579f;
L_10ac56db:;
  /* 10ac56db push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac56dd call 0x10ac7a30 */
  push32(0x10ac56e2u); f_10ac7a30();
  /* 10ac56e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac56e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac56e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac56eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac56ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac56f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac56f4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac56f9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac56fc je 0x10ac5720 */
  if (C.zf) goto L_10ac5720;
  /* 10ac56fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5701 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5705 je 0x10ac5720 */
  if (C.zf) goto L_10ac5720;
  /* 10ac5707 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac570a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac570d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5712 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5715 je 0x10ac5720 */
  if (C.zf) goto L_10ac5720;
  /* 10ac5717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac571a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac571e jne 0x10ac5793 */
  if (!C.zf) goto L_10ac5793;
L_10ac5720:;
  /* 10ac5720 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac5722 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac5725 push edx */
  push32((uint32_t)(EDX));
  /* 10ac5726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5729 push eax */
  push32((uint32_t)(EAX));
  /* 10ac572a call 0x10ac55e0 */
  push32(0x10ac572fu); f_10ac55e0();
  /* 10ac572f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5734 je 0x10ac5793 */
  if (C.zf) goto L_10ac5793;
  /* 10ac5736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5739 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ac573c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac573f jne 0x10ac5793 */
  if (!C.zf) goto L_10ac5793;
  /* 10ac5741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5744 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ac5747 cmp ecx, dword ptr [0x10aeda88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aeda88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac574d jg 0x10ac5793 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ac5793;
  /* 10ac574f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5753 je 0x10ac5760 */
  if (C.zf) goto L_10ac5760;
  /* 10ac5755 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac5758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac575b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ac575e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac5760:;
  /* 10ac5760 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5764 je 0x10ac5771 */
  if (C.zf) goto L_10ac5771;
  /* 10ac5766 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac5769 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac576c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac576f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac5771:;
  /* 10ac5771 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5775 je 0x10ac5782 */
  if (C.zf) goto L_10ac5782;
  /* 10ac5777 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac577a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac577d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ac5780 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac5782:;
  /* 10ac5782 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac5784 call 0x10ac7ad0 */
  push32(0x10ac5789u); f_10ac7ad0();
  /* 10ac5789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac578c mov eax, 1 */
  EAX = (0x1u);
  /* 10ac5791 jmp 0x10ac579f */
  goto L_10ac579f;
L_10ac5793:;
  /* 10ac5793 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac5795 call 0x10ac7ad0 */
  push32(0x10ac579au); f_10ac7ad0();
  /* 10ac579a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac579d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac579f:;
  /* 10ac579f mov esp, ebp */
  ESP = (EBP);
  /* 10ac57a1 pop ebp */
  EBP = (pop32());
  /* 10ac57a2 ret  */
  ESPCHK(0x10ac56c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057b0 @ 0x10ac57b0 (28 bytes, 11 insns) */
void f_10ac57b0(void) {
  FTRACE(0x10ac57b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac57b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac57b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac57b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac57b4 mov eax, dword ptr [0x10af0f98] */
  EAX = (r32((uint32_t)(0x10af0f98)));
  /* 10ac57b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac57bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac57bf mov dword ptr [0x10af0f98], ecx */
  w32((uint32_t)(0x10af0f98), (ECX));
  /* 10ac57c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac57c8 mov esp, ebp */
  ESP = (EBP);
  /* 10ac57ca pop ebp */
  EBP = (pop32());
  /* 10ac57cb ret  */
  ESPCHK(0x10ac57b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057d0 @ 0x10ac57d0 (362 bytes, 116 insns) */
void f_10ac57d0(void) {
  FTRACE(0x10ac57d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac57d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac57d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac57d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac57d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac57d7 push esi */
  push32((uint32_t)(ESI));
  /* 10ac57d8 push edi */
  push32((uint32_t)(EDI));
  /* 10ac57d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac57dd jne 0x10ac580a */
  if (!C.zf) goto L_10ac580a;
L_10ac57df:;
  /* 10ac57df push 0x10aeaafc */
  push32((uint32_t)(0x10aeaafcu));
  /* 10ac57e4 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac57e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac57eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac57ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac57ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac57f1 call 0x10ac30f0 */
  push32(0x10ac57f6u); f_10ac30f0();
  /* 10ac57f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac57f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac57fc jne 0x10ac57ff */
  if (!C.zf) goto L_10ac57ff;
  /* 10ac57fe int3  */
  x86_unimpl("int3 @ 0x10ac57fe");
L_10ac57ff:;
  /* 10ac57ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5803 jne 0x10ac57df */
  if (!C.zf) goto L_10ac57df;
  /* 10ac5805 jmp 0x10ac5933 */
  goto L_10ac5933;
L_10ac580a:;
  /* 10ac580a push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac580c call 0x10ac7a30 */
  push32(0x10ac5811u); f_10ac7a30();
  /* 10ac5811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5814 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5817 mov edx, dword ptr [0x10aef624] */
  EDX = (r32((uint32_t)(0x10aef624)));
  /* 10ac581d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ac581f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ac5826 jmp 0x10ac5831 */
  goto L_10ac5831;
L_10ac5828:;
  /* 10ac5828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac582b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac582e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac5831:;
  /* 10ac5831 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5835 jge 0x10ac5855 */
  if ((C.sf==C.of)) goto L_10ac5855;
  /* 10ac5837 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac583a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac583d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10ac5845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5848 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac584b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10ac5853 jmp 0x10ac5828 */
  goto L_10ac5828;
L_10ac5855:;
  /* 10ac5855 mov edx, dword ptr [0x10aef624] */
  EDX = (r32((uint32_t)(0x10aef624)));
  /* 10ac585b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ac585e jmp 0x10ac5868 */
  goto L_10ac5868;
L_10ac5860:;
  /* 10ac5860 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5863 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac5865 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ac5868:;
  /* 10ac5868 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac586c je 0x10ac5911 */
  if (C.zf) goto L_10ac5911;
  /* 10ac5872 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5875 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac5878 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac587d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac587f jl 0x10ac58e7 */
  if ((C.sf!=C.of)) goto L_10ac58e7;
  /* 10ac5881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5884 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ac5887 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac588d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5890 jge 0x10ac58e7 */
  if ((C.sf==C.of)) goto L_10ac58e7;
  /* 10ac5892 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5895 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ac5898 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac589e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac58a1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10ac58a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac58a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac58ab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ac58ae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac58b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac58b7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10ac58bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac58be mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac58c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac58c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac58c9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10ac58cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac58d0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac58d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac58d6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ac58d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac58de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac58e1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10ac58e5 jmp 0x10ac590c */
  goto L_10ac590c;
L_10ac58e7:;
  /* 10ac58e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac58ea push edx */
  push32((uint32_t)(EDX));
  /* 10ac58eb push 0x10aeaad8 */
  push32((uint32_t)(0x10aeaad8u));
  /* 10ac58f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac58f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac58f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac58f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac58f8 call 0x10ac30f0 */
  push32(0x10ac58fdu); f_10ac30f0();
  /* 10ac58fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5900 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5903 jne 0x10ac5906 */
  if (!C.zf) goto L_10ac5906;
  /* 10ac5905 int3  */
  x86_unimpl("int3 @ 0x10ac5905");
L_10ac5906:;
  /* 10ac5906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac590a jne 0x10ac58e7 */
  if (!C.zf) goto L_10ac58e7;
L_10ac590c:;
  /* 10ac590c jmp 0x10ac5860 */
  goto L_10ac5860;
L_10ac5911:;
  /* 10ac5911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5914 mov edx, dword ptr [0x10aef62c] */
  EDX = (r32((uint32_t)(0x10aef62c)));
  /* 10ac591a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10ac591d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5920 mov ecx, dword ptr [0x10aef620] */
  ECX = (r32((uint32_t)(0x10aef620)));
  /* 10ac5926 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10ac5929 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac592b call 0x10ac7ad0 */
  push32(0x10ac5930u); f_10ac7ad0();
  /* 10ac5930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac5933:;
  /* 10ac5933 pop edi */
  EDI = (pop32());
  /* 10ac5934 pop esi */
  ESI = (pop32());
  /* 10ac5935 pop ebx */
  EBX = (pop32());
  /* 10ac5936 mov esp, ebp */
  ESP = (EBP);
  /* 10ac5938 pop ebp */
  EBP = (pop32());
  /* 10ac5939 ret  */
  ESPCHK(0x10ac57d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005940 @ 0x10ac5940 (291 bytes, 95 insns) */
void f_10ac5940(void) {
  FTRACE(0x10ac5940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5940 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5941 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5946 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac5947 push esi */
  push32((uint32_t)(ESI));
  /* 10ac5948 push edi */
  push32((uint32_t)(EDI));
  /* 10ac5949 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ac5950 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5954 je 0x10ac5962 */
  if (C.zf) goto L_10ac5962;
  /* 10ac5956 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac595a je 0x10ac5962 */
  if (C.zf) goto L_10ac5962;
  /* 10ac595c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5960 jne 0x10ac5990 */
  if (!C.zf) goto L_10ac5990;
L_10ac5962:;
  /* 10ac5962 push 0x10aeab24 */
  push32((uint32_t)(0x10aeab24u));
  /* 10ac5967 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac596c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac596e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5970 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5972 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5974 call 0x10ac30f0 */
  push32(0x10ac5979u); f_10ac30f0();
  /* 10ac5979 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac597c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac597f jne 0x10ac5982 */
  if (!C.zf) goto L_10ac5982;
  /* 10ac5981 int3  */
  x86_unimpl("int3 @ 0x10ac5981");
L_10ac5982:;
  /* 10ac5982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5986 jne 0x10ac5962 */
  if (!C.zf) goto L_10ac5962;
  /* 10ac5988 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac598b jmp 0x10ac5a5c */
  goto L_10ac5a5c;
L_10ac5990:;
  /* 10ac5990 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ac5997 jmp 0x10ac59a2 */
  goto L_10ac59a2;
L_10ac5999:;
  /* 10ac5999 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac599c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac599f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ac59a2:;
  /* 10ac59a2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac59a6 jge 0x10ac5a2c */
  if ((C.sf==C.of)) goto L_10ac5a2c;
  /* 10ac59ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac59af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac59b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac59b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac59b8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10ac59bc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac59c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac59c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac59c6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10ac59ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac59cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac59d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac59d3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac59d6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10ac59da sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac59de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac59e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac59e4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10ac59e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac59eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac59ee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac59f3 jne 0x10ac5a02 */
  if (!C.zf) goto L_10ac5a02;
  /* 10ac59f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac59f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac59fb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5a00 je 0x10ac5a27 */
  if (C.zf) goto L_10ac5a27;
L_10ac5a02:;
  /* 10ac5a02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5a06 je 0x10ac5a27 */
  if (C.zf) goto L_10ac5a27;
  /* 10ac5a08 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5a0c jne 0x10ac5a20 */
  if (!C.zf) goto L_10ac5a20;
  /* 10ac5a0e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5a12 jne 0x10ac5a27 */
  if (!C.zf) goto L_10ac5a27;
  /* 10ac5a14 mov eax, dword ptr [0x10aeda84] */
  EAX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac5a19 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5a1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5a1e je 0x10ac5a27 */
  if (C.zf) goto L_10ac5a27;
L_10ac5a20:;
  /* 10ac5a20 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10ac5a27:;
  /* 10ac5a27 jmp 0x10ac5999 */
  goto L_10ac5999;
L_10ac5a2c:;
  /* 10ac5a2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac5a2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac5a32 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10ac5a35 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5a38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5a3b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10ac5a3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac5a41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac5a44 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10ac5a47 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5a4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5a4d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10ac5a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5a53 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ac5a59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ac5a5c:;
  /* 10ac5a5c pop edi */
  EDI = (pop32());
  /* 10ac5a5d pop esi */
  ESI = (pop32());
  /* 10ac5a5e pop ebx */
  EBX = (pop32());
  /* 10ac5a5f mov esp, ebp */
  ESP = (EBP);
  /* 10ac5a61 pop ebp */
  EBP = (pop32());
  /* 10ac5a62 ret  */
  ESPCHK(0x10ac5940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x10ac5a70 (697 bytes, 253 insns) */
void f_10ac5a70(void) {
  FTRACE(0x10ac5a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5a71 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5a73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5a76 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac5a77 push esi */
  push32((uint32_t)(ESI));
  /* 10ac5a78 push edi */
  push32((uint32_t)(EDI));
  /* 10ac5a79 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ac5a80 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac5a82 call 0x10ac7a30 */
  push32(0x10ac5a87u); f_10ac7a30();
  /* 10ac5a87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac5a8a:;
  /* 10ac5a8a push 0x10aeac1c */
  push32((uint32_t)(0x10aeac1cu));
  /* 10ac5a8f push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac5a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5a9c call 0x10ac30f0 */
  push32(0x10ac5aa1u); f_10ac30f0();
  /* 10ac5aa1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5aa4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5aa7 jne 0x10ac5aaa */
  if (!C.zf) goto L_10ac5aaa;
  /* 10ac5aa9 int3  */
  x86_unimpl("int3 @ 0x10ac5aa9");
L_10ac5aaa:;
  /* 10ac5aaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5aae jne 0x10ac5a8a */
  if (!C.zf) goto L_10ac5a8a;
  /* 10ac5ab0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5ab4 je 0x10ac5abe */
  if (C.zf) goto L_10ac5abe;
  /* 10ac5ab6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5ab9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac5abb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ac5abe:;
  /* 10ac5abe mov eax, dword ptr [0x10aef624] */
  EAX = (r32((uint32_t)(0x10aef624)));
  /* 10ac5ac3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac5ac6 jmp 0x10ac5ad0 */
  goto L_10ac5ad0;
L_10ac5ac8:;
  /* 10ac5ac8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5acb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac5acd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ac5ad0:;
  /* 10ac5ad0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5ad4 je 0x10ac5cf2 */
  if (C.zf) goto L_10ac5cf2;
  /* 10ac5ada mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5add cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5ae0 je 0x10ac5cf2 */
  if (C.zf) goto L_10ac5cf2;
  /* 10ac5ae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5ae9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ac5aec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5af2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5af5 je 0x10ac5b24 */
  if (C.zf) goto L_10ac5b24;
  /* 10ac5af7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5afa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ac5afd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5b03 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac5b05 je 0x10ac5b24 */
  if (C.zf) goto L_10ac5b24;
  /* 10ac5b07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5b0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac5b0d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5b12 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5b15 jne 0x10ac5b29 */
  if (!C.zf) goto L_10ac5b29;
  /* 10ac5b17 mov ecx, dword ptr [0x10aeda84] */
  ECX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac5b1d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5b20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac5b22 jne 0x10ac5b29 */
  if (!C.zf) goto L_10ac5b29;
L_10ac5b24:;
  /* 10ac5b24 jmp 0x10ac5ced */
  goto L_10ac5ced;
L_10ac5b29:;
  /* 10ac5b29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5b2c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5b30 je 0x10ac5ba2 */
  if (C.zf) goto L_10ac5ba2;
  /* 10ac5b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5b34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac5b36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5b39 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac5b3c push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5b3d call 0x10ac55e0 */
  push32(0x10ac5b42u); f_10ac55e0();
  /* 10ac5b42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5b47 jne 0x10ac5b73 */
  if (!C.zf) goto L_10ac5b73;
L_10ac5b49:;
  /* 10ac5b49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5b4c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ac5b4f push eax */
  push32((uint32_t)(EAX));
  /* 10ac5b50 push 0x10aeac08 */
  push32((uint32_t)(0x10aeac08u));
  /* 10ac5b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5b5d call 0x10ac30f0 */
  push32(0x10ac5b62u); f_10ac30f0();
  /* 10ac5b62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5b65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5b68 jne 0x10ac5b6b */
  if (!C.zf) goto L_10ac5b6b;
  /* 10ac5b6a int3  */
  x86_unimpl("int3 @ 0x10ac5b6a");
L_10ac5b6b:;
  /* 10ac5b6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5b6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac5b6f jne 0x10ac5b49 */
  if (!C.zf) goto L_10ac5b49;
  /* 10ac5b71 jmp 0x10ac5ba2 */
  goto L_10ac5ba2;
L_10ac5b73:;
  /* 10ac5b73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5b76 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ac5b79 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5b7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5b7d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac5b80 push edx */
  push32((uint32_t)(EDX));
  /* 10ac5b81 push 0x10aeabfc */
  push32((uint32_t)(0x10aeabfcu));
  /* 10ac5b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5b8e call 0x10ac30f0 */
  push32(0x10ac5b93u); f_10ac30f0();
  /* 10ac5b93 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5b96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5b99 jne 0x10ac5b9c */
  if (!C.zf) goto L_10ac5b9c;
  /* 10ac5b9b int3  */
  x86_unimpl("int3 @ 0x10ac5b9b");
L_10ac5b9c:;
  /* 10ac5b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5b9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5ba0 jne 0x10ac5b73 */
  if (!C.zf) goto L_10ac5b73;
L_10ac5ba2:;
  /* 10ac5ba2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5ba5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ac5ba8 push edx */
  push32((uint32_t)(EDX));
  /* 10ac5ba9 push 0x10aeabf4 */
  push32((uint32_t)(0x10aeabf4u));
  /* 10ac5bae push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5bb6 call 0x10ac30f0 */
  push32(0x10ac5bbbu); f_10ac30f0();
  /* 10ac5bbb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5bbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5bc1 jne 0x10ac5bc4 */
  if (!C.zf) goto L_10ac5bc4;
  /* 10ac5bc3 int3  */
  x86_unimpl("int3 @ 0x10ac5bc3");
L_10ac5bc4:;
  /* 10ac5bc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5bc8 jne 0x10ac5ba2 */
  if (!C.zf) goto L_10ac5ba2;
  /* 10ac5bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5bcd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ac5bd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5bd6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5bd9 jne 0x10ac5c4c */
  if (!C.zf) goto L_10ac5c4c;
L_10ac5bdb:;
  /* 10ac5bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5bde mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac5be1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5be2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5be5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac5be8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ac5beb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5bf0 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5bf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5bf4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5bf8 push 0x10aeabc0 */
  push32((uint32_t)(0x10aeabc0u));
  /* 10ac5bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5c05 call 0x10ac30f0 */
  push32(0x10ac5c0au); f_10ac30f0();
  /* 10ac5c0a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5c0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5c10 jne 0x10ac5c13 */
  if (!C.zf) goto L_10ac5c13;
  /* 10ac5c12 int3  */
  x86_unimpl("int3 @ 0x10ac5c12");
L_10ac5c13:;
  /* 10ac5c13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5c15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac5c17 jne 0x10ac5bdb */
  if (!C.zf) goto L_10ac5bdb;
  /* 10ac5c19 cmp dword ptr [0x10af0f98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af0f98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5c20 je 0x10ac5c3b */
  if (C.zf) goto L_10ac5c3b;
  /* 10ac5c22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5c25 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac5c28 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5c2c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5c2f push edx */
  push32((uint32_t)(EDX));
  /* 10ac5c30 call dword ptr [0x10af0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af0f98))), 0x10ac5c36u);
  /* 10ac5c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5c39 jmp 0x10ac5c47 */
  goto L_10ac5c47;
L_10ac5c3b:;
  /* 10ac5c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5c3e push eax */
  push32((uint32_t)(EAX));
  /* 10ac5c3f call 0x10ac5d30 */
  push32(0x10ac5c44u); f_10ac5d30();
  /* 10ac5c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac5c47:;
  /* 10ac5c47 jmp 0x10ac5ced */
  goto L_10ac5ced;
L_10ac5c4c:;
  /* 10ac5c4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5c4f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5c53 jne 0x10ac5c92 */
  if (!C.zf) goto L_10ac5c92;
L_10ac5c55:;
  /* 10ac5c55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5c58 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac5c5b push eax */
  push32((uint32_t)(EAX));
  /* 10ac5c5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5c5f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5c62 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5c63 push 0x10aeab98 */
  push32((uint32_t)(0x10aeab98u));
  /* 10ac5c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5c70 call 0x10ac30f0 */
  push32(0x10ac5c75u); f_10ac30f0();
  /* 10ac5c75 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5c78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5c7b jne 0x10ac5c7e */
  if (!C.zf) goto L_10ac5c7e;
  /* 10ac5c7d int3  */
  x86_unimpl("int3 @ 0x10ac5c7d");
L_10ac5c7e:;
  /* 10ac5c7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5c80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac5c82 jne 0x10ac5c55 */
  if (!C.zf) goto L_10ac5c55;
  /* 10ac5c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5c87 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5c88 call 0x10ac5d30 */
  push32(0x10ac5c8du); f_10ac5d30();
  /* 10ac5c8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5c90 jmp 0x10ac5ced */
  goto L_10ac5ced;
L_10ac5c92:;
  /* 10ac5c92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5c95 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ac5c98 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5c9e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5ca1 jne 0x10ac5ced */
  if (!C.zf) goto L_10ac5ced;
L_10ac5ca3:;
  /* 10ac5ca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5ca6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac5ca9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5caa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5cad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ac5cb0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ac5cb3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5cb8 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5cb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5cbc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5cbf push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5cc0 push 0x10aeab64 */
  push32((uint32_t)(0x10aeab64u));
  /* 10ac5cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5cc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5ccd call 0x10ac30f0 */
  push32(0x10ac5cd2u); f_10ac30f0();
  /* 10ac5cd2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5cd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5cd8 jne 0x10ac5cdb */
  if (!C.zf) goto L_10ac5cdb;
  /* 10ac5cda int3  */
  x86_unimpl("int3 @ 0x10ac5cda");
L_10ac5cdb:;
  /* 10ac5cdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5cdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac5cdf jne 0x10ac5ca3 */
  if (!C.zf) goto L_10ac5ca3;
  /* 10ac5ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5ce4 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5ce5 call 0x10ac5d30 */
  push32(0x10ac5ceau); f_10ac5d30();
  /* 10ac5cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac5ced:;
  /* 10ac5ced jmp 0x10ac5ac8 */
  goto L_10ac5ac8;
L_10ac5cf2:;
  /* 10ac5cf2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac5cf4 call 0x10ac7ad0 */
  push32(0x10ac5cf9u); f_10ac7ad0();
  /* 10ac5cf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac5cfc:;
  /* 10ac5cfc push 0x10aeab4c */
  push32((uint32_t)(0x10aeab4cu));
  /* 10ac5d01 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac5d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5d0e call 0x10ac30f0 */
  push32(0x10ac5d13u); f_10ac30f0();
  /* 10ac5d13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5d16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5d19 jne 0x10ac5d1c */
  if (!C.zf) goto L_10ac5d1c;
  /* 10ac5d1b int3  */
  x86_unimpl("int3 @ 0x10ac5d1b");
L_10ac5d1c:;
  /* 10ac5d1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5d1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac5d20 jne 0x10ac5cfc */
  if (!C.zf) goto L_10ac5cfc;
  /* 10ac5d22 pop edi */
  EDI = (pop32());
  /* 10ac5d23 pop esi */
  ESI = (pop32());
  /* 10ac5d24 pop ebx */
  EBX = (pop32());
  /* 10ac5d25 mov esp, ebp */
  ESP = (EBP);
  /* 10ac5d27 pop ebp */
  EBP = (pop32());
  /* 10ac5d28 ret  */
  ESPCHK(0x10ac5a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d30 @ 0x10ac5d30 (276 bytes, 89 insns) */
void f_10ac5d30(void) {
  FTRACE(0x10ac5d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5d31 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5d33 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5d36 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac5d37 push esi */
  push32((uint32_t)(ESI));
  /* 10ac5d38 push edi */
  push32((uint32_t)(EDI));
  /* 10ac5d39 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10ac5d40 jmp 0x10ac5d4b */
  goto L_10ac5d4b;
L_10ac5d42:;
  /* 10ac5d42 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10ac5d45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5d48 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10ac5d4b:;
  /* 10ac5d4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5d4e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5d52 jge 0x10ac5d5f */
  if ((C.sf==C.of)) goto L_10ac5d5f;
  /* 10ac5d54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5d57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac5d5a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10ac5d5d jmp 0x10ac5d66 */
  goto L_10ac5d66;
L_10ac5d5f:;
  /* 10ac5d5f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10ac5d66:;
  /* 10ac5d66 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10ac5d69 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5d6c jge 0x10ac5e0c */
  if ((C.sf==C.of)) goto L_10ac5e0c;
  /* 10ac5d72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5d75 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5d78 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10ac5d7b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10ac5d7e cmp dword ptr [0x10aedea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aedea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5d85 jle 0x10ac5da3 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac5da3;
  /* 10ac5d87 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10ac5d8c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac5d8f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5d95 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5d96 call 0x10aca040 */
  push32(0x10ac5d9bu); f_10aca040();
  /* 10ac5d9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5d9e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10ac5da1 jmp 0x10ac5dc0 */
  goto L_10ac5dc0;
L_10ac5da3:;
  /* 10ac5da3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac5da6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5dac mov eax, dword ptr [0x10aedc98] */
  EAX = (r32((uint32_t)(0x10aedc98)));
  /* 10ac5db1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5db3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ac5db7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5dbd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10ac5dc0:;
  /* 10ac5dc0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5dc4 je 0x10ac5dd4 */
  if (C.zf) goto L_10ac5dd4;
  /* 10ac5dc6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac5dc9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5dcf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10ac5dd2 jmp 0x10ac5ddb */
  goto L_10ac5ddb;
L_10ac5dd4:;
  /* 10ac5dd4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10ac5ddb:;
  /* 10ac5ddb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10ac5dde mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10ac5de1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10ac5de5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ac5de8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5dee push edx */
  push32((uint32_t)(EDX));
  /* 10ac5def push 0x10aeac40 */
  push32((uint32_t)(0x10aeac40u));
  /* 10ac5df4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10ac5df7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac5dfa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10ac5dfe push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5dff call 0x10ac9f40 */
  push32(0x10ac5e04u); f_10ac9f40();
  /* 10ac5e04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5e07 jmp 0x10ac5d42 */
  goto L_10ac5d42;
L_10ac5e0c:;
  /* 10ac5e0c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10ac5e0f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10ac5e14:;
  /* 10ac5e14 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10ac5e17 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5e18 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10ac5e1b push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5e1c push 0x10aeac30 */
  push32((uint32_t)(0x10aeac30u));
  /* 10ac5e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5e29 call 0x10ac30f0 */
  push32(0x10ac5e2eu); f_10ac30f0();
  /* 10ac5e2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5e31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5e34 jne 0x10ac5e37 */
  if (!C.zf) goto L_10ac5e37;
  /* 10ac5e36 int3  */
  x86_unimpl("int3 @ 0x10ac5e36");
L_10ac5e37:;
  /* 10ac5e37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5e39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac5e3b jne 0x10ac5e14 */
  if (!C.zf) goto L_10ac5e14;
  /* 10ac5e3d pop edi */
  EDI = (pop32());
  /* 10ac5e3e pop esi */
  ESI = (pop32());
  /* 10ac5e3f pop ebx */
  EBX = (pop32());
  /* 10ac5e40 mov esp, ebp */
  ESP = (EBP);
  /* 10ac5e42 pop ebp */
  EBP = (pop32());
  /* 10ac5e43 ret  */
  ESPCHK(0x10ac5d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e50 @ 0x10ac5e50 (116 bytes, 46 insns) */
void f_10ac5e50(void) {
  FTRACE(0x10ac5e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5e51 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5e53 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5e56 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac5e57 push esi */
  push32((uint32_t)(ESI));
  /* 10ac5e58 push edi */
  push32((uint32_t)(EDI));
  /* 10ac5e59 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10ac5e5c push eax */
  push32((uint32_t)(EAX));
  /* 10ac5e5d call 0x10ac57d0 */
  push32(0x10ac5e62u); f_10ac57d0();
  /* 10ac5e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5e65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5e69 jne 0x10ac5e84 */
  if (!C.zf) goto L_10ac5e84;
  /* 10ac5e6b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5e6f jne 0x10ac5e84 */
  if (!C.zf) goto L_10ac5e84;
  /* 10ac5e71 mov ecx, dword ptr [0x10aeda84] */
  ECX = (r32((uint32_t)(0x10aeda84)));
  /* 10ac5e77 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac5e7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac5e7c je 0x10ac5ebb */
  if (C.zf) goto L_10ac5ebb;
  /* 10ac5e7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5e82 je 0x10ac5ebb */
  if (C.zf) goto L_10ac5ebb;
L_10ac5e84:;
  /* 10ac5e84 push 0x10aeac48 */
  push32((uint32_t)(0x10aeac48u));
  /* 10ac5e89 push 0x10aea614 */
  push32((uint32_t)(0x10aea614u));
  /* 10ac5e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5e96 call 0x10ac30f0 */
  push32(0x10ac5e9bu); f_10ac30f0();
  /* 10ac5e9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5e9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5ea1 jne 0x10ac5ea4 */
  if (!C.zf) goto L_10ac5ea4;
  /* 10ac5ea3 int3  */
  x86_unimpl("int3 @ 0x10ac5ea3");
L_10ac5ea4:;
  /* 10ac5ea4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac5ea6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac5ea8 jne 0x10ac5e84 */
  if (!C.zf) goto L_10ac5e84;
  /* 10ac5eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5eac call 0x10ac5a70 */
  push32(0x10ac5eb1u); f_10ac5a70();
  /* 10ac5eb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5eb4 mov eax, 1 */
  EAX = (0x1u);
  /* 10ac5eb9 jmp 0x10ac5ebd */
  goto L_10ac5ebd;
L_10ac5ebb:;
  /* 10ac5ebb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac5ebd:;
  /* 10ac5ebd pop edi */
  EDI = (pop32());
  /* 10ac5ebe pop esi */
  ESI = (pop32());
  /* 10ac5ebf pop ebx */
  EBX = (pop32());
  /* 10ac5ec0 mov esp, ebp */
  ESP = (EBP);
  /* 10ac5ec2 pop ebp */
  EBP = (pop32());
  /* 10ac5ec3 ret  */
  ESPCHK(0x10ac5e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed0 @ 0x10ac5ed0 (197 bytes, 79 insns) */
void f_10ac5ed0(void) {
  FTRACE(0x10ac5ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac5ed4 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac5ed5 push esi */
  push32((uint32_t)(ESI));
  /* 10ac5ed6 push edi */
  push32((uint32_t)(EDI));
  /* 10ac5ed7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5edb jne 0x10ac5ee2 */
  if (!C.zf) goto L_10ac5ee2;
  /* 10ac5edd jmp 0x10ac5f8e */
  goto L_10ac5f8e;
L_10ac5ee2:;
  /* 10ac5ee2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ac5ee9 jmp 0x10ac5ef4 */
  goto L_10ac5ef4;
L_10ac5eeb:;
  /* 10ac5eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5eee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5ef1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac5ef4:;
  /* 10ac5ef4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5ef8 jge 0x10ac5f3e */
  if ((C.sf==C.of)) goto L_10ac5f3e;
L_10ac5efa:;
  /* 10ac5efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5efd mov edx, dword ptr [ecx*4 + 0x10aeda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aeda94)));
  /* 10ac5f04 push edx */
  push32((uint32_t)(EDX));
  /* 10ac5f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5f08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5f0b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10ac5f0f push edx */
  push32((uint32_t)(EDX));
  /* 10ac5f10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5f13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5f16 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10ac5f1a push edx */
  push32((uint32_t)(EDX));
  /* 10ac5f1b push 0x10aeaca4 */
  push32((uint32_t)(0x10aeaca4u));
  /* 10ac5f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f28 call 0x10ac30f0 */
  push32(0x10ac5f2du); f_10ac30f0();
  /* 10ac5f2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5f33 jne 0x10ac5f36 */
  if (!C.zf) goto L_10ac5f36;
  /* 10ac5f35 int3  */
  x86_unimpl("int3 @ 0x10ac5f35");
L_10ac5f36:;
  /* 10ac5f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5f38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5f3a jne 0x10ac5efa */
  if (!C.zf) goto L_10ac5efa;
  /* 10ac5f3c jmp 0x10ac5eeb */
  goto L_10ac5eeb;
L_10ac5f3e:;
  /* 10ac5f3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5f41 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10ac5f44 push edx */
  push32((uint32_t)(EDX));
  /* 10ac5f45 push 0x10aeac80 */
  push32((uint32_t)(0x10aeac80u));
  /* 10ac5f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f52 call 0x10ac30f0 */
  push32(0x10ac5f57u); f_10ac30f0();
  /* 10ac5f57 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5f5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5f5d jne 0x10ac5f60 */
  if (!C.zf) goto L_10ac5f60;
  /* 10ac5f5f int3  */
  x86_unimpl("int3 @ 0x10ac5f5f");
L_10ac5f60:;
  /* 10ac5f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5f64 jne 0x10ac5f3e */
  if (!C.zf) goto L_10ac5f3e;
L_10ac5f66:;
  /* 10ac5f66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac5f69 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10ac5f6c push edx */
  push32((uint32_t)(EDX));
  /* 10ac5f6d push 0x10aeac60 */
  push32((uint32_t)(0x10aeac60u));
  /* 10ac5f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac5f7a call 0x10ac30f0 */
  push32(0x10ac5f7fu); f_10ac30f0();
  /* 10ac5f7f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5f82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5f85 jne 0x10ac5f88 */
  if (!C.zf) goto L_10ac5f88;
  /* 10ac5f87 int3  */
  x86_unimpl("int3 @ 0x10ac5f87");
L_10ac5f88:;
  /* 10ac5f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac5f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac5f8c jne 0x10ac5f66 */
  if (!C.zf) goto L_10ac5f66;
L_10ac5f8e:;
  /* 10ac5f8e pop edi */
  EDI = (pop32());
  /* 10ac5f8f pop esi */
  ESI = (pop32());
  /* 10ac5f90 pop ebx */
  EBX = (pop32());
  /* 10ac5f91 mov esp, ebp */
  ESP = (EBP);
  /* 10ac5f93 pop ebp */
  EBP = (pop32());
  /* 10ac5f94 ret  */
  ESPCHK(0x10ac5ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fa0 @ 0x10ac5fa0 (329 bytes, 102 insns) */
void f_10ac5fa0(void) {
  FTRACE(0x10ac5fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac5fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac5fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac5fa3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac5fa6 cmp dword ptr [0x10af1110], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5fad jne 0x10ac5fb4 */
  if (!C.zf) goto L_10ac5fb4;
  /* 10ac5faf call 0x10aca8e0 */
  push32(0x10ac5fb4u); f_10aca8e0();
L_10ac5fb4:;
  /* 10ac5fb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ac5fbb mov eax, dword ptr [0x10aef5c0] */
  EAX = (r32((uint32_t)(0x10aef5c0)));
  /* 10ac5fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac5fc3:;
  /* 10ac5fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5fc6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ac5fc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac5fcb je 0x10ac5ff9 */
  if (C.zf) goto L_10ac5ff9;
  /* 10ac5fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5fd0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac5fd3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac5fd6 je 0x10ac5fe1 */
  if (C.zf) goto L_10ac5fe1;
  /* 10ac5fd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac5fdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5fde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ac5fe1:;
  /* 10ac5fe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5fe4 push eax */
  push32((uint32_t)(EAX));
  /* 10ac5fe5 call 0x10ac6e60 */
  push32(0x10ac5feau); f_10ac6e60();
  /* 10ac5fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac5fed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac5ff0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10ac5ff4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac5ff7 jmp 0x10ac5fc3 */
  goto L_10ac5fc3;
L_10ac5ff9:;
  /* 10ac5ff9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10ac5ffb push 0x10aeacc4 */
  push32((uint32_t)(0x10aeacc4u));
  /* 10ac6000 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac6002 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6005 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10ac600c push ecx */
  push32((uint32_t)(ECX));
  /* 10ac600d call 0x10ac4030 */
  push32(0x10ac6012u); f_10ac4030();
  /* 10ac6012 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6015 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac6018 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac601b mov dword ptr [0x10aef5f4], edx */
  w32((uint32_t)(0x10aef5f4), (EDX));
  /* 10ac6021 cmp dword ptr [0x10aef5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6028 jne 0x10ac6034 */
  if (!C.zf) goto L_10ac6034;
  /* 10ac602a push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac602c call 0x10ac2fa0 */
  push32(0x10ac6031u); f_10ac2fa0();
  /* 10ac6031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac6034:;
  /* 10ac6034 mov eax, dword ptr [0x10aef5c0] */
  EAX = (r32((uint32_t)(0x10aef5c0)));
  /* 10ac6039 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac603c jmp 0x10ac6047 */
  goto L_10ac6047;
L_10ac603e:;
  /* 10ac603e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6041 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6044 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ac6047:;
  /* 10ac6047 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac604a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ac604d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac604f je 0x10ac60b7 */
  if (C.zf) goto L_10ac60b7;
  /* 10ac6051 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6054 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6055 call 0x10ac6e60 */
  push32(0x10ac605au); f_10ac6e60();
  /* 10ac605a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac605d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6060 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ac6063 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6066 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ac6069 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac606c je 0x10ac60b5 */
  if (C.zf) goto L_10ac60b5;
  /* 10ac606e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10ac6070 push 0x10aeacc4 */
  push32((uint32_t)(0x10aeacc4u));
  /* 10ac6075 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac6077 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac607a push ecx */
  push32((uint32_t)(ECX));
  /* 10ac607b call 0x10ac4030 */
  push32(0x10ac6080u); f_10ac4030();
  /* 10ac6080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6083 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6086 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ac6088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac608b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac608e jne 0x10ac609a */
  if (!C.zf) goto L_10ac609a;
  /* 10ac6090 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac6092 call 0x10ac2fa0 */
  push32(0x10ac6097u); f_10ac2fa0();
  /* 10ac6097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac609a:;
  /* 10ac609a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac609d push ecx */
  push32((uint32_t)(ECX));
  /* 10ac609e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac60a1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac60a3 push eax */
  push32((uint32_t)(EAX));
  /* 10ac60a4 call 0x10ac6fe0 */
  push32(0x10ac60a9u); f_10ac6fe0();
  /* 10ac60a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac60ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac60af add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac60b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ac60b5:;
  /* 10ac60b5 jmp 0x10ac603e */
  goto L_10ac603e;
L_10ac60b7:;
  /* 10ac60b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac60b9 mov edx, dword ptr [0x10aef5c0] */
  EDX = (r32((uint32_t)(0x10aef5c0)));
  /* 10ac60bf push edx */
  push32((uint32_t)(EDX));
  /* 10ac60c0 call 0x10ac4ac0 */
  push32(0x10ac60c5u); f_10ac4ac0();
  /* 10ac60c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac60c8 mov dword ptr [0x10aef5c0], 0 */
  w32((uint32_t)(0x10aef5c0), (0x0u));
  /* 10ac60d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac60d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ac60db mov dword ptr [0x10af1100], 1 */
  w32((uint32_t)(0x10af1100), (0x1u));
  /* 10ac60e5 mov esp, ebp */
  ESP = (EBP);
  /* 10ac60e7 pop ebp */
  EBP = (pop32());
  /* 10ac60e8 ret  */
  ESPCHK(0x10ac5fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060f0 @ 0x10ac60f0 (216 bytes, 69 insns) */
void f_10ac60f0(void) {
  FTRACE(0x10ac60f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac60f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac60f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac60f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac60f6 cmp dword ptr [0x10af1110], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac60fd jne 0x10ac6104 */
  if (!C.zf) goto L_10ac6104;
  /* 10ac60ff call 0x10aca8e0 */
  push32(0x10ac6104u); f_10aca8e0();
L_10ac6104:;
  /* 10ac6104 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10ac6109 push 0x10aef630 */
  push32((uint32_t)(0x10aef630u));
  /* 10ac610e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6110 call dword ptr [0x10af2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2310))), 0x10ac6116u);
  /* 10ac6116 mov dword ptr [0x10aef604], 0x10aef630 */
  w32((uint32_t)(0x10aef604), (0x10aef630u));
  /* 10ac6120 mov eax, dword ptr [0x10af112c] */
  EAX = (r32((uint32_t)(0x10af112c)));
  /* 10ac6125 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac6128 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac612a jne 0x10ac6137 */
  if (!C.zf) goto L_10ac6137;
  /* 10ac612c mov edx, dword ptr [0x10aef604] */
  EDX = (r32((uint32_t)(0x10aef604)));
  /* 10ac6132 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ac6135 jmp 0x10ac613f */
  goto L_10ac613f;
L_10ac6137:;
  /* 10ac6137 mov eax, dword ptr [0x10af112c] */
  EAX = (r32((uint32_t)(0x10af112c)));
  /* 10ac613c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10ac613f:;
  /* 10ac613f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac6142 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ac6145 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10ac6148 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6149 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10ac614c push eax */
  push32((uint32_t)(EAX));
  /* 10ac614d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac614f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6151 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac6154 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6155 call 0x10ac61d0 */
  push32(0x10ac615au); f_10ac61d0();
  /* 10ac615a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac615d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10ac6162 push 0x10aeacd0 */
  push32((uint32_t)(0x10aeacd0u));
  /* 10ac6167 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac6169 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac616c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac616f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10ac6172 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6173 call 0x10ac4030 */
  push32(0x10ac6178u); f_10ac4030();
  /* 10ac6178 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac617b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac617e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6182 jne 0x10ac618e */
  if (!C.zf) goto L_10ac618e;
  /* 10ac6184 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ac6186 call 0x10ac2fa0 */
  push32(0x10ac618bu); f_10ac2fa0();
  /* 10ac618b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac618e:;
  /* 10ac618e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10ac6191 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6192 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10ac6195 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6196 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6199 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac619c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10ac619f push eax */
  push32((uint32_t)(EAX));
  /* 10ac61a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac61a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac61a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac61a7 push edx */
  push32((uint32_t)(EDX));
  /* 10ac61a8 call 0x10ac61d0 */
  push32(0x10ac61adu); f_10ac61d0();
  /* 10ac61ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac61b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac61b3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac61b6 mov dword ptr [0x10aef5e8], eax */
  w32((uint32_t)(0x10aef5e8), (EAX));
  /* 10ac61bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac61be mov dword ptr [0x10aef5ec], ecx */
  w32((uint32_t)(0x10aef5ec), (ECX));
  /* 10ac61c4 mov esp, ebp */
  ESP = (EBP);
  /* 10ac61c6 pop ebp */
  EBP = (pop32());
  /* 10ac61c7 ret  */
  ESPCHK(0x10ac60f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x10ac61d0 (1060 bytes, 360 insns) */
void f_10ac61d0(void) {
  FTRACE(0x10ac61d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac61d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac61d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac61d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac61d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac61d9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ac61df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac61e2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10ac61e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac61eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac61ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac61f2 je 0x10ac6205 */
  if (C.zf) goto L_10ac6205;
  /* 10ac61f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac61f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac61fa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ac61fc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac61ff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6202 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10ac6205:;
  /* 10ac6205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6208 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac620b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac620e jne 0x10ac62dd */
  if (!C.zf) goto L_10ac62dd;
L_10ac6214:;
  /* 10ac6214 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6217 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac621a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac621d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6220 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac6223 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6226 je 0x10ac62a2 */
  if (C.zf) goto L_10ac62a2;
  /* 10ac6228 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac622b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ac622e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac6230 je 0x10ac62a2 */
  if (C.zf) goto L_10ac62a2;
  /* 10ac6232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6235 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6237 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac6239 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac623b mov al, byte ptr [edx + 0x10af0e61] */
  AL = (r8((uint32_t)(EDX + 0x10af0e61)));
  /* 10ac6241 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac6246 je 0x10ac6277 */
  if (C.zf) goto L_10ac6277;
  /* 10ac6248 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac624b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac624d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6250 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac6253 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ac6255 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6259 je 0x10ac6277 */
  if (C.zf) goto L_10ac6277;
  /* 10ac625b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac625e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6261 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ac6263 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ac6265 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6268 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac626b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10ac626e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6271 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6274 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ac6277:;
  /* 10ac6277 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac627a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac627c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac627f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac6282 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ac6284 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6288 je 0x10ac629d */
  if (C.zf) goto L_10ac629d;
  /* 10ac628a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac628d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6290 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac6292 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ac6294 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6297 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac629a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10ac629d:;
  /* 10ac629d jmp 0x10ac6214 */
  goto L_10ac6214;
L_10ac62a2:;
  /* 10ac62a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac62a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac62a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac62aa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac62ad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ac62af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac62b3 je 0x10ac62c4 */
  if (C.zf) goto L_10ac62c4;
  /* 10ac62b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac62b8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10ac62bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac62be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac62c1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10ac62c4:;
  /* 10ac62c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac62c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac62ca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac62cd jne 0x10ac62d8 */
  if (!C.zf) goto L_10ac62d8;
  /* 10ac62cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac62d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac62d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ac62d8:;
  /* 10ac62d8 jmp 0x10ac63ac */
  goto L_10ac63ac;
L_10ac62dd:;
  /* 10ac62dd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac62e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac62e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac62e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac62e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ac62ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac62ee je 0x10ac6303 */
  if (C.zf) goto L_10ac6303;
  /* 10ac62f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac62f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac62f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac62f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ac62fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac62fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6300 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10ac6303:;
  /* 10ac6303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6306 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac6308 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10ac630b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac630e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6311 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac6314 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6317 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac631d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac631f mov dl, byte ptr [ecx + 0x10af0e61] */
  DL = (r8((uint32_t)(ECX + 0x10af0e61)));
  /* 10ac6325 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6328 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac632a je 0x10ac635b */
  if (C.zf) goto L_10ac635b;
  /* 10ac632c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac632f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac6331 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6334 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac6337 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ac6339 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac633d je 0x10ac6352 */
  if (C.zf) goto L_10ac6352;
  /* 10ac633f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6345 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac6347 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ac6349 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac634c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac634f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10ac6352:;
  /* 10ac6352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6355 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6358 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ac635b:;
  /* 10ac635b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac635e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6364 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6367 je 0x10ac6387 */
  if (C.zf) goto L_10ac6387;
  /* 10ac6369 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac636c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac6373 je 0x10ac6387 */
  if (C.zf) goto L_10ac6387;
  /* 10ac6375 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6378 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac637e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6381 jne 0x10ac62dd */
  if (!C.zf) goto L_10ac62dd;
L_10ac6387:;
  /* 10ac6387 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac638a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6390 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac6392 jne 0x10ac639f */
  if (!C.zf) goto L_10ac639f;
  /* 10ac6394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6397 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac639a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac639d jmp 0x10ac63ac */
  goto L_10ac63ac;
L_10ac639f:;
  /* 10ac639f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac63a3 je 0x10ac63ac */
  if (C.zf) goto L_10ac63ac;
  /* 10ac63a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac63a8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10ac63ac:;
  /* 10ac63ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10ac63b3:;
  /* 10ac63b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac63b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ac63b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac63bb je 0x10ac63de */
  if (C.zf) goto L_10ac63de;
L_10ac63bd:;
  /* 10ac63bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac63c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ac63c3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac63c6 je 0x10ac63d3 */
  if (C.zf) goto L_10ac63d3;
  /* 10ac63c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac63cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac63ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac63d1 jne 0x10ac63de */
  if (!C.zf) goto L_10ac63de;
L_10ac63d3:;
  /* 10ac63d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac63d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac63d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac63dc jmp 0x10ac63bd */
  goto L_10ac63bd;
L_10ac63de:;
  /* 10ac63de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac63e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac63e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac63e6 jne 0x10ac63ed */
  if (!C.zf) goto L_10ac63ed;
  /* 10ac63e8 jmp 0x10ac65cb */
  goto L_10ac65cb;
L_10ac63ed:;
  /* 10ac63ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac63f1 je 0x10ac6404 */
  if (C.zf) goto L_10ac6404;
  /* 10ac63f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac63f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac63f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ac63fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac63fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6401 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10ac6404:;
  /* 10ac6404 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac6407 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac6409 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac640c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac640f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ac6411:;
  /* 10ac6411 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ac6418 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10ac641f:;
  /* 10ac641f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6422 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ac6425 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6428 jne 0x10ac643e */
  if (!C.zf) goto L_10ac643e;
  /* 10ac642a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac642d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6430 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac6433 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac6436 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6439 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ac643c jmp 0x10ac641f */
  goto L_10ac641f;
L_10ac643e:;
  /* 10ac643e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6441 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac6444 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6447 jne 0x10ac649a */
  if (!C.zf) goto L_10ac649a;
  /* 10ac6449 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac644c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac644e mov ecx, 2 */
  ECX = (0x2u);
  /* 10ac6453 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ac6455 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac6457 jne 0x10ac6492 */
  if (!C.zf) goto L_10ac6492;
  /* 10ac6459 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac645d je 0x10ac647f */
  if (C.zf) goto L_10ac647f;
  /* 10ac645f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6462 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ac6466 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6469 jne 0x10ac6476 */
  if (!C.zf) goto L_10ac6476;
  /* 10ac646b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac646e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6471 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac6474 jmp 0x10ac647d */
  goto L_10ac647d;
L_10ac6476:;
  /* 10ac6476 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ac647d:;
  /* 10ac647d jmp 0x10ac6486 */
  goto L_10ac6486;
L_10ac647f:;
  /* 10ac647f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ac6486:;
  /* 10ac6486 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6488 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac648c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10ac648f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ac6492:;
  /* 10ac6492 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac6495 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ac6497 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ac649a:;
  /* 10ac649a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac649d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac64a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac64a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ac64a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac64a8 je 0x10ac64ce */
  if (C.zf) goto L_10ac64ce;
  /* 10ac64aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac64ae je 0x10ac64bf */
  if (C.zf) goto L_10ac64bf;
  /* 10ac64b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac64b3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10ac64b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac64b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac64bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10ac64bf:;
  /* 10ac64bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac64c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac64c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac64c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac64ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ac64cc jmp 0x10ac649a */
  goto L_10ac649a;
L_10ac64ce:;
  /* 10ac64ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac64d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ac64d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac64d6 je 0x10ac64f4 */
  if (C.zf) goto L_10ac64f4;
  /* 10ac64d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac64dc jne 0x10ac64f9 */
  if (!C.zf) goto L_10ac64f9;
  /* 10ac64de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac64e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ac64e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac64e7 je 0x10ac64f4 */
  if (C.zf) goto L_10ac64f4;
  /* 10ac64e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac64ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ac64ef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac64f2 jne 0x10ac64f9 */
  if (!C.zf) goto L_10ac64f9;
L_10ac64f4:;
  /* 10ac64f4 jmp 0x10ac65a4 */
  goto L_10ac65a4;
L_10ac64f9:;
  /* 10ac64f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac64fd je 0x10ac6596 */
  if (C.zf) goto L_10ac6596;
  /* 10ac6503 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6507 je 0x10ac655d */
  if (C.zf) goto L_10ac655d;
  /* 10ac6509 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac650c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac650e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ac6510 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac6512 mov cl, byte ptr [eax + 0x10af0e61] */
  CL = (r8((uint32_t)(EAX + 0x10af0e61)));
  /* 10ac6518 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac651b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac651d je 0x10ac6548 */
  if (C.zf) goto L_10ac6548;
  /* 10ac651f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6525 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ac6527 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10ac6529 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac652c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac652f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10ac6532 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6535 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6538 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac653b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac653e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac6540 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6543 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac6546 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ac6548:;
  /* 10ac6548 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac654b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac654e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ac6550 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ac6552 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6555 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6558 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10ac655b jmp 0x10ac6589 */
  goto L_10ac6589;
L_10ac655d:;
  /* 10ac655d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6562 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ac6564 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac6566 mov cl, byte ptr [eax + 0x10af0e61] */
  CL = (r8((uint32_t)(EAX + 0x10af0e61)));
  /* 10ac656c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac656f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac6571 je 0x10ac6589 */
  if (C.zf) goto L_10ac6589;
  /* 10ac6573 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6576 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6579 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac657c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac657f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac6581 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6584 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac6587 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac6589:;
  /* 10ac6589 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac658c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac658e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6591 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac6594 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac6596:;
  /* 10ac6596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6599 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac659c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac659f jmp 0x10ac6411 */
  goto L_10ac6411;
L_10ac65a4:;
  /* 10ac65a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac65a8 je 0x10ac65b9 */
  if (C.zf) goto L_10ac65b9;
  /* 10ac65aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac65ad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10ac65b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac65b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac65b6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10ac65b9:;
  /* 10ac65b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac65bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac65be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac65c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ac65c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ac65c6 jmp 0x10ac63b3 */
  goto L_10ac63b3;
L_10ac65cb:;
  /* 10ac65cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac65cf je 0x10ac65e3 */
  if (C.zf) goto L_10ac65e3;
  /* 10ac65d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac65d4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ac65da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac65dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac65e0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10ac65e3:;
  /* 10ac65e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac65e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac65e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac65eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac65ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ac65f0 mov esp, ebp */
  ESP = (EBP);
  /* 10ac65f2 pop ebp */
  EBP = (pop32());
  /* 10ac65f3 ret  */
  ESPCHK(0x10ac61d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x10ac6600 (537 bytes, 173 insns) */
void f_10ac6600(void) {
  FTRACE(0x10ac6600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6600 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6601 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6603 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6606 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10ac660d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10ac6614 cmp dword ptr [0x10aef734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac661b jne 0x10ac665a */
  if (!C.zf) goto L_10ac665a;
  /* 10ac661d call dword ptr [0x10af236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af236c))), 0x10ac6623u);
  /* 10ac6623 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ac6626 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac662a je 0x10ac6638 */
  if (C.zf) goto L_10ac6638;
  /* 10ac662c mov dword ptr [0x10aef734], 1 */
  w32((uint32_t)(0x10aef734), (0x1u));
  /* 10ac6636 jmp 0x10ac665a */
  goto L_10ac665a;
L_10ac6638:;
  /* 10ac6638 call dword ptr [0x10af2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2368))), 0x10ac663eu);
  /* 10ac663e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac6641 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6645 je 0x10ac6653 */
  if (C.zf) goto L_10ac6653;
  /* 10ac6647 mov dword ptr [0x10aef734], 2 */
  w32((uint32_t)(0x10aef734), (0x2u));
  /* 10ac6651 jmp 0x10ac665a */
  goto L_10ac665a;
L_10ac6653:;
  /* 10ac6653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6655 jmp 0x10ac6815 */
  goto L_10ac6815;
L_10ac665a:;
  /* 10ac665a cmp dword ptr [0x10aef734], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef734))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6661 jne 0x10ac675e */
  if (!C.zf) goto L_10ac675e;
  /* 10ac6667 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac666b jne 0x10ac6683 */
  if (!C.zf) goto L_10ac6683;
  /* 10ac666d call dword ptr [0x10af236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af236c))), 0x10ac6673u);
  /* 10ac6673 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ac6676 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac667a jne 0x10ac6683 */
  if (!C.zf) goto L_10ac6683;
  /* 10ac667c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac667e jmp 0x10ac6815 */
  goto L_10ac6815;
L_10ac6683:;
  /* 10ac6683 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac6686 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ac6689:;
  /* 10ac6689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac668c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac668e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10ac6691 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac6693 je 0x10ac66b5 */
  if (C.zf) goto L_10ac66b5;
  /* 10ac6695 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6698 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac669b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac669e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac66a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac66a3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10ac66a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac66a8 jne 0x10ac66b3 */
  if (!C.zf) goto L_10ac66b3;
  /* 10ac66aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac66ad add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac66b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ac66b3:;
  /* 10ac66b3 jmp 0x10ac6689 */
  goto L_10ac6689;
L_10ac66b5:;
  /* 10ac66b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac66b8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac66bb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ac66bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac66c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac66c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac66c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac66c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac66c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac66cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac66ce push edx */
  push32((uint32_t)(EDX));
  /* 10ac66cf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac66d2 push eax */
  push32((uint32_t)(EAX));
  /* 10ac66d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac66d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac66d7 call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ac66ddu);
  /* 10ac66dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ac66e0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac66e4 je 0x10ac6704 */
  if (C.zf) goto L_10ac6704;
  /* 10ac66e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10ac66e8 push 0x10aeacdc */
  push32((uint32_t)(0x10aeacdcu));
  /* 10ac66ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac66ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac66f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac66f3 call 0x10ac4030 */
  push32(0x10ac66f8u); f_10ac4030();
  /* 10ac66f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac66fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac66fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6702 jne 0x10ac6715 */
  if (!C.zf) goto L_10ac6715;
L_10ac6704:;
  /* 10ac6704 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac6707 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6708 call dword ptr [0x10af2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2360))), 0x10ac670eu);
  /* 10ac670e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6710 jmp 0x10ac6815 */
  goto L_10ac6815;
L_10ac6715:;
  /* 10ac6715 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6719 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac671c push eax */
  push32((uint32_t)(EAX));
  /* 10ac671d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac6720 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6724 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6725 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac6728 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6729 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac672b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac672d call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10ac6733u);
  /* 10ac6733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac6735 jne 0x10ac674c */
  if (!C.zf) goto L_10ac674c;
  /* 10ac6737 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac6739 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac673c push ecx */
  push32((uint32_t)(ECX));
  /* 10ac673d call 0x10ac4ac0 */
  push32(0x10ac6742u); f_10ac4ac0();
  /* 10ac6742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6745 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10ac674c:;
  /* 10ac674c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac674f push edx */
  push32((uint32_t)(EDX));
  /* 10ac6750 call dword ptr [0x10af2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2360))), 0x10ac6756u);
  /* 10ac6756 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac6759 jmp 0x10ac6815 */
  goto L_10ac6815;
L_10ac675e:;
  /* 10ac675e cmp dword ptr [0x10aef734], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10aef734))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6765 jne 0x10ac6813 */
  if (!C.zf) goto L_10ac6813;
  /* 10ac676b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac676f jne 0x10ac6787 */
  if (!C.zf) goto L_10ac6787;
  /* 10ac6771 call dword ptr [0x10af2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2368))), 0x10ac6777u);
  /* 10ac6777 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac677a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac677e jne 0x10ac6787 */
  if (!C.zf) goto L_10ac6787;
  /* 10ac6780 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6782 jmp 0x10ac6815 */
  goto L_10ac6815;
L_10ac6787:;
  /* 10ac6787 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac678a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ac678d:;
  /* 10ac678d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6790 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ac6793 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac6795 je 0x10ac67b5 */
  if (C.zf) goto L_10ac67b5;
  /* 10ac6797 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac679a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac679d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac67a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac67a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ac67a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac67a8 jne 0x10ac67b3 */
  if (!C.zf) goto L_10ac67b3;
  /* 10ac67aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac67ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac67b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ac67b3:;
  /* 10ac67b3 jmp 0x10ac678d */
  goto L_10ac678d;
L_10ac67b5:;
  /* 10ac67b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac67b8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac67bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac67be mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ac67c1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10ac67c6 push 0x10aeacdc */
  push32((uint32_t)(0x10aeacdcu));
  /* 10ac67cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac67cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac67d0 push edx */
  push32((uint32_t)(EDX));
  /* 10ac67d1 call 0x10ac4030 */
  push32(0x10ac67d6u); f_10ac4030();
  /* 10ac67d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac67d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac67dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac67e0 jne 0x10ac67f0 */
  if (!C.zf) goto L_10ac67f0;
  /* 10ac67e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac67e5 push eax */
  push32((uint32_t)(EAX));
  /* 10ac67e6 call dword ptr [0x10af235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af235c))), 0x10ac67ecu);
  /* 10ac67ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac67ee jmp 0x10ac6815 */
  goto L_10ac6815;
L_10ac67f0:;
  /* 10ac67f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac67f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac67f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac67f7 push edx */
  push32((uint32_t)(EDX));
  /* 10ac67f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac67fb push eax */
  push32((uint32_t)(EAX));
  /* 10ac67fc call 0x10aca910 */
  push32(0x10ac6801u); f_10aca910();
  /* 10ac6801 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6804 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac6807 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6808 call dword ptr [0x10af235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af235c))), 0x10ac680eu);
  /* 10ac680e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6811 jmp 0x10ac6815 */
  goto L_10ac6815;
L_10ac6813:;
  /* 10ac6813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac6815:;
  /* 10ac6815 mov esp, ebp */
  ESP = (EBP);
  /* 10ac6817 pop ebp */
  EBP = (pop32());
  /* 10ac6818 ret  */
  ESPCHK(0x10ac6600u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10ac6820 (77 bytes, 25 insns) */
void f_10ac6820(void) {
  FTRACE(0x10ac6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6820 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6821 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6823 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6825 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10ac682a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac682c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6830 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10ac6833 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6834 call dword ptr [0x10af2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2374))), 0x10ac683au);
  /* 10ac683a mov dword ptr [0x10af0f8c], eax */
  w32((uint32_t)(0x10af0f8c), (EAX));
  /* 10ac683f cmp dword ptr [0x10af0f8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af0f8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6846 jne 0x10ac684c */
  if (!C.zf) goto L_10ac684c;
  /* 10ac6848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac684a jmp 0x10ac686b */
  goto L_10ac686b;
L_10ac684c:;
  /* 10ac684c call 0x10ac82d0 */
  push32(0x10ac6851u); f_10ac82d0();
  /* 10ac6851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac6853 jne 0x10ac6866 */
  if (!C.zf) goto L_10ac6866;
  /* 10ac6855 mov ecx, dword ptr [0x10af0f8c] */
  ECX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac685b push ecx */
  push32((uint32_t)(ECX));
  /* 10ac685c call dword ptr [0x10af2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2370))), 0x10ac6862u);
  /* 10ac6862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6864 jmp 0x10ac686b */
  goto L_10ac686b;
L_10ac6866:;
  /* 10ac6866 mov eax, 1 */
  EAX = (0x1u);
L_10ac686b:;
  /* 10ac686b pop ebp */
  EBP = (pop32());
  /* 10ac686c ret  */
  ESPCHK(0x10ac6820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006870 @ 0x10ac6870 (156 bytes, 48 insns) */
void f_10ac6870(void) {
  FTRACE(0x10ac6870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6870 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6871 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6876 mov eax, dword ptr [0x10af0f88] */
  EAX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac687b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac687e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ac6885 jmp 0x10ac6890 */
  goto L_10ac6890;
L_10ac6887:;
  /* 10ac6887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac688a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac688d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ac6890:;
  /* 10ac6890 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6893 cmp edx, dword ptr [0x10af0f84] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10af0f84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6899 jge 0x10ac68e6 */
  if ((C.sf==C.of)) goto L_10ac68e6;
  /* 10ac689b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10ac68a0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10ac68a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac68a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ac68ab push ecx */
  push32((uint32_t)(ECX));
  /* 10ac68ac call dword ptr [0x10af237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af237c))), 0x10ac68b2u);
  /* 10ac68b2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ac68b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac68b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac68bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ac68bf push eax */
  push32((uint32_t)(EAX));
  /* 10ac68c0 call dword ptr [0x10af237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af237c))), 0x10ac68c6u);
  /* 10ac68c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac68c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ac68cc push edx */
  push32((uint32_t)(EDX));
  /* 10ac68cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac68cf mov eax, dword ptr [0x10af0f8c] */
  EAX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac68d4 push eax */
  push32((uint32_t)(EAX));
  /* 10ac68d5 call dword ptr [0x10af2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2378))), 0x10ac68dbu);
  /* 10ac68db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac68de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac68e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ac68e4 jmp 0x10ac6887 */
  goto L_10ac6887;
L_10ac68e6:;
  /* 10ac68e6 mov edx, dword ptr [0x10af0f88] */
  EDX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac68ec push edx */
  push32((uint32_t)(EDX));
  /* 10ac68ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac68ef mov eax, dword ptr [0x10af0f8c] */
  EAX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac68f4 push eax */
  push32((uint32_t)(EAX));
  /* 10ac68f5 call dword ptr [0x10af2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2378))), 0x10ac68fbu);
  /* 10ac68fb mov ecx, dword ptr [0x10af0f8c] */
  ECX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac6901 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6902 call dword ptr [0x10af2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2370))), 0x10ac6908u);
  /* 10ac6908 mov esp, ebp */
  ESP = (EBP);
  /* 10ac690a pop ebp */
  EBP = (pop32());
  /* 10ac690b ret  */
  ESPCHK(0x10ac6870u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10ac6910 (73 bytes, 19 insns) */
void f_10ac6910(void) {
  FTRACE(0x10ac6910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6910 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6911 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6913 cmp dword ptr [0x10aef5c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac691a je 0x10ac692e */
  if (C.zf) goto L_10ac692e;
  /* 10ac691c cmp dword ptr [0x10aef5c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6923 jne 0x10ac6957 */
  if (!C.zf) goto L_10ac6957;
  /* 10ac6925 cmp dword ptr [0x10aef5cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac692c jne 0x10ac6957 */
  if (!C.zf) goto L_10ac6957;
L_10ac692e:;
  /* 10ac692e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10ac6933 call 0x10ac6960 */
  push32(0x10ac6938u); f_10ac6960();
  /* 10ac6938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac693b cmp dword ptr [0x10aef738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6942 je 0x10ac694a */
  if (C.zf) goto L_10ac694a;
  /* 10ac6944 call dword ptr [0x10aef738] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef738))), 0x10ac694au);
L_10ac694a:;
  /* 10ac694a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10ac694f call 0x10ac6960 */
  push32(0x10ac6954u); f_10ac6960();
  /* 10ac6954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac6957:;
  /* 10ac6957 pop ebp */
  EBP = (pop32());
  /* 10ac6958 ret  */
  ESPCHK(0x10ac6910u, _esp0);
  ESP += 4; return;
}

/* FUN_10006960 @ 0x10ac6960 (447 bytes, 131 insns) */
void f_10ac6960(void) {
  FTRACE(0x10ac6960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6960 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6961 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6963 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6969 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac696a push esi */
  push32((uint32_t)(ESI));
  /* 10ac696b push edi */
  push32((uint32_t)(EDI));
  /* 10ac696c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ac6973 jmp 0x10ac697e */
  goto L_10ac697e;
L_10ac6975:;
  /* 10ac6975 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6978 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac697b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ac697e:;
  /* 10ac697e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6982 jae 0x10ac6997 */
  if (!C.cf) goto L_10ac6997;
  /* 10ac6984 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6987 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac698a cmp edx, dword ptr [ecx*8 + 0x10aedab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10aedab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6991 jne 0x10ac6995 */
  if (!C.zf) goto L_10ac6995;
  /* 10ac6993 jmp 0x10ac6997 */
  goto L_10ac6997;
L_10ac6995:;
  /* 10ac6995 jmp 0x10ac6975 */
  goto L_10ac6975;
L_10ac6997:;
  /* 10ac6997 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac699a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac699d cmp ecx, dword ptr [eax*8 + 0x10aedab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10aedab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac69a4 jne 0x10ac6b18 */
  if (!C.zf) goto L_10ac6b18;
  /* 10ac69aa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac69b1 je 0x10ac69d4 */
  if (C.zf) goto L_10ac69d4;
  /* 10ac69b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac69b6 mov eax, dword ptr [edx*8 + 0x10aedab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10aedab4)));
  /* 10ac69bd push eax */
  push32((uint32_t)(EAX));
  /* 10ac69be push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac69c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac69c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac69c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac69c6 call 0x10ac30f0 */
  push32(0x10ac69cbu); f_10ac30f0();
  /* 10ac69cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac69ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac69d1 jne 0x10ac69d4 */
  if (!C.zf) goto L_10ac69d4;
  /* 10ac69d3 int3  */
  x86_unimpl("int3 @ 0x10ac69d3");
L_10ac69d4:;
  /* 10ac69d4 cmp dword ptr [0x10aef5c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac69db je 0x10ac69ef */
  if (C.zf) goto L_10ac69ef;
  /* 10ac69dd cmp dword ptr [0x10aef5c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac69e4 jne 0x10ac6a28 */
  if (!C.zf) goto L_10ac6a28;
  /* 10ac69e6 cmp dword ptr [0x10aef5cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac69ed jne 0x10ac6a28 */
  if (!C.zf) goto L_10ac6a28;
L_10ac69ef:;
  /* 10ac69ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac69f1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10ac69f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac69f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac69f8 mov eax, dword ptr [edx*8 + 0x10aedab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10aedab4)));
  /* 10ac69ff push eax */
  push32((uint32_t)(EAX));
  /* 10ac6a00 call 0x10ac6e60 */
  push32(0x10ac6a05u); f_10ac6e60();
  /* 10ac6a05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6a08 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6a09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6a0c mov edx, dword ptr [ecx*8 + 0x10aedab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10aedab4)));
  /* 10ac6a13 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6a14 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10ac6a16 call dword ptr [0x10af22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22f4))), 0x10ac6a1cu);
  /* 10ac6a1c push eax */
  push32((uint32_t)(EAX));
  /* 10ac6a1d call dword ptr [0x10af22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22f8))), 0x10ac6a23u);
  /* 10ac6a23 jmp 0x10ac6b18 */
  goto L_10ac6b18;
L_10ac6a28:;
  /* 10ac6a28 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6a2f je 0x10ac6b18 */
  if (C.zf) goto L_10ac6b18;
  /* 10ac6a35 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10ac6a3a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10ac6a40 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6a43 call dword ptr [0x10af2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2310))), 0x10ac6a49u);
  /* 10ac6a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac6a4b jne 0x10ac6a61 */
  if (!C.zf) goto L_10ac6a61;
  /* 10ac6a4d push 0x10aea544 */
  push32((uint32_t)(0x10aea544u));
  /* 10ac6a52 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10ac6a58 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6a59 call 0x10ac6fe0 */
  push32(0x10ac6a5eu); f_10ac6fe0();
  /* 10ac6a5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac6a61:;
  /* 10ac6a61 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10ac6a67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ac6a6a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6a6d push eax */
  push32((uint32_t)(EAX));
  /* 10ac6a6e call 0x10ac6e60 */
  push32(0x10ac6a73u); f_10ac6e60();
  /* 10ac6a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6a76 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6a79 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6a7c jbe 0x10ac6aaa */
  if ((C.cf||C.zf)) goto L_10ac6aaa;
  /* 10ac6a7e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10ac6a84 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6a85 call 0x10ac6e60 */
  push32(0x10ac6a8au); f_10ac6e60();
  /* 10ac6a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6a8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6a90 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10ac6a94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac6a97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac6a99 push 0x10aea540 */
  push32((uint32_t)(0x10aea540u));
  /* 10ac6a9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6aa2 call 0x10ac7850 */
  push32(0x10ac6aa7u); f_10ac7850();
  /* 10ac6aa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac6aaa:;
  /* 10ac6aaa push 0x10aeaf98 */
  push32((uint32_t)(0x10aeaf98u));
  /* 10ac6aaf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10ac6ab5 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6ab6 call 0x10ac6fe0 */
  push32(0x10ac6abbu); f_10ac6fe0();
  /* 10ac6abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6abe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6ac1 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6ac2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10ac6ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6ac9 call 0x10ac6ff0 */
  push32(0x10ac6aceu); f_10ac6ff0();
  /* 10ac6ace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6ad1 push 0x10aea4b8 */
  push32((uint32_t)(0x10aea4b8u));
  /* 10ac6ad6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10ac6adc push edx */
  push32((uint32_t)(EDX));
  /* 10ac6add call 0x10ac6ff0 */
  push32(0x10ac6ae2u); f_10ac6ff0();
  /* 10ac6ae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6ae5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6ae8 mov ecx, dword ptr [eax*8 + 0x10aedab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10aedab4)));
  /* 10ac6aef push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6af0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10ac6af6 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6af7 call 0x10ac6ff0 */
  push32(0x10ac6afcu); f_10ac6ff0();
  /* 10ac6afc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6aff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10ac6b04 push 0x10aeaf70 */
  push32((uint32_t)(0x10aeaf70u));
  /* 10ac6b09 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10ac6b0f push eax */
  push32((uint32_t)(EAX));
  /* 10ac6b10 call 0x10ac7790 */
  push32(0x10ac6b15u); f_10ac7790();
  /* 10ac6b15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac6b18:;
  /* 10ac6b18 pop edi */
  EDI = (pop32());
  /* 10ac6b19 pop esi */
  ESI = (pop32());
  /* 10ac6b1a pop ebx */
  EBX = (pop32());
  /* 10ac6b1b mov esp, ebp */
  ESP = (EBP);
  /* 10ac6b1d pop ebp */
  EBP = (pop32());
  /* 10ac6b1e ret  */
  ESPCHK(0x10ac6960u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10ac6b20 (80 bytes, 27 insns) */
void f_10ac6b20(void) {
  FTRACE(0x10ac6b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6b21 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6b24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ac6b2b jmp 0x10ac6b36 */
  goto L_10ac6b36;
L_10ac6b2d:;
  /* 10ac6b2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6b30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6b33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac6b36:;
  /* 10ac6b36 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6b3a jae 0x10ac6b4f */
  if (!C.cf) goto L_10ac6b4f;
  /* 10ac6b3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6b42 cmp edx, dword ptr [ecx*8 + 0x10aedab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10aedab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6b49 jne 0x10ac6b4d */
  if (!C.zf) goto L_10ac6b4d;
  /* 10ac6b4b jmp 0x10ac6b4f */
  goto L_10ac6b4f;
L_10ac6b4d:;
  /* 10ac6b4d jmp 0x10ac6b2d */
  goto L_10ac6b2d;
L_10ac6b4f:;
  /* 10ac6b4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6b52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6b55 cmp ecx, dword ptr [eax*8 + 0x10aedab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10aedab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6b5c jne 0x10ac6b6a */
  if (!C.zf) goto L_10ac6b6a;
  /* 10ac6b5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6b61 mov eax, dword ptr [edx*8 + 0x10aedab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10aedab4)));
  /* 10ac6b68 jmp 0x10ac6b6c */
  goto L_10ac6b6c;
L_10ac6b6a:;
  /* 10ac6b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac6b6c:;
  /* 10ac6b6c mov esp, ebp */
  ESP = (EBP);
  /* 10ac6b6e pop ebp */
  EBP = (pop32());
  /* 10ac6b6f ret  */
  ESPCHK(0x10ac6b20u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10ac6b70 (66 bytes, 28 insns) */
void f_10ac6b70(void) {
  FTRACE(0x10ac6b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6b71 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6b73 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6b77 jne 0x10ac6b97 */
  if (!C.zf) goto L_10ac6b97;
  /* 10ac6b79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6b7d jge 0x10ac6b97 */
  if ((C.sf==C.of)) goto L_10ac6b97;
  /* 10ac6b7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac6b81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6b84 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6b85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6b88 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6b89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6b8c push edx */
  push32((uint32_t)(EDX));
  /* 10ac6b8d call 0x10ac6bc0 */
  push32(0x10ac6b92u); f_10ac6bc0();
  /* 10ac6b92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6b95 jmp 0x10ac6bad */
  goto L_10ac6bad;
L_10ac6b97:;
  /* 10ac6b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6b99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6b9c push eax */
  push32((uint32_t)(EAX));
  /* 10ac6b9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6ba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6ba4 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6ba5 call 0x10ac6bc0 */
  push32(0x10ac6baau); f_10ac6bc0();
  /* 10ac6baa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac6bad:;
  /* 10ac6bad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6bb0 pop ebp */
  EBP = (pop32());
  /* 10ac6bb1 ret  */
  ESPCHK(0x10ac6b70u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10ac6bc0 (194 bytes, 71 insns) */
void f_10ac6bc0(void) {
  FTRACE(0x10ac6bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6bc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6bc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6bc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac6bcc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6bd0 je 0x10ac6be9 */
  if (C.zf) goto L_10ac6be9;
  /* 10ac6bd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6bd5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10ac6bd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6bdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6bde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac6be1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6be4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ac6be6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ac6be9:;
  /* 10ac6be9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6bec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ac6bef:;
  /* 10ac6bef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6bf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6bf4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ac6bf7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ac6bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6bfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6bff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ac6c02 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ac6c05 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6c09 jbe 0x10ac6c21 */
  if ((C.cf||C.zf)) goto L_10ac6c21;
  /* 10ac6c0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6c0e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6c11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6c14 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ac6c16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6c19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6c1c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac6c1f jmp 0x10ac6c35 */
  goto L_10ac6c35;
L_10ac6c21:;
  /* 10ac6c21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6c24 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6c2a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ac6c2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6c2f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6c32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ac6c35:;
  /* 10ac6c35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6c39 ja 0x10ac6bef */
  if ((!C.cf&&!C.zf)) goto L_10ac6bef;
  /* 10ac6c3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6c3e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ac6c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6c44 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6c47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac6c4a:;
  /* 10ac6c4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6c4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac6c4f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10ac6c52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6c55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6c58 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac6c5a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ac6c5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6c5f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10ac6c62 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10ac6c64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6c67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6c6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac6c6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6c70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6c73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac6c76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6c79 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6c7c jb 0x10ac6c4a */
  if (C.cf) goto L_10ac6c4a;
  /* 10ac6c7e mov esp, ebp */
  ESP = (EBP);
  /* 10ac6c80 pop ebp */
  EBP = (pop32());
  /* 10ac6c81 ret  */
  ESPCHK(0x10ac6bc0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10ac6c90 (63 bytes, 24 insns) */
void f_10ac6c90(void) {
  FTRACE(0x10ac6c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6c91 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6c94 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6c98 jne 0x10ac6ca9 */
  if (!C.zf) goto L_10ac6ca9;
  /* 10ac6c9a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6c9e jge 0x10ac6ca9 */
  if ((C.sf==C.of)) goto L_10ac6ca9;
  /* 10ac6ca0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ac6ca7 jmp 0x10ac6cb0 */
  goto L_10ac6cb0;
L_10ac6ca9:;
  /* 10ac6ca9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ac6cb0:;
  /* 10ac6cb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6cb3 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6cb4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6cb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6cbb push edx */
  push32((uint32_t)(EDX));
  /* 10ac6cbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6cbf push eax */
  push32((uint32_t)(EAX));
  /* 10ac6cc0 call 0x10ac6bc0 */
  push32(0x10ac6cc5u); f_10ac6bc0();
  /* 10ac6cc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6cc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6ccb mov esp, ebp */
  ESP = (EBP);
  /* 10ac6ccd pop ebp */
  EBP = (pop32());
  /* 10ac6cce ret  */
  ESPCHK(0x10ac6c90u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10ac6cd0 (30 bytes, 14 insns) */
void f_10ac6cd0(void) {
  FTRACE(0x10ac6cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6cd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6cd8 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6cd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6cdc push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6ce0 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6ce1 call 0x10ac6bc0 */
  push32(0x10ac6ce6u); f_10ac6bc0();
  /* 10ac6ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6ce9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6cec pop ebp */
  EBP = (pop32());
  /* 10ac6ced ret  */
  ESPCHK(0x10ac6cd0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10ac6cf0 (72 bytes, 28 insns) */
void f_10ac6cf0(void) {
  FTRACE(0x10ac6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6cf4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6cf8 jne 0x10ac6d11 */
  if (!C.zf) goto L_10ac6d11;
  /* 10ac6cfa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6cfe jg 0x10ac6d11 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ac6d11;
  /* 10ac6d00 jl 0x10ac6d08 */
  if ((C.sf!=C.of)) goto L_10ac6d08;
  /* 10ac6d02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6d06 jae 0x10ac6d11 */
  if (!C.cf) goto L_10ac6d11;
L_10ac6d08:;
  /* 10ac6d08 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ac6d0f jmp 0x10ac6d18 */
  goto L_10ac6d18;
L_10ac6d11:;
  /* 10ac6d11 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ac6d18:;
  /* 10ac6d18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6d1b push eax */
  push32((uint32_t)(EAX));
  /* 10ac6d1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac6d1f push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6d20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6d23 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6d24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6d27 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6d28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6d2b push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6d2c call 0x10ac6d40 */
  push32(0x10ac6d31u); f_10ac6d40();
  /* 10ac6d31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6d34 mov esp, ebp */
  ESP = (EBP);
  /* 10ac6d36 pop ebp */
  EBP = (pop32());
  /* 10ac6d37 ret  */
  ESPCHK(0x10ac6cf0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10ac6d40 (242 bytes, 91 insns) */
void f_10ac6d40(void) {
  FTRACE(0x10ac6d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6d41 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6d43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6d46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6d49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac6d4c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6d50 je 0x10ac6d74 */
  if (C.zf) goto L_10ac6d74;
  /* 10ac6d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6d55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10ac6d58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6d5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6d5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac6d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6d64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ac6d66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6d69 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6d6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ac6d6e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ac6d71 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10ac6d74:;
  /* 10ac6d74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6d77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ac6d7a:;
  /* 10ac6d7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac6d7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac6d7f push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6d80 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6d81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6d84 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6d85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6d88 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6d89 call 0x10acacc0 */
  push32(0x10ac6d8eu); f_10acacc0();
  /* 10ac6d8e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac6d91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac6d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6d96 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6d97 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6d98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6d9b push eax */
  push32((uint32_t)(EAX));
  /* 10ac6d9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6d9f push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6da0 call 0x10acac50 */
  push32(0x10ac6da5u); f_10acac50();
  /* 10ac6da5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ac6da8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10ac6dab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6daf jbe 0x10ac6dc7 */
  if ((C.cf||C.zf)) goto L_10ac6dc7;
  /* 10ac6db1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6db4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6db7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6dba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ac6dbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6dbf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6dc2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac6dc5 jmp 0x10ac6ddb */
  goto L_10ac6ddb;
L_10ac6dc7:;
  /* 10ac6dc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac6dca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6dcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6dd0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ac6dd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6dd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6dd8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ac6ddb:;
  /* 10ac6ddb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6ddf ja 0x10ac6d7a */
  if ((!C.cf&&!C.zf)) goto L_10ac6d7a;
  /* 10ac6de1 jb 0x10ac6de9 */
  if (C.cf) goto L_10ac6de9;
  /* 10ac6de3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6de7 ja 0x10ac6d7a */
  if ((!C.cf&&!C.zf)) goto L_10ac6d7a;
L_10ac6de9:;
  /* 10ac6de9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6dec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10ac6def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6df2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6df5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac6df8:;
  /* 10ac6df8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6dfb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac6dfd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10ac6e00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6e06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac6e08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ac6e0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6e0d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10ac6e10 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10ac6e12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac6e15 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6e18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac6e1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6e1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6e21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac6e24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac6e27 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6e2a jb 0x10ac6df8 */
  if (C.cf) goto L_10ac6df8;
  /* 10ac6e2c mov esp, ebp */
  ESP = (EBP);
  /* 10ac6e2e pop ebp */
  EBP = (pop32());
  /* 10ac6e2f ret 0x14 */
  ESPCHK(0x10ac6d40u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10ac6e40 (31 bytes, 15 insns) */
void f_10ac6e40(void) {
  FTRACE(0x10ac6e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6e41 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6e45 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac6e48 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6e49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6e4c push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6e4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6e50 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6e51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6e54 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6e55 call 0x10ac6d40 */
  push32(0x10ac6e5au); f_10ac6d40();
  /* 10ac6e5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6e5d pop ebp */
  EBP = (pop32());
  /* 10ac6e5e ret  */
  ESPCHK(0x10ac6e40u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10ac6e60 (123 bytes, 44 insns) */
void f_10ac6e60(void) {
  FTRACE(0x10ac6e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6e60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ac6e64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ac6e6a je 0x10ac6e80 */
  if (C.zf) goto L_10ac6e80;
L_10ac6e6c:;
  /* 10ac6e6c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10ac6e6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ac6e6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ac6e71 je 0x10ac6eb3 */
  if (C.zf) goto L_10ac6eb3;
  /* 10ac6e73 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ac6e79 jne 0x10ac6e6c */
  if (!C.zf) goto L_10ac6e6c;
  /* 10ac6e7b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10ac6e80:;
  /* 10ac6e80 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ac6e82 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10ac6e87 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6e89 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6e8c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6e8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6e91 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10ac6e96 je 0x10ac6e80 */
  if (C.zf) goto L_10ac6e80;
  /* 10ac6e98 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ac6e9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ac6e9d je 0x10ac6ed1 */
  if (C.zf) goto L_10ac6ed1;
  /* 10ac6e9f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ac6ea1 je 0x10ac6ec7 */
  if (C.zf) goto L_10ac6ec7;
  /* 10ac6ea3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10ac6ea8 je 0x10ac6ebd */
  if (C.zf) goto L_10ac6ebd;
  /* 10ac6eaa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10ac6eaf je 0x10ac6eb3 */
  if (C.zf) goto L_10ac6eb3;
  /* 10ac6eb1 jmp 0x10ac6e80 */
  goto L_10ac6e80;
L_10ac6eb3:;
  /* 10ac6eb3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10ac6eb6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ac6eba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6ebc ret  */
  ESPCHK(0x10ac6e60u, _esp0);
  ESP += 4; return;
L_10ac6ebd:;
  /* 10ac6ebd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10ac6ec0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ac6ec4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6ec6 ret  */
  ESPCHK(0x10ac6e60u, _esp0);
  ESP += 4; return;
L_10ac6ec7:;
  /* 10ac6ec7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10ac6eca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ac6ece sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6ed0 ret  */
  ESPCHK(0x10ac6e60u, _esp0);
  ESP += 4; return;
L_10ac6ed1:;
  /* 10ac6ed1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10ac6ed4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ac6ed8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6eda ret  */
  ESPCHK(0x10ac6e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ee0 @ 0x10ac6ee0 (249 bytes, 93 insns) */
void f_10ac6ee0(void) {
  FTRACE(0x10ac6ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac6ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac6ee3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6ee6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac6ee7 push esi */
  push32((uint32_t)(ESI));
  /* 10ac6ee8 push edi */
  push32((uint32_t)(EDI));
  /* 10ac6ee9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10ac6eec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ac6eef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10ac6ef2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10ac6ef5:;
  /* 10ac6ef5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6ef9 jne 0x10ac6f19 */
  if (!C.zf) goto L_10ac6f19;
  /* 10ac6efb push 0x10aeafd0 */
  push32((uint32_t)(0x10aeafd0u));
  /* 10ac6f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6f02 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10ac6f04 push 0x10aeafc4 */
  push32((uint32_t)(0x10aeafc4u));
  /* 10ac6f09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac6f0b call 0x10ac30f0 */
  push32(0x10ac6f10u); f_10ac30f0();
  /* 10ac6f10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6f13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6f16 jne 0x10ac6f19 */
  if (!C.zf) goto L_10ac6f19;
  /* 10ac6f18 int3  */
  x86_unimpl("int3 @ 0x10ac6f18");
L_10ac6f19:;
  /* 10ac6f19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6f1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac6f1d jne 0x10ac6ef5 */
  if (!C.zf) goto L_10ac6ef5;
L_10ac6f1f:;
  /* 10ac6f1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6f23 jne 0x10ac6f43 */
  if (!C.zf) goto L_10ac6f43;
  /* 10ac6f25 push 0x10aeafb4 */
  push32((uint32_t)(0x10aeafb4u));
  /* 10ac6f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6f2c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10ac6f2e push 0x10aeafc4 */
  push32((uint32_t)(0x10aeafc4u));
  /* 10ac6f33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac6f35 call 0x10ac30f0 */
  push32(0x10ac6f3au); f_10ac30f0();
  /* 10ac6f3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6f3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6f40 jne 0x10ac6f43 */
  if (!C.zf) goto L_10ac6f43;
  /* 10ac6f42 int3  */
  x86_unimpl("int3 @ 0x10ac6f42");
L_10ac6f43:;
  /* 10ac6f43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac6f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac6f47 jne 0x10ac6f1f */
  if (!C.zf) goto L_10ac6f1f;
  /* 10ac6f49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6f4c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10ac6f53 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6f59 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ac6f5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6f5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac6f62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ac6f64 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6f67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac6f6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ac6f6d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac6f70 push edx */
  push32((uint32_t)(EDX));
  /* 10ac6f71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac6f74 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6f75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6f78 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac6f79 call 0x10acafc0 */
  push32(0x10ac6f7eu); f_10acafc0();
  /* 10ac6f7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6f81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ac6f84 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6f87 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac6f8a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac6f8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6f90 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ac6f93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6f96 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac6f9a jl 0x10ac6fbe */
  if ((C.sf!=C.of)) goto L_10ac6fbe;
  /* 10ac6f9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6f9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac6fa1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10ac6fa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6fa6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac6fac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10ac6faf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6fb2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac6fb4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6fb7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6fba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ac6fbc jmp 0x10ac6fcf */
  goto L_10ac6fcf;
L_10ac6fbe:;
  /* 10ac6fbe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac6fc1 push eax */
  push32((uint32_t)(EAX));
  /* 10ac6fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac6fc4 call 0x10acad40 */
  push32(0x10ac6fc9u); f_10acad40();
  /* 10ac6fc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac6fcc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10ac6fcf:;
  /* 10ac6fcf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac6fd2 pop edi */
  EDI = (pop32());
  /* 10ac6fd3 pop esi */
  ESI = (pop32());
  /* 10ac6fd4 pop ebx */
  EBX = (pop32());
  /* 10ac6fd5 mov esp, ebp */
  ESP = (EBP);
  /* 10ac6fd7 pop ebp */
  EBP = (pop32());
  /* 10ac6fd8 ret  */
  ESPCHK(0x10ac6ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe0 @ 0x10ac6fe0 (7 bytes, 3 insns) */
void f_10ac6fe0(void) {
  FTRACE(0x10ac6fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6fe0 push edi */
  push32((uint32_t)(EDI));
  /* 10ac6fe1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10ac6fe5 jmp 0x10ac7051 */
  jmp_ind(0x10ac7051u); return;
}

/* FUN_10006ff0 @ 0x10ac6ff0 (224 bytes, 84 insns) */
void f_10ac6ff0(void) {
  FTRACE(0x10ac6ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac6ff0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ac6ff4 push edi */
  push32((uint32_t)(EDI));
  /* 10ac6ff5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ac6ffb je 0x10ac700c */
  if (C.zf) goto L_10ac700c;
L_10ac6ffd:;
  /* 10ac6ffd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10ac6fff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ac7000 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ac7002 je 0x10ac703f */
  if (C.zf) goto L_10ac703f;
  /* 10ac7004 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ac700a jne 0x10ac6ffd */
  if (!C.zf) goto L_10ac6ffd;
L_10ac700c:;
  /* 10ac700c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ac700e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10ac7013 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7015 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7018 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac701a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac701d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10ac7022 je 0x10ac700c */
  if (C.zf) goto L_10ac700c;
  /* 10ac7024 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ac7027 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ac7029 je 0x10ac704e */
  if (C.zf) goto L_10ac704e;
  /* 10ac702b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10ac702d je 0x10ac7049 */
  if (C.zf) goto L_10ac7049;
  /* 10ac702f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10ac7034 je 0x10ac7044 */
  if (C.zf) goto L_10ac7044;
  /* 10ac7036 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10ac703b je 0x10ac703f */
  if (C.zf) goto L_10ac703f;
  /* 10ac703d jmp 0x10ac700c */
  goto L_10ac700c;
L_10ac703f:;
  /* 10ac703f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10ac7042 jmp 0x10ac7051 */
  goto L_10ac7051;
L_10ac7044:;
  /* 10ac7044 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10ac7047 jmp 0x10ac7051 */
  goto L_10ac7051;
L_10ac7049:;
  /* 10ac7049 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10ac704c jmp 0x10ac7051 */
  goto L_10ac7051;
L_10ac704e:;
  /* 10ac704e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10ac7051:;
  /* 10ac7051 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ac7055 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ac705b je 0x10ac7076 */
  if (C.zf) goto L_10ac7076;
L_10ac705d:;
  /* 10ac705d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ac705f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ac7060 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ac7062 je 0x10ac70c8 */
  if (C.zf) goto L_10ac70c8;
  /* 10ac7064 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10ac7066 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ac7067 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10ac706d jne 0x10ac705d */
  if (!C.zf) goto L_10ac705d;
  /* 10ac706f jmp 0x10ac7076 */
  goto L_10ac7076;
L_10ac7071:;
  /* 10ac7071 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ac7073 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ac7076:;
  /* 10ac7076 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10ac707b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ac707d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac707f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7082 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7084 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac7086 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7089 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10ac708e je 0x10ac7071 */
  if (C.zf) goto L_10ac7071;
  /* 10ac7090 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ac7092 je 0x10ac70c8 */
  if (C.zf) goto L_10ac70c8;
  /* 10ac7094 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10ac7096 je 0x10ac70bf */
  if (C.zf) goto L_10ac70bf;
  /* 10ac7098 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10ac709e je 0x10ac70b2 */
  if (C.zf) goto L_10ac70b2;
  /* 10ac70a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10ac70a6 je 0x10ac70aa */
  if (C.zf) goto L_10ac70aa;
  /* 10ac70a8 jmp 0x10ac7071 */
  goto L_10ac7071;
L_10ac70aa:;
  /* 10ac70aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ac70ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ac70b0 pop edi */
  EDI = (pop32());
  /* 10ac70b1 ret  */
  ESPCHK(0x10ac6ff0u, _esp0);
  ESP += 4; return;
L_10ac70b2:;
  /* 10ac70b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10ac70b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ac70b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10ac70bd pop edi */
  EDI = (pop32());
  /* 10ac70be ret  */
  ESPCHK(0x10ac6ff0u, _esp0);
  ESP += 4; return;
L_10ac70bf:;
  /* 10ac70bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10ac70c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ac70c6 pop edi */
  EDI = (pop32());
  /* 10ac70c7 ret  */
  ESPCHK(0x10ac6ff0u, _esp0);
  ESP += 4; return;
L_10ac70c8:;
  /* 10ac70c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10ac70ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ac70ce pop edi */
  EDI = (pop32());
  /* 10ac70cf ret  */
  ESPCHK(0x10ac6ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x10ac70d0 (243 bytes, 91 insns) */
void f_10ac70d0(void) {
  FTRACE(0x10ac70d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac70d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac70d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac70d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac70d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac70d7 push esi */
  push32((uint32_t)(ESI));
  /* 10ac70d8 push edi */
  push32((uint32_t)(EDI));
  /* 10ac70d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10ac70dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ac70df:;
  /* 10ac70df cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac70e3 jne 0x10ac7103 */
  if (!C.zf) goto L_10ac7103;
  /* 10ac70e5 push 0x10aeafd0 */
  push32((uint32_t)(0x10aeafd0u));
  /* 10ac70ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac70ec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10ac70ee push 0x10aeafe0 */
  push32((uint32_t)(0x10aeafe0u));
  /* 10ac70f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac70f5 call 0x10ac30f0 */
  push32(0x10ac70fau); f_10ac30f0();
  /* 10ac70fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac70fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7100 jne 0x10ac7103 */
  if (!C.zf) goto L_10ac7103;
  /* 10ac7102 int3  */
  x86_unimpl("int3 @ 0x10ac7102");
L_10ac7103:;
  /* 10ac7103 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac7105 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac7107 jne 0x10ac70df */
  if (!C.zf) goto L_10ac70df;
L_10ac7109:;
  /* 10ac7109 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac710d jne 0x10ac712d */
  if (!C.zf) goto L_10ac712d;
  /* 10ac710f push 0x10aeafb4 */
  push32((uint32_t)(0x10aeafb4u));
  /* 10ac7114 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac7116 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10ac7118 push 0x10aeafe0 */
  push32((uint32_t)(0x10aeafe0u));
  /* 10ac711d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac711f call 0x10ac30f0 */
  push32(0x10ac7124u); f_10ac30f0();
  /* 10ac7124 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7127 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac712a jne 0x10ac712d */
  if (!C.zf) goto L_10ac712d;
  /* 10ac712c int3  */
  x86_unimpl("int3 @ 0x10ac712c");
L_10ac712d:;
  /* 10ac712d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac712f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac7131 jne 0x10ac7109 */
  if (!C.zf) goto L_10ac7109;
  /* 10ac7133 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac7136 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10ac713d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac7140 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7143 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ac7146 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac7149 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac714c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ac714e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac7151 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7154 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10ac7157 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ac715a push ecx */
  push32((uint32_t)(ECX));
  /* 10ac715b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac715e push edx */
  push32((uint32_t)(EDX));
  /* 10ac715f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac7162 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7163 call 0x10acafc0 */
  push32(0x10ac7168u); f_10acafc0();
  /* 10ac7168 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac716b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ac716e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac7171 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac7174 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac7177 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac717a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ac717d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac7180 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7184 jl 0x10ac71a8 */
  if ((C.sf!=C.of)) goto L_10ac71a8;
  /* 10ac7186 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac7189 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac718b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ac718e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac7190 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac7196 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ac7199 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac719c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac719e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac71a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac71a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ac71a6 jmp 0x10ac71b9 */
  goto L_10ac71b9;
L_10ac71a8:;
  /* 10ac71a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac71ab push edx */
  push32((uint32_t)(EDX));
  /* 10ac71ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac71ae call 0x10acad40 */
  push32(0x10ac71b3u); f_10acad40();
  /* 10ac71b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac71b6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10ac71b9:;
  /* 10ac71b9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac71bc pop edi */
  EDI = (pop32());
  /* 10ac71bd pop esi */
  ESI = (pop32());
  /* 10ac71be pop ebx */
  EBX = (pop32());
  /* 10ac71bf mov esp, ebp */
  ESP = (EBP);
  /* 10ac71c1 pop ebp */
  EBP = (pop32());
  /* 10ac71c2 ret  */
  ESPCHK(0x10ac70d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x10ac71d0 (47 bytes, 17 insns) */
void f_10ac71d0(void) {
  FTRACE(0x10ac71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac71d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac71d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac71d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10ac71da jb 0x10ac71f0 */
  if (C.cf) goto L_10ac71f0;
L_10ac71dc:;
  /* 10ac71dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac71e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac71e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10ac71e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac71ee jae 0x10ac71dc */
  if (!C.cf) goto L_10ac71dc;
L_10ac71f0:;
  /* 10ac71f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac71f2 mov eax, esp */
  EAX = (ESP);
  /* 10ac71f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10ac71f6 mov esp, ecx */
  ESP = (ECX);
  /* 10ac71f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac71fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac71fd push eax */
  push32((uint32_t)(EAX));
  /* 10ac71fe ret  */
  ESPCHK(0x10ac71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007200 @ 0x10ac7200 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10ac7200(void) {
  FTRACE(0x10ac7200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7200 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7201 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7203 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac7206 push esi */
  push32((uint32_t)(ESI));
  /* 10ac7207 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac720b je 0x10ac7213 */
  if (C.zf) goto L_10ac7213;
  /* 10ac720d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7211 jne 0x10ac7218 */
  if (!C.zf) goto L_10ac7218;
L_10ac7213:;
  /* 10ac7213 jmp 0x10ac73e8 */
  goto L_10ac73e8;
L_10ac7218:;
  /* 10ac7218 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac721c je 0x10ac7234 */
  if (C.zf) goto L_10ac7234;
  /* 10ac721e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7222 je 0x10ac7234 */
  if (C.zf) goto L_10ac7234;
  /* 10ac7224 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7228 je 0x10ac7234 */
  if (C.zf) goto L_10ac7234;
  /* 10ac722a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac722e jne 0x10ac7311 */
  if (!C.zf) goto L_10ac7311;
L_10ac7234:;
  /* 10ac7234 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac7236 call 0x10ac7a30 */
  push32(0x10ac723bu); f_10ac7a30();
  /* 10ac723b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac723e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7242 je 0x10ac724a */
  if (C.zf) goto L_10ac724a;
  /* 10ac7244 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7248 jne 0x10ac728f */
  if (!C.zf) goto L_10ac728f;
L_10ac724a:;
  /* 10ac724a cmp dword ptr [0x10aef74c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef74c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7251 jne 0x10ac728f */
  if (!C.zf) goto L_10ac728f;
  /* 10ac7253 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac7255 push 0x10ac7430 */
  push32((uint32_t)(0x10ac7430u));
  /* 10ac725a call dword ptr [0x10af2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2380))), 0x10ac7260u);
  /* 10ac7260 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7263 jne 0x10ac7271 */
  if (!C.zf) goto L_10ac7271;
  /* 10ac7265 mov dword ptr [0x10aef74c], 1 */
  w32((uint32_t)(0x10aef74c), (0x1u));
  /* 10ac726f jmp 0x10ac728f */
  goto L_10ac728f;
L_10ac7271:;
  /* 10ac7271 call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10ac7277u);
  /* 10ac7277 mov esi, eax */
  ESI = (EAX);
  /* 10ac7279 call 0x10acbf10 */
  push32(0x10ac727eu); f_10acbf10();
  /* 10ac727e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10ac7280 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac7282 call 0x10ac7ad0 */
  push32(0x10ac7287u); f_10ac7ad0();
  /* 10ac7287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac728a jmp 0x10ac73e8 */
  goto L_10ac73e8;
L_10ac728f:;
  /* 10ac728f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7292 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ac7295 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7298 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac729b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ac729e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac72a2 ja 0x10ac7302 */
  if ((!C.cf&&!C.zf)) goto L_10ac7302;
  /* 10ac72a4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac72a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac72a9 mov dl, byte ptr [eax + 0x10ac740f] */
  DL = (r8((uint32_t)(EAX + 0x10ac740f)));
  /* 10ac72af jmp dword ptr [edx*4 + 0x10ac73fb] */
  switch (EDX) {
    case 0: goto L_10ac72b6;
    case 1: goto L_10ac72f0;
    case 2: goto L_10ac72ca;
    case 3: goto L_10ac72dd;
    case 4: goto L_10ac7302;
    default: x86_unimpl("switch@0x10ac72af out of table"); return;
  }
L_10ac72b6:;
  /* 10ac72b6 mov ecx, dword ptr [0x10aef73c] */
  ECX = (r32((uint32_t)(0x10aef73c)));
  /* 10ac72bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ac72bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac72c2 mov dword ptr [0x10aef73c], edx */
  w32((uint32_t)(0x10aef73c), (EDX));
  /* 10ac72c8 jmp 0x10ac7302 */
  goto L_10ac7302;
L_10ac72ca:;
  /* 10ac72ca mov eax, dword ptr [0x10aef740] */
  EAX = (r32((uint32_t)(0x10aef740)));
  /* 10ac72cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac72d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac72d5 mov dword ptr [0x10aef740], ecx */
  w32((uint32_t)(0x10aef740), (ECX));
  /* 10ac72db jmp 0x10ac7302 */
  goto L_10ac7302;
L_10ac72dd:;
  /* 10ac72dd mov edx, dword ptr [0x10aef744] */
  EDX = (r32((uint32_t)(0x10aef744)));
  /* 10ac72e3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ac72e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac72e9 mov dword ptr [0x10aef744], eax */
  w32((uint32_t)(0x10aef744), (EAX));
  /* 10ac72ee jmp 0x10ac7302 */
  goto L_10ac7302;
L_10ac72f0:;
  /* 10ac72f0 mov ecx, dword ptr [0x10aef748] */
  ECX = (r32((uint32_t)(0x10aef748)));
  /* 10ac72f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ac72f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac72fc mov dword ptr [0x10aef748], edx */
  w32((uint32_t)(0x10aef748), (EDX));
L_10ac7302:;
  /* 10ac7302 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac7304 call 0x10ac7ad0 */
  push32(0x10ac7309u); f_10ac7ad0();
  /* 10ac7309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac730c jmp 0x10ac73e3 */
  goto L_10ac73e3;
L_10ac7311:;
  /* 10ac7311 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7315 je 0x10ac7328 */
  if (C.zf) goto L_10ac7328;
  /* 10ac7317 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac731b je 0x10ac7328 */
  if (C.zf) goto L_10ac7328;
  /* 10ac731d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7321 je 0x10ac7328 */
  if (C.zf) goto L_10ac7328;
  /* 10ac7323 jmp 0x10ac73e8 */
  goto L_10ac73e8;
L_10ac7328:;
  /* 10ac7328 call 0x10ac3a70 */
  push32(0x10ac732du); f_10ac3a70();
  /* 10ac732d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac7330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7333 cmp dword ptr [eax + 0x50], 0x10aedc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10aedc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac733a jne 0x10ac7385 */
  if (!C.zf) goto L_10ac7385;
  /* 10ac733c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10ac7341 push 0x10aeafec */
  push32((uint32_t)(0x10aeafecu));
  /* 10ac7346 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac7348 mov ecx, dword ptr [0x10aedc80] */
  ECX = (r32((uint32_t)(0x10aedc80)));
  /* 10ac734e push ecx */
  push32((uint32_t)(ECX));
  /* 10ac734f call 0x10ac4030 */
  push32(0x10ac7354u); f_10ac4030();
  /* 10ac7354 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7357 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac735a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10ac735d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7360 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7364 je 0x10ac7383 */
  if (C.zf) goto L_10ac7383;
  /* 10ac7366 mov ecx, dword ptr [0x10aedc80] */
  ECX = (r32((uint32_t)(0x10aedc80)));
  /* 10ac736c push ecx */
  push32((uint32_t)(ECX));
  /* 10ac736d push 0x10aedc00 */
  push32((uint32_t)(0x10aedc00u));
  /* 10ac7372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7375 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10ac7378 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7379 call 0x10aca910 */
  push32(0x10ac737eu); f_10aca910();
  /* 10ac737e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7381 jmp 0x10ac7385 */
  goto L_10ac7385;
L_10ac7383:;
  /* 10ac7383 jmp 0x10ac73e8 */
  goto L_10ac73e8;
L_10ac7385:;
  /* 10ac7385 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7388 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10ac738b push edx */
  push32((uint32_t)(EDX));
  /* 10ac738c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac738f push eax */
  push32((uint32_t)(EAX));
  /* 10ac7390 call 0x10ac7710 */
  push32(0x10ac7395u); f_10ac7710();
  /* 10ac7395 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7398 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac739b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac739f jne 0x10ac73a3 */
  if (!C.zf) goto L_10ac73a3;
  /* 10ac73a1 jmp 0x10ac73e8 */
  goto L_10ac73e8;
L_10ac73a3:;
  /* 10ac73a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac73a6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac73a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ac73ac:;
  /* 10ac73ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac73af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac73b2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac73b5 jne 0x10ac73e3 */
  if (!C.zf) goto L_10ac73e3;
  /* 10ac73b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac73ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac73bd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ac73c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac73c3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac73c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ac73c9 mov edx, dword ptr [0x10aedc84] */
  EDX = (r32((uint32_t)(0x10aedc84)));
  /* 10ac73cf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac73d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac73d5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10ac73d8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac73da cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac73dd jb 0x10ac73e1 */
  if (C.cf) goto L_10ac73e1;
  /* 10ac73df jmp 0x10ac73e3 */
  goto L_10ac73e3;
L_10ac73e1:;
  /* 10ac73e1 jmp 0x10ac73ac */
  goto L_10ac73ac;
L_10ac73e3:;
  /* 10ac73e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac73e6 jmp 0x10ac73f6 */
  goto L_10ac73f6;
L_10ac73e8:;
  /* 10ac73e8 call 0x10acbf00 */
  push32(0x10ac73edu); f_10acbf00();
  /* 10ac73ed mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10ac73f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ac73f6:;
  /* 10ac73f6 pop esi */
  ESI = (pop32());
  /* 10ac73f7 mov esp, ebp */
  ESP = (EBP);
  /* 10ac73f9 pop ebp */
  EBP = (pop32());
  /* 10ac73fa ret  */
  ESPCHK(0x10ac7200u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x10ac7430 (146 bytes, 45 insns) */
void f_10ac7430(void) {
  FTRACE(0x10ac7430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7430 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7431 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac7436 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac7438 call 0x10ac7a30 */
  push32(0x10ac743du); f_10ac7a30();
  /* 10ac743d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7440 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7444 jne 0x10ac745e */
  if (!C.zf) goto L_10ac745e;
  /* 10ac7446 mov dword ptr [ebp - 8], 0x10aef73c */
  w32((uint32_t)(EBP + -0x8), (0x10aef73cu));
  /* 10ac744d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7450 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac7452 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ac7455 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ac745c jmp 0x10ac7474 */
  goto L_10ac7474;
L_10ac745e:;
  /* 10ac745e mov dword ptr [ebp - 8], 0x10aef740 */
  w32((uint32_t)(EBP + -0x8), (0x10aef740u));
  /* 10ac7465 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7468 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac746a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac746d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10ac7474:;
  /* 10ac7474 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7478 jne 0x10ac7488 */
  if (!C.zf) goto L_10ac7488;
  /* 10ac747a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac747c call 0x10ac7ad0 */
  push32(0x10ac7481u); f_10ac7ad0();
  /* 10ac7481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7486 jmp 0x10ac74bc */
  goto L_10ac74bc;
L_10ac7488:;
  /* 10ac7488 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac748c je 0x10ac74ad */
  if (C.zf) goto L_10ac74ad;
  /* 10ac748e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7491 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10ac7497 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac7499 call 0x10ac7ad0 */
  push32(0x10ac749eu); f_10ac7ad0();
  /* 10ac749e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac74a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac74a4 push edx */
  push32((uint32_t)(EDX));
  /* 10ac74a5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10ac74a8u);
  /* 10ac74a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac74ab jmp 0x10ac74b7 */
  goto L_10ac74b7;
L_10ac74ad:;
  /* 10ac74ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac74af call 0x10ac7ad0 */
  push32(0x10ac74b4u); f_10ac7ad0();
  /* 10ac74b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac74b7:;
  /* 10ac74b7 mov eax, 1 */
  EAX = (0x1u);
L_10ac74bc:;
  /* 10ac74bc mov esp, ebp */
  ESP = (EBP);
  /* 10ac74be pop ebp */
  EBP = (pop32());
  /* 10ac74bf ret 4 */
  ESPCHK(0x10ac7430u, _esp0);
  ESP += 8; return;
}

/* FUN_100074d0 @ 0x10ac74d0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10ac74d0(void) {
  FTRACE(0x10ac74d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac74d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac74d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac74d3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac74d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ac74dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac74e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ac74e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac74e6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac74e9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ac74ec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac74f0 ja 0x10ac759e */
  if ((!C.cf&&!C.zf)) goto L_10ac759e;
  /* 10ac74f6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac74f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac74fb mov dl, byte ptr [eax + 0x10ac76f2] */
  DL = (r8((uint32_t)(EAX + 0x10ac76f2)));
  /* 10ac7501 jmp dword ptr [edx*4 + 0x10ac76da] */
  switch (EDX) {
    case 0: goto L_10ac7508;
    case 1: goto L_10ac7573;
    case 2: goto L_10ac7559;
    case 3: goto L_10ac7525;
    case 4: goto L_10ac753f;
    case 5: goto L_10ac759e;
    default: x86_unimpl("switch@0x10ac7501 out of table"); return;
  }
L_10ac7508:;
  /* 10ac7508 mov dword ptr [ebp - 0x18], 0x10aef73c */
  w32((uint32_t)(EBP + -0x18), (0x10aef73cu));
  /* 10ac750f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac7512 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac7514 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ac7517 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac751a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac751d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac7520 jmp 0x10ac75a6 */
  goto L_10ac75a6;
L_10ac7525:;
  /* 10ac7525 mov dword ptr [ebp - 0x18], 0x10aef740 */
  w32((uint32_t)(EBP + -0x18), (0x10aef740u));
  /* 10ac752c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac752f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac7531 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ac7534 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac7537 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac753a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac753d jmp 0x10ac75a6 */
  goto L_10ac75a6;
L_10ac753f:;
  /* 10ac753f mov dword ptr [ebp - 0x18], 0x10aef744 */
  w32((uint32_t)(EBP + -0x18), (0x10aef744u));
  /* 10ac7546 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac7549 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac754b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ac754e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac7551 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7554 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac7557 jmp 0x10ac75a6 */
  goto L_10ac75a6;
L_10ac7559:;
  /* 10ac7559 mov dword ptr [ebp - 0x18], 0x10aef748 */
  w32((uint32_t)(EBP + -0x18), (0x10aef748u));
  /* 10ac7560 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac7563 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac7565 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ac7568 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac756b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac756e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac7571 jmp 0x10ac75a6 */
  goto L_10ac75a6;
L_10ac7573:;
  /* 10ac7573 call 0x10ac3a70 */
  push32(0x10ac7578u); f_10ac3a70();
  /* 10ac7578 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac757b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac757e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10ac7581 push edx */
  push32((uint32_t)(EDX));
  /* 10ac7582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7585 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7586 call 0x10ac7710 */
  push32(0x10ac758bu); f_10ac7710();
  /* 10ac758b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac758e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7591 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac7594 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac7597 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac7599 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ac759c jmp 0x10ac75a6 */
  goto L_10ac75a6;
L_10ac759e:;
  /* 10ac759e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac75a1 jmp 0x10ac76d6 */
  goto L_10ac76d6;
L_10ac75a6:;
  /* 10ac75a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac75aa je 0x10ac75b6 */
  if (C.zf) goto L_10ac75b6;
  /* 10ac75ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac75ae call 0x10ac7a30 */
  push32(0x10ac75b3u); f_10ac7a30();
  /* 10ac75b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac75b6:;
  /* 10ac75b6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac75ba jne 0x10ac75d3 */
  if (!C.zf) goto L_10ac75d3;
  /* 10ac75bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac75c0 je 0x10ac75cc */
  if (C.zf) goto L_10ac75cc;
  /* 10ac75c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac75c4 call 0x10ac7ad0 */
  push32(0x10ac75c9u); f_10ac7ad0();
  /* 10ac75c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac75cc:;
  /* 10ac75cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac75ce jmp 0x10ac76d6 */
  goto L_10ac76d6;
L_10ac75d3:;
  /* 10ac75d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac75d7 jne 0x10ac75f0 */
  if (!C.zf) goto L_10ac75f0;
  /* 10ac75d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac75dd je 0x10ac75e9 */
  if (C.zf) goto L_10ac75e9;
  /* 10ac75df push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac75e1 call 0x10ac7ad0 */
  push32(0x10ac75e6u); f_10ac7ad0();
  /* 10ac75e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac75e9:;
  /* 10ac75e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ac75eb call 0x10ac37f0 */
  push32(0x10ac75f0u); f_10ac37f0();
L_10ac75f0:;
  /* 10ac75f0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac75f4 je 0x10ac7602 */
  if (C.zf) goto L_10ac7602;
  /* 10ac75f6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac75fa je 0x10ac7602 */
  if (C.zf) goto L_10ac7602;
  /* 10ac75fc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7600 jne 0x10ac762e */
  if (!C.zf) goto L_10ac762e;
L_10ac7602:;
  /* 10ac7602 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7605 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10ac7608 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ac760b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac760e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10ac7615 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7619 jne 0x10ac762e */
  if (!C.zf) goto L_10ac762e;
  /* 10ac761b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac761e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10ac7621 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ac7624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7627 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10ac762e:;
  /* 10ac762e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7632 jne 0x10ac7670 */
  if (!C.zf) goto L_10ac7670;
  /* 10ac7634 mov eax, dword ptr [0x10aedc78] */
  EAX = (r32((uint32_t)(0x10aedc78)));
  /* 10ac7639 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ac763c jmp 0x10ac7647 */
  goto L_10ac7647;
L_10ac763e:;
  /* 10ac763e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7641 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7644 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ac7647:;
  /* 10ac7647 mov edx, dword ptr [0x10aedc78] */
  EDX = (r32((uint32_t)(0x10aedc78)));
  /* 10ac764d add edx, dword ptr [0x10aedc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aedc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7653 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7656 jge 0x10ac766e */
  if ((C.sf==C.of)) goto L_10ac766e;
  /* 10ac7658 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac765b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac765e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7661 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10ac7664 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10ac766c jmp 0x10ac763e */
  goto L_10ac763e;
L_10ac766e:;
  /* 10ac766e jmp 0x10ac7679 */
  goto L_10ac7679;
L_10ac7670:;
  /* 10ac7670 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac7673 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ac7679:;
  /* 10ac7679 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac767d je 0x10ac7689 */
  if (C.zf) goto L_10ac7689;
  /* 10ac767f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ac7681 call 0x10ac7ad0 */
  push32(0x10ac7686u); f_10ac7ad0();
  /* 10ac7686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac7689:;
  /* 10ac7689 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac768d jne 0x10ac76a0 */
  if (!C.zf) goto L_10ac76a0;
  /* 10ac768f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7692 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10ac7695 push edx */
  push32((uint32_t)(EDX));
  /* 10ac7696 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ac7698 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10ac769bu);
  /* 10ac769b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac769e jmp 0x10ac76aa */
  goto L_10ac76aa;
L_10ac76a0:;
  /* 10ac76a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac76a3 push eax */
  push32((uint32_t)(EAX));
  /* 10ac76a4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10ac76a7u);
  /* 10ac76a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac76aa:;
  /* 10ac76aa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac76ae je 0x10ac76bc */
  if (C.zf) goto L_10ac76bc;
  /* 10ac76b0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac76b4 je 0x10ac76bc */
  if (C.zf) goto L_10ac76bc;
  /* 10ac76b6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac76ba jne 0x10ac76d4 */
  if (!C.zf) goto L_10ac76d4;
L_10ac76bc:;
  /* 10ac76bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac76bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac76c2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10ac76c5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac76c9 jne 0x10ac76d4 */
  if (!C.zf) goto L_10ac76d4;
  /* 10ac76cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac76ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac76d1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10ac76d4:;
  /* 10ac76d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac76d6:;
  /* 10ac76d6 mov esp, ebp */
  ESP = (EBP);
  /* 10ac76d8 pop ebp */
  EBP = (pop32());
  /* 10ac76d9 ret  */
  ESPCHK(0x10ac74d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x10ac7710 (91 bytes, 35 insns) */
void f_10ac7710(void) {
  FTRACE(0x10ac7710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7710 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7711 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7713 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7714 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7717 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac771a:;
  /* 10ac771a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac771d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac7720 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7723 je 0x10ac7743 */
  if (C.zf) goto L_10ac7743;
  /* 10ac7725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7728 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac772b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac772e mov ecx, dword ptr [0x10aedc84] */
  ECX = (r32((uint32_t)(0x10aedc84)));
  /* 10ac7734 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac7737 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac773a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac773c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac773f jae 0x10ac7743 */
  if (!C.cf) goto L_10ac7743;
  /* 10ac7741 jmp 0x10ac771a */
  goto L_10ac771a;
L_10ac7743:;
  /* 10ac7743 mov eax, dword ptr [0x10aedc84] */
  EAX = (r32((uint32_t)(0x10aedc84)));
  /* 10ac7748 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac774b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac774e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7750 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7753 jae 0x10ac7765 */
  if (!C.cf) goto L_10ac7765;
  /* 10ac7755 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7758 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac775b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac775e jne 0x10ac7765 */
  if (!C.zf) goto L_10ac7765;
  /* 10ac7760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7763 jmp 0x10ac7767 */
  goto L_10ac7767;
L_10ac7765:;
  /* 10ac7765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac7767:;
  /* 10ac7767 mov esp, ebp */
  ESP = (EBP);
  /* 10ac7769 pop ebp */
  EBP = (pop32());
  /* 10ac776a ret  */
  ESPCHK(0x10ac7710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007770 @ 0x10ac7770 (13 bytes, 6 insns) */
void f_10ac7770(void) {
  FTRACE(0x10ac7770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7770 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7771 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7773 call 0x10ac3a70 */
  push32(0x10ac7778u); f_10ac3a70();
  /* 10ac7778 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac777b pop ebp */
  EBP = (pop32());
  /* 10ac777c ret  */
  ESPCHK(0x10ac7770u, _esp0);
  ESP += 4; return;
}

/* FUN_10007780 @ 0x10ac7780 (13 bytes, 6 insns) */
void f_10ac7780(void) {
  FTRACE(0x10ac7780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7780 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7781 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7783 call 0x10ac3a70 */
  push32(0x10ac7788u); f_10ac3a70();
  /* 10ac7788 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac778b pop ebp */
  EBP = (pop32());
  /* 10ac778c ret  */
  ESPCHK(0x10ac7780u, _esp0);
  ESP += 4; return;
}

/* FUN_10007790 @ 0x10ac7790 (187 bytes, 54 insns) */
void f_10ac7790(void) {
  FTRACE(0x10ac7790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7790 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7791 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac7796 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ac779d cmp dword ptr [0x10aef750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac77a4 jne 0x10ac7803 */
  if (!C.zf) goto L_10ac7803;
  /* 10ac77a6 push 0x10aea418 */
  push32((uint32_t)(0x10aea418u));
  /* 10ac77ab call dword ptr [0x10af2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2308))), 0x10ac77b1u);
  /* 10ac77b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac77b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac77b8 je 0x10ac77d7 */
  if (C.zf) goto L_10ac77d7;
  /* 10ac77ba push 0x10aeb01c */
  push32((uint32_t)(0x10aeb01cu));
  /* 10ac77bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac77c2 push eax */
  push32((uint32_t)(EAX));
  /* 10ac77c3 call dword ptr [0x10af2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2304))), 0x10ac77c9u);
  /* 10ac77c9 mov dword ptr [0x10aef750], eax */
  w32((uint32_t)(0x10aef750), (EAX));
  /* 10ac77ce cmp dword ptr [0x10aef750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac77d5 jne 0x10ac77db */
  if (!C.zf) goto L_10ac77db;
L_10ac77d7:;
  /* 10ac77d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac77d9 jmp 0x10ac7847 */
  goto L_10ac7847;
L_10ac77db:;
  /* 10ac77db push 0x10aeb00c */
  push32((uint32_t)(0x10aeb00cu));
  /* 10ac77e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac77e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac77e4 call dword ptr [0x10af2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2304))), 0x10ac77eau);
  /* 10ac77ea mov dword ptr [0x10aef754], eax */
  w32((uint32_t)(0x10aef754), (EAX));
  /* 10ac77ef push 0x10aeaff8 */
  push32((uint32_t)(0x10aeaff8u));
  /* 10ac77f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac77f7 push edx */
  push32((uint32_t)(EDX));
  /* 10ac77f8 call dword ptr [0x10af2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2304))), 0x10ac77feu);
  /* 10ac77fe mov dword ptr [0x10aef758], eax */
  w32((uint32_t)(0x10aef758), (EAX));
L_10ac7803:;
  /* 10ac7803 cmp dword ptr [0x10aef754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac780a je 0x10ac7815 */
  if (C.zf) goto L_10ac7815;
  /* 10ac780c call dword ptr [0x10aef754] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef754))), 0x10ac7812u);
  /* 10ac7812 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac7815:;
  /* 10ac7815 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7819 je 0x10ac7831 */
  if (C.zf) goto L_10ac7831;
  /* 10ac781b cmp dword ptr [0x10aef758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7822 je 0x10ac7831 */
  if (C.zf) goto L_10ac7831;
  /* 10ac7824 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7827 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7828 call dword ptr [0x10aef758] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef758))), 0x10ac782eu);
  /* 10ac782e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac7831:;
  /* 10ac7831 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac7834 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7835 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7838 push edx */
  push32((uint32_t)(EDX));
  /* 10ac7839 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac783c push eax */
  push32((uint32_t)(EAX));
  /* 10ac783d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7840 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7841 call dword ptr [0x10aef750] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef750))), 0x10ac7847u);
L_10ac7847:;
  /* 10ac7847 mov esp, ebp */
  ESP = (EBP);
  /* 10ac7849 pop ebp */
  EBP = (pop32());
  /* 10ac784a ret  */
  ESPCHK(0x10ac7790u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10ac7850 (254 bytes, 109 insns) */
void f_10ac7850(void) {
  FTRACE(0x10ac7850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7850 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ac7854 push edi */
  push32((uint32_t)(EDI));
  /* 10ac7855 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac7857 je 0x10ac78d3 */
  if (C.zf) goto L_10ac78d3;
  /* 10ac7859 push esi */
  push32((uint32_t)(ESI));
  /* 10ac785a push ebx */
  push32((uint32_t)(EBX));
  /* 10ac785b mov ebx, ecx */
  EBX = (ECX);
  /* 10ac785d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10ac7861 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10ac7867 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10ac786b jne 0x10ac7874 */
  if (!C.zf) goto L_10ac7874;
  /* 10ac786d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ac7870 jne 0x10ac78e1 */
  if (!C.zf) goto L_10ac78e1;
  /* 10ac7872 jmp 0x10ac7895 */
  goto L_10ac7895;
L_10ac7874:;
  /* 10ac7874 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ac7876 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ac7877 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ac7879 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ac787a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ac787b je 0x10ac78a2 */
  if (C.zf) goto L_10ac78a2;
  /* 10ac787d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ac787f je 0x10ac78aa */
  if (C.zf) goto L_10ac78aa;
  /* 10ac7881 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10ac7887 jne 0x10ac7874 */
  if (!C.zf) goto L_10ac7874;
  /* 10ac7889 mov ebx, ecx */
  EBX = (ECX);
  /* 10ac788b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ac788e jne 0x10ac78e1 */
  if (!C.zf) goto L_10ac78e1;
L_10ac7890:;
  /* 10ac7890 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10ac7893 je 0x10ac78a2 */
  if (C.zf) goto L_10ac78a2;
L_10ac7895:;
  /* 10ac7895 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ac7897 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ac7898 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ac789a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ac789b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10ac789d je 0x10ac78ce */
  if (C.zf) goto L_10ac78ce;
  /* 10ac789f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10ac78a0 jne 0x10ac7895 */
  if (!C.zf) goto L_10ac7895;
L_10ac78a2:;
  /* 10ac78a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ac78a6 pop ebx */
  EBX = (pop32());
  /* 10ac78a7 pop esi */
  ESI = (pop32());
  /* 10ac78a8 pop edi */
  EDI = (pop32());
  /* 10ac78a9 ret  */
  ESPCHK(0x10ac7850u, _esp0);
  ESP += 4; return;
L_10ac78aa:;
  /* 10ac78aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ac78b0 je 0x10ac78c4 */
  if (C.zf) goto L_10ac78c4;
L_10ac78b2:;
  /* 10ac78b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ac78b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ac78b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ac78b6 je 0x10ac7946 */
  if (C.zf) goto L_10ac7946;
  /* 10ac78bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ac78c2 jne 0x10ac78b2 */
  if (!C.zf) goto L_10ac78b2;
L_10ac78c4:;
  /* 10ac78c4 mov ebx, ecx */
  EBX = (ECX);
  /* 10ac78c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ac78c9 jne 0x10ac7937 */
  if (!C.zf) goto L_10ac7937;
L_10ac78cb:;
  /* 10ac78cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ac78cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10ac78ce:;
  /* 10ac78ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10ac78cf jne 0x10ac78cb */
  if (!C.zf) goto L_10ac78cb;
  /* 10ac78d1 pop ebx */
  EBX = (pop32());
  /* 10ac78d2 pop esi */
  ESI = (pop32());
L_10ac78d3:;
  /* 10ac78d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ac78d7 pop edi */
  EDI = (pop32());
  /* 10ac78d8 ret  */
  ESPCHK(0x10ac7850u, _esp0);
  ESP += 4; return;
L_10ac78d9:;
  /* 10ac78d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ac78db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac78de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ac78df je 0x10ac7890 */
  if (C.zf) goto L_10ac7890;
L_10ac78e1:;
  /* 10ac78e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10ac78e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10ac78e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac78ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac78ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac78ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10ac78f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac78f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10ac78f9 je 0x10ac78d9 */
  if (C.zf) goto L_10ac78d9;
  /* 10ac78fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10ac78fd je 0x10ac792b */
  if (C.zf) goto L_10ac792b;
  /* 10ac78ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10ac7901 je 0x10ac7921 */
  if (C.zf) goto L_10ac7921;
  /* 10ac7903 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10ac7909 je 0x10ac7917 */
  if (C.zf) goto L_10ac7917;
  /* 10ac790b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10ac7911 jne 0x10ac78d9 */
  if (!C.zf) goto L_10ac78d9;
  /* 10ac7913 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ac7915 jmp 0x10ac792f */
  goto L_10ac792f;
L_10ac7917:;
  /* 10ac7917 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac791d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ac791f jmp 0x10ac792f */
  goto L_10ac792f;
L_10ac7921:;
  /* 10ac7921 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac7927 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10ac7929 jmp 0x10ac792f */
  goto L_10ac792f;
L_10ac792b:;
  /* 10ac792b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac792d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10ac792f:;
  /* 10ac792f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7932 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7934 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ac7935 je 0x10ac7941 */
  if (C.zf) goto L_10ac7941;
L_10ac7937:;
  /* 10ac7937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac7939:;
  /* 10ac7939 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10ac793b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac793e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ac793f jne 0x10ac7939 */
  if (!C.zf) goto L_10ac7939;
L_10ac7941:;
  /* 10ac7941 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10ac7944 jne 0x10ac78cb */
  if (!C.zf) goto L_10ac78cb;
L_10ac7946:;
  /* 10ac7946 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ac794a pop ebx */
  EBX = (pop32());
  /* 10ac794b pop esi */
  ESI = (pop32());
  /* 10ac794c pop edi */
  EDI = (pop32());
  /* 10ac794d ret  */
  ESPCHK(0x10ac7850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x10ac7950 (55 bytes, 16 insns) */
void f_10ac7950(void) {
  FTRACE(0x10ac7950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7950 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7951 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7953 mov eax, dword ptr [0x10aedb84] */
  EAX = (r32((uint32_t)(0x10aedb84)));
  /* 10ac7958 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7959 call dword ptr [0x10af2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2384))), 0x10ac795fu);
  /* 10ac795f mov ecx, dword ptr [0x10aedb74] */
  ECX = (r32((uint32_t)(0x10aedb74)));
  /* 10ac7965 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7966 call dword ptr [0x10af2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2384))), 0x10ac796cu);
  /* 10ac796c mov edx, dword ptr [0x10aedb64] */
  EDX = (r32((uint32_t)(0x10aedb64)));
  /* 10ac7972 push edx */
  push32((uint32_t)(EDX));
  /* 10ac7973 call dword ptr [0x10af2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2384))), 0x10ac7979u);
  /* 10ac7979 mov eax, dword ptr [0x10aedb44] */
  EAX = (r32((uint32_t)(0x10aedb44)));
  /* 10ac797e push eax */
  push32((uint32_t)(EAX));
  /* 10ac797f call dword ptr [0x10af2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2384))), 0x10ac7985u);
  /* 10ac7985 pop ebp */
  EBP = (pop32());
  /* 10ac7986 ret  */
  ESPCHK(0x10ac7950u, _esp0);
  ESP += 4; return;
}

/* FUN_10007990 @ 0x10ac7990 (159 bytes, 47 insns) */
void f_10ac7990(void) {
  FTRACE(0x10ac7990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7990 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7991 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7993 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7994 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ac799b jmp 0x10ac79a6 */
  goto L_10ac79a6;
L_10ac799d:;
  /* 10ac799d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac79a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac79a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac79a6:;
  /* 10ac79a6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac79aa jge 0x10ac79f9 */
  if ((C.sf==C.of)) goto L_10ac79f9;
  /* 10ac79ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac79af cmp dword ptr [ecx*4 + 0x10aedb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10aedb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac79b7 je 0x10ac79f7 */
  if (C.zf) goto L_10ac79f7;
  /* 10ac79b9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac79bd je 0x10ac79f7 */
  if (C.zf) goto L_10ac79f7;
  /* 10ac79bf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac79c3 je 0x10ac79f7 */
  if (C.zf) goto L_10ac79f7;
  /* 10ac79c5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac79c9 je 0x10ac79f7 */
  if (C.zf) goto L_10ac79f7;
  /* 10ac79cb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac79cf je 0x10ac79f7 */
  if (C.zf) goto L_10ac79f7;
  /* 10ac79d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac79d4 mov eax, dword ptr [edx*4 + 0x10aedb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aedb40)));
  /* 10ac79db push eax */
  push32((uint32_t)(EAX));
  /* 10ac79dc call dword ptr [0x10af234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af234c))), 0x10ac79e2u);
  /* 10ac79e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac79e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac79e7 mov edx, dword ptr [ecx*4 + 0x10aedb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10aedb40)));
  /* 10ac79ee push edx */
  push32((uint32_t)(EDX));
  /* 10ac79ef call 0x10ac4ac0 */
  push32(0x10ac79f4u); f_10ac4ac0();
  /* 10ac79f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac79f7:;
  /* 10ac79f7 jmp 0x10ac799d */
  goto L_10ac799d;
L_10ac79f9:;
  /* 10ac79f9 mov eax, dword ptr [0x10aedb64] */
  EAX = (r32((uint32_t)(0x10aedb64)));
  /* 10ac79fe push eax */
  push32((uint32_t)(EAX));
  /* 10ac79ff call dword ptr [0x10af234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af234c))), 0x10ac7a05u);
  /* 10ac7a05 mov ecx, dword ptr [0x10aedb74] */
  ECX = (r32((uint32_t)(0x10aedb74)));
  /* 10ac7a0b push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7a0c call dword ptr [0x10af234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af234c))), 0x10ac7a12u);
  /* 10ac7a12 mov edx, dword ptr [0x10aedb84] */
  EDX = (r32((uint32_t)(0x10aedb84)));
  /* 10ac7a18 push edx */
  push32((uint32_t)(EDX));
  /* 10ac7a19 call dword ptr [0x10af234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af234c))), 0x10ac7a1fu);
  /* 10ac7a1f mov eax, dword ptr [0x10aedb44] */
  EAX = (r32((uint32_t)(0x10aedb44)));
  /* 10ac7a24 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7a25 call dword ptr [0x10af234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af234c))), 0x10ac7a2bu);
  /* 10ac7a2b mov esp, ebp */
  ESP = (EBP);
  /* 10ac7a2d pop ebp */
  EBP = (pop32());
  /* 10ac7a2e ret  */
  ESPCHK(0x10ac7990u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a30 @ 0x10ac7a30 (151 bytes, 46 insns) */
void f_10ac7a30(void) {
  FTRACE(0x10ac7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7a31 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7a34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7a37 cmp dword ptr [eax*4 + 0x10aedb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10aedb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7a3f jne 0x10ac7ab2 */
  if (!C.zf) goto L_10ac7ab2;
  /* 10ac7a41 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10ac7a46 push 0x10aeb028 */
  push32((uint32_t)(0x10aeb028u));
  /* 10ac7a4b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac7a4d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10ac7a4f call 0x10ac4030 */
  push32(0x10ac7a54u); f_10ac4030();
  /* 10ac7a54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7a57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac7a5a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7a5e jne 0x10ac7a6a */
  if (!C.zf) goto L_10ac7a6a;
  /* 10ac7a60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ac7a62 call 0x10ac2fa0 */
  push32(0x10ac7a67u); f_10ac2fa0();
  /* 10ac7a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac7a6a:;
  /* 10ac7a6a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ac7a6c call 0x10ac7a30 */
  push32(0x10ac7a71u); f_10ac7a30();
  /* 10ac7a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7a74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7a77 cmp dword ptr [ecx*4 + 0x10aedb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10aedb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7a7f jne 0x10ac7a9a */
  if (!C.zf) goto L_10ac7a9a;
  /* 10ac7a81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7a84 push edx */
  push32((uint32_t)(EDX));
  /* 10ac7a85 call dword ptr [0x10af2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2384))), 0x10ac7a8bu);
  /* 10ac7a8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7a91 mov dword ptr [eax*4 + 0x10aedb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10aedb40), (ECX));
  /* 10ac7a98 jmp 0x10ac7aa8 */
  goto L_10ac7aa8;
L_10ac7a9a:;
  /* 10ac7a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac7a9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7a9f push edx */
  push32((uint32_t)(EDX));
  /* 10ac7aa0 call 0x10ac4ac0 */
  push32(0x10ac7aa5u); f_10ac4ac0();
  /* 10ac7aa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac7aa8:;
  /* 10ac7aa8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10ac7aaa call 0x10ac7ad0 */
  push32(0x10ac7aafu); f_10ac7ad0();
  /* 10ac7aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac7ab2:;
  /* 10ac7ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7ab5 mov ecx, dword ptr [eax*4 + 0x10aedb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aedb40)));
  /* 10ac7abc push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7abd call dword ptr [0x10af2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2388))), 0x10ac7ac3u);
  /* 10ac7ac3 mov esp, ebp */
  ESP = (EBP);
  /* 10ac7ac5 pop ebp */
  EBP = (pop32());
  /* 10ac7ac6 ret  */
  ESPCHK(0x10ac7a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad0 @ 0x10ac7ad0 (22 bytes, 8 insns) */
void f_10ac7ad0(void) {
  FTRACE(0x10ac7ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7ad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7ad6 mov ecx, dword ptr [eax*4 + 0x10aedb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10aedb40)));
  /* 10ac7add push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7ade call dword ptr [0x10af238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af238c))), 0x10ac7ae4u);
  /* 10ac7ae4 pop ebp */
  EBP = (pop32());
  /* 10ac7ae5 ret  */
  ESPCHK(0x10ac7ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x10ac7af0 (26 bytes, 10 insns) */
void f_10ac7af0(void) {
  FTRACE(0x10ac7af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7af1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7af3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7af6 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac7af9 call dword ptr [0x10af2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2390))), 0x10ac7affu);
  /* 10ac7aff push 0xff */
  push32((uint32_t)(0xffu));
  /* 10ac7b04 call dword ptr [0x10af2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2314))), 0x10ac7b0au);
  /* 10ac7b0a pop ebp */
  EBP = (pop32());
  /* 10ac7b0b ret  */
  ESPCHK(0x10ac7af0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10ac7b10 (446 bytes, 130 insns) */
void f_10ac7b10(void) {
  FTRACE(0x10ac7b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7b11 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7b13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac7b16 call 0x10ac3a70 */
  push32(0x10ac7b1bu); f_10ac3a70();
  /* 10ac7b1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac7b1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7b21 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10ac7b24 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7b25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7b28 push edx */
  push32((uint32_t)(EDX));
  /* 10ac7b29 call 0x10ac7cd0 */
  push32(0x10ac7b2eu); f_10ac7cd0();
  /* 10ac7b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7b31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ac7b34 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7b38 je 0x10ac7b43 */
  if (C.zf) goto L_10ac7b43;
  /* 10ac7b3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7b3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7b41 jne 0x10ac7b52 */
  if (!C.zf) goto L_10ac7b52;
L_10ac7b43:;
  /* 10ac7b43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7b46 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7b47 call dword ptr [0x10af233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af233c))), 0x10ac7b4du);
  /* 10ac7b4d jmp 0x10ac7cca */
  goto L_10ac7cca;
L_10ac7b52:;
  /* 10ac7b52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7b55 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7b59 jne 0x10ac7b6f */
  if (!C.zf) goto L_10ac7b6f;
  /* 10ac7b5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7b5e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10ac7b65 mov eax, 1 */
  EAX = (0x1u);
  /* 10ac7b6a jmp 0x10ac7cca */
  goto L_10ac7cca;
L_10ac7b6f:;
  /* 10ac7b6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7b72 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7b76 jne 0x10ac7b80 */
  if (!C.zf) goto L_10ac7b80;
  /* 10ac7b78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7b7b jmp 0x10ac7cca */
  goto L_10ac7cca;
L_10ac7b80:;
  /* 10ac7b80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7b83 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ac7b86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac7b89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7b8c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10ac7b8f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ac7b92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7b95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7b98 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10ac7b9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7b9e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7ba2 jne 0x10ac7ca7 */
  if (!C.zf) goto L_10ac7ca7;
  /* 10ac7ba8 mov eax, dword ptr [0x10aedc78] */
  EAX = (r32((uint32_t)(0x10aedc78)));
  /* 10ac7bad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ac7bb0 jmp 0x10ac7bbb */
  goto L_10ac7bbb;
L_10ac7bb2:;
  /* 10ac7bb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac7bb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7bb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10ac7bbb:;
  /* 10ac7bbb mov edx, dword ptr [0x10aedc78] */
  EDX = (r32((uint32_t)(0x10aedc78)));
  /* 10ac7bc1 add edx, dword ptr [0x10aedc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10aedc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7bc7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7bca jge 0x10ac7be2 */
  if ((C.sf==C.of)) goto L_10ac7be2;
  /* 10ac7bcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac7bcf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac7bd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7bd5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10ac7bd8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10ac7be0 jmp 0x10ac7bb2 */
  goto L_10ac7bb2;
L_10ac7be2:;
  /* 10ac7be2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7be5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10ac7be8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ac7beb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7bee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7bf4 jne 0x10ac7c05 */
  if (!C.zf) goto L_10ac7c05;
  /* 10ac7bf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7bf9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10ac7c00 jmp 0x10ac7c8d */
  goto L_10ac7c8d;
L_10ac7c05:;
  /* 10ac7c05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7c08 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7c0e jne 0x10ac7c1c */
  if (!C.zf) goto L_10ac7c1c;
  /* 10ac7c10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7c13 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10ac7c1a jmp 0x10ac7c8d */
  goto L_10ac7c8d;
L_10ac7c1c:;
  /* 10ac7c1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7c1f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7c25 jne 0x10ac7c33 */
  if (!C.zf) goto L_10ac7c33;
  /* 10ac7c27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7c2a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10ac7c31 jmp 0x10ac7c8d */
  goto L_10ac7c8d;
L_10ac7c33:;
  /* 10ac7c33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7c36 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7c3c jne 0x10ac7c4a */
  if (!C.zf) goto L_10ac7c4a;
  /* 10ac7c3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7c41 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10ac7c48 jmp 0x10ac7c8d */
  goto L_10ac7c8d;
L_10ac7c4a:;
  /* 10ac7c4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7c4d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7c53 jne 0x10ac7c61 */
  if (!C.zf) goto L_10ac7c61;
  /* 10ac7c55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7c58 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10ac7c5f jmp 0x10ac7c8d */
  goto L_10ac7c8d;
L_10ac7c61:;
  /* 10ac7c61 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7c64 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7c6a jne 0x10ac7c78 */
  if (!C.zf) goto L_10ac7c78;
  /* 10ac7c6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7c6f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10ac7c76 jmp 0x10ac7c8d */
  goto L_10ac7c8d;
L_10ac7c78:;
  /* 10ac7c78 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7c7b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7c81 jne 0x10ac7c8d */
  if (!C.zf) goto L_10ac7c8d;
  /* 10ac7c83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7c86 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10ac7c8d:;
  /* 10ac7c8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7c90 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10ac7c93 push edx */
  push32((uint32_t)(EDX));
  /* 10ac7c94 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ac7c96 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10ac7c99u);
  /* 10ac7c99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7c9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7c9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac7ca2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10ac7ca5 jmp 0x10ac7cbe */
  goto L_10ac7cbe;
L_10ac7ca7:;
  /* 10ac7ca7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7caa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10ac7cb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac7cb4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac7cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7cb8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10ac7cbbu);
  /* 10ac7cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac7cbe:;
  /* 10ac7cbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7cc1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac7cc4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10ac7cc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ac7cca:;
  /* 10ac7cca mov esp, ebp */
  ESP = (EBP);
  /* 10ac7ccc pop ebp */
  EBP = (pop32());
  /* 10ac7ccd ret  */
  ESPCHK(0x10ac7b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cd0 @ 0x10ac7cd0 (89 bytes, 35 insns) */
void f_10ac7cd0(void) {
  FTRACE(0x10ac7cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7cd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7cd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ac7cda:;
  /* 10ac7cda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7cdd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac7cdf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7ce2 je 0x10ac7d02 */
  if (C.zf) goto L_10ac7d02;
  /* 10ac7ce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7ce7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7cea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac7ced mov ecx, dword ptr [0x10aedc84] */
  ECX = (r32((uint32_t)(0x10aedc84)));
  /* 10ac7cf3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac7cf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7cf9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7cfb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7cfe jae 0x10ac7d02 */
  if (!C.cf) goto L_10ac7d02;
  /* 10ac7d00 jmp 0x10ac7cda */
  goto L_10ac7cda;
L_10ac7d02:;
  /* 10ac7d02 mov eax, dword ptr [0x10aedc84] */
  EAX = (r32((uint32_t)(0x10aedc84)));
  /* 10ac7d07 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac7d0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7d0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7d0f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7d12 jae 0x10ac7d1e */
  if (!C.cf) goto L_10ac7d1e;
  /* 10ac7d14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7d17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac7d19 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7d1c je 0x10ac7d22 */
  if (C.zf) goto L_10ac7d22;
L_10ac7d1e:;
  /* 10ac7d1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7d20 jmp 0x10ac7d25 */
  goto L_10ac7d25;
L_10ac7d22:;
  /* 10ac7d22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ac7d25:;
  /* 10ac7d25 mov esp, ebp */
  ESP = (EBP);
  /* 10ac7d27 pop ebp */
  EBP = (pop32());
  /* 10ac7d28 ret  */
  ESPCHK(0x10ac7cd0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10ac7d30 (48 bytes, 17 insns) */
void f_10ac7d30(void) {
  FTRACE(0x10ac7d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7d31 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7d34 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac7d36 call 0x10ac7a30 */
  push32(0x10ac7d3bu); f_10ac7a30();
  /* 10ac7d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7d3e mov eax, dword ptr [0x10aef7c4] */
  EAX = (r32((uint32_t)(0x10aef7c4)));
  /* 10ac7d43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac7d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7d49 mov dword ptr [0x10aef7c4], ecx */
  w32((uint32_t)(0x10aef7c4), (ECX));
  /* 10ac7d4f push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac7d51 call 0x10ac7ad0 */
  push32(0x10ac7d56u); f_10ac7ad0();
  /* 10ac7d56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7d59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7d5c mov esp, ebp */
  ESP = (EBP);
  /* 10ac7d5e pop ebp */
  EBP = (pop32());
  /* 10ac7d5f ret  */
  ESPCHK(0x10ac7d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d60 @ 0x10ac7d60 (10 bytes, 5 insns) */
void f_10ac7d60(void) {
  FTRACE(0x10ac7d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7d61 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7d63 mov eax, dword ptr [0x10aef7c4] */
  EAX = (r32((uint32_t)(0x10aef7c4)));
  /* 10ac7d68 pop ebp */
  EBP = (pop32());
  /* 10ac7d69 ret  */
  ESPCHK(0x10ac7d60u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10ac7d70 (45 bytes, 19 insns) */
void f_10ac7d70(void) {
  FTRACE(0x10ac7d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7d71 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7d74 mov eax, dword ptr [0x10aef7c4] */
  EAX = (r32((uint32_t)(0x10aef7c4)));
  /* 10ac7d79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac7d7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7d80 je 0x10ac7d90 */
  if (C.zf) goto L_10ac7d90;
  /* 10ac7d82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7d85 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7d86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10ac7d89u);
  /* 10ac7d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac7d8e jne 0x10ac7d94 */
  if (!C.zf) goto L_10ac7d94;
L_10ac7d90:;
  /* 10ac7d90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7d92 jmp 0x10ac7d99 */
  goto L_10ac7d99;
L_10ac7d94:;
  /* 10ac7d94 mov eax, 1 */
  EAX = (0x1u);
L_10ac7d99:;
  /* 10ac7d99 mov esp, ebp */
  ESP = (EBP);
  /* 10ac7d9b pop ebp */
  EBP = (pop32());
  /* 10ac7d9c ret  */
  ESPCHK(0x10ac7d70u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10ac7da0 (88 bytes, 40 insns) */
void f_10ac7da0(void) {
  FTRACE(0x10ac7da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7da0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ac7da4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ac7da8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac7daa je 0x10ac7df3 */
  if (C.zf) goto L_10ac7df3;
  /* 10ac7dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7dae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10ac7db2 push edi */
  push32((uint32_t)(EDI));
  /* 10ac7db3 mov edi, ecx */
  EDI = (ECX);
  /* 10ac7db5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7db8 jb 0x10ac7de7 */
  if (C.cf) goto L_10ac7de7;
  /* 10ac7dba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ac7dbc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac7dbf je 0x10ac7dc9 */
  if (C.zf) goto L_10ac7dc9;
  /* 10ac7dc1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10ac7dc3:;
  /* 10ac7dc3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ac7dc5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ac7dc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10ac7dc7 jne 0x10ac7dc3 */
  if (!C.zf) goto L_10ac7dc3;
L_10ac7dc9:;
  /* 10ac7dc9 mov ecx, eax */
  ECX = (EAX);
  /* 10ac7dcb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ac7dce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7dd0 mov ecx, eax */
  ECX = (EAX);
  /* 10ac7dd2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ac7dd5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7dd7 mov ecx, edx */
  ECX = (EDX);
  /* 10ac7dd9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac7ddc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ac7ddf je 0x10ac7de7 */
  if (C.zf) goto L_10ac7de7;
  /* 10ac7de1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ac7de3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac7de5 je 0x10ac7ded */
  if (C.zf) goto L_10ac7ded;
L_10ac7de7:;
  /* 10ac7de7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ac7de9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ac7dea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10ac7deb jne 0x10ac7de7 */
  if (!C.zf) goto L_10ac7de7;
L_10ac7ded:;
  /* 10ac7ded mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ac7df1 pop edi */
  EDI = (pop32());
  /* 10ac7df2 ret  */
  ESPCHK(0x10ac7da0u, _esp0);
  ESP += 4; return;
L_10ac7df3:;
  /* 10ac7df3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ac7df7 ret  */
  ESPCHK(0x10ac7da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x10ac7e00 (23 bytes, 10 insns) */
void f_10ac7e00(void) {
  FTRACE(0x10ac7e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7e01 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7e03 mov eax, dword ptr [0x10aef7c0] */
  EAX = (r32((uint32_t)(0x10aef7c0)));
  /* 10ac7e08 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7e09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7e0c push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7e0d call 0x10ac7e20 */
  push32(0x10ac7e12u); f_10ac7e20();
  /* 10ac7e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7e15 pop ebp */
  EBP = (pop32());
  /* 10ac7e16 ret  */
  ESPCHK(0x10ac7e00u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10ac7e20 (87 bytes, 34 insns) */
void f_10ac7e20(void) {
  FTRACE(0x10ac7e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7e21 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7e23 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7e24 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7e28 jbe 0x10ac7e2e */
  if ((C.cf||C.zf)) goto L_10ac7e2e;
  /* 10ac7e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7e2c jmp 0x10ac7e73 */
  goto L_10ac7e73;
L_10ac7e2e:;
  /* 10ac7e2e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7e32 ja 0x10ac7e45 */
  if ((!C.cf&&!C.zf)) goto L_10ac7e45;
  /* 10ac7e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7e37 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7e38 call 0x10ac7e80 */
  push32(0x10ac7e3du); f_10ac7e80();
  /* 10ac7e3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7e40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac7e43 jmp 0x10ac7e4c */
  goto L_10ac7e4c;
L_10ac7e45:;
  /* 10ac7e45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ac7e4c:;
  /* 10ac7e4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7e50 jne 0x10ac7e58 */
  if (!C.zf) goto L_10ac7e58;
  /* 10ac7e52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7e56 jne 0x10ac7e5d */
  if (!C.zf) goto L_10ac7e5d;
L_10ac7e58:;
  /* 10ac7e58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7e5b jmp 0x10ac7e73 */
  goto L_10ac7e73;
L_10ac7e5d:;
  /* 10ac7e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7e60 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7e61 call 0x10ac7d70 */
  push32(0x10ac7e66u); f_10ac7d70();
  /* 10ac7e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7e69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac7e6b jne 0x10ac7e71 */
  if (!C.zf) goto L_10ac7e71;
  /* 10ac7e6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7e6f jmp 0x10ac7e73 */
  goto L_10ac7e73;
L_10ac7e71:;
  /* 10ac7e71 jmp 0x10ac7e2e */
  goto L_10ac7e2e;
L_10ac7e73:;
  /* 10ac7e73 mov esp, ebp */
  ESP = (EBP);
  /* 10ac7e75 pop ebp */
  EBP = (pop32());
  /* 10ac7e76 ret  */
  ESPCHK(0x10ac7e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10ac7e80 (109 bytes, 37 insns) */
void f_10ac7e80(void) {
  FTRACE(0x10ac7e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7e81 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7e87 cmp eax, dword ptr [0x10aedc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aedc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7e8d ja 0x10ac7ebd */
  if ((!C.cf&&!C.zf)) goto L_10ac7ebd;
  /* 10ac7e8f push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac7e91 call 0x10ac7a30 */
  push32(0x10ac7e96u); f_10ac7a30();
  /* 10ac7e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7e99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7e9c push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7e9d call 0x10ac89c0 */
  push32(0x10ac7ea2u); f_10ac89c0();
  /* 10ac7ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7ea5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac7ea8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac7eaa call 0x10ac7ad0 */
  push32(0x10ac7eafu); f_10ac7ad0();
  /* 10ac7eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7eb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7eb6 je 0x10ac7ebd */
  if (C.zf) goto L_10ac7ebd;
  /* 10ac7eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7ebb jmp 0x10ac7ee9 */
  goto L_10ac7ee9;
L_10ac7ebd:;
  /* 10ac7ebd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7ec1 jne 0x10ac7eca */
  if (!C.zf) goto L_10ac7eca;
  /* 10ac7ec3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10ac7eca:;
  /* 10ac7eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7ecd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7ed0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac7ed3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ac7ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7ed9 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7eda push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac7edc mov ecx, dword ptr [0x10af0f8c] */
  ECX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac7ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7ee3 call dword ptr [0x10af22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22e4))), 0x10ac7ee9u);
L_10ac7ee9:;
  /* 10ac7ee9 mov esp, ebp */
  ESP = (EBP);
  /* 10ac7eeb pop ebp */
  EBP = (pop32());
  /* 10ac7eec ret  */
  ESPCHK(0x10ac7e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef0 @ 0x10ac7ef0 (10 bytes, 5 insns) */
void f_10ac7ef0(void) {
  FTRACE(0x10ac7ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7ef3 mov eax, 1 */
  EAX = (0x1u);
  /* 10ac7ef8 pop ebp */
  EBP = (pop32());
  /* 10ac7ef9 ret  */
  ESPCHK(0x10ac7ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f00 @ 0x10ac7f00 (173 bytes, 59 insns) */
void f_10ac7f00(void) {
  FTRACE(0x10ac7f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7f01 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7f03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac7f06 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7f0a jbe 0x10ac7f13 */
  if ((C.cf||C.zf)) goto L_10ac7f13;
  /* 10ac7f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7f0e jmp 0x10ac7fa9 */
  goto L_10ac7fa9;
L_10ac7f13:;
  /* 10ac7f13 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac7f15 call 0x10ac7a30 */
  push32(0x10ac7f1au); f_10ac7a30();
  /* 10ac7f1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7f1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7f20 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7f21 call 0x10ac8330 */
  push32(0x10ac7f26u); f_10ac8330();
  /* 10ac7f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7f29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac7f2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7f30 je 0x10ac7f71 */
  if (C.zf) goto L_10ac7f71;
  /* 10ac7f32 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ac7f39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7f3c cmp ecx, dword ptr [0x10aedc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10aedc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7f42 ja 0x10ac7f62 */
  if ((!C.cf&&!C.zf)) goto L_10ac7f62;
  /* 10ac7f44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7f47 push edx */
  push32((uint32_t)(EDX));
  /* 10ac7f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7f4b push eax */
  push32((uint32_t)(EAX));
  /* 10ac7f4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac7f4f push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7f50 call 0x10ac9200 */
  push32(0x10ac7f55u); f_10ac9200();
  /* 10ac7f55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7f58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac7f5a je 0x10ac7f62 */
  if (C.zf) goto L_10ac7f62;
  /* 10ac7f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7f5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ac7f62:;
  /* 10ac7f62 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac7f64 call 0x10ac7ad0 */
  push32(0x10ac7f69u); f_10ac7ad0();
  /* 10ac7f69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7f6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac7f6f jmp 0x10ac7fa9 */
  goto L_10ac7fa9;
L_10ac7f71:;
  /* 10ac7f71 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac7f73 call 0x10ac7ad0 */
  push32(0x10ac7f78u); f_10ac7ad0();
  /* 10ac7f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7f7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7f7f jne 0x10ac7f88 */
  if (!C.zf) goto L_10ac7f88;
  /* 10ac7f81 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10ac7f88:;
  /* 10ac7f88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7f8b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7f8e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10ac7f90 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10ac7f93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7f96 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7f97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7f9a push edx */
  push32((uint32_t)(EDX));
  /* 10ac7f9b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10ac7f9d mov eax, dword ptr [0x10af0f8c] */
  EAX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac7fa2 push eax */
  push32((uint32_t)(EAX));
  /* 10ac7fa3 call dword ptr [0x10af2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2340))), 0x10ac7fa9u);
L_10ac7fa9:;
  /* 10ac7fa9 mov esp, ebp */
  ESP = (EBP);
  /* 10ac7fab pop ebp */
  EBP = (pop32());
  /* 10ac7fac ret  */
  ESPCHK(0x10ac7f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x10ac7fb0 (490 bytes, 165 insns) */
void f_10ac7fb0(void) {
  FTRACE(0x10ac7fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac7fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac7fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac7fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac7fb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7fba jne 0x10ac7fcd */
  if (!C.zf) goto L_10ac7fcd;
  /* 10ac7fbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac7fbf push eax */
  push32((uint32_t)(EAX));
  /* 10ac7fc0 call 0x10ac7e00 */
  push32(0x10ac7fc5u); f_10ac7e00();
  /* 10ac7fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7fc8 jmp 0x10ac8196 */
  goto L_10ac8196;
L_10ac7fcd:;
  /* 10ac7fcd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7fd1 jne 0x10ac7fe6 */
  if (!C.zf) goto L_10ac7fe6;
  /* 10ac7fd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac7fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac7fd7 call 0x10ac81a0 */
  push32(0x10ac7fdcu); f_10ac81a0();
  /* 10ac7fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac7fdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac7fe1 jmp 0x10ac8196 */
  goto L_10ac8196;
L_10ac7fe6:;
  /* 10ac7fe6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ac7fed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac7ff1 ja 0x10ac8169 */
  if ((!C.cf&&!C.zf)) goto L_10ac8169;
  /* 10ac7ff7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac7ff9 call 0x10ac7a30 */
  push32(0x10ac7ffeu); f_10ac7a30();
  /* 10ac7ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8001 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8004 push edx */
  push32((uint32_t)(EDX));
  /* 10ac8005 call 0x10ac8330 */
  push32(0x10ac800au); f_10ac8330();
  /* 10ac800a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac800d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac8010 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8014 je 0x10ac812c */
  if (C.zf) goto L_10ac812c;
  /* 10ac801a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac801d cmp eax, dword ptr [0x10aedc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aedc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8023 ja 0x10ac80a0 */
  if ((!C.cf&&!C.zf)) goto L_10ac80a0;
  /* 10ac8025 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac8028 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac802c push edx */
  push32((uint32_t)(EDX));
  /* 10ac802d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac8030 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8031 call 0x10ac9200 */
  push32(0x10ac8036u); f_10ac9200();
  /* 10ac8036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac803b je 0x10ac8045 */
  if (C.zf) goto L_10ac8045;
  /* 10ac803d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8040 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ac8043 jmp 0x10ac80a0 */
  goto L_10ac80a0;
L_10ac8045:;
  /* 10ac8045 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac8048 push edx */
  push32((uint32_t)(EDX));
  /* 10ac8049 call 0x10ac89c0 */
  push32(0x10ac804eu); f_10ac89c0();
  /* 10ac804e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8051 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac8054 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8058 je 0x10ac80a0 */
  if (C.zf) goto L_10ac80a0;
  /* 10ac805a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac805d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10ac8060 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8063 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac8066 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8069 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac806c jae 0x10ac8076 */
  if (!C.cf) goto L_10ac8076;
  /* 10ac806e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8071 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ac8074 jmp 0x10ac807c */
  goto L_10ac807c;
L_10ac8076:;
  /* 10ac8076 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac8079 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ac807c:;
  /* 10ac807c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac807f push edx */
  push32((uint32_t)(EDX));
  /* 10ac8080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8083 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8084 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8087 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8088 call 0x10aca910 */
  push32(0x10ac808du); f_10aca910();
  /* 10ac808d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8093 push edx */
  push32((uint32_t)(EDX));
  /* 10ac8094 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac8097 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8098 call 0x10ac83f0 */
  push32(0x10ac809du); f_10ac83f0();
  /* 10ac809d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac80a0:;
  /* 10ac80a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac80a4 jne 0x10ac8120 */
  if (!C.zf) goto L_10ac8120;
  /* 10ac80a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac80aa jne 0x10ac80b3 */
  if (!C.zf) goto L_10ac80b3;
  /* 10ac80ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10ac80b3:;
  /* 10ac80b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac80b6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac80b9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac80bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ac80bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac80c2 push edx */
  push32((uint32_t)(EDX));
  /* 10ac80c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac80c5 mov eax, dword ptr [0x10af0f8c] */
  EAX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac80ca push eax */
  push32((uint32_t)(EAX));
  /* 10ac80cb call dword ptr [0x10af22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22e4))), 0x10ac80d1u);
  /* 10ac80d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac80d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac80d8 je 0x10ac8120 */
  if (C.zf) goto L_10ac8120;
  /* 10ac80da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac80dd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ac80e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac80e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac80e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac80e9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac80ec jae 0x10ac80f6 */
  if (!C.cf) goto L_10ac80f6;
  /* 10ac80ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac80f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ac80f4 jmp 0x10ac80fc */
  goto L_10ac80fc;
L_10ac80f6:;
  /* 10ac80f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac80f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ac80fc:;
  /* 10ac80fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac80ff push eax */
  push32((uint32_t)(EAX));
  /* 10ac8100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8103 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8104 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8107 push edx */
  push32((uint32_t)(EDX));
  /* 10ac8108 call 0x10aca910 */
  push32(0x10ac810du); f_10aca910();
  /* 10ac810d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8113 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8114 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac8117 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8118 call 0x10ac83f0 */
  push32(0x10ac811du); f_10ac83f0();
  /* 10ac811d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ac8120:;
  /* 10ac8120 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac8122 call 0x10ac7ad0 */
  push32(0x10ac8127u); f_10ac7ad0();
  /* 10ac8127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac812a jmp 0x10ac8169 */
  goto L_10ac8169;
L_10ac812c:;
  /* 10ac812c push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac812e call 0x10ac7ad0 */
  push32(0x10ac8133u); f_10ac7ad0();
  /* 10ac8133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8136 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac813a jne 0x10ac8143 */
  if (!C.zf) goto L_10ac8143;
  /* 10ac813c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10ac8143:;
  /* 10ac8143 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac8146 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8149 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac814c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10ac814f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac8152 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8156 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8157 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac8159 mov edx, dword ptr [0x10af0f8c] */
  EDX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac815f push edx */
  push32((uint32_t)(EDX));
  /* 10ac8160 call dword ptr [0x10af2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2340))), 0x10ac8166u);
  /* 10ac8166 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ac8169:;
  /* 10ac8169 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac816d jne 0x10ac8178 */
  if (!C.zf) goto L_10ac8178;
  /* 10ac816f cmp dword ptr [0x10aef7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8176 jne 0x10ac817d */
  if (!C.zf) goto L_10ac817d;
L_10ac8178:;
  /* 10ac8178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac817b jmp 0x10ac8196 */
  goto L_10ac8196;
L_10ac817d:;
  /* 10ac817d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac8180 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8181 call 0x10ac7d70 */
  push32(0x10ac8186u); f_10ac7d70();
  /* 10ac8186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac818b jne 0x10ac8191 */
  if (!C.zf) goto L_10ac8191;
  /* 10ac818d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac818f jmp 0x10ac8196 */
  goto L_10ac8196;
L_10ac8191:;
  /* 10ac8191 jmp 0x10ac7fe6 */
  goto L_10ac7fe6;
L_10ac8196:;
  /* 10ac8196 mov esp, ebp */
  ESP = (EBP);
  /* 10ac8198 pop ebp */
  EBP = (pop32());
  /* 10ac8199 ret  */
  ESPCHK(0x10ac7fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081a0 @ 0x10ac81a0 (104 bytes, 38 insns) */
void f_10ac81a0(void) {
  FTRACE(0x10ac81a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac81a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac81a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac81a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac81a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac81a8 jne 0x10ac81ac */
  if (!C.zf) goto L_10ac81ac;
  /* 10ac81aa jmp 0x10ac8204 */
  goto L_10ac8204;
L_10ac81ac:;
  /* 10ac81ac push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac81ae call 0x10ac7a30 */
  push32(0x10ac81b3u); f_10ac7a30();
  /* 10ac81b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac81b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac81b9 push eax */
  push32((uint32_t)(EAX));
  /* 10ac81ba call 0x10ac8330 */
  push32(0x10ac81bfu); f_10ac8330();
  /* 10ac81bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac81c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac81c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac81c9 je 0x10ac81e7 */
  if (C.zf) goto L_10ac81e7;
  /* 10ac81cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac81ce push ecx */
  push32((uint32_t)(ECX));
  /* 10ac81cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac81d2 push edx */
  push32((uint32_t)(EDX));
  /* 10ac81d3 call 0x10ac83f0 */
  push32(0x10ac81d8u); f_10ac83f0();
  /* 10ac81d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac81db push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac81dd call 0x10ac7ad0 */
  push32(0x10ac81e2u); f_10ac7ad0();
  /* 10ac81e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac81e5 jmp 0x10ac8204 */
  goto L_10ac8204;
L_10ac81e7:;
  /* 10ac81e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac81e9 call 0x10ac7ad0 */
  push32(0x10ac81eeu); f_10ac7ad0();
  /* 10ac81ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac81f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac81f4 push eax */
  push32((uint32_t)(EAX));
  /* 10ac81f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac81f7 mov ecx, dword ptr [0x10af0f8c] */
  ECX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac81fd push ecx */
  push32((uint32_t)(ECX));
  /* 10ac81fe call dword ptr [0x10af2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2378))), 0x10ac8204u);
L_10ac8204:;
  /* 10ac8204 mov esp, ebp */
  ESP = (EBP);
  /* 10ac8206 pop ebp */
  EBP = (pop32());
  /* 10ac8207 ret  */
  ESPCHK(0x10ac81a0u, _esp0);
  ESP += 4; return;
}

